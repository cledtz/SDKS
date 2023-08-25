#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MeshCosmetics.MeshCosmeticsStep_CompileCustomizableObjects
// (None)

class UClass* UMeshCosmeticsStep_CompileCustomizableObjects::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshCosmeticsStep_CompileCustomizableObjects");

	return Clss;
}


// MeshCosmeticsStep_CompileCustomizableObjects MeshCosmetics.Default__MeshCosmeticsStep_CompileCustomizableObjects
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshCosmeticsStep_CompileCustomizableObjects* UMeshCosmeticsStep_CompileCustomizableObjects::GetDefaultObj()
{
	static class UMeshCosmeticsStep_CompileCustomizableObjects* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshCosmeticsStep_CompileCustomizableObjects*>(UMeshCosmeticsStep_CompileCustomizableObjects::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshCosmetics.MeshCosmeticsAdditionalData_SpecifyMaterialOnlyParams
// (None)

class UClass* UMeshCosmeticsAdditionalData_SpecifyMaterialOnlyParams::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshCosmeticsAdditionalData_SpecifyMaterialOnlyParams");

	return Clss;
}


// MeshCosmeticsAdditionalData_SpecifyMaterialOnlyParams MeshCosmetics.Default__MeshCosmeticsAdditionalData_SpecifyMaterialOnlyParams
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshCosmeticsAdditionalData_SpecifyMaterialOnlyParams* UMeshCosmeticsAdditionalData_SpecifyMaterialOnlyParams::GetDefaultObj()
{
	static class UMeshCosmeticsAdditionalData_SpecifyMaterialOnlyParams* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshCosmeticsAdditionalData_SpecifyMaterialOnlyParams*>(UMeshCosmeticsAdditionalData_SpecifyMaterialOnlyParams::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshCosmetics.MeshCosmeticsStep_HandleGeneratedMesh
// (None)

class UClass* UMeshCosmeticsStep_HandleGeneratedMesh::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshCosmeticsStep_HandleGeneratedMesh");

	return Clss;
}


// MeshCosmeticsStep_HandleGeneratedMesh MeshCosmetics.Default__MeshCosmeticsStep_HandleGeneratedMesh
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshCosmeticsStep_HandleGeneratedMesh* UMeshCosmeticsStep_HandleGeneratedMesh::GetDefaultObj()
{
	static class UMeshCosmeticsStep_HandleGeneratedMesh* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshCosmeticsStep_HandleGeneratedMesh*>(UMeshCosmeticsStep_HandleGeneratedMesh::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshCosmetics.MeshCosmeticsStep_PlaceComponent
// (None)

class UClass* UMeshCosmeticsStep_PlaceComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshCosmeticsStep_PlaceComponent");

	return Clss;
}


// MeshCosmeticsStep_PlaceComponent MeshCosmetics.Default__MeshCosmeticsStep_PlaceComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshCosmeticsStep_PlaceComponent* UMeshCosmeticsStep_PlaceComponent::GetDefaultObj()
{
	static class UMeshCosmeticsStep_PlaceComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshCosmeticsStep_PlaceComponent*>(UMeshCosmeticsStep_PlaceComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshCosmetics.MeshCosmeticsApparelItemDefinition
// (None)

class UClass* UMeshCosmeticsApparelItemDefinition::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshCosmeticsApparelItemDefinition");

	return Clss;
}


// MeshCosmeticsApparelItemDefinition MeshCosmetics.Default__MeshCosmeticsApparelItemDefinition
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshCosmeticsApparelItemDefinition* UMeshCosmeticsApparelItemDefinition::GetDefaultObj()
{
	static class UMeshCosmeticsApparelItemDefinition* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshCosmeticsApparelItemDefinition*>(UMeshCosmeticsApparelItemDefinition::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshCosmetics.FortCustomizableObjectParameterVariant
// (None)

class UClass* UFortCustomizableObjectParameterVariant::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCustomizableObjectParameterVariant");

	return Clss;
}


// FortCustomizableObjectParameterVariant MeshCosmetics.Default__FortCustomizableObjectParameterVariant
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCustomizableObjectParameterVariant* UFortCustomizableObjectParameterVariant::GetDefaultObj()
{
	static class UFortCustomizableObjectParameterVariant* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCustomizableObjectParameterVariant*>(UFortCustomizableObjectParameterVariant::StaticClass()->DefaultObject);

	return Default;
}


// Function MeshCosmetics.FortCustomizableObjectParameterVariant.ApplyVariants
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFortAthenaLoadout          Loadout                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortCustomizableObjectParameterVariant::ApplyVariants(class UActor* Actor, struct FFortAthenaLoadout& Loadout)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCustomizableObjectParameterVariant", "ApplyVariants");

	Params::UFortCustomizableObjectParameterVariant_ApplyVariants_Params Parms{};

	Parms.Actor = Actor;
	Parms.Loadout = Loadout;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class MeshCosmetics.FortCustomizableObjectSprayVariant
// (None)

class UClass* UFortCustomizableObjectSprayVariant::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCustomizableObjectSprayVariant");

	return Clss;
}


// FortCustomizableObjectSprayVariant MeshCosmetics.Default__FortCustomizableObjectSprayVariant
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCustomizableObjectSprayVariant* UFortCustomizableObjectSprayVariant::GetDefaultObj()
{
	static class UFortCustomizableObjectSprayVariant* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCustomizableObjectSprayVariant*>(UFortCustomizableObjectSprayVariant::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshCosmetics.MeshCosmeticsStep_ComponentRemoval
// (None)

class UClass* UMeshCosmeticsStep_ComponentRemoval::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshCosmeticsStep_ComponentRemoval");

	return Clss;
}


// MeshCosmeticsStep_ComponentRemoval MeshCosmetics.Default__MeshCosmeticsStep_ComponentRemoval
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshCosmeticsStep_ComponentRemoval* UMeshCosmeticsStep_ComponentRemoval::GetDefaultObj()
{
	static class UMeshCosmeticsStep_ComponentRemoval* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshCosmeticsStep_ComponentRemoval*>(UMeshCosmeticsStep_ComponentRemoval::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshCosmetics.MeshCosmeticsOption_ApplyAssembledMeshSchema
// (None)

class UClass* UMeshCosmeticsOption_ApplyAssembledMeshSchema::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshCosmeticsOption_ApplyAssembledMeshSchema");

	return Clss;
}


// MeshCosmeticsOption_ApplyAssembledMeshSchema MeshCosmetics.Default__MeshCosmeticsOption_ApplyAssembledMeshSchema
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshCosmeticsOption_ApplyAssembledMeshSchema* UMeshCosmeticsOption_ApplyAssembledMeshSchema::GetDefaultObj()
{
	static class UMeshCosmeticsOption_ApplyAssembledMeshSchema* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshCosmeticsOption_ApplyAssembledMeshSchema*>(UMeshCosmeticsOption_ApplyAssembledMeshSchema::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshCosmetics.MeshCosmeticsOption_ApplyCustomizableObject
// (None)

class UClass* UMeshCosmeticsOption_ApplyCustomizableObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshCosmeticsOption_ApplyCustomizableObject");

	return Clss;
}


// MeshCosmeticsOption_ApplyCustomizableObject MeshCosmetics.Default__MeshCosmeticsOption_ApplyCustomizableObject
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshCosmeticsOption_ApplyCustomizableObject* UMeshCosmeticsOption_ApplyCustomizableObject::GetDefaultObj()
{
	static class UMeshCosmeticsOption_ApplyCustomizableObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshCosmeticsOption_ApplyCustomizableObject*>(UMeshCosmeticsOption_ApplyCustomizableObject::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshCosmetics.MeshCosmeticsStep_RemoveCustomizableSkeletalComponents
// (None)

class UClass* UMeshCosmeticsStep_RemoveCustomizableSkeletalComponents::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshCosmeticsStep_RemoveCustomizableSkeletalComponents");

	return Clss;
}


// MeshCosmeticsStep_RemoveCustomizableSkeletalComponents MeshCosmetics.Default__MeshCosmeticsStep_RemoveCustomizableSkeletalComponents
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshCosmeticsStep_RemoveCustomizableSkeletalComponents* UMeshCosmeticsStep_RemoveCustomizableSkeletalComponents::GetDefaultObj()
{
	static class UMeshCosmeticsStep_RemoveCustomizableSkeletalComponents* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshCosmeticsStep_RemoveCustomizableSkeletalComponents*>(UMeshCosmeticsStep_RemoveCustomizableSkeletalComponents::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshCosmetics.MeshCosmeticsVariance_ApplyParameters
// (None)

class UClass* UMeshCosmeticsVariance_ApplyParameters::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshCosmeticsVariance_ApplyParameters");

	return Clss;
}


// MeshCosmeticsVariance_ApplyParameters MeshCosmetics.Default__MeshCosmeticsVariance_ApplyParameters
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshCosmeticsVariance_ApplyParameters* UMeshCosmeticsVariance_ApplyParameters::GetDefaultObj()
{
	static class UMeshCosmeticsVariance_ApplyParameters* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshCosmeticsVariance_ApplyParameters*>(UMeshCosmeticsVariance_ApplyParameters::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshCosmetics.MeshCosmeticsVariance_CompileObjects
// (None)

class UClass* UMeshCosmeticsVariance_CompileObjects::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshCosmeticsVariance_CompileObjects");

	return Clss;
}


// MeshCosmeticsVariance_CompileObjects MeshCosmetics.Default__MeshCosmeticsVariance_CompileObjects
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshCosmeticsVariance_CompileObjects* UMeshCosmeticsVariance_CompileObjects::GetDefaultObj()
{
	static class UMeshCosmeticsVariance_CompileObjects* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshCosmeticsVariance_CompileObjects*>(UMeshCosmeticsVariance_CompileObjects::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshCosmetics.MeshCosmeticsVariance_ManageComponents
// (None)

class UClass* UMeshCosmeticsVariance_ManageComponents::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshCosmeticsVariance_ManageComponents");

	return Clss;
}


// MeshCosmeticsVariance_ManageComponents MeshCosmetics.Default__MeshCosmeticsVariance_ManageComponents
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshCosmeticsVariance_ManageComponents* UMeshCosmeticsVariance_ManageComponents::GetDefaultObj()
{
	static class UMeshCosmeticsVariance_ManageComponents* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshCosmeticsVariance_ManageComponents*>(UMeshCosmeticsVariance_ManageComponents::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshCosmetics.MeshCosmeticsVariance_ProcessVariantAssets
// (None)

class UClass* UMeshCosmeticsVariance_ProcessVariantAssets::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshCosmeticsVariance_ProcessVariantAssets");

	return Clss;
}


// MeshCosmeticsVariance_ProcessVariantAssets MeshCosmetics.Default__MeshCosmeticsVariance_ProcessVariantAssets
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshCosmeticsVariance_ProcessVariantAssets* UMeshCosmeticsVariance_ProcessVariantAssets::GetDefaultObj()
{
	static class UMeshCosmeticsVariance_ProcessVariantAssets* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshCosmeticsVariance_ProcessVariantAssets*>(UMeshCosmeticsVariance_ProcessVariantAssets::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshCosmetics.MeshCosmeticsStep_ChooseParameters
// (None)

class UClass* UMeshCosmeticsStep_ChooseParameters::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshCosmeticsStep_ChooseParameters");

	return Clss;
}


// MeshCosmeticsStep_ChooseParameters MeshCosmetics.Default__MeshCosmeticsStep_ChooseParameters
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshCosmeticsStep_ChooseParameters* UMeshCosmeticsStep_ChooseParameters::GetDefaultObj()
{
	static class UMeshCosmeticsStep_ChooseParameters* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshCosmeticsStep_ChooseParameters*>(UMeshCosmeticsStep_ChooseParameters::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshCosmetics.MeshCosmeticsStep_CommitChosenParams
// (None)

class UClass* UMeshCosmeticsStep_CommitChosenParams::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshCosmeticsStep_CommitChosenParams");

	return Clss;
}


// MeshCosmeticsStep_CommitChosenParams MeshCosmetics.Default__MeshCosmeticsStep_CommitChosenParams
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshCosmeticsStep_CommitChosenParams* UMeshCosmeticsStep_CommitChosenParams::GetDefaultObj()
{
	static class UMeshCosmeticsStep_CommitChosenParams* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshCosmeticsStep_CommitChosenParams*>(UMeshCosmeticsStep_CommitChosenParams::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshCosmetics.GameFeatureAction_MeshCosmeticsCompileSchemaDepenencies
// (None)

class UClass* UGameFeatureAction_MeshCosmeticsCompileSchemaDepenencies::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameFeatureAction_MeshCosmeticsCompileSchemaDepenencies");

	return Clss;
}


// GameFeatureAction_MeshCosmeticsCompileSchemaDepenencies MeshCosmetics.Default__GameFeatureAction_MeshCosmeticsCompileSchemaDepenencies
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameFeatureAction_MeshCosmeticsCompileSchemaDepenencies* UGameFeatureAction_MeshCosmeticsCompileSchemaDepenencies::GetDefaultObj()
{
	static class UGameFeatureAction_MeshCosmeticsCompileSchemaDepenencies* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameFeatureAction_MeshCosmeticsCompileSchemaDepenencies*>(UGameFeatureAction_MeshCosmeticsCompileSchemaDepenencies::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshCosmetics.MeshCosmeticTagInterface
// (None)

class UClass* UMeshCosmeticTagInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshCosmeticTagInterface");

	return Clss;
}


// MeshCosmeticTagInterface MeshCosmetics.Default__MeshCosmeticTagInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshCosmeticTagInterface* UMeshCosmeticTagInterface::GetDefaultObj()
{
	static class UMeshCosmeticTagInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshCosmeticTagInterface*>(UMeshCosmeticTagInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function MeshCosmetics.MeshCosmeticTagInterface.OnPostCustomizationAnimGameplayTags_BP
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       GameplayTags                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UMeshCosmeticTagInterface::OnPostCustomizationAnimGameplayTags_BP(struct FGameplayTagContainer& GameplayTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshCosmeticTagInterface", "OnPostCustomizationAnimGameplayTags_BP");

	Params::UMeshCosmeticTagInterface_OnPostCustomizationAnimGameplayTags_BP_Params Parms{};

	Parms.GameplayTags = GameplayTags;

	UObject::ProcessEvent(Func, &Parms);

}


// Class MeshCosmetics.FortCustomizableInstanceLODManagement
// (None)

class UClass* UFortCustomizableInstanceLODManagement::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCustomizableInstanceLODManagement");

	return Clss;
}


// FortCustomizableInstanceLODManagement MeshCosmetics.Default__FortCustomizableInstanceLODManagement
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCustomizableInstanceLODManagement* UFortCustomizableInstanceLODManagement::GetDefaultObj()
{
	static class UFortCustomizableInstanceLODManagement* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCustomizableInstanceLODManagement*>(UFortCustomizableInstanceLODManagement::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshCosmetics.MeshCosmeticsLayoutSchema
// (None)

class UClass* UMeshCosmeticsLayoutSchema::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshCosmeticsLayoutSchema");

	return Clss;
}


// MeshCosmeticsLayoutSchema MeshCosmetics.Default__MeshCosmeticsLayoutSchema
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshCosmeticsLayoutSchema* UMeshCosmeticsLayoutSchema::GetDefaultObj()
{
	static class UMeshCosmeticsLayoutSchema* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshCosmeticsLayoutSchema*>(UMeshCosmeticsLayoutSchema::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshCosmetics.MeshCosmeticsAppliedSchemaData
// (None)

class UClass* UMeshCosmeticsAppliedSchemaData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshCosmeticsAppliedSchemaData");

	return Clss;
}


// MeshCosmeticsAppliedSchemaData MeshCosmetics.Default__MeshCosmeticsAppliedSchemaData
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshCosmeticsAppliedSchemaData* UMeshCosmeticsAppliedSchemaData::GetDefaultObj()
{
	static class UMeshCosmeticsAppliedSchemaData* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshCosmeticsAppliedSchemaData*>(UMeshCosmeticsAppliedSchemaData::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshCosmetics.MeshCosmeticsSupportedSchemaData
// (None)

class UClass* UMeshCosmeticsSupportedSchemaData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshCosmeticsSupportedSchemaData");

	return Clss;
}


// MeshCosmeticsSupportedSchemaData MeshCosmetics.Default__MeshCosmeticsSupportedSchemaData
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshCosmeticsSupportedSchemaData* UMeshCosmeticsSupportedSchemaData::GetDefaultObj()
{
	static class UMeshCosmeticsSupportedSchemaData* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshCosmeticsSupportedSchemaData*>(UMeshCosmeticsSupportedSchemaData::StaticClass()->DefaultObject);

	return Default;
}

}


