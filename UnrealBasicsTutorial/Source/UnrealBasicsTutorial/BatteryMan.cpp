// Fill out your copyright notice in the Description page of Project Settings.

#include "BatteryMan.h"

// Sets default values
ABatteryMan::ABatteryMan()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GetCapsuleComponent()->InitCapsuleSize(42.0f, 96.0f);

	bUseControllerRotationPitch = false;
	//si vrai, le perso se tourne en m�me temps que les mouvements de camera 
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	//Fais tourner le personnage selon ses mouvements, si false le perso regarde toujours vers l'avant 
	//mais on peut quand m�me bouger dans toutes les directions le perso, juste la rota reste la m�me 
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f);
	GetCharacterMovement()->JumpZVelocity = 600.0f;
	GetCharacterMovement()->AirControl = 0.2f;

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.0f;
	CameraBoom->bUsePawnControlRotation = true;
	
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false;

	bDead = false;
	Power = 100.0f;
}

// Called when the game starts or when spawned
void ABatteryMan::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("begin play log"));
	
	//Fonction evenementielle (je crois, une sorte de delegate) qui est appel�e lors d'une collision 
	GetCapsuleComponent()->OnComponentBeginOverlap.AddDynamic(this, &ABatteryMan::OnBeginOverlap);

	//On v�rifie que y a bien une UI dans le champ EditableAnywhere (serializ� ?) du BP du player, pour �viter les erreurs ofc
	if (Player_Power_Widget_Class != nullptr)
	{
		//On cr�e depuis le monde un widget bas� sur la classe 
		Player_Power_Widget = CreateWidget(GetWorld(), Player_Power_Widget_Class);
		//Et on l'ajoute au viewport 
		Player_Power_Widget->AddToViewport();
	}
}

// Called every frame
void ABatteryMan::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABatteryMan::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAxis("MoveForward", this, &ABatteryMan::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ABatteryMan::MoveRight);
}

void ABatteryMan::MoveForward(float Axis)
{
	if (!bDead) {
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Axis);
	}
}

void ABatteryMan::MoveRight(float Axis)
{
	if (!bDead) {
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		AddMovementInput(Direction, Axis);
	}
}

void ABatteryMan::OnBeginOverlap(UPrimitiveComponent * HitComp, 
	AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, 
	bool bFromSweep, const FHitResult & SweepResult)
{
	if (OtherActor->ActorHasTag("Recharge")) {
		//J'entre bien dans la fonction ? 
		UE_LOG(LogTemp, Warning, TEXT("collided with"));

		//On augmente le pouvoir ofc
		Power += 10.0f;
		if (Power > 100.0f)
			Power = 100.0f;

		//Destruction de l'autre Actor touch� 
		OtherActor->Destroy();
	}
}

