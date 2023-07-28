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


// Function BP_CharacterRimlightDisabler.BP_CharacterRimlightDisabler_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_CharacterRimlightDisabler_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("BP_CharacterRimlightDisabler_C", "ReceiveBeginPlay");

	Params::UBP_CharacterRimlightDisabler_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterRimlightDisabler.BP_CharacterRimlightDisabler_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterRimlightDisabler_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static auto Func = Class->GetFunction("BP_CharacterRimlightDisabler_C", "ReceiveEndPlay");

	Params::UBP_CharacterRimlightDisabler_C_ReceiveEndPlay_Params Parms;

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterRimlightDisabler.BP_CharacterRimlightDisabler_C.ExecuteUbergraph_BP_CharacterRimlightDisabler
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterRimlightDisabler_C::ExecuteUbergraph_BP_CharacterRimlightDisabler(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_1, enum class EEndPlayReason K2Node_Event_EndPlayReason)
{
	static auto Func = Class->GetFunction("BP_CharacterRimlightDisabler_C", "ExecuteUbergraph_BP_CharacterRimlightDisabler");

	Params::UBP_CharacterRimlightDisabler_C_ExecuteUbergraph_BP_CharacterRimlightDisabler_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_1 = CallFunc_IsDedicatedServer_ReturnValue_1;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
