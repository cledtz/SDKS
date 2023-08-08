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


// Function PictureInPictureDescriptors.PictureInPictureActionData.CallEvent
// (Native, Public, BlueprintCallable)
// Parameters:

void UPictureInPictureActionData::CallEvent()
{
	static auto Func = Class->GetFunction("PictureInPictureActionData", "CallEvent");

	Params::UPictureInPictureActionData_CallEvent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
