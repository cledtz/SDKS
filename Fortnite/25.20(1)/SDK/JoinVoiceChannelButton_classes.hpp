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

// 0x10 (0x14D0 - 0x14C0)
// WidgetBlueprintGeneratedClass JoinVoiceChannelButton.JoinVoiceChannelButton_C
class UJoinVoiceChannelButton_C : public UFortJoinVoiceChannelButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x14C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      OnHover;                                           // 0x14C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("JoinVoiceChannelButton_C");
		return Clss;
	}

	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_JoinVoiceChannelButton(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
