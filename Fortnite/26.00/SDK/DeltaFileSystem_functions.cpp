#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class DeltaFileSystem.DeltaFileSaveHandlerTestContext
// (None)

class UClass* UDeltaFileSaveHandlerTestContext::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DeltaFileSaveHandlerTestContext");

	return Clss;
}


// DeltaFileSaveHandlerTestContext DeltaFileSystem.Default__DeltaFileSaveHandlerTestContext
// (Public, ClassDefaultObject, ArchetypeObject)

class UDeltaFileSaveHandlerTestContext* UDeltaFileSaveHandlerTestContext::GetDefaultObj()
{
	static class UDeltaFileSaveHandlerTestContext* Default = nullptr;

	if (!Default)
		Default = static_cast<UDeltaFileSaveHandlerTestContext*>(UDeltaFileSaveHandlerTestContext::StaticClass()->DefaultObject);

	return Default;
}


// Class DeltaFileSystem.DeltaFile
// (None)

class UClass* UDeltaFile::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DeltaFile");

	return Clss;
}


// DeltaFile DeltaFileSystem.Default__DeltaFile
// (Public, ClassDefaultObject, ArchetypeObject)

class UDeltaFile* UDeltaFile::GetDefaultObj()
{
	static class UDeltaFile* Default = nullptr;

	if (!Default)
		Default = static_cast<UDeltaFile*>(UDeltaFile::StaticClass()->DefaultObject);

	return Default;
}


// Class DeltaFileSystem.DeltaFileApplier
// (None)

class UClass* UDeltaFileApplier::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DeltaFileApplier");

	return Clss;
}


// DeltaFileApplier DeltaFileSystem.Default__DeltaFileApplier
// (Public, ClassDefaultObject, ArchetypeObject)

class UDeltaFileApplier* UDeltaFileApplier::GetDefaultObj()
{
	static class UDeltaFileApplier* Default = nullptr;

	if (!Default)
		Default = static_cast<UDeltaFileApplier*>(UDeltaFileApplier::StaticClass()->DefaultObject);

	return Default;
}


// Class DeltaFileSystem.DeltaComponent
// (None)

class UClass* UDeltaComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DeltaComponent");

	return Clss;
}


// DeltaComponent DeltaFileSystem.Default__DeltaComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UDeltaComponent* UDeltaComponent::GetDefaultObj()
{
	static class UDeltaComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UDeltaComponent*>(UDeltaComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class DeltaFileSystem.DeltaFileSaveHandler
// (None)

class UClass* UDeltaFileSaveHandler::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DeltaFileSaveHandler");

	return Clss;
}


// DeltaFileSaveHandler DeltaFileSystem.Default__DeltaFileSaveHandler
// (Public, ClassDefaultObject, ArchetypeObject)

class UDeltaFileSaveHandler* UDeltaFileSaveHandler::GetDefaultObj()
{
	static class UDeltaFileSaveHandler* Default = nullptr;

	if (!Default)
		Default = static_cast<UDeltaFileSaveHandler*>(UDeltaFileSaveHandler::StaticClass()->DefaultObject);

	return Default;
}


// Class DeltaFileSystem.DeltaFileSubsystem
// (None)

class UClass* UDeltaFileSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DeltaFileSubsystem");

	return Clss;
}


// DeltaFileSubsystem DeltaFileSystem.Default__DeltaFileSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UDeltaFileSubsystem* UDeltaFileSubsystem::GetDefaultObj()
{
	static class UDeltaFileSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UDeltaFileSubsystem*>(UDeltaFileSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Class DeltaFileSystem.MapDelta
// (None)

class UClass* UMapDelta::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MapDelta");

	return Clss;
}


// MapDelta DeltaFileSystem.Default__MapDelta
// (Public, ClassDefaultObject, ArchetypeObject)

class UMapDelta* UMapDelta::GetDefaultObj()
{
	static class UMapDelta* Default = nullptr;

	if (!Default)
		Default = static_cast<UMapDelta*>(UMapDelta::StaticClass()->DefaultObject);

	return Default;
}


// Class DeltaFileSystem.MapDeltaApplier
// (None)

class UClass* UMapDeltaApplier::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MapDeltaApplier");

	return Clss;
}


// MapDeltaApplier DeltaFileSystem.Default__MapDeltaApplier
// (Public, ClassDefaultObject, ArchetypeObject)

class UMapDeltaApplier* UMapDeltaApplier::GetDefaultObj()
{
	static class UMapDeltaApplier* Default = nullptr;

	if (!Default)
		Default = static_cast<UMapDeltaApplier*>(UMapDeltaApplier::StaticClass()->DefaultObject);

	return Default;
}

}


