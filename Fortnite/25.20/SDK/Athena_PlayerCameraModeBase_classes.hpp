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

// 0x8 (0x1B30 - 0x1B28)
// BlueprintGeneratedClass Athena_PlayerCameraModeBase.Athena_PlayerCameraModeBase_C
class UAthena_PlayerCameraModeBase_C : public UFortCameraMode_ThirdPerson
{
public:
	uint8                                        Pad_8FBD[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Athena_PlayerCameraModeBase_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
