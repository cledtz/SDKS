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

// 0x0 (0x0 - 0x0)
// Function MPItemShop_VaultWorld.MPItemShop_VaultWorld_C.StopTransitions
struct UMPItemShop_VaultWorld_C_StopTransitions_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function MPItemShop_VaultWorld.MPItemShop_VaultWorld_C.HandleMaterialBackground
struct UMPItemShop_VaultWorld_C_HandleMaterialBackground_Params
{
public:
	class UMaterialInterface*                    MaterialBackground;                                // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Temp_object_Variable;                              // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Temp_object_Variable_1;                            // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function MPItemShop_VaultWorld.MPItemShop_VaultWorld_C.HandleTextureBackground
struct UMPItemShop_VaultWorld_C_HandleTextureBackground_Params
{
public:
	class UTexture2D*                            TextureBackground;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function MPItemShop_VaultWorld.MPItemShop_VaultWorld_C.GetBackground
struct UMPItemShop_VaultWorld_C_GetBackground_Params
{
public:
	class UFortStaticMeshActor*                  K2Node_DynamicCast_AsFort_Static_Mesh_Actor;       // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function MPItemShop_VaultWorld.MPItemShop_VaultWorld_C.AssignBackgroundMaterial
struct UMPItemShop_VaultWorld_C_AssignBackgroundMaterial_Params
{
public:
	class UMaterialInterface*                    SourceMaterial;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function MPItemShop_VaultWorld.MPItemShop_VaultWorld_C.AssignFloorMaterial
struct UMPItemShop_VaultWorld_C_AssignFloorMaterial_Params
{
public:
	class UMaterialInterface*                    SourceMaterial;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function MPItemShop_VaultWorld.MPItemShop_VaultWorld_C.TransitionBackgroundBackward
struct UMPItemShop_VaultWorld_C_TransitionBackgroundBackward_Params
{
public:
	double                                       Backward;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       FXTransitionFade;                                  // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Mid;                                               // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Lerp_ReturnValue;                         // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Lerp_ReturnValue_1;                       // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetScalarParameterValue_Value_ImplicitCast_1; // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function MPItemShop_VaultWorld.MPItemShop_VaultWorld_C.TransitionBackgroundForward
struct UMPItemShop_VaultWorld_C_TransitionBackgroundForward_Params
{
public:
	double                                       Forward;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       FXTransitionFade;                                  // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Mid;                                               // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Lerp_ReturnValue;                         // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Lerp_ReturnValue_1;                       // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetScalarParameterValue_Value_ImplicitCast_1; // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x69 (0x69 - 0x0)
// Function MPItemShop_VaultWorld.MPItemShop_VaultWorld_C.SetupBackgroundMaterial
struct UMPItemShop_VaultWorld_C_SetupBackgroundMaterial_Params
{
public:
	class UTexture2D*                            TextureBackground;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Mid;                                               // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFloor;                                           // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FirstTimeSetup;                                    // 0x11(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6EF1[0x1];                                     // Fixing Size After Last Property 
	class FName                                  Temp_name_Variable;                                // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_1;                              // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6EF2[0x3];                                     // Fixing Size After Last Property 
	class FName                                  Temp_name_Variable_2;                              // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_3;                              // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6EF3[0x3];                                     // Fixing Size After Last Property 
	class FName                                  Temp_name_Variable_4;                              // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_5;                              // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6EF4[0x3];                                     // Fixing Size After Last Property 
	float                                        Temp_real_Variable;                                // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_real_Variable_1;                              // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_6;                              // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Select_Default;                             // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6EF5[0x3];                                     // Fixing Size After Last Property 
	class FName                                  K2Node_Select_Default_1;                           // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6EF6[0x3];                                     // Fixing Size After Last Property 
	class FName                                  Temp_name_Variable_7;                              // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_Select_Default_2;                           // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_Select_Default_3;                           // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_4;                              // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6EF7[0x3];                                     // Fixing Size After Last Property 
	class FName                                  K2Node_Select_Default_4;                           // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function MPItemShop_VaultWorld.MPItemShop_VaultWorld_C.UserConstructionScript
struct UMPItemShop_VaultWorld_C_UserConstructionScript_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MPItemShop_VaultWorld.MPItemShop_VaultWorld_C.TransitionForward__FinishedFunc
struct UMPItemShop_VaultWorld_C_TransitionForward__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MPItemShop_VaultWorld.MPItemShop_VaultWorld_C.TransitionForward__UpdateFunc
struct UMPItemShop_VaultWorld_C_TransitionForward__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MPItemShop_VaultWorld.MPItemShop_VaultWorld_C.FloorVisibility__FinishedFunc
struct UMPItemShop_VaultWorld_C_FloorVisibility__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MPItemShop_VaultWorld.MPItemShop_VaultWorld_C.FloorVisibility__UpdateFunc
struct UMPItemShop_VaultWorld_C_FloorVisibility__UpdateFunc_Params
{
public:
};

// 0x2 (0x2 - 0x0)
// Function MPItemShop_VaultWorld.MPItemShop_VaultWorld_C.OnTransitionBackground
struct UMPItemShop_VaultWorld_C_OnTransitionBackground_Params
{
public:
	bool                                         bPlayForward;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBackgroundIntensityLevel         IntensityTransition;                               // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function MPItemShop_VaultWorld.MPItemShop_VaultWorld_C.ReceiveBeginPlay
struct UMPItemShop_VaultWorld_C_ReceiveBeginPlay_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MPItemShop_VaultWorld.MPItemShop_VaultWorld_C.OnInitialBackgroundTransition
struct UMPItemShop_VaultWorld_C_OnInitialBackgroundTransition_Params
{
public:
};

// 0x60 (0x60 - 0x0)
// Function MPItemShop_VaultWorld.MPItemShop_VaultWorld_C.OnSetupTextureBackground
struct UMPItemShop_VaultWorld_C_OnSetupTextureBackground_Params
{
public:
	class UTexture2D*                            LoadedBackgroundTexture;                           // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVaultWorldBackgroundData             BackgroundInfo;                                    // 0x8(0x58)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x60 (0x60 - 0x0)
// Function MPItemShop_VaultWorld.MPItemShop_VaultWorld_C.OnSetupMaterialBackground
struct UMPItemShop_VaultWorld_C_OnSetupMaterialBackground_Params
{
public:
	class UMaterialInterface*                    LoadedBackgroundMaterial;                          // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVaultWorldBackgroundData             BackgroundInfo;                                    // 0x8(0x58)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x2 (0x2 - 0x0)
// Function MPItemShop_VaultWorld.MPItemShop_VaultWorld_C.OnUpdateDisplay
struct UMPItemShop_VaultWorld_C_OnUpdateDisplay_Params
{
public:
	bool                                         bShowFloor;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bShowEffects;                                      // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10C (0x10C - 0x0)
// Function MPItemShop_VaultWorld.MPItemShop_VaultWorld_C.ExecuteUbergraph_MPItemShop_VaultWorld
struct UMPItemShop_VaultWorld_C_ExecuteUbergraph_MPItemShop_VaultWorld_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F1E[0x4];                                     // Fixing Size After Last Property 
	double                                       CallFunc_Lerp_ReturnValue;                         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bPlayForward;                         // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBackgroundIntensityLevel         K2Node_Event_IntensityTransition;                  // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F1F[0x4];                                     // Fixing Size After Last Property 
	class UTexture2D*                            K2Node_Event_LoadedBackgroundTexture;              // 0x18(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVaultWorldBackgroundData             K2Node_Event_BackgroundInfo_1;                     // 0x20(0x58)(ConstParm)
	class UMaterialInterface*                    K2Node_Event_LoadedBackgroundMaterial;             // 0x78(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVaultWorldBackgroundData             K2Node_Event_BackgroundInfo;                       // 0x80(0x58)(ConstParm)
	bool                                         K2Node_Event_bShowFloor;                           // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bShowEffects;                         // 0xD9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F20[0x6];                                     // Fixing Size After Last Property 
	double                                       CallFunc_TransitionBackgroundForward_FXTransitionFade_ImplicitCast; // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_TransitionBackgroundForward_FXTransitionFade_ImplicitCast_1; // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_TransitionBackgroundForward_Forward_ImplicitCast; // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_TransitionBackgroundForward_Forward_ImplicitCast_1; // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Lerp_Alpha_ImplicitCast;                  // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


