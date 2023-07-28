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

// 0x8 (0x298 - 0x290)
// Class ImagePlate.ImagePlate
class UImagePlate : public UActor
{
public:
	class UImagePlateComponent*                  ImagePlate;                                        // 0x290(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ImagePlate");
		return Clss;
	}

};

// 0x158 (0x6C0 - 0x568)
// Class ImagePlate.ImagePlateComponent
class UImagePlateComponent : public UPrimitiveComponent
{
public:
	struct FImagePlateParameters                 Plate;                                             // 0x568(0x40)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4179[0x118];                                   // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ImagePlateComponent");
		return Clss;
	}

	void SetImagePlate(const struct FImagePlateParameters& Plate);
	void OnRenderTextureChanged();
	struct FImagePlateParameters GetPlate();
};

// 0x10 (0x38 - 0x28)
// Class ImagePlate.ImagePlateSettings
class UImagePlateSettings : public UObject
{
public:
	class FString                                ProxyName;                                         // 0x28(0x10)(Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ImagePlateSettings");
		return Clss;
	}

};

// 0x28 (0x50 - 0x28)
// Class ImagePlate.ImagePlateFileSequence
class UImagePlateFileSequence : public UObject
{
public:
	struct FDirectoryPath                        SequencePath;                                      // 0x28(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FileWildcard;                                      // 0x38(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FrameRate;                                         // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_417A[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ImagePlateFileSequence");
		return Clss;
	}

};

// 0x8 (0x570 - 0x568)
// Class ImagePlate.ImagePlateFrustumComponent
class UImagePlateFrustumComponent : public UPrimitiveComponent
{
public:
	uint8                                        Pad_417B[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ImagePlateFrustumComponent");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
