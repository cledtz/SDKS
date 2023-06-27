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

// 0x20 (0x20 - 0x0)
// Function EnergyRuntime.FortComponent_Energy.UseEnergy
struct UFortComponent_Energy_UseEnergy_Params
{
public:
	float                                        OutAmountOfEnergyUsed;                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AmountOfEnergyToUse;                               // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseEnergyEvenOnFailure;                           // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E7C[0x7];                                     // Fixing Size After Last Property..
	class UObject*                               OptionalEnergyUser;                                // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBroadcastEnergyPercentChanged;                    // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x19(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E7D[0x6];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function EnergyRuntime.FortComponent_Energy.StopUsingEnergy
struct UFortComponent_Energy_StopUsingEnergy_Params
{
public:
	struct FGameplayTag                          EnergyUseIdentifier;                               // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E7E[0x4];                                     // Fixing Size After Last Property..
	class UObject*                               OptionalEnergyUser;                                // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E7F[0x7];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function EnergyRuntime.FortComponent_Energy.StopAddingEnergy
struct UFortComponent_Energy_StopAddingEnergy_Params
{
public:
	struct FGameplayTag                          EnergyUseIdentifier;                               // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E80[0x4];                                     // Fixing Size After Last Property..
	class UObject*                               OptionalEnergySource;                              // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E81[0x7];                                     // Fixing Size Of Struct..
};

// 0x20 (0x20 - 0x0)
// Function EnergyRuntime.FortComponent_Energy.StartUsingEnergy
struct UFortComponent_Energy_StartUsingEnergy_Params
{
public:
	float                                        EnergyToUseToStart;                                // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EnergyToUsePerSecond;                              // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          EnergyUseIdentifier;                               // 0x8(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E82[0x4];                                     // Fixing Size After Last Property..
	class UObject*                               OptionalEnergyUser;                                // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E83[0x7];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function EnergyRuntime.FortComponent_Energy.StartAddingEnergy
struct UFortComponent_Energy_StartAddingEnergy_Params
{
public:
	float                                        EnergyToAddPerSecond;                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          EnergySourceIdentifier;                            // 0x4(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               OptionalEnergySource;                              // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E84[0x7];                                     // Fixing Size Of Struct..
};

// 0x2 (0x2 - 0x0)
// Function EnergyRuntime.FortComponent_Energy.SetAllEnergyUsageFree
struct UFortComponent_Energy_SetAllEnergyUsageFree_Params
{
public:
	bool                                         bShouldEnergyUsageBeFree;                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function EnergyRuntime.FortComponent_Energy.RemoveRegenDataOverride
struct UFortComponent_Energy_RemoveRegenDataOverride_Params
{
public:
	struct FGameplayTag                          RegenOverrideIdentifier;                           // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E85[0x3];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function EnergyRuntime.FortComponent_Energy.RegisterMutatorUpdatedDelegate
struct UFortComponent_Energy_RegisterMutatorUpdatedDelegate_Params
{
public:
	class APawn*                                 AffectedPawn;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function EnergyRuntime.FortComponent_Energy.OnPlayerStatePawnSet
struct UFortComponent_Energy_OnPlayerStatePawnSet_Params
{
public:
	class APlayerState*                          Player;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                 NewPawn;                                           // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                 OldPawn;                                           // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function EnergyRuntime.FortComponent_Energy.OnMutatorUpdated
struct UFortComponent_Energy_OnMutatorUpdated_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function EnergyRuntime.FortComponent_Energy.HasSufficientEnergy
struct UFortComponent_Energy_HasSufficientEnergy_Params
{
public:
	float                                        EnergyAmountToTest;                                // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E86[0x3];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function EnergyRuntime.FortComponent_Energy.HandleControllerChanged
struct UFortComponent_Energy_HandleControllerChanged_Params
{
public:
	class APawn*                                 Pawn;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                           OldController;                                     // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                           NewController;                                     // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function EnergyRuntime.FortComponent_Energy.GetCurrentEnergyPercentage
struct UFortComponent_Energy_GetCurrentEnergyPercentage_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function EnergyRuntime.FortComponent_Energy.ApplyRegenDataOverride
struct UFortComponent_Energy_ApplyRegenDataOverride_Params
{
public:
	struct FGameplayTag                          RegenOverrideIdentifier;                           // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NewRechargeAmountPerSecond;                        // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NewRechargeDelayInSeconds;                         // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NewRechargePercentageLimit;                        // 0xC(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function EnergyRuntime.FortComponent_Energy.AddEnergy
struct UFortComponent_Energy_AddEnergy_Params
{
public:
	float                                        OutAmountOfEnergyAdded;                            // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AmountOfEnergyToAdd;                               // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               OptionalEnergySource;                              // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBroadcastEnergyPercentChanged;                    // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x11(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E87[0x6];                                     // Fixing Size Of Struct..
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
