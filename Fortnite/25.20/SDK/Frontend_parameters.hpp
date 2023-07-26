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

// 0x31 (0x31 - 0x0)
// Function Frontend.Frontend_C.PlaySpeech
struct AFrontend_C_PlaySpeech_Params
{
public:
	class FString                                Filename;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                        SampleRate;                                        // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9DB3[0x4];                                     // Fixing Size After Last Property..
	class USoundWave*                            AssetFile;                                         // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerControllerFrontEnd*         K2Node_DynamicCast_AsFort_Player_Controller_Front_End; // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Frontend.Frontend_C.OnMatchStarted
struct AFrontend_C_OnMatchStarted_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Frontend.Frontend_C.EnableTutorial
struct AFrontend_C_EnableTutorial_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function Frontend.Frontend_C.ExecuteUbergraph_Frontend
struct AFrontend_C_ExecuteUbergraph_Frontend_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
