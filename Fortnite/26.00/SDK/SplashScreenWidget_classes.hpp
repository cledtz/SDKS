#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x590 - 0x530)
// WidgetBlueprintGeneratedClass SplashScreenWidget.SplashScreenWidget_C
class USplashScreenWidget_C : public UFortSplashScreenWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x530(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_UIKit_Button_Loud_C*              Button_PressToStart;                               // 0x538(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLazyImage*                      I_Fortnite;                                        // 0x540(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  GamepadText;                                       // 0x548(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  MouseText;                                         // 0x560(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  MobileText;                                        // 0x578(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class USplashScreenWidget_C* GetDefaultObj();

	void BP_OnActivated();
	void OnInputMethodChanged(enum class ECommonInputType InputType);
	void ExecuteUbergraph_SplashScreenWidget(int32 EntryPoint, bool CallFunc_IsTouchInputPlatform_ReturnValue, enum class ECommonInputType K2Node_Event_InputType, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsMobileApp_ReturnValue, class FText K2Node_Select_Default, class UMusicEventSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UAudioComponent* CallFunc_AddEvent_ReturnValue);
};

}


