#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0xF8 - 0xC0)
// Class Solaris.VerseStruct
class UVerseStruct : public UScriptStruct
{
public:
	uint32                                       VerseClassFlags;                                   // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16A6[0x4];                                     // Fixing Size After Last Property 
	class UFunction*                             InitFunction;                                      // 0xC8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UObject>                   ModuleClass;                                       // 0xD0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 Guid;                                              // 0xD8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFunction*                             FactoryFunction;                                   // 0xE8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFunction*                             OverrideFactoryFunction;                           // 0xF0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UVerseStruct* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Solaris.SolarisWeakMapLibrary
class USolarisWeakMapLibrary : public UObject
{
public:

	static class UClass* StaticClass();
	static class USolarisWeakMapLibrary* GetDefaultObj();

	void Type(class UClass* KeyType, class UClass* ValueType);
	void RefCall(TMap<struct FGenericKeyType, struct FGenericValueType>& Map, const struct FGenericKeyType& Key);
	void PersistentVarRefCall(const class FString& Path, TMap<struct FGenericKeyType, struct FGenericValueType>& Map, const struct FGenericKeyType& Key);
	void PersistentVarCall(TMap<struct FGenericKeyType, struct FGenericValueType>& Map, const struct FGenericKeyType& Key);
	void FitsInPlayerMap(const struct FGenericValueType& Value);
	void CompletelyAssignedRefCall(TMap<struct FGenericKeyType, struct FGenericValueType>& Map, const struct FGenericKeyType& Key);
	void CompletelyAssignedPersistentVarRefCall(const class FString& Path, TMap<struct FGenericKeyType, struct FGenericValueType>& Map, const struct FGenericKeyType& Key);
	void Call(TMap<struct FGenericKeyType, struct FGenericValueType>& Map, const struct FGenericKeyType& Key);
};

// 0x28 (0x50 - 0x28)
// Class Solaris.VerseDigest
class UVerseDigest : public UObject
{
public:
	TArray<uint8>                                DigestCode;                                        // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                ProjectName;                                       // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerseDigestVariant               Variant;                                           // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCookAllVerseInternalDigests;                      // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16E1[0x6];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UVerseDigest* GetDefaultObj();

};

// 0x8 (0x70 - 0x68)
// Class Solaris.VerseEnum
class UVerseEnum : public UEnum
{
public:
	enum class EVerseEnumFlags                   VerseEnumFlags;                                    // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16E8[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UVerseEnum* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Solaris.SolarisArrayLibrary
class USolarisArrayLibrary : public UObject
{
public:

	static class UClass* StaticClass();
	static class USolarisArrayLibrary* GetDefaultObj();

	void UnsafeCall(TArray<struct FGenericElementType>& Array, int64 Index);
	void RefCall(TArray<struct FGenericElementType>& Array, int64 Index);
	void Move(TArray<struct FGenericElementType>& Target, TArray<struct FGenericElementType>& Source);
	int64 Length(TArray<struct FGenericElementType>& Array);
	void Empty(TArray<struct FGenericElementType>& Array);
	TArray<struct FGenericElementType> ConcatEquals(TArray<struct FGenericElementType>* LHS, TArray<struct FGenericElementType>& RHS);
	TArray<struct FGenericElementType> Concat(TArray<struct FGenericElementType>& LHS, TArray<struct FGenericElementType>& RHS);
	void Call(TArray<struct FGenericElementType>& Array, int64 Index);
	int64 Add(TArray<struct FGenericElementType>& Array, struct FGenericElementType& New_item);
};

// 0x0 (0x28 - 0x28)
// Class Solaris.SolarisCoroutineLibrary
class USolarisCoroutineLibrary : public UObject
{
public:

	static class UClass* StaticClass();
	static class USolarisCoroutineLibrary* GetDefaultObj();

	class UObject* TaskMake(class UClass* Type, class UObject* Caller, int64 CallerResumeState, int64 CallerCancelState, class UObject* OwnerInstance);
	int64 TaskGetState(class UObject* Task);
	void TaskGetReturnProperty(class UObject* Task);
	void TaskFree(class UObject* Task);
	void TaskCancel(class UObject* Task);
};

// 0x18 (0x40 - 0x28)
// Class Solaris.GameFeature_SolarisObserver
class UGameFeature_SolarisObserver : public UObject
{
public:
	uint8                                        Pad_173C[0x18];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGameFeature_SolarisObserver* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Solaris.SolarisMapLibrary
class USolarisMapLibrary : public UObject
{
public:

	static class UClass* StaticClass();
	static class USolarisMapLibrary* GetDefaultObj();

