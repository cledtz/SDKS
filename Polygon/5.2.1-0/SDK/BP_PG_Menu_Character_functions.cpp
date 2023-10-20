#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PG_Menu_Character.BP_PG_Menu_Character_C
// (Actor)

class UClass* UBP_PG_Menu_Character_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PG_Menu_Character_C");

	return Clss;
}


// BP_PG_Menu_Character_C BP_PG_Menu_Character.Default__BP_PG_Menu_Character_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PG_Menu_Character_C* UBP_PG_Menu_Character_C::GetDefaultObj()
{
	static class UBP_PG_Menu_Character_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PG_Menu_Character_C*>(UBP_PG_Menu_Character_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PG_Menu_Character.BP_PG_Menu_Character_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_PG_Menu_Character_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PG_Menu_Character_C", "ReceiveBeginPlay");

	Params::UBP_PG_Menu_Character_C_ReceiveBeginPlay_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PG_Menu_Character.BP_PG_Menu_Character_C.ExecuteUbergraph_BP_PG_Menu_Character
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_PlayerController_Menu_C*K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PG_Menu_Character_C::ExecuteUbergraph_BP_PG_Menu_Character(int32 EntryPoint, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UBP_PG_PlayerController_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PG_Menu_Character_C", "ExecuteUbergraph_BP_PG_Menu_Character");

	Params::UBP_PG_Menu_Character_C_ExecuteUbergraph_BP_PG_Menu_Character_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu = K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


