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

// 0x0 (0x0 - 0x0)
// Function ContextTutorialIndicator.ContextTutorialIndicator_C.Finished_FBBD6B5248E73C61005758B21F90D160
struct UContextTutorialIndicator_C_Finished_FBBD6B5248E73C61005758B21F90D160_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ContextTutorialIndicator.ContextTutorialIndicator_C.Finished_191D6D204EA6EF5125923CB749C84A4A
struct UContextTutorialIndicator_C_Finished_191D6D204EA6EF5125923CB749C84A4A_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ContextTutorialIndicator.ContextTutorialIndicator_C.Finished_5FDAD1724A4ABC34EC3B7F9D90839344
struct UContextTutorialIndicator_C_Finished_5FDAD1724A4ABC34EC3B7F9D90839344_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ContextTutorialIndicator.ContextTutorialIndicator_C.Finished_6F1BBAF94537A4D7945ED5A452FC1188
struct UContextTutorialIndicator_C_Finished_6F1BBAF94537A4D7945ED5A452FC1188_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ContextTutorialIndicator.ContextTutorialIndicator_C.PlayOutAnimation
struct UContextTutorialIndicator_C_PlayOutAnimation_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ContextTutorialIndicator.ContextTutorialIndicator_C.Construct
struct UContextTutorialIndicator_C_Construct_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function ContextTutorialIndicator.ContextTutorialIndicator_C.SetIndicatorText
struct UContextTutorialIndicator_C_SetIndicatorText_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function ContextTutorialIndicator.ContextTutorialIndicator_C.PlayBounceAnimation
struct UContextTutorialIndicator_C_PlayBounceAnimation_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ContextTutorialIndicator.ContextTutorialIndicator_C.PlayInAnimation
struct UContextTutorialIndicator_C_PlayInAnimation_Params
{
public:
};

// 0xE0 (0xE0 - 0x0)
// Function ContextTutorialIndicator.ContextTutorialIndicator_C.ExecuteUbergraph_ContextTutorialIndicator
struct UContextTutorialIndicator_C_ExecuteUbergraph_ContextTutorialIndicator_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x10(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x1C(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAnimationPlaying_ReturnValue;           // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_87A6[0x7];                                     // Fixing Size After Last Property
	class FText                                  K2Node_Event_Text;                                 // 0x30(0x18)(ConstParm)
	class UUMGSequencePlayer*                    CallFunc_CreatePlayAnimationProxyObject_Result;    // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*     CallFunc_CreatePlayAnimationProxyObject_ReturnValue; // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_87A9[0x7];                                     // Fixing Size After Last Property
	class UUMGSequencePlayer*                    CallFunc_CreatePlayAnimationProxyObject_Result_1;  // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*     CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1; // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_87AA[0x2];                                     // Fixing Size After Last Property
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x74(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_CreatePlayAnimationProxyObject_Result_2;  // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*     CallFunc_CreatePlayAnimationProxyObject_ReturnValue_2; // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_87AB[0x7];                                     // Fixing Size After Last Property
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_CreatePlayAnimationProxyObject_Result_3;  // 0xA0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*     CallFunc_CreatePlayAnimationProxyObject_ReturnValue_3; // 0xA8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0xB0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_87AC[0x7];                                     // Fixing Size After Last Property
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_2;              // 0xC0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_3;              // 0xC8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAnimationPlaying_ReturnValue_1;         // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_87AD[0x7];                                     // Fixing Size After Last Property
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_4;              // 0xD8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
