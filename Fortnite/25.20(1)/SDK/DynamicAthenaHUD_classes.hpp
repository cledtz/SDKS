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

// 0x20 (0x2E0 - 0x2C0)
// Class DynamicAthenaHUD.DynamicAthenaHUDDirector
class UDynamicAthenaHUDDirector : public UDynamicUIDirectorBase
{
public:
	class UDynamicUIScene*                       VehicleHUDScene;                                   // 0x2C0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDynamicUIScene*                       CreativeQuickbarScene;                             // 0x2C8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDynamicUIScene*                       TournamentScene;                                   // 0x2D0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDynamicUIScene*                       ArenaTournamentScene;                              // 0x2D8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DynamicAthenaHUDDirector");
		return Clss;
	}

	void HandleExitingVehicle();
	void HandleEnteringVehicle();
	void HandleCreativeQuickbarEquippedChanged(bool bIsQuickbarEquipped);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
