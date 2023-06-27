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

// 0xB9 (0x371 - 0x2B8)
// WidgetBlueprintGeneratedClass WBP_PlayerAvatar.WBP_PlayerAvatar_C
class UWBP_PlayerAvatar_C : public UFortPlayerAvatar
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USpacer*                               Spacer_Size;                                       // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              AvatarMaterial;                                    // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             AvatarSize;                                        // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          PresenceSelect_Online;                             // 0x2E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          PresenceSelect_Away;                               // 0x2F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          PresenceSelect_Offline;                            // 0x300(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          PresenceSelect_Blocked;                            // 0x310(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          PresenceColor_Online;                              // 0x320(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          PresenceColor_Away;                                // 0x330(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          PresenceColor_Offline;                             // 0x340(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowOnlinePresence;                                // 0x350(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_96C1[0x7];                                     // Fixing Size After Last Property..
	double                                       PresenceIconScale;                                 // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             PresenceIconOffset;                                // 0x360(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowPresenceBg;                                    // 0x370(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WBP_PlayerAvatar_C");
		return Clss;
	}

	void OnOnlinePresenceChanged(bool bHidePresence, enum class EPresenceIndicatorState PresenceState);
	void Event_Set_Size(const struct FVector2D& NewSize);
	void PreConstruct(bool IsDesignTime);
	void Event_Set_Presence_Icon_Settings(double Scale, const struct FVector2D& Offset);
	void ExecuteUbergraph_WBP_PlayerAvatar(int32 EntryPoint, bool Temp_bool_Variable, float Temp_real_Variable, float Temp_real_Variable_1, bool Temp_bool_Variable_1, float Temp_real_Variable_2, float Temp_real_Variable_3, float K2Node_Select_Default, enum class EPresenceIndicatorState Temp_byte_Variable, float Temp_real_Variable_4, bool K2Node_Event_bHidePresence, enum class EPresenceIndicatorState K2Node_Event_PresenceState, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector2D& K2Node_CustomEvent_NewSize, float Temp_real_Variable_5, const struct FLinearColor& K2Node_Select_Default_1, bool Temp_bool_Variable_2, bool K2Node_Event_IsDesignTime, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, float K2Node_Select_Default_2, float K2Node_Select_Default_3, double K2Node_CustomEvent_Scale, const struct FVector2D& K2Node_CustomEvent_Offset, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2, enum class EPresenceIndicatorState Temp_byte_Variable_1, const struct FLinearColor& K2Node_Select_Default_4, const struct FDeprecateSlateVector2D& K2Node_MakeStruct_ImageSize_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
