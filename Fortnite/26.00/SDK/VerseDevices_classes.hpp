#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x58 - 0x28)
// Class VerseDevices.VerseCreativePropAsset
class UVerseCreativePropAsset : public UObject
{
public:
	class FName                                  AssetPathName;                                     // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2CBF[0x4];                                     // Fixing Size After Last Property 
	class ULevelSaveRecord*                      LevelSaveRecord;                                   // 0x30(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UActor>                  ActorClass;                                        // 0x38(0x20)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UVerseCreativePropAsset* GetDefaultObj();

};

// 0x18 (0x1E8 - 0x1D0)
// Class VerseDevices.PlaylistUserOptionScript
class UPlaylistUserOptionScript : public UPlaylistUserOptionBase
{
public:
	TArray<struct FPlaylistOptionScriptValue>    OptionValues;                                      // 0x1D0(0x10)(Edit, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, NativeAccessSpecifierPublic)
	int32                                        DefaultValueIndex;                                 // 0x1E0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CC5[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UPlaylistUserOptionScript* GetDefaultObj();

};

// 0x28 (0xBE0 - 0xBB8)
// Class VerseDevices.ScriptDevice
class UScriptDevice : public UBuildingProp
{
public:
	class UVerseCreativeDevice*                  Script;                                            // 0xBB8(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, SaveGame, NoDestructor, Protected, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2CD7[0x8];                                     // Fixing Size After Last Property 
	class UVerseCreativeDevice*                  ScriptInstance;                                    // 0xBC8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2CD9[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UScriptDevice* GetDefaultObj();

	void SetEnabled(bool bInEnabled);
	void HandlePreMinigameStartedSetup();
	void HandleMinigameEndGame(class UFortPlayerController* PlayerController, enum class EFortMinigameEnd EndMethod, enum class EFortMinigameState NextState);
	void BP_SetVisibility(bool bVisible);
};

// 0x78 (0xA0 - 0x28)
// Class VerseDevices.VerseMovableObjectBase
class UVerseMovableObjectBase : public UObject
{
public:
	uint8                                        Pad_2CDD[0x78];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UVerseMovableObjectBase* GetDefaultObj();

};

// 0x10 (0xB0 - 0xA0)
// Class VerseDevices.VerseCreativeDevice
class UVerseCreativeDevice : public UVerseMovableObjectBase
{
public:
	uint8                                        Pad_2CE1[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UVerseCreativeDevice* GetDefaultObj();

};

// 0x18 (0xB8 - 0xA0)
// Class VerseDevices.VerseCreativeObject
class UVerseCreativeObject : public UVerseMovableObjectBase
{
public:
	class UBuildingActor*                        SavedActor;                                        // 0xA0(0x8)(Edit, ZeroConstructor, SaveGame, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CE4[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UVerseCreativeObject* GetDefaultObj();

};

// 0x18 (0xB8 - 0xA0)
// Class VerseDevices.VerseCreativeObjectQuotaHelperComponent
class UVerseCreativeObjectQuotaHelperComponent : public UActorComponent
{
public:
	uint8                                        Pad_2CEA[0x18];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UVerseCreativeObjectQuotaHelperComponent* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class VerseDevices.VerseDevicesFeatureAction_RegisterWrapperClasses
class UVerseDevicesFeatureAction_RegisterWrapperClasses : public UGameFeatureAction
{
public:
	TSoftObjectPtr<class UVerseDeviceWrapperClassMap> DeviceToWrapperClassMapAsset;                      // 0x28(0x20)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2CEC[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UVerseDevicesFeatureAction_RegisterWrapperClasses* GetDefaultObj();

};

// 0x50 (0x80 - 0x30)
// Class VerseDevices.VerseDeviceWrapperClassMap
class UVerseDeviceWrapperClassMap : public UDataAsset
{
public:
	TMap<TSoftClassPtr<class UActor>, TSubclassOf<class UVerseCreativeObject>> DeviceClassMap;                                    // 0x30(0x50)(Edit, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UVerseDeviceWrapperClassMap* GetDefaultObj();

};

// 0x50 (0x80 - 0x30)
// Class VerseDevices.VerseDeviceWrapperClassMapSubsystem
class UVerseDeviceWrapperClassMapSubsystem : public UWorldSubsystem
{
public:
	TMap<TSoftClassPtr<class UActor>, TSubclassOf<class UObject>> DeviceClassToVerseClassMap;                        // 0x30(0x50)(Transient, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UVerseDeviceWrapperClassMapSubsystem* GetDefaultObj();

};

}


