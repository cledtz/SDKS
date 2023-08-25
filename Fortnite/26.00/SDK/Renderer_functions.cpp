#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Renderer.SparseVolumeTextureViewerComponent
// (SceneComponent, PrimitiveComponent)

class UClass* USparseVolumeTextureViewerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SparseVolumeTextureViewerComponent");

	return Clss;
}


// SparseVolumeTextureViewerComponent Renderer.Default__SparseVolumeTextureViewerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class USparseVolumeTextureViewerComponent* USparseVolumeTextureViewerComponent::GetDefaultObj()
{
	static class USparseVolumeTextureViewerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<USparseVolumeTextureViewerComponent*>(USparseVolumeTextureViewerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Renderer.SparseVolumeTextureViewer
// (Actor)

class UClass* USparseVolumeTextureViewer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SparseVolumeTextureViewer");

	return Clss;
}


// SparseVolumeTextureViewer Renderer.Default__SparseVolumeTextureViewer
// (Public, ClassDefaultObject, ArchetypeObject)

class USparseVolumeTextureViewer* USparseVolumeTextureViewer::GetDefaultObj()
{
	static class USparseVolumeTextureViewer* Default = nullptr;

	if (!Default)
		Default = static_cast<USparseVolumeTextureViewer*>(USparseVolumeTextureViewer::StaticClass()->DefaultObject);

	return Default;
}

}


