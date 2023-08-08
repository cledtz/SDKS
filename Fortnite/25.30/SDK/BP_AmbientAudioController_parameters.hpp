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

// 0x10 (0x10 - 0x0)
// Function BP_AmbientAudioController.BP_AmbientAudioController_C.InitSnowCoverageComponent
struct UBP_AmbientAudioController_C_InitSnowCoverageComponent_Params
{
public:
	class UGameStateBase*                        Game_State;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortGameStateComponent_SurfaceOverride* CallFunc_GetComponentByClass_ReturnValue;          // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_AmbientAudioController.BP_AmbientAudioController_C.OnViewTargetChanged
struct UBP_AmbientAudioController_C_OnViewTargetChanged_Params
{
public:
	class UActor*                                New_Target;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UActor*                                Prev_Target;                                       // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_AmbientAudioController.BP_AmbientAudioController_C.CacheViewTarget
struct UBP_AmbientAudioController_C_CacheViewTarget_Params
{
public:
	class UActor*                                NewViewTarget;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7630[0x7];                                     // Fixing Size After Last Property
	class UFortPlayerController*                 CallFunc_GetFirstLocalFortPlayerController_ReturnValue; // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UActor*                                CallFunc_GetViewTarget_ReturnValue;                // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x100 (0x100 - 0x0)
// Function BP_AmbientAudioController.BP_AmbientAudioController_C.RemovePlayerTags
struct UBP_AmbientAudioController_C_RemovePlayerTags_Params
{
public:
	class UActor*                                Player;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGameplayTag>                  Array;                                             // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CallFunc_Array_Get_Item;                           // 0x24(0x4)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7632[0x3];                                     // Fixing Size After Last Property
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                CallFunc_MakeGameplayCueParameters_ReturnValue;    // 0x30(0xD0)(ContainsInstancedReference)
};

// 0x100 (0x100 - 0x0)
// Function BP_AmbientAudioController.BP_AmbientAudioController_C.ApplyPlayerTags
struct UBP_AmbientAudioController_C_ApplyPlayerTags_Params
{
public:
	class UActor*                                Player;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGameplayTag>                  Tag_Array;                                         // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CallFunc_Array_Get_Item;                           // 0x24(0x4)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7634[0x3];                                     // Fixing Size After Last Property
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                CallFunc_MakeGameplayCueParameters_ReturnValue;    // 0x30(0xD0)(ContainsInstancedReference)
};

// 0x30 (0x30 - 0x0)
// Function BP_AmbientAudioController.BP_AmbientAudioController_C.UpdateSnowSetupBP
struct UBP_AmbientAudioController_C_UpdateSnowSetupBP_Params
{
public:
	class UAmbientAudioSubsystem*                CallFunc_GetWorldSubsystem_ReturnValue;            // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPhysicalSurface                  CallFunc_GetSpecialSurfaceType_ReturnValue;        // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7638[0x4];                                     // Fixing Size After Last Property
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x10(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLocationInSpecialSurface_ReturnValue;   // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7639[0x1];                                     // Fixing Size After Last Property
	float                                        CallFunc_IsLocationInSpecialSurface_Padding_ImplicitCast; // 0x2C(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_AmbientAudioController.BP_AmbientAudioController_C.OnReady_C8AC4F724844E04160BE56BEAB4A2614
struct UBP_AmbientAudioController_C_OnReady_C8AC4F724844E04160BE56BEAB4A2614_Params
{
public:
	class UGameStateBase*                        GameState;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_AmbientAudioController.BP_AmbientAudioController_C.On Room Size Changed
struct UBP_AmbientAudioController_C_On_Room_Size_Changed_Params
{
public:
	struct FGameplayTag                          Curr;                                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Prev;                                              // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BP_AmbientAudioController.BP_AmbientAudioController_C.On Room State Changed
struct UBP_AmbientAudioController_C_On_Room_State_Changed_Params
{
public:
	uint8                                        Curr;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Prev;                                              // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BP_AmbientAudioController.BP_AmbientAudioController_C.Update Interior Audio Verb
struct UBP_AmbientAudioController_C_Update_Interior_Audio_Verb_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_AmbientAudioController.BP_AmbientAudioController_C.Update
struct UBP_AmbientAudioController_C_Update_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_AmbientAudioController.BP_AmbientAudioController_C.ReceiveBeginPlay
struct UBP_AmbientAudioController_C_ReceiveBeginPlay_Params
{
public:
};

// 0x78 (0x78 - 0x0)
// Function BP_AmbientAudioController.BP_AmbientAudioController_C.ExecuteUbergraph_BP_AmbientAudioController
struct UBP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7640[0x4];                                     // Fixing Size After Last Property
	class UGameStateBase*                        K2Node_CustomEvent_GameState;                      // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGameStateBase*                        Temp_object_Variable;                              // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortAsyncAction_GameStateReady*       CallFunc_GameStateReadyAsync_ReturnValue;          // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7641[0x3];                                     // Fixing Size After Last Property
	struct FGameplayTag                          K2Node_CustomEvent_Curr_1;                         // 0x24(0x4)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          K2Node_CustomEvent_Prev_1;                         // 0x28(0x4)(NoDestructor, HasGetValueTypeHash)
	uint8                                        K2Node_CustomEvent_Curr;                           // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        K2Node_CustomEvent_Prev;                           // 0x2D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7642[0x2];                                     // Fixing Size After Last Property
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x30(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x3C(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x48(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7643[0x7];                                     // Fixing Size After Last Property
	class FString                                CallFunc_GetCurrentLevelName_ReturnValue;          // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UAmbientAudioSubsystem*                CallFunc_GetWorldSubsystem_ReturnValue;            // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7644[0x3];                                     // Fixing Size After Last Property
	float                                        CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
