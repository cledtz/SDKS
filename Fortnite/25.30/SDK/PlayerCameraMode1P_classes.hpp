#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x1B30 - 0x1B28)
// BlueprintGeneratedClass PlayerCameraMode1P.PlayerCameraMode1P_C
class UPlayerCameraMode1P_C : public UFortCameraMode_ThirdPerson
{
public:
	uint8                                        Pad_6698[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayerCameraMode1P_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
