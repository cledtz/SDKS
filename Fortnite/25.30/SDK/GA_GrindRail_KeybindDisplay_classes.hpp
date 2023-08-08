#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xB50 - 0xB48)
// BlueprintGeneratedClass GA_GrindRail_KeybindDisplay.GA_GrindRail_KeybindDisplay_C
class UGA_GrindRail_KeybindDisplay_C : public UFortGameplayAbility_KeybindDisplay
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB48(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_GrindRail_KeybindDisplay_C");
		return Clss;
	}

	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_GrindRail_KeybindDisplay(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
