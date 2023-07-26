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

enum class ETaskObjectStateChangeType : uint8
{
	None                           = 0,
	BeginState                     = 1,
	EndState                       = 2,
	ETaskObjectStateChangeType_MAX = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x58 - 0x0)
// ScriptStruct FortniteGameFramework.ComponentCacheHelper
struct FComponentCacheHelper
{
public:
	uint8                                        Pad_38B1[0x58];                                    // Fixing Size Of Struct..
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteGameFramework.ActorOwnedStateTreeConfig
struct FActorOwnedStateTreeConfig
{
public:
	TSoftObjectPtr<class UStateTree>             StateTreeAsset;                                    // 0x0(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldReplicate;                                  // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38B2[0x7];                                     // Fixing Size Of Struct..
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteGameFramework.StateTreeRuntimeData
struct FStateTreeRuntimeData
{
public:
	class UObject*                               Owner;                                             // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStateTree*                            StateTree;                                         // 0x8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStateTreeInstanceData                StateTreeInstanceData;                             // 0x10(0x10)(NativeAccessSpecifierPublic)
	uint8                                        Pad_38B3[0x10];                                    // Fixing Size Of Struct..
};

// 0x1C (0x28 - 0xC)
// ScriptStruct FortniteGameFramework.StateChangeData
struct FStateChangeData : public FFastArraySerializerItem
{
public:
	int32                                        StateTreeDataHandle;                               // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Handle;                                            // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StateIdentifier;                                   // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStateTreeTaskObject*                  StateObject;                                       // 0x18(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETaskObjectStateChangeType        StateChangeType;                                   // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38B4[0x7];                                     // Fixing Size Of Struct..
};

// 0x18 (0x120 - 0x108)
// ScriptStruct FortniteGameFramework.StateChangeDataArray
struct FStateChangeDataArray : public FFastArraySerializer
{
public:
	TArray<struct FStateChangeData>              StateChangeDataList;                               // 0x108(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	class UStateTreeManagerComponent*            StateTreeManagerComponent;                         // 0x118(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteGameFramework.StateTreeClientSimulationData
struct FStateTreeClientSimulationData
{
public:
	uint8                                        Pad_38B5[0x28];                                    // Fixing Size Of Struct..
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
