#pragma once

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

// 0x4 (0x4 - 0x0)
// Function AudioModulation.AudioModulationStyle.GetPatchColor
struct UAudioModulationStyle_GetPatchColor_Params
{
public:
	struct FColor                                ReturnValue;                                       // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AudioModulation.AudioModulationStyle.GetParameterColor
struct UAudioModulationStyle_GetParameterColor_Params
{
public:
	struct FColor                                ReturnValue;                                       // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AudioModulation.AudioModulationStyle.GetModulationGeneratorColor
struct UAudioModulationStyle_GetModulationGeneratorColor_Params
{
public:
	struct FColor                                ReturnValue;                                       // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AudioModulation.AudioModulationStyle.GetControlBusMixColor
struct UAudioModulationStyle_GetControlBusMixColor_Params
{
public:
	struct FColor                                ReturnValue;                                       // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AudioModulation.AudioModulationStyle.GetControlBusColor
struct UAudioModulationStyle_GetControlBusColor_Params
{
public:
	struct FColor                                ReturnValue;                                       // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AudioModulation.AudioModulationStatics.UpdateModulator
struct UAudioModulationStatics_UpdateModulator_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundModulatorBase*                   Modulator;                                         // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AudioModulation.AudioModulationStatics.UpdateMixFromObject
struct UAudioModulationStatics_UpdateMixFromObject_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundControlBusMix*                   Mix;                                               // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FadeTime;                                          // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C31[0x4];                                     // Fixing Size Of Struct
};

// 0x38 (0x38 - 0x0)
// Function AudioModulation.AudioModulationStatics.UpdateMixByFilter
struct UAudioModulationStatics_UpdateMixByFilter_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundControlBusMix*                   Mix;                                               // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AddressFilter;                                     // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class USoundModulationParameter> ParamClassFilter;                                  // 0x20(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundModulationParameter*             ParamFilter;                                       // 0x28(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x30(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FadeTime;                                          // 0x34(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function AudioModulation.AudioModulationStatics.UpdateMix
struct UAudioModulationStatics_UpdateMix_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundControlBusMix*                   Mix;                                               // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSoundControlBusMixStage>      Stages;                                            // 0x10(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        FadeTime;                                          // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C3E[0x4];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function AudioModulation.AudioModulationStatics.SetGlobalBusMixValue
struct UAudioModulationStatics_SetGlobalBusMixValue_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundControlBus*                      Bus;                                               // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FadeTime;                                          // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AudioModulation.AudioModulationStatics.SaveMixToProfile
struct UAudioModulationStatics_SaveMixToProfile_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundControlBusMix*                   Mix;                                               // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ProfileIndex;                                      // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C6F[0x4];                                     // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// Function AudioModulation.AudioModulationStatics.LoadMixFromProfile
struct UAudioModulationStatics_LoadMixFromProfile_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundControlBusMix*                   Mix;                                               // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bActivate;                                         // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CBC[0x3];                                     // Fixing Size After Last Property
	int32                                        ProfileIndex;                                      // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSoundControlBusMixStage>      ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AudioModulation.AudioModulationStatics.GetModulatorValue
struct UAudioModulationStatics_GetModulatorValue_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundModulatorBase*                   Modulator;                                         // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CC8[0x4];                                     // Fixing Size Of Struct
};

// 0xA8 (0xA8 - 0x0)
// Function AudioModulation.AudioModulationStatics.GetModulatorsFromDestination
struct UAudioModulationStatics_GetModulatorsFromDestination_Params
{
public:
	struct FSoundModulationDestinationSettings   Destination;                                       // 0x0(0x58)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TSet<class USoundModulatorBase*>             ReturnValue;                                       // 0x58(0x50)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AudioModulation.AudioModulationStatics.DeactivateGenerator
struct UAudioModulationStatics_DeactivateGenerator_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundModulationGenerator*             Generator;                                         // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AudioModulation.AudioModulationStatics.DeactivateBusMix
struct UAudioModulationStatics_DeactivateBusMix_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundControlBusMix*                   Mix;                                               // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AudioModulation.AudioModulationStatics.DeactivateBus
struct UAudioModulationStatics_DeactivateBus_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundControlBus*                      Bus;                                               // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AudioModulation.AudioModulationStatics.DeactivateAllBusMixes
struct UAudioModulationStatics_DeactivateAllBusMixes_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function AudioModulation.AudioModulationStatics.CreateModulationParameter
struct UAudioModulationStatics_CreateModulationParameter_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Name;                                              // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CDF[0x4];                                     // Fixing Size After Last Property
	TSubclassOf<class USoundModulationParameter> ParamClass;                                        // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultValue;                                      // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CE1[0x4];                                     // Fixing Size After Last Property
	class USoundModulationParameter*             ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function AudioModulation.AudioModulationStatics.CreateLFOGenerator
struct UAudioModulationStatics_CreateLFOGenerator_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Name;                                              // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoundModulationLFOParams             Params;                                            // 0xC(0x20)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CEB[0x4];                                     // Fixing Size After Last Property
	class USoundModulationGeneratorLFO*          ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function AudioModulation.AudioModulationStatics.CreateEnvelopeFollowerGenerator
struct UAudioModulationStatics_CreateEnvelopeFollowerGenerator_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Name;                                              // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CF9[0x4];                                     // Fixing Size After Last Property
	struct FEnvelopeFollowerGeneratorParams      Params;                                            // 0x10(0x20)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class USoundModulationGeneratorEnvelopeFollower* ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function AudioModulation.AudioModulationStatics.CreateBusMixStage
struct UAudioModulationStatics_CreateBusMixStage_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundControlBus*                      Bus;                                               // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AttackTime;                                        // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReleaseTime;                                       // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D02[0x4];                                     // Fixing Size After Last Property
	struct FSoundControlBusMixStage              ReturnValue;                                       // 0x20(0x28)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function AudioModulation.AudioModulationStatics.CreateBusMix
struct UAudioModulationStatics_CreateBusMix_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Name;                                              // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D09[0x4];                                     // Fixing Size After Last Property
	TArray<struct FSoundControlBusMixStage>      Stages;                                            // 0x10(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         Activate;                                          // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D0A[0x7];                                     // Fixing Size After Last Property
	class USoundControlBusMix*                   ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function AudioModulation.AudioModulationStatics.CreateBus
struct UAudioModulationStatics_CreateBus_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Name;                                              // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D11[0x4];                                     // Fixing Size After Last Property
	class USoundModulationParameter*             Parameter;                                         // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Activate;                                          // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D13[0x7];                                     // Fixing Size After Last Property
	class USoundControlBus*                      ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function AudioModulation.AudioModulationStatics.CreateADEnvelopeGenerator
struct UAudioModulationStatics_CreateADEnvelopeGenerator_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Name;                                              // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoundModulationADEnvelopeParams      Params;                                            // 0xC(0x14)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class USoundModulationGeneratorADEnvelope*   ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AudioModulation.AudioModulationStatics.ClearGlobalBusMixValue
struct UAudioModulationStatics_ClearGlobalBusMixValue_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundControlBus*                      Bus;                                               // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FadeTime;                                          // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D1E[0x4];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function AudioModulation.AudioModulationStatics.ClearAllGlobalBusMixValues
struct UAudioModulationStatics_ClearAllGlobalBusMixValues_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FadeTime;                                          // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D24[0x4];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function AudioModulation.AudioModulationStatics.ActivateGenerator
struct UAudioModulationStatics_ActivateGenerator_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundModulationGenerator*             Generator;                                         // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AudioModulation.AudioModulationStatics.ActivateBusMix
struct UAudioModulationStatics_ActivateBusMix_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundControlBusMix*                   Mix;                                               // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AudioModulation.AudioModulationStatics.ActivateBus
struct UAudioModulationStatics_ActivateBus_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundControlBus*                      Bus;                                               // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function AudioModulation.SoundControlBusMix.SoloMix
struct USoundControlBusMix_SoloMix_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AudioModulation.SoundControlBusMix.SaveMixToProfile
struct USoundControlBusMix_SaveMixToProfile_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AudioModulation.SoundControlBusMix.LoadMixFromProfile
struct USoundControlBusMix_LoadMixFromProfile_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AudioModulation.SoundControlBusMix.DeactivateMix
struct USoundControlBusMix_DeactivateMix_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AudioModulation.SoundControlBusMix.DeactivateAllMixes
struct USoundControlBusMix_DeactivateAllMixes_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AudioModulation.SoundControlBusMix.ActivateMix
struct USoundControlBusMix_ActivateMix_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
