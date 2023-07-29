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


// Function UI_Game_SpawnScreen_Spectator.UI_Game_SpawnScreen_Spectator_C.ToggleSpectatorScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ForceSmall                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               L_ForceSmall                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_Game_SpawnScreen_Spectator_C::ToggleSpectatorScale(bool ForceSmall, bool L_ForceSmall, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static auto Func = Class->GetFunction("UI_Game_SpawnScreen_Spectator_C", "ToggleSpectatorScale");

	Params::UUI_Game_SpawnScreen_Spectator_C_ToggleSpectatorScale_Params Parms;

	Parms.ForceSmall = ForceSmall;
	Parms.L_ForceSmall = L_ForceSmall;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Game_SpawnScreen_Spectator.UI_Game_SpawnScreen_Spectator_C.SetNewSpectate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PG_Game_Character_C*     Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_Game_SpawnScreen_Spectator_C::SetNewSpectate(class UBP_PG_Game_Character_C* Character)
{
	static auto Func = Class->GetFunction("UI_Game_SpawnScreen_Spectator_C", "SetNewSpectate");

	Params::UUI_Game_SpawnScreen_Spectator_C_SetNewSpectate_Params Parms;

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Game_SpawnScreen_Spectator.UI_Game_SpawnScreen_Spectator_C.BndEvt__UI_SpawnScreen_Spectator_Button_SpectatorScale_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Game_SpawnScreen_Spectator_C::BndEvt__UI_SpawnScreen_Spectator_Button_SpectatorScale_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto Func = Class->GetFunction("UI_Game_SpawnScreen_Spectator_C", "BndEvt__UI_SpawnScreen_Spectator_Button_SpectatorScale_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	Params::UUI_Game_SpawnScreen_Spectator_C_BndEvt__UI_SpawnScreen_Spectator_Button_SpectatorScale_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Game_SpawnScreen_Spectator.UI_Game_SpawnScreen_Spectator_C.ExecuteUbergraph_UI_Game_SpawnScreen_Spectator
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_Game_Character_C*     K2Node_CustomEvent_Character                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_Game_SpawnScreen_Spectator_C::ExecuteUbergraph_UI_Game_SpawnScreen_Spectator(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UBP_PG_Game_Character_C* K2Node_CustomEvent_Character)
{
	static auto Func = Class->GetFunction("UI_Game_SpawnScreen_Spectator_C", "ExecuteUbergraph_UI_Game_SpawnScreen_Spectator");

	Params::UUI_Game_SpawnScreen_Spectator_C_ExecuteUbergraph_UI_Game_SpawnScreen_Spectator_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CustomEvent_Character = K2Node_CustomEvent_Character;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
