#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BI_SpawnTarget.BI_SpawnTarget_C
class UBI_SpawnTarget_C : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UBI_SpawnTarget_C* GetDefaultObj();

	void SetAsSpawnTarget(bool IsSpawnTarget);
	void GetTargetReference(class UActor** Reference);
};

}


