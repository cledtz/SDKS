#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xA8 - 0xA0)
// Class AssembledMeshSystem.AssembledMeshCoordinatorComponent
class UAssembledMeshCoordinatorComponent : public UPlayerStateComponent
{
public:
	uint8                                        Pad_1511[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAssembledMeshCoordinatorComponent* GetDefaultObj();

	void OnPlayerStatePawnSet(class UPlayerState* Player, class UPawn* NewPawn, class UPawn* OldPawn);
};

// 0x178 (0x1A8 - 0x30)
// Class AssembledMeshSystem.AssembledMeshSchema
class UAssembledMeshSchema : public UPrimaryDataAsset
{
public:
	struct FGameplayTag                          MeshSchemaTag;                                     // 0x30(0x4)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1515[0x4];                                     // Fixing Size After Last Property 
	TSoftObjectPtr<class UCustomizableObjectInstance> CustomizableObjectInstance;                        // 0x38(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UCustomizableObject>    CustomizableObject;                                // 0x58(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           SelectedIntParams;                                 // 0x78(0x50)(NativeAccessSpecifierPublic)
	TMap<class FString, float>                   SelectedFloatParams;                               // 0xC8(0x50)(NativeAccessSpecifierPublic)
	struct FAssembledMeshAttachmentRules         AttachmentRules;                                   // 0x118(0x50)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UAnimInstance>           AnimClass;                                         // 0x168(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 SoundLibraryTags;                                  // 0x188(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAssembledMeshSchema* GetDefaultObj();

};

// 0x38 (0xD8 - 0xA0)
// Class AssembledMeshSystem.AssembledMeshUserComponent
class UAssembledMeshUserComponent : public UActorComponent
{
public:
	uint8                                        Pad_1522[0x10];                                    // Fixing Size After Last Property 
	TArray<class UAssembledMeshSchema*>          MeshParts;                                         // 0xB0(0x10)(Edit, Net, ZeroConstructor, RepNotify, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<struct FAssembledComponentReferences> MeshPartComponents;                                // 0xC0(0x10)(ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	bool                                         bAssignMeshPartsOnBeginPlay;                       // 0xD0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1524[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAssembledMeshUserComponent* GetDefaultObj();

	void SetMeshPart(class UAssembledMeshSchema* InMeshPart);
	void OnRep_MeshParts();
	class UAssembledMeshSchema* GetMeshPart();
	class USkeletalMeshComponent* GetAttachToComponent();
	void GatherAndAssignAssembledMeshParts();
	void CustomizationCompleted(int32 PartIndex);
};

}


