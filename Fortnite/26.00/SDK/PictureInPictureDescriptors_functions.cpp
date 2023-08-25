#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class PictureInPictureDescriptors.PictureInPicturePartnerDataAsset
// (None)

class UClass* UPictureInPicturePartnerDataAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PictureInPicturePartnerDataAsset");

	return Clss;
}


// PictureInPicturePartnerDataAsset PictureInPictureDescriptors.Default__PictureInPicturePartnerDataAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UPictureInPicturePartnerDataAsset* UPictureInPicturePartnerDataAsset::GetDefaultObj()
{
	static class UPictureInPicturePartnerDataAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UPictureInPicturePartnerDataAsset*>(UPictureInPicturePartnerDataAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class PictureInPictureDescriptors.PictureInPictureActionData
// (None)

class UClass* UPictureInPictureActionData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PictureInPictureActionData");

	return Clss;
}


// PictureInPictureActionData PictureInPictureDescriptors.Default__PictureInPictureActionData
// (Public, ClassDefaultObject, ArchetypeObject)

class UPictureInPictureActionData* UPictureInPictureActionData::GetDefaultObj()
{
	static class UPictureInPictureActionData* Default = nullptr;

	if (!Default)
		Default = static_cast<UPictureInPictureActionData*>(UPictureInPictureActionData::StaticClass()->DefaultObject);

	return Default;
}


// Function PictureInPictureDescriptors.PictureInPictureActionData.CallEvent
// (Native, Public, BlueprintCallable)
// Parameters:

void UPictureInPictureActionData::CallEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PictureInPictureActionData", "CallEvent");

	Params::UPictureInPictureActionData_CallEvent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class PictureInPictureDescriptors.PictureInPictureSourceActionData
// (None)

class UClass* UPictureInPictureSourceActionData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PictureInPictureSourceActionData");

	return Clss;
}


// PictureInPictureSourceActionData PictureInPictureDescriptors.Default__PictureInPictureSourceActionData
// (Public, ClassDefaultObject, ArchetypeObject)

class UPictureInPictureSourceActionData* UPictureInPictureSourceActionData::GetDefaultObj()
{
	static class UPictureInPictureSourceActionData* Default = nullptr;

	if (!Default)
		Default = static_cast<UPictureInPictureSourceActionData*>(UPictureInPictureSourceActionData::StaticClass()->DefaultObject);

	return Default;
}


// Class PictureInPictureDescriptors.PictureInPictureAnalyticsManager
// (None)

class UClass* UPictureInPictureAnalyticsManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PictureInPictureAnalyticsManager");

	return Clss;
}


// PictureInPictureAnalyticsManager PictureInPictureDescriptors.Default__PictureInPictureAnalyticsManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UPictureInPictureAnalyticsManager* UPictureInPictureAnalyticsManager::GetDefaultObj()
{
	static class UPictureInPictureAnalyticsManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UPictureInPictureAnalyticsManager*>(UPictureInPictureAnalyticsManager::StaticClass()->DefaultObject);

	return Default;
}

}


