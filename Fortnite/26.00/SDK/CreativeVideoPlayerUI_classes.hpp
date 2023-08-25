#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x460 - 0x3E8)
// Class CreativeVideoPlayerUI.CreativeVideoPlayerFullScreenWidget
class UCreativeVideoPlayerFullScreenWidget : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_200B[0x18];                                    // Fixing Size After Last Property 
	class USoundSourceBus*                       SourceBus;                                         // 0x400(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USoundClass*                           SoundClass;                                        // 0x408(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                   HoldToSkipAction;                                  // 0x410(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate)
	class UCommonButtonLegacy*                   Button_Skip;                                       // 0x420(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                Image_VideoTexture;                                // 0x428(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        SkipButtonTimeout;                                 // 0x430(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2010[0x14];                                    // Fixing Size After Last Property 
	class UAudioComponent*                       SoundComponent;                                    // 0x448(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2011[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UCreativeVideoPlayerFullScreenWidget* GetDefaultObj();

	void SetExternalComponents(class UMediaTexture* VideoTextureExt, class USoundSourceBus* ExtSourceBus);
	void OnSkipButtonActionProgress(float HeldPercent);
	void OnSkipButtonActionComplete();
};

}


