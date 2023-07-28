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

// 0x1A (0x1A - 0x0)
// Function BP_BannerEditorTile.BP_BannerEditorTile_C.Mark Item As Seen
struct UBP_BannerEditorTile_C_Mark_Item_As_Seen_Params
{
public:
	bool                                         bAlreadySeen;                                      // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9AFF[0x7];                                     // Fixing Size After Last Property..
	class UObject*                               CallFunc_GetListItemObject_ReturnValue;            // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortAccountItem*                      K2Node_DynamicCast_AsFort_Account_Item;            // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasBeenSeenLocally_ReturnValue;           // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x13 (0x13 - 0x0)
// Function BP_BannerEditorTile.BP_BannerEditorTile_C.Update Bang State
struct UBP_BannerEditorTile_C_Update_Bang_State_Params
{
public:
	class UObject*                               CallFunc_GetListItemObject_ReturnValue;            // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortAccountItem*                      K2Node_DynamicCast_AsFort_Account_Item;            // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasBeenSeenLocally_ReturnValue;           // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_BannerEditorTile.BP_BannerEditorTile_C.OnListItemObjectSet
struct UBP_BannerEditorTile_C_OnListItemObjectSet_Params
{
public:
	class UObject*                               ListItemObject;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BP_BannerEditorTile.BP_BannerEditorTile_C.Construct
struct UBP_BannerEditorTile_C_Construct_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function BP_BannerEditorTile.BP_BannerEditorTile_C.HandleBannerIconLoadGuardFinished
struct UBP_BannerEditorTile_C_HandleBannerIconLoadGuardFinished_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BP_BannerEditorTile.BP_BannerEditorTile_C.BP_OnSelected
struct UBP_BannerEditorTile_C_BP_OnSelected_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_BannerEditorTile.BP_BannerEditorTile_C.BP_OnHovered
struct UBP_BannerEditorTile_C_BP_OnHovered_Params
{
public:
};

// 0xE8 (0xE8 - 0x0)
// Function BP_BannerEditorTile.BP_BannerEditorTile_C.ExecuteUbergraph_BP_BannerEditorTile
struct UBP_BannerEditorTile_C_ExecuteUbergraph_BP_BannerEditorTile_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9B00[0x4];                                     // Fixing Size After Last Property..
	class UObject*                               CallFunc_GetListItemObject_ReturnValue;            // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortHomebaseBannerColorItem*          K2Node_DynamicCast_AsFort_Homebase_Banner_Color_Item; // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9B01[0x7];                                     // Fixing Size After Last Property..
	class UFortHomebaseBannerIconItem*           K2Node_DynamicCast_AsFort_Homebase_Banner_Icon_Item; // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9B02[0x7];                                     // Fixing Size After Last Property..
	class UObject*                               CallFunc_GetListItemObject_ReturnValue_1;          // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortHomebaseBannerIconItem*           K2Node_DynamicCast_AsFort_Homebase_Banner_Icon_Item_1; // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9B03[0x7];                                     // Fixing Size After Last Property..
	TSoftObjectPtr<class UTexture2D>             CallFunc_GetBannerSmallIconAsset_ReturnValue;      // 0x48(0x28)(UObjectWrapper, HasGetValueTypeHash)
	class UObject*                               K2Node_CustomEvent_Object;                         // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x78(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9B04[0x4];                                     // Fixing Size After Last Property..
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D;                   // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9B05[0x7];                                     // Fixing Size After Last Property..
	class UObject*                               CallFunc_GetListItemObject_ReturnValue_2;          // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortHomebaseBannerColorItem*          K2Node_DynamicCast_AsFort_Homebase_Banner_Color_Item_1; // 0xA0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9B06[0x3];                                     // Fixing Size After Last Property..
	struct FLinearColor                          CallFunc_GetBannerColorSecondaryColor_ReturnValue; // 0xAC(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetBannerColorPrimaryColor_ReturnValue;   // 0xBC(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9B07[0x4];                                     // Fixing Size After Last Property..
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0xD0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9B08[0x7];                                     // Fixing Size After Last Property..
	class UObject*                               K2Node_Event_ListItemObject;                       // 0xE0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BP_BannerEditorTile.BP_BannerEditorTile_C.BannerTileBangUpdated__DelegateSignature
struct UBP_BannerEditorTile_C_BannerTileBangUpdated__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
