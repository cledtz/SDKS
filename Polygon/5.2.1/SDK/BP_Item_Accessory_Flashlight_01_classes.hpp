#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x380 - 0x368)
// BlueprintGeneratedClass BP_Item_Accessory_Flashlight_01.BP_Item_Accessory_Flashlight_01_C
class UBP_Item_Accessory_Flashlight_01_C : public UItem_Module_Flashlight
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x368(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              ParticleSystem;                                    // 0x370(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                   SpotLight;                                         // 0x378(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_Item_Accessory_Flashlight_01_C");
		return Clss;
	}

	void InpActEvt_Flashlight_K2Node_InputActionEvent_0(const struct FKey& Key);
	void ReceiveBeginPlay();
	void OnChangeEnableState(bool bPlaySound);
	void ExecuteUbergraph_BP_Item_Accessory_Flashlight_01(int32 EntryPoint, const struct FKey& K2Node_InputActionEvent_Key, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool K2Node_Event_bPlaySound, enum class ENetRole CallFunc_GetLocalRole_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ENetRole CallFunc_GetLocalRole_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, enum class ENetRole CallFunc_GetLocalRole_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, class UPawn* CallFunc_GetInstigator_ReturnValue, class UActor* CallFunc_GetOwner_ReturnValue, class UPG_Game_Character* K2Node_DynamicCast_AsPG_Game_Character, bool K2Node_DynamicCast_bSuccess, enum class ENetRole CallFunc_GetLocalRole_ReturnValue_3, class UItem_Gun_General* CallFunc_GetCurrentGun_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
