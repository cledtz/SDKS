#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EWorldConditionResultValue : uint8
{
	IsFalse                        = 0,
	IsTrue                         = 1,
	Invalid                        = 2,
	EWorldConditionResultValue_MAX = 3,
};

enum class EWorldConditionOperator : uint8
{
	And                            = 0,
	Or                             = 1,
	Copy                           = 2,
	EWorldConditionOperator_MAX    = 3,
};

enum class EWorldConditionContextDataType : uint8
{
	Dynamic                        = 0,
	Persistent                     = 1,
	EWorldConditionContextDataType_MAX = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// ScriptStruct WorldConditions.WorldConditionQueryDefinition
struct FWorldConditionQueryDefinition
{
public:
	uint8                                        Pad_4D6[0x10];                                     // Fixing Size After Last Property 
	TSubclassOf<class UWorldConditionSchema>     SchemaClass;                                       // 0x10(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct WorldConditions.WorldConditionBase
struct FWorldConditionBase
{
public:
	uint8                                        Pad_4DD[0xB];                                      // Fixing Size After Last Property 
	uint8                                        BitPad_1F : 2;                                     // Fixing Bit-Field Size 
	uint8                                        bInvert : 1;                                       // Mask: 0x4, PropSize: 0x10xB(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_20 : 5;                                     // Fixing Bit-Field Size 
	enum class EWorldConditionOperator           Operator;                                          // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        NextExpressionDepth;                               // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4E2[0x2];                                      // Fixing Size Of Struct
};

// 0x0 (0x10 - 0x10)
// ScriptStruct WorldConditions.WorldConditionCommonBase
struct FWorldConditionCommonBase : public FWorldConditionBase
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct WorldConditions.WorldConditionCommonActorBase
struct FWorldConditionCommonActorBase : public FWorldConditionBase
{
public:
};

// 0x1 (0x1 - 0x0)
// ScriptStruct WorldConditions.WorldConditionEditable
struct FWorldConditionEditable
{
public:
	uint8                                        Pad_4E7[0x1];                                      // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// ScriptStruct WorldConditions.WorldConditionQuerySharedDefinition
struct FWorldConditionQuerySharedDefinition
{
public:
	struct FInstancedStructContainer             Conditions;                                        // 0x0(0x10)(NativeAccessSpecifierPrivate)
	TSubclassOf<class UWorldConditionSchema>     SchemaClass;                                       // 0x10(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4EA[0x10];                                     // Fixing Size Of Struct
};

// 0x3 (0x3 - 0x0)
// ScriptStruct WorldConditions.WorldConditionItem
struct FWorldConditionItem
{
public:
	uint8                                        Pad_4F2[0x3];                                      // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// ScriptStruct WorldConditions.WorldConditionStateObject
struct FWorldConditionStateObject
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct WorldConditions.WorldConditionQueryState
struct FWorldConditionQueryState
{
public:
	uint8                                        Pad_503[0x28];                                     // Fixing Size After Last Property 
	class UObject*                               Owner;                                             // 0x28(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct WorldConditions.WorldConditionQuery
struct FWorldConditionQuery
{
public:
	struct FWorldConditionQueryDefinition        QueryDefinition;                                   // 0x0(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FWorldConditionQueryState             QueryState;                                        // 0x18(0x30)(Transient, Protected, NativeAccessSpecifierProtected)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct WorldConditions.WorldConditionResult
struct FWorldConditionResult
{
public:
	enum class EWorldConditionResultValue        Value;                                             // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanBeCached;                                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct WorldConditions.WorldConditionContextDataDesc
struct FWorldConditionContextDataDesc
{
public:
	class UStruct*                               Struct;                                            // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Name;                                              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWorldConditionContextDataType    Type;                                              // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_50B[0x3];                                      // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// ScriptStruct WorldConditions.WorldConditionContextDataRef
struct FWorldConditionContextDataRef
{
public:
	class FName                                  Name;                                              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Index;                                             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_50D[0x3];                                      // Fixing Size Of Struct
};

}


