#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x470 - 0x3F8)
// Class CreativeVideoPlayerUI.CreativeVideoPlayerFullScreenWidget
class UCreativeVideoPlayerFullScreenWidget : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_1B65[0x18];                                    // Fixing Size After Last Property
	class USoundSourceBus*                       SourceBus;                                         // 0x410(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USoundClass*                           SoundClass;                                        // 0x418(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                   HoldToSkipAction;                                  // 0x420(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate)
	class UCommonButtonLegacy*                   Button_Skip;                                       // 0x430(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                Image_VideoTexture;                                // 0x438(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        SkipButtonTimeout;                                 // 0x440(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1B6B[0x14];                                    // Fixing Size After Last Property
	class UAudioComponent*                       SoundComponent;                                    // 0x458(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1B6C[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CreativeVideoPlayerFullScreenWidget");
		return Clss;
	}

	void SetExternalComponents(class UMediaTexture* VideoTextureExt, class USoundSourceBus* ExtSourceBus);
	void OnSkipButtonActionProgress(float HeldPercent);
	void OnSkipButtonActionComplete();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
