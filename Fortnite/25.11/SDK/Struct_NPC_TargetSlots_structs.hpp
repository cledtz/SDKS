#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x78 - 0x0)
// UserDefinedStruct Struct_NPC_TargetSlots.Struct_NPC_TargetSlots
struct FStruct_NPC_TargetSlots
{
public:
	enum class Enum_NPC_TargetSlots              TargetSlotType_6_B268C50140F4F849CE916EA5DB4A30E7; // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_79C5[0x7];                                     // Fixing Size After Last Property..
	class UClass*                                TargetSlotCountingGE_7_F6007B01441781AB71302C91A1C4CFD2; // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        AITargetSlotSizeHF_8_E81162534B067D58D70AE9AC8B4B1F98; // 0x10(0x28)(Edit, BlueprintVisible)
	struct FScalableFloat                        AITargetSlotDurationHF_14_A9B6ED4D4072D7BB507AA5A14118FA5B; // 0x38(0x28)(Edit, BlueprintVisible)
	class UClass*                                TargetSlotOverrideGE_11_6C40525043B50B2B696580B362A65DB3; // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                TargetSlotOwnerGE_17_19F50D8848750D3BC118D9BBD861CAA1; // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                TargetSlotCountingMaxedGE_19_BF1E1EF24CCA642F87D4379BB916F271; // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
