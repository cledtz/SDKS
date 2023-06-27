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

// 0x19 (0x2A1 - 0x288)
// BlueprintGeneratedClass TVPostProcessBP.TVPostProcessBP_C
class ATVPostProcessBP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x288(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                   Billboard;                                         // 0x290(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Root;                                              // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         DisableOnStartup;                                  // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TVPostProcessBP_C");
		return Clss;
	}

	void IsEnabledForCurrentSubgame(bool* bEnabled);
	void UserConstructionScript();
	void Camera_DisableEffects();
	void FrontEndCameraSwitch();
	void ExecuteCameraSwitch();
	void ExecuteUbergraph_TVPostProcessBP(int32 EntryPoint, bool CallFunc_IsEnabledForCurrentSubgame_bEnabled);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
