#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x2A8 - 0x280)
// WidgetBlueprintGeneratedClass UI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_TreeContainer.UI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_TreeContainer_C
class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_TreeContainer_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNamedSlot*                            Root;                                              // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox;                                         // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_C* UI_Menu_Soldier_Weapon_Gun_Gunsmith_Progress;      // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       TargetScrollOffset;                                // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_TreeContainer_C");
		return Clss;
	}

	void InitEntries(class UUniformGridSlot* L_UniformSlotIt, const TArray<class UDataContainerValue_UObjectArray*>& L_GridColumns, int32 Temp_int_Array_Index_Variable, class UDataContainerValue_UObjectArray* CallFunc_SpawnObject_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, class UWidget* CallFunc_GetSlotContent_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, class UDataContainerValue_UObjectArray* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UObject* CallFunc_Array_Get_Item_1, class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_Entry_C* K2Node_DynamicCast_AsUI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_Entry, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, class UDataContainerValue_UObjectArray* CallFunc_Array_Get_Item_2, class UDataContainerValue_UObjectArray* CallFunc_Array_Get_Item_3, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UUniformGridPanel* K2Node_DynamicCast_AsUniform_Grid_Panel, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_2, class UUniformGridSlot* CallFunc_SlotAsUniformGridSlot_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2);
	struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, float CallFunc_PointerEvent_GetWheelDelta_ReturnValue, float CallFunc_GetScrollOffsetOfEnd_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_FClamp_Max_ImplicitCast);
	void OnPaint(struct FPaintContext& Context, const struct FPaintContext& L_Context, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, float CallFunc_GetScrollOffset_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FLinearColor& Temp_struct_Variable, float CallFunc_GetScrollOffset_ReturnValue_1, const struct FLinearColor& Temp_struct_Variable_1, class UWidget* CallFunc_GetChildAt_ReturnValue, class UPanelWidget* K2Node_DynamicCast_AsPanel_Widget, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_Entry_C* K2Node_DynamicCast_AsUI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_Entry, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Less_IntInt_ReturnValue, class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_Entry_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, const struct FGeometry& CallFunc_GetTickSpaceGeometry_ReturnValue, const struct FGeometry& CallFunc_GetTickSpaceGeometry_ReturnValue_1, const struct FVector2D& CallFunc_GetLocalSize_ReturnValue, const struct FVector2D& CallFunc_GetLocalTopLeft_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_GetLocalSize_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, const struct FVector2D& CallFunc_GetLocalTopLeft_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, const struct FVector2D& K2Node_LowEntry_LocalVariable_Value__Object, double CallFunc_BreakVector2D_X_2, double CallFunc_BreakVector2D_Y_2, bool CallFunc_Less_IntInt_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_1, bool Temp_bool_Variable, const struct FLinearColor& K2Node_Select_Default, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void ExecuteUbergraph_UI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_TreeContainer(int32 EntryPoint, float CallFunc_GetScrollOffset_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, double CallFunc_FInterpTo_ReturnValue, double CallFunc_FInterpTo_Current_ImplicitCast, double CallFunc_FInterpTo_DeltaTime_ImplicitCast, float CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
