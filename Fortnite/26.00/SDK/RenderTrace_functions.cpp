#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class RenderTrace.MaterialExpressionPhysicalMaterialOutput
// (None)

class UClass* UMaterialExpressionPhysicalMaterialOutput::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MaterialExpressionPhysicalMaterialOutput");

	return Clss;
}


// MaterialExpressionPhysicalMaterialOutput RenderTrace.Default__MaterialExpressionPhysicalMaterialOutput
// (Public, ClassDefaultObject, ArchetypeObject)

class UMaterialExpressionPhysicalMaterialOutput* UMaterialExpressionPhysicalMaterialOutput::GetDefaultObj()
{
	static class UMaterialExpressionPhysicalMaterialOutput* Default = nullptr;

	if (!Default)
		Default = static_cast<UMaterialExpressionPhysicalMaterialOutput*>(UMaterialExpressionPhysicalMaterialOutput::StaticClass()->DefaultObject);

	return Default;
}

}


