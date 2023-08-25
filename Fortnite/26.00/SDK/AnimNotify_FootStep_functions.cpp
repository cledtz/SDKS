#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnimNotify_FootStep.AnimNotify_FootStep_C
// (None)

class UClass* UAnimNotify_FootStep_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotify_FootStep_C");

	return Clss;
}


// AnimNotify_FootStep_C AnimNotify_FootStep.Default__AnimNotify_FootStep_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimNotify_FootStep_C* UAnimNotify_FootStep_C::GetDefaultObj()
{
	static class UAnimNotify_FootStep_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotify_FootStep_C*>(UAnimNotify_FootStep_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimNotify_FootStep.AnimNotify_FootStep_C.AudioPreview
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UActor*                      InActor                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_DynamicCast_AsAnimation_Editor_Preview_Actor              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundLibrarySubsystem*      CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_AnimPreviewFoleyComponent_C*CallFunc_FindOrAddArbitraryComponent_ReturnValue                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USoundLibraryContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerFoleyContext*     K2Node_DynamicCast_AsFort_Player_Foley_Context                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSoundLibraryPlayResult     CallFunc_PlaySound_OutResults                                    (ContainsInstancedReference)

void UAnimNotify_FootStep_C::AudioPreview(class UActor* InActor, class UObject* K2Node_DynamicCast_AsAnimation_Editor_Preview_Actor, bool K2Node_DynamicCast_bSuccess, class USoundLibrarySubsystem* CallFunc_GetWorldSubsystem_ReturnValue, class UBP_AnimPreviewFoleyComponent_C* CallFunc_FindOrAddArbitraryComponent_ReturnValue, class USoundLibraryContext* CallFunc_GetContext_ReturnValue, class UFortPlayerFoleyContext* K2Node_DynamicCast_AsFort_Player_Foley_Context, bool K2Node_DynamicCast_bSuccess_1, const struct FSoundLibraryPlayResult& CallFunc_PlaySound_OutResults)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimNotify_FootStep_C", "AudioPreview");

	Params::UAnimNotify_FootStep_C_AudioPreview_Params Parms{};

	Parms.InActor = InActor;
	Parms.K2Node_DynamicCast_AsAnimation_Editor_Preview_Actor = K2Node_DynamicCast_AsAnimation_Editor_Preview_Actor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_FindOrAddArbitraryComponent_ReturnValue = CallFunc_FindOrAddArbitraryComponent_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Foley_Context = K2Node_DynamicCast_AsFort_Player_Foley_Context;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_PlaySound_OutResults = CallFunc_PlaySound_OutResults;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AnimNotify_FootStep.AnimNotify_FootStep_C.Received_Notify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAnimNotifyEventReference   EventReference                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPawn*                   K2Node_DynamicCast_AsFort_Pawn                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAnimNotify_FootStep_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class UActor* CallFunc_GetOwner_ReturnValue, class UFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimNotify_FootStep_C", "Received_Notify");

	Params::UAnimNotify_FootStep_C_Received_Notify_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.EventReference = EventReference;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Pawn = K2Node_DynamicCast_AsFort_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


