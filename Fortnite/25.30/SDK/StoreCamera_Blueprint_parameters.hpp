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

// 0x60 (0x60 - 0x0)
// Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.UserConstructionScript
struct UStoreCamera_Blueprint_C_UserConstructionScript_Params
{
public:
	struct FRotator                              CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_K2_GetComponentRotation_ReturnValue_1;    // 0x18(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x30(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x48(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.Timeline_0__FinishedFunc
struct UStoreCamera_Blueprint_C_Timeline_0__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.Timeline_0__UpdateFunc
struct UStoreCamera_Blueprint_C_Timeline_0__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.ChoicePack__FinishedFunc
struct UStoreCamera_Blueprint_C_ChoicePack__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.ChoicePack__UpdateFunc
struct UStoreCamera_Blueprint_C_ChoicePack__UpdateFunc_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.BP_OnActivated
struct UStoreCamera_Blueprint_C_BP_OnActivated_Params
{
public:
	class UFortPlayerController*                 PlayerController;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.BP_OnDeactivated
struct UStoreCamera_Blueprint_C_BP_OnDeactivated_Params
{
public:
	class UFortPlayerController*                 PlayerController;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.OpeningCameraTransition
struct UStoreCamera_Blueprint_C_OpeningCameraTransition_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.ResetCamera
struct UStoreCamera_Blueprint_C_ResetCamera_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.DarkenBGVisibility
struct UStoreCamera_Blueprint_C_DarkenBGVisibility_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.ChoicePackFOV-Out
struct UStoreCamera_Blueprint_C_ChoicePackFOV_Out_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.ChoicePackFOV-In
struct UStoreCamera_Blueprint_C_ChoicePackFOV_In_Params
{
public:
};

// 0x204 (0x204 - 0x0)
// Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.ExecuteUbergraph_StoreCamera_Blueprint
struct UStoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_961[0x4];                                      // Fixing Size After Last Property
	TScriptInterface<class UFortTimeOfDayManagerInterface> CallFunc_GetContextualTimeOfDayManager_ReturnValue; // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	double                                       CallFunc_Lerp_ReturnValue;                         // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_962[0x4];                                      // Fixing Size After Last Property
	class UFortPlayerController*                 K2Node_Event_PlayerController_1;                   // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortPlayerController*                 K2Node_Event_PlayerController;                     // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Lerp_ReturnValue_1;                       // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_RLerp_ReturnValue;                        // 0x48(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_VLerp_ReturnValue;                        // 0x60(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetActorLocationAndRotation_SweepHitResult; // 0x78(0xE0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_K2_SetActorLocationAndRotation_ReturnValue; // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_963[0x3];                                      // Fixing Size After Last Property
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x15C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Enable;                         // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_964[0x7];                                      // Fixing Size After Last Property
	TArray<class UStorePinataMaster_Parent_C*>   CallFunc_GetAllActorsOfClass_OutActors;            // 0x168(0x10)(ReferenceParm)
	class UStorePinataMaster_Parent_C*           CallFunc_Array_Get_Item;                           // 0x178(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x180(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_965[0x4];                                      // Fixing Size After Last Property
	TArray<class UStoreCardReveal_Parent_C*>     CallFunc_GetAllActorsOfClass_OutActors_1;          // 0x188(0x10)(ReferenceParm)
	class UStoreCardReveal_Parent_C*             CallFunc_Array_Get_Item_1;                         // 0x198(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x1A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1A5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1A6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_966[0x1];                                      // Fixing Size After Last Property
	TArray<class UTVPostProcessBP_C*>            CallFunc_GetAllActorsOfClass_OutActors_2;          // 0x1A8(0x10)(ReferenceParm)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x1B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x1BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x1C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_96A[0x3];                                      // Fixing Size After Last Property
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x1C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x1C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x1CC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_96C[0x3];                                      // Fixing Size After Last Property
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x1D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x1D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTVPostProcessBP_C*                    CallFunc_Array_Get_Item_2;                         // 0x1D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x1E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_97A[0x7];                                      // Fixing Size After Last Property
	double                                       CallFunc_Lerp_Alpha_ImplicitCast;                  // 0x1E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_VariableSet_FieldOfView_ImplicitCast;       // 0x1F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_97B[0x4];                                      // Fixing Size After Last Property
	double                                       CallFunc_Lerp_Alpha_ImplicitCast_1;                // 0x1F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_VariableSet_FieldOfView_ImplicitCast_1;     // 0x200(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
