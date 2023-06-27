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

// 0x8 (0x68 - 0x60)
// Class VerseFortniteInternal.BuildingActorEntityInteropComponent
class UBuildingActorEntityInteropComponent : public UEntityComponent
{
public:
	uint8                                        Pad_3877[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BuildingActorEntityInteropComponent");
		return Clss;
	}

};

// 0x0 (0x90 - 0x90)
// Class VerseFortniteInternal.VerseFortniteMovementComponentBase
class UVerseFortniteMovementComponentBase : public UEntityActorComponent
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseFortniteMovementComponentBase");
		return Clss;
	}

};

// 0x0 (0xA0 - 0xA0)
// Class VerseFortniteInternal.FortControllerStateHandlerComponent
class UFortControllerStateHandlerComponent : public UControllerComponent
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortControllerStateHandlerComponent");
		return Clss;
	}

	void NotifyOfStateChange(class FString* State, bool Active);
};

// 0x18 (0x348 - 0x330)
// Class VerseFortniteInternal.FortAthenaMutator_BuildingSettings
class AFortAthenaMutator_BuildingSettings : public AFortAthenaMutator
{
public:
	uint8                                        Pad_3879[0x18];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaMutator_BuildingSettings");
		return Clss;
	}

};

// 0x10 (0x90 - 0x80)
// Class VerseFortniteInternal.FortBuildingSettingsComponentBase
class UFortBuildingSettingsComponentBase : public UEntityEnableableComponent
{
public:
	class AFortAthenaMutator_BuildingSettings*   Mutator;                                           // 0x80(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EPlayerSettingStateInternal       Building;                                          // 0x88(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EPlayerSettingStateInternal       BuildingOnWater;                                   // 0x89(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EPlayerSettingStateInternal       Editing;                                           // 0x8A(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EPlayerSettingStateInternal       EditingHostile;                                    // 0x8B(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EPlayerSettingStateInternal       TrapPlacement;                                     // 0x8C(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_387A[0x3];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBuildingSettingsComponentBase");
		return Clss;
	}

	void OnRep_Settings();
};

// 0x8 (0x30 - 0x28)
// Class VerseFortniteInternal.FortPlayspaceComponentHelper
class UFortPlayspaceComponentHelper : public UObject
{
public:
	uint8                                        Pad_387B[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortPlayspaceComponentHelper");
		return Clss;
	}

	void HandlePlayerPawnPossessed(class APawn* Pawn);
	void HandlePlayerDied(class AFortPlayerPawnAthena* FortPlayerPawnAthena);
};

// 0x10 (0x40 - 0x30)
// Class VerseFortniteInternal.VerseFortniteEntitySubsystem
class UVerseFortniteEntitySubsystem : public UWorldSubsystem
{
public:
	uint8                                        Pad_387C[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseFortniteEntitySubsystem");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
