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

// 0x20 (0x418 - 0x3F8)
// Class CRD_ModalDialogRuntime.ModalDialogVariant
class UModalDialogVariant : public UCommonActivatableWidget
{
public:
	class UWidgetAnimation*                      BoundAnim_Open;                                    // 0x3F8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                      BoundAnim_Response;                                // 0x400(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnResponseAnimationFinished;                       // 0x408(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ModalDialogVariant");
		return Clss;
	}

	bool ShouldUseModalDialogTemplateWidgets();
	void OnResponseAnimationFinished__DelegateSignature();
	bool HasResponseAnimation();
	void HandleResponseAnimationFinished();
	void AttemptToPlayResponseAnimation();
	void AttemptToPlayOpenAnimation();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
