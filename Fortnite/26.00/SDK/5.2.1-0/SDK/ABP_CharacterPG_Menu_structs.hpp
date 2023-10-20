#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x137 (0x138 - 0x1)
// ScriptStruct ABP_CharacterPG_Menu.ABP_CharacterPG_Menu_C.AnimBlueprintGeneratedConstantData
struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
public:
	uint8                                        Pad_CD1[0x3];                                      // Fixing Size After Last Property 
	class FName                                  __NameProperty_109;                                // 0x4(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputScaleBiasClampConstants         __StructProperty_110;                              // 0xC(0x2C)(BlueprintVisible, NoDestructor)
	float                                        __FloatProperty_111;                               // 0x38(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CD3[0x4];                                      // Fixing Size After Last Property 
	class UBlendProfile*                         __BlendProfile_112;                                // 0x40(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCurveFloat*                           __CurveFloat_113;                                  // 0x48(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	enum class EAlphaBlendOption                 __EnumProperty_114;                                // 0x50(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBlendListTransitionType          __EnumProperty_115;                                // 0x51(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CD6[0x6];                                      // Fixing Size After Last Property 
	TArray<float>                                __ArrayProperty_116;                               // 0x58(0x10)(BlueprintVisible, EditFixedSize)
	enum class ESequenceEvalReinit               __ByteProperty_117;                                // 0x68(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         __BoolProperty_118;                                // 0x69(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CDA[0x2];                                      // Fixing Size After Last Property 
	float                                        __FloatProperty_119;                               // 0x6C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         __BoolProperty_120;                                // 0x70(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAnimSyncMethod                   __EnumProperty_121;                                // 0x71(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAnimGroupRole                    __ByteProperty_122;                                // 0x72(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CDC[0x1];                                      // Fixing Size After Last Property 
	class FName                                  __NameProperty_123;                                // 0x74(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CDD[0x4];                                      // Fixing Size After Last Property 
	struct FAnimNodeFunctionRef                  __StructProperty_124;                              // 0x80(0x20)(BlueprintVisible, NoDestructor)
	struct FAnimSubsystem_PropertyAccess         AnimBlueprintExtension_PropertyAccess;             // 0xA0(0x80)(None)
	struct FAnimSubsystem_Base                   AnimBlueprintExtension_Base;                       // 0x120(0x18)(None)
};

// 0x1F (0x20 - 0x1)
// ScriptStruct ABP_CharacterPG_Menu.ABP_CharacterPG_Menu_C.AnimBlueprintGeneratedMutableData
struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
public:
	uint8                                        Pad_CDF[0x7];                                      // Fixing Size After Last Property 
	class UAnimSequenceBase*                     __AnimSequenceBase;                                // 0x8(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         __BoolProperty_0;                                  // 0x10(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CE0[0x7];                                      // Fixing Size After Last Property 
	class UAnimSequenceBase*                     __AnimSequenceBase_1;                              // 0x18(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

}


