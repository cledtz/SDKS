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

// 0x14 (0xD10 - 0xCFC)
// BlueprintGeneratedClass GA_DefaultPlayer_Death.GA_DefaultPlayer_Death_C
class UGA_DefaultPlayer_Death_C : public UGAB_GenericDeath_C
{
public:
	uint8                                        Pad_98D3[0x4];                                     // Fixing Size After Last Property..
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xD00(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                          FadeCapsuleStWCue;                                 // 0xD08(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          FadeCapsuleAthenaCue;                              // 0xD0C(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_DefaultPlayer_Death_C");
		return Clss;
	}

	void PickDeathMontageSection();
	void ExecuteUbergraph_GA_DefaultPlayer_Death(int32 EntryPoint, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
