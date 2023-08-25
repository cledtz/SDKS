#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x2D0 - 0x2B0)
// Class DynamicAthenaHUD.DynamicAthenaHUDDirector
class UDynamicAthenaHUDDirector : public UDynamicUIDirectorBase
{
public:
	class UDynamicUIScene*                       VehicleHUDScene;                                   // 0x2B0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDynamicUIScene*                       CreativeQuickbarScene;                             // 0x2B8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDynamicUIScene*                       TournamentScene;                                   // 0x2C0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDynamicUIScene*                       ArenaTournamentScene;                              // 0x2C8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UDynamicAthenaHUDDirector* GetDefaultObj();

	void HandleExitingVehicle();
	void HandleEnteringVehicle();
	void HandleCreativeQuickbarEquippedChanged(bool bIsQuickbarEquipped);
};

}


