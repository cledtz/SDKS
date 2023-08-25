#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class DeployableTurretGameplayRuntime.DeployableTurretLibrary
class UDeployableTurretLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UDeployableTurretLibrary* GetDefaultObj();

	void FireAnalyticsEvent_DeployableTurretSessionEnd(class UObject* WorldContextObject, struct FUniqueNetIdRepl& TurretOwnerAccountId, TArray<struct FFortAnalyticsEventAttribute>& Attributes);
	float CalculateTargetingLaserScale(class UActor* TurretActor, struct FTransform& CurrentTurretAimTransform, struct FVector& LaserOrigin, float MaxLaserRange, float DistMult);
};

}


