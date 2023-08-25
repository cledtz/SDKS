#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ConvertedMarkerInfo.ConvertedMarkerInfo_C
// (None)

class UClass* UConvertedMarkerInfo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConvertedMarkerInfo_C");

	return Clss;
}


// ConvertedMarkerInfo_C ConvertedMarkerInfo.Default__ConvertedMarkerInfo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UConvertedMarkerInfo_C* UConvertedMarkerInfo_C::GetDefaultObj()
{
	static class UConvertedMarkerInfo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UConvertedMarkerInfo_C*>(UConvertedMarkerInfo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ConvertedMarkerInfo.ConvertedMarkerInfo_C.SetBackgroundVisibility
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bOverride                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bBackgroundVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bLocal_BackgroundVisible                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UConvertedMarkerInfo_C::SetBackgroundVisibility(bool bOverride, bool bBackgroundVisible, bool bLocal_BackgroundVisible, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConvertedMarkerInfo_C", "SetBackgroundVisibility");

	Params::UConvertedMarkerInfo_C_SetBackgroundVisibility_Params Parms{};

	Parms.bOverride = bOverride;
	Parms.bBackgroundVisible = bBackgroundVisible;
	Parms.bLocal_BackgroundVisible = bLocal_BackgroundVisible;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue = CallFunc_K2_IsValidTimerHandle_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ConvertedMarkerInfo.ConvertedMarkerInfo_C.OnLoaded_68559753464A154900ECA9BC6BB940C0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UConvertedMarkerInfo_C::OnLoaded_68559753464A154900ECA9BC6BB940C0(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConvertedMarkerInfo_C", "OnLoaded_68559753464A154900ECA9BC6BB940C0");

	Params::UConvertedMarkerInfo_C_OnLoaded_68559753464A154900ECA9BC6BB940C0_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ConvertedMarkerInfo.ConvertedMarkerInfo_C.OnLoaded_25BCEE7642585A8BD6CE1CAFC70FEAF3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UConvertedMarkerInfo_C::OnLoaded_25BCEE7642585A8BD6CE1CAFC70FEAF3(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConvertedMarkerInfo_C", "OnLoaded_25BCEE7642585A8BD6CE1CAFC70FEAF3");

	Params::UConvertedMarkerInfo_C_OnLoaded_25BCEE7642585A8BD6CE1CAFC70FEAF3_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ConvertedMarkerInfo.ConvertedMarkerInfo_C.OverrideShowBackground
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bShowBackground                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UConvertedMarkerInfo_C::OverrideShowBackground(bool bShowBackground)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConvertedMarkerInfo_C", "OverrideShowBackground");

	Params::UConvertedMarkerInfo_C_OverrideShowBackground_Params Parms{};

	Parms.bShowBackground = bShowBackground;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ConvertedMarkerInfo.ConvertedMarkerInfo_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UConvertedMarkerInfo_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConvertedMarkerInfo_C", "PreConstruct");

	Params::UConvertedMarkerInfo_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ConvertedMarkerInfo.ConvertedMarkerInfo_C.InitPlayerIconState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPlayerStateAthena*      PSA                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UConvertedMarkerInfo_C::InitPlayerIconState(class UFortPlayerStateAthena* PSA)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConvertedMarkerInfo_C", "InitPlayerIconState");

	Params::UConvertedMarkerInfo_C_InitPlayerIconState_Params Parms{};

	Parms.PSA = PSA;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ConvertedMarkerInfo.ConvertedMarkerInfo_C.UpdateCommandIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPingCommandType        PingCommand                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UConvertedMarkerInfo_C::UpdateCommandIcon(enum class EPingCommandType PingCommand, const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConvertedMarkerInfo_C", "UpdateCommandIcon");

	Params::UConvertedMarkerInfo_C_UpdateCommandIcon_Params Parms{};

	Parms.PingCommand = PingCommand;
	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ConvertedMarkerInfo.ConvertedMarkerInfo_C.InitNPCCommandIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UConvertedMarkerInfo_C::InitNPCCommandIcon(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConvertedMarkerInfo_C", "InitNPCCommandIcon");

	Params::UConvertedMarkerInfo_C_InitNPCCommandIcon_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ConvertedMarkerInfo.ConvertedMarkerInfo_C.ExecuteUbergraph_ConvertedMarkerInfo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPingCommandType        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable                                         (HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_1                                       (HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_2                                       (HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_3                                       (HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bShowBackground                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerStateAthena*      K2Node_CustomEvent_PSA                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetSocialAvatarBrush_ReturnValue                        (UObjectWrapper, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetPinColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPingCommandType        K2Node_CustomEvent_PingCommand                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_Color_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   K2Node_Select_Default                                            (HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_Color                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded_1                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UConvertedMarkerInfo_C::ExecuteUbergraph_ConvertedMarkerInfo(int32 EntryPoint, class UObject* Temp_object_Variable, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, enum class EPingCommandType Temp_byte_Variable, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_1, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_2, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_3, bool K2Node_CustomEvent_bShowBackground, class UObject* K2Node_CustomEvent_Loaded, bool K2Node_Event_IsDesignTime, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortPlayerStateAthena* K2Node_CustomEvent_PSA, class UFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess_1, TSoftObjectPtr<class UTexture2D> CallFunc_GetSocialAvatarBrush_ReturnValue, const struct FLinearColor& CallFunc_GetPinColor_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UObject* Temp_object_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_1, bool K2Node_DynamicCast_bSuccess_2, enum class EPingCommandType K2Node_CustomEvent_PingCommand, const struct FLinearColor& K2Node_CustomEvent_Color_1, bool K2Node_SwitchEnum_CmpSuccess, TSoftObjectPtr<class UTexture2D> K2Node_Select_Default, const struct FLinearColor& K2Node_CustomEvent_Color, class UObject* K2Node_CustomEvent_Loaded_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConvertedMarkerInfo_C", "ExecuteUbergraph_ConvertedMarkerInfo");

	Params::UConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_softobject_Variable = Temp_softobject_Variable;
	Parms.Temp_softobject_Variable_1 = Temp_softobject_Variable_1;
	Parms.Temp_softobject_Variable_2 = Temp_softobject_Variable_2;
	Parms.Temp_softobject_Variable_3 = Temp_softobject_Variable_3;
	Parms.K2Node_CustomEvent_bShowBackground = K2Node_CustomEvent_bShowBackground;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_CustomEvent_PSA = K2Node_CustomEvent_PSA;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Athena = K2Node_DynamicCast_AsFort_Player_Controller_Athena;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetSocialAvatarBrush_ReturnValue = CallFunc_GetSocialAvatarBrush_ReturnValue;
	Parms.CallFunc_GetPinColor_ReturnValue = CallFunc_GetPinColor_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsTexture_2D_1 = K2Node_DynamicCast_AsTexture_2D_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_CustomEvent_PingCommand = K2Node_CustomEvent_PingCommand;
	Parms.K2Node_CustomEvent_Color_1 = K2Node_CustomEvent_Color_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CustomEvent_Color = K2Node_CustomEvent_Color;
	Parms.K2Node_CustomEvent_Loaded_1 = K2Node_CustomEvent_Loaded_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


