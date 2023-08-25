#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class VerseNative.VerseClassBase
// (Field, Struct, Class)

class UClass* UVerseClassBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseClassBase");

	return Clss;
}


// VerseClassBase VerseNative.Default__VerseClassBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UVerseClassBase* UVerseClassBase::GetDefaultObj()
{
	static class UVerseClassBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseClassBase*>(UVerseClassBase::StaticClass()->DefaultObject);

	return Default;
}


// Class VerseNative.VersePersistentVarWeakMapKey
// (None)

class UClass* UVersePersistentVarWeakMapKey::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VersePersistentVarWeakMapKey");

	return Clss;
}


// VersePersistentVarWeakMapKey VerseNative.Default__VersePersistentVarWeakMapKey
// (Public, ClassDefaultObject, ArchetypeObject)

class UVersePersistentVarWeakMapKey* UVersePersistentVarWeakMapKey::GetDefaultObj()
{
	static class UVersePersistentVarWeakMapKey* Default = nullptr;

	if (!Default)
		Default = static_cast<UVersePersistentVarWeakMapKey*>(UVersePersistentVarWeakMapKey::StaticClass()->DefaultObject);

	return Default;
}


// Class VerseNative.VerseAsset
// (None)

class UClass* UVerseAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseAsset");

	return Clss;
}


// VerseAsset VerseNative.Default__VerseAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UVerseAsset* UVerseAsset::GetDefaultObj()
{
	static class UVerseAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseAsset*>(UVerseAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class VerseNative.VerseStmLibrary
// (None)

class UClass* UVerseStmLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseStmLibrary");

	return Clss;
}


// VerseStmLibrary VerseNative.Default__VerseStmLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UVerseStmLibrary* UVerseStmLibrary::GetDefaultObj()
{
	static class UVerseStmLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseStmLibrary*>(UVerseStmLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseNative.VerseStmLibrary.StmSave
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// struct FAkeType                    Property                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UVerseStmLibrary::StmSave(struct FAkeType& Property)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseStmLibrary", "StmSave");

	Params::UVerseStmLibrary_StmSave_Params Parms{};

	Parms.Property = Property;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseNative.VerseStmLibrary.StmRollback
// (Final, Native, Static, Public)
// Parameters:

void UVerseStmLibrary::StmRollback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseStmLibrary", "StmRollback");

	Params::UVerseStmLibrary_StmRollback_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseNative.VerseStmLibrary.StmLeaveFrame
// (Final, Native, Static, Public)
// Parameters:

void UVerseStmLibrary::StmLeaveFrame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseStmLibrary", "StmLeaveFrame");

	Params::UVerseStmLibrary_StmLeaveFrame_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseNative.VerseStmLibrary.StmEnterFrame
// (Final, Native, Static, Public)
// Parameters:

void UVerseStmLibrary::StmEnterFrame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseStmLibrary", "StmEnterFrame");

	Params::UVerseStmLibrary_StmEnterFrame_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseNative.VerseStmLibrary.StmEnabled
// (Final, Native, Static, Public)
// Parameters:

void UVerseStmLibrary::StmEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseStmLibrary", "StmEnabled");

	Params::UVerseStmLibrary_StmEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseNative.VerseStmLibrary.StmCommit
// (Final, Native, Static, Public)
// Parameters:

void UVerseStmLibrary::StmCommit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseStmLibrary", "StmCommit");

	Params::UVerseStmLibrary_StmCommit_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseNative.VerseStmLibrary.StmBegin
// (Final, Native, Static, Public)
// Parameters:

void UVerseStmLibrary::StmBegin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseStmLibrary", "StmBegin");

	Params::UVerseStmLibrary_StmBegin_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


