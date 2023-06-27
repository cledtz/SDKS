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
// ScriptStruct NitroFlow_Axe_AnimBP.NitroFlow_Axe_AnimBP_C.AnimBlueprintGeneratedConstantData
struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
public:
	uint8                                        Pad_9BE0[0x3];                                     // Fixing Size After Last Property..
	class FName                                  __NameProperty_7;                                  // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  __NameProperty_8;                                  // 0x8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9BE1[0x4];                                     // Fixing Size After Last Property..
	struct FAnimNodeFunctionRef                  __StructProperty_9;                                // 0x10(0x18)(BlueprintVisible, NoDestructor)
	struct FAnimSubsystem_PropertyAccess         AnimBlueprintExtension_PropertyAccess;             // 0x28(0x80)()
	struct FAnimSubsystem_Base                   AnimBlueprintExtension_Base;                       // 0xA8(0x18)()
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
