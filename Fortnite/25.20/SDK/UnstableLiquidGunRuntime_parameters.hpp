#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// Function UnstableLiquidGunRuntime.FortLiquidGunProjectile.SetDetachmentReason
struct AFortLiquidGunProjectile_SetDetachmentReason_Params
{
public:
	enum class ELiquidRibbonDetachmentReason     InDetachmentReason;                                // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// Function UnstableLiquidGunRuntime.FortLiquidGunProjectile.HandleSplineHit
struct AFortLiquidGunProjectile_HandleSplineHit_Params
{
public:
	struct FHitResult                            Hit;                                               // 0x0(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UnstableLiquidGunRuntime.FortLiquidGunProjectile.GetDetachmentReason
struct AFortLiquidGunProjectile_GetDetachmentReason_Params
{
public:
	enum class ELiquidRibbonDetachmentReason     ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function UnstableLiquidGunRuntime.LiquidRibbonManager.SetNiagaraData
struct ALiquidRibbonManager_SetNiagaraData_Params
{
public:
	class UNiagaraComponent*                     NiagaraComponent;                                  // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       Positions;                                         // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<int32>                                RibbonIDs;                                         // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<bool>                                 RibbonVisibilities;                                // 0x28(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<float>                                FlashIntensities;                                  // 0x38(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<int32>                                RibbonSizes;                                       // 0x48(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function UnstableLiquidGunRuntime.LiquidRibbonManager.RunSplineCollisionTestOnProjectiles
struct ALiquidRibbonManager_RunSplineCollisionTestOnProjectiles_Params
{
public:
};

// 0x98 (0x98 - 0x0)
// Function UnstableLiquidGunRuntime.LiquidRibbonManager.GetPointOnSegment
struct ALiquidRibbonManager_GetPointOnSegment_Params
{
public:
	float                                        T;                                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2866[0x4];                                     // Fixing Size After Last Property..
	struct FLiquidRibbonSplineSegment            Segment;                                           // 0x8(0x78)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x80(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x138 (0x138 - 0x0)
// Function UnstableLiquidGunRuntime.LiquidRibbonManager.GetOrAddDetachment
struct ALiquidRibbonManager_GetOrAddDetachment_Params
{
public:
	int32                                        RibbonID;                                          // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2867[0x4];                                     // Fixing Size After Last Property..
	struct FLiquidRibbonSplineSegment            Segment;                                           // 0x8(0x78)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLiquidRibbonSplineDetachment         ReturnValue;                                       // 0x80(0xB8)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function UnstableLiquidGunRuntime.LiquidRibbonManager.GetFirstVisiblePointIndex
struct ALiquidRibbonManager_GetFirstVisiblePointIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function UnstableLiquidGunRuntime.LiquidRibbonManager.CalculateSplinePointsAndSetNiagaraData
struct ALiquidRibbonManager_CalculateSplinePointsAndSetNiagaraData_Params
{
public:
	TArray<class AFortLiquidGunProjectile*>      Projectiles;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bAttachSplineToMuzzle;                             // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2868[0x7];                                     // Fixing Size After Last Property..
	class UNiagaraComponent*                     NiagaraComponent;                                  // 0x18(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       OutAllPositions;                                   // 0x20(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                OutRibbonIDs;                                      // 0x30(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<bool>                                 OutRibbonVisibilities;                             // 0x40(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                OutFlashIntensities;                               // 0x50(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                OutRibbonSizes;                                    // 0x60(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function UnstableLiquidGunRuntime.LiquidRibbonManager.CalculateSegments
struct ALiquidRibbonManager_CalculateSegments_Params
{
public:
	TArray<struct FVector>                       Points;                                            // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	float                                        Tension;                                           // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2869[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FLiquidRibbonSplineSegment>    ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function UnstableLiquidGunRuntime.LiquidRibbonManager.CalculatePointSize
struct ALiquidRibbonManager_CalculatePointSize_Params
{
public:
	int32                                        SegmentIndex;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PointIndex;                                        // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UnstableLiquidGunRuntime.LiquidRibbonManager.CalculatePointFlashIntensity
struct ALiquidRibbonManager_CalculatePointFlashIntensity_Params
{
public:
	int32                                        PointSize;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
