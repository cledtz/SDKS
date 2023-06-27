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

// 0x10 (0x9B8 - 0x9A8)
// BlueprintGeneratedClass GCNL_Athena_FallDamageImmunity.GCNL_Athena_FallDamageImmunity_C
class AGCNL_Athena_FallDamageImmunity_C : public AFortGameplayCueNotifyAthena_FallDamageImmunity
{
public:
	class UAudioComponent*                       InUseLoopAudio;                                    // 0x9A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Target;                                            // 0x9B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCNL_Athena_FallDamageImmunity_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
