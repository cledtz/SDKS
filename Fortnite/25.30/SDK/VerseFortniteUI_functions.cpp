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


// Function VerseFortniteUI.VerseFortniteUIFrameworkButton_Base.ServerClick
// (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:
// class UPlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseFortniteUIFrameworkButton_Base::ServerClick(class UPlayerController* PlayerController)
{
	static auto Func = Class->GetFunction("VerseFortniteUIFrameworkButton_Base", "ServerClick");

	Params::UVerseFortniteUIFrameworkButton_Base_ServerClick_Params Parms;

	Parms.PlayerController = PlayerController;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseFortniteUI.VerseFortniteUIFrameworkButton_Base.OnRep_Message
// (Final, Native, Private)
// Parameters:

void UVerseFortniteUIFrameworkButton_Base::OnRep_Message()
{
	static auto Func = Class->GetFunction("VerseFortniteUIFrameworkButton_Base", "OnRep_Message");

	Params::UVerseFortniteUIFrameworkButton_Base_OnRep_Message_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseFortniteUI.VerseFortniteUIFrameworkButton_Base.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UVerseFortniteUIFrameworkButton_Base::GetText()
{
	static auto Func = Class->GetFunction("VerseFortniteUIFrameworkButton_Base", "GetText");

	Params::UVerseFortniteUIFrameworkButton_Base_GetText_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VerseFortniteUI.VerseFortniteUIFrameworkText_Base.ServerTextCommitted
// (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:
// class UPlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        NewText                                                          (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)

void UVerseFortniteUIFrameworkText_Base::ServerTextCommitted(class UPlayerController* PlayerController, class FText& NewText)
{
	static auto Func = Class->GetFunction("VerseFortniteUIFrameworkText_Base", "ServerTextCommitted");

	Params::UVerseFortniteUIFrameworkText_Base_ServerTextCommitted_Params Parms;

	Parms.PlayerController = PlayerController;
	Parms.NewText = NewText;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseFortniteUI.VerseFortniteUIFrameworkText_Base.ExecuteServerTextCommitted
// (Final, Native, Public, HasOutParams)
// Parameters:
// class FText                        InText                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// enum class ETextCommit             InCommitMethod                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseFortniteUIFrameworkText_Base::ExecuteServerTextCommitted(class FText& InText, enum class ETextCommit InCommitMethod)
{
	static auto Func = Class->GetFunction("VerseFortniteUIFrameworkText_Base", "ExecuteServerTextCommitted");

	Params::UVerseFortniteUIFrameworkText_Base_ExecuteServerTextCommitted_Params Parms;

	Parms.InText = InText;
	Parms.InCommitMethod = InCommitMethod;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseFortniteUI.VerseFortniteUIFrameworkSlider.SetValue
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVerseFortniteUIFrameworkSlider::SetValue(float InValue)
{
	static auto Func = Class->GetFunction("VerseFortniteUIFrameworkSlider", "SetValue");

	Params::UVerseFortniteUIFrameworkSlider_SetValue_Params Parms;

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VerseFortniteUI.VerseFortniteUIFrameworkSlider.SetStepSize
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMinValue                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseFortniteUIFrameworkSlider::SetStepSize(float InMinValue)
{
	static auto Func = Class->GetFunction("VerseFortniteUIFrameworkSlider", "SetStepSize");

	Params::UVerseFortniteUIFrameworkSlider_SetStepSize_Params Parms;

	Parms.InMinValue = InMinValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseFortniteUI.VerseFortniteUIFrameworkSlider.SetMinValue
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMinValue                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseFortniteUIFrameworkSlider::SetMinValue(float InMinValue)
{
	static auto Func = Class->GetFunction("VerseFortniteUIFrameworkSlider", "SetMinValue");

	Params::UVerseFortniteUIFrameworkSlider_SetMinValue_Params Parms;

	Parms.InMinValue = InMinValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseFortniteUI.VerseFortniteUIFrameworkSlider.SetMaxValue
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMaxValue                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseFortniteUIFrameworkSlider::SetMaxValue(float InMaxValue)
{
	static auto Func = Class->GetFunction("VerseFortniteUIFrameworkSlider", "SetMaxValue");

	Params::UVerseFortniteUIFrameworkSlider_SetMaxValue_Params Parms;

	Parms.InMaxValue = InMaxValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseFortniteUI.VerseFortniteUIFrameworkSlider.ServerValueChanged
// (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:
// class UPlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InNewValue                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InClientID                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InServerID                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseFortniteUIFrameworkSlider::ServerValueChanged(class UPlayerController* PlayerController, float InNewValue, int32 InClientID, int32 InServerID)
{
	static auto Func = Class->GetFunction("VerseFortniteUIFrameworkSlider", "ServerValueChanged");

	Params::UVerseFortniteUIFrameworkSlider_ServerValueChanged_Params Parms;

	Parms.PlayerController = PlayerController;
	Parms.InNewValue = InNewValue;
	Parms.InClientID = InClientID;
	Parms.InServerID = InServerID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseFortniteUI.VerseFortniteUIFrameworkSlider.OnRep_Value
// (Final, Native, Private)
// Parameters:

void UVerseFortniteUIFrameworkSlider::OnRep_Value()
{
	static auto Func = Class->GetFunction("VerseFortniteUIFrameworkSlider", "OnRep_Value");

	Params::UVerseFortniteUIFrameworkSlider_OnRep_Value_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseFortniteUI.VerseFortniteUIFrameworkSlider.OnRep_StepSize
// (Final, Native, Private)
// Parameters:

void UVerseFortniteUIFrameworkSlider::OnRep_StepSize()
{
	static auto Func = Class->GetFunction("VerseFortniteUIFrameworkSlider", "OnRep_StepSize");

	Params::UVerseFortniteUIFrameworkSlider_OnRep_StepSize_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseFortniteUI.VerseFortniteUIFrameworkSlider.OnRep_MinValue
// (Final, Native, Private)
// Parameters:

void UVerseFortniteUIFrameworkSlider::OnRep_MinValue()
{
	static auto Func = Class->GetFunction("VerseFortniteUIFrameworkSlider", "OnRep_MinValue");

	Params::UVerseFortniteUIFrameworkSlider_OnRep_MinValue_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseFortniteUI.VerseFortniteUIFrameworkSlider.OnRep_MaxValue
// (Final, Native, Private)
// Parameters:

void UVerseFortniteUIFrameworkSlider::OnRep_MaxValue()
{
	static auto Func = Class->GetFunction("VerseFortniteUIFrameworkSlider", "OnRep_MaxValue");

	Params::UVerseFortniteUIFrameworkSlider_OnRep_MaxValue_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseFortniteUI.VerseFortniteUIFrameworkSlider.HandleValueChanged
// (Final, Native, Private)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseFortniteUIFrameworkSlider::HandleValueChanged(float NewValue)
{
	static auto Func = Class->GetFunction("VerseFortniteUIFrameworkSlider", "HandleValueChanged");

	Params::UVerseFortniteUIFrameworkSlider_HandleValueChanged_Params Parms;

	Parms.NewValue = NewValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseFortniteUI.VerseFortniteUIFrameworkSlider.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVerseFortniteUIFrameworkSlider::GetValue()
{
	static auto Func = Class->GetFunction("VerseFortniteUIFrameworkSlider", "GetValue");

	Params::UVerseFortniteUIFrameworkSlider_GetValue_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VerseFortniteUI.VerseFortniteUIFrameworkSlider.GetStepSize
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVerseFortniteUIFrameworkSlider::GetStepSize()
{
	static auto Func = Class->GetFunction("VerseFortniteUIFrameworkSlider", "GetStepSize");

	Params::UVerseFortniteUIFrameworkSlider_GetStepSize_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VerseFortniteUI.VerseFortniteUIFrameworkSlider.GetMinValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVerseFortniteUIFrameworkSlider::GetMinValue()
{
	static auto Func = Class->GetFunction("VerseFortniteUIFrameworkSlider", "GetMinValue");

	Params::UVerseFortniteUIFrameworkSlider_GetMinValue_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VerseFortniteUI.VerseFortniteUIFrameworkSlider.GetMaxValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVerseFortniteUIFrameworkSlider::GetMaxValue()
{
	static auto Func = Class->GetFunction("VerseFortniteUIFrameworkSlider", "GetMaxValue");

	Params::UVerseFortniteUIFrameworkSlider_GetMaxValue_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VerseFortniteUI.VerseFortniteUIFrameworkSlider.ExecuteServerValueChanged
// (Final, Native, Public)
// Parameters:
// float                              InNewValue                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InClientID                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InServerID                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseFortniteUIFrameworkSlider::ExecuteServerValueChanged(float InNewValue, int32 InClientID, int32 InServerID)
{
	static auto Func = Class->GetFunction("VerseFortniteUIFrameworkSlider", "ExecuteServerValueChanged");

	Params::UVerseFortniteUIFrameworkSlider_ExecuteServerValueChanged_Params Parms;

	Parms.InNewValue = InNewValue;
	Parms.InClientID = InClientID;
	Parms.InServerID = InServerID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
