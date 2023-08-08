#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE0 (0x4750 - 0x4670)
// BlueprintGeneratedClass PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C
class UPlayerPawn_Generic_Parent_C : public UFortPlayerPawn
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4670(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UMaterialInterface*>            Default_Weapon_Materials;                          // 0x4678(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>      PawnBackpackMaterials;                             // 0x4688(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, Deprecated)
	TArray<class UMaterialInstanceDynamic*>      PawnHatMaterials;                                  // 0x4698(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, Deprecated)
	TArray<class UMaterialInstanceDynamic*>      PawnHeadMaterials;                                 // 0x46A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, Deprecated)
	TArray<class UMaterialInstanceDynamic*>      PawnBodyMaterials;                                 // 0x46B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, Deprecated)
	TArray<class UMaterialInstanceDynamic*>      PawnCharmMaterials;                                // 0x46C8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, Deprecated)
	TArray<class UMaterialInstanceDynamic*>      PawnFaceMaterials;                                 // 0x46D8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, Deprecated)
	class UPostProcessComponent*                 PlayerPostProcessFX;                               // 0x46E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class USkeletalMeshComponent*>        SkeletalMeshes;                                    // 0x46F0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UMaterialInstanceDynamic*>      PawnMaterials_ALL;                                 // 0x4700(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        WaterCounter;                                      // 0x4710(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_712E[0x4];                                     // Fixing Size After Last Property
	class UActor*                                CurrentWaterMeshActor;                             // 0x4718(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsInWater;                                         // 0x4720(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_712F[0x7];                                     // Fixing Size After Last Property
	double                                       Time_when_you_ll_be_able_to_splash_again;          // 0x4728(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnOverlapWaterVolume;                              // 0x4730(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FCharacterPartMidArrayStruct>  PawnPartMaterials;                                 // 0x4740(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayerPawn_Generic_Parent_C");
		return Clss;
	}

	void Find_Stored_Char_Part_Materials(enum class EFortCustomPartType PartType, bool* Found, int32* Index, TArray<class UMaterialInstanceDynamic*>* MIDs, bool L_Found, int32 L_Index, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FCharacterPartMidArrayStruct& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void ReceiveBeginPlay();
	void Entered_Water_Volume();
	void Player_Creates_a_Splash(struct FTransform& NewTransform);
	void ReinitializeWeaponMaterials();
	void ExecuteUbergraph_PlayerPawn_Generic_Parent(int32 EntryPoint, const struct FTransform& Temp_struct_Variable, bool CallFunc_IsLocallyControlled_ReturnValue, class UPostProcessComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FTransform& K2Node_CustomEvent_NewTransform);
	void OnOverlapWaterVolume__DelegateSignature(bool bIsInWater, class UFortPlayerPawn* Pawn, class UActor* Water);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
