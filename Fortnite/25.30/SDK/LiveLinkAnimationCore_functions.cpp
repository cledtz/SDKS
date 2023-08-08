#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function LiveLinkAnimationCore.LiveLinkInstance.SetSubject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectName        SubjectName                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULiveLinkInstance::SetSubject(const struct FLiveLinkSubjectName& SubjectName)
{
	static auto Func = Class->GetFunction("LiveLinkInstance", "SetSubject");

	Params::ULiveLinkInstance_SetSubject_Params Parms;

	Parms.SubjectName = SubjectName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LiveLinkAnimationCore.LiveLinkInstance.SetRetargetAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class ULiveLinkRetargetAsset>RetargetAsset                                                    (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULiveLinkInstance::SetRetargetAsset(TSubclassOf<class ULiveLinkRetargetAsset> RetargetAsset)
{
	static auto Func = Class->GetFunction("LiveLinkInstance", "SetRetargetAsset");

	Params::ULiveLinkInstance_SetRetargetAsset_Params Parms;

	Parms.RetargetAsset = RetargetAsset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LiveLinkAnimationCore.LiveLinkRemapAsset.RemapCurveElements
// (Native, Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// TMap<class FName, float>           CurveItems                                                       (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULiveLinkRemapAsset::RemapCurveElements(TMap<class FName, float>& CurveItems)
{
	static auto Func = Class->GetFunction("LiveLinkRemapAsset", "RemapCurveElements");

	Params::ULiveLinkRemapAsset_RemapCurveElements_Params Parms;

	Parms.CurveItems = CurveItems;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LiveLinkAnimationCore.LiveLinkRemapAsset.GetRemappedCurveName
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class FName                        CurveName                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName ULiveLinkRemapAsset::GetRemappedCurveName(class FName CurveName)
{
	static auto Func = Class->GetFunction("LiveLinkRemapAsset", "GetRemappedCurveName");

	Params::ULiveLinkRemapAsset_GetRemappedCurveName_Params Parms;

	Parms.CurveName = CurveName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LiveLinkAnimationCore.LiveLinkRemapAsset.GetRemappedBoneName
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName ULiveLinkRemapAsset::GetRemappedBoneName(class FName BoneName)
{
	static auto Func = Class->GetFunction("LiveLinkRemapAsset", "GetRemappedBoneName");

	Params::ULiveLinkRemapAsset_GetRemappedBoneName_Params Parms;

	Parms.BoneName = BoneName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
