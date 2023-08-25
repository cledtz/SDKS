#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x348 - 0x338)
// Class GameHubRuntime.GameHubBaseMutator
class UGameHubBaseMutator : public UFortAthenaMutator
{
public:
	uint8                                        Pad_43C3[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGameHubBaseMutator* GetDefaultObj();

};

// 0x20 (0xD0 - 0xB0)
// Class GameHubRuntime.GameHubPlayerSpawningComponent
class UGameHubPlayerSpawningComponent : public UPlayspaceComponent_PlayerSpawning
{
public:
	struct FGameplayTagContainer                 PlayerStartRequirements;                           // 0xB0(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGameHubPlayerSpawningComponent* GetDefaultObj();

};

// 0x28 (0x6C0 - 0x698)
// Class GameHubRuntime.GameHubPlayspace
class UGameHubPlayspace : public UFortPlayspace
{
public:
	bool                                         bSimulatePlayerDamage;                             // 0x698(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_43D7[0x7];                                     // Fixing Size After Last Property 
	struct FGameplayTagContainer                 PlayerStartRequirements;                           // 0x6A0(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGameHubPlayspace* GetDefaultObj();

};

}


