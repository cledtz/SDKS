#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_GunCharacteristics_Module.UI_GunCharacteristics_Module_C
// (None)

class UClass* UUI_GunCharacteristics_Module_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_GunCharacteristics_Module_C");

	return Clss;
}


// UI_GunCharacteristics_Module_C UI_GunCharacteristics_Module.Default__UI_GunCharacteristics_Module_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_GunCharacteristics_Module_C* UUI_GunCharacteristics_Module_C::GetDefaultObj()
{
	static class UUI_GunCharacteristics_Module_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_GunCharacteristics_Module_C*>(UUI_GunCharacteristics_Module_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_GunCharacteristics_Module.UI_GunCharacteristics_Module_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_GunCharacteristics_Module_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GunCharacteristics_Module_C", "Reset");

	Params::UUI_GunCharacteristics_Module_C_Reset_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_GunCharacteristics_Module.UI_GunCharacteristics_Module_C.OnLoaded_28ADFBD243DD2DEB1FF81BA8F1B6A864
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_GunCharacteristics_Module_C::OnLoaded_28ADFBD243DD2DEB1FF81BA8F1B6A864(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GunCharacteristics_Module_C", "OnLoaded_28ADFBD243DD2DEB1FF81BA8F1B6A864");

	Params::UUI_GunCharacteristics_Module_C_OnLoaded_28ADFBD243DD2DEB1FF81BA8F1B6A864_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_GunCharacteristics_Module.UI_GunCharacteristics_Module_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GunCharacteristics_Module_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GunCharacteristics_Module_C", "PreConstruct");

	Params::UUI_GunCharacteristics_Module_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_GunCharacteristics_Module.UI_GunCharacteristics_Module_C.SetModule
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ModuleClass                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_GunCharacteristics_Module_C::SetModule(class UClass* ModuleClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GunCharacteristics_Module_C", "SetModule");

	Params::UUI_GunCharacteristics_Module_C_SetModule_Params Parms{};

	Parms.ModuleClass = ModuleClass;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_GunCharacteristics_Module.UI_GunCharacteristics_Module_C.ExecuteUbergraph_UI_GunCharacteristics_Module
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EGunModuleType          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        Temp_text_Variable_4                                             (None)
// class FText                        Temp_text_Variable_5                                             (None)
// class FText                        Temp_text_Variable_6                                             (None)
// class FText                        Temp_text_Variable_7                                             (None)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_CustomEvent_ModuleClass                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)

void UUI_GunCharacteristics_Module_C::ExecuteUbergraph_UI_GunCharacteristics_Module(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EGunModuleType Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, class UObject* K2Node_CustomEvent_Loaded, class UObject* Temp_object_Variable, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_IsDesignTime, class UClass* K2Node_CustomEvent_ModuleClass, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GunCharacteristics_Module_C", "ExecuteUbergraph_UI_GunCharacteristics_Module");

	Params::UUI_GunCharacteristics_Module_C_ExecuteUbergraph_UI_GunCharacteristics_Module_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.Temp_text_Variable_6 = Temp_text_Variable_6;
	Parms.Temp_text_Variable_7 = Temp_text_Variable_7;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_ModuleClass = K2Node_CustomEvent_ModuleClass;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


