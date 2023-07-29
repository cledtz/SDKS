#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Hard Refresh Cached Properties
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUltra_Dynamic_Weather_Interface_C::Hard_Refresh_Cached_Properties()
{
	static auto Func = Class->GetFunction("Ultra_Dynamic_Weather_Interface_C", "Hard Refresh Cached Properties");

	Params::UUltra_Dynamic_Weather_Interface_C_Hard_Refresh_Cached_Properties_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Destroy Close Thunder Component
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*             Component                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUltra_Dynamic_Weather_Interface_C::Destroy_Close_Thunder_Component(class USceneComponent* Component)
{
	static auto Func = Class->GetFunction("Ultra_Dynamic_Weather_Interface_C", "Destroy Close Thunder Component");

	Params::UUltra_Dynamic_Weather_Interface_C_Destroy_Close_Thunder_Component_Params Parms;

	Parms.Component = Component;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get Close Thunder Sound Occlusion
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Volume                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             LPF                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUltra_Dynamic_Weather_Interface_C::Get_Close_Thunder_Sound_Occlusion(double* Volume, double* LPF)
{
	static auto Func = Class->GetFunction("Ultra_Dynamic_Weather_Interface_C", "Get Close Thunder Sound Occlusion");

	Params::UUltra_Dynamic_Weather_Interface_C_Get_Close_Thunder_Sound_Occlusion_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (Volume != nullptr)
		*Volume = Parms.Volume;

	if (LPF != nullptr)
		*LPF = Parms.LPF;

}


// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Update Rainbow Angle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUltra_Dynamic_Weather_Interface_C::Update_Rainbow_Angle()
{
	static auto Func = Class->GetFunction("Ultra_Dynamic_Weather_Interface_C", "Update Rainbow Angle");

	Params::UUltra_Dynamic_Weather_Interface_C_Update_Rainbow_Angle_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Update Material Effects
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUltra_Dynamic_Weather_Interface_C::Update_Material_Effects()
{
	static auto Func = Class->GetFunction("Ultra_Dynamic_Weather_Interface_C", "Update Material Effects");

	Params::UUltra_Dynamic_Weather_Interface_C_Update_Material_Effects_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Apply State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUDS_and_UDW_State          State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UUltra_Dynamic_Weather_Interface_C::Apply_State(const struct FUDS_and_UDW_State& State)
{
	static auto Func = Class->GetFunction("Ultra_Dynamic_Weather_Interface_C", "Apply State");

	Params::UUltra_Dynamic_Weather_Interface_C_Apply_State_Params Parms;

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get State for Saving
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUDS_and_UDW_State          UDW_State                                                        (Parm, OutParm, HasGetValueTypeHash)

void UUltra_Dynamic_Weather_Interface_C::Get_State_for_Saving(struct FUDS_and_UDW_State* UDW_State)
{
	static auto Func = Class->GetFunction("Ultra_Dynamic_Weather_Interface_C", "Get State for Saving");

	Params::UUltra_Dynamic_Weather_Interface_C_Get_State_for_Saving_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (UDW_State != nullptr)
		*UDW_State = Parms.UDW_State;

}


// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get Intended Cloud Direction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Intended_Cloud_Direction                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUltra_Dynamic_Weather_Interface_C::Get_Intended_Cloud_Direction(double* Intended_Cloud_Direction)
{
	static auto Func = Class->GetFunction("Ultra_Dynamic_Weather_Interface_C", "Get Intended Cloud Direction");

	Params::UUltra_Dynamic_Weather_Interface_C_Get_Intended_Cloud_Direction_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (Intended_Cloud_Direction != nullptr)
		*Intended_Cloud_Direction = Parms.Intended_Cloud_Direction;

}


// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get Intended Cloud Speed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Intended_Cloud_Speed                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUltra_Dynamic_Weather_Interface_C::Get_Intended_Cloud_Speed(double* Intended_Cloud_Speed)
{
	static auto Func = Class->GetFunction("Ultra_Dynamic_Weather_Interface_C", "Get Intended Cloud Speed");

	Params::UUltra_Dynamic_Weather_Interface_C_Get_Intended_Cloud_Speed_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (Intended_Cloud_Speed != nullptr)
		*Intended_Cloud_Speed = Parms.Intended_Cloud_Speed;

}


// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Update Weather Settings from UDS
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Cloud_Coverage                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Fog                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Dust                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUltra_Dynamic_Weather_Interface_C::Update_Weather_Settings_from_UDS(double Cloud_Coverage, double Fog, double Dust)
{
	static auto Func = Class->GetFunction("Ultra_Dynamic_Weather_Interface_C", "Update Weather Settings from UDS");

	Params::UUltra_Dynamic_Weather_Interface_C_Update_Weather_Settings_from_UDS_Params Parms;

	Parms.Cloud_Coverage = Cloud_Coverage;
	Parms.Fog = Fog;
	Parms.Dust = Dust;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Initialize Weather
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUltra_Dynamic_Weather_Interface_C::Initialize_Weather()
{
	static auto Func = Class->GetFunction("Ultra_Dynamic_Weather_Interface_C", "Initialize Weather");

	Params::UUltra_Dynamic_Weather_Interface_C_Initialize_Weather_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Set Season
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUltra_Dynamic_Weather_Interface_C::Set_Season()
{
	static auto Func = Class->GetFunction("Ultra_Dynamic_Weather_Interface_C", "Set Season");

	Params::UUltra_Dynamic_Weather_Interface_C_Set_Season_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
