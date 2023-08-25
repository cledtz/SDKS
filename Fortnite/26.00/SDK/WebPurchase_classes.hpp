#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x560 - 0x548)
// WidgetBlueprintGeneratedClass WebPurchase.WebPurchase_C
class UWebPurchase_C : public UFortWebPurchaseScreen
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x548(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_UIKit_Button_Quiet_C*             Button_Back;                                       // 0x550(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCircularThrobber*                     Throbber;                                          // 0x558(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWebPurchase_C* GetDefaultObj();

	void BndEvt__WebPurchase_Button_Back_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WebPurchase(int32 EntryPoint, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button);
};

}


