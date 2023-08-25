#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x408 - 0x3E8)
// Class CRD_ModalDialogRuntime.ModalDialogVariant
class UModalDialogVariant : public UCommonActivatableWidget
{
public:
	class UWidgetAnimation*                      BoundAnim_Open;                                    // 0x3E8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                      BoundAnim_Response;                                // 0x3F0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnResponseAnimationFinished;                       // 0x3F8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UModalDialogVariant* GetDefaultObj();

	void OnResponseAnimationFinished__DelegateSignature();
	bool HasResponseAnimation();
	void HandleResponseAnimationFinished();
	void AttemptToPlayResponseAnimation();
	void AttemptToPlayOpenAnimation();
};

}


