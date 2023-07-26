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
// BlueprintGeneratedClass CamShake_Shadow_Bomb.CamShake_Shadow_Bomb_C
class UCamShake_Shadow_Bomb_C : public ULegacyCameraShake
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CamShake_Shadow_Bomb_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
