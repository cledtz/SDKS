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


// Function ContextTutorialIndicator.ContextTutorialIndicator_C.Finished_FBBD6B5248E73C61005758B21F90D160
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UContextTutorialIndicator_C::Finished_FBBD6B5248E73C61005758B21F90D160()
{
	static auto Func = Class->GetFunction("ContextTutorialIndicator_C", "Finished_FBBD6B5248E73C61005758B21F90D160");

	Params::UContextTutorialIndicator_C_Finished_FBBD6B5248E73C61005758B21F90D160_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ContextTutorialIndicator.ContextTutorialIndicator_C.Finished_191D6D204EA6EF5125923CB749C84A4A
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UContextTutorialIndicator_C::Finished_191D6D204EA6EF5125923CB749C84A4A()
{
	static auto Func = Class->GetFunction("ContextTutorialIndicator_C", "Finished_191D6D204EA6EF5125923CB749C84A4A");

	Params::UContextTutorialIndicator_C_Finished_191D6D204EA6EF5125923CB749C84A4A_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ContextTutorialIndicator.ContextTutorialIndicator_C.Finished_5FDAD1724A4ABC34EC3B7F9D90839344
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UContextTutorialIndicator_C::Finished_5FDAD1724A4ABC34EC3B7F9D90839344()
{
	static auto Func = Class->GetFunction("ContextTutorialIndicator_C", "Finished_5FDAD1724A4ABC34EC3B7F9D90839344");

	Params::UContextTutorialIndicator_C_Finished_5FDAD1724A4ABC34EC3B7F9D90839344_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ContextTutorialIndicator.ContextTutorialIndicator_C.Finished_6F1BBAF94537A4D7945ED5A452FC1188
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UContextTutorialIndicator_C::Finished_6F1BBAF94537A4D7945ED5A452FC1188()
{
	static auto Func = Class->GetFunction("ContextTutorialIndicator_C", "Finished_6F1BBAF94537A4D7945ED5A452FC1188");

	Params::UContextTutorialIndicator_C_Finished_6F1BBAF94537A4D7945ED5A452FC1188_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ContextTutorialIndicator.ContextTutorialIndicator_C.PlayOutAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UContextTutorialIndicator_C::PlayOutAnimation()
{
	static auto Func = Class->GetFunction("ContextTutorialIndicator_C", "PlayOutAnimation");

	Params::UContextTutorialIndicator_C_PlayOutAnimation_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ContextTutorialIndicator.ContextTutorialIndicator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UContextTutorialIndicator_C::Construct()
{
	static auto Func = Class->GetFunction("ContextTutorialIndicator_C", "Construct");

	Params::UContextTutorialIndicator_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ContextTutorialIndicator.ContextTutorialIndicator_C.SetIndicatorText
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UContextTutorialIndicator_C::SetIndicatorText(class FText& Text)
{
	static auto Func = Class->GetFunction("ContextTutorialIndicator_C", "SetIndicatorText");

	Params::UContextTutorialIndicator_C_SetIndicatorText_Params Parms;

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ContextTutorialIndicator.ContextTutorialIndicator_C.PlayBounceAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UContextTutorialIndicator_C::PlayBounceAnimation()
{
	static auto Func = Class->GetFunction("ContextTutorialIndicator_C", "PlayBounceAnimation");

	Params::UContextTutorialIndicator_C_PlayBounceAnimation_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ContextTutorialIndicator.ContextTutorialIndicator_C.PlayInAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UContextTutorialIndicator_C::PlayInAnimation()
{
	static auto Func = Class->GetFunction("ContextTutorialIndicator_C", "PlayInAnimation");

	Params::UContextTutorialIndicator_C_PlayInAnimation_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ContextTutorialIndicator.ContextTutorialIndicator_C.ExecuteUbergraph_ContextTutorialIndicator
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_Text                                                (ConstParm)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result_2                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue_2            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result_3                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue_3            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_4                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UContextTutorialIndicator_C::ExecuteUbergraph_ContextTutorialIndicator(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsAnimationPlaying_ReturnValue, class FText K2Node_Event_Text, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_1, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsVisible_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_2, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_3, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, bool CallFunc_IsAnimationPlaying_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4)
{
	static auto Func = Class->GetFunction("ContextTutorialIndicator_C", "ExecuteUbergraph_ContextTutorialIndicator");

	Params::UContextTutorialIndicator_C_ExecuteUbergraph_ContextTutorialIndicator_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.K2Node_Event_Text = K2Node_Event_Text;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result = CallFunc_CreatePlayAnimationProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue = CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result_1 = CallFunc_CreatePlayAnimationProxyObject_Result_1;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1 = CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result_2 = CallFunc_CreatePlayAnimationProxyObject_Result_2;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue_2 = CallFunc_CreatePlayAnimationProxyObject_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result_3 = CallFunc_CreatePlayAnimationProxyObject_Result_3;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue_3 = CallFunc_CreatePlayAnimationProxyObject_ReturnValue_3;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue_1 = CallFunc_IsAnimationPlaying_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_4 = CallFunc_PlayAnimation_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
