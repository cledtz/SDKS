#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AnimPreviewFoleyComponent.BP_AnimPreviewFoleyComponent_C
// (None)

class UClass* UBP_AnimPreviewFoleyComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AnimPreviewFoleyComponent_C");

	return Clss;
}


// BP_AnimPreviewFoleyComponent_C BP_AnimPreviewFoleyComponent.Default__BP_AnimPreviewFoleyComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AnimPreviewFoleyComponent_C* UBP_AnimPreviewFoleyComponent_C::GetDefaultObj()
{
	static class UBP_AnimPreviewFoleyComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AnimPreviewFoleyComponent_C*>(UBP_AnimPreviewFoleyComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}


