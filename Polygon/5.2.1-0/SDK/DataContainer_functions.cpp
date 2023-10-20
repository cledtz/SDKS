#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class DataContainer.DataContainerAsset
// (None)

class UClass* UDataContainerAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataContainerAsset");

	return Clss;
}


// DataContainerAsset DataContainer.Default__DataContainerAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UDataContainerAsset* UDataContainerAsset::GetDefaultObj()
{
	static class UDataContainerAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataContainerAsset*>(UDataContainerAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class DataContainer.DataContainerValue_Base
// (None)

class UClass* UDataContainerValue_Base::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataContainerValue_Base");

	return Clss;
}


// DataContainerValue_Base DataContainer.Default__DataContainerValue_Base
// (Public, ClassDefaultObject, ArchetypeObject)

class UDataContainerValue_Base* UDataContainerValue_Base::GetDefaultObj()
{
	static class UDataContainerValue_Base* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataContainerValue_Base*>(UDataContainerValue_Base::StaticClass()->DefaultObject);

	return Default;
}


// Function DataContainer.DataContainerValue_Base.FindDataContainerValue
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      TagPath                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDataContainerValue_Base*    ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDataContainerValue_Base* UDataContainerValue_Base::FindDataContainerValue(const class FString& TagPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataContainerValue_Base", "FindDataContainerValue");

	Params::UDataContainerValue_Base_FindDataContainerValue_Params Parms{};

	Parms.TagPath = TagPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class DataContainer.DataContainerValue_DataObject
// (None)

class UClass* UDataContainerValue_DataObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataContainerValue_DataObject");

	return Clss;
}


// DataContainerValue_DataObject DataContainer.Default__DataContainerValue_DataObject
// (Public, ClassDefaultObject, ArchetypeObject)

class UDataContainerValue_DataObject* UDataContainerValue_DataObject::GetDefaultObj()
{
	static class UDataContainerValue_DataObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataContainerValue_DataObject*>(UDataContainerValue_DataObject::StaticClass()->DefaultObject);

	return Default;
}


// Class DataContainer.DataContainerValue_DataObjectArray
// (None)

class UClass* UDataContainerValue_DataObjectArray::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataContainerValue_DataObjectArray");

	return Clss;
}


// DataContainerValue_DataObjectArray DataContainer.Default__DataContainerValue_DataObjectArray
// (Public, ClassDefaultObject, ArchetypeObject)

class UDataContainerValue_DataObjectArray* UDataContainerValue_DataObjectArray::GetDefaultObj()
{
	static class UDataContainerValue_DataObjectArray* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataContainerValue_DataObjectArray*>(UDataContainerValue_DataObjectArray::StaticClass()->DefaultObject);

	return Default;
}


// Class DataContainer.DataContainerValue_Bool
// (None)

class UClass* UDataContainerValue_Bool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataContainerValue_Bool");

	return Clss;
}


// DataContainerValue_Bool DataContainer.Default__DataContainerValue_Bool
// (Public, ClassDefaultObject, ArchetypeObject)

class UDataContainerValue_Bool* UDataContainerValue_Bool::GetDefaultObj()
{
	static class UDataContainerValue_Bool* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataContainerValue_Bool*>(UDataContainerValue_Bool::StaticClass()->DefaultObject);

	return Default;
}


// Class DataContainer.DataContainerValue_BoolArray
// (None)

class UClass* UDataContainerValue_BoolArray::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataContainerValue_BoolArray");

	return Clss;
}


// DataContainerValue_BoolArray DataContainer.Default__DataContainerValue_BoolArray
// (Public, ClassDefaultObject, ArchetypeObject)

class UDataContainerValue_BoolArray* UDataContainerValue_BoolArray::GetDefaultObj()
{
	static class UDataContainerValue_BoolArray* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataContainerValue_BoolArray*>(UDataContainerValue_BoolArray::StaticClass()->DefaultObject);

	return Default;
}


// Class DataContainer.DataContainerValue_Int32
// (None)

class UClass* UDataContainerValue_Int32::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataContainerValue_Int32");

	return Clss;
}


// DataContainerValue_Int32 DataContainer.Default__DataContainerValue_Int32
// (Public, ClassDefaultObject, ArchetypeObject)

class UDataContainerValue_Int32* UDataContainerValue_Int32::GetDefaultObj()
{
	static class UDataContainerValue_Int32* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataContainerValue_Int32*>(UDataContainerValue_Int32::StaticClass()->DefaultObject);