	void Move(TMap<struct FGenericKeyType, struct FGenericValueType>* Dest, TMap<struct FGenericKeyType, struct FGenericValueType>& Src);
	int64 Length(TMap<struct FGenericKeyType, struct FGenericValueType>& Map);
	void InitMap(TMap<struct FGenericKeyType, struct FGenericValueType>* Map);
	struct FGenericValueType GetValueByIndex(TMap<struct FGenericKeyType, struct FGenericValueType>& Map, int64 Index);
	int64 GetNextValidIndex(TMap<struct FGenericKeyType, struct FGenericValueType>& Map, int64 InitialIndex);
	struct FGenericKeyType GetKeyByIndex(TMap<struct FGenericKeyType, struct FGenericValueType>& Map, int64 Index);
	TMap<struct FGenericKeyType, struct FGenericValueType> Concat(TMap<struct FGenericKeyType, struct FGenericValueType>& LHS, TMap<struct FGenericKeyType, struct FGenericValueType>& RHS);
	void Add(TMap<struct FGenericKeyType, struct FGenericValueType>& Map, struct FGenericKeyType& Key, struct FGenericValueType& Value);
};

// 0x0 (0x28 - 0x28)
// Class Solaris.SolarisMathLibrary_Bool
class USolarisMathLibrary_Bool : public UObject
{
public:

	static class UClass* StaticClass();
	static class USolarisMathLibrary_Bool* GetDefaultObj();

	void Query();
};

// 0x0 (0x28 - 0x28)
// Class Solaris.SolarisMathLibrary_Int
class USolarisMathLibrary_Int : public UObject
{
public:

	static class UClass* StaticClass();
	static class USolarisMathLibrary_Int* GetDefaultObj();

	int32 UncheckedConvertI32I64(int64 RHS);
	void SubtractEquals(int64* LHS, int64 RHS);
	void Subtract(int64 LHS, int64 RHS);
	bool PredicateNotEqual(int64 LHS, int64 RHS);
	bool PredicateLessEqual(int64 LHS, int64 RHS);
	bool PredicateLess(int64 LHS, int64 RHS);
	bool PredicateGreaterEqual(int64 LHS, int64 RHS);
	bool PredicateGreater(int64 LHS, int64 RHS);
	bool PredicateEqual(int64 LHS, int64 RHS);
	void Negate(int64 Value);
	void MultiplyEquals(int64* LHS, int64 RHS);
	void Multiply(int64 LHS, int64 RHS);
	void LessEqual(int64 LHS, int64 RHS);
	void Less(int64 LHS, int64 RHS);
	void GreaterEqual(int64 LHS, int64 RHS);
	void Greater(int64 LHS, int64 RHS);
	void Divide(int64 LHS, int64 RHS);
	void CheckConstrainedInt(int64 Min, int64 Max, int64 Value);
	void AddEquals(int64* LHS, int64 RHS);
	void Add(int64 LHS, int64 RHS);
	void Abs(int64 Value);
};

// 0x0 (0x28 - 0x28)
// Class Solaris.SolarisMathLibrary_Rational
class USolarisMathLibrary_Rational : public UObject
{
public:

	static class UClass* StaticClass();
	static class USolarisMathLibrary_Rational* GetDefaultObj();

	void Floor(const struct FVerseRational& Val);
	void Ceil(const struct FVerseRational& Val);
};

// 0x0 (0x28 - 0x28)
// Class Solaris.SolarisMathLibrary_Float
class USolarisMathLibrary_Float : public UObject
{
public:

	static class UClass* StaticClass();
	static class USolarisMathLibrary_Float* GetDefaultObj();

	double SubtractEquals(double* LHS, double RHS);
	double Subtract(double LHS, double RHS);
	double Negate(double Value);
	double MultiplyIntFloat(int64 LHS, double RHS);
	double MultiplyFloatInt(double LHS, int64 RHS);
	double MultiplyEquals(double* LHS, double RHS);
	double Multiply(double LHS, double RHS);
	void LessEqual(double LHS, double RHS);
	void Less(double LHS, double RHS);
	void GreaterEqual(double LHS, double RHS);
	void Greater(double LHS, double RHS);
	double DivideEquals(double* LHS, double RHS);
	double Divide(double LHS, double RHS);
	void CheckConstrainedFloat(double Min, double Max, double Value);
	double AddEquals(double* LHS, double RHS);
	double Add(double LHS, double RHS);
	double Abs(double Value);
};

// 0x0 (0x28 - 0x28)
// Class Solaris.SolarisMathLibrary_String
class USolarisMathLibrary_String : public UObject
{
public:

	static class UClass* StaticClass();
	static class USolarisMathLibrary_String* GetDefaultObj();

