#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class VerseGameplayTags.EntityTagContainerComponent
// (None)

class UClass* UEntityTagContainerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EntityTagContainerComponent");

	return Clss;
}


// EntityTagContainerComponent VerseGameplayTags.Default__EntityTagContainerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UEntityTagContainerComponent* UEntityTagContainerComponent::GetDefaultObj()
{
	static class UEntityTagContainerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UEntityTagContainerComponent*>(UEntityTagContainerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class VerseGameplayTags.VerseGameplayTagBase
// (None)

class UClass* UVerseGameplayTagBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseGameplayTagBase");

	return Clss;
}


// VerseGameplayTagBase VerseGameplayTags.Default__VerseGameplayTagBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UVerseGameplayTagBase* UVerseGameplayTagBase::GetDefaultObj()
{
	static class UVerseGameplayTagBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseGameplayTagBase*>(UVerseGameplayTagBase::StaticClass()->DefaultObject);

	return Default;
}


// Class VerseGameplayTags.TaggedObjectQueryWorldSubsystemBase
// (None)

class UClass* UTaggedObjectQueryWorldSubsystemBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TaggedObjectQueryWorldSubsystemBase");

	return Clss;
}


// TaggedObjectQueryWorldSubsystemBase VerseGameplayTags.Default__TaggedObjectQueryWorldSubsystemBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UTaggedObjectQueryWorldSubsystemBase* UTaggedObjectQueryWorldSubsystemBase::GetDefaultObj()
{
	static class UTaggedObjectQueryWorldSubsystemBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UTaggedObjectQueryWorldSubsystemBase*>(UTaggedObjectQueryWorldSubsystemBase::StaticClass()->DefaultObject);

	return Default;
}


// Class VerseGameplayTags.TagRegistrationHandler
// (None)

class UClass* UTagRegistrationHandler::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TagRegistrationHandler");

	return Clss;
}


// TagRegistrationHandler VerseGameplayTags.Default__TagRegistrationHandler
// (Public, ClassDefaultObject, ArchetypeObject)

class UTagRegistrationHandler* UTagRegistrationHandler::GetDefaultObj()
{
	static class UTagRegistrationHandler* Default = nullptr;

	if (!Default)
		Default = static_cast<UTagRegistrationHandler*>(UTagRegistrationHandler::StaticClass()->DefaultObject);

	return Default;
}


// Class VerseGameplayTags.VerseGameplayTagContainerBase
// (None)

class UClass* UVerseGameplayTagContainerBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseGameplayTagContainerBase");

	return Clss;
}


// VerseGameplayTagContainerBase VerseGameplayTags.Default__VerseGameplayTagContainerBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UVerseGameplayTagContainerBase* UVerseGameplayTagContainerBase::GetDefaultObj()
{
	static class UVerseGameplayTagContainerBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseGameplayTagContainerBase*>(UVerseGameplayTagContainerBase::StaticClass()->DefaultObject);

	return Default;
}


// Class VerseGameplayTags.VerseGameplayTagAssetInterface
// (None)

class UClass* UVerseGameplayTagAssetInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseGameplayTagAssetInterface");

	return Clss;
}


// VerseGameplayTagAssetInterface VerseGameplayTags.Default__VerseGameplayTagAssetInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UVerseGameplayTagAssetInterface* UVerseGameplayTagAssetInterface::GetDefaultObj()
{
	static class UVerseGameplayTagAssetInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseGameplayTagAssetInterface*>(UVerseGameplayTagAssetInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseGameplayTags.VerseGameplayTagAssetInterface.HasMatchingGameplayTag
// (Native, Public, Const)
// Parameters:
// struct FVerseGameplayTag           TagToCheck                                                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVerseGameplayTagAssetInterface::HasMatchingGameplayTag(const struct FVerseGameplayTag& TagToCheck)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseGameplayTagAssetInterface", "HasMatchingGameplayTag");

	Params::UVerseGameplayTagAssetInterface_HasMatchingGameplayTag_Params Parms{};

	Parms.TagToCheck = TagToCheck;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseGameplayTags.VerseGameplayTagAssetInterface.HasAnyMatchingGameplayTags
// (Native, Public, HasOutParams, Const)
// Parameters:
// struct FVerseGameplayTagContainer  TagContainer                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVerseGameplayTagAssetInterface::HasAnyMatchingGameplayTags(struct FVerseGameplayTagContainer& TagContainer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseGameplayTagAssetInterface", "HasAnyMatchingGameplayTags");

	Params::UVerseGameplayTagAssetInterface_HasAnyMatchingGameplayTags_Params Parms{};

	Parms.TagContainer = TagContainer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseGameplayTags.VerseGameplayTagAssetInterface.HasAllMatchingGameplayTags
// (Native, Public, HasOutParams, Const)
// Parameters:
// struct FVerseGameplayTagContainer  TagContainer                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVerseGameplayTagAssetInterface::HasAllMatchingGameplayTags(struct FVerseGameplayTagContainer& TagContainer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseGameplayTagAssetInterface", "HasAllMatchingGameplayTags");

	Params::UVerseGameplayTagAssetInterface_HasAllMatchingGameplayTags_Params Parms{};

	Parms.TagContainer = TagContainer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseGameplayTags.VerseGameplayTagAssetInterface.GetOwnedGameplayTags
// (Native, Public, HasOutParams, Const)
// Parameters:
// struct FVerseGameplayTagContainer  TagContainer                                                     (Parm, OutParm, NativeAccessSpecifierPublic)

void UVerseGameplayTagAssetInterface::GetOwnedGameplayTags(struct FVerseGameplayTagContainer* TagContainer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseGameplayTagAssetInterface", "GetOwnedGameplayTags");

	Params::UVerseGameplayTagAssetInterface_GetOwnedGameplayTags_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TagContainer != nullptr)
		*TagContainer = Parms.TagContainer;

}


// Class VerseGameplayTags.VerseTagMarkupComponent
// (None)

class UClass* UVerseTagMarkupComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseTagMarkupComponent");

	return Clss;
}


// VerseTagMarkupComponent VerseGameplayTags.Default__VerseTagMarkupComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UVerseTagMarkupComponent* UVerseTagMarkupComponent::GetDefaultObj()
{
	static class UVerseTagMarkupComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseTagMarkupComponent*>(UVerseTagMarkupComponent::StaticClass()->DefaultObject);

	return Default;
}

}


