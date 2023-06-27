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

// 0x84 (0x32C - 0x2A8)
// WidgetBlueprintGeneratedClass NPCStatusWidget_AIBoss.NPCStatusWidget_AIBoss_C
class UNPCStatusWidget_AIBoss_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Background;                                        // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNPCStatusWidgetBar_C*                 Bar_Health;                                        // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNPCStatusWidgetBar_C*                 Bar_Shield;                                        // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_Health;                                    // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                          VisibiltyTimer;                                    // 0x2D0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            VisibilityChanged;                                 // 0x2D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                       StatusWidgetVisibleDuration;                       // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CurrentHealthPercent;                              // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CurrentShieldPercent;                              // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Max_Health;                                        // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       PipAmount;                                         // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MinimumPipAmount;                                  // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NumHealthPips;                                     // 0x318(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9043[0x4];                                     // Fixing Size After Last Property..
	double                                       MaxShield;                                         // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NumShieldPips;                                     // 0x328(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NPCStatusWidget_AIBoss_C");
		return Clss;
	}

	void SetMaxShield(double MaxShield, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, int64 CallFunc_FFloor64_ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue);
	void SetMaxHealth(double MaxHealth, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, int64 CallFunc_FFloor64_ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue);
	void Construct();
	void EventUpdateStatus(double Health, double Shield, double MaxHealth, double MaxShield, bool ShowShield);
	void EventHideStatus();
	void ChangeWidgetVisibleDuration(double StatusWidgetVisibleDuration);
	void ExecuteUbergraph_NPCStatusWidget_AIBoss(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, double K2Node_CustomEvent_StatusWidgetVisibleDuration, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, double K2Node_CustomEvent_health, double K2Node_CustomEvent_shield, double K2Node_CustomEvent_maxHealth, double K2Node_CustomEvent_maxShield, bool K2Node_CustomEvent_ShowShield, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
	void VisibilityChanged__DelegateSignature(bool bVisible);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
