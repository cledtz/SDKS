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

// 0x157 (0x158 - 0x1)
// ScriptStruct MANG_PatrolLayerAnimBP.MANG_PatrolLayerAnimBP_C.AnimBlueprintGeneratedConstantData
struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
public:
	uint8                                        Pad_8F6D[0x3];                                     // Fixing Size After Last Property..
	class FName                                  __NameProperty_160;                                // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  __NameProperty_161;                                // 0x8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  __NameProperty_162;                                // 0xC(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlendProfile*                         __BlendProfile_163;                                // 0x10(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCurveFloat*                           __CurveFloat_164;                                  // 0x18(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	enum class EAlphaBlendOption                 __EnumProperty_165;                                // 0x20(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBlendListTransitionType          __EnumProperty_166;                                // 0x21(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8F6E[0x6];                                     // Fixing Size After Last Property..
	TArray<float>                                __ArrayProperty_167;                               // 0x28(0x10)(BlueprintVisible, EditFixedSize)
	class FName                                  __NameProperty_168;                                // 0x38(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        __IntProperty_169;                                 // 0x3C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  __NameProperty_170;                                // 0x40(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        __IntProperty_171;                                 // 0x44(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAnimSyncMethod                   __EnumProperty_172;                                // 0x48(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8F6F[0x3];                                     // Fixing Size After Last Property..
	class FName                                  __NameProperty_173;                                // 0x4C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  __NameProperty_174;                                // 0x50(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        __IntProperty_175;                                 // 0x54(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  __NameProperty_176;                                // 0x58(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        __IntProperty_177;                                 // 0x5C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         __BoolProperty_178;                                // 0x60(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8F70[0x3];                                     // Fixing Size After Last Property..
	float                                        __FloatProperty_179;                               // 0x64(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputScaleBiasClampConstants         __StructProperty_180;                              // 0x68(0x2C)(BlueprintVisible, NoDestructor)
	float                                        __FloatProperty_181;                               // 0x94(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         __BoolProperty_182;                                // 0x98(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAnimSyncMethod                   __EnumProperty_183;                                // 0x99(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAnimGroupRole                    __ByteProperty_184;                                // 0x9A(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8F71[0x5];                                     // Fixing Size After Last Property..
	struct FAnimNodeFunctionRef                  __StructProperty_185;                              // 0xA0(0x18)(BlueprintVisible, NoDestructor)
	class FName                                  __NameProperty_186;                                // 0xB8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  __NameProperty_187;                                // 0xBC(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnimSubsystem_PropertyAccess         AnimBlueprintExtension_PropertyAccess;             // 0xC0(0x80)()
	struct FAnimSubsystem_Base                   AnimBlueprintExtension_Base;                       // 0x140(0x18)()
};

// 0x1B (0x1C - 0x1)
// ScriptStruct MANG_PatrolLayerAnimBP.MANG_PatrolLayerAnimBP_C.AnimBlueprintGeneratedMutableData
struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
public:
	bool                                         __BoolProperty;                                    // 0x1(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8F72[0x2];                                     // Fixing Size After Last Property..
	float                                        __FloatProperty_0;                                 // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        __FloatProperty_1;                                 // 0x8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        __FloatProperty_2;                                 // 0xC(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        __FloatProperty_3;                                 // 0x10(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        __FloatProperty_4;                                 // 0x14(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        __FloatProperty_5;                                 // 0x18(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
