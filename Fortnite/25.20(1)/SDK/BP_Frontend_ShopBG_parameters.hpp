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

// 0x8 (0x8 - 0x0)
// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.SetDynamicBG
struct UBP_Frontend_ShopBG_C_SetDynamicBG_Params
{
public:
	class UTexture*                              InTexture;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.EnableDynamicShopBG
struct UBP_Frontend_ShopBG_C_EnableDynamicShopBG_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.ReceiveBeginPlay
struct UBP_Frontend_ShopBG_C_ReceiveBeginPlay_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.SetDynamicEnvironmentEvent
struct UBP_Frontend_ShopBG_C_SetDynamicEnvironmentEvent_Params
{
public:
	class FString                                InPresetEnvName;                                   // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.DebugShopBG
struct UBP_Frontend_ShopBG_C_DebugShopBG_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.HandleRequestHide
struct UBP_Frontend_ShopBG_C_HandleRequestHide_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.HandleItemShopEntered
struct UBP_Frontend_ShopBG_C_HandleItemShopEntered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.HandleStoreEntered
struct UBP_Frontend_ShopBG_C_HandleStoreEntered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.ResetDonut
struct UBP_Frontend_ShopBG_C_ResetDonut_Params
{
public:
};

// 0x9E (0x9E - 0x0)
// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.ExecuteUbergraph_BP_Frontend_ShopBG
struct UBP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_81CB[0x4];                                     // Fixing Size After Last Property..
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_InPresetEnvName;                // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_81CC[0x7];                                     // Fixing Size After Last Property..
	TArray<class UCMSLobbyDirector_C*>           CallFunc_GetAllActorsOfClass_OutActors;            // 0x28(0x10)(ReferenceParm)
	class UCMSLobbyDirector_C*                   CallFunc_Array_Get_Item;                           // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x45(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_81CD[0x2];                                     // Fixing Size After Last Property..
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchString_CmpSuccess_1;                  // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_81CE[0x7];                                     // Fixing Size After Last Property..
	TArray<class UActor*>                        CallFunc_GetAllActorsWithTag_OutActors;            // 0x58(0x10)(ReferenceParm)
	class UActor*                                CallFunc_Array_Get_Item_1;                         // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_81CF[0x3];                                     // Fixing Size After Last Property..
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue_1; // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture*                              K2Node_CustomEvent_InTexture;                      // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchString_CmpSuccess_2;                  // 0x8A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x8B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x8C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetHasDonutShopSequenceBeenSeen_ReturnValue; // 0x8D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x8E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_81D0[0x1];                                     // Fixing Size After Last Property..
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue_2; // 0x90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_7;                    // 0x9A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_8;                    // 0x9B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetHasDonutShopSequenceBeenSeen_ReturnValue_1; // 0x9C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x9D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
