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


// Function BelongTreatyCustomTab.BelongTreatyCustomTab_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBelongTreatyCustomTab_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("BelongTreatyCustomTab_C", "PreConstruct");

	Params::UBelongTreatyCustomTab_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BelongTreatyCustomTab.BelongTreatyCustomTab_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBelongTreatyCustomTab_C::BP_OnHovered()
{
	static auto Func = Class->GetFunction("BelongTreatyCustomTab_C", "BP_OnHovered");

	Params::UBelongTreatyCustomTab_C_BP_OnHovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BelongTreatyCustomTab.BelongTreatyCustomTab_C.BP_OnDeselected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBelongTreatyCustomTab_C::BP_OnDeselected()
{
	static auto Func = Class->GetFunction("BelongTreatyCustomTab_C", "BP_OnDeselected");

	Params::UBelongTreatyCustomTab_C_BP_OnDeselected_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BelongTreatyCustomTab.BelongTreatyCustomTab_C.BP_OnSelected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBelongTreatyCustomTab_C::BP_OnSelected()
{
	static auto Func = Class->GetFunction("BelongTreatyCustomTab_C", "BP_OnSelected");

	Params::UBelongTreatyCustomTab_C_BP_OnSelected_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BelongTreatyCustomTab.BelongTreatyCustomTab_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBelongTreatyCustomTab_C::Construct()
{
	static auto Func = Class->GetFunction("BelongTreatyCustomTab_C", "Construct");

	Params::UBelongTreatyCustomTab_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BelongTreatyCustomTab.BelongTreatyCustomTab_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBelongTreatyCustomTab_C::BP_OnUnhovered()
{
	static auto Func = Class->GetFunction("BelongTreatyCustomTab_C", "BP_OnUnhovered");

	Params::UBelongTreatyCustomTab_C_BP_OnUnhovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BelongTreatyCustomTab.BelongTreatyCustomTab_C.ExecuteUbergraph_BelongTreatyCustomTab
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_1                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSelected_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable_1                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_Select_Default_1                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_2                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_3                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBelongTreatyCustomTab_C::ExecuteUbergraph_BelongTreatyCustomTab(int32 EntryPoint, bool Temp_bool_Variable, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& Temp_struct_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, bool CallFunc_GetSelected_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue, const struct FVector2D& K2Node_Select_Default, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable_1, bool Temp_bool_Variable_1, class UClass* K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_3)
{
	static auto Func = Class->GetFunction("BelongTreatyCustomTab_C", "ExecuteUbergraph_BelongTreatyCustomTab");

	Params::UBelongTreatyCustomTab_C_ExecuteUbergraph_BelongTreatyCustomTab_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;
	Parms.CallFunc_GetSelected_ReturnValue = CallFunc_GetSelected_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.Temp_class_Variable_1 = Temp_class_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_2 = CallFunc_PlayAnimationForward_ReturnValue_2;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_3 = CallFunc_PlayAnimationForward_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
