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

// 0x8 (0x8 - 0x0)
// Function TabAudioOptions_New.TabAudioOptions_New_C.SettingValueChanged
struct UTabAudioOptions_New_C_SettingValueChanged_Params
{
public:
	double                                       Value;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function TabAudioOptions_New.TabAudioOptions_New_C.CenterOnTab
struct UTabAudioOptions_New_C_CenterOnTab_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function TabAudioOptions_New.TabAudioOptions_New_C.ExecuteUbergraph_TabAudioOptions_New
struct UTabAudioOptions_New_C_ExecuteUbergraph_TabAudioOptions_New_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9B1C[0x4];                                     // Fixing Size After Last Property..
	double                                       K2Node_CustomEvent_Value;                          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
