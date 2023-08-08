#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x5A8 - 0x568)
// WidgetBlueprintGeneratedClass HealthWarningScreen.HealthWarningScreen_C
class UHealthWarningScreen_C : public UHealthWarningScreen
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x568(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      FinishingAnim;                                     // 0x570(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_0;                                        // 0x578(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            HealthWarningCompleted;                            // 0x580(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                          ShowTimer;                                         // 0x590(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               IconPadding;                                       // 0x598(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HealthWarningScreen_C");
		return Clss;
	}

	void HandleShowTimerComplete();
	void ExecuteUbergraph_HealthWarningScreen(int32 EntryPoint);
	void HealthWarningCompleted__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
