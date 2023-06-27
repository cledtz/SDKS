#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x498 - 0x448)
// WidgetBlueprintGeneratedClass RootLayout_Athena.RootLayout_Athena_C
class URootLayout_Athena_C : public UFortRootViewportLayout_Athena
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x448(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UConfirmationWindow_C*                 ConfirmationWindow;                                // 0x450(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UProgressModalWidget_C*                ControllerDisconnectedModal;                       // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         bClosingErrorDialog;                               // 0x460(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_99DE[0x7];                                     // Fixing Size After Last Property..
	class FText                                  QuitTitle;                                         // 0x468(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  QuitMessage;                                       // 0x480(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RootLayout_Athena_C");
		return Clss;
	}

	bool IsConsole(const class FString& CallFunc_GetPlatformName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	void DialogResult_0099D78247C40A9775C753A2024EA419(enum class EFortDialogResult Result, class FName ResultName);
	void Construct();
	void OnGameWindowCloseButtonClicked();
	void OnModalQueueEmptied_1();
	void ExecuteUbergraph_RootLayout_Athena(int32 EntryPoint, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, class FName Temp_name_Variable, enum class EFortDialogResult Temp_byte_Variable, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
