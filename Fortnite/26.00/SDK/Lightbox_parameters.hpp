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

// 0x1 (0x1 - 0x0)
// Function Lightbox.Lightbox_C.RemoveContent
struct ULightbox_C_RemoveContent_Params
{
public:
	bool                                         CallFunc_HasAnyChildren_ReturnValue;               // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function Lightbox.Lightbox_C.AddContent
struct ULightbox_C_AddContent_Params
{
public:
	class UCommonUserWidget*                     Content;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Lightbox.Lightbox_C.Outro
struct ULightbox_C_Outro_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Lightbox.Lightbox_C.Intro
struct ULightbox_C_Intro_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Lightbox.Lightbox_C.Destruct
struct ULightbox_C_Destruct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Lightbox.Lightbox_C.Construct
struct ULightbox_C_Construct_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function Lightbox.Lightbox_C.PreConstruct
struct ULightbox_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Lightbox.Lightbox_C.WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_0
struct ULightbox_C_WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_0_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Lightbox.Lightbox_C.WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1
struct ULightbox_C_WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function Lightbox.Lightbox_C.ExecuteUbergraph_Lightbox
struct ULightbox_C_ExecuteUbergraph_Lightbox_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8829[0x3];                                     // Fixing Size After Last Property 
	struct FLinearColor                          CallFunc_MakeColor_ReturnValue;                    // 0xC(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MakeColor_A_ImplicitCast;                 // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Lightbox.Lightbox_C.OutroEnded__DelegateSignature
struct ULightbox_C_OutroEnded__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Lightbox.Lightbox_C.IntroEnded__DelegateSignature
struct ULightbox_C_IntroEnded__DelegateSignature_Params
{
public:
};

}
}


