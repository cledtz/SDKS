#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class ChaosBlueprintLibrary.ChaosBlueprintLibraryBPLibrary
class UChaosBlueprintLibraryBPLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UChaosBlueprintLibraryBPLibrary* GetDefaultObj();

	void ClothControllerWriteToSimulation(class UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, class FString& ClothingAssetName, struct FClothCoreSettings& ClothCoreSettings, struct FClothParameters& ClothSettings, struct FVector& WindVelocity, struct FClothParameters* OutWorldSpaceClothSettings, struct FVector* OutWorldSpaceWindVelocity);
};

}


