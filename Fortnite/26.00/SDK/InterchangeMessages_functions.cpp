#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class InterchangeMessages.InterchangeResultMeshWarning
// (None)

class UClass* UInterchangeResultMeshWarning::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeResultMeshWarning");

	return Clss;
}


// InterchangeResultMeshWarning InterchangeMessages.Default__InterchangeResultMeshWarning
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeResultMeshWarning* UInterchangeResultMeshWarning::GetDefaultObj()
{
	static class UInterchangeResultMeshWarning* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeResultMeshWarning*>(UInterchangeResultMeshWarning::StaticClass()->DefaultObject);

	return Default;
}


// Class InterchangeMessages.InterchangeResultTextureWarning
// (None)

class UClass* UInterchangeResultTextureWarning::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeResultTextureWarning");

	return Clss;
}


// InterchangeResultTextureWarning InterchangeMessages.Default__InterchangeResultTextureWarning
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeResultTextureWarning* UInterchangeResultTextureWarning::GetDefaultObj()
{
	static class UInterchangeResultTextureWarning* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeResultTextureWarning*>(UInterchangeResultTextureWarning::StaticClass()->DefaultObject);

	return Default;
}


// Class InterchangeMessages.InterchangeResultMeshError
// (None)

class UClass* UInterchangeResultMeshError::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeResultMeshError");

	return Clss;
}


// InterchangeResultMeshError InterchangeMessages.Default__InterchangeResultMeshError
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeResultMeshError* UInterchangeResultMeshError::GetDefaultObj()
{
	static class UInterchangeResultMeshError* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeResultMeshError*>(UInterchangeResultMeshError::StaticClass()->DefaultObject);

	return Default;
}


// Class InterchangeMessages.InterchangeResultMeshWarning_Generic
// (None)

class UClass* UInterchangeResultMeshWarning_Generic::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeResultMeshWarning_Generic");

	return Clss;
}


// InterchangeResultMeshWarning_Generic InterchangeMessages.Default__InterchangeResultMeshWarning_Generic
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeResultMeshWarning_Generic* UInterchangeResultMeshWarning_Generic::GetDefaultObj()
{
	static class UInterchangeResultMeshWarning_Generic* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeResultMeshWarning_Generic*>(UInterchangeResultMeshWarning_Generic::StaticClass()->DefaultObject);

	return Default;
}


// Class InterchangeMessages.InterchangeResultMeshError_Generic
// (None)

class UClass* UInterchangeResultMeshError_Generic::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeResultMeshError_Generic");

	return Clss;
}


// InterchangeResultMeshError_Generic InterchangeMessages.Default__InterchangeResultMeshError_Generic
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeResultMeshError_Generic* UInterchangeResultMeshError_Generic::GetDefaultObj()
{
	static class UInterchangeResultMeshError_Generic* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeResultMeshError_Generic*>(UInterchangeResultMeshError_Generic::StaticClass()->DefaultObject);

	return Default;
}


// Class InterchangeMessages.InterchangeResultMeshWarning_TooManyUVs
// (None)

class UClass* UInterchangeResultMeshWarning_TooManyUVs::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeResultMeshWarning_TooManyUVs");

	return Clss;
}


// InterchangeResultMeshWarning_TooManyUVs InterchangeMessages.Default__InterchangeResultMeshWarning_TooManyUVs
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeResultMeshWarning_TooManyUVs* UInterchangeResultMeshWarning_TooManyUVs::GetDefaultObj()
{
	static class UInterchangeResultMeshWarning_TooManyUVs* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeResultMeshWarning_TooManyUVs*>(UInterchangeResultMeshWarning_TooManyUVs::StaticClass()->DefaultObject);

	return Default;
}


// Class InterchangeMessages.InterchangeResultTextureWarning_TextureFileDoNotExist
// (None)

class UClass* UInterchangeResultTextureWarning_TextureFileDoNotExist::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeResultTextureWarning_TextureFileDoNotExist");

	return Clss;
}


// InterchangeResultTextureWarning_TextureFileDoNotExist InterchangeMessages.Default__InterchangeResultTextureWarning_TextureFileDoNotExist
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeResultTextureWarning_TextureFileDoNotExist* UInterchangeResultTextureWarning_TextureFileDoNotExist::GetDefaultObj()
{
	static class UInterchangeResultTextureWarning_TextureFileDoNotExist* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeResultTextureWarning_TextureFileDoNotExist*>(UInterchangeResultTextureWarning_TextureFileDoNotExist::StaticClass()->DefaultObject);

	return Default;
}

}