	return Default;
}


// Class DataContainer.DataContainerValue_Int32Array
// (None)

class UClass* UDataContainerValue_Int32Array::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataContainerValue_Int32Array");

	return Clss;
}


// DataContainerValue_Int32Array DataContainer.Default__DataContainerValue_Int32Array
// (Public, ClassDefaultObject, ArchetypeObject)

class UDataContainerValue_Int32Array* UDataContainerValue_Int32Array::GetDefaultObj()
{
	static class UDataContainerValue_Int32Array* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataContainerValue_Int32Array*>(UDataContainerValue_Int32Array::StaticClass()->DefaultObject);

	return Default;
}


// Class DataContainer.DataContainerValue_Float
// (None)

class UClass* UDataContainerValue_Float::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataContainerValue_Float");

	return Clss;
}


// DataContainerValue_Float DataContainer.Default__DataContainerValue_Float
// (Public, ClassDefaultObject, ArchetypeObject)

class UDataContainerValue_Float* UDataContainerValue_Float::GetDefaultObj()
{
	static class UDataContainerValue_Float* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataContainerValue_Float*>(UDataContainerValue_Float::StaticClass()->DefaultObject);

	return Default;
}


// Class DataContainer.DataContainerValue_FloatArray
// (None)

class UClass* UDataContainerValue_FloatArray::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataContainerValue_FloatArray");

	return Clss;
}


// DataContainerValue_FloatArray DataContainer.Default__DataContainerValue_FloatArray
// (Public, ClassDefaultObject, ArchetypeObject)

class UDataContainerValue_FloatArray* UDataContainerValue_FloatArray::GetDefaultObj()
{
	static class UDataContainerValue_FloatArray* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataContainerValue_FloatArray*>(UDataContainerValue_FloatArray::StaticClass()->DefaultObject);

	return Default;
}


// Class DataContainer.DataContainerValue_Uint8
// (None)

class UClass* UDataContainerValue_Uint8::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataContainerValue_Uint8");

	return Clss;
}


// DataContainerValue_Uint8 DataContainer.Default__DataContainerValue_Uint8
// (Public, ClassDefaultObject, ArchetypeObject)

class UDataContainerValue_Uint8* UDataContainerValue_Uint8::GetDefaultObj()
{
	static class UDataContainerValue_Uint8* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataContainerValue_Uint8*>(UDataContainerValue_Uint8::StaticClass()->DefaultObject);

	return Default;
}


// Class DataContainer.DataContainerValue_Uint8Array
// (None)

class UClass* UDataContainerValue_Uint8Array::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataContainerValue_Uint8Array");

	return Clss;
}


// DataContainerValue_Uint8Array DataContainer.Default__DataContainerValue_Uint8Array
// (Public, ClassDefaultObject, ArchetypeObject)

class UDataContainerValue_Uint8Array* UDataContainerValue_Uint8Array::GetDefaultObj()
{
	static class UDataContainerValue_Uint8Array* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataContainerValue_Uint8Array*>(UDataContainerValue_Uint8Array::StaticClass()->DefaultObject);

	return Default;
}


// Class DataContainer.DataContainerValue_FString
// (None)

class UClass* UDataContainerValue_FString::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataContainerValue_FString");

	return Clss;
}


// DataContainerValue_FString DataContainer.Default__DataContainerValue_FString
// (Public, ClassDefaultObject, ArchetypeObject)

class UDataContainerValue_FString* UDataContainerValue_FString::GetDefaultObj()
{
	static class UDataContainerValue_FString* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataContainerValue_FString*>(UDataContainerValue_FString::StaticClass()->DefaultObject);

	return Default;
}


// Class DataContainer.DataContainerValue_FStringArray
// (None)

class UClass* UDataContainerValue_FStringArray::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataContainerValue_FStringArray");

	return Clss;
}


// DataContainerValue_FStringArray DataContainer.Default__DataContainerValue_FStringArray
// (Public, ClassDefaultObject, ArchetypeObject)

class UDataContainerValue_FStringArray* UDataContainerValue_FStringArray::GetDefaultObj()
{
	static class UDataContainerValue_FStringArray* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataContainerValue_FStringArray*>(UDataContainerValue_FStringArray::StaticClass()->DefaultObject);

	return Default;
}


// Class DataContainer.DataContainerValue_FText
// (None)

class UClass* UDataContainerValue_FText::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataContainerValue_FText");

	return Clss;
}


