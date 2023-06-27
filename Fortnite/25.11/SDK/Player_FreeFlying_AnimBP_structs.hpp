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

// 0x14F (0x150 - 0x1)
// ScriptStruct Player_FreeFlying_AnimBP.Player_FreeFlying_AnimBP_C.AnimBlueprintGeneratedConstantData
struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
public:
	uint8                                        Pad_3859[0x3];                                     // Fixing Size After Last Property..
	class FName                                  __NameProperty_187;                                // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  __NameProperty_188;                                // 0x8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        __IntProperty_189;                                 // 0xC(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                __ArrayProperty_190;                               // 0x10(0x10)(BlueprintVisible, EditFixedSize)
	TArray<int32>                                __ArrayProperty_191;                               // 0x20(0x10)(BlueprintVisible)
	struct FInputScaleBiasClampConstants         __StructProperty_192;                              // 0x30(0x2C)(BlueprintVisible, NoDestructor)
	uint8                                        Pad_385A[0x4];                                     // Fixing Size After Last Property..
	class UBlendProfile*                         __BlendProfile_193;                                // 0x60(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCurveFloat*                           __CurveFloat_194;                                  // 0x68(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         __BoolProperty_195;                                // 0x70(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAlphaBlendOption                 __EnumProperty_196;                                // 0x71(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBlendListTransitionType          __EnumProperty_197;                                // 0x72(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_385B[0x5];                                     // Fixing Size After Last Property..
	TArray<float>                                __ArrayProperty_198;                               // 0x78(0x10)(BlueprintVisible, EditFixedSize)
	float                                        __FloatProperty_199;                               // 0x88(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        __FloatProperty_200;                               // 0x8C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         __BoolProperty_201;                                // 0x90(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAnimSyncMethod                   __EnumProperty_202;                                // 0x91(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAnimGroupRole                    __ByteProperty_203;                                // 0x92(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_385C[0x1];                                     // Fixing Size After Last Property..
	class FName                                  __NameProperty_204;                                // 0x94(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  __NameProperty_205;                                // 0x98(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        __IntProperty_206;                                 // 0x9C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnimNodeFunctionRef                  __StructProperty_207;                              // 0xA0(0x18)(BlueprintVisible, NoDestructor)
	struct FAnimSubsystem_PropertyAccess         AnimBlueprintExtension_PropertyAccess;             // 0xB8(0x80)()
	struct FAnimSubsystem_Base                   AnimBlueprintExtension_Base;                       // 0x138(0x18)()
};

// 0x43 (0x44 - 0x1)
// ScriptStruct Player_FreeFlying_AnimBP.Player_FreeFlying_AnimBP_C.AnimBlueprintGeneratedMutableData
struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
public:
	uint8                                        __ByteProperty;                                    // 0x1(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_385D[0x6];                                     // Fixing Size After Last Property..
	TArray<float>                                __ArrayProperty_0;                                 // 0x8(0x10)(BlueprintVisible, EditFixedSize)
	bool                                         __BoolProperty_1;                                  // 0x18(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         __BoolProperty_2;                                  // 0x19(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_385E[0x2];                                     // Fixing Size After Last Property..
	float                                        __FloatProperty_3;                                 // 0x1C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        __FloatProperty_4;                                 // 0x20(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        __ByteProperty_5;                                  // 0x24(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_385F[0x3];                                     // Fixing Size After Last Property..
	TArray<float>                                __ArrayProperty_6;                                 // 0x28(0x10)(BlueprintVisible, EditFixedSize)
	bool                                         __BoolProperty_7;                                  // 0x38(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         __BoolProperty_8;                                  // 0x39(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3860[0x2];                                     // Fixing Size After Last Property..
	float                                        __FloatProperty_9;                                 // 0x3C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        __FloatProperty_10;                                // 0x40(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
