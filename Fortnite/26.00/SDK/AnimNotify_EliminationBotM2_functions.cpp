#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnimNotify_EliminationBotM2.AnimNotify_EliminationBotM2_C
// (None)

class UClass* UAnimNotify_EliminationBotM2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotify_EliminationBotM2_C");

	return Clss;
}


// AnimNotify_EliminationBotM2_C AnimNotify_EliminationBotM2.Default__AnimNotify_EliminationBotM2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimNotify_EliminationBotM2_C* UAnimNotify_EliminationBotM2_C::GetDefaultObj()
{
	static class UAnimNotify_EliminationBotM2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotify_EliminationBotM2_C*>(UAnimNotify_EliminationBotM2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimNotify_EliminationBotM2.AnimNotify_EliminationBotM2_C.Received_Notify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAnimNotifyEventReference   EventReference                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_TeleportationDrone_C*    K2Node_DynamicCast_AsBP_Teleportation_Drone                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class UEliminationBotVFXInterface_C>K2Node_DynamicCast_AsElimination_Bot_VFXInterface                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAnimNotify_EliminationBotM2_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class UActor* CallFunc_GetOwner_ReturnValue, class UBP_TeleportationDrone_C* K2Node_DynamicCast_AsBP_Teleportation_Drone, bool K2Node_DynamicCast_bSuccess, class UActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_DoesImplementInterface_ReturnValue, TScriptInterface<class UEliminationBotVFXInterface_C> K2Node_DynamicCast_AsElimination_Bot_VFXInterface, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimNotify_EliminationBotM2_C", "Received_Notify");

	Params::UAnimNotify_EliminationBotM2_C_Received_Notify_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.EventReference = EventReference;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Teleportation_Drone = K2Node_DynamicCast_AsBP_Teleportation_Drone;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_DoesImplementInterface_ReturnValue = CallFunc_DoesImplementInterface_ReturnValue;
	Parms.K2Node_DynamicCast_AsElimination_Bot_VFXInterface = K2Node_DynamicCast_AsElimination_Bot_VFXInterface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