// DataContainerValue_FText DataContainer.Default__DataContainerValue_FText
// (Public, ClassDefaultObject, ArchetypeObject)

class UDataContainerValue_FText* UDataContainerValue_FText::GetDefaultObj()
{
	static class UDataContainerValue_FText* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataContainerValue_FText*>(UDataContainerValue_FText::StaticClass()->DefaultObject);

	return Default;
}


// Class DataContainer.DataContainerValue_FTextArray
// (None)

class UClass* UDataContainerValue_FTextArray::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataContainerValue_FTextArray");

	return Clss;
}


// DataContainerValue_FTextArray DataContainer.Default__DataContainerValue_FTextArray
// (Public, ClassDefaultObject, ArchetypeObject)

class UDataContainerValue_FTextArray* UDataContainerValue_FTextArray::GetDefaultObj()
{
	static class UDataContainerValue_FTextArray* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataContainerValue_FTextArray*>(UDataContainerValue_FTextArray::StaticClass()->DefaultObject);

	return Default;
}


// Class DataContainer.DataContainerValue_FVector
// (None)

class UClass* UDataContainerValue_FVector::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataContainerValue_FVector");

	return Clss;
}


// DataContainerValue_FVector DataContainer.Default__DataContainerValue_FVector
// (Public, ClassDefaultObject, ArchetypeObject)

class UDataContainerValue_FVector* UDataContainerValue_FVector::GetDefaultObj()
{
	static class UDataContainerValue_FVector* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataContainerValue_FVector*>(UDataContainerValue_FVector::StaticClass()->DefaultObject);

	return Default;
}


// Class DataContainer.DataContainerValue_FVectorArray
// (None)

class UClass* UDataContainerValue_FVectorArray::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataContainerValue_FVectorArray");

	return Clss;
}


// DataContainerValue_FVectorArray DataContainer.Default__DataContainerValue_FVectorArray
// (Public, ClassDefaultObject, ArchetypeObject)

class UDataContainerValue_FVectorArray* UDataContainerValue_FVectorArray::GetDefaultObj()
{
	static class UDataContainerValue_FVectorArray* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataContainerValue_FVectorArray*>(UDataContainerValue_FVectorArray::StaticClass()->DefaultObject);

	return Default;
}


// Class DataContainer.DataContainerValue_UObject
// (None)

class UClass* UDataContainerValue_UObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataContainerValue_UObject");

	return Clss;
}


// DataContainerValue_UObject DataContainer.Default__DataContainerValue_UObject
// (Public, ClassDefaultObject, ArchetypeObject)

class UDataContainerValue_UObject* UDataContainerValue_UObject::GetDefaultObj()
{
	static class UDataContainerValue_UObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataContainerValue_UObject*>(UDataContainerValue_UObject::StaticClass()->DefaultObject);

	return Default;
}


// Class DataContainer.DataContainerValue_UObjectArray
// (None)

class UClass* UDataContainerValue_UObjectArray::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataContainerValue_UObjectArray");

	return Clss;
}


// DataContainerValue_UObjectArray DataContainer.Default__DataContainerValue_UObjectArray
// (Public, ClassDefaultObject, ArchetypeObject)

class UDataContainerValue_UObjectArray* UDataContainerValue_UObjectArray::GetDefaultObj()
{
	static class UDataContainerValue_UObjectArray* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataContainerValue_UObjectArray*>(UDataContainerValue_UObjectArray::StaticClass()->DefaultObject);

	return Default;
}


// Class DataContainer.DataContainerValue_TSoftObjectPtr
// (None)

class UClass* UDataContainerValue_TSoftObjectPtr::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataContainerValue_TSoftObjectPtr");

	return Clss;
}


// DataContainerValue_TSoftObjectPtr DataContainer.Default__DataContainerValue_TSoftObjectPtr
// (Public, ClassDefaultObject, ArchetypeObject)

class UDataContainerValue_TSoftObjectPtr* UDataContainerValue_TSoftObjectPtr::GetDefaultObj()
{
	static class UDataContainerValue_TSoftObjectPtr* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataContainerValue_TSoftObjectPtr*>(UDataContainerValue_TSoftObjectPtr::StaticClass()->DefaultObject);

	return Default;
}


// Class DataContainer.DataContainerValue_TSoftObjectPtrArray
// (None)

class UClass* UDataContainerValue_TSoftObjectPtrArray::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataContainerValue_TSoftObjectPtrArray");

	return Clss;
}


