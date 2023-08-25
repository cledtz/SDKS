#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CosmeticsFrameworkFlowgraph.OrderedOperation
// (None)

class UClass* UOrderedOperation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OrderedOperation");

	return Clss;
}


// OrderedOperation CosmeticsFrameworkFlowgraph.Default__OrderedOperation
// (Public, ClassDefaultObject, ArchetypeObject)

class UOrderedOperation* UOrderedOperation::GetDefaultObj()
{
	static class UOrderedOperation* Default = nullptr;

	if (!Default)
		Default = static_cast<UOrderedOperation*>(UOrderedOperation::StaticClass()->DefaultObject);

	return Default;
}

}


