#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class UEKittTexture.UEKittTexture
// (None)

class UClass* UUEKittTexture::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UEKittTexture");

	return Clss;
}


// UEKittTexture UEKittTexture.Default__UEKittTexture
// (Public, ClassDefaultObject, ArchetypeObject)

class UUEKittTexture* UUEKittTexture::GetDefaultObj()
{
	static class UUEKittTexture* Default = nullptr;

	if (!Default)
		Default = static_cast<UUEKittTexture*>(UUEKittTexture::StaticClass()->DefaultObject);

	return Default;
}

}


