#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x190 (0x230 - 0xA0)
// Class EpicMediaMetadataResolver.EpicMediaMetadataResolver
class UEpicMediaMetadataResolver : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0xA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            MetadataResultExt;                                 // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UEpicMediaCDNHostnames*                CDNHostNames;                                      // 0xD0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EF3[0x158];                                   // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UEpicMediaMetadataResolver* GetDefaultObj();

	bool GetData(const class FString& UID, bool bLive, const struct FEpicMediaOptions& InMediaOptions);
	bool GetBlurl(const class FString& InVUID, bool bInBlurlLive, const struct FEpicMediaOptions& InMediaOptions);
};

}


