#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C
class UUltra_Dynamic_Weather_Interface_C : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UUltra_Dynamic_Weather_Interface_C* GetDefaultObj();

	void Hard_Refresh_Cached_Properties();
	void Destroy_Close_Thunder_Component(class USceneComponent* Component);
	void Get_Close_Thunder_Sound_Occlusion(double* Volume, double* LPF);
	void Update_Rainbow_Angle();
	void Update_Material_Effects();
	void Apply_State(const struct FUDS_and_UDW_State& State);
	void Get_State_for_Saving(struct FUDS_and_UDW_State* UDW_State);
	void Get_Intended_Cloud_Direction(double* Intended_Cloud_Direction);
	void Get_Intended_Cloud_Speed(double* Intended_Cloud_Speed);
	void Update_Weather_Settings_from_UDS(double Cloud_Coverage, double Fog, double Dust);
	void Initialize_Weather();
	void Set_Season();
};

}


