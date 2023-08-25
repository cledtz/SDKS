#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SaveTheWorldRuntime.FortSTWUIDataBase
// (None)

class UClass* UFortSTWUIDataBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortSTWUIDataBase");

	return Clss;
}


// FortSTWUIDataBase SaveTheWorldRuntime.Default__FortSTWUIDataBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortSTWUIDataBase* UFortSTWUIDataBase::GetDefaultObj()
{
	static class UFortSTWUIDataBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortSTWUIDataBase*>(UFortSTWUIDataBase::StaticClass()->DefaultObject);

	return Default;
}

}


