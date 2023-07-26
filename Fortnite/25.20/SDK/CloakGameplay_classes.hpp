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

// 0x78 (0x9E0 - 0x968)
// Class CloakGameplay.FortGameCueNotifyLoop_Cloak
class AFortGameCueNotifyLoop_Cloak : public AFortGameplayCueNotify_Loop
{
public:
	class AFortPlayerPawn*                       TargetPlayer;                                      // 0x968(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        VisibilityLevel;                                   // 0x970(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        StationaryVisMult;                                 // 0x974(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxSpeedVisMult;                                   // 0x978(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SpeedForMaxVis;                                    // 0x97C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        VisibilityMinFriendly;                             // 0x980(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        VisibilityMinNonfriendly;                          // 0x984(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        VisibilityLevelChangeRate;                         // 0x988(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7F8E[0x4];                                     // Fixing Size After Last Property..
	TMap<class FName, struct FFortGameCueCloakModifier> CloakModifiersByNameMap;                           // 0x990(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortGameCueNotifyLoop_Cloak");
		return Clss;
	}

	float TickVisibilityLevel(float DeltaSeconds);
	bool SetModifierEnabled(class FName& ModifierName, bool bNewEnabled);
	bool SetModifierCanBeEnabled(class FName& ModifierName, bool bNewCanBeEnabled);
	bool GetCurrentModifierValues(float* OutVisibilityMultiplier, float* OutVisibilityAddition, class FName& ModifierName);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
