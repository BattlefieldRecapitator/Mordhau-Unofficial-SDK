// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MordhauCharacter.h"
#include "GameFramework/Actor.h"
#include "MordhauSceneComponent.h"
#include "Components/WidgetInteractionComponent.h"
#include "MordhauActor.generated.h"

class UMordhauWidgetComponent;

UCLASS()
class MORDHAU_API AMordhauActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMordhauActor();

	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//	UMordhauSceneComponent* RootSceneComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UMordhauWidgetComponent* InteractionWidgetComponent;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UClass* InteractionWidgetComponentClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UClass* InteractionWidgetClass;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	bool CanInteract(AMordhauCharacter* Character);

	bool CanHeldInteract(AMordhauCharacter* Character);	
	

	UFUNCTION(BlueprintCallable)
		bool CanInteractPassively(ACharacter* Character);

	UFUNCTION(BlueprintCallable)
		void HeldInteractionStart(ACharacter* Character);

	UFUNCTION(BlueprintCallable)
		void Highlight();

	UFUNCTION(BlueprintCallable)
		void InteractionEnd();

	UFUNCTION(BlueprintCallable)
		void InteractionStart(ACharacter* Character);

	UFUNCTION(BlueprintCallable)
		void InteractPassively(ACharacter* Character);

	UFUNCTION(BlueprintCallable)
		void OnHightlightEnd();
	
	UFUNCTION(BlueprintCallable)
		void OnHightlightStart();
	

	UFUNCTION(BlueprintCallable)
		void OnInteractPassively(AMordhauCharacter* Character);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bIsPassivelyInteractable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bIsInteractable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float MaxInteractWithDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float MaxInteractionHoldTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bIsHighlighted;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bPerformCustomDepthHighlight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bAutoDetermineWidgetTransform;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bNoInteractionWidgetWhenAttachedToChar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FText InteractionText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FText HeldInteractionText;



	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bSmoothNetworkMovement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float InterpolationSmoothTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UStruct* LastClientsideRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UStruct* LastClientsideLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float ReplayPriorityFactor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bForceRagdollOnDeath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float RagdollForceMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bReceiveCosmeticHits;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bForceLongDeathYell;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bIgnoresBleedOut;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UStruct* KillsStat;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bPreventClimbing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float NoThudUntilTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float MinDelayBetweenThuds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float ThudMaxVelocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float ThudMinVelocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bShouldReplicateThud;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UStruct* ThudVolumeMultiplierRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UStruct* ThudPitchMultiplierRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UObject* ThudSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		uint8 ReplicatedThud;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TWeakObjectPtr<UObject> InstanceOwner;

	UFUNCTION(BlueprintImplementableEvent)
		void OnInteractionStart(AMordhauCharacter* Character);

	UFUNCTION(BlueprintImplementableEvent)
		void OnHeldInteractionStart(AMordhauCharacter* Character);

	UFUNCTION(BlueprintImplementableEvent)
		void OnInteractionEnd(AMordhauCharacter* Character);



		



};
