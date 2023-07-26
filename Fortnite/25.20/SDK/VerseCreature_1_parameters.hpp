#pragma once

// Dumper.

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

// 0x8 (0x8 - 0x0)
// Function VerseCreature.task_VerseCreature_creature_component$MaintainFocus_L_Nagent_R.Update
struct UTask_VerseCreature_creature_component_MaintainFocus_L_Nagent_R_Update_Params
{
public:
	int64                                        RetVal;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function VerseCreature.task_VerseCreature_creature_component$MaintainFocus_L_Nvector3_R.Update
struct UTask_VerseCreature_creature_component_MaintainFocus_L_Nvector3_R_Update_Params
{
public:
	int64                                        RetVal;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function VerseCreature.task_VerseCreature_creature_component$MoveInRangeToAttack.Update
struct UTask_VerseCreature_creature_component_MoveInRangeToAttack_Update_Params
{
public:
	int64                                        RetVal;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function VerseCreature.task_VerseCreature_creature_component$NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R.Update
struct UTask_VerseCreature_creature_component_NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R_Update_Params
{
public:
	int64                                        RetVal;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function VerseCreature.task_VerseCreature_creature_component$RoamAround.Update
struct UTask_VerseCreature_creature_component_RoamAround_Update_Params
{
public:
	int64                                        RetVal;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function VerseCreature.task_VerseCreature_creature_component$Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R.Update
struct UTask_VerseCreature_creature_component_Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R_Update_Params
{
public:
	int64                                        RetVal;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function VerseCreature.VerseCreature_creature_component.Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R
struct UVerseCreature_creature_component_Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R_Params
{
public:
	class UConcurrency_task*                     __verse_0xC1E81372_CallingTask;                    // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int64                                        __verse_0xA3A00DDB_CallerResumeState;              // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        __verse_0x2AC0E4D8_CallerCancelState;              // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0xB2CDDD72_Argument;                       // 0x18(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UConcurrency_task*                     RetVal;                                            // 0x28(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function VerseCreature.VerseCreature_creature_component._L_2fFortnite_2ecom_2fAI_2fnavigatable_N_RStopNavigation
struct UVerseCreature_creature_component__L_2fFortnite_2ecom_2fAI_2fnavigatable_N_RStopNavigation_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function VerseCreature.VerseCreature_creature_component.RoamAround
struct UVerseCreature_creature_component_RoamAround_Params
{
public:
	class UConcurrency_task*                     __verse_0xC1E81372_CallingTask;                    // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int64                                        __verse_0xA3A00DDB_CallerResumeState;              // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        __verse_0x2AC0E4D8_CallerCancelState;              // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x18(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C5C[0x7];                                     // Fixing Size After Last Property..
	class UConcurrency_task*                     RetVal;                                            // 0x20(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function VerseCreature.VerseCreature_creature_component.NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R
struct UVerseCreature_creature_component_NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R_Params
{
public:
	class UConcurrency_task*                     __verse_0xC1E81372_CallingTask;                    // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int64                                        __verse_0xA3A00DDB_CallerResumeState;              // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        __verse_0x2AC0E4D8_CallerCancelState;              // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R __verse_0xB2CDDD72_Argument;                       // 0x18(0x1A)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C5D[0x6];                                     // Fixing Size After Last Property..
	class UConcurrency_task*                     RetVal;                                            // 0x38(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function VerseCreature.VerseCreature_creature_component.MoveInRangeToAttack
struct UVerseCreature_creature_component_MoveInRangeToAttack_Params
{
public:
	class UConcurrency_task*                     __verse_0xC1E81372_CallingTask;                    // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int64                                        __verse_0xA3A00DDB_CallerResumeState;              // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        __verse_0x2AC0E4D8_CallerCancelState;              // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x18(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C5E[0x7];                                     // Fixing Size After Last Property..
	class UConcurrency_task*                     RetVal;                                            // 0x20(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function VerseCreature.VerseCreature_creature_component.MaintainFocus_L_Nagent_R
struct UVerseCreature_creature_component_MaintainFocus_L_Nagent_R_Params
{
public:
	class UConcurrency_task*                     __verse_0xC1E81372_CallingTask;                    // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int64                                        __verse_0xA3A00DDB_CallerResumeState;              // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        __verse_0x2AC0E4D8_CallerCancelState;              // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USimulation_agent*                     __verse_0xB2CDDD72_Argument;                       // 0x18(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UConcurrency_task*                     RetVal;                                            // 0x20(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function VerseCreature.VerseCreature_creature_component.MaintainFocus_L_Nvector3_R
struct UVerseCreature_creature_component_MaintainFocus_L_Nvector3_R_Params
{
public:
	class UConcurrency_task*                     __verse_0xC1E81372_CallingTask;                    // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int64                                        __verse_0xA3A00DDB_CallerResumeState;              // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        __verse_0x2AC0E4D8_CallerCancelState;              // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSpatialMath_vector3                  __verse_0xB2CDDD72_Argument;                       // 0x18(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UConcurrency_task*                     RetVal;                                            // 0x30(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function VerseCreature.VerseCreature_creature_component._L_2fFortnite_2ecom_2fAI_2fnavigatable_N_RGetCurrentDestination
struct UVerseCreature_creature_component__L_2fFortnite_2ecom_2fAI_2fnavigatable_N_RGetCurrentDestination_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C5F[0x7];                                     // Fixing Size After Last Property..
	FOptionProperty_                             RetVal;                                            // 0x8(0x20)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function VerseCreature.VerseCreature_creature_component.$InitInstance
struct UVerseCreature_creature_component__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseCreature.VerseCreature_creature_component.$Block
struct UVerseCreature_creature_component__Block_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseCreature.VerseCreature_creature_component.$InitCDO
struct UVerseCreature_creature_component__InitCDO_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function VerseCreature.VerseCreature_creature_perception_component._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__threat__perception__interface_N_RGetThreatsInfo
struct UVerseCreature_creature_perception_component__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__threat__perception__interface_N_RGetThreatsInfo_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C60[0x7];                                     // Fixing Size After Last Property..
	FOptionProperty_                             RetVal;                                            // 0x8(0x18)(Parm, OutParm, ReturnParm, ContainsInstancedReference)
};

// 0x48 (0x48 - 0x0)
// Function VerseCreature.VerseCreature_creature_perception_component._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__threat__perception__interface_N_RGetThreatInfo_L_Nagent_R
struct UVerseCreature_creature_perception_component__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__threat__perception__interface_N_RGetThreatInfo_L_Nagent_R_Params
{
public:
	class USimulation_agent*                     __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x8(0x40)(Parm, OutParm, ReturnParm, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function VerseCreature.VerseCreature_creature_perception_component.$InitInstance
struct UVerseCreature_creature_perception_component__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseCreature.VerseCreature_creature_perception_component.$Block
struct UVerseCreature_creature_perception_component__Block_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseCreature.VerseCreature_creature_perception_component.$InitCDO
struct UVerseCreature_creature_perception_component__InitCDO_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
