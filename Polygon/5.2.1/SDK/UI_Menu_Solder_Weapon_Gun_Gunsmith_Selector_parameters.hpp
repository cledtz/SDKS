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

// 0x20 (0x20 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector.UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C.GetAllModuleSlots
struct UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C_GetAllModuleSlots_Params
{
public:
	TArray<class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Slot_C*> Slots;                                             // 0x0(0x10)(Parm, OutParm, ContainsInstancedReference)
	TArray<class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Slot_C*> K2Node_MakeArray_Array;                            // 0x10(0x10)(ReferenceParm, ContainsInstancedReference)
};

// 0x132 (0x132 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector.UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C.HideIncompatibleModuleSlots
struct UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C_HideIncompatibleModuleSlots_Params
{
public:
	TSet<enum class EGunModuleType>              L_CompatibleModuleTypes;                           // 0x0(0x50)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_24D4[0x4];                                     // Fixing Size After Last Property
	TArray<class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Slot_C*> CallFunc_GetAllModuleSlots_Slots;                  // 0x78(0x10)(ReferenceParm, ContainsInstancedReference)
	class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Slot_C* CallFunc_Array_Get_Item;                           // 0x88(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_24D7[0x3];                                     // Fixing Size After Last Property
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_24D8[0x7];                                     // Fixing Size After Last Property
	TArray<enum class EGunModuleType>            CallFunc_Set_ToArray_Result;                       // 0xA0(0x10)(ReferenceParm)
	enum class EGunModuleType                    CallFunc_Array_Get_Item_1;                         // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_24DB[0x3];                                     // Fixing Size After Last Property
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Slot_C* CallFunc_GetSlotByModuleType_Slot;                 // 0xB8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_24DF[0x7];                                     // Fixing Size After Last Property
	class UClass*                                K2Node_ClassDynamicCast_AsItem_Gun_General;        // 0xC8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25F0[0x7];                                     // Fixing Size After Last Property
	class UObject*                               CallFunc_LoadAsset_Blocking_ReturnValue;           // 0xD8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGunModulesInfo*                       K2Node_DynamicCast_AsGun_Modules_Info;             // 0xE0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25F6[0x3];                                     // Fixing Size After Last Property
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGunModuleInfo                        CallFunc_Array_Get_Item_2;                         // 0xF0(0x40)(ContainsInstancedReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x131(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF1 (0xF1 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector.UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C.OnUpdateGunData
struct UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C_OnUpdateGunData_Params
{
public:
	class UPlayFabJsonObject*                    L_ContainerCustomData;                             // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2620[0x4];                                     // Fixing Size After Last Property
	class UClass*                                K2Node_ClassDynamicCast_AsItem_Gun_General;        // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2624[0x7];                                     // Fixing Size After Last Property
	class UObject*                               CallFunc_LoadAsset_Blocking_ReturnValue;           // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGunModulesInfo*                       K2Node_DynamicCast_AsGun_Modules_Info;             // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_262B[0x7];                                     // Fixing Size After Last Property
	class UPlayFabJsonObject*                    CallFunc_GetObjectField_ReturnValue;               // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    CallFunc_GetObjectField_ReturnValue_1;             // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_262D[0x4];                                     // Fixing Size After Last Property
	class UPlayFabJsonObject*                    CallFunc_GetObjectField_ReturnValue_2;             // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2630[0x3];                                     // Fixing Size After Last Property
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                        CallFunc_GetFieldNames_ReturnValue;                // 0x70(0x10)(ReferenceParm)
	struct FGunModuleInfo                        CallFunc_Array_Get_Item;                           // 0x80(0x40)(ContainsInstancedReference)
	class FString                                CallFunc_Array_Get_Item_1;                         // 0xC0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetStringField_ReturnValue;               // 0xD0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Slot_C* CallFunc_GetSlotByModuleType_Slot;                 // 0xE0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2636[0x3];                                     // Fixing Size After Last Property
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x42 (0x42 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector.UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C.GetSlotByModuleType
struct UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C_GetSlotByModuleType_Params
{
public:
	enum class EGunModuleType                    ModuleType;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_264A[0x7];                                     // Fixing Size After Last Property
	class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Slot_C* Slot;                                              // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_264B[0x4];                                     // Fixing Size After Last Property
	TArray<class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Slot_C*> CallFunc_GetAllModuleSlots_Slots;                  // 0x20(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_264C[0x4];                                     // Fixing Size After Last Property
	class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Slot_C* CallFunc_Array_Get_Item;                           // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x31 (0x31 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector.UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C.Reset
struct UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C_Reset_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2651[0x4];                                     // Fixing Size After Last Property
	TArray<class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Slot_C*> CallFunc_GetAllModuleSlots_Slots;                  // 0x10(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2652[0x4];                                     // Fixing Size After Last Property
	class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Slot_C* CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector.UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C.PreConstruct
struct UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector.UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C.Tick
struct UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector.UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C.BndEvt__UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Button_Back_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C_BndEvt__UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Button_Back_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector.UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C.BndEvt__UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Button_OldModulesInfo_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C_BndEvt__UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Button_OldModulesInfo_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector.UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C.OnUpdatePlayerCombinedInfo_Event
struct UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C_OnUpdatePlayerCombinedInfo_Event_Params
{
public:
	TArray<enum class EModifiedData>             ModifiedData;                                      // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FString                                CustomString;                                      // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector.UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C.BndEvt__UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Button_OldModulesInfo_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C_BndEvt__UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Button_OldModulesInfo_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector.UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C.BndEvt__UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Button_OldModulesInfo_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
struct UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C_BndEvt__UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Button_OldModulesInfo_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
{
public:
};

// 0x168 (0x168 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector.UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C.ExecuteUbergraph_UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector
struct UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C_ExecuteUbergraph_UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable_1;               // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x8(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_real_Variable;                                // 0x44(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_Menu_Solder_Weapon_Gun_Gunsmith_C* CallFunc_FindParentWidgetOfType_ReturnValue;       // 0x48(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPlayerState*                          CallFunc_GetPlayerState_ReturnValue;               // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    CallFunc_ConstructJsonObject_ReturnValue;          // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPG_PlayerState_Menu*                  K2Node_DynamicCast_AsPG_Player_State_Menu;         // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2669[0x7];                                     // Fixing Size After Last Property
	class UPlayFabJsonObject*                    K2Node_LowEntry_LocalVariable_Value__Object;       // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                CallFunc_GetNumberArrayField_ReturnValue;          // 0x78(0x10)(ReferenceParm)
	class UPlayFabJsonObject*                    CallFunc_GetPlayerCombinedInfo_ReturnValue;        // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_266A[0x7];                                     // Fixing Size After Last Property
	class UPlayFabJsonObject*                    CallFunc_GetObjectField_ReturnValue;               // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    CallFunc_GetObjectField_ReturnValue_1;             // 0xA0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasField_ReturnValue;                     // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_266B[0x7];                                     // Fixing Size After Last Property
	class FString                                CallFunc_GetStringField_ReturnValue;               // 0xB0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_DecodeJson_ReturnValue;                   // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_266C[0x7];                                     // Fixing Size After Last Property
	class UPlayFabJsonObject*                    CallFunc_GetObjectField_ReturnValue_2;             // 0xC8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetStringField_ReturnValue_1;             // 0xD0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable_1;                     // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_266D[0x7];                                     // Fixing Size After Last Property
	struct FDateTime                             CallFunc_DateTimeFromIsoString_Result;             // 0xE8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DateTimeFromIsoString_ReturnValue;        // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_266E[0x7];                                     // Fixing Size After Last Property
	TArray<enum class EModifiedData>             K2Node_CustomEvent_ModifiedData;                   // 0xF8(0x10)(ConstParm, ReferenceParm)
	class FString                                K2Node_CustomEvent_CustomString;                   // 0x108(0x10)(ZeroConstructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x118(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_OldModulesInfo_C* CallFunc_Create_ReturnValue;                       // 0x128(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                             CallFunc_MakeDateTime_ReturnValue;                 // 0x130(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                             CallFunc_Subtract_DateTimeDateTime_ReturnValue;    // 0x138(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x140(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetTotalSeconds_ReturnValue;              // 0x148(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x14C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2671[0x3];                                     // Fixing Size After Last Property
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0x150(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x158(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector.UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C.OnClickBack__DelegateSignature
struct UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C_OnClickBack__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
