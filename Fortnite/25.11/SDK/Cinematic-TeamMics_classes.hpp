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

// 0x280 (0x550 - 0x2D0)
// WidgetBlueprintGeneratedClass Cinematic-TeamMics.Cinematic-TeamMics_C
class UCinematic_TeamMics_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UMicIndicator_C*                       MicIndicator;                                      // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcherLegacy*           SwitcherConnectingStranger;                        // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextBlock_6;                                       // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextPlayerName;                                    // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint8                                        Pad_97DD[0x8];                                     // Fixing Size After Last Property..
	struct FFortTeamMemberInfo                   MemberInfo;                                        // 0x300(0x250)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Cinematic-TeamMics_C");
		return Clss;
	}

	void Update(const struct FFortTeamMemberInfo& UpdatedMemberInfo, const struct FUniqueNetIdRepl& PlayerNetId, bool Temp_bool_Variable, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_2, int32 Temp_int_Variable, int32 Temp_int_Variable_1, class UFortPartyContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, int32 K2Node_Select_Default_1, bool CallFunc_IsNetIdFromLocalPlayersPlatform_ReturnValue, const struct FUniqueNetIdRepl& K2Node_Select_Default_2);
	void Construct();
	void ExecuteUbergraph_Cinematic_TeamMics(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
