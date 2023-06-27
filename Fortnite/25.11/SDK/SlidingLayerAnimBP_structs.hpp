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

// 0x177 (0x178 - 0x1)
// ScriptStruct SlidingLayerAnimBP.SlidingLayerAnimBP_C.AnimBlueprintGeneratedConstantData
struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
public:
	uint8                                        Pad_1751[0x3];                                     // Fixing Size After Last Property..
	class FName                                  __NameProperty_285;                                // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  __NameProperty_286;                                // 0x8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  __NameProperty_287;                                // 0xC(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  __NameProperty_288;                                // 0x10(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERefPoseType                      __ByteProperty_289;                                // 0x14(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1752[0x3];                                     // Fixing Size After Last Property..
	class FName                                  __NameProperty_290;                                // 0x18(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1753[0x4];                                     // Fixing Size After Last Property..
	TArray<float>                                __ArrayProperty_291;                               // 0x20(0x10)(BlueprintVisible, EditFixedSize)
	class FName                                  __NameProperty_292;                                // 0x30(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        __IntProperty_293;                                 // 0x34(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  __NameProperty_294;                                // 0x38(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        __IntProperty_295;                                 // 0x3C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  __NameProperty_296;                                // 0x40(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        __IntProperty_297;                                 // 0x44(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         __BoolProperty_298;                                // 0x48(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1754[0x3];                                     // Fixing Size After Last Property..
	class FName                                  __NameProperty_299;                                // 0x4C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        __IntProperty_300;                                 // 0x50(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1755[0x4];                                     // Fixing Size After Last Property..
	class UBlendProfile*                         __BlendProfile_301;                                // 0x58(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCurveFloat*                           __CurveFloat_302;                                  // 0x60(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	enum class EAlphaBlendOption                 __EnumProperty_303;                                // 0x68(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBlendListTransitionType          __EnumProperty_304;                                // 0x69(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1756[0x6];                                     // Fixing Size After Last Property..
	TArray<float>                                __ArrayProperty_305;                               // 0x70(0x10)(BlueprintVisible, EditFixedSize)
	class FName                                  __NameProperty_306;                                // 0x80(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  __NameProperty_307;                                // 0x84(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        __FloatProperty_308;                               // 0x88(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputScaleBiasClampConstants         __StructProperty_309;                              // 0x8C(0x2C)(BlueprintVisible, NoDestructor)
	float                                        __FloatProperty_310;                               // 0xB8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         __BoolProperty_311;                                // 0xBC(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAnimSyncMethod                   __EnumProperty_312;                                // 0xBD(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAnimGroupRole                    __ByteProperty_313;                                // 0xBE(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1757[0x1];                                     // Fixing Size After Last Property..
	struct FAnimNodeFunctionRef                  __StructProperty_314;                              // 0xC0(0x18)(BlueprintVisible, NoDestructor)
	class FName                                  __NameProperty_315;                                // 0xD8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  __NameProperty_316;                                // 0xDC(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnimSubsystem_PropertyAccess         AnimBlueprintExtension_PropertyAccess;             // 0xE0(0x80)()
	struct FAnimSubsystem_Base                   AnimBlueprintExtension_Base;                       // 0x160(0x18)()
};

// 0x3C (0x3D - 0x1)
// ScriptStruct SlidingLayerAnimBP.SlidingLayerAnimBP_C.AnimBlueprintGeneratedMutableData
struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
public:
	uint8                                        Pad_1758[0x3];                                     // Fixing Size After Last Property..
	float                                        __FloatProperty;                                   // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         __BoolProperty_0;                                  // 0x8(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1759[0x3];                                     // Fixing Size After Last Property..
	float                                        __FloatProperty_1;                                 // 0xC(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         __BoolProperty_2;                                  // 0x10(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_175A[0x3];                                     // Fixing Size After Last Property..
	float                                        __FloatProperty_3;                                 // 0x14(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        __FloatProperty_4;                                 // 0x18(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        __FloatProperty_5;                                 // 0x1C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        __FloatProperty_6;                                 // 0x20(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        __FloatProperty_7;                                 // 0x24(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        __FloatProperty_8;                                 // 0x28(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        __FloatProperty_9;                                 // 0x2C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        __FloatProperty_10;                                // 0x30(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        __FloatProperty_11;                                // 0x34(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        __FloatProperty_12;                                // 0x38(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         __BoolProperty_13;                                 // 0x3C(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
