#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EBoolColumnCellValue : uint8
{
	MatchFalse                     = 0,
	MatchTrue                      = 1,
	MatchAny                       = 2,
	EBoolColumnCellValue_MAX       = 3,
};

enum class EContextObjectDirection : uint8
{
	Read                           = 0,
	Write                          = 1,
	ReadWrite                      = 2,
	EContextObjectDirection_MAX    = 3,
};

enum class EObjectColumnCellValueComparison : uint8
{
	MatchEqual                     = 0,
	MatchNotEqual                  = 1,
	MatchAny                       = 2,
	Modulus                        = 3,
	EObjectColumnCellValueComparison_MAX = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// ScriptStruct Chooser.ChooserParameterBase
struct FChooserParameterBase
{
public:
	uint8                                        Pad_A85[0x8];                                      // Fixing Size Of Struct
};

// 0x0 (0x8 - 0x8)
// ScriptStruct Chooser.ChooserParameterBoolBase
struct FChooserParameterBoolBase : public FChooserParameterBase
{
public:
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Chooser.ChooserPropertyBinding
struct FChooserPropertyBinding
{
public:
	TArray<class FName>                          PropertyBindingChain;                              // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        ContextIndex;                                      // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A87[0x4];                                      // Fixing Size Of Struct
};

// 0x28 (0x30 - 0x8)
// ScriptStruct Chooser.BoolContextProperty
struct FBoolContextProperty : public FChooserParameterBoolBase
{
public:
	TArray<class FName>                          PropertyBindingChain;                              // 0x8(0x10)(ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
	struct FChooserPropertyBinding               Binding;                                           // 0x18(0x18)(Edit, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Chooser.ChooserColumnBase
struct FChooserColumnBase
{
public:
	uint8                                        Pad_A8A[0x8];                                      // Fixing Size Of Struct
};

// 0x20 (0x28 - 0x8)
// ScriptStruct Chooser.BoolColumn
struct FBoolColumn : public FChooserColumnBase
{
public:
	struct FInstancedStruct                      InputValue;                                        // 0x8(0x10)(Edit, NativeAccessSpecifierPublic)
	TArray<enum class EBoolColumnCellValue>      RowValuesWithAny;                                  // 0x18(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Chooser.ChooserEnumPropertyBinding
struct FChooserEnumPropertyBinding : public FChooserPropertyBinding
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Chooser.ChooserObjectPropertyBinding
struct FChooserObjectPropertyBinding : public FChooserPropertyBinding
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Chooser.ChooserStructPropertyBinding
struct FChooserStructPropertyBinding : public FChooserPropertyBinding
{
public:
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Chooser.ContextObjectTypeBase
struct FContextObjectTypeBase
{
public:
	enum class EContextObjectDirection           Direction;                                         // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0x10 - 0x4)
// ScriptStruct Chooser.ContextObjectTypeClass
struct FContextObjectTypeClass : public FContextObjectTypeBase
{
public:
	uint8                                        Pad_A8E[0x4];                                      // Fixing Size After Last Property
	TSubclassOf<class UObject>                   Class;                                             // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0x10 - 0x4)
// ScriptStruct Chooser.ContextObjectTypeStruct
struct FContextObjectTypeStruct : public FContextObjectTypeBase
{
public:
	uint8                                        Pad_A8F[0x4];                                      // Fixing Size After Last Property
	class UScriptStruct*                         Struct;                                            // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct Chooser.ChooserParameterEnumBase
struct FChooserParameterEnumBase : public FChooserParameterBase
{
public:
};

// 0x28 (0x30 - 0x8)
// ScriptStruct Chooser.EnumContextProperty
struct FEnumContextProperty : public FChooserParameterEnumBase
{
public:
	TArray<class FName>                          PropertyBindingChain;                              // 0x8(0x10)(ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
	struct FChooserEnumPropertyBinding           Binding;                                           // 0x18(0x18)(Edit, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct Chooser.ChooserEnumRowData
struct FChooserEnumRowData
{
public:
	bool                                         CompareNotEqual;                                   // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Value;                                             // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct Chooser.EnumColumn
struct FEnumColumn : public FChooserColumnBase
{
public:
	struct FInstancedStruct                      InputValue;                                        // 0x8(0x10)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FChooserEnumRowData>           RowValues;                                         // 0x18(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct Chooser.ChooserParameterFloatBase
struct FChooserParameterFloatBase : public FChooserParameterBase
{
public:
};

// 0x28 (0x30 - 0x8)
// ScriptStruct Chooser.FloatContextProperty
struct FFloatContextProperty : public FChooserParameterFloatBase
{
public:
	TArray<class FName>                          PropertyBindingChain;                              // 0x8(0x10)(ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
	struct FChooserPropertyBinding               Binding;                                           // 0x18(0x18)(Edit, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Chooser.ChooserFloatRangeRowData
struct FChooserFloatRangeRowData
{
public:
	float                                        Min;                                               // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Max;                                               // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct Chooser.FloatRangeColumn
struct FFloatRangeColumn : public FChooserColumnBase
{
public:
	struct FInstancedStruct                      InputValue;                                        // 0x8(0x10)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FChooserFloatRangeRowData>     RowValues;                                         // 0x18(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct Chooser.ChooserParameterGameplayTagBase
struct FChooserParameterGameplayTagBase : public FChooserParameterBase
{
public:
};

// 0x28 (0x30 - 0x8)
// ScriptStruct Chooser.GameplayTagContextProperty
struct FGameplayTagContextProperty : public FChooserParameterGameplayTagBase
{
public:
	TArray<class FName>                          PropertyBindingChain;                              // 0x8(0x10)(ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
	struct FChooserPropertyBinding               Binding;                                           // 0x18(0x18)(Edit, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct Chooser.GameplayTagColumn
struct FGameplayTagColumn : public FChooserColumnBase
{
public:
	struct FInstancedStruct                      InputValue;                                        // 0x8(0x10)(Edit, NativeAccessSpecifierPublic)
	enum class EGameplayContainerMatchType       TagMatchType;                                      // 0x18(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A9F[0x7];                                      // Fixing Size After Last Property
	TArray<struct FGameplayTagContainer>         RowValues;                                         // 0x20(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct Chooser.ChooserParameterObjectBase
struct FChooserParameterObjectBase : public FChooserParameterBase
{
public:
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Chooser.ChooserRandomizationContext
struct FChooserRandomizationContext
{
public:
	uint8                                        Pad_AA0[0x50];                                     // Fixing Size Of Struct
};

// 0x0 (0x8 - 0x8)
// ScriptStruct Chooser.ChooserParameterRandomizeBase
struct FChooserParameterRandomizeBase : public FChooserParameterBase
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct Chooser.ChooserParameterStructBase
struct FChooserParameterStructBase : public FChooserParameterBase
{
public:
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Chooser.ChooserEvaluationInputObject
struct FChooserEvaluationInputObject
{
public:
	uint8                                        Pad_AA1[0x8];                                      // Fixing Size Of Struct
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Chooser.ChooserEvaluationContext
struct FChooserEvaluationContext
{
public:
	uint8                                        Pad_AA2[0x48];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Chooser.ObjectChooserBase
struct FObjectChooserBase
{
public:
	uint8                                        Pad_AA3[0x8];                                      // Fixing Size Of Struct
};

// 0x8 (0x10 - 0x8)
// ScriptStruct Chooser.AssetChooser
struct FAssetChooser : public FObjectChooserBase
{
public:
	class UObject*                               Asset;                                             // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct Chooser.ClassChooser
struct FClassChooser : public FObjectChooserBase
{
public:
	TSubclassOf<class UObject>                   Class;                                             // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct Chooser.ObjectContextProperty
struct FObjectContextProperty : public FChooserParameterObjectBase
{
public:
	struct FChooserObjectPropertyBinding         Binding;                                           // 0x8(0x18)(Edit, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Chooser.ChooserObjectRowData
struct FChooserObjectRowData
{
public:
	enum class EObjectColumnCellValueComparison  Comparison;                                        // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AA5[0x4];                                      // Fixing Size After Last Property
	TSoftObjectPtr<class UObject>                Value;                                             // 0x8(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct Chooser.ObjectColumn
struct FObjectColumn : public FChooserColumnBase
{
public:
	struct FInstancedStruct                      InputValue;                                        // 0x8(0x10)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FChooserObjectRowData>         RowValues;                                         // 0x18(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct Chooser.OutputBoolColumn
struct FOutputBoolColumn : public FChooserColumnBase
{
public:
	struct FInstancedStruct                      InputValue;                                        // 0x8(0x10)(Edit, NativeAccessSpecifierPublic)
	TArray<bool>                                 RowValues;                                         // 0x18(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Chooser.ChooserOutputEnumRowData
struct FChooserOutputEnumRowData
{
public:
	uint8                                        Value;                                             // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct Chooser.OutputEnumColumn
struct FOutputEnumColumn : public FChooserColumnBase
{
public:
	struct FInstancedStruct                      InputValue;                                        // 0x8(0x10)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FChooserOutputEnumRowData>     RowValues;                                         // 0x18(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct Chooser.OutputFloatColumn
struct FOutputFloatColumn : public FChooserColumnBase
{
public:
	struct FInstancedStruct                      InputValue;                                        // 0x8(0x10)(Edit, NativeAccessSpecifierPublic)
	TArray<double>                               RowValues;                                         // 0x18(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct Chooser.StructContextProperty
struct FStructContextProperty : public FChooserParameterStructBase
{
public:
	struct FChooserStructPropertyBinding         Binding;                                           // 0x8(0x18)(Edit, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct Chooser.OutputStructColumn
struct FOutputStructColumn : public FChooserColumnBase
{
public:
	struct FInstancedStruct                      InputValue;                                        // 0x8(0x10)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FInstancedStruct>              RowValues;                                         // 0x18(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct Chooser.RandomizeContextProperty
struct FRandomizeContextProperty : public FChooserParameterRandomizeBase
{
public:
	struct FChooserPropertyBinding               Binding;                                           // 0x8(0x18)(Edit, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct Chooser.RandomizeColumn
struct FRandomizeColumn : public FChooserColumnBase
{
public:
	struct FInstancedStruct                      InputValue;                                        // 0x8(0x10)(Edit, NativeAccessSpecifierPublic)
	float                                        RepeatProbabilityMultiplier;                       // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AAA[0x4];                                      // Fixing Size After Last Property
	TArray<float>                                RowValues;                                         // 0x20(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct Chooser.EvaluateChooser
struct FEvaluateChooser : public FObjectChooserBase
{
public:
	class UChooserTable*                         Chooser;                                           // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
