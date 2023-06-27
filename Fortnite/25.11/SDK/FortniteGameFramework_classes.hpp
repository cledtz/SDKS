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

// 0x60 (0x6C0 - 0x660)
// Class FortniteGameFramework.FGF_Character
class AFGF_Character : public ACharacter
{
public:
	uint8                                        Pad_21C5[0x60];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FGF_Character");
		return Clss;
	}

};

// 0x58 (0x3C8 - 0x370)
// Class FortniteGameFramework.FGF_GameMode
class AFGF_GameMode : public AGameMode
{
public:
	uint8                                        Pad_21C6[0x58];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FGF_GameMode");
		return Clss;
	}

};

// 0x60 (0x358 - 0x2F8)
// Class FortniteGameFramework.FGF_GameState
class AFGF_GameState : public AGameState
{
public:
	uint8                                        Pad_21C7[0x60];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FGF_GameState");
		return Clss;
	}

};

// 0x58 (0x8A0 - 0x848)
// Class FortniteGameFramework.FGF_PlayerController
class AFGF_PlayerController : public APlayerController
{
public:
	uint8                                        Pad_21C8[0x58];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FGF_PlayerController");
		return Clss;
	}

};

// 0x58 (0x398 - 0x340)
// Class FortniteGameFramework.FGF_PlayerState
class AFGF_PlayerState : public APlayerState
{
public:
	uint8                                        Pad_21C9[0x58];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FGF_PlayerState");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class FortniteGameFramework.ObjectBasedStateTreeSchema
class UObjectBasedStateTreeSchema : public UStateTreeSchema
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ObjectBasedStateTreeSchema");
		return Clss;
	}

};

// 0x140 (0x1E0 - 0xA0)
// Class FortniteGameFramework.StateTreeManagerComponent
class UStateTreeManagerComponent : public UActorComponent
{
public:
	TArray<struct FStateTreeRuntimeData>         StateTreeRuntimeDataList;                          // 0xA0(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<struct FStateTreeClientSimulationData> SimulatedDataList;                                 // 0xB0(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	struct FStateChangeDataArray                 ReplicatedStateChanges;                            // 0xC0(0x120)(Net, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("StateTreeManagerComponent");
		return Clss;
	}

};

// 0x8 (0x50 - 0x48)
// Class FortniteGameFramework.StateTreeTaskObject
class UStateTreeTaskObject : public UStateTreeTaskBlueprintBase
{
public:
	bool                                         bReplicates;                                       // 0x48(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_21CA[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("StateTreeTaskObject");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
