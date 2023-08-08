#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x19 (0x2E9 - 0x2D0)
// WidgetBlueprintGeneratedClass AthenaBottomBarWidget.AthenaBottomBarWidget_C
class UAthenaBottomBarWidget_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAthenaBoundActionBar*                 AthenaBoundActionBar_85;                           // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortHUDElementWrapper_C*              FortHUDElementWrapper;                             // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         Display_Owner_Actions_Only;                        // 0x2E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaBottomBarWidget_C");
		return Clss;
	}

	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_AthenaBottomBarWidget(int32 EntryPoint, class USizeBoxSlot* CallFunc_SlotAsSizeBoxSlot_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue, bool K2Node_Event_IsDesignTime, double CallFunc_SelectFloat_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, float K2Node_MakeStruct_Top_ImplicitCast, float K2Node_MakeStruct_Bottom_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
