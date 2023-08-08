#pragma once

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
	class UFortPlayspaceReplicatedState*         ReplicatedState;                                   // 0x310(0x8)(BlueprintVisible, ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ESidewaysState                    CurrentSidewaysState;                              // 0x318(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3EEB[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SidewaysWidgetBase");
		return Clss;
	}

	void OnSidewaysStateChanged(class USidewaysStateComponent* SidewaysStateComponent, class USidewaysPlayspace* NewPlayspace, enum class ESidewaysState OldState, enum class ESidewaysState NewState);
	void OnParamUpdated(struct FGameplayTag& UpdatedParam);
	void OnExitSideways();
	void OnEnterSideways(class USidewaysPlayspace* Playspace);
	bool IsValidPlayspace(class USidewaysPlayspace* Playspace);
	void InitializeVariables();
	void HandleFortPawnChanged(class UFortPawn* PossessedPawn);
	void ConfigureUIFromPlayspace(class USidewaysPlayspace* Playspace);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
