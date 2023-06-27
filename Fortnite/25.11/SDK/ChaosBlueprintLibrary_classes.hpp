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

// 0x0 (0x28 - 0x28)
// Class ChaosBlueprintLibrary.ChaosBlueprintLibraryBPLibrary
class UChaosBlueprintLibraryBPLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ChaosBlueprintLibraryBPLibrary");
		return Clss;
	}

	void ClothControllerWriteToSimulation(class UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, class FString& ClothingAssetName, struct FClothCoreSettings& ClothCoreSettings, struct FClothParameters& ClothSettings, struct FVector& WindVelocity, struct FClothParameters* OutWorldSpaceClothSettings, struct FVector* OutWorldSpaceWindVelocity);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
