#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SentryRuntime.CreativeSentryAnimInstance
// (None)

class UClass* UCreativeSentryAnimInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CreativeSentryAnimInstance");

	return Clss;
}


// CreativeSentryAnimInstance SentryRuntime.Default__CreativeSentryAnimInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UCreativeSentryAnimInstance* UCreativeSentryAnimInstance::GetDefaultObj()
{
	static class UCreativeSentryAnimInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UCreativeSentryAnimInstance*>(UCreativeSentryAnimInstance::StaticClass()->DefaultObject);

	return Default;
}

}


