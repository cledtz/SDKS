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

// 0x10 (0x90 - 0x80)
// Class MidMatchBunkerGameplayUI.FortMobileActionButtonBehaviorExtension_BunkerKeyUse
class UFortMobileActionButtonBehaviorExtension_BunkerKeyUse : public UFortMobileActionButtonBehaviorExtension
{
public:
	struct FGameplayTag                          KeycardTag;                                        // 0x80(0x4)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGameplayTag                          VaultDoorTag;                                      // 0x84(0x4)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPaperSprite*                          Sprite_Keycard;                                    // 0x88(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortMobileActionButtonBehaviorExtension_BunkerKeyUse");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
