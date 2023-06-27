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

// 0x0 (0x210 - 0x210)
// BlueprintGeneratedClass PlayerTakeDamage_CameraShake.PlayerTakeDamage_CameraShake_C
class UPlayerTakeDamage_CameraShake_C : public ULegacyCameraShake
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayerTakeDamage_CameraShake_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
