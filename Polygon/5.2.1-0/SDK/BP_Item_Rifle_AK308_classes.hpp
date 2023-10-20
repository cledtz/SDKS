#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x760 - 0x750)
// BlueprintGeneratedClass BP_Item_Rifle_AK308.BP_Item_Rifle_AK308_C
class UBP_Item_Rifle_AK308_C : public UItem_Gun_Rifle
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x750(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  IronSight;                                         // 0x758(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Item_Rifle_AK308_C* GetDefaultObj();

	void SetSight(bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UItem_Module_General* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void ReceiveBeginPlay();
	void OnSetGunModules_Event();
	void ExecuteUbergraph_BP_Item_Rifle_AK308(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}


