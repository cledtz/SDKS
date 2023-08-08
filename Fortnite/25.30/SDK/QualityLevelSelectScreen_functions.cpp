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


// Function QualityLevelSelectScreen.QualityLevelSelectScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UQualityLevelSelectScreen_C::Construct()
{
	static auto Func = Class->GetFunction("QualityLevelSelectScreen_C", "Construct");

	Params::UQualityLevelSelectScreen_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function QualityLevelSelectScreen.QualityLevelSelectScreen_C.ExecuteUbergraph_QualityLevelSelectScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UQualityLevelSelectScreen_C::ExecuteUbergraph_QualityLevelSelectScreen(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static auto Func = Class->GetFunction("QualityLevelSelectScreen_C", "ExecuteUbergraph_QualityLevelSelectScreen");

	Params::UQualityLevelSelectScreen_C_ExecuteUbergraph_QualityLevelSelectScreen_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
