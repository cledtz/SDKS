#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

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
	uint8                                        Pad_44AB[0x8];                                     // Fixing Size After Last Property..
	TArray<class FName>                          PropertyBindingChain;                              // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ChooserParameterBool_ContextProperty");
		return Clss;
	}

};

// 0x28 (0x50 - 0x28)
// Class Chooser.ChooserColumnBool
class UChooserColumnBool : public UObject
{
public:
	uint8                                        Pad_44AC[0x8];                                     // Fixing Size After Last Property..
	FInterfaceProperty_                          InputValue;                                        // 0x30(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<bool>                                 RowValues;                                         // 0x40(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ChooserColumnBool");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class Chooser.HasContextClass
class UHasContextClass : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HasContextClass");
		return Clss;
	}

};

// 0x18 (0x40 - 0x28)
// Class Chooser.ChooserParameterEnum_ContextProperty
class UChooserParameterEnum_ContextProperty : public UObject
{
public:
	uint8                                        Pad_44AD[0x8];                                     // Fixing Size After Last Property..
	TArray<class FName>                          PropertyBindingChain;                              // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ChooserParameterEnum_ContextProperty");
		return Clss;
	}

};

// 0x28 (0x50 - 0x28)
// Class Chooser.ChooserColumnEnum
class UChooserColumnEnum : public UObject
{
public:
	uint8                                        Pad_44AE[0x8];                                     // Fixing Size After Last Property..
	FInterfaceProperty_                          InputValue;                                        // 0x30(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FChooserEnumRowData>           RowValues;                                         // 0x40(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ChooserColumnEnum");
		return Clss;
	}

};

// 0x18 (0x40 - 0x28)
// Class Chooser.ChooserParameterFloat_ContextProperty
class UChooserParameterFloat_ContextProperty : public UObject
{
public:
	uint8                                        Pad_44AF[0x8];                                     // Fixing Size After Last Property..
	TArray<class FName>                          PropertyBindingChain;                              // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ChooserParameterFloat_ContextProperty");
		return Clss;
	}

};

// 0x28 (0x50 - 0x28)
// Class Chooser.ChooserColumnFloatRange
class UChooserColumnFloatRange : public UObject
{
public:
	uint8                                        Pad_44B0[0x8];                                     // Fixing Size After Last Property..
	FInterfaceProperty_                          InputValue;                                        // 0x30(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FChooserFloatRangeRowData>     RowValues;                                         // 0x40(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ChooserColumnFloatRange");
		return Clss;
	}

};

// 0x18 (0x40 - 0x28)
// Class Chooser.ChooserParameterGameplayTag_ContextProperty
class UChooserParameterGameplayTag_ContextProperty : public UObject
{
public:
	uint8                                        Pad_44B1[0x8];                                     // Fixing Size After Last Property..
	TArray<class FName>                          PropertyBindingChain;                              // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ChooserParameterGameplayTag_ContextProperty");
		return Clss;
	}

};

// 0x30 (0x58 - 0x28)
// Class Chooser.ChooserColumnGameplayTag
class UChooserColumnGameplayTag : public UObject
{
public:
	uint8                                        Pad_44B2[0x8];                                     // Fixing Size After Last Property..
	FInterfaceProperty_                          InputValue;                                        // 0x30(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayContainerMatchType       TagMatchType;                                      // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_44B3[0x7];                                     // Fixing Size After Last Property..
	TArray<struct FGameplayTagContainer>         RowValues;                                         // 0x48(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ChooserColumnGameplayTag");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class Chooser.ChooserColumn
class UChooserColumn : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ChooserColumn");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class Chooser.ChooserParameterBool
class UChooserParameterBool : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ChooserParameterBool");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class Chooser.ChooserParameterEnum
class UChooserParameterEnum : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ChooserParameterEnum");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class Chooser.ChooserParameterFloat
class UChooserParameterFloat : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ChooserParameterFloat");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class Chooser.ChooserParameterGameplayTag
class UChooserParameterGameplayTag : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ChooserParameterGameplayTag");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class Chooser.ObjectChooser
class UObjectChooser : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ObjectChooser");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class Chooser.ObjectChooser_Asset
class UObjectChooser_Asset : public UObject
{
public:
	uint8                                        Pad_44B4[0x8];                                     // Fixing Size After Last Property..
	class UObject*                               Asset;                                             // 0x30(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ObjectChooser_Asset");
		return Clss;
	}

};

// 0x58 (0x80 - 0x28)
// Class Chooser.ChooserTable
class UChooserTable : public UObject
{
public:
	uint8                                        Pad_44B5[0x20];                                    // Fixing Size After Last Property..
	TArray<struct FInstancedStruct>              ResultsStructs;                                    // 0x48(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FInstancedStruct>              ColumnsStructs;                                    // 0x58(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FInstancedStruct>              ContextData;                                       // 0x68(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TSubclassOf<class UObject>                   OutputObjectType;                                  // 0x78(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ChooserTable");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class Chooser.ObjectChooser_EvaluateChooser
class UObjectChooser_EvaluateChooser : public UObject
{
public:
	uint8                                        Pad_44B6[0x8];                                     // Fixing Size After Last Property..
	class UChooserTable*                         Chooser;                                           // 0x30(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ObjectChooser_EvaluateChooser");
		return Clss;
	}

};

// 0x18 (0x40 - 0x28)
// Class Chooser.ChooserColumnMenuContext
class UChooserColumnMenuContext : public UObject
{
public:
	uint8                                        Pad_44B7[0x18];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ChooserColumnMenuContext");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class Chooser.ChooserFunctionLibrary
class UChooserFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ChooserFunctionLibrary");
		return Clss;
	}

	struct FInstancedStruct MakeEvaluateChooser(class UChooserTable* Chooser);
	void GetChooserStructOutput(struct FChooserEvaluationContext& Context, int32 Index, int32* Value);
	TArray<class UObject*> EvaluateObjectChooserBaseMulti(struct FChooserEvaluationContext& Context, struct FInstancedStruct& ObjectChooser, TSubclassOf<class UObject> ObjectClass);
	class UObject* EvaluateObjectChooserBase(struct FChooserEvaluationContext& Context, struct FInstancedStruct& ObjectChooser, TSubclassOf<class UObject> ObjectClass);
	TArray<class UObject*> EvaluateChooserMulti(class UObject* ContextObject, class UChooserTable* ChooserTable, TSubclassOf<class UObject> ObjectClass);
	class UObject* EvaluateChooser(class UObject* ContextObject, class UChooserTable* ChooserTable, TSubclassOf<class UObject> ObjectClass);
	void AddChooserStructInput(struct FChooserEvaluationContext& Context, int32 Value);
	void AddChooserObjectInput(struct FChooserEvaluationContext& Context, class UObject* Object);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
