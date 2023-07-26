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

// 0x79 (0x79 - 0x0)
// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.Current Material Matches Base
struct UCreative_CommonDeviceFunctionLibrary_C_Current_Material_Matches_Base_Params
{
public:
	class UStaticMeshComponent*                  Static_Mesh_Component;                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        MatId;                                             // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C02[0x4];                                     // Fixing Size After Last Property..
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Material_Matches;                                  // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C03[0x7];                                     // Fixing Size After Last Property..
	class UMaterialInterface*                    Base_Material;                                     // 0x20(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UMaterialInterface*                    CallFunc_GetMaterial_ReturnValue;                  // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C04[0x6];                                     // Fixing Size After Last Property..
	TArray<struct FStaticMaterial>               CallFunc_GetStaticMaterials_ReturnValue;           // 0x38(0x10)(ConstParm, ReferenceParm)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C05[0x7];                                     // Fixing Size After Last Property..
	struct FStaticMaterial                       CallFunc_Array_Get_Item;                           // 0x50(0x28)(NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE4 (0xE4 - 0x0)
// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.GenerateUniqueMaterialName
struct UCreative_CommonDeviceFunctionLibrary_C_GenerateUniqueMaterialName_Params
{
public:
	class UPrimitiveComponent*                   PrimitiveComponent;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FString                                Name;                                              // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  UniqueName;                                        // 0x20(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Max_Length;                                        // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FGuid                                 CallFunc_GenerateGuidFromObject_ReturnValue;       // 0x38(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_GuidToString_ReturnValue;            // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FGuid                                 CallFunc_GenerateGuidFromObject_ReturnValue_1;     // 0x60(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Right_ReturnValue;                        // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_GuidToString_ReturnValue_1;          // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C06[0x7];                                     // Fixing Size After Last Property..
	class FString                                CallFunc_Right_ReturnValue_1;                      // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C07[0x7];                                     // Fixing Size After Last Property..
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0xC0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Left_ReturnValue;                         // 0xD0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.IsInEditor
struct UCreative_CommonDeviceFunctionLibrary_C_IsInEditor_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         TURR;                                              // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_InEditor_ReturnValue;                     // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD4 (0xD4 - 0x0)
// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.Get Team Color For Team Option
struct UCreative_CommonDeviceFunctionLibrary_C_Get_Team_Color_For_Team_Option_Params
{
public:
	class AActor*                                ContextActor;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FCreativeTeamOption                   TeamOption;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Base_Color;                                        // 0x18(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Light_Color;                                       // 0x28(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Bold_Color;                                        // 0x38(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ColorIndex;                                        // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C08[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FLinearColor>                  Temp_struct_Variable;                              // 0x50(0x10)(ReferenceParm)
	enum class EFortTeam                         CallFunc_ConvertToTeam_ReturnValue;                // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x62(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C09[0x1];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_SelectInt_ReturnValue;                    // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortMinigame*                         CallFunc_GetMinigame_ReturnValue;                  // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FLinearColor>                  Temp_struct_Variable_1;                            // 0x70(0x10)(ReferenceParm)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C0A[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_GetTeamColorIndex_ReturnValue;            // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FLinearColor>                  Temp_struct_Variable_2;                            // 0x88(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Percent_IntInt_ReturnValue;               // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Max_ReturnValue;                          // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Array_Get_Item;                           // 0xA4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Array_Get_Item_1;                         // 0xB4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Array_Get_Item_2;                         // 0xC4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.Apply Vent Recently Launched Tag or Abort Launch
struct UCreative_CommonDeviceFunctionLibrary_C_Apply_Vent_Recently_Launched_Tag_or_Abort_Launch_Params
{
public:
	class AActor*                                Actor_To_Launch;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Vent_Actor;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldLaunch;                                      // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C0B[0x6];                                     // Fixing Size After Last Property..
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C0C[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x30(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C0D[0x7];                                     // Fixing Size After Last Property..
	FInterfaceProperty_                          K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface; // 0x50(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x62(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C0E[0x5];                                     // Fixing Size After Last Property..
	TArray<TSubclassOf<class UGameplayEffect>>   K2Node_MakeArray_Array;                            // 0x68(0x10)(ReferenceParm)
};

// 0x50 (0x50 - 0x0)
// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.Simple Apply Gameplay Effect to Actor
struct UCreative_CommonDeviceFunctionLibrary_C_Simple_Apply_Gameplay_Effect_to_Actor_Params
{
public:
	class UClass*                                GameplayEffect;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Actor;                                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*               PlayerAbilitySystemComp;                           // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C0F[0x6];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x28(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<TSubclassOf<class UGameplayEffect>>   K2Node_MakeArray_Array;                            // 0x40(0x10)(ReferenceParm)
};

// 0x120 (0x120 - 0x0)
// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.Give Ammo To Inventory Owner
struct UCreative_CommonDeviceFunctionLibrary_C_Give_Ammo_To_Inventory_Owner_Params
{
public:
	FInterfaceProperty_                          Inventory_Owner;                                   // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortWorldItemDefinition*              World_Item_Definition;                             // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Pickup_Instigator_Handle;                          // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C10[0x4];                                     // Fixing Size After Last Property..
	TMap<TSoftObjectPtr<class UFortWorldItemDefinition>, int32> AmmoToGiveItemDefinitionMap;                       // 0x20(0x50)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                        DefaultAmmoToGive;                                 // 0x70(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C11[0x4];                                     // Fixing Size After Last Property..
	class UObject*                               __WorldContext;                                    // 0x78(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        NumAmmoToGive;                                     // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C12[0x4];                                     // Fixing Size After Last Property..
	class AFortPlayerController*                 PlayerController;                                  // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class UFortWorldItemDefinition*              TargetAmmoDef;                                     // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortWeaponItemDefinition*             K2Node_DynamicCast_AsFort_Weapon_Item_Definition;  // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xA1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C13[0x6];                                     // Fixing Size After Last Property..
	TSubclassOf<class UFortGameplayAbility>      CallFunc_GetReloadAbility_ReturnValue;             // 0xA8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C14[0x7];                                     // Fixing Size After Last Property..
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller;       // 0xB8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C15[0x7];                                     // Fixing Size After Last Property..
	class UFortWorldItemDefinition*              CallFunc_GetAmmoWorldItemDefinition_BP_ReturnValue; // 0xC8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UFortWorldItemDefinition> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue; // 0xD0(0x28)(UObjectWrapper, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C16[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Map_Find_Value;                           // 0xFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C17[0x3];                                     // Fixing Size After Last Property..
	int32                                        K2Node_Select_Default;                             // 0x104(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C18[0x7];                                     // Fixing Size After Last Property..
	class UFortWorldItem*                        CallFunc_GiveItemToInventoryOwner_ReturnValue;     // 0x110(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_K2_GetItemQuantityOnPlayer_ReturnValue;   // 0x118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x11C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x11D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x11E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x11F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6C (0x6C - 0x0)
// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.MatchesTagReturnMatch
struct UCreative_CommonDeviceFunctionLibrary_C_MatchesTagReturnMatch_Params
{
public:
	struct FGameplayTagContainer                 TagContainer;                                      // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayTag                          Tag;                                               // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	bool                                         ExactMatch;                                        // 0x24(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C19[0x3];                                     // Fixing Size After Last Property..
	class UObject*                               __WorldContext;                                    // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         TagFound;                                          // 0x30(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C1A[0x3];                                     // Fixing Size After Last Property..
	struct FGameplayTag                          FirstMatchingTag;                                  // 0x34(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          FoundTag;                                          // 0x38(0x4)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGameplayTag>                  CallFunc_BreakGameplayTagContainer_GameplayTags;   // 0x40(0x10)(ReferenceParm)
	struct FGameplayTag                          CallFunc_Array_Get_Item;                           // 0x50(0x4)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_MatchesTag_ReturnValue;                   // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C1B[0x3];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C1C[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsGameplayTagValid_ReturnValue;           // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x6A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x6B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA9 (0xA9 - 0x0)
// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.Get PlayerState from NetID
struct UCreative_CommonDeviceFunctionLibrary_C_Get_PlayerState_from_NetID_Params
{
public:
	struct FUniqueNetIdRepl                      Unique_Net_Id;                                     // 0x0(0x30)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerState*                      Fort_Player_State;                                 // 0x38(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C1D[0x3];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C1E[0x4];                                     // Fixing Size After Last Property..
	class APlayerState*                          CallFunc_Array_Get_Item;                           // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerState*                      K2Node_DynamicCast_AsFort_Player_State;            // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C1F[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetPlayerUniqueNetID_ReturnValue;         // 0x70(0x30)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue; // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C20[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x61 (0x61 - 0x0)
// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.Is Matching Channel ID
struct UCreative_CommonDeviceFunctionLibrary_C_Is_Matching_Channel_ID_Params
{
public:
	class UFortGameplayMessageComponentBase*     A;                                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UFortGameplayMessageComponentBase*     B;                                                 // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Matches;                                           // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C21[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 CallFunc_GetChannelId_ReturnValue;                 // 0x20(0x20)()
	struct FGameplayTagContainer                 CallFunc_GetChannelId_ReturnValue_1;               // 0x40(0x20)()
	bool                                         CallFunc_EqualEqual_GameplayTagContainer_ReturnValue; // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x15 (0x15 - 0x0)
// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.Bool to Bool with Unset
struct UCreative_CommonDeviceFunctionLibrary_C_Bool_to_Bool_with_Unset_Params
{
public:
	bool                                         Input;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C22[0x7];                                     // Fixing Size After Last Property..
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EBoolWithUnset                    Output;                                            // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBoolWithUnset                    Temp_byte_Variable;                                // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBoolWithUnset                    Temp_byte_Variable_1;                              // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBoolWithUnset                    K2Node_Select_Default;                             // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x91 (0x91 - 0x0)
// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.Reattach or Create MID
struct UCreative_CommonDeviceFunctionLibrary_C_Reattach_or_Create_MID_Params
{
public:
	class UPrimitiveComponent*                   Mesh;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Target_MID;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	int32                                        MatId;                                             // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C23[0x4];                                     // Fixing Size After Last Property..
	class UObject*                               __WorldContext;                                    // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    CallFunc_GetMaterial_ReturnValue;                  // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C24[0x7];                                     // Fixing Size After Last Property..
	class FString                                CallFunc_GetDisplayName_ReturnValue;               // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C25[0x7];                                     // Fixing Size After Last Property..
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GenerateUniqueMaterialName_UniqueName;    // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C26[0x3];                                     // Fixing Size After Last Property..
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    CallFunc_GetMaterial_ReturnValue_1;                // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.Wrapping Modulo
struct UCreative_CommonDeviceFunctionLibrary_C_Wrapping_Modulo_Params
{
public:
	int32                                        A;                                                 // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        B;                                                 // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Out;                                               // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        __Result;                                          // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Percent_IntInt_ReturnValue;               // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB8 (0xB8 - 0x0)
// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.Animate Float Curve
struct UCreative_CommonDeviceFunctionLibrary_C_Animate_Float_Curve_Params
{
public:
	double                                       Delta_Time;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Current_Time;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           FCurve;                                            // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       Animation_Time;                                    // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Invert_Time;                                       // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C27[0x7];                                     // Fixing Size After Last Property..
	class UObject*                               __WorldContext;                                    // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       Value;                                             // 0x30(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsComplete;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C28[0x7];                                     // Fixing Size After Last Property..
	double                                       EndTime;                                           // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CurveFloatResult;                                  // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       TimeAlpha;                                         // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C29[0x6];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Default;                             // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FClamp_ReturnValue;                       // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetFloatValue_ReturnValue;                // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C2A[0x4];                                     // Fixing Size After Last Property..
	double                                       Temp_real_Variable;                                // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C2B[0x7];                                     // Fixing Size After Last Property..
	double                                       K2Node_Select_Default_1;                           // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C2C[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_GetFloatValue_InTime_ImplicitCast;        // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_VariableSet_CurveFloatResult_ImplicitCast;  // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.TeamToIndex
struct UCreative_CommonDeviceFunctionLibrary_C_TeamToIndex_Params
{
public:
	uint8                                        Team;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C2D[0x7];                                     // Fixing Size After Last Property..
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Index;                                             // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue;              // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Subtract_ByteByte_ReturnValue;            // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C2E[0x2];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.IndexToTeam
struct UCreative_CommonDeviceFunctionLibrary_C_IndexToTeam_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C2F[0x4];                                     // Fixing Size After Last Property..
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Team;                                              // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue;              // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Add_ByteByte_ReturnValue;                 // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.IsLogicInPlayMode
struct UCreative_CommonDeviceFunctionLibrary_C_IsLogicInPlayMode_Params
{
public:
	class UFortMinigameLogicComponent*           Logic;                                             // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Play_Mode;                                         // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInPlayMode_ReturnValue;                 // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x80 (0x80 - 0x0)
// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.Get Dynamic Team Color
struct UCreative_CommonDeviceFunctionLibrary_C_Get_Dynamic_Team_Color_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortMinigame*                         Minigame;                                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ECreativeColorSetType             Color_Type;                                        // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C30[0x7];                                     // Fixing Size After Last Property..
	class UObject*                               __WorldContext;                                    // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Array_Index;                                       // 0x20(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C31[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FGameplayTag>                  GameplayTags;                                      // 0x28(0x10)(Edit, BlueprintVisible)
	TArray<struct FGameplayTag>                  GameplayColorTags;                                 // 0x38(0x10)(Edit, BlueprintVisible)
	enum class ECreativeTeamColor                Temp_byte_Variable;                                // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C32[0x7];                                     // Fixing Size After Last Property..
	class AFortPlayerController*                 CallFunc_GetFirstLocalFortPlayerController_ReturnValue; // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECreativeTeamColor                Temp_byte_Variable_1;                              // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECreativeTeamColor                Temp_byte_Variable_2;                              // 0x5A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue;              // 0x5B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C33[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FGameplayTag>                  K2Node_MakeArray_Array;                            // 0x60(0x10)(ReferenceParm)
	enum class EFortTeamAffiliation              Temp_byte_Variable_3;                              // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortTeamAffiliation              CallFunc_GetTeamAffiliation_ReturnValue;           // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetActorPvPTeamIndex_TeamIndex;           // 0x72(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetActorPvPTeamIndex_ReturnValue;         // 0x73(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Add_ByteByte_ReturnValue;                 // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECreativeTeamColor                K2Node_Select_Default;                             // 0x75(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C34[0x2];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetTeamColorIndex_ReturnValue;            // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF8 (0xF8 - 0x0)
// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.Get Team Color Index from Tag
struct UCreative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag_Params
{
public:
	class AActor*                                Actor_with_Tag;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortMinigame*                         Minigame;                                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Array_Index;                                       // 0x18(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECreativeColorSetType             Color_Type_Out;                                    // 0x1C(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C35[0x3];                                     // Fixing Size After Last Property..
	struct FGameplayTag                          Check_Tag;                                         // 0x20(0x4)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C36[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FGameplayTag>                  GameplayTags;                                      // 0x28(0x10)(Edit, BlueprintVisible)
	TArray<struct FGameplayTag>                  GameplayColorTags;                                 // 0x38(0x10)(Edit, BlueprintVisible)
	struct FGameplayTagContainer                 Temp_struct_Variable;                              // 0x48(0x20)()
	TArray<struct FGameplayTag>                  K2Node_MakeArray_Array;                            // 0x68(0x10)(ReferenceParm)
	TArray<struct FGameplayTag>                  CallFunc_BreakGameplayTagContainer_GameplayTags;   // 0x78(0x10)(ReferenceParm)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CallFunc_Array_Get_Item;                           // 0x90(0x4)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C37[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Max_ReturnValue;                          // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Get_Dynamic_Team_Color_Array_Index;       // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Get_Dynamic_Team_Color_Array_Index_1;     // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_GameplayTag_ReturnValue;       // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_GameplayTag_ReturnValue_1;     // 0xB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C38[0x2];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_MatchesTag_ReturnValue;                   // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0xB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C39[0x6];                                     // Fixing Size After Last Property..
	FInterfaceProperty_                          K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface; // 0xC0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C3A[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 CallFunc_GetOwnedGameplayTags_TagContainer;        // 0xD8(0x20)()
};

// 0x2C (0x2C - 0x0)
// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.Get Team Color Index or Team Index
struct UCreative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_or_Team_Index_Params
{
public:
	class UFortMinigameLogicComponent*           Minigame_Logic;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        Team_Index;                                        // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C3B[0x4];                                     // Fixing Size After Last Property..
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        ReturnValue;                                       // 0x18(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_IndexToTeam_Team;                         // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetTeamColorIndex_ReturnValue;            // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C3C[0x3];                                     // Fixing Size After Last Property..
	int32                                        K2Node_Select_Default;                             // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.IsLocalPawn
struct UCreative_CommonDeviceFunctionLibrary_C_IsLocalPawn_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         IsLocalPawn;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C3D[0x6];                                     // Fixing Size After Last Property..
	TArray<class AFortPlayerController*>         CallFunc_GetLocalFortPlayerControllers_ReturnValue; // 0x18(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C3E[0x4];                                     // Fixing Size After Last Property..
	class AFortPlayerController*                 CallFunc_Array_Get_Item;                           // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x4A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C3F[0x1];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.IsInPlayMode
struct UCreative_CommonDeviceFunctionLibrary_C_IsInPlayMode_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Play_Mode;                                         // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C40[0x7];                                     // Fixing Size After Last Property..
	class AFortMinigame*                         Minigame;                                          // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInPlayMode_ReturnValue;                 // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA8 (0xA8 - 0x0)
// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.Get Driver or Pawn Controller
struct UCreative_CommonDeviceFunctionLibrary_C_Get_Driver_or_Pawn_Controller_Params
{
public:
	class AActor*                                Actor_To_Check;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Valid_Controller;                                  // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C41[0x7];                                     // Fixing Size After Last Property..
	class AController*                           Controller;                                        // 0x18(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 DeviceDontTriggerTags;                             // 0x20(0x20)(Edit, BlueprintVisible)
	class AController*                           _Controller;                                       // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       Temp_object_Variable;                              // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                           K2Node_DynamicCast_AsController;                   // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C42[0x6];                                     // Fixing Size After Last Property..
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 CallFunc_GetFortPlayerControllerFromActor_ReturnValue; // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C43[0x7];                                     // Fixing Size After Last Property..
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x78(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C44[0x7];                                     // Fixing Size After Last Property..
	FInterfaceProperty_                          K2Node_DynamicCast_AsFort_Vehicle_Interface;       // 0x88(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C45[0x7];                                     // Fixing Size After Last Property..
	class AFortPlayerPawn*                       CallFunc_GetDriver_ReturnValue;                    // 0xA0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x98 (0x98 - 0x0)
// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.GetMID_FromMaterial
struct UCreative_CommonDeviceFunctionLibrary_C_GetMID_FromMaterial_Params
{
public:
	class UPrimitiveComponent*                   Target;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        Index;                                             // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C46[0x4];                                     // Fixing Size After Last Property..
	class UMaterialInterface*                    SourceMaterial;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Mid;                                               // 0x20(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    CallFunc_GetMaterial_ReturnValue;                  // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              K2Node_DynamicCast_AsMaterial_Instance_Dynamic;    // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C47[0x7];                                     // Fixing Size After Last Property..
	class FString                                CallFunc_GetDisplayName_ReturnValue;               // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C48[0x6];                                     // Fixing Size After Last Property..
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GenerateUniqueMaterialName_UniqueName;    // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C49[0x4];                                     // Fixing Size After Last Property..
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x23 (0x23 - 0x0)
// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.Refresh Team Change Binding
struct UCreative_CommonDeviceFunctionLibrary_C_Refresh_Team_Change_Binding_Params
{
public:
	class UFortMinigameLogicComponent*           Minigame_Logic;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         Unbind;                                            // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C4A[0x3];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           Event;                                             // 0xC(0xC)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.Update Team Color
struct UCreative_CommonDeviceFunctionLibrary_C_Update_Team_Color_Params
{
public:
	class UFortMinigameLogicComponent*           Minigame_Logic;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   Mesh;                                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        Team;                                              // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C4B[0x4];                                     // Fixing Size After Last Property..
	class UObject*                               __WorldContext;                                    // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetMID_MID;                               // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Get_Team_Color_Index_or_Team_Index_ReturnValue; // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C4C[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x80 (0x80 - 0x0)
// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.GetMID
struct UCreative_CommonDeviceFunctionLibrary_C_GetMID_Params
{
public:
	class UPrimitiveComponent*                   Target;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Mid;                                               // 0x10(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C4D[0x7];                                     // Fixing Size After Last Property..
	class UMaterialInterface*                    CallFunc_GetMaterial_ReturnValue;                  // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C4E[0x7];                                     // Fixing Size After Last Property..
	class FString                                CallFunc_GetDisplayName_ReturnValue;               // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              K2Node_DynamicCast_AsMaterial_Instance_Dynamic;    // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C4F[0x7];                                     // Fixing Size After Last Property..
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GenerateUniqueMaterialName_UniqueName;    // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C50[0x4];                                     // Fixing Size After Last Property..
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0xBA (0xBA - 0x0)
// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.ActorCanTrigger
struct UCreative_CommonDeviceFunctionLibrary_C_ActorCanTrigger_Params
{
public:
	class AActor*                                Actor_To_Check;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   Overlap_Component;                                 // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CanTrigger;                                        // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C51[0x7];                                     // Fixing Size After Last Property..
	class AController*                           Controller;                                        // 0x20(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Local_CanTrigger;                                  // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C52[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 DeviceDontTriggerTags;                             // 0x30(0x20)(Edit, BlueprintVisible)
	class AController*                           Local_controller;                                  // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       Temp_object_Variable;                              // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C53[0x7];                                     // Fixing Size After Last Property..
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 CallFunc_GetFortPlayerControllerFromActor_ReturnValue; // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x78(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FInterfaceProperty_                          CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput; // 0x80(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_HasAllMatchingGameplayTags_ReturnValue;   // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x92(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x93(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C54[0x4];                                     // Fixing Size After Last Property..
	FInterfaceProperty_                          K2Node_DynamicCast_AsFort_Vehicle_Interface;       // 0x98(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C55[0x7];                                     // Fixing Size After Last Property..
	class AFortPlayerPawn*                       CallFunc_GetDriver_ReturnValue;                    // 0xB0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ECollisionChannel                 CallFunc_GetCollisionObjectType_ReturnValue;       // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x27 (0x27 - 0x0)
// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.IsActivatedOnPhase
struct UCreative_CommonDeviceFunctionLibrary_C_IsActivatedOnPhase_Params
{
public:
	enum class EFortMinigameState                State;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C56[0x3];                                     // Fixing Size After Last Property..
	int32                                        PhaseIndex;                                        // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Actor;                                             // 0x8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Enabled;                                           // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInPlayMode_Play_Mode;                   // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue;              // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x1E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x1F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x23(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x25(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x26(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x35 (0x35 - 0x0)
// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.IsEnabledPhaseMatch
struct UCreative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch_Params
{
public:
	enum class EFortMinigameState                State;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C57[0x3];                                     // Fixing Size After Last Property..
	int32                                        PhaseIndex;                                        // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Actor;                                             // 0x8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Enabled;                                           // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue;              // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_InEditor_ReturnValue;                     // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInPlayMode_Play_Mode;                   // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x1E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x1F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInPlayMode_Play_Mode_1;                 // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x23(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x25(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_ByteByte_ReturnValue;                // 0x26(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x27(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0x2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_4;                 // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x2D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_4;          // 0x2E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x2F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_5;                 // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_6;                 // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_3;                  // 0x33(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_4;                  // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.IsValidTeam
struct UCreative_CommonDeviceFunctionLibrary_C_IsValidTeam_Params
{
public:
	int32                                        Team_to_Check;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C58[0x4];                                     // Fixing Size After Last Property..
	class AActor*                                Actor_To_Check;                                    // 0x8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Valid;                                             // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetActorPvPTeamIndex_TeamIndex;           // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetActorPvPTeamIndex_ReturnValue;         // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x1E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF0 (0xF0 - 0x0)
// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.AwardScore
struct UCreative_CommonDeviceFunctionLibrary_C_AwardScore_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Score;                                             // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAwardScoreType                   Type;                                              // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C59[0x3];                                     // Fixing Size After Last Property..
	class AController*                           Controller;                                        // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortMinigameLogicComponent*           Minigame_Logic;                                    // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 TargetTags;                                        // 0x20(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               __WorldContext;                                    // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Local_Score;                                       // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C5A[0x4];                                     // Fixing Size After Last Property..
	class UFortMinigameManager*                  Local_MinigameManager;                             // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C5B[0x2];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Variable;                                 // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Multiply_IntInt_ReturnValue;              // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAwardScoreType                   Temp_byte_Variable;                                // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C5C[0x3];                                     // Fixing Size After Last Property..
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller;       // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C5D[0x7];                                     // Fixing Size After Last Property..
	class UFortMinigameManager*                  CallFunc_GetMinigameManager_ReturnValue;           // 0x78(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UFortMinigameStatsComponent*           CallFunc_GetMinigameStatsComponent_ReturnValue;    // 0x80(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C5E[0x7];                                     // Fixing Size After Last Property..
	class UFortMinigameStatFilter*               CallFunc_GetLoadedStatFromClass_ReturnValue;       // 0x90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerState*                      K2Node_DynamicCast_AsFort_Player_State;            // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C5F[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_GetStatForPlayer_ReturnValue;             // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 CallFunc_GetSourceAndContextTags_OutSourceTags;    // 0xA8(0x20)()
	struct FGameplayTagContainer                 CallFunc_GetSourceAndContextTags_OutContextTags;   // 0xC8(0x20)()
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Select_Default;                             // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x13 (0x13 - 0x0)
// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.IsOnUnpublishedIsland
struct UCreative_CommonDeviceFunctionLibrary_C_IsOnUnpublishedIsland_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Edit_Mode;                                         // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortVolumeType                   CallFunc_GetExperienceType_ReturnValue;            // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
