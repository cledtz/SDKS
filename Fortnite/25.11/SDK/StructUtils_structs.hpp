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

enum class EPropertyBagPropertyType : uint8
{
	None                           = 0,
	Bool                           = 1,
	Byte                           = 2,
	Int32                          = 3,
	Int64                          = 4,
	Float                          = 5,
	Double                         = 6,
	Name                           = 7,
	String                         = 8,
	Text                           = 9,
	Enum                           = 10,
	Struct                         = 11,
	Object                         = 12,
	SoftObject                     = 13,
	Class                          = 14,
	SoftClass                      = 15,
	Count                          = 16,
	EPropertyBagPropertyType_MAX   = 17,
};

enum class EPropertyBagContainerType : uint8
{
	None                           = 0,
	Array                          = 1,
	Count                          = 2,
	EPropertyBagContainerType_MAX  = 3,
};

enum class EPropertyBagResult : uint8
{
	Success                        = 0,
	TypeMismatch                   = 1,
	OutOfBounds                    = 2,
	PropertyNotFound               = 3,
	EPropertyBagResult_MAX         = 4,
};

enum class EPropertyBagMissingEnum : uint8
{
	Missing                        = 0,
	EPropertyBagMissingEnum_MAX    = 1,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct StructUtils.InstancedStruct
struct FInstancedStruct
{
public:
	uint8                                        Pad_16CE[0x10];                                    // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// ScriptStruct StructUtils.InstancedStructContainer
struct FInstancedStructContainer
{
public:
	uint8                                        Pad_16CF[0x10];                                    // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// ScriptStruct StructUtils.PropertyBagPropertyDescMetaData
struct FPropertyBagPropertyDescMetaData
{
public:
	class FName                                  Key;                                               // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16D0[0x4];                                     // Fixing Size After Last Property..
	class FString                                Value;                                             // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct StructUtils.PropertyBagPropertyDesc
struct FPropertyBagPropertyDesc
{
public:
	class UObject*                               ValueTypeObject;                                   // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 ID;                                                // 0x8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Name;                                              // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPropertyBagPropertyType          ValueType;                                         // 0x1C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPropertyBagContainerType         ContainerType;                                     // 0x1D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16D1[0xA];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// ScriptStruct StructUtils.InstancedPropertyBag
struct FInstancedPropertyBag
{
public:
	struct FInstancedStruct                      Value;                                             // 0x0(0x10)(Edit, Protected, NativeAccessSpecifierProtected)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct StructUtils.PropertyBagMissingStruct
struct FPropertyBagMissingStruct
{
public:
	uint8                                        Pad_16D2[0x1];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// ScriptStruct StructUtils.SharedStruct
struct FSharedStruct
{
public:
	uint8                                        Pad_16D3[0x10];                                    // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// ScriptStruct StructUtils.ConstSharedStruct
struct FConstSharedStruct
{
public:
	uint8                                        Pad_16D4[0x10];                                    // Fixing Size Of Struct..
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
