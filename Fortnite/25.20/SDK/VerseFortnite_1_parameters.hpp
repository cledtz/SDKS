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

// 0x18 (0x18 - 0x0)
// Function VerseFortnite.AI._L_2fFortnite_2ecom_2fAI_N_Roperator_U_2eGetNavigatable_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R
struct UAI__L_2fFortnite_2ecom_2fAI_N_Roperator_U_2eGetNavigatable_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R_Params
{
public:
	struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R __verse_0xB2CDDD72_Argument;                       // 0x0(0xA)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C02[0x6];                                     // Fixing Size After Last Property..
	FOptionProperty_                             RetVal;                                            // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function VerseFortnite.AI._L_2fFortnite_2ecom_2fAI_N_Roperator_U_2eGetFortLeashable_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R
struct UAI__L_2fFortnite_2ecom_2fAI_N_Roperator_U_2eGetFortLeashable_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R_Params
{
public:
	struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R __verse_0xB2CDDD72_Argument;                       // 0x0(0xA)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C03[0x6];                                     // Fixing Size After Last Property..
	FOptionProperty_                             RetVal;                                            // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function VerseFortnite.AI._L_2fFortnite_2ecom_2fAI_N_Roperator_U_2eGetFocusInterface_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R
struct UAI__L_2fFortnite_2ecom_2fAI_N_Roperator_U_2eGetFocusInterface_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R_Params
{
public:
	struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R __verse_0xB2CDDD72_Argument;                       // 0x0(0xA)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C04[0x6];                                     // Fixing Size After Last Property..
	FOptionProperty_                             RetVal;                                            // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function VerseFortnite.AI._L_2fFortnite_2ecom_2fAI_N_RMakeNavigationTarget_L_Nvector3_R
struct UAI__L_2fFortnite_2ecom_2fAI_N_RMakeNavigationTarget_L_Nvector3_R_Params
{
public:
	struct FSpatialMath_vector3                  __verse_0xB2CDDD72_Argument;                       // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint64                                       InstancingGraph;                                   // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAI_navigation_target*                 __verse_0xB482F2DD_CurrentlyInstantiatedObject;    // 0x20(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function VerseFortnite.AI._L_2fFortnite_2ecom_2fAI_N_RMakeNavigationTarget_L_Nagent_R
struct UAI__L_2fFortnite_2ecom_2fAI_N_RMakeNavigationTarget_L_Nagent_R_Params
{
public:
	class USimulation_agent*                     __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint64                                       InstancingGraph;                                   // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAI_navigation_target*                 __verse_0xB482F2DD_CurrentlyInstantiatedObject;    // 0x10(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function VerseFortnite.AI.$InitCDO
struct UAI__InitCDO_Params
{
public:
};

// 0x38 (0x38 - 0x0)
// Function VerseFortnite.AI_focus_interface.MaintainFocus_L_Nvector3_R
struct UAI_focus_interface_MaintainFocus_L_Nvector3_R_Params
{
public:
	class UConcurrency_task*                     __verse_0xC1E81372_CallingTask;                    // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int64                                        __verse_0xA3A00DDB_CallerResumeState;              // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        __verse_0x2AC0E4D8_CallerCancelState;              // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSpatialMath_vector3                  __verse_0xB2CDDD72_Argument;                       // 0x18(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UConcurrency_task*                     RetVal;                                            // 0x30(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function VerseFortnite.AI_focus_interface.MaintainFocus_L_Nagent_R
struct UAI_focus_interface_MaintainFocus_L_Nagent_R_Params
{
public:
	class UConcurrency_task*                     __verse_0xC1E81372_CallingTask;                    // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int64                                        __verse_0xA3A00DDB_CallerResumeState;              // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        __verse_0x2AC0E4D8_CallerCancelState;              // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USimulation_agent*                     __verse_0xB2CDDD72_Argument;                       // 0x18(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UConcurrency_task*                     RetVal;                                            // 0x20(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function VerseFortnite.AI_fort_leashable._L_2fFortnite_2ecom_2fAI_2ffort__leashable_N_RSetLeashPosition_L_Nvector3_M_Nfloat_M_Nfloat_R
struct UAI_fort_leashable__L_2fFortnite_2ecom_2fAI_2ffort__leashable_N_RSetLeashPosition_L_Nvector3_M_Nfloat_M_Nfloat_R_Params
{
public:
	struct FTuple_Lvector3_Mfloat_Mfloat_R       __verse_0xB2CDDD72_Argument;                       // 0x0(0x28)(Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function VerseFortnite.AI_fort_leashable._L_2fFortnite_2ecom_2fAI_2ffort__leashable_N_RSetLeashAgent_L_Nagent_M_Nfloat_M_Nfloat_R
struct UAI_fort_leashable__L_2fFortnite_2ecom_2fAI_2ffort__leashable_N_RSetLeashAgent_L_Nagent_M_Nfloat_M_Nfloat_R_Params
{
public:
	struct FTuple_Lagent_Mfloat_Mfloat_R         __verse_0xB2CDDD72_Argument;                       // 0x0(0x18)(Parm, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function VerseFortnite.AI_fort_leashable._L_2fFortnite_2ecom_2fAI_2ffort__leashable_N_RClearLeash
struct UAI_fort_leashable__L_2fFortnite_2ecom_2fAI_2ffort__leashable_N_RClearLeash_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function VerseFortnite.AI_navigatable.Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R
struct UAI_navigatable_Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R_Params
{
public:
	class UConcurrency_task*                     __verse_0xC1E81372_CallingTask;                    // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int64                                        __verse_0xA3A00DDB_CallerResumeState;              // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        __verse_0x2AC0E4D8_CallerCancelState;              // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0xB2CDDD72_Argument;                       // 0x18(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UConcurrency_task*                     RetVal;                                            // 0x28(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function VerseFortnite.AI_navigatable._L_2fFortnite_2ecom_2fAI_2fnavigatable_N_RStopNavigation
struct UAI_navigatable__L_2fFortnite_2ecom_2fAI_2fnavigatable_N_RStopNavigation_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function VerseFortnite.AI_navigatable.NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R
struct UAI_navigatable_NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R_Params
{
public:
	class UConcurrency_task*                     __verse_0xC1E81372_CallingTask;                    // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int64                                        __verse_0xA3A00DDB_CallerResumeState;              // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        __verse_0x2AC0E4D8_CallerCancelState;              // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R __verse_0xB2CDDD72_Argument;                       // 0x18(0x1A)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C05[0x6];                                     // Fixing Size After Last Property..
	class UConcurrency_task*                     RetVal;                                            // 0x38(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function VerseFortnite.AI_navigatable._L_2fFortnite_2ecom_2fAI_2fnavigatable_N_RGetCurrentDestination
struct UAI_navigatable__L_2fFortnite_2ecom_2fAI_2fnavigatable_N_RGetCurrentDestination_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C06[0x7];                                     // Fixing Size After Last Property..
	FOptionProperty_                             RetVal;                                            // 0x8(0x20)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function VerseFortnite.AI_navigation_target.$InitInstance
struct UAI_navigation_target__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseFortnite.AI_navigation_target.$Block
struct UAI_navigation_target__Block_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseFortnite.AI_navigation_target.$InitCDO
struct UAI_navigation_target__InitCDO_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function VerseFortnite.Characters._L_2fFortnite_2ecom_2fCharacters_N_Roperator_U_2eGetInstigatorAgent_U_L_Ngame__action__instigator_M_Ntuple_L_R_M_Ntuple_L_R_R
struct UCharacters__L_2fFortnite_2ecom_2fCharacters_N_Roperator_U_2eGetInstigatorAgent_U_L_Ngame__action__instigator_M_Ntuple_L_R_M_Ntuple_L_R_R_Params
{
public:
	struct FTuple_Lgame__action__instigator_Mtuple_L_R_Mtuple_L_R_R __verse_0xB2CDDD72_Argument;                       // 0x0(0xA)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C08[0x6];                                     // Fixing Size After Last Property..
	FOptionProperty_                             RetVal;                                            // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function VerseFortnite.Characters._L_2fFortnite_2ecom_2fCharacters_N_Roperator_U_2eGetInstigator_U_L_Nagent_M_Ntuple_L_R_M_Ntuple_L_R_R
struct UCharacters__L_2fFortnite_2ecom_2fCharacters_N_Roperator_U_2eGetInstigator_U_L_Nagent_M_Ntuple_L_R_M_Ntuple_L_R_R_Params
{
public:
	struct FTuple_Lagent_Mtuple_L_R_Mtuple_L_R_R __verse_0xB2CDDD72_Argument;                       // 0x0(0xA)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C09[0x6];                                     // Fixing Size After Last Property..
	class UObject*                               RetVal;                                            // 0x10(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function VerseFortnite.Characters._L_2fFortnite_2ecom_2fCharacters_N_Roperator_U_2eGetFortCharacter_U_L_Nagent_M_Ntuple_L_R_M_Ntuple_L_R_R
struct UCharacters__L_2fFortnite_2ecom_2fCharacters_N_Roperator_U_2eGetFortCharacter_U_L_Nagent_M_Ntuple_L_R_M_Ntuple_L_R_R_Params
{
public:
	struct FTuple_Lagent_Mtuple_L_R_Mtuple_L_R_R __verse_0xB2CDDD72_Argument;                       // 0x0(0xA)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C0A[0x6];                                     // Fixing Size After Last Property..
	FOptionProperty_                             RetVal;                                            // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x9A (0x9A - 0x0)
// Function VerseFortnite.Characters.Characters_stasis_args$OverrideFactory
struct UCharacters_Characters_stasis_args_OverrideFactory_Params
{
public:
	struct FCharacters_stasis_args               RetVal;                                            // 0x0(0x3)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8C0B[0x5];                                     // Fixing Size After Last Property..
	TMap<FVerseStringProperty_, uint8>           __verse_0xFB48ED96__InitOverrideMap;               // 0x8(0x50)(ConstParm, Parm, ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResultStack_0;                                // 0x58(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_1;                                     // 0x68(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8C0C[0x6];                                     // Fixing Size After Last Property..
	FVerseStringProperty_                        _ExprResultStack_2;                                // 0x70(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_3;                                     // 0x80(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8C0D[0x6];                                     // Fixing Size After Last Property..
	FVerseStringProperty_                        _ExprResultStack_4;                                // 0x88(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_5;                                     // 0x98(0x2)(NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function VerseFortnite.Characters.Characters_stasis_args$Factory
struct UCharacters_Characters_stasis_args_Factory_Params
{
public:
	struct FCharacters_stasis_args               RetVal;                                            // 0x0(0x3)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function VerseFortnite.Characters.$InitCDO
struct UCharacters__InitCDO_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function VerseFortnite.Characters_fort_character._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RSprintedEvent
struct UCharacters_fort_character__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RSprintedEvent_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C0E[0x7];                                     // Fixing Size After Last Property..
	class UObject*                               RetVal;                                            // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function VerseFortnite.Characters_fort_character._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RShow
struct UCharacters_fort_character__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RShow_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function VerseFortnite.Characters_fort_character._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RSetVulnerability_L_Nlogic_R
struct UCharacters_fort_character__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RSetVulnerability_L_Nlogic_R_Params
{
public:
	uint8                                        __verse_0xB2CDDD72_Argument : 1;                   // Mask: 0x1, PropSize: 0x10x0(0x1)(Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function VerseFortnite.Characters_fort_character._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RReleaseFromStasis
struct UCharacters_fort_character__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RReleaseFromStasis_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function VerseFortnite.Characters_fort_character._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RPutInStasis_L_Nstasis__args_R
struct UCharacters_fort_character__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RPutInStasis_L_Nstasis__args_R_Params
{
public:
	struct FCharacters_stasis_args               __verse_0xB2CDDD72_Argument;                       // 0x0(0x3)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function VerseFortnite.Characters_fort_character._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RJumpedEvent
struct UCharacters_fort_character__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RJumpedEvent_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C0F[0x7];                                     // Fixing Size After Last Property..
	class UObject*                               RetVal;                                            // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function VerseFortnite.Characters_fort_character._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsVulnerable
struct UCharacters_fort_character__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsVulnerable_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x1(0x2)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function VerseFortnite.Characters_fort_character._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsOnGround
struct UCharacters_fort_character__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsOnGround_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x1(0x2)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function VerseFortnite.Characters_fort_character._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsInWater
struct UCharacters_fort_character__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsInWater_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x1(0x2)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function VerseFortnite.Characters_fort_character._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsInAir
struct UCharacters_fort_character__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsInAir_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x1(0x2)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function VerseFortnite.Characters_fort_character._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsGliding
struct UCharacters_fort_character__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsGliding_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x1(0x2)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function VerseFortnite.Characters_fort_character._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsFlying
struct UCharacters_fort_character__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsFlying_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x1(0x2)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function VerseFortnite.Characters_fort_character._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsFalling
struct UCharacters_fort_character__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsFalling_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x1(0x2)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function VerseFortnite.Characters_fort_character._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsDownButNotOut
struct UCharacters_fort_character__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsDownButNotOut_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x1(0x2)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function VerseFortnite.Characters_fort_character._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsCrouching
struct UCharacters_fort_character__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsCrouching_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x1(0x2)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function VerseFortnite.Characters_fort_character._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsActive
struct UCharacters_fort_character__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsActive_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x1(0x2)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function VerseFortnite.Characters_fort_character._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RHide
struct UCharacters_fort_character__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RHide_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function VerseFortnite.Characters_fort_character._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RGetViewRotation
struct UCharacters_fort_character__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RGetViewRotation_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C10[0xF];                                     // Fixing Size After Last Property..
	struct FVerseRotation                        RetVal;                                            // 0x10(0x20)(Parm, OutParm, ReturnParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function VerseFortnite.Characters_fort_character._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RGetViewLocation
struct UCharacters_fort_character__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RGetViewLocation_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C11[0x7];                                     // Fixing Size After Last Property..
	struct FSpatialMath_vector3                  RetVal;                                            // 0x8(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function VerseFortnite.Characters_fort_character._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RGetAgent
struct UCharacters_fort_character__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RGetAgent_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C12[0x7];                                     // Fixing Size After Last Property..
	FOptionProperty_                             RetVal;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VerseFortnite.Characters_fort_character._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_REliminatedEvent
struct UCharacters_fort_character__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_REliminatedEvent_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C13[0x7];                                     // Fixing Size After Last Property..
	class UObject*                               RetVal;                                            // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VerseFortnite.Characters_fort_character._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RCrouchedEvent
struct UCharacters_fort_character__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RCrouchedEvent_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C14[0x7];                                     // Fixing Size After Last Property..
	class UObject*                               RetVal;                                            // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RSprintedEvent
struct UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RSprintedEvent_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C15[0x7];                                     // Fixing Size After Last Property..
	class UObject*                               RetVal;                                            // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RShow
struct UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RShow_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RSetVulnerability_L_Nlogic_R
struct UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RSetVulnerability_L_Nlogic_R_Params
{
public:
	uint8                                        __verse_0xB2CDDD72_Argument : 1;                   // Mask: 0x1, PropSize: 0x10x0(0x1)(Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fGame_2fshieldable_N_RSetShield_L_Nfloat_R
struct UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fGame_2fshieldable_N_RSetShield_L_Nfloat_R_Params
{
public:
	double                                       __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fGame_2fshieldable_N_RSetMaxShield_L_Nfloat_R
struct UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fGame_2fshieldable_N_RSetMaxShield_L_Nfloat_R_Params
{
public:
	double                                       __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fGame_2fhealthful_N_RSetMaxHealth_L_Nfloat_R
struct UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fGame_2fhealthful_N_RSetMaxHealth_L_Nfloat_R_Params
{
public:
	double                                       __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fGame_2fhealthful_N_RSetHealth_L_Nfloat_R
struct UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fGame_2fhealthful_N_RSetHealth_L_Nfloat_R_Params
{
public:
	double                                       __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RReleaseFromStasis
struct UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RReleaseFromStasis_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RPutInStasis_L_Nstasis__args_R
struct UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RPutInStasis_L_Nstasis__args_R_Params
{
public:
	struct FCharacters_stasis_args               __verse_0xB2CDDD72_Argument;                       // 0x0(0x3)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RJumpedEvent
struct UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RJumpedEvent_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C16[0x7];                                     // Fixing Size After Last Property..
	class UObject*                               RetVal;                                            // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsVulnerable
struct UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsVulnerable_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x1(0x2)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsOnGround
struct UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsOnGround_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x1(0x2)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsInWater
struct UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsInWater_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x1(0x2)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsInAir
struct UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsInAir_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x1(0x2)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsGliding
struct UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsGliding_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x1(0x2)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsFlying
struct UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsFlying_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x1(0x2)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsFalling
struct UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsFalling_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x1(0x2)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsDownButNotOut
struct UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsDownButNotOut_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x1(0x2)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsCrouching
struct UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsCrouching_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x1(0x2)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsActive
struct UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsActive_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x1(0x2)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RHide
struct UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RHide_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fGame_2fshieldable_N_RHealedShieldEvent
struct UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fGame_2fshieldable_N_RHealedShieldEvent_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C17[0x7];                                     // Fixing Size After Last Property..
	class UObject*                               RetVal;                                            // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fGame_2fhealable_N_RHealedEvent
struct UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fGame_2fhealable_N_RHealedEvent_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C18[0x7];                                     // Fixing Size After Last Property..
	class UObject*                               RetVal;                                            // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fGame_2fhealable_N_RHeal_L_Nfloat_R
struct UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fGame_2fhealable_N_RHeal_L_Nfloat_R_Params
{
public:
	double                                       __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fGame_2fhealable_N_RHeal_L_Nhealing__args_R
struct UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fGame_2fhealable_N_RHeal_L_Nhealing__args_R_Params
{
public:
	struct FGame_healing_args                    __verse_0xB2CDDD72_Argument;                       // 0x0(0x18)(Parm, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RGetViewRotation
struct UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RGetViewRotation_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C19[0xF];                                     // Fixing Size After Last Property..
	struct FVerseRotation                        RetVal;                                            // 0x10(0x20)(Parm, OutParm, ReturnParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RGetViewLocation
struct UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RGetViewLocation_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C1A[0x7];                                     // Fixing Size After Last Property..
	struct FSpatialMath_vector3                  RetVal;                                            // 0x8(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x70 (0x70 - 0x0)
// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform
struct UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C1B[0xF];                                     // Fixing Size After Last Property..
	struct FSpatialMath_transform                RetVal;                                            // 0x10(0x60)(Parm, OutParm, ReturnParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fGame_2fshieldable_N_RGetShield
struct UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fGame_2fshieldable_N_RGetShield_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C1C[0x7];                                     // Fixing Size After Last Property..
	double                                       RetVal;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fGame_2fshieldable_N_RGetMaxShield
struct UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fGame_2fshieldable_N_RGetMaxShield_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C1D[0x7];                                     // Fixing Size After Last Property..
	double                                       RetVal;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fGame_2fhealthful_N_RGetMaxHealth
struct UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fGame_2fhealthful_N_RGetMaxHealth_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C1E[0x7];                                     // Fixing Size After Last Property..
	double                                       RetVal;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fGame_2fhealthful_N_RGetHealth
struct UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fGame_2fhealthful_N_RGetHealth_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C1F[0x7];                                     // Fixing Size After Last Property..
	double                                       RetVal;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RGetAgent
struct UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RGetAgent_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C20[0x7];                                     // Fixing Size After Last Property..
	FOptionProperty_                             RetVal;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_REliminatedEvent
struct UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_REliminatedEvent_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C21[0x7];                                     // Fixing Size After Last Property..
	class UObject*                               RetVal;                                            // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fGame_2fshieldable_N_RDamagedShieldEvent
struct UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fGame_2fshieldable_N_RDamagedShieldEvent_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C22[0x7];                                     // Fixing Size After Last Property..
	class UObject*                               RetVal;                                            // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamagedEvent
struct UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamagedEvent_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C23[0x7];                                     // Fixing Size After Last Property..
	class UObject*                               RetVal;                                            // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamage_L_Nfloat_R
struct UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamage_L_Nfloat_R_Params
{
public:
	double                                       __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamage_L_Ndamage__args_R
struct UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamage_L_Ndamage__args_R_Params
{
public:
	struct FGame_damage_args                     __verse_0xB2CDDD72_Argument;                       // 0x0(0x18)(Parm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RCrouchedEvent
struct UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RCrouchedEvent_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C24[0x7];                                     // Fixing Size After Last Property..
	class UObject*                               RetVal;                                            // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function VerseFortnite.Characters_fort_character_impl.$InitInstance
struct UCharacters_fort_character_impl__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseFortnite.Characters_fort_character_impl.$Block
struct UCharacters_fort_character_impl__Block_Params
{
public:
};

// 0x80 (0x80 - 0x0)
// Function VerseFortnite.Characters_fort_character_impl.$InitCDO
struct UCharacters_fort_character_impl__InitCDO_Params
{
public:
	class UVerseEngine_subscribable_event*       _ExprResult_0;                                     // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint64                                       _InstancingGraph_1;                                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerseEngine_subscribable_event*       _ExprResult_2;                                     // 0x10(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint64                                       _InstancingGraph_3;                                // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerseEngine_subscribable_event*       _ExprResult_4;                                     // 0x20(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint64                                       _InstancingGraph_5;                                // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerseEngine_subscribable_event*       _ExprResult_6;                                     // 0x30(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint64                                       _InstancingGraph_7;                                // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerseEngine_subscribable_event*       _ExprResult_8;                                     // 0x40(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint64                                       _InstancingGraph_9;                                // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerseEngine_subscribable_event*       _ExprResult_10;                                    // 0x50(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint64                                       _InstancingGraph_11;                               // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerseEngine_subscribable_event*       _ExprResult_12;                                    // 0x60(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint64                                       _InstancingGraph_13;                               // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerseEngine_subscribable_event*       _ExprResult_14;                                    // 0x70(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint64                                       _InstancingGraph_15;                               // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A (0x1A - 0x0)
// Function VerseFortnite.FortPlayerUtilities._L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eSpectatePlayer_U_L_Nplayer_M_Ntuple_L_R_M_Nplayer_R
struct UFortPlayerUtilities__L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eSpectatePlayer_U_L_Nplayer_M_Ntuple_L_R_M_Nplayer_R_Params
{
public:
	struct FTuple_Lplayer_Mtuple_L_R_Mplayer_R   __verse_0xB2CDDD72_Argument;                       // 0x0(0x18)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x18(0x2)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x12 (0x12 - 0x0)
// Function VerseFortnite.FortPlayerUtilities._L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eSpectateEliminator_U_L_Nplayer_M_Ntuple_L_R_M_Ntuple_L_R_R
struct UFortPlayerUtilities__L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eSpectateEliminator_U_L_Nplayer_M_Ntuple_L_R_M_Ntuple_L_R_R_Params
{
public:
	struct FTuple_Lplayer_Mtuple_L_R_Mtuple_L_R_R __verse_0xB2CDDD72_Argument;                       // 0x0(0xA)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C25[0x6];                                     // Fixing Size After Last Property..
	FOptionProperty_                             RetVal;                                            // 0x10(0x2)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x12 (0x12 - 0x0)
// Function VerseFortnite.FortPlayerUtilities._L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eSetSpectator_U_L_Nplayer_M_Ntuple_L_R_M_Ntuple_L_R_R
struct UFortPlayerUtilities__L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eSetSpectator_U_L_Nplayer_M_Ntuple_L_R_M_Ntuple_L_R_R_Params
{
public:
	struct FTuple_Lplayer_Mtuple_L_R_Mtuple_L_R_R __verse_0xB2CDDD72_Argument;                       // 0x0(0xA)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C26[0x6];                                     // Fixing Size After Last Property..
	FOptionProperty_                             RetVal;                                            // 0x10(0x2)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VerseFortnite.FortPlayerUtilities._L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eSendToLobby_U_L_Nplayer_M_Ntuple_L_R_M_Ntuple_L_R_R
struct UFortPlayerUtilities__L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eSendToLobby_U_L_Nplayer_M_Ntuple_L_R_M_Ntuple_L_R_R_Params
{
public:
	struct FTuple_Lplayer_Mtuple_L_R_Mtuple_L_R_R __verse_0xB2CDDD72_Argument;                       // 0x0(0xA)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C27[0x6];                                     // Fixing Size Of Struct..
};

// 0x50 (0x50 - 0x0)
// Function VerseFortnite.FortPlayerUtilities._L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eRespawn_U_L_Nagent_M_Ntuple_L_R_M_Ntuple_Lvector3_Mrotation_R_R
struct UFortPlayerUtilities__L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eRespawn_U_L_Nagent_M_Ntuple_L_R_M_Ntuple_Lvector3_Mrotation_R_R_Params
{
public:
	struct FTuple_Lagent_Mtuple_L_R_Mtuple_Lvector3_Mrotation_R_R __verse_0xB2CDDD72_Argument;                       // 0x0(0x50)(Parm, HasGetValueTypeHash)
};

// 0x12 (0x12 - 0x0)
// Function VerseFortnite.FortPlayerUtilities._L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eIsSpectator_U_L_Nplayer_M_Ntuple_L_R_M_Ntuple_L_R_R
struct UFortPlayerUtilities__L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eIsSpectator_U_L_Nplayer_M_Ntuple_L_R_M_Ntuple_L_R_R_Params
{
public:
	struct FTuple_Lplayer_Mtuple_L_R_Mtuple_L_R_R __verse_0xB2CDDD72_Argument;                       // 0x0(0xA)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C28[0x6];                                     // Fixing Size After Last Property..
	FOptionProperty_                             RetVal;                                            // 0x10(0x2)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function VerseFortnite.FortPlayerUtilities._L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eGetPlayersSpectating_U_L_Nplayer_M_Ntuple_L_R_M_Ntuple_L_R_R
struct UFortPlayerUtilities__L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eGetPlayersSpectating_U_L_Nplayer_M_Ntuple_L_R_M_Ntuple_L_R_R_Params
{
public:
	struct FTuple_Lplayer_Mtuple_L_R_Mtuple_L_R_R __verse_0xB2CDDD72_Argument;                       // 0x0(0xA)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C29[0x6];                                     // Fixing Size After Last Property..
	TArray<class USimulation_player*>            RetVal;                                            // 0x10(0x10)(Parm, OutParm, ReturnParm, ContainsInstancedReference)
};

// 0x0 (0x0 - 0x0)
// Function VerseFortnite.FortPlayerUtilities.$InitCDO
struct UFortPlayerUtilities__InitCDO_Params
{
public:
};

// 0xBD (0xBD - 0x0)
// Function VerseFortnite.Game.Game_healing_result$OverrideFactory
struct UGame_Game_healing_result_OverrideFactory_Params
{
public:
	struct FGame_healing_result                  RetVal;                                            // 0x0(0x20)(Parm, OutParm, ReturnParm, NoDestructor)
	TMap<FVerseStringProperty_, uint8>           __verse_0xFB48ED96__InitOverrideMap;               // 0x20(0x50)(ConstParm, Parm, ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResultStack_0;                                // 0x70(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_1;                                     // 0x80(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8C2A[0x6];                                     // Fixing Size After Last Property..
	FOptionProperty_                             _ExprResult_2;                                     // 0x88(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x00000000__1;                             // 0x90(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_3 : 1;                                 // Mask: 0x1, PropSize: 0x10x92(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_481 : 7;                                    // Fixing Bit-Field Size..
	FOptionProperty_                             _ExprResultStack_4;                                // 0x93(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8C2B[0x3];                                     // Fixing Size After Last Property..
	FVerseStringProperty_                        _ExprResultStack_5;                                // 0x98(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_6;                                     // 0xA8(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8C2C[0x6];                                     // Fixing Size After Last Property..
	FOptionProperty_                             _ExprResult_7;                                     // 0xB0(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x00000000__3;                             // 0xB8(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_8 : 1;                                 // Mask: 0x1, PropSize: 0x10xBA(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_482 : 7;                                    // Fixing Bit-Field Size..
	FOptionProperty_                             _ExprResultStack_9;                                // 0xBB(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3D (0x3D - 0x0)
// Function VerseFortnite.Game.Game_healing_result$Factory
struct UGame_Game_healing_result_Factory_Params
{
public:
	struct FGame_healing_result                  RetVal;                                            // 0x0(0x20)(Parm, OutParm, ReturnParm, NoDestructor)
	FOptionProperty_                             _ExprResult_0;                                     // 0x20(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x00000000__1;                             // 0x28(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_1 : 1;                                 // Mask: 0x1, PropSize: 0x10x2A(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_483 : 7;                                    // Fixing Bit-Field Size..
	FOptionProperty_                             _ExprResultStack_2;                                // 0x2B(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8C2D[0x3];                                     // Fixing Size After Last Property..
	FOptionProperty_                             _ExprResult_3;                                     // 0x30(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x00000000__3;                             // 0x38(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_4 : 1;                                 // Mask: 0x1, PropSize: 0x10x3A(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_484 : 7;                                    // Fixing Bit-Field Size..
	FOptionProperty_                             _ExprResultStack_5;                                // 0x3B(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB5 (0xB5 - 0x0)
// Function VerseFortnite.Game.Game_healing_args$OverrideFactory
struct UGame_Game_healing_args_OverrideFactory_Params
{
public:
	struct FGame_healing_args                    RetVal;                                            // 0x0(0x18)(Parm, OutParm, ReturnParm, NoDestructor)
	TMap<FVerseStringProperty_, uint8>           __verse_0xFB48ED96__InitOverrideMap;               // 0x18(0x50)(ConstParm, Parm, ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResultStack_0;                                // 0x68(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_1;                                     // 0x78(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8C2E[0x6];                                     // Fixing Size After Last Property..
	FOptionProperty_                             _ExprResult_2;                                     // 0x80(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x00000000__1;                             // 0x88(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_3 : 1;                                 // Mask: 0x1, PropSize: 0x10x8A(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_485 : 7;                                    // Fixing Bit-Field Size..
	FOptionProperty_                             _ExprResultStack_4;                                // 0x8B(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8C2F[0x3];                                     // Fixing Size After Last Property..
	FVerseStringProperty_                        _ExprResultStack_5;                                // 0x90(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_6;                                     // 0xA0(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8C30[0x6];                                     // Fixing Size After Last Property..
	FOptionProperty_                             _ExprResult_7;                                     // 0xA8(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x00000000__3;                             // 0xB0(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_8 : 1;                                 // Mask: 0x1, PropSize: 0x10xB2(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_486 : 7;                                    // Fixing Bit-Field Size..
	FOptionProperty_                             _ExprResultStack_9;                                // 0xB3(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x35 (0x35 - 0x0)
// Function VerseFortnite.Game.Game_healing_args$Factory
struct UGame_Game_healing_args_Factory_Params
{
public:
	struct FGame_healing_args                    RetVal;                                            // 0x0(0x18)(Parm, OutParm, ReturnParm, NoDestructor)
	FOptionProperty_                             _ExprResult_0;                                     // 0x18(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x00000000__1;                             // 0x20(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_1 : 1;                                 // Mask: 0x1, PropSize: 0x10x22(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_487 : 7;                                    // Fixing Bit-Field Size..
	FOptionProperty_                             _ExprResultStack_2;                                // 0x23(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8C31[0x3];                                     // Fixing Size After Last Property..
	FOptionProperty_                             _ExprResult_3;                                     // 0x28(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x00000000__3;                             // 0x30(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_4 : 1;                                 // Mask: 0x1, PropSize: 0x10x32(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_488 : 7;                                    // Fixing Bit-Field Size..
	FOptionProperty_                             _ExprResultStack_5;                                // 0x33(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xBD (0xBD - 0x0)
// Function VerseFortnite.Game.Game_damage_result$OverrideFactory
struct UGame_Game_damage_result_OverrideFactory_Params
{
public:
	struct FGame_damage_result                   RetVal;                                            // 0x0(0x20)(Parm, OutParm, ReturnParm, NoDestructor)
	TMap<FVerseStringProperty_, uint8>           __verse_0xFB48ED96__InitOverrideMap;               // 0x20(0x50)(ConstParm, Parm, ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResultStack_0;                                // 0x70(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_1;                                     // 0x80(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8C32[0x6];                                     // Fixing Size After Last Property..
	FOptionProperty_                             _ExprResult_2;                                     // 0x88(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x00000000__1;                             // 0x90(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_3 : 1;                                 // Mask: 0x1, PropSize: 0x10x92(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_489 : 7;                                    // Fixing Bit-Field Size..
	FOptionProperty_                             _ExprResultStack_4;                                // 0x93(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8C33[0x3];                                     // Fixing Size After Last Property..
	FVerseStringProperty_                        _ExprResultStack_5;                                // 0x98(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_6;                                     // 0xA8(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8C34[0x6];                                     // Fixing Size After Last Property..
	FOptionProperty_                             _ExprResult_7;                                     // 0xB0(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x00000000__3;                             // 0xB8(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_8 : 1;                                 // Mask: 0x1, PropSize: 0x10xBA(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_48A : 7;                                    // Fixing Bit-Field Size..
	FOptionProperty_                             _ExprResultStack_9;                                // 0xBB(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3D (0x3D - 0x0)
// Function VerseFortnite.Game.Game_damage_result$Factory
struct UGame_Game_damage_result_Factory_Params
{
public:
	struct FGame_damage_result                   RetVal;                                            // 0x0(0x20)(Parm, OutParm, ReturnParm, NoDestructor)
	FOptionProperty_                             _ExprResult_0;                                     // 0x20(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x00000000__1;                             // 0x28(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_1 : 1;                                 // Mask: 0x1, PropSize: 0x10x2A(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_48B : 7;                                    // Fixing Bit-Field Size..
	FOptionProperty_                             _ExprResultStack_2;                                // 0x2B(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8C35[0x3];                                     // Fixing Size After Last Property..
	FOptionProperty_                             _ExprResult_3;                                     // 0x30(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x00000000__3;                             // 0x38(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_4 : 1;                                 // Mask: 0x1, PropSize: 0x10x3A(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_48C : 7;                                    // Fixing Bit-Field Size..
	FOptionProperty_                             _ExprResultStack_5;                                // 0x3B(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB5 (0xB5 - 0x0)
// Function VerseFortnite.Game.Game_damage_args$OverrideFactory
struct UGame_Game_damage_args_OverrideFactory_Params
{
public:
	struct FGame_damage_args                     RetVal;                                            // 0x0(0x18)(Parm, OutParm, ReturnParm, NoDestructor)
	TMap<FVerseStringProperty_, uint8>           __verse_0xFB48ED96__InitOverrideMap;               // 0x18(0x50)(ConstParm, Parm, ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResultStack_0;                                // 0x68(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_1;                                     // 0x78(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8C36[0x6];                                     // Fixing Size After Last Property..
	FOptionProperty_                             _ExprResult_2;                                     // 0x80(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x00000000__1;                             // 0x88(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_3 : 1;                                 // Mask: 0x1, PropSize: 0x10x8A(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_48D : 7;                                    // Fixing Bit-Field Size..
	FOptionProperty_                             _ExprResultStack_4;                                // 0x8B(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8C37[0x3];                                     // Fixing Size After Last Property..
	FVerseStringProperty_                        _ExprResultStack_5;                                // 0x90(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_6;                                     // 0xA0(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8C38[0x6];                                     // Fixing Size After Last Property..
	FOptionProperty_                             _ExprResult_7;                                     // 0xA8(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x00000000__3;                             // 0xB0(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_8 : 1;                                 // Mask: 0x1, PropSize: 0x10xB2(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_48E : 7;                                    // Fixing Bit-Field Size..
	FOptionProperty_                             _ExprResultStack_9;                                // 0xB3(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x35 (0x35 - 0x0)
// Function VerseFortnite.Game.Game_damage_args$Factory
struct UGame_Game_damage_args_Factory_Params
{
public:
	struct FGame_damage_args                     RetVal;                                            // 0x0(0x18)(Parm, OutParm, ReturnParm, NoDestructor)
	FOptionProperty_                             _ExprResult_0;                                     // 0x18(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x00000000__1;                             // 0x20(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_1 : 1;                                 // Mask: 0x1, PropSize: 0x10x22(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_48F : 7;                                    // Fixing Bit-Field Size..
	FOptionProperty_                             _ExprResultStack_2;                                // 0x23(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8C39[0x3];                                     // Fixing Size After Last Property..
	FOptionProperty_                             _ExprResult_3;                                     // 0x28(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x00000000__3;                             // 0x30(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_4 : 1;                                 // Mask: 0x1, PropSize: 0x10x32(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_490 : 7;                                    // Fixing Bit-Field Size..
	FOptionProperty_                             _ExprResultStack_5;                                // 0x33(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function VerseFortnite.Game.Game_elimination_result$OverrideFactory
struct UGame_Game_elimination_result_OverrideFactory_Params
{
public:
	struct FGame_elimination_result              RetVal;                                            // 0x0(0x10)(Parm, OutParm, ReturnParm, NoDestructor)
	TMap<FVerseStringProperty_, uint8>           __verse_0xFB48ED96__InitOverrideMap;               // 0x10(0x50)(ConstParm, Parm, ContainsInstancedReference)
};

// 0x10 (0x10 - 0x0)
// Function VerseFortnite.Game.Game_elimination_result$Factory
struct UGame_Game_elimination_result_Factory_Params
{
public:
	struct FGame_elimination_result              RetVal;                                            // 0x0(0x10)(Parm, OutParm, ReturnParm, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function VerseFortnite.Game.$InitCDO
struct UGame__InitCDO_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseFortnite.Game_agent_instigator_impl.$InitInstance
struct UGame_agent_instigator_impl__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseFortnite.Game_agent_instigator_impl.$Block
struct UGame_agent_instigator_impl__Block_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseFortnite.Game_agent_instigator_impl.$InitCDO
struct UGame_agent_instigator_impl__InitCDO_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function VerseFortnite.Game_damageable._L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamagedEvent
struct UGame_damageable__L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamagedEvent_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C3A[0x7];                                     // Fixing Size After Last Property..
	class UObject*                               RetVal;                                            // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function VerseFortnite.Game_damageable._L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamage_L_Nfloat_R
struct UGame_damageable__L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamage_L_Nfloat_R_Params
{
public:
	double                                       __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function VerseFortnite.Game_damageable._L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamage_L_Ndamage__args_R
struct UGame_damageable__L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamage_L_Ndamage__args_R_Params
{
public:
	struct FGame_damage_args                     __verse_0xB2CDDD72_Argument;                       // 0x0(0x18)(Parm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function VerseFortnite.Game_healable._L_2fFortnite_2ecom_2fGame_2fhealable_N_RHealedEvent
struct UGame_healable__L_2fFortnite_2ecom_2fGame_2fhealable_N_RHealedEvent_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C3B[0x7];                                     // Fixing Size After Last Property..
	class UObject*                               RetVal;                                            // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function VerseFortnite.Game_healable._L_2fFortnite_2ecom_2fGame_2fhealable_N_RHeal_L_Nfloat_R
struct UGame_healable__L_2fFortnite_2ecom_2fGame_2fhealable_N_RHeal_L_Nfloat_R_Params
{
public:
	double                                       __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function VerseFortnite.Game_healable._L_2fFortnite_2ecom_2fGame_2fhealable_N_RHeal_L_Nhealing__args_R
struct UGame_healable__L_2fFortnite_2ecom_2fGame_2fhealable_N_RHeal_L_Nhealing__args_R_Params
{
public:
	struct FGame_healing_args                    __verse_0xB2CDDD72_Argument;                       // 0x0(0x18)(Parm, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function VerseFortnite.Game_healthful._L_2fFortnite_2ecom_2fGame_2fhealthful_N_RSetMaxHealth_L_Nfloat_R
struct UGame_healthful__L_2fFortnite_2ecom_2fGame_2fhealthful_N_RSetMaxHealth_L_Nfloat_R_Params
{
public:
	double                                       __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function VerseFortnite.Game_healthful._L_2fFortnite_2ecom_2fGame_2fhealthful_N_RSetHealth_L_Nfloat_R
struct UGame_healthful__L_2fFortnite_2ecom_2fGame_2fhealthful_N_RSetHealth_L_Nfloat_R_Params
{
public:
	double                                       __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VerseFortnite.Game_healthful._L_2fFortnite_2ecom_2fGame_2fhealthful_N_RGetMaxHealth
struct UGame_healthful__L_2fFortnite_2ecom_2fGame_2fhealthful_N_RGetMaxHealth_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C3C[0x7];                                     // Fixing Size After Last Property..
	double                                       RetVal;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VerseFortnite.Game_healthful._L_2fFortnite_2ecom_2fGame_2fhealthful_N_RGetHealth
struct UGame_healthful__L_2fFortnite_2ecom_2fGame_2fhealthful_N_RGetHealth_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C3D[0x7];                                     // Fixing Size After Last Property..
	double                                       RetVal;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function VerseFortnite.Game_positional._L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform
struct UGame_positional__L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C3E[0xF];                                     // Fixing Size After Last Property..
	struct FSpatialMath_transform                RetVal;                                            // 0x10(0x60)(Parm, OutParm, ReturnParm, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function VerseFortnite.Game_shieldable._L_2fFortnite_2ecom_2fGame_2fshieldable_N_RSetShield_L_Nfloat_R
struct UGame_shieldable__L_2fFortnite_2ecom_2fGame_2fshieldable_N_RSetShield_L_Nfloat_R_Params
{
public:
	double                                       __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function VerseFortnite.Game_shieldable._L_2fFortnite_2ecom_2fGame_2fshieldable_N_RSetMaxShield_L_Nfloat_R
struct UGame_shieldable__L_2fFortnite_2ecom_2fGame_2fshieldable_N_RSetMaxShield_L_Nfloat_R_Params
{
public:
	double                                       __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VerseFortnite.Game_shieldable._L_2fFortnite_2ecom_2fGame_2fshieldable_N_RHealedShieldEvent
struct UGame_shieldable__L_2fFortnite_2ecom_2fGame_2fshieldable_N_RHealedShieldEvent_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C3F[0x7];                                     // Fixing Size After Last Property..
	class UObject*                               RetVal;                                            // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VerseFortnite.Game_shieldable._L_2fFortnite_2ecom_2fGame_2fshieldable_N_RGetShield
struct UGame_shieldable__L_2fFortnite_2ecom_2fGame_2fshieldable_N_RGetShield_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C40[0x7];                                     // Fixing Size After Last Property..
	double                                       RetVal;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VerseFortnite.Game_shieldable._L_2fFortnite_2ecom_2fGame_2fshieldable_N_RGetMaxShield
struct UGame_shieldable__L_2fFortnite_2ecom_2fGame_2fshieldable_N_RGetMaxShield_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C41[0x7];                                     // Fixing Size After Last Property..
	double                                       RetVal;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VerseFortnite.Game_shieldable._L_2fFortnite_2ecom_2fGame_2fshieldable_N_RDamagedShieldEvent
struct UGame_shieldable__L_2fFortnite_2ecom_2fGame_2fshieldable_N_RDamagedShieldEvent_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C42[0x7];                                     // Fixing Size After Last Property..
	class UObject*                               RetVal;                                            // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VerseFortnite.Playspaces_fort_playspace._L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RPlayerRemovedEvent
struct UPlayspaces_fort_playspace__L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RPlayerRemovedEvent_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C43[0x7];                                     // Fixing Size After Last Property..
	class UObject*                               RetVal;                                            // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VerseFortnite.Playspaces_fort_playspace._L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RPlayerAddedEvent
struct UPlayspaces_fort_playspace__L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RPlayerAddedEvent_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C44[0x7];                                     // Fixing Size After Last Property..
	class UObject*                               RetVal;                                            // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VerseFortnite.Playspaces_fort_playspace._L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RGetTeamCollection
struct UPlayspaces_fort_playspace__L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RGetTeamCollection_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C45[0x7];                                     // Fixing Size After Last Property..
	class UObject*                               RetVal;                                            // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function VerseFortnite.Playspaces_fort_playspace._L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RGetPlayers
struct UPlayspaces_fort_playspace__L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RGetPlayers_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C46[0x7];                                     // Fixing Size After Last Property..
	TArray<class USimulation_player*>            RetVal;                                            // 0x8(0x10)(Parm, OutParm, ReturnParm, ContainsInstancedReference)
};

// 0x10 (0x10 - 0x0)
// Function VerseFortnite.Playspaces_fort_playspace_impl._L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RPlayerRemovedEvent
struct UPlayspaces_fort_playspace_impl__L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RPlayerRemovedEvent_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C47[0x7];                                     // Fixing Size After Last Property..
	class UObject*                               RetVal;                                            // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VerseFortnite.Playspaces_fort_playspace_impl._L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RPlayerAddedEvent
struct UPlayspaces_fort_playspace_impl__L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RPlayerAddedEvent_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C48[0x7];                                     // Fixing Size After Last Property..
	class UObject*                               RetVal;                                            // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VerseFortnite.Playspaces_fort_playspace_impl._L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RGetTeamCollection
struct UPlayspaces_fort_playspace_impl__L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RGetTeamCollection_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C49[0x7];                                     // Fixing Size After Last Property..
	class UObject*                               RetVal;                                            // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function VerseFortnite.Playspaces_fort_playspace_impl._L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RGetPlayers
struct UPlayspaces_fort_playspace_impl__L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RGetPlayers_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C4A[0x7];                                     // Fixing Size After Last Property..
	TArray<class USimulation_player*>            RetVal;                                            // 0x8(0x10)(Parm, OutParm, ReturnParm, ContainsInstancedReference)
};

// 0x0 (0x0 - 0x0)
// Function VerseFortnite.Playspaces_fort_playspace_impl.$InitInstance
struct UPlayspaces_fort_playspace_impl__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseFortnite.Playspaces_fort_playspace_impl.$Block
struct UPlayspaces_fort_playspace_impl__Block_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function VerseFortnite.Playspaces_fort_playspace_impl.$InitCDO
struct UPlayspaces_fort_playspace_impl__InitCDO_Params
{
public:
	class UVerseEngine_multicast_delegate*       _ExprResult_0;                                     // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint64                                       _InstancingGraph_1;                                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerseEngine_multicast_delegate*       _ExprResult_2;                                     // 0x10(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint64                                       _InstancingGraph_3;                                // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function VerseFortnite.task_AI_focus_interface$MaintainFocus_L_Nagent_R.Update
struct UTask_AI_focus_interface_MaintainFocus_L_Nagent_R_Update_Params
{
public:
	int64                                        RetVal;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function VerseFortnite.task_AI_focus_interface$MaintainFocus_L_Nvector3_R.Update
struct UTask_AI_focus_interface_MaintainFocus_L_Nvector3_R_Update_Params
{
public:
	int64                                        RetVal;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function VerseFortnite.task_AI_navigatable$NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R.Update
struct UTask_AI_navigatable_NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R_Update_Params
{
public:
	int64                                        RetVal;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function VerseFortnite.task_AI_navigatable$Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R.Update
struct UTask_AI_navigatable_Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R_Update_Params
{
public:
	int64                                        RetVal;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x12 (0x12 - 0x0)
// Function VerseFortnite.Teams_fort_br_team_collection._L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RIsOnTeam_L_Nagent_M_Nteam_R
struct UTeams_fort_br_team_collection__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RIsOnTeam_L_Nagent_M_Nteam_R_Params
{
public:
	struct FTuple_Lagent_Mteam_R                 __verse_0xB2CDDD72_Argument;                       // 0x0(0x10)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x10(0x2)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function VerseFortnite.Teams_fort_br_team_collection._L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeams
struct UTeams_fort_br_team_collection__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeams_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C4C[0x7];                                     // Fixing Size After Last Property..
	TArray<class USimulation_team*>              RetVal;                                            // 0x8(0x10)(Parm, OutParm, ReturnParm, ContainsInstancedReference)
};

// 0x12 (0x12 - 0x0)
// Function VerseFortnite.Teams_fort_br_team_collection._L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeamAttitude_L_Nteam_M_Nteam_R
struct UTeams_fort_br_team_collection__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeamAttitude_L_Nteam_M_Nteam_R_Params
{
public:
	struct FTuple_Lteam_Mteam_R                  __verse_0xB2CDDD72_Argument;                       // 0x0(0x10)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x10(0x2)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x12 (0x12 - 0x0)
// Function VerseFortnite.Teams_fort_br_team_collection._L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeamAttitude_L_Nagent_M_Nagent_R
struct UTeams_fort_br_team_collection__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeamAttitude_L_Nagent_M_Nagent_R_Params
{
public:
	struct FTuple_Lagent_Magent_R                __verse_0xB2CDDD72_Argument;                       // 0x0(0x10)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x10(0x2)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VerseFortnite.Teams_fort_br_team_collection._L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeam_L_Nagent_R
struct UTeams_fort_br_team_collection__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeam_L_Nagent_R_Params
{
public:
	class USimulation_agent*                     __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function VerseFortnite.Teams_fort_br_team_collection._L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetAgents_L_Nteam_R
struct UTeams_fort_br_team_collection__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetAgents_L_Nteam_R_Params
{
public:
	class USimulation_team*                      __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x8(0x18)(Parm, OutParm, ReturnParm, ContainsInstancedReference)
};

// 0x12 (0x12 - 0x0)
// Function VerseFortnite.Teams_fort_br_team_collection._L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RAddToTeam_L_Nagent_M_Nteam_R
struct UTeams_fort_br_team_collection__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RAddToTeam_L_Nagent_M_Nteam_R_Params
{
public:
	struct FTuple_Lagent_Mteam_R                 __verse_0xB2CDDD72_Argument;                       // 0x0(0x10)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x10(0x2)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function VerseFortnite.Teams_fort_br_team_collection.$InitInstance
struct UTeams_fort_br_team_collection__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseFortnite.Teams_fort_br_team_collection.$Block
struct UTeams_fort_br_team_collection__Block_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseFortnite.Teams_fort_br_team_collection.$InitCDO
struct UTeams_fort_br_team_collection__InitCDO_Params
{
public:
};

// 0x12 (0x12 - 0x0)
// Function VerseFortnite.Teams_fort_minigame_team_collection._L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RIsOnTeam_L_Nagent_M_Nteam_R
struct UTeams_fort_minigame_team_collection__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RIsOnTeam_L_Nagent_M_Nteam_R_Params
{
public:
	struct FTuple_Lagent_Mteam_R                 __verse_0xB2CDDD72_Argument;                       // 0x0(0x10)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x10(0x2)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function VerseFortnite.Teams_fort_minigame_team_collection._L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeams
struct UTeams_fort_minigame_team_collection__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeams_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C4D[0x7];                                     // Fixing Size After Last Property..
	TArray<class USimulation_team*>              RetVal;                                            // 0x8(0x10)(Parm, OutParm, ReturnParm, ContainsInstancedReference)
};

// 0x12 (0x12 - 0x0)
// Function VerseFortnite.Teams_fort_minigame_team_collection._L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeamAttitude_L_Nteam_M_Nteam_R
struct UTeams_fort_minigame_team_collection__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeamAttitude_L_Nteam_M_Nteam_R_Params
{
public:
	struct FTuple_Lteam_Mteam_R                  __verse_0xB2CDDD72_Argument;                       // 0x0(0x10)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x10(0x2)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x12 (0x12 - 0x0)
// Function VerseFortnite.Teams_fort_minigame_team_collection._L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeamAttitude_L_Nagent_M_Nagent_R
struct UTeams_fort_minigame_team_collection__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeamAttitude_L_Nagent_M_Nagent_R_Params
{
public:
	struct FTuple_Lagent_Magent_R                __verse_0xB2CDDD72_Argument;                       // 0x0(0x10)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x10(0x2)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VerseFortnite.Teams_fort_minigame_team_collection._L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeam_L_Nagent_R
struct UTeams_fort_minigame_team_collection__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeam_L_Nagent_R_Params
{
public:
	class USimulation_agent*                     __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function VerseFortnite.Teams_fort_minigame_team_collection._L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetAgents_L_Nteam_R
struct UTeams_fort_minigame_team_collection__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetAgents_L_Nteam_R_Params
{
public:
	class USimulation_team*                      __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x8(0x18)(Parm, OutParm, ReturnParm, ContainsInstancedReference)
};

// 0x12 (0x12 - 0x0)
// Function VerseFortnite.Teams_fort_minigame_team_collection._L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RAddToTeam_L_Nagent_M_Nteam_R
struct UTeams_fort_minigame_team_collection__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RAddToTeam_L_Nagent_M_Nteam_R_Params
{
public:
	struct FTuple_Lagent_Mteam_R                 __verse_0xB2CDDD72_Argument;                       // 0x0(0x10)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x10(0x2)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function VerseFortnite.Teams_fort_minigame_team_collection.$InitInstance
struct UTeams_fort_minigame_team_collection__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseFortnite.Teams_fort_minigame_team_collection.$Block
struct UTeams_fort_minigame_team_collection__Block_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseFortnite.Teams_fort_minigame_team_collection.$InitCDO
struct UTeams_fort_minigame_team_collection__InitCDO_Params
{
public:
};

// 0x12 (0x12 - 0x0)
// Function VerseFortnite.Teams_fort_team_collection._L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RIsOnTeam_L_Nagent_M_Nteam_R
struct UTeams_fort_team_collection__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RIsOnTeam_L_Nagent_M_Nteam_R_Params
{
public:
	struct FTuple_Lagent_Mteam_R                 __verse_0xB2CDDD72_Argument;                       // 0x0(0x10)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x10(0x2)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function VerseFortnite.Teams_fort_team_collection._L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeams
struct UTeams_fort_team_collection__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeams_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C4E[0x7];                                     // Fixing Size After Last Property..
	TArray<class USimulation_team*>              RetVal;                                            // 0x8(0x10)(Parm, OutParm, ReturnParm, ContainsInstancedReference)
};

// 0x12 (0x12 - 0x0)
// Function VerseFortnite.Teams_fort_team_collection._L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeamAttitude_L_Nteam_M_Nteam_R
struct UTeams_fort_team_collection__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeamAttitude_L_Nteam_M_Nteam_R_Params
{
public:
	struct FTuple_Lteam_Mteam_R                  __verse_0xB2CDDD72_Argument;                       // 0x0(0x10)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x10(0x2)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x12 (0x12 - 0x0)
// Function VerseFortnite.Teams_fort_team_collection._L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeamAttitude_L_Nagent_M_Nagent_R
struct UTeams_fort_team_collection__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeamAttitude_L_Nagent_M_Nagent_R_Params
{
public:
	struct FTuple_Lagent_Magent_R                __verse_0xB2CDDD72_Argument;                       // 0x0(0x10)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x10(0x2)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VerseFortnite.Teams_fort_team_collection._L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeam_L_Nagent_R
struct UTeams_fort_team_collection__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeam_L_Nagent_R_Params
{
public:
	class USimulation_agent*                     __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function VerseFortnite.Teams_fort_team_collection._L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetAgents_L_Nteam_R
struct UTeams_fort_team_collection__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetAgents_L_Nteam_R_Params
{
public:
	class USimulation_team*                      __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x8(0x18)(Parm, OutParm, ReturnParm, ContainsInstancedReference)
};

// 0x12 (0x12 - 0x0)
// Function VerseFortnite.Teams_fort_team_collection._L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RAddToTeam_L_Nagent_M_Nteam_R
struct UTeams_fort_team_collection__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RAddToTeam_L_Nagent_M_Nteam_R_Params
{
public:
	struct FTuple_Lagent_Mteam_R                 __verse_0xB2CDDD72_Argument;                       // 0x0(0x10)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x10(0x2)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function VerseFortnite.Vehicles._L_2fFortnite_2ecom_2fVehicles_N_Roperator_U_2eGetVehicle_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R
struct UVehicles__L_2fFortnite_2ecom_2fVehicles_N_Roperator_U_2eGetVehicle_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R_Params
{
public:
	struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R __verse_0xB2CDDD72_Argument;                       // 0x0(0xA)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C4F[0x6];                                     // Fixing Size After Last Property..
	FOptionProperty_                             RetVal;                                            // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function VerseFortnite.Vehicles.$InitCDO
struct UVehicles__InitCDO_Params
{
public:
};

// 0x3 (0x3 - 0x0)
// Function VerseFortnite.Vehicles_fort_vehicle._L_2fFortnite_2ecom_2fVehicles_2ffort__vehicle_N_RIsOnGround
struct UVehicles_fort_vehicle__L_2fFortnite_2ecom_2fVehicles_2ffort__vehicle_N_RIsOnGround_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x1(0x2)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function VerseFortnite.Vehicles_fort_vehicle._L_2fFortnite_2ecom_2fVehicles_2ffort__vehicle_N_RIsInWater
struct UVehicles_fort_vehicle__L_2fFortnite_2ecom_2fVehicles_2ffort__vehicle_N_RIsInWater_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x1(0x2)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function VerseFortnite.Vehicles_fort_vehicle._L_2fFortnite_2ecom_2fVehicles_2ffort__vehicle_N_RIsInAir
struct UVehicles_fort_vehicle__L_2fFortnite_2ecom_2fVehicles_2ffort__vehicle_N_RIsInAir_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x1(0x2)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function VerseFortnite.Vehicles_fort_vehicle._L_2fFortnite_2ecom_2fVehicles_2ffort__vehicle_N_RGetPassengers
struct UVehicles_fort_vehicle__L_2fFortnite_2ecom_2fVehicles_2ffort__vehicle_N_RGetPassengers_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C50[0x7];                                     // Fixing Size After Last Property..
	TArray<class UObject*>                       RetVal;                                            // 0x8(0x10)(Parm, OutParm, ReturnParm, ContainsInstancedReference)
};

// 0x8 (0x8 - 0x0)
// Function VerseFortnite.Vehicles_fort_vehicle_impl._L_2fFortnite_2ecom_2fGame_2fhealthful_N_RSetMaxHealth_L_Nfloat_R
struct UVehicles_fort_vehicle_impl__L_2fFortnite_2ecom_2fGame_2fhealthful_N_RSetMaxHealth_L_Nfloat_R_Params
{
public:
	double                                       __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function VerseFortnite.Vehicles_fort_vehicle_impl._L_2fFortnite_2ecom_2fGame_2fhealthful_N_RSetHealth_L_Nfloat_R
struct UVehicles_fort_vehicle_impl__L_2fFortnite_2ecom_2fGame_2fhealthful_N_RSetHealth_L_Nfloat_R_Params
{
public:
	double                                       __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function VerseFortnite.Vehicles_fort_vehicle_impl._L_2fFortnite_2ecom_2fVehicles_2ffort__vehicle_N_RIsOnGround
struct UVehicles_fort_vehicle_impl__L_2fFortnite_2ecom_2fVehicles_2ffort__vehicle_N_RIsOnGround_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x1(0x2)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function VerseFortnite.Vehicles_fort_vehicle_impl._L_2fFortnite_2ecom_2fVehicles_2ffort__vehicle_N_RIsInWater
struct UVehicles_fort_vehicle_impl__L_2fFortnite_2ecom_2fVehicles_2ffort__vehicle_N_RIsInWater_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x1(0x2)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function VerseFortnite.Vehicles_fort_vehicle_impl._L_2fFortnite_2ecom_2fVehicles_2ffort__vehicle_N_RIsInAir
struct UVehicles_fort_vehicle_impl__L_2fFortnite_2ecom_2fVehicles_2ffort__vehicle_N_RIsInAir_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x1(0x2)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function VerseFortnite.Vehicles_fort_vehicle_impl._L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform
struct UVehicles_fort_vehicle_impl__L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C51[0xF];                                     // Fixing Size After Last Property..
	struct FSpatialMath_transform                RetVal;                                            // 0x10(0x60)(Parm, OutParm, ReturnParm, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function VerseFortnite.Vehicles_fort_vehicle_impl._L_2fFortnite_2ecom_2fVehicles_2ffort__vehicle_N_RGetPassengers
struct UVehicles_fort_vehicle_impl__L_2fFortnite_2ecom_2fVehicles_2ffort__vehicle_N_RGetPassengers_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C52[0x7];                                     // Fixing Size After Last Property..
	TArray<class UObject*>                       RetVal;                                            // 0x8(0x10)(Parm, OutParm, ReturnParm, ContainsInstancedReference)
};

// 0x10 (0x10 - 0x0)
// Function VerseFortnite.Vehicles_fort_vehicle_impl._L_2fFortnite_2ecom_2fGame_2fhealthful_N_RGetMaxHealth
struct UVehicles_fort_vehicle_impl__L_2fFortnite_2ecom_2fGame_2fhealthful_N_RGetMaxHealth_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C53[0x7];                                     // Fixing Size After Last Property..
	double                                       RetVal;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VerseFortnite.Vehicles_fort_vehicle_impl._L_2fFortnite_2ecom_2fGame_2fhealthful_N_RGetHealth
struct UVehicles_fort_vehicle_impl__L_2fFortnite_2ecom_2fGame_2fhealthful_N_RGetHealth_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C54[0x7];                                     // Fixing Size After Last Property..
	double                                       RetVal;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VerseFortnite.Vehicles_fort_vehicle_impl._L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamagedEvent
struct UVehicles_fort_vehicle_impl__L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamagedEvent_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8C55[0x7];                                     // Fixing Size After Last Property..
	class UObject*                               RetVal;                                            // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function VerseFortnite.Vehicles_fort_vehicle_impl._L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamage_L_Nfloat_R
struct UVehicles_fort_vehicle_impl__L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamage_L_Nfloat_R_Params
{
public:
	double                                       __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function VerseFortnite.Vehicles_fort_vehicle_impl._L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamage_L_Ndamage__args_R
struct UVehicles_fort_vehicle_impl__L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamage_L_Ndamage__args_R_Params
{
public:
	struct FGame_damage_args                     __verse_0xB2CDDD72_Argument;                       // 0x0(0x18)(Parm, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function VerseFortnite.Vehicles_fort_vehicle_impl.$InitInstance
struct UVehicles_fort_vehicle_impl__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseFortnite.Vehicles_fort_vehicle_impl.$Block
struct UVehicles_fort_vehicle_impl__Block_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function VerseFortnite.Vehicles_fort_vehicle_impl.$InitCDO
struct UVehicles_fort_vehicle_impl__InitCDO_Params
{
public:
	class UVerseEngine_subscribable_event*       _ExprResult_0;                                     // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint64                                       _InstancingGraph_1;                                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
