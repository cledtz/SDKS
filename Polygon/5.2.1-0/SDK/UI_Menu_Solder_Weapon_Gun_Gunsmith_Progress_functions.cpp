#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Menu_Solder_Weapon_Gun_Gunsmith_Progress.UI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_C
// (None)

class UClass* UUI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_C");

	return Clss;
}


// UI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_C UI_Menu_Solder_Weapon_Gun_Gunsmith_Progress.Default__UI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_C* UUI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_C::GetDefaultObj()
{
	static class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_C*>(UUI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Menu_Solder_Weapon_Gun_Gunsmith_Progress.UI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_RemoveChildAt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_C::Reset(bool CallFunc_RemoveChildAt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_C", "Reset");

	Params::UUI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_C_Reset_Params Parms{};

	Parms.CallFunc_RemoveChildAt_ReturnValue = CallFunc_RemoveChildAt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Solder_Weapon_Gun_Gunsmith_Progress.UI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_C.OnUpdateGunData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayFabJsonObject*          L_ProgressDataContainer_CustomData                               (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      L_GunClass                                                       (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveChildAt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsItem_Gun_General                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_LoadClassAsset_Blocking_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsUser_Widget                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_TreeContainer_C*K2Node_DynamicCast_AsUI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_Tree_Container(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                CallFunc_AddChildToOverlay_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_C::OnUpdateGunData(class UPlayFabJsonObject* L_ProgressDataContainer_CustomData, class UClass* L_GunClass, bool CallFunc_RemoveChildAt_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsItem_Gun_General, bool K2Node_ClassDynamicCast_bSuccess, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsUser_Widget, bool K2Node_ClassDynamicCast_bSuccess_1, class UUserWidget* CallFunc_Create_ReturnValue, class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_TreeContainer_C* K2Node_DynamicCast_AsUI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_Tree_Container, bool K2Node_DynamicCast_bSuccess, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_C", "OnUpdateGunData");

	Params::UUI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_C_OnUpdateGunData_Params Parms{};

	Parms.L_ProgressDataContainer_CustomData = L_ProgressDataContainer_CustomData;
	Parms.L_GunClass = L_GunClass;
	Parms.CallFunc_RemoveChildAt_ReturnValue = CallFunc_RemoveChildAt_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsItem_Gun_General = K2Node_ClassDynamicCast_AsItem_Gun_General;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_LoadClassAsset_Blocking_ReturnValue = CallFunc_LoadClassAsset_Blocking_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsUser_Widget = K2Node_ClassDynamicCast_AsUser_Widget;
	Parms.K2Node_ClassDynamicCast_bSuccess_1 = K2Node_ClassDynamicCast_bSuccess_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_DynamicCast_AsUI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_Tree_Container = K2Node_DynamicCast_AsUI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_Tree_Container;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_AddChildToOverlay_ReturnValue = CallFunc_AddChildToOverlay_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Solder_Weapon_Gun_Gunsmith_Progress.UI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_C", "PreConstruct");

	Params::UUI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Solder_Weapon_Gun_Gunsmith_Progress.UI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_C.OnUpdatePlayerCombinedInfo_Event
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<enum class EModifiedData>   ModifiedData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                      CustomString                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_C::OnUpdatePlayerCombinedInfo_Event(TArray<enum class EModifiedData>& ModifiedData, const class FString& CustomString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_C", "OnUpdatePlayerCombinedInfo_Event");

	Params::UUI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_C_OnUpdatePlayerCombinedInfo_Event_Params Parms{};

	Parms.ModifiedData = ModifiedData;
	Parms.CustomString = CustomString;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Solder_Weapon_Gun_Gunsmith_Progress.UI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_C", "Tick");

	Params::UUI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Solder_Weapon_Gun_Gunsmith_Progress.UI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_C.BndEvt__UI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_Button_Back_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_C::BndEvt__UI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_Button_Back_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_C", "BndEvt__UI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_Button_Back_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	Params::UUI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_C_BndEvt__UI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_Button_Back_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Solder_Weapon_Gun_Gunsmith_Progress.UI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_C.ExecuteUbergraph_UI_Menu_Solder_Weapon_Gun_Gunsmith_Progress
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Menu_Solder_Weapon_Gun_Gunsmith_C*CallFunc_FindParentWidgetOfType_ReturnValue                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EModifiedData>   K2Node_CustomEvent_ModifiedData                                  (ConstParm, ReferenceParm)
// class FString                      K2Node_CustomEvent_CustomString                                  (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_TreeContainer_C*K2Node_DynamicCast_AsUI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_Tree_Container(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_WithEditor_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue_1                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPanelWidget*                K2Node_DynamicCast_AsPanel_Widget                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_Entry_C*K2Node_DynamicCast_AsUI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_Entry(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_C::ExecuteUbergraph_UI_Menu_Solder_Weapon_Gun_Gunsmith_Progress(int32 EntryPoint, class UUI_Menu_Solder_Weapon_Gun_Gunsmith_C* CallFunc_FindParentWidgetOfType_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_IsClosed_Variable, bool K2Node_Event_IsDesignTime, TArray<enum class EModifiedData>& K2Node_CustomEvent_ModifiedData, const class FString& K2Node_CustomEvent_CustomString, bool Temp_bool_Has_Been_Initd_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_TreeContainer_C* K2Node_DynamicCast_AsUI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_Tree_Container, bool K2Node_DynamicCast_bSuccess, bool CallFunc_WithEditor_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue_1, class UPanelWidget* K2Node_DynamicCast_AsPanel_Widget, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UWidget* CallFunc_Array_Get_Item, class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_Entry_C* K2Node_DynamicCast_AsUI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_Entry, bool K2Node_DynamicCast_bSuccess_2, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_C", "ExecuteUbergraph_UI_Menu_Solder_Weapon_Gun_Gunsmith_Progress");

	Params::UUI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_C_ExecuteUbergraph_UI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_FindParentWidgetOfType_ReturnValue = CallFunc_FindParentWidgetOfType_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_ModifiedData = K2Node_CustomEvent_ModifiedData;
	Parms.K2Node_CustomEvent_CustomString = K2Node_CustomEvent_CustomString;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsUI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_Tree_Container = K2Node_DynamicCast_AsUI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_Tree_Container;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_WithEditor_ReturnValue = CallFunc_WithEditor_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue_1 = CallFunc_GetChildAt_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPanel_Widget = K2Node_DynamicCast_AsPanel_Widget;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsUI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_Entry = K2Node_DynamicCast_AsUI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_Entry;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


