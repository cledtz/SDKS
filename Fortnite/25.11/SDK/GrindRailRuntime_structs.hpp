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

enum class EGrindRailBoosterMode : uint8
{
	SpeedUp                        = 0,
	SlowDown                       = 1,
	NoEffect                       = 2,
	EGrindRailBoosterMode_MAX      = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// ScriptStruct GrindRailRuntime.FortAnimInput_GrindRail
struct FFortAnimInput_GrindRail
{
public:
	uint8                                        bAimFWD : 1;                                       // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAimBWD : 1;                                       // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAimLFT : 1;                                       // Mask: 0x4, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAimRGT : 1;                                       // Mask: 0x8, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_426 : 4;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_7FD8[0x3];                                     // Fixing Size After Last Property..
	float                                        AimFWDDeltaAngleDegrees;                           // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AimBWDDeltaAngleDegrees;                           // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AimLFTDeltaAngleDegrees;                           // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AimRGTDeltaAngleDegrees;                           // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PawnToSplineDeltaYawAngleDegrees;                  // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x340 - 0x2E8)
// ScriptStruct GrindRailRuntime.FortAnimNode_GrindRailSlopeWarping
struct FFortAnimNode_GrindRailSlopeWarping : public FFortAnimNode_SlopeWarping
{
public:
	float                                        BaseSplineRadius;                                  // 0x2E8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAbsentCurveMeansFootDown : 1;                     // Mask: 0x1, PropSize: 0x10x2EC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_427 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_7FD9[0x3];                                     // Fixing Size After Last Property..
	class FName                                  LFootOnGroundCurveName;                            // 0x2F0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bLeftCurveHighMeansFootDown : 1;                   // Mask: 0x1, PropSize: 0x10x2F4(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_428 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_7FDA[0x3];                                     // Fixing Size After Last Property..
	class FName                                  RFootOnGroundCurveName;                            // 0x2F8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRightCurveHighMeansFootDown : 1;                  // Mask: 0x1, PropSize: 0x10x2FC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_429 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_7FDB[0x3];                                     // Fixing Size After Last Property..
	struct FBoneReference                        LeftFootFKBone;                                    // 0x300(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_7FDC[0x34];                                    // Fixing Size Of Struct..
};

// 0xC (0xC - 0x0)
// ScriptStruct GrindRailRuntime.GrindRailBoosterInfo
struct FGrindRailBoosterInfo
{
public:
	float                                        MinDistanceAlongSpline;                            // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxDistanceAlongSpline;                            // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGrindRailBoosterMode             PositiveMode;                                      // 0x8(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGrindRailBoosterMode             NegativeMode;                                      // 0x9(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7FDD[0x2];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GrindRailRuntime.FortRailPointSnapData
struct FFortRailPointSnapData
{
public:
	class AFortGrindRail*                        RailToSnapTo;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PointToSnapTo;                                     // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7FDE[0x4];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GrindRailRuntime.GrindRailStatus
struct FGrindRailStatus
{
public:
	TWeakObjectPtr<class AFortGrindRail>         GrindingRail;                                      // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentSpeedAlongSpline;                           // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentDistanceAlongSpline;                        // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
