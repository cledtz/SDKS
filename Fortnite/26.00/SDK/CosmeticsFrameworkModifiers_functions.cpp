#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CosmeticsFrameworkModifiers.CosmeticModifierInterface
// (None)

class UClass* UCosmeticModifierInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CosmeticModifierInterface");

	return Clss;
}


// CosmeticModifierInterface CosmeticsFrameworkModifiers.Default__CosmeticModifierInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UCosmeticModifierInterface* UCosmeticModifierInterface::GetDefaultObj()
{
	static class UCosmeticModifierInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UCosmeticModifierInterface*>(UCosmeticModifierInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class CosmeticsFrameworkModifiers.CosmeticModifierOwnerInterface
// (None)

class UClass* UCosmeticModifierOwnerInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CosmeticModifierOwnerInterface");

	return Clss;
}


// CosmeticModifierOwnerInterface CosmeticsFrameworkModifiers.Default__CosmeticModifierOwnerInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UCosmeticModifierOwnerInterface* UCosmeticModifierOwnerInterface::GetDefaultObj()
{
	static class UCosmeticModifierOwnerInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UCosmeticModifierOwnerInterface*>(UCosmeticModifierOwnerInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class CosmeticsFrameworkModifiers.CosmeticModifierProviderInterface
// (None)

class UClass* UCosmeticModifierProviderInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CosmeticModifierProviderInterface");

	return Clss;
}


// CosmeticModifierProviderInterface CosmeticsFrameworkModifiers.Default__CosmeticModifierProviderInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UCosmeticModifierProviderInterface* UCosmeticModifierProviderInterface::GetDefaultObj()
{
	static class UCosmeticModifierProviderInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UCosmeticModifierProviderInterface*>(UCosmeticModifierProviderInterface::StaticClass()->DefaultObject);

	return Default;
}

}


