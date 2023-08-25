#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x40 - 0x28)
// Class Chooser.ChooserParameterBool_ContextProperty
class UChooserParameterBool_ContextProperty : public UObject
{
public:
	uint8                                        Pad_2539[0x8];                                     // Fixing Size After Last Property 
	TArray<class FName>                          PropertyBindingChain;                              // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UChooserParameterBool_ContextProperty* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class Chooser.ChooserColumnBool
class UChooserColumnBool : public UObject
{
public:
	uint8                                        Pad_253B[0x8];                                     // Fixing Size After Last Property 
	TScriptInterface<class UChooserParameterBool> InputValue;                                        // 0x30(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<bool>                                 RowValues;                                         // 0x40(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UChooserColumnBool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Chooser.HasContextClass
class UHasContextClass : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UHasContextClass* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class Chooser.ChooserParameterEnum_ContextProperty
class UChooserParameterEnum_ContextProperty : public UObject
{
public:
	uint8                                        Pad_2541[0x8];                                     // Fixing Size After Last Property 
	TArray<class FName>                          PropertyBindingChain;                              // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UChooserParameterEnum_ContextProperty* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class Chooser.ChooserColumnEnum
class UChooserColumnEnum : public UObject
{
public:
	uint8                                        Pad_254E[0x8];                                     // Fixing Size After Last Property 
	TScriptInterface<class UChooserParameterEnum> InputValue;                                        // 0x30(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FChooserEnumRowData>           RowValues;                                         // 0x40(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UChooserColumnEnum* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class Chooser.ChooserParameterFloat_ContextProperty
class UChooserParameterFloat_ContextProperty : public UObject
{
public:
	uint8                                        Pad_2554[0x8];                                     // Fixing Size After Last Property 
	TArray<class FName>                          PropertyBindingChain;                              // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UChooserParameterFloat_ContextProperty* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class Chooser.ChooserColumnFloatRange
class UChooserColumnFloatRange : public UObject
{
public:
	uint8                                        Pad_255A[0x8];                                     // Fixing Size After Last Property 
	TScriptInterface<class UChooserParameterFloat> InputValue;                                        // 0x30(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FChooserFloatRangeRowData>     RowValues;                                         // 0x40(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UChooserColumnFloatRange* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class Chooser.ChooserParameterGameplayTag_ContextProperty
class UChooserParameterGameplayTag_ContextProperty : public UObject
{
public:
	uint8                                        Pad_2581[0x8];                                     // Fixing Size After Last Property 
	TArray<class FName>                          PropertyBindingChain;                              // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UChooserParameterGameplayTag_ContextProperty* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class Chooser.ChooserColumnGameplayTag
class UChooserColumnGameplayTag : public UObject
{
public:
	uint8                                        Pad_2583[0x8];                                     // Fixing Size After Last Property 
	TScriptInterface<class UChooserParameterGameplayTag> InputValue;                                        // 0x30(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayContainerMatchType       TagMatchType;                                      // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2584[0x7];                                     // Fixing Size After Last Property 
	TArray<struct FGameplayTagContainer>         RowValues;                                         // 0x48(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UChooserColumnGameplayTag* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Chooser.ChooserColumn
class UChooserColumn : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UChooserColumn* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Chooser.ChooserParameterBool
class UChooserParameterBool : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UChooserParameterBool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Chooser.ChooserParameterEnum
class UChooserParameterEnum : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UChooserParameterEnum* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Chooser.ChooserParameterFloat
class UChooserParameterFloat : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UChooserParameterFloat* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Chooser.ChooserParameterGameplayTag
class UChooserParameterGameplayTag : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UChooserParameterGameplayTag* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Chooser.ObjectChooser
class UObjectChooser : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UObjectChooser* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class Chooser.ObjectChooser_Asset
class UObjectChooser_Asset : public UObject
{
public:
	uint8                                        Pad_2591[0x8];                                     // Fixing Size After Last Property 
	class UObject*                               Asset;                                             // 0x30(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UObjectChooser_Asset* GetDefaultObj();

};

// 0x60 (0x88 - 0x28)
// Class Chooser.ChooserTable
class UChooserTable : public UObject
{
public:
	uint8                                        Pad_2592[0x20];                                    // Fixing Size After Last Property 
	TArray<struct FInstancedStruct>              ResultsStructs;                                    // 0x48(0x10)(Edit, ZeroConstructor, NoClear, NativeAccessSpecifierPublic)
	TArray<struct FInstancedStruct>              ColumnsStructs;                                    // 0x58(0x10)(Edit, ZeroConstructor, NoClear, NativeAccessSpecifierPublic)
	TArray<struct FInstancedStruct>              ContextData;                                       // 0x68(0x10)(Edit, ZeroConstructor, NoClear, NativeAccessSpecifierPublic)
	TSubclassOf<class UObject>                   OutputObjectType;                                  // 0x78(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EObjectChooserResultType          ResultType;                                        // 0x80(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2594[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UChooserTable* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class Chooser.ObjectChooser_EvaluateChooser
class UObjectChooser_EvaluateChooser : public UObject
{
public:
	uint8                                        Pad_2595[0x8];                                     // Fixing Size After Last Property 
	class UChooserTable*                         Chooser;                                           // 0x30(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UObjectChooser_EvaluateChooser* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class Chooser.ChooserColumnMenuContext
class UChooserColumnMenuContext : public UObject
{
public:
	uint8                                        Pad_25A4[0x18];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UChooserColumnMenuContext* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Chooser.ChooserFunctionLibrary
class UChooserFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UChooserFunctionLibrary* GetDefaultObj();

	struct FInstancedStruct MakeEvaluateChooser(class UChooserTable* Chooser);
	struct FChooserEvaluationContext MakeChooserEvaluationContext();
	void GetChooserStructOutput(struct FChooserEvaluationContext& Context, int32 Index, int32* Value);
	TArray<class UObject*> EvaluateObjectChooserBaseMulti(struct FChooserEvaluationContext& Context, struct FInstancedStruct& ObjectChooser, TSubclassOf<class UObject> ObjectClass, bool bResultIsClass);
	class UObject* EvaluateObjectChooserBase(struct FChooserEvaluationContext& Context, struct FInstancedStruct& ObjectChooser, TSubclassOf<class UObject> ObjectClass, bool bResultIsClass);
	TArray<class UObject*> EvaluateChooserMulti(class UObject* ContextObject, class UChooserTable* ChooserTable, TSubclassOf<class UObject> ObjectClass);
	class UObject* EvaluateChooser(class UObject* ContextObject, class UChooserTable* ChooserTable, TSubclassOf<class UObject> ObjectClass);
	void AddChooserStructInput(struct FChooserEvaluationContext& Context, int32 Value);
	void AddChooserObjectInput(struct FChooserEvaluationContext& Context, class UObject* Object);
};

}


