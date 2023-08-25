#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class VKDownloadOnDemandGameplay.DownloadOnDemandComponent
// (None)

class UClass* UDownloadOnDemandComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DownloadOnDemandComponent");

	return Clss;
}


// DownloadOnDemandComponent VKDownloadOnDemandGameplay.Default__DownloadOnDemandComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UDownloadOnDemandComponent* UDownloadOnDemandComponent::GetDefaultObj()
{
	static class UDownloadOnDemandComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UDownloadOnDemandComponent*>(UDownloadOnDemandComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function VKDownloadOnDemandGameplay.DownloadOnDemandComponent.HandleMnemonicsFromValkyriePaletteProviderReceived
// (Final, Native, Private, HasOutParams)
// Parameters:
// TArray<class FString>              Mnemonics                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UDownloadOnDemandComponent::HandleMnemonicsFromValkyriePaletteProviderReceived(TArray<class FString>& Mnemonics)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DownloadOnDemandComponent", "HandleMnemonicsFromValkyriePaletteProviderReceived");

	Params::UDownloadOnDemandComponent_HandleMnemonicsFromValkyriePaletteProviderReceived_Params Parms{};

	Parms.Mnemonics = Mnemonics;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class VKDownloadOnDemandGameplay.DownloadOnDemandPlot
// (None)

class UClass* UDownloadOnDemandPlot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DownloadOnDemandPlot");

	return Clss;
}


// DownloadOnDemandPlot VKDownloadOnDemandGameplay.Default__DownloadOnDemandPlot
// (Public, ClassDefaultObject, ArchetypeObject)

class UDownloadOnDemandPlot* UDownloadOnDemandPlot::GetDefaultObj()
{
	static class UDownloadOnDemandPlot* Default = nullptr;

	if (!Default)
		Default = static_cast<UDownloadOnDemandPlot*>(UDownloadOnDemandPlot::StaticClass()->DefaultObject);

	return Default;
}


// Class VKDownloadOnDemandGameplay.DownloadOnDemandProject
// (None)

class UClass* UDownloadOnDemandProject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DownloadOnDemandProject");

	return Clss;
}


// DownloadOnDemandProject VKDownloadOnDemandGameplay.Default__DownloadOnDemandProject
// (Public, ClassDefaultObject, ArchetypeObject)

class UDownloadOnDemandProject* UDownloadOnDemandProject::GetDefaultObj()
{
	static class UDownloadOnDemandProject* Default = nullptr;

	if (!Default)
		Default = static_cast<UDownloadOnDemandProject*>(UDownloadOnDemandProject::StaticClass()->DefaultObject);

	return Default;
}


// Class VKDownloadOnDemandGameplay.DownloadOnDemandProjectContent
// (None)

class UClass* UDownloadOnDemandProjectContent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DownloadOnDemandProjectContent");

	return Clss;
}


// DownloadOnDemandProjectContent VKDownloadOnDemandGameplay.Default__DownloadOnDemandProjectContent
// (Public, ClassDefaultObject, ArchetypeObject)

class UDownloadOnDemandProjectContent* UDownloadOnDemandProjectContent::GetDefaultObj()
{
	static class UDownloadOnDemandProjectContent* Default = nullptr;

	if (!Default)
		Default = static_cast<UDownloadOnDemandProjectContent*>(UDownloadOnDemandProjectContent::StaticClass()->DefaultObject);

	return Default;
}


// Class VKDownloadOnDemandGameplay.DownloadOnDemandProjectDescriptor
// (None)

class UClass* UDownloadOnDemandProjectDescriptor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DownloadOnDemandProjectDescriptor");

	return Clss;
}


// DownloadOnDemandProjectDescriptor VKDownloadOnDemandGameplay.Default__DownloadOnDemandProjectDescriptor
// (Public, ClassDefaultObject, ArchetypeObject)

class UDownloadOnDemandProjectDescriptor* UDownloadOnDemandProjectDescriptor::GetDefaultObj()
{
	static class UDownloadOnDemandProjectDescriptor* Default = nullptr;

	if (!Default)
		Default = static_cast<UDownloadOnDemandProjectDescriptor*>(UDownloadOnDemandProjectDescriptor::StaticClass()->DefaultObject);

	return Default;
}


// Class VKDownloadOnDemandGameplay.DownloadOnDemandProjectImage
// (None)

class UClass* UDownloadOnDemandProjectImage::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DownloadOnDemandProjectImage");

	return Clss;
}


// DownloadOnDemandProjectImage VKDownloadOnDemandGameplay.Default__DownloadOnDemandProjectImage
// (Public, ClassDefaultObject, ArchetypeObject)

class UDownloadOnDemandProjectImage* UDownloadOnDemandProjectImage::GetDefaultObj()
{
	static class UDownloadOnDemandProjectImage* Default = nullptr;

	if (!Default)
		Default = static_cast<UDownloadOnDemandProjectImage*>(UDownloadOnDemandProjectImage::StaticClass()->DefaultObject);

	return Default;
}

}


