#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x60 - 0x58)
// Class VerseFortniteInternal.BuildingActorEntityInteropComponent
class UBuildingActorEntityInteropComponent : public UEntityComponent
{
public:
	uint8                                        Pad_2CF1[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UBuildingActorEntityInteropComponent* GetDefaultObj();

};

// 0x0 (0x88 - 0x88)
// Class VerseFortniteInternal.VerseFortniteMovementComponentBase
class UVerseFortniteMovementComponentBase : public UEntityActorComponent
{
public:

	static class UClass* StaticClass();
	static class UVerseFortniteMovementComponentBase* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class VerseFortniteInternal.FortControllerStateHandlerComponent
class UFortControllerStateHandlerComponent : public UControllerComponent
{
public:

	static class UClass* StaticClass();
	static class UFortControllerStateHandlerComponent* GetDefaultObj();

	void NotifyOfStateChange(class FString* State, bool Active);
};

// 0x18 (0x350 - 0x338)
// Class VerseFortniteInternal.FortAthenaMutator_BuildingSettings
class UFortAthenaMutator_BuildingSettings : public UFortAthenaMutator
{
public:
	uint8                                        Pad_2CFD[0x18];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaMutator_BuildingSettings* GetDefaultObj();

};

// 0x10 (0x88 - 0x78)
// Class VerseFortniteInternal.FortBuildingSettingsComponentBase
class UFortBuildingSettingsComponentBase : public UEntityEnableableComponent
{
public:
	class UFortAthenaMutator_BuildingSettings*   Mutator;                                           // 0x78(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EPlayerSettingStateInternal       Building;                                          // 0x80(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EPlayerSettingStateInternal       BuildingOnWater;                                   // 0x81(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EPlayerSettingStateInternal       Editing;                                           // 0x82(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EPlayerSettingStateInternal       EditingHostile;                                    // 0x83(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EPlayerSettingStateInternal       TrapPlacement;                                     // 0x84(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2D09[0x3];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortBuildingSettingsComponentBase* GetDefaultObj();

	void OnRep_Settings();
};

// 0x8 (0x30 - 0x28)
// Class VerseFortniteInternal.FortPlayspaceComponentHelper
class UFortPlayspaceComponentHelper : public UObject
{
public:
	uint8                                        Pad_2D11[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortPlayspaceComponentHelper* GetDefaultObj();

	void HandlePlayerPawnPossessed(class UPawn* Pawn);
	void HandlePlayerDied(class UFortPlayerPawnAthena* FortPlayerPawnAthena);
};

// 0x10 (0x40 - 0x30)
// Class VerseFortniteInternal.VerseFortniteEntitySubsystem
class UVerseFortniteEntitySubsystem : public UWorldSubsystem
{
public:
	uint8                                        Pad_2D15[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UVerseFortniteEntitySubsystem* GetDefaultObj();

};

}


