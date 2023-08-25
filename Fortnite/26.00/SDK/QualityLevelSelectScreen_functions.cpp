#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass QualityLevelSelectScreen.QualityLevelSelectScreen_C
// (None)

class UClass* UQualityLevelSelectScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QualityLevelSelectScreen_C");

	return Clss;
}


// QualityLevelSelectScreen_C QualityLevelSelectScreen.Default__QualityLevelSelectScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQualityLevelSelectScreen_C* UQualityLevelSelectScreen_C::GetDefaultObj()
{
	static class UQualityLevelSelectScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQualityLevelSelectScreen_C*>(UQualityLevelSelectScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QualityLevelSelectScreen.QualityLevelSelectScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UQualityLevelSelectScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QualityLevelSelectScreen_C", "Construct");

	Params::UQualityLevelSelectScreen_C_Construct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function QualityLevelSelectScreen.QualityLevelSelectScreen_C.ExecuteUbergraph_QualityLevelSelectScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UQualityLevelSelectScreen_C::ExecuteUbergraph_QualityLevelSelectScreen(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QualityLevelSelectScreen_C", "ExecuteUbergraph_QualityLevelSelectScreen");

	Params::UQualityLevelSelectScreen_C_ExecuteUbergraph_QualityLevelSelectScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


