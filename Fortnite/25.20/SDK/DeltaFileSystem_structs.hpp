#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct DeltaFileSystem.DeltaAction
struct FDeltaAction
{
public:
	struct FGuid                                 ActorGUID;                                         // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             CommitTime;                                        // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       DataHash;                                          // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3EE2[0x4];                                     // Fixing Size Of Struct..
};

// 0xA0 (0xC0 - 0x20)
// ScriptStruct DeltaFileSystem.AddAction
struct FAddAction : public FDeltaAction
{
public:
	TSoftClassPtr<class AActor>                  ActorClass;                                        // 0x20(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                JsonStringObjectForPropertyData;                   // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EE3[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            Transform;                                         // 0x60(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x30 - 0x20)
// ScriptStruct DeltaFileSystem.UpdateAction
struct FUpdateAction : public FDeltaAction
{
public:
	class FString                                JsonStringObjectForPropertyData;                   // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x90 - 0x20)
// ScriptStruct DeltaFileSystem.DeleteAction
struct FDeleteAction : public FDeltaAction
{
public:
	class FString                                ActorName;                                         // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Transform;                                         // 0x30(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct DeltaFileSystem.DeltaTrackingHandles
struct FDeltaTrackingHandles
{
public:
	uint8                                        Pad_3EE4[0x50];                                    // Fixing Size Of Struct..
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
