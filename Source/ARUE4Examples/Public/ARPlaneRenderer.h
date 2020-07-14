// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ProceduralMeshComponent.h"
#include "GameFramework/Actor.h"
#include "ARBlueprintLibrary.h"
#include "ARPlaneRenderer.generated.h"

UCLASS()
class ARUE4EXAMPLES_API AARPlaneRenderer : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AARPlaneRenderer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(Category = ARPlaneRenderer, EditAnywhere, BlueprintReadWrite)
		float EdgeFeatheringDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UMaterialInterface* PlaneMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FColor> PlaneColors;

private:
	void UpdatePlane(UARPlaneGeometry* ARCorePlaneObject);
	void UpdatePlaneMesh(UARPlaneGeometry* ARCorePlaneObject, UProceduralMeshComponent* PlanePolygonMeshComponent);

	void DrawPlanes();

	UPROPERTY()
		TMap<UARPlaneGeometry*, UProceduralMeshComponent*> PlaneMeshMap;

	int NewPlaneIndex;
};
