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

// 0x18 (0x31D8 - 0x31C0)
// BlueprintGeneratedClass Athena_GameState.Athena_GameState_C
class AAthena_GameState_C : public AFortGameStateBR
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x31C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x31C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Victory_Royale_Sound;                              // 0x31D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Athena_GameState_C");
		return Clss;
	}

	void OnWinnerAnnounced();
	void ExecuteUbergraph_Athena_GameState(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool CallFunc_CanUseSlowMotionOnVictory_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
