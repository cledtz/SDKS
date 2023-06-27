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
	uint8                                        Pad_8E43[0x3];                                     // Fixing Size After Last Property..
	class FName                                  __NameProperty_144;                                // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  __NameProperty_145;                                // 0x8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  __NameProperty_146;                                // 0xC(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlendProfile*                         __BlendProfile_147;                                // 0x10(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCurveFloat*                           __CurveFloat_148;                                  // 0x18(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	enum class EAlphaBlendOption                 __EnumProperty_149;                                // 0x20(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBlendListTransitionType          __EnumProperty_150;                                // 0x21(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8E44[0x6];                                     // Fixing Size After Last Property..
	TArray<float>                                __ArrayProperty_151;                               // 0x28(0x10)(BlueprintVisible, EditFixedSize)
	class FName                                  __NameProperty_152;                                // 0x38(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        __IntProperty_153;                                 // 0x3C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  __NameProperty_154;                                // 0x40(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        __IntProperty_155;                                 // 0x44(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAnimSyncMethod                   __EnumProperty_156;                                // 0x48(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8E45[0x3];                                     // Fixing Size After Last Property..
	class FName                                  __NameProperty_157;                                // 0x4C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  __NameProperty_158;                                // 0x50(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        __IntProperty_159;                                 // 0x54(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  __NameProperty_160;                                // 0x58(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        __IntProperty_161;                                 // 0x5C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         __BoolProperty_162;                                // 0x60(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8E46[0x3];                                     // Fixing Size After Last Property..
	float                                        __FloatProperty_163;                               // 0x64(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputScaleBiasClampConstants         __StructProperty_164;                              // 0x68(0x2C)(BlueprintVisible, NoDestructor)
	float                                        __FloatProperty_165;                               // 0x94(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         __BoolProperty_166;                                // 0x98(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAnimSyncMethod                   __EnumProperty_167;                                // 0x99(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAnimGroupRole                    __ByteProperty_168;                                // 0x9A(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8E47[0x5];                                     // Fixing Size After Last Property..
	struct FAnimNodeFunctionRef                  __StructProperty_169;                              // 0xA0(0x18)(BlueprintVisible, NoDestructor)
	class FName                                  __NameProperty_170;                                // 0xB8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  __NameProperty_171;                                // 0xBC(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnimSubsystem_PropertyAccess         AnimBlueprintExtension_PropertyAccess;             // 0xC0(0x80)()
	struct FAnimSubsystem_Base                   AnimBlueprintExtension_Base;                       // 0x140(0x18)()
};

// 0x1B (0x1C - 0x1)
// ScriptStruct MANG_PatrolLayerAnimBP.MANG_PatrolLayerAnimBP_C.AnimBlueprintGeneratedMutableData
struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
public:
	bool                                         __BoolProperty;                                    // 0x1(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8E48[0x2];                                     // Fixing Size After Last Property..
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
