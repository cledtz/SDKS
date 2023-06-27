#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x340 - 0x330)
// Class GameHubRuntime.GameHubBaseMutator
class AGameHubBaseMutator : public AFortAthenaMutator
{
public:
	uint8                                        Pad_1E3D[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameHubBaseMutator");
		return Clss;
	}

};

// 0x20 (0xD0 - 0xB0)
// Class GameHubRuntime.GameHubPlayerSpawningComponent
class UGameHubPlayerSpawningComponent : public UPlayspaceComponent_PlayerSpawning
{
public:
	struct FGameplayTagContainer                 PlayerStartRequirements;                           // 0xB0(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameHubPlayerSpawningComponent");
		return Clss;
	}

};

// 0x28 (0x6B8 - 0x690)
// Class GameHubRuntime.GameHubPlayspace
class AGameHubPlayspace : public AFortPlayspace
{
public:
	bool                                         bSimulatePlayerDamage;                             // 0x690(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1E3E[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 PlayerStartRequirements;                           // 0x698(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameHubPlayspace");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
