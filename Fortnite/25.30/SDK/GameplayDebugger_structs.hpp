#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EGameplayDebuggerOverrideMode : uint8
{
	Enable                         = 0,
	Disable                        = 1,
	UseDefault                     = 2,
	EGameplayDebuggerOverrideMode_MAX = 3,
};

enum class EGameplayDebuggerShape : uint8
{
	Invalid                        = 0,
	Point                          = 1,
	Segment                        = 2,
	Box                            = 3,
	Cone                           = 4,
	Cylinder                       = 5,
	Circle                         = 6,
	Rectangle                      = 7,
	Capsule                        = 8,
	Polygon                        = 9,
	Polyline                       = 10,
	Arrow                          = 11,
	EGameplayDebuggerShape_MAX     = 12,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct GameplayDebugger.GameplayDebuggerDataPackHeader
struct FGameplayDebuggerDataPackHeader
{
public:
	int16                                        DataVersion;                                       // 0x0(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16                                        SyncCounter;                                       // 0x2(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DataSize;                                          // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DataOffset;                                        // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsCompressed : 1;                                 // Mask: 0x1, PropSize: 0x10xC(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B1E[0x3];                                     // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GameplayDebugger.GameplayDebuggerDataPackRPCParams
struct FGameplayDebuggerDataPackRPCParams
{
public:
	class FName                                  CategoryName;                                      // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DataPackIdx;                                       // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayDebuggerDataPackHeader       Header;                                            // 0x8(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	TArray<uint8>                                Data;                                              // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GameplayDebugger.GameplayDebuggerShape
struct FGameplayDebuggerShape
{
public:
	TArray<struct FVector>                       ShapeData;                                         // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                Description;                                       // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                Color;                                             // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayDebuggerShape            Type;                                              // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B26[0x3];                                     // Fixing Size Of Struct
};

// 0x40 (0x40 - 0x0)
// ScriptStruct GameplayDebugger.GameplayDebuggerCategoryData
struct FGameplayDebuggerCategoryData
{
public:
	class FName                                  CategoryName;                                      // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B2B[0x4];                                     // Fixing Size After Last Property
	TArray<class FString>                        TextLines;                                         // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FGameplayDebuggerShape>        Shapes;                                            // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FGameplayDebuggerDataPackHeader> DataPacks;                                         // 0x28(0x10)(ZeroConstructor, RepSkip, NativeAccessSpecifierPublic)
	bool                                         bIsEnabled;                                        // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B2E[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GameplayDebugger.GameplayDebuggerNetPack
struct FGameplayDebuggerNetPack
{
public:
	class UGameplayDebuggerCategoryReplicator*   Owner;                                             // 0x0(0x8)(ZeroConstructor, RepSkip, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGameplayDebuggerCategoryData> SavedData;                                         // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GameplayDebugger.GameplayDebuggerDebugActor
struct FGameplayDebuggerDebugActor
{
public:
	TWeakObjectPtr<class UActor>                 Actor;                                             // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ActorName;                                         // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16                                        SyncCounter;                                       // 0xC(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B37[0x2];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GameplayDebugger.GameplayDebuggerVisLogSync
struct FGameplayDebuggerVisLogSync
{
public:
	class FString                                DeviceIDs;                                         // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GameplayDebugger.GameplayDebuggerInputConfig
struct FGameplayDebuggerInputConfig
{
public:
	class FString                                ConfigName;                                        // 0x0(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  Key;                                               // 0x10(0x18)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bModShift : 1;                                     // Mask: 0x1, PropSize: 0x10x28(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bModCtrl : 1;                                      // Mask: 0x2, PropSize: 0x10x28(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bModAlt : 1;                                       // Mask: 0x4, PropSize: 0x10x28(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bModCmd : 1;                                       // Mask: 0x8, PropSize: 0x10x28(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B3C[0x7];                                     // Fixing Size Of Struct
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GameplayDebugger.GameplayDebuggerCategoryConfig
struct FGameplayDebuggerCategoryConfig
{
public:
	class FString                                CategoryName;                                      // 0x0(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SlotIdx;                                           // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayDebuggerOverrideMode     ActiveInGame;                                      // 0x14(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayDebuggerOverrideMode     ActiveInSimulate;                                  // 0x15(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayDebuggerOverrideMode     Hidden;                                            // 0x16(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B49[0x1];                                     // Fixing Size After Last Property
	uint8                                        bOverrideSlotIdx : 1;                              // Mask: 0x1, PropSize: 0x10x18(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_151 : 7;                                    // Fixing Bit-Field Size
	uint8                                        Pad_1B4A[0x7];                                     // Fixing Size After Last Property
	TArray<struct FGameplayDebuggerInputConfig>  InputHandlers;                                     // 0x20(0x10)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GameplayDebugger.GameplayDebuggerExtensionConfig
struct FGameplayDebuggerExtensionConfig
{
public:
	class FString                                ExtensionName;                                     // 0x0(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayDebuggerOverrideMode     UseExtension;                                      // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B4D[0x7];                                     // Fixing Size After Last Property
	TArray<struct FGameplayDebuggerInputConfig>  InputHandlers;                                     // 0x18(0x10)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GameplayDebugger.GameplayDebuggerPlayerData
struct FGameplayDebuggerPlayerData
{
public:
	class UGameplayDebuggerLocalController*      Controller;                                        // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInputComponent*                       InputComponent;                                    // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameplayDebuggerCategoryReplicator*   Replicator;                                        // 0x10(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
