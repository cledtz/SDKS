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

// 0x8 (0x8 - 0x0)
// Function VerseFortniteUI.VerseFortniteUIFrameworkButton_Base.ServerClick
struct UVerseFortniteUIFrameworkButton_Base_ServerClick_Params
{
public:
	class UPlayerController*                     PlayerController;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function VerseFortniteUI.VerseFortniteUIFrameworkButton_Base.OnRep_Message
struct UVerseFortniteUIFrameworkButton_Base_OnRep_Message_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function VerseFortniteUI.VerseFortniteUIFrameworkButton_Base.GetText
struct UVerseFortniteUIFrameworkButton_Base_GetText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function VerseFortniteUI.VerseFortniteUIFrameworkText_Base.ServerTextCommitted
struct UVerseFortniteUIFrameworkText_Base_ServerTextCommitted_Params
{
public:
	class UPlayerController*                     PlayerController;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  NewText;                                           // 0x8(0x18)(ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function VerseFortniteUI.VerseFortniteUIFrameworkText_Base.ExecuteServerTextCommitted
struct UVerseFortniteUIFrameworkText_Base_ExecuteServerTextCommitted_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	enum class ETextCommit                       InCommitMethod;                                    // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6BE[0x7];                                      // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function VerseFortniteUI.VerseFortniteUIFrameworkSlider.SetValue
struct UVerseFortniteUIFrameworkSlider_SetValue_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6C8[0x3];                                      // Fixing Size Of Struct
};

// 0x4 (0x4 - 0x0)
// Function VerseFortniteUI.VerseFortniteUIFrameworkSlider.SetStepSize
struct UVerseFortniteUIFrameworkSlider_SetStepSize_Params
{
public:
	float                                        InMinValue;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function VerseFortniteUI.VerseFortniteUIFrameworkSlider.SetMinValue
struct UVerseFortniteUIFrameworkSlider_SetMinValue_Params
{
public:
	float                                        InMinValue;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function VerseFortniteUI.VerseFortniteUIFrameworkSlider.SetMaxValue
struct UVerseFortniteUIFrameworkSlider_SetMaxValue_Params
{
public:
	float                                        InMaxValue;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function VerseFortniteUI.VerseFortniteUIFrameworkSlider.ServerValueChanged
struct UVerseFortniteUIFrameworkSlider_ServerValueChanged_Params
{
public:
	class UPlayerController*                     PlayerController;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InNewValue;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InClientID;                                        // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InServerID;                                        // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6D8[0x4];                                      // Fixing Size Of Struct
};

// 0x0 (0x0 - 0x0)
// Function VerseFortniteUI.VerseFortniteUIFrameworkSlider.OnRep_Value
struct UVerseFortniteUIFrameworkSlider_OnRep_Value_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseFortniteUI.VerseFortniteUIFrameworkSlider.OnRep_StepSize
struct UVerseFortniteUIFrameworkSlider_OnRep_StepSize_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseFortniteUI.VerseFortniteUIFrameworkSlider.OnRep_MinValue
struct UVerseFortniteUIFrameworkSlider_OnRep_MinValue_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseFortniteUI.VerseFortniteUIFrameworkSlider.OnRep_MaxValue
struct UVerseFortniteUIFrameworkSlider_OnRep_MaxValue_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function VerseFortniteUI.VerseFortniteUIFrameworkSlider.HandleValueChanged
struct UVerseFortniteUIFrameworkSlider_HandleValueChanged_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function VerseFortniteUI.VerseFortniteUIFrameworkSlider.GetValue
struct UVerseFortniteUIFrameworkSlider_GetValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function VerseFortniteUI.VerseFortniteUIFrameworkSlider.GetStepSize
struct UVerseFortniteUIFrameworkSlider_GetStepSize_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function VerseFortniteUI.VerseFortniteUIFrameworkSlider.GetMinValue
struct UVerseFortniteUIFrameworkSlider_GetMinValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function VerseFortniteUI.VerseFortniteUIFrameworkSlider.GetMaxValue
struct UVerseFortniteUIFrameworkSlider_GetMaxValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function VerseFortniteUI.VerseFortniteUIFrameworkSlider.ExecuteServerValueChanged
struct UVerseFortniteUIFrameworkSlider_ExecuteServerValueChanged_Params
{
public:
	float                                        InNewValue;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InClientID;                                        // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InServerID;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


