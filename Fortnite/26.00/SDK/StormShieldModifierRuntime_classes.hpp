#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1E0 (0x670 - 0x490)
// Class StormShieldModifierRuntime.FortAthenaMutator_SplitStorm
class UFortAthenaMutator_SplitStorm : public UFortAthenaMutator_GameModeBase
{
public:
	TSubclassOf<class UActor>                    SafeZoneProxyClass;                                // 0x490(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScalableFloat                        ProxyUpdateFrequency;                              // 0x498(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        SplitParallelTravelDistance;                       // 0x4C0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        JoinParallelTravelDistance;                        // 0x4E8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        SplitPerpendicularTravelDistance;                  // 0x510(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        JoinAngleFromParallelDegrees;                      // 0x538(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        PhaseToSplitStorm;                                 // 0x560(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FLinearColor                          ProxyMapCircleColor;                               // 0x588(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ProxyMapCircleLineThickness;                       // 0x598(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ProxyMapCircleLineSegments;                        // 0x59C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                SafeZoneProxy;                                     // 0x5A0(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ESplitStormProxyPhase             CurrentProxyPhase;                                 // 0x5A8(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2795[0x3];                                     // Fixing Size After Last Property 
	float                                        MoveToHoldWaitDuration;                            // 0x5AC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MoveToHoldDuration;                                // 0x5B0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MoveToEndWaitDuration;                             // 0x5B4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MoveToEndDuration;                                 // 0x5B8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MoveStartTime;                                     // 0x5BC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FSplitStormProxyCircle                ProxyStartCircle;                                  // 0x5C0(0x20)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FSplitStormProxyCircle                ProxyEndCircle;                                    // 0x5E0(0x20)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FSplitStormProxyCircle                ProxyHoldCircle;                                   // 0x600(0x20)(BlueprintVisible, BlueprintReadOnly, Net, Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FSplitStormProxyCircle                CurrentProxyCircle;                                // 0x620(0x20)(BlueprintVisible, BlueprintReadOnly, Net, Transient, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_2797[0x30];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaMutator_SplitStorm* GetDefaultObj();

	void UpdateProxyCenterAndRadius();
	void StartProxyUpdateTimer();
	void SetSafeZoneProxyPhase(enum class ESplitStormProxyPhase NewPhase);
	void SetProxyRadius(float NewRadius);
	void SetProxyCenter(const struct FVector& NewCenter);
	void OnSafeZonePhaseChanged();
	void OnSafeZoneIndicatorSpawned(struct FFortSafeZoneIndicatorUpdatedEvent& Event);
	void OnRep_CurrentProxyCircle();
};

}


