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

// 0x2A8 (0x2A8 - 0x0)
// Function ProgressModalWidget.ProgressModalWidget_C.OnAnalogValueChanged
struct UProgressModalWidget_C_OnAnalogValueChanged_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FAnalogInputEvent                     InAnalogInputEvent;                                // 0x38(0x48)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                           ReturnValue;                                       // 0x80(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x138(0xB8)()
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x1F0(0xB8)()
};

// 0x0 (0x0 - 0x0)
// Function ProgressModalWidget.ProgressModalWidget_C.Construct
struct UProgressModalWidget_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ProgressModalWidget.ProgressModalWidget_C.HandleIntroEnded
struct UProgressModalWidget_C_HandleIntroEnded_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ProgressModalWidget.ProgressModalWidget_C.HandleOutroEnded
struct UProgressModalWidget_C_HandleOutroEnded_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ProgressModalWidget.ProgressModalWidget_C.OnBeginIntro
struct UProgressModalWidget_C_OnBeginIntro_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ProgressModalWidget.ProgressModalWidget_C.OnBeginOutro
struct UProgressModalWidget_C_OnBeginOutro_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ProgressModalWidget.ProgressModalWidget_C.Destruct
struct UProgressModalWidget_C_Destruct_Params
{
public:
};

// 0x34 (0x34 - 0x0)
// Function ProgressModalWidget.ProgressModalWidget_C.ExecuteUbergraph_ProgressModalWidget
struct UProgressModalWidget_C_ExecuteUbergraph_ProgressModalWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x10(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x1C(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x28(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
