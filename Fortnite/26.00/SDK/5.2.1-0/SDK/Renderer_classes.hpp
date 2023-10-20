#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x590 - 0x568)
// Class Renderer.SparseVolumeTextureViewerComponent
class USparseVolumeTextureViewerComponent : public UPrimitiveComponent
{
public:
	class USparseVolumeTexture*                  SparseVolumeTexturePreview;                        // 0x568(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAnimate : 1;                                      // Mask: 0x1, PropSize: 0x10x570(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_0 : 7;                                      // Fixing Bit-Field Size 
	uint8                                        Pad_23[0x3];                                       // Fixing Size After Last Property 
	float                                        AnimationFrame;                                    // 0x574(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FrameRate;                                         // 0x578(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnimationTime;                                     // 0x57C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ComponentToVisualize;                              // 0x580(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_25[0xC];                                       // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class USparseVolumeTextureViewerComponent* GetDefaultObj();

};

// 0x8 (0x298 - 0x290)
// Class Renderer.SparseVolumeTextureViewer
class USparseVolumeTextureViewer : public UInfo
{
public:
	class USparseVolumeTextureViewerComponent*   SparseVolumeTextureViewerComponent;                // 0x290(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USparseVolumeTextureViewer* GetDefaultObj();

};

}


