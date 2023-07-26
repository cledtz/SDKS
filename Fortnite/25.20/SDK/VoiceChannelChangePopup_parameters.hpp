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

// 0x0 (0x0 - 0x0)
// Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.Construct
struct UVoiceChannelChangePopup_C_Construct_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.PreConstruct
struct UVoiceChannelChangePopup_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.Popup Animation Finished
struct UVoiceChannelChangePopup_C_Popup_Animation_Finished_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.OnPlayOpenAnimation
struct UVoiceChannelChangePopup_C_OnPlayOpenAnimation_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.OnPlayCloseAnimation
struct UVoiceChannelChangePopup_C_OnPlayCloseAnimation_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.OnInputModeChanged
struct UVoiceChannelChangePopup_C_OnInputModeChanged_Params
{
public:
	enum class ECommonInputType                  NewInputType;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.ExecuteUbergraph_VoiceChannelChangePopup
struct UVoiceChannelChangePopup_C_ExecuteUbergraph_VoiceChannelChangePopup_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  Temp_byte_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9EC4[0x3];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9EC5[0x4];                                     // Fixing Size After Last Property..
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  K2Node_Event_NewInputType;                         // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9EC6[0x6];                                     // Fixing Size After Last Property..
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_2;              // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               K2Node_Select_Default;                             // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
