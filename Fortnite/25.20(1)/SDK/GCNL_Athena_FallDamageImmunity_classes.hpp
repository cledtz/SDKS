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

// 0x10 (0x9C0 - 0x9B0)
// BlueprintGeneratedClass GCNL_Athena_FallDamageImmunity.GCNL_Athena_FallDamageImmunity_C
class UGCNL_Athena_FallDamageImmunity_C : public UFortGameplayCueNotifyAthena_FallDamageImmunity
{
public:
	class UAudioComponent*                       InUseLoopAudio;                                    // 0x9B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UActor*                                Target;                                            // 0x9B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

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
