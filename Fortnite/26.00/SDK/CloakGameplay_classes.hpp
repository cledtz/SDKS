#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0xA08 - 0x990)
// Class CloakGameplay.FortGameCueNotifyLoop_Cloak
class UFortGameCueNotifyLoop_Cloak : public UFortGameplayCueNotify_Loop
{
public:
	class UFortPlayerPawn*                       TargetPlayer;                                      // 0x990(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        VisibilityLevel;                                   // 0x998(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        StationaryVisMult;                                 // 0x99C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxSpeedVisMult;                                   // 0x9A0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SpeedForMaxVis;                                    // 0x9A4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        VisibilityMinFriendly;                             // 0x9A8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        VisibilityMinNonfriendly;                          // 0x9AC(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        VisibilityLevelChangeRate;                         // 0x9B0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3C1C[0x4];                                     // Fixing Size After Last Property 
	TMap<class FName, struct FFortGameCueCloakModifier> CloakModifiersByNameMap;                           // 0x9B8(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortGameCueNotifyLoop_Cloak* GetDefaultObj();

	float TickVisibilityLevel(float DeltaSeconds);
	bool SetModifierEnabled(class FName& ModifierName, bool bNewEnabled);
	bool SetModifierCanBeEnabled(class FName& ModifierName, bool bNewCanBeEnabled);
	bool GetCurrentModifierValues(float* OutVisibilityMultiplier, float* OutVisibilityAddition, class FName& ModifierName);
};

}


