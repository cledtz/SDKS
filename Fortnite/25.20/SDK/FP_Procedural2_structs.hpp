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
// ScriptStruct FP_Procedural2.FP_Procedural2_C.AnimBlueprintGeneratedConstantData
struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
public:
	uint8                                        Pad_7A05[0x3];                                     // Fixing Size After Last Property..
	class FName                                  __NameProperty_28;                                 // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  __NameProperty_29;                                 // 0x8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A06[0x4];                                     // Fixing Size After Last Property..
	struct FAnimNodeFunctionRef                  __StructProperty_30;                               // 0x10(0x18)(BlueprintVisible, NoDestructor)
	struct FAnimSubsystem_PropertyAccess         AnimBlueprintExtension_PropertyAccess;             // 0x28(0x80)()
	struct FAnimSubsystem_Base                   AnimBlueprintExtension_Base;                       // 0xA8(0x18)()
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
