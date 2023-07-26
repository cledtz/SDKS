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

// 0x10 (0x2E8 - 0x2D8)
// WidgetBlueprintGeneratedClass Store_BannerMessage.Store_BannerMessage_C
class UStore_BannerMessage_C : public UFortStoreBanner
{
public:
	class UWidgetAnimation*                      Ani_Intro;                                         // 0x2D8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                AnimatingBorder;                                   // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Store_BannerMessage_C");
		return Clss;
	}

	void Pulse(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
