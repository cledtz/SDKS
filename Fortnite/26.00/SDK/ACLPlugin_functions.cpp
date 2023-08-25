#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ACLPlugin.AnimationCompressionLibraryDatabase
// (None)

class UClass* UAnimationCompressionLibraryDatabase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimationCompressionLibraryDatabase");

	return Clss;
}


// AnimationCompressionLibraryDatabase ACLPlugin.Default__AnimationCompressionLibraryDatabase
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimationCompressionLibraryDatabase* UAnimationCompressionLibraryDatabase::GetDefaultObj()
{
	static class UAnimationCompressionLibraryDatabase* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimationCompressionLibraryDatabase*>(UAnimationCompressionLibraryDatabase::StaticClass()->DefaultObject);

	return Default;
}


// Function ACLPlugin.AnimationCompressionLibraryDatabase.SetVisualFidelity
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UAnimationCompressionLibraryDatabase*DatabaseAsset                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EACLVisualFidelityChangeResultResult                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EACLVisualFidelity      VisualFidelity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAnimationCompressionLibraryDatabase::SetVisualFidelity(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UAnimationCompressionLibraryDatabase* DatabaseAsset, enum class EACLVisualFidelityChangeResult* Result, enum class EACLVisualFidelity VisualFidelity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimationCompressionLibraryDatabase", "SetVisualFidelity");

	Params::UAnimationCompressionLibraryDatabase_SetVisualFidelity_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.LatentInfo = LatentInfo;
	Parms.DatabaseAsset = DatabaseAsset;
	Parms.VisualFidelity = VisualFidelity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function ACLPlugin.AnimationCompressionLibraryDatabase.GetVisualFidelity
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAnimationCompressionLibraryDatabase*DatabaseAsset                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EACLVisualFidelity      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EACLVisualFidelity UAnimationCompressionLibraryDatabase::GetVisualFidelity(class UAnimationCompressionLibraryDatabase* DatabaseAsset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimationCompressionLibraryDatabase", "GetVisualFidelity");

	Params::UAnimationCompressionLibraryDatabase_GetVisualFidelity_Params Parms{};

	Parms.DatabaseAsset = DatabaseAsset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ACLPlugin.AnimBoneCompressionCodec_ACLBase
// (None)

class UClass* UAnimBoneCompressionCodec_ACLBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimBoneCompressionCodec_ACLBase");

	return Clss;
}


// AnimBoneCompressionCodec_ACLBase ACLPlugin.Default__AnimBoneCompressionCodec_ACLBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimBoneCompressionCodec_ACLBase* UAnimBoneCompressionCodec_ACLBase::GetDefaultObj()
{
	static class UAnimBoneCompressionCodec_ACLBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimBoneCompressionCodec_ACLBase*>(UAnimBoneCompressionCodec_ACLBase::StaticClass()->DefaultObject);

	return Default;
}


// Class ACLPlugin.AnimBoneCompressionCodec_ACL
// (None)

class UClass* UAnimBoneCompressionCodec_ACL::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimBoneCompressionCodec_ACL");

	return Clss;
}


// AnimBoneCompressionCodec_ACL ACLPlugin.Default__AnimBoneCompressionCodec_ACL
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimBoneCompressionCodec_ACL* UAnimBoneCompressionCodec_ACL::GetDefaultObj()
{
	static class UAnimBoneCompressionCodec_ACL* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimBoneCompressionCodec_ACL*>(UAnimBoneCompressionCodec_ACL::StaticClass()->DefaultObject);

	return Default;
}


// Class ACLPlugin.AnimBoneCompressionCodec_ACLCustom
// (None)

class UClass* UAnimBoneCompressionCodec_ACLCustom::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimBoneCompressionCodec_ACLCustom");

	return Clss;
}


// AnimBoneCompressionCodec_ACLCustom ACLPlugin.Default__AnimBoneCompressionCodec_ACLCustom
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimBoneCompressionCodec_ACLCustom* UAnimBoneCompressionCodec_ACLCustom::GetDefaultObj()
{
	static class UAnimBoneCompressionCodec_ACLCustom* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimBoneCompressionCodec_ACLCustom*>(UAnimBoneCompressionCodec_ACLCustom::StaticClass()->DefaultObject);

	return Default;
}


// Class ACLPlugin.AnimBoneCompressionCodec_ACLDatabase
// (None)

class UClass* UAnimBoneCompressionCodec_ACLDatabase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimBoneCompressionCodec_ACLDatabase");

	return Clss;
}


// AnimBoneCompressionCodec_ACLDatabase ACLPlugin.Default__AnimBoneCompressionCodec_ACLDatabase
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimBoneCompressionCodec_ACLDatabase* UAnimBoneCompressionCodec_ACLDatabase::GetDefaultObj()
{
	static class UAnimBoneCompressionCodec_ACLDatabase* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimBoneCompressionCodec_ACLDatabase*>(UAnimBoneCompressionCodec_ACLDatabase::StaticClass()->DefaultObject);

	return Default;
}


// Class ACLPlugin.AnimBoneCompressionCodec_ACLSafe
// (None)

class UClass* UAnimBoneCompressionCodec_ACLSafe::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimBoneCompressionCodec_ACLSafe");

	return Clss;
}


// AnimBoneCompressionCodec_ACLSafe ACLPlugin.Default__AnimBoneCompressionCodec_ACLSafe
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimBoneCompressionCodec_ACLSafe* UAnimBoneCompressionCodec_ACLSafe::GetDefaultObj()
{
	static class UAnimBoneCompressionCodec_ACLSafe* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimBoneCompressionCodec_ACLSafe*>(UAnimBoneCompressionCodec_ACLSafe::StaticClass()->DefaultObject);

	return Default;
}


// Class ACLPlugin.AnimCurveCompressionCodec_ACL
// (None)

class UClass* UAnimCurveCompressionCodec_ACL::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimCurveCompressionCodec_ACL");

	return Clss;
}


// AnimCurveCompressionCodec_ACL ACLPlugin.Default__AnimCurveCompressionCodec_ACL
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimCurveCompressionCodec_ACL* UAnimCurveCompressionCodec_ACL::GetDefaultObj()
{
	static class UAnimCurveCompressionCodec_ACL* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimCurveCompressionCodec_ACL*>(UAnimCurveCompressionCodec_ACL::StaticClass()->DefaultObject);

	return Default;
}

}


