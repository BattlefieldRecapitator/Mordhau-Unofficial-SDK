

#include "MordhauActor.h"
#include "MordhauSceneComponent.h"
#include "Components/WidgetInteractionComponent.h"


// Sets default values
AMordhauActor::AMordhauActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//RootSceneComponent = CreateDefaultSubobject<UMordhauSceneComponent>(TEXT("RootSceneComponent"));
	//RootComponent = RootSceneComponent;
	 
}

// Called when the game starts or when spawned
void AMordhauActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMordhauActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool AMordhauActor::CanInteract(AMordhauCharacter * Character)
{
	return false;
}

bool AMordhauActor::CanHeldInteract(AMordhauCharacter * Character)
{
	return false;
}


bool AMordhauActor::CanInteractPassively(ACharacter * Character)
{
	return false;
}

void AMordhauActor::HeldInteractionStart(ACharacter * Character)
{
}

void AMordhauActor::Highlight()
{
}

void AMordhauActor::InteractionEnd()
{
}

void AMordhauActor::InteractionStart(ACharacter * Character)
{
}

void AMordhauActor::InteractPassively(ACharacter * Character)
{
}

void AMordhauActor::OnHightlightEnd()
{
}

void AMordhauActor::OnHightlightStart()
{
}

void AMordhauActor::OnInteractPassively(AMordhauCharacter * Character)
{
}














