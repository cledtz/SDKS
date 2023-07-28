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


// Function VictoryCrownsKillFeedExtension.VictoryCrownsKillFeedExtension_C.CheckForOverrideVictimStyle
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UFortPlayerStateAthena*      VictimPlayerStateAthena                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      VictimStyle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGameStateAthena*        CallFunc_GetGameStateAthena_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGameStateComponent_VictoryCrowns*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCrownBearer_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FString UVictoryCrownsKillFeedExtension_C::CheckForOverrideVictimStyle(class UFortPlayerStateAthena* VictimPlayerStateAthena, const class FString& VictimStyle, bool CallFunc_IsValid_ReturnValue, class UFortGameStateAthena* CallFunc_GetGameStateAthena_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UFortGameStateComponent_VictoryCrowns* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsCrownBearer_ReturnValue)
{
	static auto Func = Class->GetFunction("VictoryCrownsKillFeedExtension_C", "CheckForOverrideVictimStyle");

	Params::UVictoryCrownsKillFeedExtension_C_CheckForOverrideVictimStyle_Params Parms;

	Parms.VictimPlayerStateAthena = VictimPlayerStateAthena;
	Parms.VictimStyle = VictimStyle;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetGameStateAthena_ReturnValue = CallFunc_GetGameStateAthena_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsCrownBearer_ReturnValue = CallFunc_IsCrownBearer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VictoryCrownsKillFeedExtension.VictoryCrownsKillFeedExtension_C.CheckForOverrideKillerStyle
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UFortPlayerStateAthena*      KillerPlayerStateAthena                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      KillerStyle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGameStateAthena*        CallFunc_GetGameStateAthena_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGameStateComponent_VictoryCrowns*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCrownBearer_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FString UVictoryCrownsKillFeedExtension_C::CheckForOverrideKillerStyle(class UFortPlayerStateAthena* KillerPlayerStateAthena, const class FString& KillerStyle, bool CallFunc_IsValid_ReturnValue, class UFortGameStateAthena* CallFunc_GetGameStateAthena_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UFortGameStateComponent_VictoryCrowns* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsCrownBearer_ReturnValue)
{
	static auto Func = Class->GetFunction("VictoryCrownsKillFeedExtension_C", "CheckForOverrideKillerStyle");

	Params::UVictoryCrownsKillFeedExtension_C_CheckForOverrideKillerStyle_Params Parms;

	Parms.KillerPlayerStateAthena = KillerPlayerStateAthena;
	Parms.KillerStyle = KillerStyle;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetGameStateAthena_ReturnValue = CallFunc_GetGameStateAthena_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsCrownBearer_ReturnValue = CallFunc_IsCrownBearer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
