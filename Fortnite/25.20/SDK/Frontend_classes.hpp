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

// 0x18 (0x2C0 - 0x2A8)
// BlueprintGeneratedClass Frontend.Frontend_C
class AFrontend_C : public AFortLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         NewLobby;                                          // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         NewVar_0;                                          // 0x2B1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9DB4[0x6];                                     // Fixing Size After Last Property..
	class AHBOnboardingFlow_C*                   HBOnboardingFlow_ExecuteUbergraph_Frontend_RefProperty; // 0x2B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Frontend_C");
		return Clss;
	}

	void PlaySpeech(const class FString& Filename, int32 SampleRate, class USoundWave* AssetFile, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AFortPlayerControllerFrontEnd* K2Node_DynamicCast_AsFort_Player_Controller_Front_End, bool K2Node_DynamicCast_bSuccess);
	void OnMatchStarted();
	void EnableTutorial();
	void ExecuteUbergraph_Frontend(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
