#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x2B8 - 0x2A8)
// WidgetBlueprintGeneratedClass PinDot.PinDot_C
class UPinDot_C : public UFortPinCharacter
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_17;                                          // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPinDot_C* GetDefaultObj();

	void OnSetFilled(bool bFilled);
	void ExecuteUbergraph_PinDot(int32 EntryPoint, bool K2Node_Event_bFilled, const struct FLinearColor& CallFunc_SelectColor_ReturnValue);
};

}


