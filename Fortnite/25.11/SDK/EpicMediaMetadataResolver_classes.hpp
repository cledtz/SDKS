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

// 0x188 (0x228 - 0xA0)
// Class EpicMediaMetadataResolver.EpicMediaMetadataResolver
class UEpicMediaMetadataResolver : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0xA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            MetadataResultExt;                                 // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UEpicMediaCDNHostnames*                CDNHostNames;                                      // 0xD0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A00[0x150];                                   // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EpicMediaMetadataResolver");
		return Clss;
	}

	bool GetBlurl(const class FString& InVUID, bool bInBlurlLive, const struct FEpicMediaOptions& InMediaOptions);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
