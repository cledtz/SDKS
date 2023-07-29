#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x2B8 - 0x280)
// WidgetBlueprintGeneratedClass UI_CameraTransitions_DarkenScreen.UI_CameraTransitions_DarkenScreen_C
class UUI_CameraTransitions_DarkenScreen_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         SmoothStart;                                       // 0x288(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_34DA[0x7];                                     // Fixing Size After Last Property
	double                                       TargetOpacity;                                     // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       InterpSpeed;                                       // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         AutoSmoothRemove;                                  // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_34DB[0x7];                                     // Fixing Size After Last Property
	FMulticastInlineDelegateProperty_            OnDark;                                            // 0x2A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_CameraTransitions_DarkenScreen_C");
		return Clss;
	}

	void Construct();
	void SmoothRemove();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void SmoothStartEvent();
	void ExecuteUbergraph_UI_CameraTransitions_DarkenScreen(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_2, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_GetRenderOpacity_ReturnValue, double CallFunc_GetWorldDeltaSeconds_ReturnValue, double CallFunc_FInterpTo_Constant_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool Temp_bool_IsClosed_Variable_2, double CallFunc_FInterpTo_Constant_Current_ImplicitCast, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast);
	void OnDark__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
