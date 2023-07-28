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


// Function WBP_Augments_InteractionIndicatorInfo.WBP_Augments_InteractionIndicatorInfo_C.SetAugmentInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPlayerAugmentItemDefinition*InAugmentItemDefinition                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetHUDEffectImage_ReturnValue                           (UObjectWrapper, HasGetValueTypeHash)

void UWBP_Augments_InteractionIndicatorInfo_C::SetAugmentInfo(class UFortPlayerAugmentItemDefinition* InAugmentItemDefinition, TSoftObjectPtr<class UTexture2D> CallFunc_GetHUDEffectImage_ReturnValue)
{
	static auto Func = Class->GetFunction("WBP_Augments_InteractionIndicatorInfo_C", "SetAugmentInfo");

	Params::UWBP_Augments_InteractionIndicatorInfo_C_SetAugmentInfo_Params Parms;

	Parms.InAugmentItemDefinition = InAugmentItemDefinition;
	Parms.CallFunc_GetHUDEffectImage_ReturnValue = CallFunc_GetHUDEffectImage_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Augments_InteractionIndicatorInfo.WBP_Augments_InteractionIndicatorInfo_C.OnLoaded_2A5949E64DAB0291DE31D1B67C0E8EB9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Augments_InteractionIndicatorInfo_C::OnLoaded_2A5949E64DAB0291DE31D1B67C0E8EB9(class UObject* Loaded)
{
	static auto Func = Class->GetFunction("WBP_Augments_InteractionIndicatorInfo_C", "OnLoaded_2A5949E64DAB0291DE31D1B67C0E8EB9");

	Params::UWBP_Augments_InteractionIndicatorInfo_C_OnLoaded_2A5949E64DAB0291DE31D1B67C0E8EB9_Params Parms;

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Augments_InteractionIndicatorInfo.WBP_Augments_InteractionIndicatorInfo_C.SetAugmentIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UObject>      Asset                                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_Augments_InteractionIndicatorInfo_C::SetAugmentIcon(TSoftObjectPtr<class UObject> Asset)
{
	static auto Func = Class->GetFunction("WBP_Augments_InteractionIndicatorInfo_C", "SetAugmentIcon");

	Params::UWBP_Augments_InteractionIndicatorInfo_C_SetAugmentIcon_Params Parms;

	Parms.Asset = Asset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Augments_InteractionIndicatorInfo.WBP_Augments_InteractionIndicatorInfo_C.ExecuteUbergraph_WBP_Augments_InteractionIndicatorInfo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UObject>      K2Node_CustomEvent_Asset                                         (HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Augments_InteractionIndicatorInfo_C::ExecuteUbergraph_WBP_Augments_InteractionIndicatorInfo(int32 EntryPoint, class UObject* K2Node_CustomEvent_Loaded, class UObject* Temp_object_Variable, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, TSoftObjectPtr<class UObject> K2Node_CustomEvent_Asset, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static auto Func = Class->GetFunction("WBP_Augments_InteractionIndicatorInfo_C", "ExecuteUbergraph_WBP_Augments_InteractionIndicatorInfo");

	Params::UWBP_Augments_InteractionIndicatorInfo_C_ExecuteUbergraph_WBP_Augments_InteractionIndicatorInfo_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_Asset = K2Node_CustomEvent_Asset;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
