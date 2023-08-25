#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class VerseWorldPartition.VerseDataLayerManagerBase
// (None)

class UClass* UVerseDataLayerManagerBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseDataLayerManagerBase");

	return Clss;
}


// VerseDataLayerManagerBase VerseWorldPartition.Default__VerseDataLayerManagerBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UVerseDataLayerManagerBase* UVerseDataLayerManagerBase::GetDefaultObj()
{
	static class UVerseDataLayerManagerBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseDataLayerManagerBase*>(UVerseDataLayerManagerBase::StaticClass()->DefaultObject);

	return Default;
}

}


