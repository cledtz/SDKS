#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x28 - 0x0)
// Function PinCodeButton.PinCodeButton_C.Set Pin Number
struct UPinCodeButton_C_Set_Pin_Number_Params
{
public:
	class FString                                Pin;                                               // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x10(0x18)(None)
};

// 0x0 (0x0 - 0x0)
// Function PinCodeButton.PinCodeButton_C.Construct
struct UPinCodeButton_C_Construct_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function PinCodeButton.PinCodeButton_C.PreConstruct
struct UPinCodeButton_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function PinCodeButton.PinCodeButton_C.ExecuteUbergraph_PinCodeButton
struct UPinCodeButton_C_ExecuteUbergraph_PinCodeButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