	void UncheckedCall(int32& String, int64 Index);
	void RefCall(int32& String, int64 Index);
	void Move(int32& Destination, int32& Source);
	int32 MakeLiteral();
	void Make();
	int64 Length(int32& Array);
	int32 ConcatEquals(int32* LHS, int32& RHS);
	int32 Concat(int32& LHS, int32& RHS);
	void Call(int32& String, int64 Index);
	void Add(int32& String, int8 Character);
};

// 0x0 (0x28 - 0x28)
// Class Solaris.SolarisMathLibrary_Option
class USolarisMathLibrary_Option : public UObject
{
public:

	static class UClass* StaticClass();
	static class USolarisMathLibrary_Option* GetDefaultObj();

	void Query();
	void Make();
};

// 0x18 (0x40 - 0x28)
// Class Solaris.SolarisGameSettings
class USolarisGameSettings : public UObject
{
public:
	TArray<class FString>                        Blacklist;                                         // 0x28(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPublic)
	int32                                        MaxAllowedSize;                                    // 0x38(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1891[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class USolarisGameSettings* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Solaris.SolarisUtilLibrary
class USolarisUtilLibrary : public UObject
{
public:

	static class UClass* StaticClass();
	static class USolarisUtilLibrary* GetDefaultObj();

	int64 ReplaceOptionValue(int64 ResultProperty, int64 Option, int64 Value);
	bool ReferenceIsValid(int64 Reference);
	bool ObjectHasNoFlags(class UObject* Object, int32 Flags);
	int64 MakeUnsetOption();
	bool MakeOptionFromValue(class UObject* Property, int64 Value);
	bool IsOptionSet(int64 Option);
	bool IsNonNullObject(class UObject* Object);
	void InstantiateObject(class UClass* Class, int64 InstancingGraph);
	void InstanceFunction(class UObject* Object, class FName MethodName);
	bool HasInterface(class UObject* Object, class UClass* InterfaceClass);
	int64 GetOptionValue(int64 Option);
	void GetFunctionForInterfaceMethod(class UObject* Object, class FName MethodName);
	class UObject* GetCurrentlyInstantiatedObject();
	int64 Dereference(int64 Reference);
	void CallFunction();
	void CallFinalFunctionWithContext();
	void AddPropertyToSubobjectExclusionList(int64 InstancingGraph, int64 Property);
};

// 0xE8 (0x2E8 - 0x200)
// Class Solaris.VerseClass
class UVerseClass : public UVerseClassBase
{
public:
	uint32                                       SolClassFlags;                                     // 0x200(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18D1[0x4];                                     // Fixing Size After Last Property 
	TArray<TSubclassOf<class UObject>>           TaskClasses;                                       // 0x208(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TSet<TSubclassOf<class UObject>>             InterfaceClasses;                                  // 0x218(0x50)(UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<class FName, FFieldPathProperty_>       InterfaceMethodFunctionProperties;                 // 0x268(0x50)(NativeAccessSpecifierPublic)
	class UFunction*                             InitInstanceFunction;                              // 0x2B8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVersePersistentVar>           PersistentVars;                                    // 0x2C0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVerseSessionVar>              SessionVars;                                       // 0x2D0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_18D5[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UVerseClass* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class Solaris.VerseDebugData
class UVerseDebugData : public UObject
{
public:
	uint8                                        Pad_18D8[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UVerseDebugData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Solaris.VerseDynamicallyTypedValueLibrary
class UVerseDynamicallyTypedValueLibrary : public UObject
{
public:

	static class UClass* StaticClass();
	static class UVerseDynamicallyTypedValueLibrary* GetDefaultObj();

	void NotEqual(int32 Left, int32 Right);
	void MakeRuntimeTypeTuple(const TArray<int32>& ValueType);
	void MakeRuntimeTypeStruct(class UStruct* Struct);
	void MakeRuntimeTypeString();
	void MakeRuntimeTypeOption(int32 ValueType);
	void MakeRuntimeTypeObject();
	void MakeRuntimeTypeMap(int32 KeyType, int32 ValueType);
	void MakeRuntimeTypeLogic();
	void MakeRuntimeTypeInt64();
	void MakeRuntimeTypeFunction();
	void MakeRuntimeTypeFloat();
	void MakeRuntimeTypeEnum(class FName Name);
	void MakeRuntimeTypeDynamic();
	void MakeRuntimeTypeClass();
	void MakeRuntimeTypeChar8();
	void MakeRuntimeTypeChar32();
	void MakeRuntimeTypeArray(int32 ElementType);
	void Equal(int32 Left, int32 Right);
	void ConvertToDynamicallyTypedValue(int32 RuntimeType, int32 Value);
	void ConvertFromDynamicallyTypedValue(int32 RuntimeType, int32 Value);
};

}


