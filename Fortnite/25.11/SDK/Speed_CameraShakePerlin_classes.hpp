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
// BlueprintGeneratedClass Speed_CameraShakePerlin.Speed_CameraShakePerlin_C
class USpeed_CameraShakePerlin_C : public ULegacyCameraShake
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Speed_CameraShakePerlin_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
