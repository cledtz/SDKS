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

enum class EPopulationConstraintType : uint8
{
	NONE                           = 0,
	BOOL                           = 1,
	DISCRETE                       = 2,
	DISCRETE_FLOAT                 = 3,
	DISCRETE_COLOR                 = 4,
	TAG                            = 5,
	RANGE                          = 6,
	CURVE                          = 7,
	CURVE_COLOR                    = 8,
	EPopulationConstraintType_MAX  = 9,
};

enum class ECurveColor : uint8
{
	RED                            = 0,
	GREEN                          = 1,
	BLUE                           = 2,
	ALPHA                          = 3,
	ECurveColor_MAX                = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct CustomizableObjectPopulation.ClassWeightPair
struct FClassWeightPair
{
public:
	class UCustomizableObjectPopulationClass*    Class;                                             // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ClassWeight;                                       // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_81BC[0x4];                                     // Fixing Size Of Struct..
};

// 0xC (0xC - 0x0)
// ScriptStruct CustomizableObjectPopulation.ConstraintRanges
struct FConstraintRanges
{
public:
	float                                        MinimumValue;                                      // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumValue;                                      // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RangeWeight;                                       // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct CustomizableObjectPopulation.CustomizableObjectPopulationConstraint
struct FCustomizableObjectPopulationConstraint
{
public:
	enum class EPopulationConstraintType         Type;                                              // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_81BD[0x3];                                     // Fixing Size After Last Property..
	int32                                        ConstraintWeight;                                  // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TrueWeight;                                        // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FalseWeight;                                       // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DiscreteValue;                                     // 0x10(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          DiscreteColor;                                     // 0x20(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        AllowList;                                         // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        Blocklist;                                         // 0x40(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FConstraintRanges>             Ranges;                                            // 0x50(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class UCurveBase*                            Curve;                                             // 0x60(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECurveColor                       CurveColor;                                        // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_81BE[0x7];                                     // Fixing Size Of Struct..
};

// 0x20 (0x20 - 0x0)
// ScriptStruct CustomizableObjectPopulation.CustomizableObjectPopulationCharacteristic
struct FCustomizableObjectPopulationCharacteristic
{
public:
	class FString                                ParameterName;                                     // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCustomizableObjectPopulationConstraint> Constraints;                                       // 0x10(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CustomizableObjectPopulation.PopulationClassParameterOptions
struct FPopulationClassParameterOptions
{
public:
	TArray<class FString>                        Tags;                                              // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct CustomizableObjectPopulation.PopulationClassParameter
struct FPopulationClassParameter
{
public:
	TArray<class FString>                        Tags;                                              // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<class FString, struct FPopulationClassParameterOptions> ParameterOptions;                                  // 0x10(0x50)(Edit, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
