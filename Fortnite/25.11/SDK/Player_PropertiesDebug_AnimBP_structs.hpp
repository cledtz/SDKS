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

// 0xC7 (0xC8 - 0x1)
// ScriptStruct Player_PropertiesDebug_AnimBP.Player_PropertiesDebug_AnimBP_C.AnimBlueprintGeneratedConstantData
struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
public:
	uint8                                        Pad_73C7[0x3];                                     // Fixing Size After Last Property..
	class FName                                  __NameProperty_4;                                  // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  __NameProperty_5;                                  // 0x8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_73C8[0x4];                                     // Fixing Size After Last Property..
	struct FAnimNodeFunctionRef                  __StructProperty_6;                                // 0x10(0x18)(BlueprintVisible, NoDestructor)
	enum class ERefPoseType                      __ByteProperty_7;                                  // 0x28(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_73C9[0x7];                                     // Fixing Size After Last Property..
	struct FAnimSubsystem_PropertyAccess         AnimBlueprintExtension_PropertyAccess;             // 0x30(0x80)()
	struct FAnimSubsystem_Base                   AnimBlueprintExtension_Base;                       // 0xB0(0x18)()
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
