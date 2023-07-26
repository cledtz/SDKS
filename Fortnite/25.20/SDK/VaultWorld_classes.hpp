#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x349 - 0x340)
// BlueprintGeneratedClass VaultWorld.VaultWorld_C
class AVaultWorld_C : public AFortItemPreviewWorld
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         bIsPrimaryBackgroundActive;                        // 0x348(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VaultWorld_C");
		return Clss;
	}

	void GetVaultRotator(class AVaultRotator_C** VaultRotator, class AVaultRotator_C* K2Node_DynamicCast_AsVault_Rotator, bool K2Node_DynamicCast_bSuccess);
	void OnSetupBackground(class UTexture2D* LoadedBackgroundTexture, struct FVaultWorldBackgroundData& BackgroundInfo);
	void OnTransitionBackground(bool bPlayForward, enum class EBackgroundIntensityLevel IntensityTransition);
	void ReceiveBeginPlay();
	void OnUpdateDisplay(bool bShowFloor, bool bShowEffects);
	void OnTransitionItemDetails(bool bShowItemDetails);
	void ExecuteUbergraph_VaultWorld(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, class UTexture2D* K2Node_Event_LoadedBackgroundTexture, const struct FVaultWorldBackgroundData& K2Node_Event_BackgroundInfo, bool K2Node_Event_bPlayForward, enum class EBackgroundIntensityLevel K2Node_Event_IntensityTransition, class AFortStaticMeshActor* K2Node_DynamicCast_AsFort_Static_Mesh_Actor, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_bShowFloor, bool K2Node_Event_bShowEffects, bool K2Node_Event_bShowItemDetails);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
