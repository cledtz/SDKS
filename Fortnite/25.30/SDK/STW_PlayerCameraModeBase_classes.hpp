#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x1B30 - 0x1B30)
// BlueprintGeneratedClass STW_PlayerCameraModeBase.STW_PlayerCameraModeBase_C
class USTW_PlayerCameraModeBase_C : public USTW_PlayerCameraModeMelee_C
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("STW_PlayerCameraModeBase_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
