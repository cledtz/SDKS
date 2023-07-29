#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x0 - 0x0)
// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Hard Refresh Cached Properties
struct UUltra_Dynamic_Weather_Interface_C_Hard_Refresh_Cached_Properties_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Destroy Close Thunder Component
struct UUltra_Dynamic_Weather_Interface_C_Destroy_Close_Thunder_Component_Params
{
public:
	class USceneComponent*                       Component;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get Close Thunder Sound Occlusion
struct UUltra_Dynamic_Weather_Interface_C_Get_Close_Thunder_Sound_Occlusion_Params
{
public:
	double                                       Volume;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LPF;                                               // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Update Rainbow Angle
struct UUltra_Dynamic_Weather_Interface_C_Update_Rainbow_Angle_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Update Material Effects
struct UUltra_Dynamic_Weather_Interface_C_Update_Material_Effects_Params
{
public:
};

// 0x178 (0x178 - 0x0)
// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Apply State
struct UUltra_Dynamic_Weather_Interface_C_Apply_State_Params
{
public:
	struct FUDS_and_UDW_State                    State;                                             // 0x0(0x178)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x178 (0x178 - 0x0)
// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get State for Saving
struct UUltra_Dynamic_Weather_Interface_C_Get_State_for_Saving_Params
{
public:
	struct FUDS_and_UDW_State                    UDW_State;                                         // 0x0(0x178)(Parm, OutParm, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get Intended Cloud Direction
struct UUltra_Dynamic_Weather_Interface_C_Get_Intended_Cloud_Direction_Params
{
public:
	double                                       Intended_Cloud_Direction;                          // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get Intended Cloud Speed
struct UUltra_Dynamic_Weather_Interface_C_Get_Intended_Cloud_Speed_Params
{
public:
	double                                       Intended_Cloud_Speed;                              // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Update Weather Settings from UDS
struct UUltra_Dynamic_Weather_Interface_C_Update_Weather_Settings_from_UDS_Params
{
public:
	double                                       Cloud_Coverage;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Fog;                                               // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Dust;                                              // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Initialize Weather
struct UUltra_Dynamic_Weather_Interface_C_Initialize_Weather_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Set Season
struct UUltra_Dynamic_Weather_Interface_C_Set_Season_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
