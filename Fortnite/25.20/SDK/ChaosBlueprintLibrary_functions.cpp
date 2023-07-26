#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function ChaosBlueprintLibrary.ChaosBlueprintLibraryBPLibrary.ClothControllerWriteToSimulation
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UCustomCharacterPartAnimInstance*CharacterPartAnimInstance                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ClothingAssetName                                                (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FClothCoreSettings          ClothCoreSettings                                                (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FClothParameters            ClothSettings                                                    (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                     WindVelocity                                                     (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FClothParameters            OutWorldSpaceClothSettings                                       (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                     OutWorldSpaceWindVelocity                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosBlueprintLibraryBPLibrary::ClothControllerWriteToSimulation(class UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, class FString& ClothingAssetName, struct FClothCoreSettings& ClothCoreSettings, struct FClothParameters& ClothSettings, struct FVector& WindVelocity, struct FClothParameters* OutWorldSpaceClothSettings, struct FVector* OutWorldSpaceWindVelocity)
{
	static auto Func = Class->GetFunction("ChaosBlueprintLibraryBPLibrary", "ClothControllerWriteToSimulation");

	Params::UChaosBlueprintLibraryBPLibrary_ClothControllerWriteToSimulation_Params Parms;

	Parms.CharacterPartAnimInstance = CharacterPartAnimInstance;
	Parms.ClothingAssetName = ClothingAssetName;
	Parms.ClothCoreSettings = ClothCoreSettings;
	Parms.ClothSettings = ClothSettings;
	Parms.WindVelocity = WindVelocity;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutWorldSpaceClothSettings != nullptr)
		*OutWorldSpaceClothSettings = Parms.OutWorldSpaceClothSettings;

	if (OutWorldSpaceWindVelocity != nullptr)
		*OutWorldSpaceWindVelocity = Parms.OutWorldSpaceWindVelocity;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
