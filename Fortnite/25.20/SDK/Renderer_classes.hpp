#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

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
	uint8                                        BitPad_1A0 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_16A9[0x3];                                     // Fixing Size After Last Property..
	float                                        AnimationFrame;                                    // 0x574(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FrameRate;                                         // 0x578(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnimationTime;                                     // 0x57C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ComponentToVisualize;                              // 0x580(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16AA[0xC];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SparseVolumeTextureViewerComponent");
		return Clss;
	}

};

// 0x8 (0x298 - 0x290)
// Class Renderer.SparseVolumeTextureViewer
class ASparseVolumeTextureViewer : public AInfo
{
public:
	class USparseVolumeTextureViewerComponent*   SparseVolumeTextureViewerComponent;                // 0x290(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SparseVolumeTextureViewer");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
