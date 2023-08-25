#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MassEntity.MassModuleSettings
// (None)

class UClass* UMassModuleSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MassModuleSettings");

	return Clss;
}


// MassModuleSettings MassEntity.Default__MassModuleSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UMassModuleSettings* UMassModuleSettings::GetDefaultObj()
{
	static class UMassModuleSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UMassModuleSettings*>(UMassModuleSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class MassEntity.MassEntitySettings
// (None)

class UClass* UMassEntitySettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MassEntitySettings");

	return Clss;
}


// MassEntitySettings MassEntity.Default__MassEntitySettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UMassEntitySettings* UMassEntitySettings::GetDefaultObj()
{
	static class UMassEntitySettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UMassEntitySettings*>(UMassEntitySettings::StaticClass()->DefaultObject);

	return Default;
}


// Class MassEntity.MassEntitySubsystem
// (None)

class UClass* UMassEntitySubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MassEntitySubsystem");

	return Clss;
}


// MassEntitySubsystem MassEntity.Default__MassEntitySubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMassEntitySubsystem* UMassEntitySubsystem::GetDefaultObj()
{
	static class UMassEntitySubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMassEntitySubsystem*>(UMassEntitySubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Class MassEntity.MassProcessor
// (None)

class UClass* UMassProcessor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MassProcessor");

	return Clss;
}


// MassProcessor MassEntity.Default__MassProcessor
// (Public, ClassDefaultObject, ArchetypeObject)

class UMassProcessor* UMassProcessor::GetDefaultObj()
{
	static class UMassProcessor* Default = nullptr;

	if (!Default)
		Default = static_cast<UMassProcessor*>(UMassProcessor::StaticClass()->DefaultObject);

	return Default;
}


// Class MassEntity.MassObserverProcessor
// (None)

class UClass* UMassObserverProcessor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MassObserverProcessor");

	return Clss;
}


// MassObserverProcessor MassEntity.Default__MassObserverProcessor
// (Public, ClassDefaultObject, ArchetypeObject)

class UMassObserverProcessor* UMassObserverProcessor::GetDefaultObj()
{
	static class UMassObserverProcessor* Default = nullptr;

	if (!Default)
		Default = static_cast<UMassObserverProcessor*>(UMassObserverProcessor::StaticClass()->DefaultObject);

	return Default;
}


// Class MassEntity.MassObserverRegistry
// (None)

class UClass* UMassObserverRegistry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MassObserverRegistry");

	return Clss;
}


// MassObserverRegistry MassEntity.Default__MassObserverRegistry
// (Public, ClassDefaultObject, ArchetypeObject)

class UMassObserverRegistry* UMassObserverRegistry::GetDefaultObj()
{
	static class UMassObserverRegistry* Default = nullptr;

	if (!Default)
		Default = static_cast<UMassObserverRegistry*>(UMassObserverRegistry::StaticClass()->DefaultObject);

	return Default;
}


// Class MassEntity.MassCompositeProcessor
// (None)

class UClass* UMassCompositeProcessor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MassCompositeProcessor");

	return Clss;
}


// MassCompositeProcessor MassEntity.Default__MassCompositeProcessor
// (Public, ClassDefaultObject, ArchetypeObject)

class UMassCompositeProcessor* UMassCompositeProcessor::GetDefaultObj()
{
	static class UMassCompositeProcessor* Default = nullptr;

	if (!Default)
		Default = static_cast<UMassCompositeProcessor*>(UMassCompositeProcessor::StaticClass()->DefaultObject);

	return Default;
}


// Class MassEntity.MassSettings
// (None)

class UClass* UMassSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MassSettings");

	return Clss;
}


// MassSettings MassEntity.Default__MassSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UMassSettings* UMassSettings::GetDefaultObj()
{
	static class UMassSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UMassSettings*>(UMassSettings::StaticClass()->DefaultObject);

	return Default;
}

}


