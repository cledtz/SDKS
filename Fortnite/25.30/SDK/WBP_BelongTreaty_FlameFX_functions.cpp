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


// Function WBP_BelongTreaty_FlameFX.WBP_BelongTreaty_FlameFX_C.HideFlame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_BelongTreaty_FlameFX_C::HideFlame()
{
	static auto Func = Class->GetFunction("WBP_BelongTreaty_FlameFX_C", "HideFlame");

	Params::UWBP_BelongTreaty_FlameFX_C_HideFlame_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BelongTreaty_FlameFX.WBP_BelongTreaty_FlameFX_C.ShowFlame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_BelongTreaty_FlameFX_C::ShowFlame(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static auto Func = Class->GetFunction("WBP_BelongTreaty_FlameFX_C", "ShowFlame");

	Params::UWBP_BelongTreaty_FlameFX_C_ShowFlame_Params Parms;

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BelongTreaty_FlameFX.WBP_BelongTreaty_FlameFX_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BelongTreaty_FlameFX_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("WBP_BelongTreaty_FlameFX_C", "PreConstruct");

	Params::UWBP_BelongTreaty_FlameFX_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BelongTreaty_FlameFX.WBP_BelongTreaty_FlameFX_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_BelongTreaty_FlameFX_C::Construct()
{
	static auto Func = Class->GetFunction("WBP_BelongTreaty_FlameFX_C", "Construct");

	Params::UWBP_BelongTreaty_FlameFX_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BelongTreaty_FlameFX.WBP_BelongTreaty_FlameFX_C.ExecuteUbergraph_WBP_BelongTreaty_FlameFX
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BelongTreaty_FlameFX_C::ExecuteUbergraph_WBP_BelongTreaty_FlameFX(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1)
{
	static auto Func = Class->GetFunction("WBP_BelongTreaty_FlameFX_C", "ExecuteUbergraph_WBP_BelongTreaty_FlameFX");

	Params::UWBP_BelongTreaty_FlameFX_C_ExecuteUbergraph_WBP_BelongTreaty_FlameFX_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast = CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_1 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
