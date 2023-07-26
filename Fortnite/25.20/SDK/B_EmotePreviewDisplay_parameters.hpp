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

// 0x2D (0x2D - 0x0)
// Function B_EmotePreviewDisplay.B_EmotePreviewDisplay_C.CleanupDynamicSounds
struct AB_EmotePreviewDisplay_C_CleanupDynamicSounds_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       CallFunc_Array_Get_Item;                           // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9C82[0x3];                                     // Fixing Size After Last Property..
	class UAudioComponent*                       CallFunc_Array_Get_Item_1;                         // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function B_EmotePreviewDisplay.B_EmotePreviewDisplay_C.ApplyEmoteToPet
struct AB_EmotePreviewDisplay_C_ApplyEmoteToPet_Params
{
public:
	bool                                         IsRemoval;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9C83[0x7];                                     // Fixing Size After Last Property..
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9C84[0x7];                                     // Fixing Size After Last Property..
	class AFortPlayerPawn*                       CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue; // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9C85[0x6];                                     // Fixing Size After Last Property..
	class UAnimInstance*                         CallFunc_GetAnimInstance_ReturnValue;              // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortPetAnimInstance*                  K2Node_DynamicCast_AsFort_Pet_Anim_Instance;       // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function B_EmotePreviewDisplay.B_EmotePreviewDisplay_C.OnLoaded_638F148342254A777E929B88915A8958
struct AB_EmotePreviewDisplay_C_OnLoaded_638F148342254A777E929B88915A8958_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function B_EmotePreviewDisplay.B_EmotePreviewDisplay_C.PreviewEmote
struct AB_EmotePreviewDisplay_C_PreviewEmote_Params
{
public:
	class UFortMontageItemDefinitionBase*        Emote;                                             // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function B_EmotePreviewDisplay.B_EmotePreviewDisplay_C.PerformSpecialAction
struct AB_EmotePreviewDisplay_C_PerformSpecialAction_Params
{
public:
	class FName                                  ActionName;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function B_EmotePreviewDisplay.B_EmotePreviewDisplay_C.ReceiveEndPlay
struct AB_EmotePreviewDisplay_C_ReceiveEndPlay_Params
{
public:
	enum class EEndPlayReason                    EndPlayReason;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function B_EmotePreviewDisplay.B_EmotePreviewDisplay_C.SpecialCaseShoutHandler
struct AB_EmotePreviewDisplay_C_SpecialCaseShoutHandler_Params
{
public:
};

// 0x298 (0x298 - 0x0)
// Function B_EmotePreviewDisplay.B_EmotePreviewDisplay_C.ExecuteUbergraph_B_EmotePreviewDisplay
struct AB_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9C86[0x3];                                     // Fixing Size After Last Property..
	class FName                                  K2Node_Event_ActionName;                           // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEndPlayReason                    K2Node_Event_EndPlayReason;                        // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9C87[0x3];                                     // Fixing Size After Last Property..
	class UObject*                               Temp_object_Variable;                              // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          K2Node_DynamicCast_AsAnim_Montage;                 // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9C88[0x7];                                     // Fixing Size After Last Property..
	class UFortMontageItemDefinitionBase*        K2Node_Event_Emote;                                // 0x28(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_CustomEvent_Loaded;                         // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue;                   // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x40(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9C89[0x4];                                     // Fixing Size After Last Property..
	class AFortPlayerPawn*                       CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue; // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortEmojiPreviewComponent*            CallFunc_GetComponentByClass_ReturnValue;          // 0x58(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            Temp_struct_Variable;                              // 0x60(0x60)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9C8A[0x7];                                     // Fixing Size After Last Property..
	class UFortEmojiPreviewComponent*            CallFunc_AddComponent_ReturnValue;                 // 0xC8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue_1;                 // 0xD0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue_1; // 0xD8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAthenaShoutItemDefinition*            K2Node_DynamicCast_AsAthena_Shout_Item_Definition; // 0xE0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0xE9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9C8B[0x6];                                     // Fixing Size After Last Property..
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0xF0(0x60)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x150(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x168(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x180(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                         CallFunc_GetAnimInstance_ReturnValue;              // 0x198(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x1A0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAthenaEmojiItemDefinition*            K2Node_DynamicCast_AsAthena_Emoji_Item_Definition; // 0x1A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9C8C[0x7];                                     // Fixing Size After Last Property..
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue_2;                 // 0x1B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue_2; // 0x1C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EFortCustomGender                 CallFunc_GetCharacterGender_ReturnValue;           // 0x1C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortCustomBodyType               CallFunc_GetCharacterBodyType_ReturnValue;         // 0x1C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9C8D[0x6];                                     // Fixing Size After Last Property..
	TSoftObjectPtr<class UAnimMontage>           CallFunc_GetFrontendPreviewAnimation_ReturnValue;  // 0x1D0(0x28)(UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x1F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9C8E[0x7];                                     // Fixing Size After Last Property..
	struct FTransform                            Temp_struct_Variable_1;                            // 0x200(0x60)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue_3;                 // 0x260(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       CallFunc_SpawnSoundComponent_SpawnedComponent;     // 0x268(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue_3; // 0x270(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortEmojiPreviewComponent*            CallFunc_AddComponent_ReturnValue_1;               // 0x278(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UFortEmojiPreviewComponent*            CallFunc_GetComponentByClass_ReturnValue_1;        // 0x280(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_PlayLocalAnimMontage_ReturnValue;         // 0x288(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x28C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9C8F[0x3];                                     // Fixing Size After Last Property..
	class FName                                  CallFunc_PickMontageSection_ReturnValue;           // 0x290(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x294(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function B_EmotePreviewDisplay.B_EmotePreviewDisplay_C.OnEmoteSetupFinished__DelegateSignature
struct AB_EmotePreviewDisplay_C_OnEmoteSetupFinished__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
