#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass EnemyPawn_Interface.EnemyPawn_Interface_C
class UEnemyPawn_Interface_C : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UEnemyPawn_Interface_C* GetDefaultObj();

	void TriggerDeathFX();
	void Orphaned(bool* IsOrphaned, class UFortPawn** AttachedPawn);
};

}