// DataContainerValue_TSoftObjectPtrArray DataContainer.Default__DataContainerValue_TSoftObjectPtrArray
// (Public, ClassDefaultObject, ArchetypeObject)

class UDataContainerValue_TSoftObjectPtrArray* UDataContainerValue_TSoftObjectPtrArray::GetDefaultObj()
{
	static class UDataContainerValue_TSoftObjectPtrArray* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataContainerValue_TSoftObjectPtrArray*>(UDataContainerValue_TSoftObjectPtrArray::StaticClass()->DefaultObject);

	return Default;
}


// Class DataContainer.DataContainerValue_UClass
// (None)

class UClass* UDataContainerValue_UClass::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataContainerValue_UClass");

	return Clss;
}


// DataContainerValue_UClass DataContainer.Default__DataContainerValue_UClass
// (Public, ClassDefaultObject, ArchetypeObject)

class UDataContainerValue_UClass* UDataContainerValue_UClass::GetDefaultObj()
{
	static class UDataContainerValue_UClass* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataContainerValue_UClass*>(UDataContainerValue_UClass::StaticClass()->DefaultObject);

	return Default;
}


// Class DataContainer.DataContainerValue_UClassArray
// (None)

class UClass* UDataContainerValue_UClassArray::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataContainerValue_UClassArray");

	return Clss;
}


// DataContainerValue_UClassArray DataContainer.Default__DataContainerValue_UClassArray
// (Public, ClassDefaultObject, ArchetypeObject)

class UDataContainerValue_UClassArray* UDataContainerValue_UClassArray::GetDefaultObj()
{
	static class UDataContainerValue_UClassArray* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataContainerValue_UClassArray*>(UDataContainerValue_UClassArray::StaticClass()->DefaultObject);

	return Default;
}


// Class DataContainer.DataContainerValue_TSoftClassPtr
// (None)

class UClass* UDataContainerValue_TSoftClassPtr::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataContainerValue_TSoftClassPtr");

	return Clss;
}


// DataContainerValue_TSoftClassPtr DataContainer.Default__DataContainerValue_TSoftClassPtr
// (Public, ClassDefaultObject, ArchetypeObject)

class UDataContainerValue_TSoftClassPtr* UDataContainerValue_TSoftClassPtr::GetDefaultObj()
{
	static class UDataContainerValue_TSoftClassPtr* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataContainerValue_TSoftClassPtr*>(UDataContainerValue_TSoftClassPtr::StaticClass()->DefaultObject);

	return Default;
}


// Class DataContainer.DataContainerValue_TSoftClassPtrArray
// (None)

class UClass* UDataContainerValue_TSoftClassPtrArray::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataContainerValue_TSoftClassPtrArray");

	return Clss;
}


// DataContainerValue_TSoftClassPtrArray DataContainer.Default__DataContainerValue_TSoftClassPtrArray
// (Public, ClassDefaultObject, ArchetypeObject)

class UDataContainerValue_TSoftClassPtrArray* UDataContainerValue_TSoftClassPtrArray::GetDefaultObj()
{
	static class UDataContainerValue_TSoftClassPtrArray* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataContainerValue_TSoftClassPtrArray*>(UDataContainerValue_TSoftClassPtrArray::StaticClass()->DefaultObject);

	return Default;
}


// Class DataContainer.DataContainerValue_DataTable
// (None)

class UClass* UDataContainerValue_DataTable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataContainerValue_DataTable");

	return Clss;
}


// DataContainerValue_DataTable DataContainer.Default__DataContainerValue_DataTable
// (Public, ClassDefaultObject, ArchetypeObject)

class UDataContainerValue_DataTable* UDataContainerValue_DataTable::GetDefaultObj()
{
	static class UDataContainerValue_DataTable* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataContainerValue_DataTable*>(UDataContainerValue_DataTable::StaticClass()->DefaultObject);

	return Default;
}


// Class DataContainer.DataContainerValue_DataTableArray
// (None)

class UClass* UDataContainerValue_DataTableArray::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataContainerValue_DataTableArray");

	return Clss;
}


// DataContainerValue_DataTableArray DataContainer.Default__DataContainerValue_DataTableArray
// (Public, ClassDefaultObject, ArchetypeObject)

class UDataContainerValue_DataTableArray* UDataContainerValue_DataTableArray::GetDefaultObj()
{
	static class UDataContainerValue_DataTableArray* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataContainerValue_DataTableArray*>(UDataContainerValue_DataTableArray::StaticClass()->DefaultObject);

	return Default;
}

}


