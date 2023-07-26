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

// 0x13 (0x13 - 0x0)
// Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.IsMinorShutdownWarningEnabled
struct UCampaignPurchaseScreen_C_IsMinorShutdownWarningEnabled_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CFC[0x7];                                     // Fixing Size After Last Property..
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EFortUIFeatureState               CallFunc_GetFeatureState_OutFeatureState;          // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortUIFeatureStateReason         CallFunc_GetFeatureState_OutReason;                // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.InitializeRedeemButton
struct UCampaignPurchaseScreen_C_InitializeRedeemButton_Params
{
public:
};

// 0x11 (0x11 - 0x0)
// Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.IsBusyMatchmaking
struct UCampaignPurchaseScreen_C_IsBusyMatchmaking_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CFD[0x7];                                     // Fixing Size After Last Property..
	class UFortMatchmakingContext*               CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMatchmakingLocal_ReturnValue;           // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.Update
struct UCampaignPurchaseScreen_C_Update_Params
{
public:
};

// 0x28 (0x28 - 0x0)
// Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.AdvanceTextureCycle
struct UCampaignPurchaseScreen_C_AdvanceTextureCycle_Params
{
public:
	int32                                        NextTextureIndex;                                  // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentTextureIndex;                               // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CFE[0x4];                                     // Fixing Size After Last Property..
	class UTexture*                              CallFunc_Array_Get_Item;                           // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture*                              CallFunc_Array_Get_Item_1;                         // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CFF[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.InitializeTextureCycle
struct UCampaignPurchaseScreen_C_InitializeTextureCycle_Params
{
public:
	class UTexture*                              CallFunc_Array_Get_Item;                           // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D00[0x4];                                     // Fixing Size After Last Property..
	class UTexture*                              CallFunc_Array_Get_Item_1;                         // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.ToggleTimer
struct UCampaignPurchaseScreen_C_ToggleTimer_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D01[0x3];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x10(0x8)(NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.BndEvt__ButtonBack_K2Node_ComponentBoundEvent_128_CommonButtonClicked__DelegateSignature
struct UCampaignPurchaseScreen_C_BndEvt__ButtonBack_K2Node_ComponentBoundEvent_128_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButtonLegacy*                   Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.Construct
struct UCampaignPurchaseScreen_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.BP_OnActivated
struct UCampaignPurchaseScreen_C_BP_OnActivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.OnImageCycleTimeElapsed
struct UCampaignPurchaseScreen_C_OnImageCycleTimeElapsed_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.OnStoreScreenCreated
struct UCampaignPurchaseScreen_C_OnStoreScreenCreated_Params
{
public:
	class UFortMtxStoreRootBase_Legacy*          StoreScreen;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.ExecuteUbergraph_CampaignPurchaseScreen
struct UCampaignPurchaseScreen_C_ExecuteUbergraph_CampaignPurchaseScreen_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D02[0x4];                                     // Fixing Size After Last Property..
	class UFortMtxStoreRootBase_Legacy*          K2Node_Event_StoreScreen;                          // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonLegacy*                   K2Node_ComponentBoundEvent_Button;                 // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UStoreMain_Root_Legacy_C*              K2Node_DynamicCast_AsStore_Main_Root_Legacy;       // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D03[0x7];                                     // Fixing Size After Last Property..
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_2;              // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue;                   // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
