#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function VaultWorld.VaultWorld_C.GetVaultRotator
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AVaultRotator_C*             VaultRotator                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AVaultRotator_C*             K2Node_DynamicCast_AsVault_Rotator                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVaultWorld_C::GetVaultRotator(class AVaultRotator_C** VaultRotator, class AVaultRotator_C* K2Node_DynamicCast_AsVault_Rotator, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("VaultWorld_C", "GetVaultRotator");

	Params::AVaultWorld_C_GetVaultRotator_Params Parms;

	Parms.K2Node_DynamicCast_AsVault_Rotator = K2Node_DynamicCast_AsVault_Rotator;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (VaultRotator != nullptr)
		*VaultRotator = Parms.VaultRotator;

}


// Function VaultWorld.VaultWorld_C.OnSetupBackground
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class UTexture2D*                  LoadedBackgroundTexture                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVaultWorldBackgroundData   BackgroundInfo                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AVaultWorld_C::OnSetupBackground(class UTexture2D* LoadedBackgroundTexture, struct FVaultWorldBackgroundData& BackgroundInfo)
{
	static auto Func = Class->GetFunction("VaultWorld_C", "OnSetupBackground");

	Params::AVaultWorld_C_OnSetupBackground_Params Parms;

	Parms.LoadedBackgroundTexture = LoadedBackgroundTexture;
	Parms.BackgroundInfo = BackgroundInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultWorld.VaultWorld_C.OnTransitionBackground
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bPlayForward                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBackgroundIntensityLevelIntensityTransition                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVaultWorld_C::OnTransitionBackground(bool bPlayForward, enum class EBackgroundIntensityLevel IntensityTransition)
{
	static auto Func = Class->GetFunction("VaultWorld_C", "OnTransitionBackground");

	Params::AVaultWorld_C_OnTransitionBackground_Params Parms;

	Parms.bPlayForward = bPlayForward;
	Parms.IntensityTransition = IntensityTransition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultWorld.VaultWorld_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AVaultWorld_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("VaultWorld_C", "ReceiveBeginPlay");

	Params::AVaultWorld_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultWorld.VaultWorld_C.OnUpdateDisplay
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bShowFloor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bShowEffects                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVaultWorld_C::OnUpdateDisplay(bool bShowFloor, bool bShowEffects)
{
	static auto Func = Class->GetFunction("VaultWorld_C", "OnUpdateDisplay");

	Params::AVaultWorld_C_OnUpdateDisplay_Params Parms;

	Parms.bShowFloor = bShowFloor;
	Parms.bShowEffects = bShowEffects;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultWorld.VaultWorld_C.OnTransitionItemDetails
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bShowItemDetails                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVaultWorld_C::OnTransitionItemDetails(bool bShowItemDetails)
{
	static auto Func = Class->GetFunction("VaultWorld_C", "OnTransitionItemDetails");

	Params::AVaultWorld_C_OnTransitionItemDetails_Params Parms;

	Parms.bShowItemDetails = bShowItemDetails;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultWorld.VaultWorld_C.ExecuteUbergraph_VaultWorld
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Event_LoadedBackgroundTexture                             (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVaultWorldBackgroundData   K2Node_Event_BackgroundInfo                                      (ConstParm)
// bool                               K2Node_Event_bPlayForward                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBackgroundIntensityLevelK2Node_Event_IntensityTransition                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortStaticMeshActor*        K2Node_DynamicCast_AsFort_Static_Mesh_Actor                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bShowFloor                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bShowEffects                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bShowItemDetails                                    (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVaultWorld_C::ExecuteUbergraph_VaultWorld(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, class UTexture2D* K2Node_Event_LoadedBackgroundTexture, const struct FVaultWorldBackgroundData& K2Node_Event_BackgroundInfo, bool K2Node_Event_bPlayForward, enum class EBackgroundIntensityLevel K2Node_Event_IntensityTransition, class AFortStaticMeshActor* K2Node_DynamicCast_AsFort_Static_Mesh_Actor, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_bShowFloor, bool K2Node_Event_bShowEffects, bool K2Node_Event_bShowItemDetails)
{
	static auto Func = Class->GetFunction("VaultWorld_C", "ExecuteUbergraph_VaultWorld");

	Params::AVaultWorld_C_ExecuteUbergraph_VaultWorld_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	Parms.K2Node_Event_LoadedBackgroundTexture = K2Node_Event_LoadedBackgroundTexture;
	Parms.K2Node_Event_BackgroundInfo = K2Node_Event_BackgroundInfo;
	Parms.K2Node_Event_bPlayForward = K2Node_Event_bPlayForward;
	Parms.K2Node_Event_IntensityTransition = K2Node_Event_IntensityTransition;
	Parms.K2Node_DynamicCast_AsFort_Static_Mesh_Actor = K2Node_DynamicCast_AsFort_Static_Mesh_Actor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_bShowFloor = K2Node_Event_bShowFloor;
	Parms.K2Node_Event_bShowEffects = K2Node_Event_bShowEffects;
	Parms.K2Node_Event_bShowItemDetails = K2Node_Event_bShowItemDetails;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
