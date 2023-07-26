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

// 0xBF (0xC0 - 0x1)
// ScriptStruct M_MED_Patches_Axe_AnimBP.M_MED_Patches_Axe_AnimBP_C.AnimBlueprintGeneratedConstantData
struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
public:
	uint8                                        Pad_85B1[0x7];                                     // Fixing Size After Last Property..
	struct FAnimNodeFunctionRef                  __StructProperty_4;                                // 0x8(0x18)(BlueprintVisible, NoDestructor)
	class FName                                  __NameProperty_5;                                  // 0x20(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  __NameProperty_6;                                  // 0x24(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnimSubsystem_PropertyAccess         AnimBlueprintExtension_PropertyAccess;             // 0x28(0x80)()
	struct FAnimSubsystem_Base                   AnimBlueprintExtension_Base;                       // 0xA8(0x18)()
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
