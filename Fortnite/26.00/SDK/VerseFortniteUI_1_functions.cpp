#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// VerseClass VerseFortniteUI.$SolarisSignatureFunctionOuter
// (None)

class UClass* U_SolarisSignatureFunctionOuter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("$SolarisSignatureFunctionOuter");

	return Clss;
}


// $SolarisSignatureFunctionOuter VerseFortniteUI.Default__$SolarisSignatureFunctionOuter
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class U_SolarisSignatureFunctionOuter* U_SolarisSignatureFunctionOuter::GetDefaultObj()
{
	static class U_SolarisSignatureFunctionOuter* Default = nullptr;

	if (!Default)
		Default = static_cast<U_SolarisSignatureFunctionOuter*>(U_SolarisSignatureFunctionOuter::StaticClass()->DefaultObject);

	return Default;
}


// VerseClass VerseFortniteUI.UI
// (None)

class UClass* UUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI");

	return Clss;
}


// UI VerseFortniteUI.Default__UI
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI* UUI::GetDefaultObj()
{
	static class UUI* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI*>(UUI::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteUI.UI._L_2fFortnite_2ecom_2fUI_N_Roperator_U_2eShowHUDElements_U_L_Nplayer__ui_M_Ntuple_L_R_M_N_Khud__element__identifier_R
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FTuple_Lplayer__ui_Mtuple_L_R_M_Khud__element__identifier_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UUI::_L_2fFortnite_2ecom_2fUI_N_Roperator_U_2eShowHUDElements_U_L_Nplayer__ui_M_Ntuple_L_R_M_N_Khud__element__identifier_R(const struct FTuple_Lplayer__ui_Mtuple_L_R_M_Khud__element__identifier_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI", "_L_2fFortnite_2ecom_2fUI_N_Roperator_U_2eShowHUDElements_U_L_Nplayer__ui_M_Ntuple_L_R_M_N_Khud__element__identifier_R");

	Params::UUI__L_2fFortnite_2ecom_2fUI_N_Roperator_U_2eShowHUDElements_U_L_Nplayer__ui_M_Ntuple_L_R_M_N_Khud__element__identifier_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteUI.UI._L_2fFortnite_2ecom_2fUI_N_Roperator_U_2eResetHUDElementVisibility_U_L_Nplayer__ui_M_Ntuple_L_R_M_N_Khud__element__identifier_R
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FTuple_Lplayer__ui_Mtuple_L_R_M_Khud__element__identifier_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UUI::_L_2fFortnite_2ecom_2fUI_N_Roperator_U_2eResetHUDElementVisibility_U_L_Nplayer__ui_M_Ntuple_L_R_M_N_Khud__element__identifier_R(const struct FTuple_Lplayer__ui_Mtuple_L_R_M_Khud__element__identifier_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI", "_L_2fFortnite_2ecom_2fUI_N_Roperator_U_2eResetHUDElementVisibility_U_L_Nplayer__ui_M_Ntuple_L_R_M_N_Khud__element__identifier_R");

	Params::UUI__L_2fFortnite_2ecom_2fUI_N_Roperator_U_2eResetHUDElementVisibility_U_L_Nplayer__ui_M_Ntuple_L_R_M_N_Khud__element__identifier_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteUI.UI._L_2fFortnite_2ecom_2fUI_N_Roperator_U_2eHideHUDElements_U_L_Nplayer__ui_M_Ntuple_L_R_M_N_Khud__element__identifier_R
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FTuple_Lplayer__ui_Mtuple_L_R_M_Khud__element__identifier_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UUI::_L_2fFortnite_2ecom_2fUI_N_Roperator_U_2eHideHUDElements_U_L_Nplayer__ui_M_Ntuple_L_R_M_N_Khud__element__identifier_R(const struct FTuple_Lplayer__ui_Mtuple_L_R_M_Khud__element__identifier_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI", "_L_2fFortnite_2ecom_2fUI_N_Roperator_U_2eHideHUDElements_U_L_Nplayer__ui_M_Ntuple_L_R_M_N_Khud__element__identifier_R");

	Params::UUI__L_2fFortnite_2ecom_2fUI_N_Roperator_U_2eHideHUDElements_U_L_Nplayer__ui_M_Ntuple_L_R_M_N_Khud__element__identifier_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteUI.UI._L_2fFortnite_2ecom_2fUI_N_Roperator_U_2eGetHUDController_U_L_Nfort__playspace_M_Ntuple_L_R_M_Ntuple_L_R_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lfort__playspace_Mtuple_L_R_Mtuple_L_R_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UObject*                     RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UObject* UUI::_L_2fFortnite_2ecom_2fUI_N_Roperator_U_2eGetHUDController_U_L_Nfort__playspace_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lfort__playspace_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI", "_L_2fFortnite_2ecom_2fUI_N_Roperator_U_2eGetHUDController_U_L_Nfort__playspace_M_Ntuple_L_R_M_Ntuple_L_R_R");

	Params::UUI__L_2fFortnite_2ecom_2fUI_N_Roperator_U_2eGetHUDController_U_L_Nfort__playspace_M_Ntuple_L_R_M_Ntuple_L_R_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortniteUI.UI.$InitCDO
// (None)
// Parameters:

void UUI::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI", "$InitCDO");

	Params::UUI__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteUI.UI_editable_text_base
// (None)

class UClass* UUI_editable_text_base::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_editable_text_base");

	return Clss;
}


// UI_editable_text_base VerseFortniteUI.Default__UI_editable_text_base
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_editable_text_base* UUI_editable_text_base::GetDefaultObj()
{
	static class UUI_editable_text_base* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_editable_text_base*>(UUI_editable_text_base::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteUI.UI_editable_text_base._L_2fFortnite_2ecom_2fUI_2feditable__text__base_N_ROnTextCommitted
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UObject*                     RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UObject* UUI_editable_text_base::_L_2fFortnite_2ecom_2fUI_2feditable__text__base_N_ROnTextCommitted(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_editable_text_base", "_L_2fFortnite_2ecom_2fUI_2feditable__text__base_N_ROnTextCommitted");

	Params::UUI_editable_text_base__L_2fFortnite_2ecom_2fUI_2feditable__text__base_N_ROnTextCommitted_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortniteUI.UI_editable_text_base.$InitInstance
// (None)
// Parameters:

void UUI_editable_text_base::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_editable_text_base", "$InitInstance");

	Params::UUI_editable_text_base__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_editable_text_base.$Block
// (None)
// Parameters:

void UUI_editable_text_base::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_editable_text_base", "$Block");

	Params::UUI_editable_text_base__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_editable_text_base.$InitCDO
// (HasDefaults)
// Parameters:
// class UVerseEngine_subscribable_event*_ExprResult_0                                                    (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerseEngine_subscribable_event*_ExprResult_2                                                    (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_editable_text_base::_InitCDO(class UVerseEngine_subscribable_event* _ExprResult_0, uint64 _InstancingGraph_1, class UVerseEngine_subscribable_event* _ExprResult_2, uint64 _InstancingGraph_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_editable_text_base", "$InitCDO");

	Params::UUI_editable_text_base__InitCDO_Params Parms{};

	Parms._ExprResult_0 = _ExprResult_0;
	Parms._InstancingGraph_1 = _InstancingGraph_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._InstancingGraph_3 = _InstancingGraph_3;

	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteUI.UI_editable_text
// (None)

class UClass* UUI_editable_text::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_editable_text");

	return Clss;
}


// UI_editable_text VerseFortniteUI.Default__UI_editable_text
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_editable_text* UUI_editable_text::GetDefaultObj()
{
	static class UUI_editable_text* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_editable_text*>(UUI_editable_text::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteUI.UI_editable_text.$InitInstance
// (None)
// Parameters:

void UUI_editable_text::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_editable_text", "$InitInstance");

	Params::UUI_editable_text__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_editable_text.$Block
// (None)
// Parameters:

void UUI_editable_text::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_editable_text", "$Block");

	Params::UUI_editable_text__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_editable_text.$InitCDO
// (None)
// Parameters:

void UUI_editable_text::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_editable_text", "$InitCDO");

	Params::UUI_editable_text__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteUI.UI_editable_text_box
// (None)

class UClass* UUI_editable_text_box::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_editable_text_box");

	return Clss;
}


// UI_editable_text_box VerseFortniteUI.Default__UI_editable_text_box
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_editable_text_box* UUI_editable_text_box::GetDefaultObj()
{
	static class UUI_editable_text_box* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_editable_text_box*>(UUI_editable_text_box::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteUI.UI_editable_text_box.$InitInstance
// (None)
// Parameters:

void UUI_editable_text_box::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_editable_text_box", "$InitInstance");

	Params::UUI_editable_text_box__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_editable_text_box.$Block
// (None)
// Parameters:

void UUI_editable_text_box::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_editable_text_box", "$Block");

	Params::UUI_editable_text_box__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_editable_text_box.$InitCDO
// (None)
// Parameters:

void UUI_editable_text_box::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_editable_text_box", "$InitCDO");

	Params::UUI_editable_text_box__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteUI.UI_fort_hud_controller
// (None)

class UClass* UUI_fort_hud_controller::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_fort_hud_controller");

	return Clss;
}


// UI_fort_hud_controller VerseFortniteUI.Default__UI_fort_hud_controller
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_fort_hud_controller* UUI_fort_hud_controller::GetDefaultObj()
{
	static class UUI_fort_hud_controller* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_fort_hud_controller*>(UUI_fort_hud_controller::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteUI.UI_fort_hud_controller._L_2fFortnite_2ecom_2fUI_2ffort__hud__controller_N_RShowElements_L_N_Khud__element__identifier_R
// (Public, BlueprintCallable)
// Parameters:
// TArray<class UUI_hud_element_identifier*>__verse_0xB2CDDD72_Argument                                      (Parm, ContainsInstancedReference)

void UUI_fort_hud_controller::_L_2fFortnite_2ecom_2fUI_2ffort__hud__controller_N_RShowElements_L_N_Khud__element__identifier_R(const TArray<class UUI_hud_element_identifier*>& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_fort_hud_controller", "_L_2fFortnite_2ecom_2fUI_2ffort__hud__controller_N_RShowElements_L_N_Khud__element__identifier_R");

	Params::UUI_fort_hud_controller__L_2fFortnite_2ecom_2fUI_2ffort__hud__controller_N_RShowElements_L_N_Khud__element__identifier_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_fort_hud_controller._L_2fFortnite_2ecom_2fUI_2ffort__hud__controller_N_RResetElementVisibility_L_N_Khud__element__identifier_R
// (Public, BlueprintCallable)
// Parameters:
// TArray<class UUI_hud_element_identifier*>__verse_0xB2CDDD72_Argument                                      (Parm, ContainsInstancedReference)

void UUI_fort_hud_controller::_L_2fFortnite_2ecom_2fUI_2ffort__hud__controller_N_RResetElementVisibility_L_N_Khud__element__identifier_R(const TArray<class UUI_hud_element_identifier*>& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_fort_hud_controller", "_L_2fFortnite_2ecom_2fUI_2ffort__hud__controller_N_RResetElementVisibility_L_N_Khud__element__identifier_R");

	Params::UUI_fort_hud_controller__L_2fFortnite_2ecom_2fUI_2ffort__hud__controller_N_RResetElementVisibility_L_N_Khud__element__identifier_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_fort_hud_controller._L_2fFortnite_2ecom_2fUI_2ffort__hud__controller_N_RHideElements_L_N_Khud__element__identifier_R
// (Public, BlueprintCallable)
// Parameters:
// TArray<class UUI_hud_element_identifier*>__verse_0xB2CDDD72_Argument                                      (Parm, ContainsInstancedReference)

void UUI_fort_hud_controller::_L_2fFortnite_2ecom_2fUI_2ffort__hud__controller_N_RHideElements_L_N_Khud__element__identifier_R(const TArray<class UUI_hud_element_identifier*>& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_fort_hud_controller", "_L_2fFortnite_2ecom_2fUI_2ffort__hud__controller_N_RHideElements_L_N_Khud__element__identifier_R");

	Params::UUI_fort_hud_controller__L_2fFortnite_2ecom_2fUI_2ffort__hud__controller_N_RHideElements_L_N_Khud__element__identifier_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteUI.UI_fort_playspace_hud_controller_impl
// (None)

class UClass* UUI_fort_playspace_hud_controller_impl::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_fort_playspace_hud_controller_impl");

	return Clss;
}


// UI_fort_playspace_hud_controller_impl VerseFortniteUI.Default__UI_fort_playspace_hud_controller_impl
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_fort_playspace_hud_controller_impl* UUI_fort_playspace_hud_controller_impl::GetDefaultObj()
{
	static class UUI_fort_playspace_hud_controller_impl* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_fort_playspace_hud_controller_impl*>(UUI_fort_playspace_hud_controller_impl::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteUI.UI_fort_playspace_hud_controller_impl._L_2fFortnite_2ecom_2fUI_2ffort__hud__controller_N_RShowElements_L_N_Khud__element__identifier_R
// (Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UUI_hud_element_identifier*>__verse_0xB2CDDD72_Argument                                      (Parm, ContainsInstancedReference)

void UUI_fort_playspace_hud_controller_impl::_L_2fFortnite_2ecom_2fUI_2ffort__hud__controller_N_RShowElements_L_N_Khud__element__identifier_R(const TArray<class UUI_hud_element_identifier*>& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_fort_playspace_hud_controller_impl", "_L_2fFortnite_2ecom_2fUI_2ffort__hud__controller_N_RShowElements_L_N_Khud__element__identifier_R");

	Params::UUI_fort_playspace_hud_controller_impl__L_2fFortnite_2ecom_2fUI_2ffort__hud__controller_N_RShowElements_L_N_Khud__element__identifier_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteUI.UI_fort_playspace_hud_controller_impl._L_2fFortnite_2ecom_2fUI_2ffort__hud__controller_N_RResetElementVisibility_L_N_Khud__element__identifier_R
// (Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UUI_hud_element_identifier*>__verse_0xB2CDDD72_Argument                                      (Parm, ContainsInstancedReference)

void UUI_fort_playspace_hud_controller_impl::_L_2fFortnite_2ecom_2fUI_2ffort__hud__controller_N_RResetElementVisibility_L_N_Khud__element__identifier_R(const TArray<class UUI_hud_element_identifier*>& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_fort_playspace_hud_controller_impl", "_L_2fFortnite_2ecom_2fUI_2ffort__hud__controller_N_RResetElementVisibility_L_N_Khud__element__identifier_R");

	Params::UUI_fort_playspace_hud_controller_impl__L_2fFortnite_2ecom_2fUI_2ffort__hud__controller_N_RResetElementVisibility_L_N_Khud__element__identifier_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteUI.UI_fort_playspace_hud_controller_impl._L_2fFortnite_2ecom_2fUI_2ffort__hud__controller_N_RHideElements_L_N_Khud__element__identifier_R
// (Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UUI_hud_element_identifier*>__verse_0xB2CDDD72_Argument                                      (Parm, ContainsInstancedReference)

void UUI_fort_playspace_hud_controller_impl::_L_2fFortnite_2ecom_2fUI_2ffort__hud__controller_N_RHideElements_L_N_Khud__element__identifier_R(const TArray<class UUI_hud_element_identifier*>& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_fort_playspace_hud_controller_impl", "_L_2fFortnite_2ecom_2fUI_2ffort__hud__controller_N_RHideElements_L_N_Khud__element__identifier_R");

	Params::UUI_fort_playspace_hud_controller_impl__L_2fFortnite_2ecom_2fUI_2ffort__hud__controller_N_RHideElements_L_N_Khud__element__identifier_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteUI.UI_fort_playspace_hud_controller_impl.$InitInstance
// (None)
// Parameters:

void UUI_fort_playspace_hud_controller_impl::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_fort_playspace_hud_controller_impl", "$InitInstance");

	Params::UUI_fort_playspace_hud_controller_impl__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_fort_playspace_hud_controller_impl.$Block
// (None)
// Parameters:

void UUI_fort_playspace_hud_controller_impl::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_fort_playspace_hud_controller_impl", "$Block");

	Params::UUI_fort_playspace_hud_controller_impl__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_fort_playspace_hud_controller_impl.$InitCDO
// (None)
// Parameters:

void UUI_fort_playspace_hud_controller_impl::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_fort_playspace_hud_controller_impl", "$InitCDO");

	Params::UUI_fort_playspace_hud_controller_impl__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteUI.UI_hud_element_identifier
// (None)

class UClass* UUI_hud_element_identifier::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_hud_element_identifier");

	return Clss;
}


// UI_hud_element_identifier VerseFortniteUI.Default__UI_hud_element_identifier
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_hud_element_identifier* UUI_hud_element_identifier::GetDefaultObj()
{
	static class UUI_hud_element_identifier* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_hud_element_identifier*>(UUI_hud_element_identifier::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteUI.UI_hud_element_identifier.$InitInstance
// (None)
// Parameters:

void UUI_hud_element_identifier::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_hud_element_identifier", "$InitInstance");

	Params::UUI_hud_element_identifier__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_hud_element_identifier.$Block
// (None)
// Parameters:

void UUI_hud_element_identifier::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_hud_element_identifier", "$Block");

	Params::UUI_hud_element_identifier__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_hud_element_identifier.$InitCDO
// (None)
// Parameters:

void UUI_hud_element_identifier::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_hud_element_identifier", "$InitCDO");

	Params::UUI_hud_element_identifier__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteUI.UI_hud_element_game_phase_identifier_base
// (None)

class UClass* UUI_hud_element_game_phase_identifier_base::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_hud_element_game_phase_identifier_base");

	return Clss;
}


// UI_hud_element_game_phase_identifier_base VerseFortniteUI.Default__UI_hud_element_game_phase_identifier_base
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_hud_element_game_phase_identifier_base* UUI_hud_element_game_phase_identifier_base::GetDefaultObj()
{
	static class UUI_hud_element_game_phase_identifier_base* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_hud_element_game_phase_identifier_base*>(UUI_hud_element_game_phase_identifier_base::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteUI.UI_hud_element_game_phase_identifier_base.$InitInstance
// (None)
// Parameters:

void UUI_hud_element_game_phase_identifier_base::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_hud_element_game_phase_identifier_base", "$InitInstance");

	Params::UUI_hud_element_game_phase_identifier_base__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_hud_element_game_phase_identifier_base.$Block
// (None)
// Parameters:

void UUI_hud_element_game_phase_identifier_base::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_hud_element_game_phase_identifier_base", "$Block");

	Params::UUI_hud_element_game_phase_identifier_base__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_hud_element_game_phase_identifier_base.$InitCDO
// (None)
// Parameters:

void UUI_hud_element_game_phase_identifier_base::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_hud_element_game_phase_identifier_base", "$InitCDO");

	Params::UUI_hud_element_game_phase_identifier_base__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteUI.UI_hud_element_gameplay_tag_identifier_base
// (None)

class UClass* UUI_hud_element_gameplay_tag_identifier_base::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_hud_element_gameplay_tag_identifier_base");

	return Clss;
}


// UI_hud_element_gameplay_tag_identifier_base VerseFortniteUI.Default__UI_hud_element_gameplay_tag_identifier_base
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_hud_element_gameplay_tag_identifier_base* UUI_hud_element_gameplay_tag_identifier_base::GetDefaultObj()
{
	static class UUI_hud_element_gameplay_tag_identifier_base* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_hud_element_gameplay_tag_identifier_base*>(UUI_hud_element_gameplay_tag_identifier_base::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteUI.UI_hud_element_gameplay_tag_identifier_base.$InitInstance
// (None)
// Parameters:

void UUI_hud_element_gameplay_tag_identifier_base::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_hud_element_gameplay_tag_identifier_base", "$InitInstance");

	Params::UUI_hud_element_gameplay_tag_identifier_base__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_hud_element_gameplay_tag_identifier_base.$Block
// (None)
// Parameters:

void UUI_hud_element_gameplay_tag_identifier_base::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_hud_element_gameplay_tag_identifier_base", "$Block");

	Params::UUI_hud_element_gameplay_tag_identifier_base__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_hud_element_gameplay_tag_identifier_base.$InitCDO
// (None)
// Parameters:

void UUI_hud_element_gameplay_tag_identifier_base::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_hud_element_gameplay_tag_identifier_base", "$InitCDO");

	Params::UUI_hud_element_gameplay_tag_identifier_base__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteUI.UI_creative_hud_identifier_all
// (None)

class UClass* UUI_creative_hud_identifier_all::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_creative_hud_identifier_all");

	return Clss;
}


// UI_creative_hud_identifier_all VerseFortniteUI.Default__UI_creative_hud_identifier_all
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_creative_hud_identifier_all* UUI_creative_hud_identifier_all::GetDefaultObj()
{
	static class UUI_creative_hud_identifier_all* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_creative_hud_identifier_all*>(UUI_creative_hud_identifier_all::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteUI.UI_creative_hud_identifier_all.$InitInstance
// (None)
// Parameters:

void UUI_creative_hud_identifier_all::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_all", "$InitInstance");

	Params::UUI_creative_hud_identifier_all__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_creative_hud_identifier_all.$Block
// (None)
// Parameters:

void UUI_creative_hud_identifier_all::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_all", "$Block");

	Params::UUI_creative_hud_identifier_all__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_creative_hud_identifier_all.$InitCDO
// (HasDefaults)
// Parameters:
// FVerseStringProperty_              _ExprResult_0                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_1                                                    (HasGetValueTypeHash)

void UUI_creative_hud_identifier_all::_InitCDO(FVerseStringProperty_ _ExprResult_0, FVerseStringProperty_ _ExprResult_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_all", "$InitCDO");

	Params::UUI_creative_hud_identifier_all__InitCDO_Params Parms{};

	Parms._ExprResult_0 = _ExprResult_0;
	Parms._ExprResult_1 = _ExprResult_1;

	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteUI.UI_creative_hud_identifier_build_menu
// (None)

class UClass* UUI_creative_hud_identifier_build_menu::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_creative_hud_identifier_build_menu");

	return Clss;
}


// UI_creative_hud_identifier_build_menu VerseFortniteUI.Default__UI_creative_hud_identifier_build_menu
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_creative_hud_identifier_build_menu* UUI_creative_hud_identifier_build_menu::GetDefaultObj()
{
	static class UUI_creative_hud_identifier_build_menu* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_creative_hud_identifier_build_menu*>(UUI_creative_hud_identifier_build_menu::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteUI.UI_creative_hud_identifier_build_menu.$InitInstance
// (None)
// Parameters:

void UUI_creative_hud_identifier_build_menu::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_build_menu", "$InitInstance");

	Params::UUI_creative_hud_identifier_build_menu__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_creative_hud_identifier_build_menu.$Block
// (None)
// Parameters:

void UUI_creative_hud_identifier_build_menu::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_build_menu", "$Block");

	Params::UUI_creative_hud_identifier_build_menu__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_creative_hud_identifier_build_menu.$InitCDO
// (HasDefaults)
// Parameters:
// FVerseStringProperty_              _ExprResult_0                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_1                                                    (HasGetValueTypeHash)

void UUI_creative_hud_identifier_build_menu::_InitCDO(FVerseStringProperty_ _ExprResult_0, FVerseStringProperty_ _ExprResult_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_build_menu", "$InitCDO");

	Params::UUI_creative_hud_identifier_build_menu__InitCDO_Params Parms{};

	Parms._ExprResult_0 = _ExprResult_0;
	Parms._ExprResult_1 = _ExprResult_1;

	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteUI.UI_creative_hud_identifier_crafting_resources
// (None)

class UClass* UUI_creative_hud_identifier_crafting_resources::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_creative_hud_identifier_crafting_resources");

	return Clss;
}


// UI_creative_hud_identifier_crafting_resources VerseFortniteUI.Default__UI_creative_hud_identifier_crafting_resources
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_creative_hud_identifier_crafting_resources* UUI_creative_hud_identifier_crafting_resources::GetDefaultObj()
{
	static class UUI_creative_hud_identifier_crafting_resources* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_creative_hud_identifier_crafting_resources*>(UUI_creative_hud_identifier_crafting_resources::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteUI.UI_creative_hud_identifier_crafting_resources.$InitInstance
// (None)
// Parameters:

void UUI_creative_hud_identifier_crafting_resources::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_crafting_resources", "$InitInstance");

	Params::UUI_creative_hud_identifier_crafting_resources__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_creative_hud_identifier_crafting_resources.$Block
// (None)
// Parameters:

void UUI_creative_hud_identifier_crafting_resources::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_crafting_resources", "$Block");

	Params::UUI_creative_hud_identifier_crafting_resources__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_creative_hud_identifier_crafting_resources.$InitCDO
// (HasDefaults)
// Parameters:
// FVerseStringProperty_              _ExprResult_0                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_1                                                    (HasGetValueTypeHash)

void UUI_creative_hud_identifier_crafting_resources::_InitCDO(FVerseStringProperty_ _ExprResult_0, FVerseStringProperty_ _ExprResult_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_crafting_resources", "$InitCDO");

	Params::UUI_creative_hud_identifier_crafting_resources__InitCDO_Params Parms{};

	Parms._ExprResult_0 = _ExprResult_0;
	Parms._ExprResult_1 = _ExprResult_1;

	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteUI.UI_creative_hud_identifier_elimination_counter
// (None)

class UClass* UUI_creative_hud_identifier_elimination_counter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_creative_hud_identifier_elimination_counter");

	return Clss;
}


// UI_creative_hud_identifier_elimination_counter VerseFortniteUI.Default__UI_creative_hud_identifier_elimination_counter
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_creative_hud_identifier_elimination_counter* UUI_creative_hud_identifier_elimination_counter::GetDefaultObj()
{
	static class UUI_creative_hud_identifier_elimination_counter* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_creative_hud_identifier_elimination_counter*>(UUI_creative_hud_identifier_elimination_counter::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteUI.UI_creative_hud_identifier_elimination_counter.$InitInstance
// (None)
// Parameters:

void UUI_creative_hud_identifier_elimination_counter::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_elimination_counter", "$InitInstance");

	Params::UUI_creative_hud_identifier_elimination_counter__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_creative_hud_identifier_elimination_counter.$Block
// (None)
// Parameters:

void UUI_creative_hud_identifier_elimination_counter::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_elimination_counter", "$Block");

	Params::UUI_creative_hud_identifier_elimination_counter__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_creative_hud_identifier_elimination_counter.$InitCDO
// (HasDefaults)
// Parameters:
// FVerseStringProperty_              _ExprResult_0                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_1                                                    (HasGetValueTypeHash)

void UUI_creative_hud_identifier_elimination_counter::_InitCDO(FVerseStringProperty_ _ExprResult_0, FVerseStringProperty_ _ExprResult_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_elimination_counter", "$InitCDO");

	Params::UUI_creative_hud_identifier_elimination_counter__InitCDO_Params Parms{};

	Parms._ExprResult_0 = _ExprResult_0;
	Parms._ExprResult_1 = _ExprResult_1;

	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteUI.UI_creative_hud_identifier_equipped_item
// (None)

class UClass* UUI_creative_hud_identifier_equipped_item::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_creative_hud_identifier_equipped_item");

	return Clss;
}


// UI_creative_hud_identifier_equipped_item VerseFortniteUI.Default__UI_creative_hud_identifier_equipped_item
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_creative_hud_identifier_equipped_item* UUI_creative_hud_identifier_equipped_item::GetDefaultObj()
{
	static class UUI_creative_hud_identifier_equipped_item* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_creative_hud_identifier_equipped_item*>(UUI_creative_hud_identifier_equipped_item::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteUI.UI_creative_hud_identifier_equipped_item.$InitInstance
// (None)
// Parameters:

void UUI_creative_hud_identifier_equipped_item::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_equipped_item", "$InitInstance");

	Params::UUI_creative_hud_identifier_equipped_item__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_creative_hud_identifier_equipped_item.$Block
// (None)
// Parameters:

void UUI_creative_hud_identifier_equipped_item::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_equipped_item", "$Block");

	Params::UUI_creative_hud_identifier_equipped_item__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_creative_hud_identifier_equipped_item.$InitCDO
// (HasDefaults)
// Parameters:
// FVerseStringProperty_              _ExprResult_0                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_1                                                    (HasGetValueTypeHash)

void UUI_creative_hud_identifier_equipped_item::_InitCDO(FVerseStringProperty_ _ExprResult_0, FVerseStringProperty_ _ExprResult_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_equipped_item", "$InitCDO");

	Params::UUI_creative_hud_identifier_equipped_item__InitCDO_Params Parms{};

	Parms._ExprResult_0 = _ExprResult_0;
	Parms._ExprResult_1 = _ExprResult_1;

	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteUI.UI_creative_hud_identifier_experience_level
// (None)

class UClass* UUI_creative_hud_identifier_experience_level::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_creative_hud_identifier_experience_level");

	return Clss;
}


// UI_creative_hud_identifier_experience_level VerseFortniteUI.Default__UI_creative_hud_identifier_experience_level
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_creative_hud_identifier_experience_level* UUI_creative_hud_identifier_experience_level::GetDefaultObj()
{
	static class UUI_creative_hud_identifier_experience_level* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_creative_hud_identifier_experience_level*>(UUI_creative_hud_identifier_experience_level::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteUI.UI_creative_hud_identifier_experience_level.$InitInstance
// (None)
// Parameters:

void UUI_creative_hud_identifier_experience_level::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_experience_level", "$InitInstance");

	Params::UUI_creative_hud_identifier_experience_level__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_creative_hud_identifier_experience_level.$Block
// (None)
// Parameters:

void UUI_creative_hud_identifier_experience_level::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_experience_level", "$Block");

	Params::UUI_creative_hud_identifier_experience_level__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_creative_hud_identifier_experience_level.$InitCDO
// (HasDefaults)
// Parameters:
// FVerseStringProperty_              _ExprResult_0                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_1                                                    (HasGetValueTypeHash)

void UUI_creative_hud_identifier_experience_level::_InitCDO(FVerseStringProperty_ _ExprResult_0, FVerseStringProperty_ _ExprResult_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_experience_level", "$InitCDO");

	Params::UUI_creative_hud_identifier_experience_level__InitCDO_Params Parms{};

	Parms._ExprResult_0 = _ExprResult_0;
	Parms._ExprResult_1 = _ExprResult_1;

	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteUI.UI_creative_hud_identifier_experience_supercharged
// (None)

class UClass* UUI_creative_hud_identifier_experience_supercharged::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_creative_hud_identifier_experience_supercharged");

	return Clss;
}


// UI_creative_hud_identifier_experience_supercharged VerseFortniteUI.Default__UI_creative_hud_identifier_experience_supercharged
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_creative_hud_identifier_experience_supercharged* UUI_creative_hud_identifier_experience_supercharged::GetDefaultObj()
{
	static class UUI_creative_hud_identifier_experience_supercharged* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_creative_hud_identifier_experience_supercharged*>(UUI_creative_hud_identifier_experience_supercharged::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteUI.UI_creative_hud_identifier_experience_supercharged.$InitInstance
// (None)
// Parameters:

void UUI_creative_hud_identifier_experience_supercharged::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_experience_supercharged", "$InitInstance");

	Params::UUI_creative_hud_identifier_experience_supercharged__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_creative_hud_identifier_experience_supercharged.$Block
// (None)
// Parameters:

void UUI_creative_hud_identifier_experience_supercharged::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_experience_supercharged", "$Block");

	Params::UUI_creative_hud_identifier_experience_supercharged__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_creative_hud_identifier_experience_supercharged.$InitCDO
// (HasDefaults)
// Parameters:
// FVerseStringProperty_              _ExprResult_0                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_1                                                    (HasGetValueTypeHash)

void UUI_creative_hud_identifier_experience_supercharged::_InitCDO(FVerseStringProperty_ _ExprResult_0, FVerseStringProperty_ _ExprResult_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_experience_supercharged", "$InitCDO");

	Params::UUI_creative_hud_identifier_experience_supercharged__InitCDO_Params Parms{};

	Parms._ExprResult_0 = _ExprResult_0;
	Parms._ExprResult_1 = _ExprResult_1;

	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteUI.UI_creative_hud_identifier_experience_ui
// (None)

class UClass* UUI_creative_hud_identifier_experience_ui::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_creative_hud_identifier_experience_ui");

	return Clss;
}


// UI_creative_hud_identifier_experience_ui VerseFortniteUI.Default__UI_creative_hud_identifier_experience_ui
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_creative_hud_identifier_experience_ui* UUI_creative_hud_identifier_experience_ui::GetDefaultObj()
{
	static class UUI_creative_hud_identifier_experience_ui* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_creative_hud_identifier_experience_ui*>(UUI_creative_hud_identifier_experience_ui::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteUI.UI_creative_hud_identifier_experience_ui.$InitInstance
// (None)
// Parameters:

void UUI_creative_hud_identifier_experience_ui::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_experience_ui", "$InitInstance");

	Params::UUI_creative_hud_identifier_experience_ui__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_creative_hud_identifier_experience_ui.$Block
// (None)
// Parameters:

void UUI_creative_hud_identifier_experience_ui::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_experience_ui", "$Block");

	Params::UUI_creative_hud_identifier_experience_ui__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_creative_hud_identifier_experience_ui.$InitCDO
// (HasDefaults)
// Parameters:
// FVerseStringProperty_              _ExprResult_0                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_1                                                    (HasGetValueTypeHash)

void UUI_creative_hud_identifier_experience_ui::_InitCDO(FVerseStringProperty_ _ExprResult_0, FVerseStringProperty_ _ExprResult_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_experience_ui", "$InitCDO");

	Params::UUI_creative_hud_identifier_experience_ui__InitCDO_Params Parms{};

	Parms._ExprResult_0 = _ExprResult_0;
	Parms._ExprResult_1 = _ExprResult_1;

	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteUI.UI_creative_hud_identifier_health
// (None)

class UClass* UUI_creative_hud_identifier_health::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_creative_hud_identifier_health");

	return Clss;
}


// UI_creative_hud_identifier_health VerseFortniteUI.Default__UI_creative_hud_identifier_health
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_creative_hud_identifier_health* UUI_creative_hud_identifier_health::GetDefaultObj()
{
	static class UUI_creative_hud_identifier_health* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_creative_hud_identifier_health*>(UUI_creative_hud_identifier_health::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteUI.UI_creative_hud_identifier_health.$InitInstance
// (None)
// Parameters:

void UUI_creative_hud_identifier_health::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_health", "$InitInstance");

	Params::UUI_creative_hud_identifier_health__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_creative_hud_identifier_health.$Block
// (None)
// Parameters:

void UUI_creative_hud_identifier_health::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_health", "$Block");

	Params::UUI_creative_hud_identifier_health__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_creative_hud_identifier_health.$InitCDO
// (HasDefaults)
// Parameters:
// FVerseStringProperty_              _ExprResult_0                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_1                                                    (HasGetValueTypeHash)

void UUI_creative_hud_identifier_health::_InitCDO(FVerseStringProperty_ _ExprResult_0, FVerseStringProperty_ _ExprResult_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_health", "$InitCDO");

	Params::UUI_creative_hud_identifier_health__InitCDO_Params Parms{};

	Parms._ExprResult_0 = _ExprResult_0;
	Parms._ExprResult_1 = _ExprResult_1;

	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteUI.UI_creative_hud_identifier_health_numbers
// (None)

class UClass* UUI_creative_hud_identifier_health_numbers::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_creative_hud_identifier_health_numbers");

	return Clss;
}


// UI_creative_hud_identifier_health_numbers VerseFortniteUI.Default__UI_creative_hud_identifier_health_numbers
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_creative_hud_identifier_health_numbers* UUI_creative_hud_identifier_health_numbers::GetDefaultObj()
{
	static class UUI_creative_hud_identifier_health_numbers* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_creative_hud_identifier_health_numbers*>(UUI_creative_hud_identifier_health_numbers::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteUI.UI_creative_hud_identifier_health_numbers.$InitInstance
// (None)
// Parameters:

void UUI_creative_hud_identifier_health_numbers::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_health_numbers", "$InitInstance");

	Params::UUI_creative_hud_identifier_health_numbers__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_creative_hud_identifier_health_numbers.$Block
// (None)
// Parameters:

void UUI_creative_hud_identifier_health_numbers::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_health_numbers", "$Block");

	Params::UUI_creative_hud_identifier_health_numbers__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_creative_hud_identifier_health_numbers.$InitCDO
// (HasDefaults)
// Parameters:
// FVerseStringProperty_              _ExprResult_0                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_1                                                    (HasGetValueTypeHash)

void UUI_creative_hud_identifier_health_numbers::_InitCDO(FVerseStringProperty_ _ExprResult_0, FVerseStringProperty_ _ExprResult_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_health_numbers", "$InitCDO");

	Params::UUI_creative_hud_identifier_health_numbers__InitCDO_Params Parms{};

	Parms._ExprResult_0 = _ExprResult_0;
	Parms._ExprResult_1 = _ExprResult_1;

	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteUI.UI_creative_hud_identifier_hud_info
// (None)

class UClass* UUI_creative_hud_identifier_hud_info::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_creative_hud_identifier_hud_info");

	return Clss;
}


// UI_creative_hud_identifier_hud_info VerseFortniteUI.Default__UI_creative_hud_identifier_hud_info
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_creative_hud_identifier_hud_info* UUI_creative_hud_identifier_hud_info::GetDefaultObj()
{
	static class UUI_creative_hud_identifier_hud_info* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_creative_hud_identifier_hud_info*>(UUI_creative_hud_identifier_hud_info::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteUI.UI_creative_hud_identifier_hud_info.$InitInstance
// (None)
// Parameters:

void UUI_creative_hud_identifier_hud_info::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_hud_info", "$InitInstance");

	Params::UUI_creative_hud_identifier_hud_info__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_creative_hud_identifier_hud_info.$Block
// (None)
// Parameters:

void UUI_creative_hud_identifier_hud_info::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_hud_info", "$Block");

	Params::UUI_creative_hud_identifier_hud_info__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_creative_hud_identifier_hud_info.$InitCDO
// (HasDefaults)
// Parameters:
// FVerseStringProperty_              _ExprResult_0                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_1                                                    (HasGetValueTypeHash)

void UUI_creative_hud_identifier_hud_info::_InitCDO(FVerseStringProperty_ _ExprResult_0, FVerseStringProperty_ _ExprResult_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_hud_info", "$InitCDO");

	Params::UUI_creative_hud_identifier_hud_info__InitCDO_Params Parms{};

	Parms._ExprResult_0 = _ExprResult_0;
	Parms._ExprResult_1 = _ExprResult_1;

	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteUI.UI_creative_hud_identifier_interaction_prompts
// (None)

class UClass* UUI_creative_hud_identifier_interaction_prompts::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_creative_hud_identifier_interaction_prompts");

	return Clss;
}


// UI_creative_hud_identifier_interaction_prompts VerseFortniteUI.Default__UI_creative_hud_identifier_interaction_prompts
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_creative_hud_identifier_interaction_prompts* UUI_creative_hud_identifier_interaction_prompts::GetDefaultObj()
{
	static class UUI_creative_hud_identifier_interaction_prompts* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_creative_hud_identifier_interaction_prompts*>(UUI_creative_hud_identifier_interaction_prompts::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteUI.UI_creative_hud_identifier_interaction_prompts.$InitInstance
// (None)
// Parameters:

void UUI_creative_hud_identifier_interaction_prompts::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_interaction_prompts", "$InitInstance");

	Params::UUI_creative_hud_identifier_interaction_prompts__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_creative_hud_identifier_interaction_prompts.$Block
// (None)
// Parameters:

void UUI_creative_hud_identifier_interaction_prompts::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_interaction_prompts", "$Block");

	Params::UUI_creative_hud_identifier_interaction_prompts__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_creative_hud_identifier_interaction_prompts.$InitCDO
// (HasDefaults)
// Parameters:
// FVerseStringProperty_              _ExprResult_0                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_1                                                    (HasGetValueTypeHash)

void UUI_creative_hud_identifier_interaction_prompts::_InitCDO(FVerseStringProperty_ _ExprResult_0, FVerseStringProperty_ _ExprResult_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_interaction_prompts", "$InitCDO");

	Params::UUI_creative_hud_identifier_interaction_prompts__InitCDO_Params Parms{};

	Parms._ExprResult_0 = _ExprResult_0;
	Parms._ExprResult_1 = _ExprResult_1;

	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteUI.UI_creative_hud_identifier_map_prompts
// (None)

class UClass* UUI_creative_hud_identifier_map_prompts::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_creative_hud_identifier_map_prompts");

	return Clss;
}


// UI_creative_hud_identifier_map_prompts VerseFortniteUI.Default__UI_creative_hud_identifier_map_prompts
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_creative_hud_identifier_map_prompts* UUI_creative_hud_identifier_map_prompts::GetDefaultObj()
{
	static class UUI_creative_hud_identifier_map_prompts* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_creative_hud_identifier_map_prompts*>(UUI_creative_hud_identifier_map_prompts::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteUI.UI_creative_hud_identifier_map_prompts.$InitInstance
// (None)
// Parameters:

void UUI_creative_hud_identifier_map_prompts::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_map_prompts", "$InitInstance");

	Params::UUI_creative_hud_identifier_map_prompts__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_creative_hud_identifier_map_prompts.$Block
// (None)
// Parameters:

void UUI_creative_hud_identifier_map_prompts::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_map_prompts", "$Block");

	Params::UUI_creative_hud_identifier_map_prompts__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_creative_hud_identifier_map_prompts.$InitCDO
// (HasDefaults)
// Parameters:
// FVerseStringProperty_              _ExprResult_0                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_1                                                    (HasGetValueTypeHash)

void UUI_creative_hud_identifier_map_prompts::_InitCDO(FVerseStringProperty_ _ExprResult_0, FVerseStringProperty_ _ExprResult_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_map_prompts", "$InitCDO");

	Params::UUI_creative_hud_identifier_map_prompts__InitCDO_Params Parms{};

	Parms._ExprResult_0 = _ExprResult_0;
	Parms._ExprResult_1 = _ExprResult_1;

	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteUI.UI_creative_hud_identifier_mimimap
// (None)

class UClass* UUI_creative_hud_identifier_mimimap::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_creative_hud_identifier_mimimap");

	return Clss;
}


// UI_creative_hud_identifier_mimimap VerseFortniteUI.Default__UI_creative_hud_identifier_mimimap
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_creative_hud_identifier_mimimap* UUI_creative_hud_identifier_mimimap::GetDefaultObj()
{
	static class UUI_creative_hud_identifier_mimimap* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_creative_hud_identifier_mimimap*>(UUI_creative_hud_identifier_mimimap::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteUI.UI_creative_hud_identifier_mimimap.$InitInstance
// (None)
// Parameters:

void UUI_creative_hud_identifier_mimimap::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_mimimap", "$InitInstance");

	Params::UUI_creative_hud_identifier_mimimap__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_creative_hud_identifier_mimimap.$Block
// (None)
// Parameters:

void UUI_creative_hud_identifier_mimimap::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_mimimap", "$Block");

	Params::UUI_creative_hud_identifier_mimimap__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_creative_hud_identifier_mimimap.$InitCDO
// (HasDefaults)
// Parameters:
// FVerseStringProperty_              _ExprResult_0                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_1                                                    (HasGetValueTypeHash)

void UUI_creative_hud_identifier_mimimap::_InitCDO(FVerseStringProperty_ _ExprResult_0, FVerseStringProperty_ _ExprResult_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_mimimap", "$InitCDO");

	Params::UUI_creative_hud_identifier_mimimap__InitCDO_Params Parms{};

	Parms._ExprResult_0 = _ExprResult_0;
	Parms._ExprResult_1 = _ExprResult_1;

	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteUI.UI_creative_hud_identifier_minimap
// (None)

class UClass* UUI_creative_hud_identifier_minimap::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_creative_hud_identifier_minimap");

	return Clss;
}


// UI_creative_hud_identifier_minimap VerseFortniteUI.Default__UI_creative_hud_identifier_minimap
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_creative_hud_identifier_minimap* UUI_creative_hud_identifier_minimap::GetDefaultObj()
{
	static class UUI_creative_hud_identifier_minimap* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_creative_hud_identifier_minimap*>(UUI_creative_hud_identifier_minimap::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteUI.UI_creative_hud_identifier_minimap.$InitInstance
// (None)
// Parameters:

void UUI_creative_hud_identifier_minimap::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_minimap", "$InitInstance");

	Params::UUI_creative_hud_identifier_minimap__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_creative_hud_identifier_minimap.$Block
// (None)
// Parameters:

void UUI_creative_hud_identifier_minimap::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_minimap", "$Block");

	Params::UUI_creative_hud_identifier_minimap__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_creative_hud_identifier_minimap.$InitCDO
// (HasDefaults)
// Parameters:
// FVerseStringProperty_              _ExprResult_0                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_1                                                    (HasGetValueTypeHash)

void UUI_creative_hud_identifier_minimap::_InitCDO(FVerseStringProperty_ _ExprResult_0, FVerseStringProperty_ _ExprResult_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_minimap", "$InitCDO");

	Params::UUI_creative_hud_identifier_minimap__InitCDO_Params Parms{};

	Parms._ExprResult_0 = _ExprResult_0;
	Parms._ExprResult_1 = _ExprResult_1;

	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteUI.UI_creative_hud_identifier_pickup_stream
// (None)

class UClass* UUI_creative_hud_identifier_pickup_stream::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_creative_hud_identifier_pickup_stream");

	return Clss;
}


// UI_creative_hud_identifier_pickup_stream VerseFortniteUI.Default__UI_creative_hud_identifier_pickup_stream
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_creative_hud_identifier_pickup_stream* UUI_creative_hud_identifier_pickup_stream::GetDefaultObj()
{
	static class UUI_creative_hud_identifier_pickup_stream* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_creative_hud_identifier_pickup_stream*>(UUI_creative_hud_identifier_pickup_stream::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteUI.UI_creative_hud_identifier_pickup_stream.$InitInstance
// (None)
// Parameters:

void UUI_creative_hud_identifier_pickup_stream::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_pickup_stream", "$InitInstance");

	Params::UUI_creative_hud_identifier_pickup_stream__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_creative_hud_identifier_pickup_stream.$Block
// (None)
// Parameters:

void UUI_creative_hud_identifier_pickup_stream::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_pickup_stream", "$Block");

	Params::UUI_creative_hud_identifier_pickup_stream__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_creative_hud_identifier_pickup_stream.$InitCDO
// (HasDefaults)
// Parameters:
// FVerseStringProperty_              _ExprResult_0                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_1                                                    (HasGetValueTypeHash)

void UUI_creative_hud_identifier_pickup_stream::_InitCDO(FVerseStringProperty_ _ExprResult_0, FVerseStringProperty_ _ExprResult_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_pickup_stream", "$InitCDO");

	Params::UUI_creative_hud_identifier_pickup_stream__InitCDO_Params Parms{};

	Parms._ExprResult_0 = _ExprResult_0;
	Parms._ExprResult_1 = _ExprResult_1;

	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteUI.UI_creative_hud_identifier_player_count
// (None)

class UClass* UUI_creative_hud_identifier_player_count::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_creative_hud_identifier_player_count");

	return Clss;
}


// UI_creative_hud_identifier_player_count VerseFortniteUI.Default__UI_creative_hud_identifier_player_count
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_creative_hud_identifier_player_count* UUI_creative_hud_identifier_player_count::GetDefaultObj()
{
	static class UUI_creative_hud_identifier_player_count* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_creative_hud_identifier_player_count*>(UUI_creative_hud_identifier_player_count::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteUI.UI_creative_hud_identifier_player_count.$InitInstance
// (None)
// Parameters:

void UUI_creative_hud_identifier_player_count::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_player_count", "$InitInstance");

	Params::UUI_creative_hud_identifier_player_count__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_creative_hud_identifier_player_count.$Block
// (None)
// Parameters:

void UUI_creative_hud_identifier_player_count::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_player_count", "$Block");

	Params::UUI_creative_hud_identifier_player_count__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_creative_hud_identifier_player_count.$InitCDO
// (HasDefaults)
// Parameters:
// FVerseStringProperty_              _ExprResult_0                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_1                                                    (HasGetValueTypeHash)

void UUI_creative_hud_identifier_player_count::_InitCDO(FVerseStringProperty_ _ExprResult_0, FVerseStringProperty_ _ExprResult_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_player_count", "$InitCDO");

	Params::UUI_creative_hud_identifier_player_count__InitCDO_Params Parms{};

	Parms._ExprResult_0 = _ExprResult_0;
	Parms._ExprResult_1 = _ExprResult_1;

	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteUI.UI_creative_hud_identifier_player_inventory
// (None)

class UClass* UUI_creative_hud_identifier_player_inventory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_creative_hud_identifier_player_inventory");

	return Clss;
}


// UI_creative_hud_identifier_player_inventory VerseFortniteUI.Default__UI_creative_hud_identifier_player_inventory
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_creative_hud_identifier_player_inventory* UUI_creative_hud_identifier_player_inventory::GetDefaultObj()
{
	static class UUI_creative_hud_identifier_player_inventory* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_creative_hud_identifier_player_inventory*>(UUI_creative_hud_identifier_player_inventory::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteUI.UI_creative_hud_identifier_player_inventory.$InitInstance
// (None)
// Parameters:

void UUI_creative_hud_identifier_player_inventory::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_player_inventory", "$InitInstance");

	Params::UUI_creative_hud_identifier_player_inventory__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_creative_hud_identifier_player_inventory.$Block
// (None)
// Parameters:

void UUI_creative_hud_identifier_player_inventory::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_player_inventory", "$Block");

	Params::UUI_creative_hud_identifier_player_inventory__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_creative_hud_identifier_player_inventory.$InitCDO
// (HasDefaults)
// Parameters:
// FVerseStringProperty_              _ExprResult_0                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_1                                                    (HasGetValueTypeHash)

void UUI_creative_hud_identifier_player_inventory::_InitCDO(FVerseStringProperty_ _ExprResult_0, FVerseStringProperty_ _ExprResult_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_player_inventory", "$InitCDO");

	Params::UUI_creative_hud_identifier_player_inventory__InitCDO_Params Parms{};

	Parms._ExprResult_0 = _ExprResult_0;
	Parms._ExprResult_1 = _ExprResult_1;

	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteUI.UI_creative_hud_identifier_round_info
// (None)

class UClass* UUI_creative_hud_identifier_round_info::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_creative_hud_identifier_round_info");

	return Clss;
}


// UI_creative_hud_identifier_round_info VerseFortniteUI.Default__UI_creative_hud_identifier_round_info
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_creative_hud_identifier_round_info* UUI_creative_hud_identifier_round_info::GetDefaultObj()
{
	static class UUI_creative_hud_identifier_round_info* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_creative_hud_identifier_round_info*>(UUI_creative_hud_identifier_round_info::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteUI.UI_creative_hud_identifier_round_info.$InitInstance
// (None)
// Parameters:

void UUI_creative_hud_identifier_round_info::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_round_info", "$InitInstance");

	Params::UUI_creative_hud_identifier_round_info__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_creative_hud_identifier_round_info.$Block
// (None)
// Parameters:

void UUI_creative_hud_identifier_round_info::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_round_info", "$Block");

	Params::UUI_creative_hud_identifier_round_info__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_creative_hud_identifier_round_info.$InitCDO
// (HasDefaults)
// Parameters:
// FVerseStringProperty_              _ExprResult_0                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_1                                                    (HasGetValueTypeHash)

void UUI_creative_hud_identifier_round_info::_InitCDO(FVerseStringProperty_ _ExprResult_0, FVerseStringProperty_ _ExprResult_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_round_info", "$InitCDO");

	Params::UUI_creative_hud_identifier_round_info__InitCDO_Params Parms{};

	Parms._ExprResult_0 = _ExprResult_0;
	Parms._ExprResult_1 = _ExprResult_1;

	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteUI.UI_creative_hud_identifier_round_timer
// (None)

class UClass* UUI_creative_hud_identifier_round_timer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_creative_hud_identifier_round_timer");

	return Clss;
}


// UI_creative_hud_identifier_round_timer VerseFortniteUI.Default__UI_creative_hud_identifier_round_timer
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_creative_hud_identifier_round_timer* UUI_creative_hud_identifier_round_timer::GetDefaultObj()
{
	static class UUI_creative_hud_identifier_round_timer* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_creative_hud_identifier_round_timer*>(UUI_creative_hud_identifier_round_timer::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteUI.UI_creative_hud_identifier_round_timer.$InitInstance
// (None)
// Parameters:

void UUI_creative_hud_identifier_round_timer::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_round_timer", "$InitInstance");

	Params::UUI_creative_hud_identifier_round_timer__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_creative_hud_identifier_round_timer.$Block
// (None)
// Parameters:

void UUI_creative_hud_identifier_round_timer::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_round_timer", "$Block");

	Params::UUI_creative_hud_identifier_round_timer__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_creative_hud_identifier_round_timer.$InitCDO
// (HasDefaults)
// Parameters:
// FVerseStringProperty_              _ExprResult_0                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_1                                                    (HasGetValueTypeHash)

void UUI_creative_hud_identifier_round_timer::_InitCDO(FVerseStringProperty_ _ExprResult_0, FVerseStringProperty_ _ExprResult_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_round_timer", "$InitCDO");

	Params::UUI_creative_hud_identifier_round_timer__InitCDO_Params Parms{};

	Parms._ExprResult_0 = _ExprResult_0;
	Parms._ExprResult_1 = _ExprResult_1;

	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteUI.UI_creative_hud_identifier_shield_numbers
// (None)

class UClass* UUI_creative_hud_identifier_shield_numbers::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_creative_hud_identifier_shield_numbers");

	return Clss;
}


// UI_creative_hud_identifier_shield_numbers VerseFortniteUI.Default__UI_creative_hud_identifier_shield_numbers
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_creative_hud_identifier_shield_numbers* UUI_creative_hud_identifier_shield_numbers::GetDefaultObj()
{
	static class UUI_creative_hud_identifier_shield_numbers* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_creative_hud_identifier_shield_numbers*>(UUI_creative_hud_identifier_shield_numbers::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteUI.UI_creative_hud_identifier_shield_numbers.$InitInstance
// (None)
// Parameters:

void UUI_creative_hud_identifier_shield_numbers::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_shield_numbers", "$InitInstance");

	Params::UUI_creative_hud_identifier_shield_numbers__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_creative_hud_identifier_shield_numbers.$Block
// (None)
// Parameters:

void UUI_creative_hud_identifier_shield_numbers::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_shield_numbers", "$Block");

	Params::UUI_creative_hud_identifier_shield_numbers__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_creative_hud_identifier_shield_numbers.$InitCDO
// (HasDefaults)
// Parameters:
// FVerseStringProperty_              _ExprResult_0                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_1                                                    (HasGetValueTypeHash)

void UUI_creative_hud_identifier_shield_numbers::_InitCDO(FVerseStringProperty_ _ExprResult_0, FVerseStringProperty_ _ExprResult_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_shield_numbers", "$InitCDO");

	Params::UUI_creative_hud_identifier_shield_numbers__InitCDO_Params Parms{};

	Parms._ExprResult_0 = _ExprResult_0;
	Parms._ExprResult_1 = _ExprResult_1;

	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteUI.UI_creative_hud_identifier_shields
// (None)

class UClass* UUI_creative_hud_identifier_shields::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_creative_hud_identifier_shields");

	return Clss;
}


// UI_creative_hud_identifier_shields VerseFortniteUI.Default__UI_creative_hud_identifier_shields
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_creative_hud_identifier_shields* UUI_creative_hud_identifier_shields::GetDefaultObj()
{
	static class UUI_creative_hud_identifier_shields* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_creative_hud_identifier_shields*>(UUI_creative_hud_identifier_shields::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteUI.UI_creative_hud_identifier_shields.$InitInstance
// (None)
// Parameters:

void UUI_creative_hud_identifier_shields::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_shields", "$InitInstance");

	Params::UUI_creative_hud_identifier_shields__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_creative_hud_identifier_shields.$Block
// (None)
// Parameters:

void UUI_creative_hud_identifier_shields::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_shields", "$Block");

	Params::UUI_creative_hud_identifier_shields__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_creative_hud_identifier_shields.$InitCDO
// (HasDefaults)
// Parameters:
// FVerseStringProperty_              _ExprResult_0                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_1                                                    (HasGetValueTypeHash)

void UUI_creative_hud_identifier_shields::_InitCDO(FVerseStringProperty_ _ExprResult_0, FVerseStringProperty_ _ExprResult_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_shields", "$InitCDO");

	Params::UUI_creative_hud_identifier_shields__InitCDO_Params Parms{};

	Parms._ExprResult_0 = _ExprResult_0;
	Parms._ExprResult_1 = _ExprResult_1;

	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteUI.UI_creative_hud_identifier_shileds
// (None)

class UClass* UUI_creative_hud_identifier_shileds::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_creative_hud_identifier_shileds");

	return Clss;
}


// UI_creative_hud_identifier_shileds VerseFortniteUI.Default__UI_creative_hud_identifier_shileds
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_creative_hud_identifier_shileds* UUI_creative_hud_identifier_shileds::GetDefaultObj()
{
	static class UUI_creative_hud_identifier_shileds* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_creative_hud_identifier_shileds*>(UUI_creative_hud_identifier_shileds::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteUI.UI_creative_hud_identifier_shileds.$InitInstance
// (None)
// Parameters:

void UUI_creative_hud_identifier_shileds::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_shileds", "$InitInstance");

	Params::UUI_creative_hud_identifier_shileds__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_creative_hud_identifier_shileds.$Block
// (None)
// Parameters:

void UUI_creative_hud_identifier_shileds::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_shileds", "$Block");

	Params::UUI_creative_hud_identifier_shileds__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_creative_hud_identifier_shileds.$InitCDO
// (HasDefaults)
// Parameters:
// FVerseStringProperty_              _ExprResult_0                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_1                                                    (HasGetValueTypeHash)

void UUI_creative_hud_identifier_shileds::_InitCDO(FVerseStringProperty_ _ExprResult_0, FVerseStringProperty_ _ExprResult_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_shileds", "$InitCDO");

	Params::UUI_creative_hud_identifier_shileds__InitCDO_Params Parms{};

	Parms._ExprResult_0 = _ExprResult_0;
	Parms._ExprResult_1 = _ExprResult_1;

	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteUI.UI_creative_hud_identifier_storm_notifications
// (None)

class UClass* UUI_creative_hud_identifier_storm_notifications::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_creative_hud_identifier_storm_notifications");

	return Clss;
}


// UI_creative_hud_identifier_storm_notifications VerseFortniteUI.Default__UI_creative_hud_identifier_storm_notifications
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_creative_hud_identifier_storm_notifications* UUI_creative_hud_identifier_storm_notifications::GetDefaultObj()
{
	static class UUI_creative_hud_identifier_storm_notifications* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_creative_hud_identifier_storm_notifications*>(UUI_creative_hud_identifier_storm_notifications::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteUI.UI_creative_hud_identifier_storm_notifications.$InitInstance
// (None)
// Parameters:

void UUI_creative_hud_identifier_storm_notifications::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_storm_notifications", "$InitInstance");

	Params::UUI_creative_hud_identifier_storm_notifications__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_creative_hud_identifier_storm_notifications.$Block
// (None)
// Parameters:

void UUI_creative_hud_identifier_storm_notifications::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_storm_notifications", "$Block");

	Params::UUI_creative_hud_identifier_storm_notifications__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_creative_hud_identifier_storm_notifications.$InitCDO
// (HasDefaults)
// Parameters:
// FVerseStringProperty_              _ExprResult_0                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_1                                                    (HasGetValueTypeHash)

void UUI_creative_hud_identifier_storm_notifications::_InitCDO(FVerseStringProperty_ _ExprResult_0, FVerseStringProperty_ _ExprResult_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_storm_notifications", "$InitCDO");

	Params::UUI_creative_hud_identifier_storm_notifications__InitCDO_Params Parms{};

	Parms._ExprResult_0 = _ExprResult_0;
	Parms._ExprResult_1 = _ExprResult_1;

	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteUI.UI_creative_hud_identifier_storm_timer
// (None)

class UClass* UUI_creative_hud_identifier_storm_timer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_creative_hud_identifier_storm_timer");

	return Clss;
}


// UI_creative_hud_identifier_storm_timer VerseFortniteUI.Default__UI_creative_hud_identifier_storm_timer
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_creative_hud_identifier_storm_timer* UUI_creative_hud_identifier_storm_timer::GetDefaultObj()
{
	static class UUI_creative_hud_identifier_storm_timer* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_creative_hud_identifier_storm_timer*>(UUI_creative_hud_identifier_storm_timer::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteUI.UI_creative_hud_identifier_storm_timer.$InitInstance
// (None)
// Parameters:

void UUI_creative_hud_identifier_storm_timer::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_storm_timer", "$InitInstance");

	Params::UUI_creative_hud_identifier_storm_timer__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_creative_hud_identifier_storm_timer.$Block
// (None)
// Parameters:

void UUI_creative_hud_identifier_storm_timer::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_storm_timer", "$Block");

	Params::UUI_creative_hud_identifier_storm_timer__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_creative_hud_identifier_storm_timer.$InitCDO
// (HasDefaults)
// Parameters:
// FVerseStringProperty_              _ExprResult_0                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_1                                                    (HasGetValueTypeHash)

void UUI_creative_hud_identifier_storm_timer::_InitCDO(FVerseStringProperty_ _ExprResult_0, FVerseStringProperty_ _ExprResult_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_storm_timer", "$InitCDO");

	Params::UUI_creative_hud_identifier_storm_timer__InitCDO_Params Parms{};

	Parms._ExprResult_0 = _ExprResult_0;
	Parms._ExprResult_1 = _ExprResult_1;

	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteUI.UI_creative_hud_identifier_team_info
// (None)

class UClass* UUI_creative_hud_identifier_team_info::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_creative_hud_identifier_team_info");

	return Clss;
}


// UI_creative_hud_identifier_team_info VerseFortniteUI.Default__UI_creative_hud_identifier_team_info
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_creative_hud_identifier_team_info* UUI_creative_hud_identifier_team_info::GetDefaultObj()
{
	static class UUI_creative_hud_identifier_team_info* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_creative_hud_identifier_team_info*>(UUI_creative_hud_identifier_team_info::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteUI.UI_creative_hud_identifier_team_info.$InitInstance
// (None)
// Parameters:

void UUI_creative_hud_identifier_team_info::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_team_info", "$InitInstance");

	Params::UUI_creative_hud_identifier_team_info__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_creative_hud_identifier_team_info.$Block
// (None)
// Parameters:

void UUI_creative_hud_identifier_team_info::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_team_info", "$Block");

	Params::UUI_creative_hud_identifier_team_info__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_creative_hud_identifier_team_info.$InitCDO
// (HasDefaults)
// Parameters:
// FVerseStringProperty_              _ExprResult_0                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_1                                                    (HasGetValueTypeHash)

void UUI_creative_hud_identifier_team_info::_InitCDO(FVerseStringProperty_ _ExprResult_0, FVerseStringProperty_ _ExprResult_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_creative_hud_identifier_team_info", "$InitCDO");

	Params::UUI_creative_hud_identifier_team_info__InitCDO_Params Parms{};

	Parms._ExprResult_0 = _ExprResult_0;
	Parms._ExprResult_1 = _ExprResult_1;

	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteUI.UI_hud_element_world_resource_identifier_base
// (None)

class UClass* UUI_hud_element_world_resource_identifier_base::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_hud_element_world_resource_identifier_base");

	return Clss;
}


// UI_hud_element_world_resource_identifier_base VerseFortniteUI.Default__UI_hud_element_world_resource_identifier_base
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_hud_element_world_resource_identifier_base* UUI_hud_element_world_resource_identifier_base::GetDefaultObj()
{
	static class UUI_hud_element_world_resource_identifier_base* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_hud_element_world_resource_identifier_base*>(UUI_hud_element_world_resource_identifier_base::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteUI.UI_hud_element_world_resource_identifier_base.$InitInstance
// (None)
// Parameters:

void UUI_hud_element_world_resource_identifier_base::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_hud_element_world_resource_identifier_base", "$InitInstance");

	Params::UUI_hud_element_world_resource_identifier_base__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_hud_element_world_resource_identifier_base.$Block
// (None)
// Parameters:

void UUI_hud_element_world_resource_identifier_base::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_hud_element_world_resource_identifier_base", "$Block");

	Params::UUI_hud_element_world_resource_identifier_base__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_hud_element_world_resource_identifier_base.$InitCDO
// (None)
// Parameters:

void UUI_hud_element_world_resource_identifier_base::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_hud_element_world_resource_identifier_base", "$InitCDO");

	Params::UUI_hud_element_world_resource_identifier_base__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteUI.UI_hud_identifier_game_phase_bus_flying
// (None)

class UClass* UUI_hud_identifier_game_phase_bus_flying::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_hud_identifier_game_phase_bus_flying");

	return Clss;
}


// UI_hud_identifier_game_phase_bus_flying VerseFortniteUI.Default__UI_hud_identifier_game_phase_bus_flying
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_hud_identifier_game_phase_bus_flying* UUI_hud_identifier_game_phase_bus_flying::GetDefaultObj()
{
	static class UUI_hud_identifier_game_phase_bus_flying* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_hud_identifier_game_phase_bus_flying*>(UUI_hud_identifier_game_phase_bus_flying::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteUI.UI_hud_identifier_game_phase_bus_flying.$InitInstance
// (None)
// Parameters:

void UUI_hud_identifier_game_phase_bus_flying::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_hud_identifier_game_phase_bus_flying", "$InitInstance");

	Params::UUI_hud_identifier_game_phase_bus_flying__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_hud_identifier_game_phase_bus_flying.$Block
// (None)
// Parameters:

void UUI_hud_identifier_game_phase_bus_flying::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_hud_identifier_game_phase_bus_flying", "$Block");

	Params::UUI_hud_identifier_game_phase_bus_flying__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_hud_identifier_game_phase_bus_flying.$InitCDO
// (None)
// Parameters:

void UUI_hud_identifier_game_phase_bus_flying::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_hud_identifier_game_phase_bus_flying", "$InitCDO");

	Params::UUI_hud_identifier_game_phase_bus_flying__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteUI.UI_hud_identifier_game_phase_bus_locked
// (None)

class UClass* UUI_hud_identifier_game_phase_bus_locked::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_hud_identifier_game_phase_bus_locked");

	return Clss;
}


// UI_hud_identifier_game_phase_bus_locked VerseFortniteUI.Default__UI_hud_identifier_game_phase_bus_locked
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_hud_identifier_game_phase_bus_locked* UUI_hud_identifier_game_phase_bus_locked::GetDefaultObj()
{
	static class UUI_hud_identifier_game_phase_bus_locked* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_hud_identifier_game_phase_bus_locked*>(UUI_hud_identifier_game_phase_bus_locked::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteUI.UI_hud_identifier_game_phase_bus_locked.$InitInstance
// (None)
// Parameters:

void UUI_hud_identifier_game_phase_bus_locked::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_hud_identifier_game_phase_bus_locked", "$InitInstance");

	Params::UUI_hud_identifier_game_phase_bus_locked__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_hud_identifier_game_phase_bus_locked.$Block
// (None)
// Parameters:

void UUI_hud_identifier_game_phase_bus_locked::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_hud_identifier_game_phase_bus_locked", "$Block");

	Params::UUI_hud_identifier_game_phase_bus_locked__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_hud_identifier_game_phase_bus_locked.$InitCDO
// (None)
// Parameters:

void UUI_hud_identifier_game_phase_bus_locked::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_hud_identifier_game_phase_bus_locked", "$InitCDO");

	Params::UUI_hud_identifier_game_phase_bus_locked__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteUI.UI_hud_identifier_game_phase_countdown
// (None)

class UClass* UUI_hud_identifier_game_phase_countdown::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_hud_identifier_game_phase_countdown");

	return Clss;
}


// UI_hud_identifier_game_phase_countdown VerseFortniteUI.Default__UI_hud_identifier_game_phase_countdown
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_hud_identifier_game_phase_countdown* UUI_hud_identifier_game_phase_countdown::GetDefaultObj()
{
	static class UUI_hud_identifier_game_phase_countdown* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_hud_identifier_game_phase_countdown*>(UUI_hud_identifier_game_phase_countdown::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteUI.UI_hud_identifier_game_phase_countdown.$InitInstance
// (None)
// Parameters:

void UUI_hud_identifier_game_phase_countdown::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_hud_identifier_game_phase_countdown", "$InitInstance");

	Params::UUI_hud_identifier_game_phase_countdown__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_hud_identifier_game_phase_countdown.$Block
// (None)
// Parameters:

void UUI_hud_identifier_game_phase_countdown::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_hud_identifier_game_phase_countdown", "$Block");

	Params::UUI_hud_identifier_game_phase_countdown__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_hud_identifier_game_phase_countdown.$InitCDO
// (None)
// Parameters:

void UUI_hud_identifier_game_phase_countdown::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_hud_identifier_game_phase_countdown", "$InitCDO");

	Params::UUI_hud_identifier_game_phase_countdown__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteUI.UI_hud_identifier_game_phase_end_game
// (None)

class UClass* UUI_hud_identifier_game_phase_end_game::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_hud_identifier_game_phase_end_game");

	return Clss;
}


// UI_hud_identifier_game_phase_end_game VerseFortniteUI.Default__UI_hud_identifier_game_phase_end_game
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_hud_identifier_game_phase_end_game* UUI_hud_identifier_game_phase_end_game::GetDefaultObj()
{
	static class UUI_hud_identifier_game_phase_end_game* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_hud_identifier_game_phase_end_game*>(UUI_hud_identifier_game_phase_end_game::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteUI.UI_hud_identifier_game_phase_end_game.$InitInstance
// (None)
// Parameters:

void UUI_hud_identifier_game_phase_end_game::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_hud_identifier_game_phase_end_game", "$InitInstance");

	Params::UUI_hud_identifier_game_phase_end_game__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_hud_identifier_game_phase_end_game.$Block
// (None)
// Parameters:

void UUI_hud_identifier_game_phase_end_game::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_hud_identifier_game_phase_end_game", "$Block");

	Params::UUI_hud_identifier_game_phase_end_game__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_hud_identifier_game_phase_end_game.$InitCDO
// (None)
// Parameters:

void UUI_hud_identifier_game_phase_end_game::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_hud_identifier_game_phase_end_game", "$InitCDO");

	Params::UUI_hud_identifier_game_phase_end_game__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteUI.UI_hud_identifier_game_phase_final_countdown
// (None)

class UClass* UUI_hud_identifier_game_phase_final_countdown::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_hud_identifier_game_phase_final_countdown");

	return Clss;
}


// UI_hud_identifier_game_phase_final_countdown VerseFortniteUI.Default__UI_hud_identifier_game_phase_final_countdown
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_hud_identifier_game_phase_final_countdown* UUI_hud_identifier_game_phase_final_countdown::GetDefaultObj()
{
	static class UUI_hud_identifier_game_phase_final_countdown* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_hud_identifier_game_phase_final_countdown*>(UUI_hud_identifier_game_phase_final_countdown::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteUI.UI_hud_identifier_game_phase_final_countdown.$InitInstance
// (None)
// Parameters:

void UUI_hud_identifier_game_phase_final_countdown::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_hud_identifier_game_phase_final_countdown", "$InitInstance");

	Params::UUI_hud_identifier_game_phase_final_countdown__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_hud_identifier_game_phase_final_countdown.$Block
// (None)
// Parameters:

void UUI_hud_identifier_game_phase_final_countdown::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_hud_identifier_game_phase_final_countdown", "$Block");

	Params::UUI_hud_identifier_game_phase_final_countdown__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_hud_identifier_game_phase_final_countdown.$InitCDO
// (None)
// Parameters:

void UUI_hud_identifier_game_phase_final_countdown::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_hud_identifier_game_phase_final_countdown", "$InitCDO");

	Params::UUI_hud_identifier_game_phase_final_countdown__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteUI.UI_hud_identifier_game_phase_none
// (None)

class UClass* UUI_hud_identifier_game_phase_none::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_hud_identifier_game_phase_none");

	return Clss;
}


// UI_hud_identifier_game_phase_none VerseFortniteUI.Default__UI_hud_identifier_game_phase_none
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_hud_identifier_game_phase_none* UUI_hud_identifier_game_phase_none::GetDefaultObj()
{
	static class UUI_hud_identifier_game_phase_none* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_hud_identifier_game_phase_none*>(UUI_hud_identifier_game_phase_none::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteUI.UI_hud_identifier_game_phase_none.$InitInstance
// (None)
// Parameters:

void UUI_hud_identifier_game_phase_none::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_hud_identifier_game_phase_none", "$InitInstance");

	Params::UUI_hud_identifier_game_phase_none__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_hud_identifier_game_phase_none.$Block
// (None)
// Parameters:

void UUI_hud_identifier_game_phase_none::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_hud_identifier_game_phase_none", "$Block");

	Params::UUI_hud_identifier_game_phase_none__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_hud_identifier_game_phase_none.$InitCDO
// (None)
// Parameters:

void UUI_hud_identifier_game_phase_none::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_hud_identifier_game_phase_none", "$InitCDO");

	Params::UUI_hud_identifier_game_phase_none__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteUI.UI_hud_identifier_game_phase_setup
// (None)

class UClass* UUI_hud_identifier_game_phase_setup::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_hud_identifier_game_phase_setup");

	return Clss;
}


// UI_hud_identifier_game_phase_setup VerseFortniteUI.Default__UI_hud_identifier_game_phase_setup
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_hud_identifier_game_phase_setup* UUI_hud_identifier_game_phase_setup::GetDefaultObj()
{
	static class UUI_hud_identifier_game_phase_setup* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_hud_identifier_game_phase_setup*>(UUI_hud_identifier_game_phase_setup::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteUI.UI_hud_identifier_game_phase_setup.$InitInstance
// (None)
// Parameters:

void UUI_hud_identifier_game_phase_setup::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_hud_identifier_game_phase_setup", "$InitInstance");

	Params::UUI_hud_identifier_game_phase_setup__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_hud_identifier_game_phase_setup.$Block
// (None)
// Parameters:

void UUI_hud_identifier_game_phase_setup::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_hud_identifier_game_phase_setup", "$Block");

	Params::UUI_hud_identifier_game_phase_setup__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_hud_identifier_game_phase_setup.$InitCDO
// (None)
// Parameters:

void UUI_hud_identifier_game_phase_setup::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_hud_identifier_game_phase_setup", "$InitCDO");

	Params::UUI_hud_identifier_game_phase_setup__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteUI.UI_hud_identifier_game_phase_storm_forming
// (None)

class UClass* UUI_hud_identifier_game_phase_storm_forming::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_hud_identifier_game_phase_storm_forming");

	return Clss;
}


// UI_hud_identifier_game_phase_storm_forming VerseFortniteUI.Default__UI_hud_identifier_game_phase_storm_forming
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_hud_identifier_game_phase_storm_forming* UUI_hud_identifier_game_phase_storm_forming::GetDefaultObj()
{
	static class UUI_hud_identifier_game_phase_storm_forming* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_hud_identifier_game_phase_storm_forming*>(UUI_hud_identifier_game_phase_storm_forming::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteUI.UI_hud_identifier_game_phase_storm_forming.$InitInstance
// (None)
// Parameters:

void UUI_hud_identifier_game_phase_storm_forming::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_hud_identifier_game_phase_storm_forming", "$InitInstance");

	Params::UUI_hud_identifier_game_phase_storm_forming__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_hud_identifier_game_phase_storm_forming.$Block
// (None)
// Parameters:

void UUI_hud_identifier_game_phase_storm_forming::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_hud_identifier_game_phase_storm_forming", "$Block");

	Params::UUI_hud_identifier_game_phase_storm_forming__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_hud_identifier_game_phase_storm_forming.$InitCDO
// (None)
// Parameters:

void UUI_hud_identifier_game_phase_storm_forming::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_hud_identifier_game_phase_storm_forming", "$InitCDO");

	Params::UUI_hud_identifier_game_phase_storm_forming__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteUI.UI_hud_identifier_game_phase_storm_holding
// (None)

class UClass* UUI_hud_identifier_game_phase_storm_holding::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_hud_identifier_game_phase_storm_holding");

	return Clss;
}


// UI_hud_identifier_game_phase_storm_holding VerseFortniteUI.Default__UI_hud_identifier_game_phase_storm_holding
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_hud_identifier_game_phase_storm_holding* UUI_hud_identifier_game_phase_storm_holding::GetDefaultObj()
{
	static class UUI_hud_identifier_game_phase_storm_holding* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_hud_identifier_game_phase_storm_holding*>(UUI_hud_identifier_game_phase_storm_holding::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteUI.UI_hud_identifier_game_phase_storm_holding.$InitInstance
// (None)
// Parameters:

void UUI_hud_identifier_game_phase_storm_holding::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_hud_identifier_game_phase_storm_holding", "$InitInstance");

	Params::UUI_hud_identifier_game_phase_storm_holding__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_hud_identifier_game_phase_storm_holding.$Block
// (None)
// Parameters:

void UUI_hud_identifier_game_phase_storm_holding::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_hud_identifier_game_phase_storm_holding", "$Block");

	Params::UUI_hud_identifier_game_phase_storm_holding__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_hud_identifier_game_phase_storm_holding.$InitCDO
// (None)
// Parameters:

void UUI_hud_identifier_game_phase_storm_holding::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_hud_identifier_game_phase_storm_holding", "$InitCDO");

	Params::UUI_hud_identifier_game_phase_storm_holding__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteUI.UI_hud_identifier_game_phase_storm_shrinking
// (None)

class UClass* UUI_hud_identifier_game_phase_storm_shrinking::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_hud_identifier_game_phase_storm_shrinking");

	return Clss;
}


// UI_hud_identifier_game_phase_storm_shrinking VerseFortniteUI.Default__UI_hud_identifier_game_phase_storm_shrinking
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_hud_identifier_game_phase_storm_shrinking* UUI_hud_identifier_game_phase_storm_shrinking::GetDefaultObj()
{
	static class UUI_hud_identifier_game_phase_storm_shrinking* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_hud_identifier_game_phase_storm_shrinking*>(UUI_hud_identifier_game_phase_storm_shrinking::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteUI.UI_hud_identifier_game_phase_storm_shrinking.$InitInstance
// (None)
// Parameters:

void UUI_hud_identifier_game_phase_storm_shrinking::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_hud_identifier_game_phase_storm_shrinking", "$InitInstance");

	Params::UUI_hud_identifier_game_phase_storm_shrinking__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_hud_identifier_game_phase_storm_shrinking.$Block
// (None)
// Parameters:

void UUI_hud_identifier_game_phase_storm_shrinking::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_hud_identifier_game_phase_storm_shrinking", "$Block");

	Params::UUI_hud_identifier_game_phase_storm_shrinking__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_hud_identifier_game_phase_storm_shrinking.$InitCDO
// (None)
// Parameters:

void UUI_hud_identifier_game_phase_storm_shrinking::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_hud_identifier_game_phase_storm_shrinking", "$InitCDO");

	Params::UUI_hud_identifier_game_phase_storm_shrinking__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteUI.UI_hud_identifier_game_phase_warmup
// (None)

class UClass* UUI_hud_identifier_game_phase_warmup::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_hud_identifier_game_phase_warmup");

	return Clss;
}


// UI_hud_identifier_game_phase_warmup VerseFortniteUI.Default__UI_hud_identifier_game_phase_warmup
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_hud_identifier_game_phase_warmup* UUI_hud_identifier_game_phase_warmup::GetDefaultObj()
{
	static class UUI_hud_identifier_game_phase_warmup* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_hud_identifier_game_phase_warmup*>(UUI_hud_identifier_game_phase_warmup::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteUI.UI_hud_identifier_game_phase_warmup.$InitInstance
// (None)
// Parameters:

void UUI_hud_identifier_game_phase_warmup::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_hud_identifier_game_phase_warmup", "$InitInstance");

	Params::UUI_hud_identifier_game_phase_warmup__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_hud_identifier_game_phase_warmup.$Block
// (None)
// Parameters:

void UUI_hud_identifier_game_phase_warmup::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_hud_identifier_game_phase_warmup", "$Block");

	Params::UUI_hud_identifier_game_phase_warmup__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_hud_identifier_game_phase_warmup.$InitCDO
// (None)
// Parameters:

void UUI_hud_identifier_game_phase_warmup::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_hud_identifier_game_phase_warmup", "$InitCDO");

	Params::UUI_hud_identifier_game_phase_warmup__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteUI.UI_hud_identifier_world_resource_gold_currency
// (None)

class UClass* UUI_hud_identifier_world_resource_gold_currency::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_hud_identifier_world_resource_gold_currency");

	return Clss;
}


// UI_hud_identifier_world_resource_gold_currency VerseFortniteUI.Default__UI_hud_identifier_world_resource_gold_currency
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_hud_identifier_world_resource_gold_currency* UUI_hud_identifier_world_resource_gold_currency::GetDefaultObj()
{
	static class UUI_hud_identifier_world_resource_gold_currency* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_hud_identifier_world_resource_gold_currency*>(UUI_hud_identifier_world_resource_gold_currency::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteUI.UI_hud_identifier_world_resource_gold_currency.$InitInstance
// (None)
// Parameters:

void UUI_hud_identifier_world_resource_gold_currency::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_hud_identifier_world_resource_gold_currency", "$InitInstance");

	Params::UUI_hud_identifier_world_resource_gold_currency__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_hud_identifier_world_resource_gold_currency.$Block
// (None)
// Parameters:

void UUI_hud_identifier_world_resource_gold_currency::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_hud_identifier_world_resource_gold_currency", "$Block");

	Params::UUI_hud_identifier_world_resource_gold_currency__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_hud_identifier_world_resource_gold_currency.$InitCDO
// (None)
// Parameters:

void UUI_hud_identifier_world_resource_gold_currency::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_hud_identifier_world_resource_gold_currency", "$InitCDO");

	Params::UUI_hud_identifier_world_resource_gold_currency__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteUI.UI_hud_identifier_world_resource_ingredient
// (None)

class UClass* UUI_hud_identifier_world_resource_ingredient::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_hud_identifier_world_resource_ingredient");

	return Clss;
}


// UI_hud_identifier_world_resource_ingredient VerseFortniteUI.Default__UI_hud_identifier_world_resource_ingredient
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_hud_identifier_world_resource_ingredient* UUI_hud_identifier_world_resource_ingredient::GetDefaultObj()
{
	static class UUI_hud_identifier_world_resource_ingredient* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_hud_identifier_world_resource_ingredient*>(UUI_hud_identifier_world_resource_ingredient::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteUI.UI_hud_identifier_world_resource_ingredient.$InitInstance
// (None)
// Parameters:

void UUI_hud_identifier_world_resource_ingredient::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_hud_identifier_world_resource_ingredient", "$InitInstance");

	Params::UUI_hud_identifier_world_resource_ingredient__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_hud_identifier_world_resource_ingredient.$Block
// (None)
// Parameters:

void UUI_hud_identifier_world_resource_ingredient::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_hud_identifier_world_resource_ingredient", "$Block");

	Params::UUI_hud_identifier_world_resource_ingredient__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_hud_identifier_world_resource_ingredient.$InitCDO
// (None)
// Parameters:

void UUI_hud_identifier_world_resource_ingredient::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_hud_identifier_world_resource_ingredient", "$InitCDO");

	Params::UUI_hud_identifier_world_resource_ingredient__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteUI.UI_hud_identifier_world_resource_metal
// (None)

class UClass* UUI_hud_identifier_world_resource_metal::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_hud_identifier_world_resource_metal");

	return Clss;
}


// UI_hud_identifier_world_resource_metal VerseFortniteUI.Default__UI_hud_identifier_world_resource_metal
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_hud_identifier_world_resource_metal* UUI_hud_identifier_world_resource_metal::GetDefaultObj()
{
	static class UUI_hud_identifier_world_resource_metal* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_hud_identifier_world_resource_metal*>(UUI_hud_identifier_world_resource_metal::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteUI.UI_hud_identifier_world_resource_metal.$InitInstance
// (None)
// Parameters:

void UUI_hud_identifier_world_resource_metal::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_hud_identifier_world_resource_metal", "$InitInstance");

	Params::UUI_hud_identifier_world_resource_metal__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_hud_identifier_world_resource_metal.$Block
// (None)
// Parameters:

void UUI_hud_identifier_world_resource_metal::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_hud_identifier_world_resource_metal", "$Block");

	Params::UUI_hud_identifier_world_resource_metal__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_hud_identifier_world_resource_metal.$InitCDO
// (None)
// Parameters:

void UUI_hud_identifier_world_resource_metal::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_hud_identifier_world_resource_metal", "$InitCDO");

	Params::UUI_hud_identifier_world_resource_metal__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteUI.UI_hud_identifier_world_resource_permanite
// (None)

class UClass* UUI_hud_identifier_world_resource_permanite::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_hud_identifier_world_resource_permanite");

	return Clss;
}


// UI_hud_identifier_world_resource_permanite VerseFortniteUI.Default__UI_hud_identifier_world_resource_permanite
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_hud_identifier_world_resource_permanite* UUI_hud_identifier_world_resource_permanite::GetDefaultObj()
{
	static class UUI_hud_identifier_world_resource_permanite* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_hud_identifier_world_resource_permanite*>(UUI_hud_identifier_world_resource_permanite::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteUI.UI_hud_identifier_world_resource_permanite.$InitInstance
// (None)
// Parameters:

void UUI_hud_identifier_world_resource_permanite::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_hud_identifier_world_resource_permanite", "$InitInstance");

	Params::UUI_hud_identifier_world_resource_permanite__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_hud_identifier_world_resource_permanite.$Block
// (None)
// Parameters:

void UUI_hud_identifier_world_resource_permanite::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_hud_identifier_world_resource_permanite", "$Block");

	Params::UUI_hud_identifier_world_resource_permanite__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_hud_identifier_world_resource_permanite.$InitCDO
// (None)
// Parameters:

void UUI_hud_identifier_world_resource_permanite::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_hud_identifier_world_resource_permanite", "$InitCDO");

	Params::UUI_hud_identifier_world_resource_permanite__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteUI.UI_hud_identifier_world_resource_stone
// (None)

class UClass* UUI_hud_identifier_world_resource_stone::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_hud_identifier_world_resource_stone");

	return Clss;
}


// UI_hud_identifier_world_resource_stone VerseFortniteUI.Default__UI_hud_identifier_world_resource_stone
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_hud_identifier_world_resource_stone* UUI_hud_identifier_world_resource_stone::GetDefaultObj()
{
	static class UUI_hud_identifier_world_resource_stone* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_hud_identifier_world_resource_stone*>(UUI_hud_identifier_world_resource_stone::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteUI.UI_hud_identifier_world_resource_stone.$InitInstance
// (None)
// Parameters:

void UUI_hud_identifier_world_resource_stone::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_hud_identifier_world_resource_stone", "$InitInstance");

	Params::UUI_hud_identifier_world_resource_stone__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_hud_identifier_world_resource_stone.$Block
// (None)
// Parameters:

void UUI_hud_identifier_world_resource_stone::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_hud_identifier_world_resource_stone", "$Block");

	Params::UUI_hud_identifier_world_resource_stone__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_hud_identifier_world_resource_stone.$InitCDO
// (None)
// Parameters:

void UUI_hud_identifier_world_resource_stone::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_hud_identifier_world_resource_stone", "$InitCDO");

	Params::UUI_hud_identifier_world_resource_stone__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteUI.UI_hud_identifier_world_resource_wood
// (None)

class UClass* UUI_hud_identifier_world_resource_wood::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_hud_identifier_world_resource_wood");

	return Clss;
}


// UI_hud_identifier_world_resource_wood VerseFortniteUI.Default__UI_hud_identifier_world_resource_wood
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_hud_identifier_world_resource_wood* UUI_hud_identifier_world_resource_wood::GetDefaultObj()
{
	static class UUI_hud_identifier_world_resource_wood* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_hud_identifier_world_resource_wood*>(UUI_hud_identifier_world_resource_wood::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteUI.UI_hud_identifier_world_resource_wood.$InitInstance
// (None)
// Parameters:

void UUI_hud_identifier_world_resource_wood::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_hud_identifier_world_resource_wood", "$InitInstance");

	Params::UUI_hud_identifier_world_resource_wood__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_hud_identifier_world_resource_wood.$Block
// (None)
// Parameters:

void UUI_hud_identifier_world_resource_wood::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_hud_identifier_world_resource_wood", "$Block");

	Params::UUI_hud_identifier_world_resource_wood__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_hud_identifier_world_resource_wood.$InitCDO
// (None)
// Parameters:

void UUI_hud_identifier_world_resource_wood::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_hud_identifier_world_resource_wood", "$InitCDO");

	Params::UUI_hud_identifier_world_resource_wood__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteUI.UI_player_hud_identifier_all
// (None)

class UClass* UUI_player_hud_identifier_all::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_player_hud_identifier_all");

	return Clss;
}


// UI_player_hud_identifier_all VerseFortniteUI.Default__UI_player_hud_identifier_all
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_player_hud_identifier_all* UUI_player_hud_identifier_all::GetDefaultObj()
{
	static class UUI_player_hud_identifier_all* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_player_hud_identifier_all*>(UUI_player_hud_identifier_all::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteUI.UI_player_hud_identifier_all.$InitInstance
// (None)
// Parameters:

void UUI_player_hud_identifier_all::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_player_hud_identifier_all", "$InitInstance");

	Params::UUI_player_hud_identifier_all__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_player_hud_identifier_all.$Block
// (None)
// Parameters:

void UUI_player_hud_identifier_all::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_player_hud_identifier_all", "$Block");

	Params::UUI_player_hud_identifier_all__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_player_hud_identifier_all.$InitCDO
// (HasDefaults)
// Parameters:
// FVerseStringProperty_              _ExprResult_0                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_1                                                    (HasGetValueTypeHash)

void UUI_player_hud_identifier_all::_InitCDO(FVerseStringProperty_ _ExprResult_0, FVerseStringProperty_ _ExprResult_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_player_hud_identifier_all", "$InitCDO");

	Params::UUI_player_hud_identifier_all__InitCDO_Params Parms{};

	Parms._ExprResult_0 = _ExprResult_0;
	Parms._ExprResult_1 = _ExprResult_1;

	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteUI.UI_slider_regular
// (None)

class UClass* UUI_slider_regular::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_slider_regular");

	return Clss;
}


// UI_slider_regular VerseFortniteUI.Default__UI_slider_regular
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_slider_regular* UUI_slider_regular::GetDefaultObj()
{
	static class UUI_slider_regular* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_slider_regular*>(UUI_slider_regular::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteUI.UI_slider_regular._L_2fFortnite_2ecom_2fUI_2fslider__regular_N_RSetValue_L_Nfloat_R
// (Native, Public, BlueprintCallable)
// Parameters:
// double                             __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_slider_regular::_L_2fFortnite_2ecom_2fUI_2fslider__regular_N_RSetValue_L_Nfloat_R(double __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_slider_regular", "_L_2fFortnite_2ecom_2fUI_2fslider__regular_N_RSetValue_L_Nfloat_R");

	Params::UUI_slider_regular__L_2fFortnite_2ecom_2fUI_2fslider__regular_N_RSetValue_L_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteUI.UI_slider_regular._L_2fFortnite_2ecom_2fUI_2fslider__regular_N_RSetStepSize_L_Nfloat_R
// (Native, Public, BlueprintCallable)
// Parameters:
// double                             __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_slider_regular::_L_2fFortnite_2ecom_2fUI_2fslider__regular_N_RSetStepSize_L_Nfloat_R(double __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_slider_regular", "_L_2fFortnite_2ecom_2fUI_2fslider__regular_N_RSetStepSize_L_Nfloat_R");

	Params::UUI_slider_regular__L_2fFortnite_2ecom_2fUI_2fslider__regular_N_RSetStepSize_L_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteUI.UI_slider_regular._L_2fFortnite_2ecom_2fUI_2fslider__regular_N_RSetMinValue_L_Nfloat_R
// (Native, Public, BlueprintCallable)
// Parameters:
// double                             __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_slider_regular::_L_2fFortnite_2ecom_2fUI_2fslider__regular_N_RSetMinValue_L_Nfloat_R(double __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_slider_regular", "_L_2fFortnite_2ecom_2fUI_2fslider__regular_N_RSetMinValue_L_Nfloat_R");

	Params::UUI_slider_regular__L_2fFortnite_2ecom_2fUI_2fslider__regular_N_RSetMinValue_L_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteUI.UI_slider_regular._L_2fFortnite_2ecom_2fUI_2fslider__regular_N_RSetMaxValue_L_Nfloat_R
// (Native, Public, BlueprintCallable)
// Parameters:
// double                             __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_slider_regular::_L_2fFortnite_2ecom_2fUI_2fslider__regular_N_RSetMaxValue_L_Nfloat_R(double __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_slider_regular", "_L_2fFortnite_2ecom_2fUI_2fslider__regular_N_RSetMaxValue_L_Nfloat_R");

	Params::UUI_slider_regular__L_2fFortnite_2ecom_2fUI_2fslider__regular_N_RSetMaxValue_L_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteUI.UI_slider_regular._L_2fFortnite_2ecom_2fUI_2fslider__regular_N_ROnValueChanged
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UObject*                     RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UObject* UUI_slider_regular::_L_2fFortnite_2ecom_2fUI_2fslider__regular_N_ROnValueChanged(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_slider_regular", "_L_2fFortnite_2ecom_2fUI_2fslider__regular_N_ROnValueChanged");

	Params::UUI_slider_regular__L_2fFortnite_2ecom_2fUI_2fslider__regular_N_ROnValueChanged_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortniteUI.UI_slider_regular._L_2fFortnite_2ecom_2fUI_2fslider__regular_N_RGetValue
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// double                             RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UUI_slider_regular::_L_2fFortnite_2ecom_2fUI_2fslider__regular_N_RGetValue(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_slider_regular", "_L_2fFortnite_2ecom_2fUI_2fslider__regular_N_RGetValue");

	Params::UUI_slider_regular__L_2fFortnite_2ecom_2fUI_2fslider__regular_N_RGetValue_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortniteUI.UI_slider_regular._L_2fFortnite_2ecom_2fUI_2fslider__regular_N_RGetStepSize
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// double                             RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UUI_slider_regular::_L_2fFortnite_2ecom_2fUI_2fslider__regular_N_RGetStepSize(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_slider_regular", "_L_2fFortnite_2ecom_2fUI_2fslider__regular_N_RGetStepSize");

	Params::UUI_slider_regular__L_2fFortnite_2ecom_2fUI_2fslider__regular_N_RGetStepSize_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortniteUI.UI_slider_regular._L_2fFortnite_2ecom_2fUI_2fslider__regular_N_RGetMinValue
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// double                             RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UUI_slider_regular::_L_2fFortnite_2ecom_2fUI_2fslider__regular_N_RGetMinValue(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_slider_regular", "_L_2fFortnite_2ecom_2fUI_2fslider__regular_N_RGetMinValue");

	Params::UUI_slider_regular__L_2fFortnite_2ecom_2fUI_2fslider__regular_N_RGetMinValue_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortniteUI.UI_slider_regular._L_2fFortnite_2ecom_2fUI_2fslider__regular_N_RGetMaxValue
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// double                             RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UUI_slider_regular::_L_2fFortnite_2ecom_2fUI_2fslider__regular_N_RGetMaxValue(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_slider_regular", "_L_2fFortnite_2ecom_2fUI_2fslider__regular_N_RGetMaxValue");

	Params::UUI_slider_regular__L_2fFortnite_2ecom_2fUI_2fslider__regular_N_RGetMaxValue_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortniteUI.UI_slider_regular.$InitInstance
// (None)
// Parameters:

void UUI_slider_regular::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_slider_regular", "$InitInstance");

	Params::UUI_slider_regular__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_slider_regular.$Block
// (None)
// Parameters:

void UUI_slider_regular::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_slider_regular", "$Block");

	Params::UUI_slider_regular__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_slider_regular.$InitCDO
// (HasDefaults)
// Parameters:
// class UVerseEngine_subscribable_event*_ExprResult_0                                                    (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerseEngine_subscribable_event*_ExprResult_2                                                    (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_slider_regular::_InitCDO(class UVerseEngine_subscribable_event* _ExprResult_0, uint64 _InstancingGraph_1, class UVerseEngine_subscribable_event* _ExprResult_2, uint64 _InstancingGraph_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_slider_regular", "$InitCDO");

	Params::UUI_slider_regular__InitCDO_Params Parms{};

	Parms._ExprResult_0 = _ExprResult_0;
	Parms._InstancingGraph_1 = _InstancingGraph_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._InstancingGraph_3 = _InstancingGraph_3;

	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteUI.UI_text_block
// (None)

class UClass* UUI_text_block::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_text_block");

	return Clss;
}


// UI_text_block VerseFortniteUI.Default__UI_text_block
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_text_block* UUI_text_block::GetDefaultObj()
{
	static class UUI_text_block* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_text_block*>(UUI_text_block::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteUI.UI_text_block._L_2fFortnite_2ecom_2fUI_2ftext__block_N_RSetShadowOpacity_L_Ntype_7b__X_Nfloat_20where_200_2e000000_20_3c_3d_20__X_M_20__X_20_3c_3d_201_2e000000_7d_R
// (Native, Public, BlueprintCallable)
// Parameters:
// double                             __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_text_block::_L_2fFortnite_2ecom_2fUI_2ftext__block_N_RSetShadowOpacity_L_Ntype_7b__X_Nfloat_20where_200_2e000000_20_3c_3d_20__X_M_20__X_20_3c_3d_201_2e000000_7d_R(double __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_text_block", "_L_2fFortnite_2ecom_2fUI_2ftext__block_N_RSetShadowOpacity_L_Ntype_7b__X_Nfloat_20where_200_2e000000_20_3c_3d_20__X_M_20__X_20_3c_3d_201_2e000000_7d_R");

	Params::UUI_text_block__L_2fFortnite_2ecom_2fUI_2ftext__block_N_RSetShadowOpacity_L_Ntype_7b__X_Nfloat_20where_200_2e000000_20_3c_3d_20__X_M_20__X_20_3c_3d_201_2e000000_7d_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteUI.UI_text_block._L_2fFortnite_2ecom_2fUI_2ftext__block_N_RSetShadowOffset_L_N_Qvector2_R
// (Native, Public, BlueprintCallable)
// Parameters:
// FOptionalProperty_                 __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_text_block::_L_2fFortnite_2ecom_2fUI_2ftext__block_N_RSetShadowOffset_L_N_Qvector2_R(FOptionalProperty_ __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_text_block", "_L_2fFortnite_2ecom_2fUI_2ftext__block_N_RSetShadowOffset_L_N_Qvector2_R");

	Params::UUI_text_block__L_2fFortnite_2ecom_2fUI_2ftext__block_N_RSetShadowOffset_L_N_Qvector2_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteUI.UI_text_block._L_2fFortnite_2ecom_2fUI_2ftext__block_N_RSetShadowColor_L_Ncolor_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FColors_color               __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_text_block::_L_2fFortnite_2ecom_2fUI_2ftext__block_N_RSetShadowColor_L_Ncolor_R(const struct FColors_color& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_text_block", "_L_2fFortnite_2ecom_2fUI_2ftext__block_N_RSetShadowColor_L_Ncolor_R");

	Params::UUI_text_block__L_2fFortnite_2ecom_2fUI_2ftext__block_N_RSetShadowColor_L_Ncolor_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteUI.UI_text_block._L_2fFortnite_2ecom_2fUI_2ftext__block_N_RGetShadowOpacity
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// double                             RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UUI_text_block::_L_2fFortnite_2ecom_2fUI_2ftext__block_N_RGetShadowOpacity(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_text_block", "_L_2fFortnite_2ecom_2fUI_2ftext__block_N_RGetShadowOpacity");

	Params::UUI_text_block__L_2fFortnite_2ecom_2fUI_2ftext__block_N_RGetShadowOpacity_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortniteUI.UI_text_block._L_2fFortnite_2ecom_2fUI_2ftext__block_N_RGetShadowOffset
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

FOptionalProperty_ UUI_text_block::_L_2fFortnite_2ecom_2fUI_2ftext__block_N_RGetShadowOffset(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_text_block", "_L_2fFortnite_2ecom_2fUI_2ftext__block_N_RGetShadowOffset");

	Params::UUI_text_block__L_2fFortnite_2ecom_2fUI_2ftext__block_N_RGetShadowOffset_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortniteUI.UI_text_block._L_2fFortnite_2ecom_2fUI_2ftext__block_N_RGetShadowColor
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FColors_color               RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FColors_color UUI_text_block::_L_2fFortnite_2ecom_2fUI_2ftext__block_N_RGetShadowColor(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_text_block", "_L_2fFortnite_2ecom_2fUI_2ftext__block_N_RGetShadowColor");

	Params::UUI_text_block__L_2fFortnite_2ecom_2fUI_2ftext__block_N_RGetShadowColor_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortniteUI.UI_text_block.$InitInstance
// (None)
// Parameters:

void UUI_text_block::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_text_block", "$InitInstance");

	Params::UUI_text_block__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_text_block.$Block
// (None)
// Parameters:

void UUI_text_block::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_text_block", "$Block");

	Params::UUI_text_block__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_text_block.$InitCDO
// (HasDefaults)
// Parameters:
// FOptionalProperty_                 _ExprResult_0                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FOptionalProperty_                 __verse_0x00000000__1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_1                                                    (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_3                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FOptionalProperty_                 __verse_0x00000000__3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_4                                                    (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_5                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_text_block::_InitCDO(FOptionalProperty_ _ExprResult_0, FOptionalProperty_ __verse_0x00000000__1, uint8 _ExprResult_1, FOptionalProperty_ _ExprResultStack_2, FOptionalProperty_ _ExprResult_3, FOptionalProperty_ __verse_0x00000000__3, uint8 _ExprResult_4, FOptionalProperty_ _ExprResultStack_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_text_block", "$InitCDO");

	Params::UUI_text_block__InitCDO_Params Parms{};

	Parms._ExprResult_0 = _ExprResult_0;
	Parms.__verse_0x00000000__1 = __verse_0x00000000__1;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResultStack_2 = _ExprResultStack_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms.__verse_0x00000000__3 = __verse_0x00000000__3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResultStack_5 = _ExprResultStack_5;

	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteUI.UI_text_button_base
// (None)

class UClass* UUI_text_button_base::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_text_button_base");

	return Clss;
}


// UI_text_button_base VerseFortniteUI.Default__UI_text_button_base
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_text_button_base* UUI_text_button_base::GetDefaultObj()
{
	static class UUI_text_button_base* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_text_button_base*>(UUI_text_button_base::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteUI.UI_text_button_base._L_2fFortnite_2ecom_2fUI_2ftext__button__base_N_RSetText_L_Nmessage_R
// (Native, Public, BlueprintCallable)
// Parameters:
// class UVerse_message*              __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

void UUI_text_button_base::_L_2fFortnite_2ecom_2fUI_2ftext__button__base_N_RSetText_L_Nmessage_R(class UVerse_message* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_text_button_base", "_L_2fFortnite_2ecom_2fUI_2ftext__button__base_N_RSetText_L_Nmessage_R");

	Params::UUI_text_button_base__L_2fFortnite_2ecom_2fUI_2ftext__button__base_N_RSetText_L_Nmessage_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteUI.UI_text_button_base._L_2fFortnite_2ecom_2fUI_2ftext__button__base_N_ROnClick
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UObject*                     RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UObject* UUI_text_button_base::_L_2fFortnite_2ecom_2fUI_2ftext__button__base_N_ROnClick(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_text_button_base", "_L_2fFortnite_2ecom_2fUI_2ftext__button__base_N_ROnClick");

	Params::UUI_text_button_base__L_2fFortnite_2ecom_2fUI_2ftext__button__base_N_ROnClick_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortniteUI.UI_text_button_base._L_2fFortnite_2ecom_2fUI_2ftext__button__base_N_RGetText
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FVerseStringProperty_              RetVal                                                           (Parm, OutParm, ReturnParm, HasGetValueTypeHash)

FVerseStringProperty_ UUI_text_button_base::_L_2fFortnite_2ecom_2fUI_2ftext__button__base_N_RGetText(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_text_button_base", "_L_2fFortnite_2ecom_2fUI_2ftext__button__base_N_RGetText");

	Params::UUI_text_button_base__L_2fFortnite_2ecom_2fUI_2ftext__button__base_N_RGetText_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortniteUI.UI_text_button_base.$InitInstance
// (None)
// Parameters:

void UUI_text_button_base::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_text_button_base", "$InitInstance");

	Params::UUI_text_button_base__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_text_button_base.$Block
// (None)
// Parameters:

void UUI_text_button_base::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_text_button_base", "$Block");

	Params::UUI_text_button_base__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_text_button_base.$InitCDO
// (HasDefaults)
// Parameters:
// class UVerse_message*              _ExprResultStack_0                                               (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_1                                                        (HasGetValueTypeHash)
// struct FTuple_L_Kchar_M_Kchar_M_5b_Kchar_5dlocalizable__value_R_ExprResult_2                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_3                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_4                                                    (HasGetValueTypeHash)
// TMap<FVerseStringProperty_, class UVerse_localizable_value*>_ExprResult_5                                                    (ContainsInstancedReference)
// TMap<enum class EVerseFalse, enum class EVerseFalse>__verse_0xC87067A2_Map_1                                         (ContainsInstancedReference)
// TMap<FVerseStringProperty_, class UVerse_localizable_value*>_ForResult_6                                                     (ContainsInstancedReference)
// int64                              _ForIndex_7                                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVerseFalse             __verse_0x589418B4_Key_3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVerseFalse             __verse_0x31A8F10C_Value_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_8                                                    (NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_9                                                    (NoDestructor, HasGetValueTypeHash)
// class UVerseEngine_subscribable_event*_ExprResult_10                                                   (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_11                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerse_message*              _ExprResultStack_12                                              (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_13                                                       (HasGetValueTypeHash)
// struct FTuple_L_Kchar_M_Kchar_M_5b_Kchar_5dlocalizable__value_R_ExprResult_14                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_15                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_16                                                   (HasGetValueTypeHash)
// TMap<FVerseStringProperty_, class UVerse_localizable_value*>_ExprResult_17                                                   (ContainsInstancedReference)
// TMap<enum class EVerseFalse, enum class EVerseFalse>__verse_0xC87067A2_Map_6                                         (ContainsInstancedReference)
// TMap<FVerseStringProperty_, class UVerse_localizable_value*>_ForResult_18                                                    (ContainsInstancedReference)
// int64                              _ForIndex_19                                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVerseFalse             __verse_0x589418B4_Key_8                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVerseFalse             __verse_0x31A8F10C_Value_8                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_20                                                   (NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_21                                                   (NoDestructor, HasGetValueTypeHash)
// class UVerseEngine_subscribable_event*_ExprResult_22                                                   (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_23                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_text_button_base::_InitCDO(class UVerse_message* _ExprResultStack_0, FVerseFunctionProperty_ _Callee_1, const struct FTuple_L_Kchar_M_Kchar_M_5b_Kchar_5dlocalizable__value_R& _ExprResult_2, FVerseStringProperty_ _ExprResult_3, FVerseStringProperty_ _ExprResult_4, TMap<FVerseStringProperty_, class UVerse_localizable_value*> _ExprResult_5, TMap<enum class EVerseFalse, enum class EVerseFalse> __verse_0xC87067A2_Map_1, TMap<FVerseStringProperty_, class UVerse_localizable_value*> _ForResult_6, int64 _ForIndex_7, enum class EVerseFalse __verse_0x589418B4_Key_3, enum class EVerseFalse __verse_0x31A8F10C_Value_3, uint8 _ExprResult_8, uint8 _ExprResult_9, class UVerseEngine_subscribable_event* _ExprResult_10, uint64 _InstancingGraph_11, class UVerse_message* _ExprResultStack_12, FVerseFunctionProperty_ _Callee_13, const struct FTuple_L_Kchar_M_Kchar_M_5b_Kchar_5dlocalizable__value_R& _ExprResult_14, FVerseStringProperty_ _ExprResult_15, FVerseStringProperty_ _ExprResult_16, TMap<FVerseStringProperty_, class UVerse_localizable_value*> _ExprResult_17, TMap<enum class EVerseFalse, enum class EVerseFalse> __verse_0xC87067A2_Map_6, TMap<FVerseStringProperty_, class UVerse_localizable_value*> _ForResult_18, int64 _ForIndex_19, enum class EVerseFalse __verse_0x589418B4_Key_8, enum class EVerseFalse __verse_0x31A8F10C_Value_8, uint8 _ExprResult_20, uint8 _ExprResult_21, class UVerseEngine_subscribable_event* _ExprResult_22, uint64 _InstancingGraph_23)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_text_button_base", "$InitCDO");

	Params::UUI_text_button_base__InitCDO_Params Parms{};

	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._Callee_1 = _Callee_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms.__verse_0xC87067A2_Map_1 = __verse_0xC87067A2_Map_1;
	Parms._ForResult_6 = _ForResult_6;
	Parms._ForIndex_7 = _ForIndex_7;
	Parms.__verse_0x589418B4_Key_3 = __verse_0x589418B4_Key_3;
	Parms.__verse_0x31A8F10C_Value_3 = __verse_0x31A8F10C_Value_3;
	Parms._ExprResult_8 = _ExprResult_8;
	Parms._ExprResult_9 = _ExprResult_9;
	Parms._ExprResult_10 = _ExprResult_10;
	Parms._InstancingGraph_11 = _InstancingGraph_11;
	Parms._ExprResultStack_12 = _ExprResultStack_12;
	Parms._Callee_13 = _Callee_13;
	Parms._ExprResult_14 = _ExprResult_14;
	Parms._ExprResult_15 = _ExprResult_15;
	Parms._ExprResult_16 = _ExprResult_16;
	Parms._ExprResult_17 = _ExprResult_17;
	Parms.__verse_0xC87067A2_Map_6 = __verse_0xC87067A2_Map_6;
	Parms._ForResult_18 = _ForResult_18;
	Parms._ForIndex_19 = _ForIndex_19;
	Parms.__verse_0x589418B4_Key_8 = __verse_0x589418B4_Key_8;
	Parms.__verse_0x31A8F10C_Value_8 = __verse_0x31A8F10C_Value_8;
	Parms._ExprResult_20 = _ExprResult_20;
	Parms._ExprResult_21 = _ExprResult_21;
	Parms._ExprResult_22 = _ExprResult_22;
	Parms._InstancingGraph_23 = _InstancingGraph_23;

	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteUI.UI_button_loud
// (None)

class UClass* UUI_button_loud::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_button_loud");

	return Clss;
}


// UI_button_loud VerseFortniteUI.Default__UI_button_loud
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_button_loud* UUI_button_loud::GetDefaultObj()
{
	static class UUI_button_loud* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_button_loud*>(UUI_button_loud::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteUI.UI_button_loud.$InitInstance
// (None)
// Parameters:

void UUI_button_loud::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_button_loud", "$InitInstance");

	Params::UUI_button_loud__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_button_loud.$Block
// (None)
// Parameters:

void UUI_button_loud::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_button_loud", "$Block");

	Params::UUI_button_loud__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_button_loud.$InitCDO
// (None)
// Parameters:

void UUI_button_loud::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_button_loud", "$InitCDO");

	Params::UUI_button_loud__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteUI.UI_button_quiet
// (None)

class UClass* UUI_button_quiet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_button_quiet");

	return Clss;
}


// UI_button_quiet VerseFortniteUI.Default__UI_button_quiet
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_button_quiet* UUI_button_quiet::GetDefaultObj()
{
	static class UUI_button_quiet* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_button_quiet*>(UUI_button_quiet::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteUI.UI_button_quiet.$InitInstance
// (None)
// Parameters:

void UUI_button_quiet::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_button_quiet", "$InitInstance");

	Params::UUI_button_quiet__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_button_quiet.$Block
// (None)
// Parameters:

void UUI_button_quiet::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_button_quiet", "$Block");

	Params::UUI_button_quiet__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_button_quiet.$InitCDO
// (None)
// Parameters:

void UUI_button_quiet::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_button_quiet", "$InitCDO");

	Params::UUI_button_quiet__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteUI.UI_button_regular
// (None)

class UClass* UUI_button_regular::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_button_regular");

	return Clss;
}


// UI_button_regular VerseFortniteUI.Default__UI_button_regular
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_button_regular* UUI_button_regular::GetDefaultObj()
{
	static class UUI_button_regular* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_button_regular*>(UUI_button_regular::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteUI.UI_button_regular.$InitInstance
// (None)
// Parameters:

void UUI_button_regular::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_button_regular", "$InitInstance");

	Params::UUI_button_regular__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_button_regular.$Block
// (None)
// Parameters:

void UUI_button_regular::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_button_regular", "$Block");

	Params::UUI_button_regular__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteUI.UI_button_regular.$InitCDO
// (None)
// Parameters:

void UUI_button_regular::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_button_regular", "$InitCDO");

	Params::UUI_button_regular__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}

}


