#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EGameFeatureTargetState : uint8
{
	Installed                      = 0,
	Registered                     = 1,
	Loaded                         = 2,
	Active                         = 3,
	Count                          = 4,
	EGameFeatureTargetState_MAX    = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x58 - 0x0)
// ScriptStruct GameFeatures.GameFeatureComponentEntry
struct FGameFeatureComponentEntry
{
public:
	TSoftClassPtr<class UActor>                  ActorClass;                                        // 0x0(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UActorComponent>         ComponentClass;                                    // 0x28(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bClientComponent : 1;                              // Mask: 0x1, PropSize: 0x10x50(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bServerComponent : 1;                              // Mask: 0x2, PropSize: 0x10x50(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1755[0x7];                                     // Fixing Size Of Struct
};

// 0x60 (0x60 - 0x0)
// ScriptStruct GameFeatures.DataRegistrySourceToAdd
struct FDataRegistrySourceToAdd
{
public:
	class FName                                  RegistryToAddTo;                                   // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AssetPriority;                                     // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bClientSource : 1;                                 // Mask: 0x1, PropSize: 0x10x8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bServerSource : 1;                                 // Mask: 0x2, PropSize: 0x10x8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_120 : 6;                                    // Fixing Bit-Field Size
	uint8                                        Pad_1758[0x7];                                     // Fixing Size After Last Property
	TSoftObjectPtr<class UDataTable>             DataTableToAdd;                                    // 0x10(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UCurveTable>            CurveTableToAdd;                                   // 0x38(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC8 (0xC8 - 0x0)
// ScriptStruct GameFeatures.GameFeaturePluginStateMachineProperties
struct FGameFeaturePluginStateMachineProperties
{
public:
	uint8                                        Pad_175D[0x88];                                    // Fixing Size After Last Property
	class UGameFeatureData*                      GameFeatureData;                                   // 0x88(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_175E[0x38];                                    // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GameFeatures.GameFeaturePluginIdentifier
struct FGameFeaturePluginIdentifier
{
public:
	uint8                                        Pad_1761[0x28];                                    // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GameFeatures.InstallBundlePluginProtocolMetaData
struct FInstallBundlePluginProtocolMetaData
{
public:
	uint8                                        Pad_1763[0x20];                                    // Fixing Size Of Struct
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
