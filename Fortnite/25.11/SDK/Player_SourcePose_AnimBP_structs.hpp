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

// 0x13F (0x140 - 0x1)
// ScriptStruct Player_SourcePose_AnimBP.Player_SourcePose_AnimBP_C.AnimBlueprintGeneratedConstantData
struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
public:
	uint8                                        Pad_8E6D[0x3];                                     // Fixing Size After Last Property..
	class FName                                  __NameProperty_144;                                // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnimNodeFunctionRef                  __StructProperty_145;                              // 0x8(0x18)(BlueprintVisible, NoDestructor)
	TArray<float>                                __ArrayProperty_146;                               // 0x20(0x10)(BlueprintVisible, EditFixedSize)
	TArray<float>                                __ArrayProperty_147;                               // 0x30(0x10)(BlueprintVisible, EditFixedSize)
	TArray<float>                                __ArrayProperty_148;                               // 0x40(0x10)(BlueprintVisible, EditFixedSize)
	enum class ESequenceEvalReinit               __ByteProperty_149;                                // 0x50(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         __BoolProperty_150;                                // 0x51(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8E6E[0x2];                                     // Fixing Size After Last Property..
	float                                        __FloatProperty_151;                               // 0x54(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAnimSyncMethod                   __EnumProperty_152;                                // 0x58(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAnimGroupRole                    __ByteProperty_153;                                // 0x59(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8E6F[0x2];                                     // Fixing Size After Last Property..
	class FName                                  __NameProperty_154;                                // 0x5C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnimNodeFunctionRef                  __StructProperty_155;                              // 0x60(0x18)(BlueprintVisible, NoDestructor)
	class UBlendProfile*                         __BlendProfile_156;                                // 0x78(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCurveFloat*                           __CurveFloat_157;                                  // 0x80(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         __BoolProperty_158;                                // 0x88(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAlphaBlendOption                 __EnumProperty_159;                                // 0x89(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBlendListTransitionType          __EnumProperty_160;                                // 0x8A(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8E70[0x5];                                     // Fixing Size After Last Property..
	TArray<float>                                __ArrayProperty_161;                               // 0x90(0x10)(BlueprintVisible, EditFixedSize)
	struct FAnimSubsystem_PropertyAccess         AnimBlueprintExtension_PropertyAccess;             // 0xA0(0x80)()
	struct FAnimSubsystem                        AnimBlueprintExtension_NodeRelevancy;              // 0x120(0x8)()
	struct FAnimSubsystem_Base                   AnimBlueprintExtension_Base;                       // 0x128(0x18)()
};

// 0x70 (0x71 - 0x1)
// ScriptStruct Player_SourcePose_AnimBP.Player_SourcePose_AnimBP_C.AnimBlueprintGeneratedMutableData
struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
public:
	uint8                                        Pad_8E71[0x7];                                     // Fixing Size After Last Property..
	TArray<float>                                __ArrayProperty;                                   // 0x8(0x10)(BlueprintVisible, EditFixedSize)
	bool                                         __BoolProperty_0;                                  // 0x18(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         __BoolProperty_1;                                  // 0x19(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         __BoolProperty_2;                                  // 0x1A(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8E72[0x5];                                     // Fixing Size After Last Property..
	class UAnimSequenceBase*                     __AnimSequenceBase_3;                              // 0x20(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAnimSequenceBase*                     __AnimSequenceBase_4;                              // 0x28(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAnimSequenceBase*                     __AnimSequenceBase_5;                              // 0x30(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAnimSequenceBase*                     __AnimSequenceBase_6;                              // 0x38(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         __BoolProperty_7;                                  // 0x40(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         __BoolProperty_8;                                  // 0x41(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8E73[0x6];                                     // Fixing Size After Last Property..
	class UAnimSequenceBase*                     __AnimSequenceBase_9;                              // 0x48(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         __BoolProperty_10;                                 // 0x50(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8E74[0x7];                                     // Fixing Size After Last Property..
	class UAnimSequenceBase*                     __AnimSequenceBase_11;                             // 0x58(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAnimSequenceBase*                     __AnimSequenceBase_12;                             // 0x60(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAnimSequenceBase*                     __AnimSequenceBase_13;                             // 0x68(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         __BoolProperty_14;                                 // 0x70(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
