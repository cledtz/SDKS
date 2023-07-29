#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0xD0 - 0x88)
// Class ImgMedia.ImgMediaSource
class UImgMediaSource : public UBaseMediaSource
{
public:
	bool                                         IsPathRelativeToProjectRoot;                       // 0x88(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DB[0x3];                                      // Fixing Size After Last Property
	struct FFrameRate                            FrameRateOverride;                                 // 0x8C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DC[0x4];                                      // Fixing Size After Last Property
	class FString                                ProxyOverride;                                     // 0x98(0x10)(Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFillGapsInSequence;                               // 0xA8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DE[0x7];                                      // Fixing Size After Last Property
	struct FDirectoryPath                        SequencePath;                                      // 0xB0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2DF[0x10];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ImgMediaSource");
		return Clss;
	}

	void SetTokenizedSequencePath(const class FString& Path);
	void SetSequencePath(const class FString& Path);
	void SetMipLevelDistance(float Distance);
	void RemoveTargetObject(class UActor* InActor);
	void RemoveGlobalCamera(class UActor* InActor);
	class FString GetSequencePath();
	void GetProxies(TArray<class FString>* OutProxies);
	void AddTargetObject(class UActor* InActor);
	void AddGlobalCamera(class UActor* InActor);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
