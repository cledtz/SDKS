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

// 0x5 (0x5 - 0x0)
// Function SR_Valet.SR_Valet_C.CanApplyHolster
struct USR_Valet_C_CanApplyHolster_Params
{
public:
	class FName                                  HolsterId;                                         // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function SR_Valet.SR_Valet_C.ReceiveBeginPlay
struct USR_Valet_C_ReceiveBeginPlay_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SR_Valet.SR_Valet_C.ReceiveEndPlay
struct USR_Valet_C_ReceiveEndPlay_Params
{
public:
	enum class EEndPlayReason                    EndPlayReason;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function SR_Valet.SR_Valet_C.On Source Played
struct USR_Valet_C_On_Source_Played_Params
{
public:
	class UStreamingRadioPlayerComponent*        Component;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FAthenaRadioStation                   AffectedSource;                                    // 0x8(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x40 (0x40 - 0x0)
// Function SR_Valet.SR_Valet_C.On Source Stopped
struct USR_Valet_C_On_Source_Stopped_Params
{
public:
	class UStreamingRadioPlayerComponent*        Component;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FAthenaRadioStation                   AffectedSource;                                    // 0x8(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xD8 (0xD8 - 0x0)
// Function SR_Valet.SR_Valet_C.ExecuteUbergraph_SR_Valet
struct USR_Valet_C_ExecuteUbergraph_SR_Valet_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_96C7[0x4];                                     // Fixing Size After Last Property..
	class UMusicEventSubsystem*                  CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortAudioAnalysisSubsystem*           CallFunc_GetWorldSubsystem_ReturnValue;            // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortAudioAnalysisSubsystem*           CallFunc_GetWorldSubsystem_ReturnValue_1;          // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EEndPlayReason                    K2Node_Event_EndPlayReason;                        // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_96C8[0x7];                                     // Fixing Size After Last Property..
	class UStreamingRadioPlayerComponent*        K2Node_CustomEvent_Component_1;                    // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FAthenaRadioStation                   K2Node_CustomEvent_AffectedSource_1;               // 0x30(0x38)()
	class UStreamingRadioPlayerComponent*        K2Node_CustomEvent_Component;                      // 0x68(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FAthenaRadioStation                   K2Node_CustomEvent_AffectedSource;                 // 0x70(0x38)()
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xA8(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0xB4(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_96C9[0x7];                                     // Fixing Size After Last Property..
	class UMusicEventSubsystem*                  CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0xC8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMusicEventSubsystem*                  CallFunc_GetGameInstanceSubsystem_ReturnValue_2;   // 0xD0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
