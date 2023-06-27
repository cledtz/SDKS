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

// 0x1C0 (0x610 - 0x450)
// Class StormShieldModifierRuntime.FortAthenaMutator_SplitStorm
class AFortAthenaMutator_SplitStorm : public AFortAthenaMutator_GameModeBase
{
public:
	TSubclassOf<class AActor>                    SafeZoneProxyClass;                                // 0x450(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScalableFloat                        ProxyUpdateFrequency;                              // 0x458(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        SplitParallelTravelDistance;                       // 0x480(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        JoinParallelTravelDistance;                        // 0x4A8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        SplitPerpendicularTravelDistance;                  // 0x4D0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        JoinAngleFromParallelDegrees;                      // 0x4F8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        PhaseToSplitStorm;                                 // 0x520(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FLinearColor                          ProxyMapCircleColor;                               // 0x548(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ProxyMapCircleLineThickness;                       // 0x558(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ProxyMapCircleLineSegments;                        // 0x55C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                SafeZoneProxy;                                     // 0x560(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ESplitStormProxyPhase             CurrentProxyPhase;                                 // 0x568(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F15[0x3];                                     // Fixing Size After Last Property..
	float                                        MoveToHoldWaitDuration;                            // 0x56C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MoveToHoldDuration;                                // 0x570(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MoveToEndWaitDuration;                             // 0x574(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MoveToEndDuration;                                 // 0x578(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MoveStartTime;                                     // 0x57C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FSplitStormProxyCircle                ProxyStartCircle;                                  // 0x580(0x20)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FSplitStormProxyCircle                ProxyEndCircle;                                    // 0x5A0(0x20)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FSplitStormProxyCircle                ProxyHoldCircle;                                   // 0x5C0(0x20)(BlueprintVisible, BlueprintReadOnly, Net, Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FSplitStormProxyCircle                CurrentProxyCircle;                                // 0x5E0(0x20)(BlueprintVisible, BlueprintReadOnly, Net, Transient, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F16[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaMutator_SplitStorm");
		return Clss;
	}

	void UpdateProxyCenterAndRadius();
	void StartProxyUpdateTimer();
	void SetSafeZoneProxyPhase(enum class ESplitStormProxyPhase NewPhase);
	void SetProxyRadius(float NewRadius);
	void SetProxyCenter(const struct FVector& NewCenter);
	void OnSafeZonePhaseChanged();
	void OnSafeZoneIndicatorSpawned(class AFortSafeZoneIndicator* SafeZoneIndicator);
	void OnRep_CurrentProxyCircle();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
