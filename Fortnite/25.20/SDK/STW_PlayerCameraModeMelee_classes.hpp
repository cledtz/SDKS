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

// 0x0 (0x1B30 - 0x1B30)
// BlueprintGeneratedClass STW_PlayerCameraModeMelee.STW_PlayerCameraModeMelee_C
class USTW_PlayerCameraModeMelee_C : public UAthena_PlayerCameraModeMelee_C
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("STW_PlayerCameraModeMelee_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
