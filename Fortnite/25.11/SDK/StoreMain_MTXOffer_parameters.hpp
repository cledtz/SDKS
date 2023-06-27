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

// 0xD0 (0xD0 - 0x0)
// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.GetBonusText
struct UStoreMain_MTXOffer_C_GetBonusText_Params
{
public:
	class UFortStoreFrontOfferInfo*              OfferInfo;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  BonusText;                                         // 0x8(0x18)(Parm, OutParm)
	int32                                        CallFunc_GetBonusQuantity_ReturnValue;             // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetBaseQuantity_ReturnValue;              // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9922[0x4];                                     // Fixing Size After Last Property..
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue;              // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x58(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xA8(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xB8(0x18)()
};

// 0x30 (0x30 - 0x0)
// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.SetTextOutlineColor
struct UStoreMain_MTXOffer_C_SetTextOutlineColor_Params
{
public:
	class UTextBlock*                            Text;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FFortMtxGradient                      Gradient;                                          // 0x8(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicOutlineMaterial_ReturnValue;    // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x68 (0x68 - 0x0)
// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.SetTileSize
struct UStoreMain_MTXOffer_C_SetTileSize_Params
{
public:
	enum class EFortMtxOfferDisplaySize          DisplaySize;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9923[0x6];                                     // Fixing Size After Last Property..
	struct FSlateFontInfo                        K2Node_MakeStruct_SlateFontInfo;                   // 0x8(0x58)(HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.TriggerReset
struct UStoreMain_MTXOffer_C_TriggerReset_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.InitialReset
struct UStoreMain_MTXOffer_C_InitialReset_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.TriggerIntro
struct UStoreMain_MTXOffer_C_TriggerIntro_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x228 (0x228 - 0x0)
// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.InitOffer
struct UStoreMain_MTXOffer_C_InitOffer_Params
{
public:
	class UFortMtxOfferData*                     DisplayAsset;                                      // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FFortMtxGradient                      Gradient;                                          // 0x8(0x20)(Edit, BlueprintVisible, NoDestructor)
	int32                                        TotalQuantity;                                     // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        BonusQuantity;                                     // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortStoreFrontOfferInfo*              OfferInfo;                                         // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  BonusMTX;                                          // 0x38(0x18)(Edit, BlueprintVisible)
	class FText                                  BaseMtx;                                           // 0x50(0x18)(Edit, BlueprintVisible)
	class UMaterial*                             OfferMaterial;                                     // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x72(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x73(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x75(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_4;                              // 0x76(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9924[0x1];                                     // Fixing Size After Last Property..
	class UFortRuntimeOptions*                   CallFunc_GetRuntimeOptions_ReturnValue;            // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetBannerOverrideTag_ReturnValue;         // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetSalePriceFromLastAppStore_SalePrice;   // 0x90(0x18)()
	bool                                         CallFunc_GetSalePriceFromLastAppStore_ReturnValue; // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9925[0x7];                                     // Fixing Size After Last Property..
	class FText                                  CallFunc_Map_Find_Value;                           // 0xB0(0x18)()
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0xC9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_5;                              // 0xCA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9926[0x1];                                     // Fixing Size After Last Property..
	class FName                                  CallFunc_GetStorefrontName_ReturnValue;            // 0xCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPurchasingAvailable_ReturnValue;        // 0xD1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9927[0x6];                                     // Fixing Size After Last Property..
	class FText                                  CallFunc_GetNormalPrice_ReturnValue;               // 0xD8(0x18)()
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0xF0(0x18)()
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9928[0x7];                                     // Fixing Size After Last Property..
	class FText                                  CallFunc_Conv_IntToText_ReturnValue_1;             // 0x110(0x18)()
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9929[0x7];                                     // Fixing Size After Last Property..
	class FText                                  CallFunc_GetName_ReturnValue;                      // 0x130(0x18)()
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_992A[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_GetBonusQuantity_ReturnValue;             // 0x14C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x151(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_992B[0x6];                                     // Fixing Size After Last Property..
	class FText                                  CallFunc_GetBonusText_BonusText;                   // 0x158(0x18)()
	enum class EFortMtxStoreOfferType            CallFunc_GetFortStoreOfferType_ReturnValue;        // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_992C[0x7];                                     // Fixing Size After Last Property..
	class UFortStoreFrontOfferInfo*              CallFunc_GetOfferInfo_ReturnValue;                 // 0x178(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_992D[0x7];                                     // Fixing Size After Last Property..
	class UFortMtxOfferData*                     CallFunc_GetOfferDisplayAsset_ReturnValue;         // 0x188(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_2;                           // 0x191(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_992E[0x6];                                     // Fixing Size After Last Property..
	class UFortStoreFrontOfferInfo*              CallFunc_GetOfferInfo_ReturnValue_1;               // 0x198(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EFortMtxOfferDisplaySize          CallFunc_GetOfferDisplaySize_ReturnValue;          // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_992F[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_GetTotalQuantity_ReturnValue;             // 0x1A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortStoreFrontOfferInfo*              CallFunc_GetOfferInfo_ReturnValue_2;               // 0x1A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9930[0x7];                                     // Fixing Size After Last Property..
	class FString                                CallFunc_GetMetaValue_ReturnValue;                 // 0x1B8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Map_Find_Value_1;                         // 0x1C8(0x18)()
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0x1E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9931[0x7];                                     // Fixing Size After Last Property..
	class UWidget*                               K2Node_Select_Default_3;                           // 0x1E8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetBannerOverrideTag_ReturnValue_1;       // 0x1F0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_4;                              // 0x200(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9932[0x7];                                     // Fixing Size After Last Property..
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x208(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_Select_Default_4;                           // 0x210(0x18)()
};

// 0x0 (0x0 - 0x0)
// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.BP_OnHovered
struct UStoreMain_MTXOffer_C_BP_OnHovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.BP_OnUnhovered
struct UStoreMain_MTXOffer_C_BP_OnUnhovered_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.PreConstruct
struct UStoreMain_MTXOffer_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.OnOfferSet
struct UStoreMain_MTXOffer_C_OnOfferSet_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.OnUpdateStorePrice
struct UStoreMain_MTXOffer_C_OnUpdateStorePrice_Params
{
public:
	class FText                                  InStorePrice;                                      // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.OnStoreSelectionOfferSet
struct UStoreMain_MTXOffer_C_OnStoreSelectionOfferSet_Params
{
public:
};

// 0xC0 (0xC0 - 0x0)
// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.OnOfferTileBrushLoaded
struct UStoreMain_MTXOffer_C_OnOfferTileBrushLoaded_Params
{
public:
	struct FSlateBrush                           OfferBrush;                                        // 0x0(0xC0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x108 (0x108 - 0x0)
// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.ExecuteUbergraph_StoreMain_MTXOffer
struct UStoreMain_MTXOffer_C_ExecuteUbergraph_StoreMain_MTXOffer_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9933[0x3];                                     // Fixing Size After Last Property..
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortStoreFrontOfferInfo*              CallFunc_GetOfferInfo_ReturnValue;                 // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EFortMtxOfferDisplaySize          CallFunc_GetOfferDisplaySize_ReturnValue;          // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9934[0x7];                                     // Fixing Size After Last Property..
	class FText                                  K2Node_Event_InStorePrice;                         // 0x28(0x18)(ConstParm)
	struct FSlateBrush                           K2Node_Event_OfferBrush;                           // 0x40(0xC0)(ConstParm)
	class UAudioComponent*                       CallFunc_SpawnSound2D_ReturnValue;                 // 0x100(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.AboutToShowDetails__DelegateSignature
struct UStoreMain_MTXOffer_C_AboutToShowDetails__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
