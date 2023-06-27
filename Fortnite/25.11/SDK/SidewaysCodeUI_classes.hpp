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

// 0x10 (0x320 - 0x310)
// Class SidewaysCodeUI.SidewaysWidgetBase
class USidewaysWidgetBase : public UFortHUDElementWidget
{
public:
	class AFortPlayspaceReplicatedState*         ReplicatedState;                                   // 0x310(0x8)(BlueprintVisible, ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ESidewaysState                    CurrentSidewaysState;                              // 0x318(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7F0C[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SidewaysWidgetBase");
		return Clss;
	}

	void OnSidewaysStateChanged(class USidewaysStateComponent* SidewaysStateComponent, class ASidewaysPlayspace* NewPlayspace, enum class ESidewaysState OldState, enum class ESidewaysState NewState);
	void OnParamUpdated(struct FGameplayTag& UpdatedParam);
	void OnExitSideways();
	void OnEnterSideways(class ASidewaysPlayspace* Playspace);
	bool IsValidPlayspace(class ASidewaysPlayspace* Playspace);
	void InitializeVariables();
	void HandleFortPawnChanged(class AFortPawn* PossessedPawn);
	void ConfigureUIFromPlayspace(class ASidewaysPlayspace* Playspace);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
