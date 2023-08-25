#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x488 - 0x428)
// WidgetBlueprintGeneratedClass RootLayout_Athena.RootLayout_Athena_C
class URootLayout_Athena_C : public UFortRootViewportLayout_Athena
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x428(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNamedSlot*                            BottomCenterNotificationNamedSlot;                 // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            IndicatorNamedSlot;                                // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UConfirmationWindow_C*                 ConfirmationWindow;                                // 0x440(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UProgressModalWidget_C*                ControllerDisconnectedModal;                       // 0x448(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         bClosingErrorDialog;                               // 0x450(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9567[0x7];                                     // Fixing Size After Last Property 
	class FText                                  QuitTitle;                                         // 0x458(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  QuitMessage;                                       // 0x470(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class URootLayout_Athena_C* GetDefaultObj();

	bool IsConsole(const class FString& CallFunc_GetPlatformName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	void DialogResult_0099D78247C40A9775C753A2024EA419(enum class EFortDialogResult Result, class FName ResultName);
	void Construct();
	void OnGameWindowCloseButtonClicked();
	void OnModalQueueEmptied_1();
	void ExecuteUbergraph_RootLayout_Athena(int32 EntryPoint, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, class FName Temp_name_Variable, enum class EFortDialogResult Temp_byte_Variable, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


