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

// 0x40 (0xE8 - 0xA8)
// Class MudGameplayRuntime.FortPawnComponent_Mud
class UFortPawnComponent_Mud : public UFortPawnComponent
{
public:
	struct FGameplayTag                          CurieFireTag;                                      // 0xA8(0x4)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                          SlidingTag;                                        // 0xAC(0x4)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                          SprintingTag;                                      // 0xB0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                          AttachParentCoveredEventTag;                       // 0xB4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                          CreatureSprintingTag;                              // 0xB8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_379B[0x2C];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortPawnComponent_Mud");
		return Clss;
	}

	void OnSprintingTagCountChanged(const struct FGameplayTag& Tag, int32 NewCount);
	void OnSlidingTagCountChanged(const struct FGameplayTag& Tag, int32 NewCount);
	void OnExitedMud();
	void OnEnteredMud();
	void OnCurieFireTagCountChanged(const struct FGameplayTag& Tag, int32 NewCount);
	void OnCreatureSprintingTagCountChanged(const struct FGameplayTag& Tag, int32 NewCount);
	void OnAttachedParentCoveredInMud(struct FGameplayEventData& Payload);
	void HandleSurfaceTypeChanged(class AActor* SurfaceActor, enum class EPhysicalSurface CurrentSurfaceType, enum class EPhysicalSurface PrevSurfaceType);
	void HandleASCInitialized(class UFortAbilitySystemComponent* AbilitySystemComponent, class AFortPlayerPawn* AffectedPawn);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
