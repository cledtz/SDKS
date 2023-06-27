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


// Function UEKittUI.UEKittUIPanelWidget.SetupInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bSetup                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUEKittUIPanelWidget::SetupInput(bool bSetup)
{
	static auto Func = Class->GetFunction("UEKittUIPanelWidget", "SetupInput");

	Params::UUEKittUIPanelWidget_SetupInput_Params Parms;

	Parms.bSetup = bSetup;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
