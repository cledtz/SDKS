#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class EpicMediaLocalizedOverlays.EpicMediaDownloadLocalizedOverlays
// (None)

class UClass* UEpicMediaDownloadLocalizedOverlays::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EpicMediaDownloadLocalizedOverlays");

	return Clss;
}


// EpicMediaDownloadLocalizedOverlays EpicMediaLocalizedOverlays.Default__EpicMediaDownloadLocalizedOverlays
// (Public, ClassDefaultObject, ArchetypeObject)

class UEpicMediaDownloadLocalizedOverlays* UEpicMediaDownloadLocalizedOverlays::GetDefaultObj()
{
	static class UEpicMediaDownloadLocalizedOverlays* Default = nullptr;

	if (!Default)
		Default = static_cast<UEpicMediaDownloadLocalizedOverlays*>(UEpicMediaDownloadLocalizedOverlays::StaticClass()->DefaultObject);

	return Default;
}

}


