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

// 0x10 (0x14E0 - 0x14D0)
// WidgetBlueprintGeneratedClass PinCodeButton.PinCodeButton_C
class UPinCodeButton_C : public UFortPinButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x14D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                      PasscodeText;                                      // 0x14D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PinCodeButton_C");
		return Clss;
	}

	void Set_Pin_Number(const class FString& Pin, class FText CallFunc_Conv_StringToText_ReturnValue);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_PinCodeButton(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
