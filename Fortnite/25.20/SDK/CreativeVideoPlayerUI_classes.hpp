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

// 0x68 (0x460 - 0x3F8)
// Class CreativeVideoPlayerUI.CreativeVideoPlayerFullScreenWidget
class UCreativeVideoPlayerFullScreenWidget : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_1F00[0x18];                                    // Fixing Size After Last Property..
	class USoundSourceBus*                       SourceBus;                                         // 0x410(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USoundClass*                           SoundClass;                                        // 0x418(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                   HoldToSkipAction;                                  // 0x420(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate)
	class UCommonButtonLegacy*                   Button_Skip;                                       // 0x430(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        SkipButtonTimeout;                                 // 0x438(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1F01[0x14];                                    // Fixing Size After Last Property..
	class UAudioComponent*                       SoundComponent;                                    // 0x450(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1F02[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CreativeVideoPlayerFullScreenWidget");
		return Clss;
	}

	void OnSkipButtonActionProgress(float HeldPercent);
	void OnSkipButtonActionComplete();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
