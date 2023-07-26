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

// 0xC0 (0xF0 - 0x30)
// Class PictureInPictureDescriptors.PictureInPicturePartnerDataAsset
class UPictureInPicturePartnerDataAsset : public UPrimaryDataAsset
{
public:
	class FString                                PartnerName;                                       // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImage*                                ClientImage;                                       // 0x40(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MediaHeight;                                       // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MediaWidth;                                        // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCommonActivatableWidget>  MetadataOverlayClass;                              // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPictureInPictureActionConfig> Actions;                                           // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FPIPVideoPlayerAssetConfig            AssetConfig;                                       // 0x68(0x88)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PictureInPicturePartnerDataAsset");
		return Clss;
	}

};

// 0x140 (0x168 - 0x28)
// Class PictureInPictureDescriptors.PictureInPictureActionData
class UPictureInPictureActionData : public UObject
{
public:
	class FString                                PartnerName;                                       // 0x28(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_287A[0x8];                                     // Fixing Size After Last Property..
	struct FSlateBrush                           ActionBrush;                                       // 0x40(0xC0)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  ActionText;                                        // 0x100(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EPictureInPictureAction           ActionType;                                        // 0x118(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_287B[0x7];                                     // Fixing Size After Last Property..
	FMulticastInlineDelegateProperty_            ActionEvent;                                       // 0x120(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            ActionFiredEvent;                                  // 0x130(0x10)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_287C[0x18];                                    // Fixing Size After Last Property..
	FMulticastInlineDelegateProperty_            CallbackEvent;                                     // 0x158(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PictureInPictureActionData");
		return Clss;
	}

	void CallEvent();
};

// 0x28 (0x190 - 0x168)
// Class PictureInPictureDescriptors.PictureInPictureSourceActionData
class UPictureInPictureSourceActionData : public UPictureInPictureActionData
{
public:
	class FString                                SourceName;                                        // 0x168(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            SourceActionEvent;                                 // 0x178(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_287D[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PictureInPictureSourceActionData");
		return Clss;
	}

};

// 0x50 (0x78 - 0x28)
// Class PictureInPictureDescriptors.PictureInPictureAnalyticsManager
class UPictureInPictureAnalyticsManager : public UObject
{
public:
	TMap<class FString, struct FPictureInPictureAnalyticsPayload> PartnerAnalytics;                                  // 0x28(0x50)(Transient, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PictureInPictureAnalyticsManager");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
