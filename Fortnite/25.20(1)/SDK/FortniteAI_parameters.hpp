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
// Function FortniteAI.FortNavModifierComponent.SetComponentAffectingNavMesh
struct UFortNavModifierComponent_SetComponentAffectingNavMesh_Params
{
public:
	class UPrimitiveComponent*                   InComponentAffectingNavMesh;                       // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortPhysicsObjectNavigationComponent.OnSleepStateChanged
struct UFortPhysicsObjectNavigationComponent_OnSleepStateChanged_Params
{
public:
	class UPrimitiveComponent*                   SimulatingComponent;                               // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsAwake;                                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_195C[0x7];                                     // Fixing Size Of Struct..
};

// 0x38 (0x38 - 0x0)
// Function FortniteAI.FortAIEnvironmentalDangerSourceInterface.GetDangerSourceBounds
struct UFortAIEnvironmentalDangerSourceInterface_GetDangerSourceBounds_Params
{
public:
	struct FBox                                  ReturnValue;                                       // 0x0(0x38)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortAIEnvironmentalDangerSourceInterface.GetDangerSourceActive
struct UFortAIEnvironmentalDangerSourceInterface_GetDangerSourceActive_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteAI.FortAIEnvironmentalDangerSourceInterface.GetDangerAtLocation
struct UFortAIEnvironmentalDangerSourceInterface_GetDangerAtLocation_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x18(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_195E[0x4];                                     // Fixing Size Of Struct..
};

// 0x98 (0x98 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerDataComponent_ConstructionBase.GetConstructionBuildingInfo
struct UFortAthenaAISpawnerDataComponent_ConstructionBase_GetConstructionBuildingInfo_Params
{
public:
	struct FConstructionBuildingList             OutConstructionInfoList;                           // 0x0(0x90)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x90(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1965[0x7];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerDataComponent_BehaviorBase.GetBehaviorTree
struct UFortAthenaAISpawnerDataComponent_BehaviorBase_GetBehaviorTree_Params
{
public:
	class UBehaviorTree*                         ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2F0 (0x2F0 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerDataComponent_LODBase.GetClientAILODSettings
struct UFortAthenaAISpawnerDataComponent_LODBase_GetClientAILODSettings_Params
{
public:
	struct FClientAILODSettings                  ReturnValue;                                       // 0x0(0x2F0)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerDataComponent_LODBase.GetAILODSettingsContainer
struct UFortAthenaAISpawnerDataComponent_LODBase_GetAILODSettingsContainer_Params
{
public:
	class UFortAthenaAILODSettingsContainer*     ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerData.GetVoiceComponent
struct UFortAthenaAISpawnerData_GetVoiceComponent_Params
{
public:
	class UFortAthenaAISpawnerDataComponent_VoiceBase* ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerData.GetTokenComponent
struct UFortAthenaAISpawnerData_GetTokenComponent_Params
{
public:
	class UFortAthenaAISpawnerDataComponent_TokenBase* ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerData.GetSpawnParamsComponent
struct UFortAthenaAISpawnerData_GetSpawnParamsComponent_Params
{
public:
	class UFortAthenaAISpawnerDataComponent_SpawnParamsBase* ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerData.GetSmartObjectComponent
struct UFortAthenaAISpawnerData_GetSmartObjectComponent_Params
{
public:
	class UFortAthenaAISpawnerDataComponent_SmartObjectBase* ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerData.GetScriptComponent
struct UFortAthenaAISpawnerData_GetScriptComponent_Params
{
public:
	class UFortAthenaAISpawnerDataComponent_ScriptBase* ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerData.GetPerceptionComponent
struct UFortAthenaAISpawnerData_GetPerceptionComponent_Params
{
public:
	class UFortAthenaAISpawnerDataComponent_PerceptionBase* ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerData.GetOptimizationComponent
struct UFortAthenaAISpawnerData_GetOptimizationComponent_Params
{
public:
	class UFortAthenaAISpawnerDataComponent_OptimBase* ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerData.GetInventoryComponent
struct UFortAthenaAISpawnerData_GetInventoryComponent_Params
{
public:
	class UFortAthenaAISpawnerDataComponent_InventoryBase* ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerData.GetGroupComponent
struct UFortAthenaAISpawnerData_GetGroupComponent_Params
{
public:
	class UFortAthenaAISpawnerDataComponent_GroupBase* ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerData.GetGameplayComponent
struct UFortAthenaAISpawnerData_GetGameplayComponent_Params
{
public:
	class UFortAthenaAISpawnerDataComponent_GameplayBase* ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerData.GetGameplayAbilityComponent
struct UFortAthenaAISpawnerData_GetGameplayAbilityComponent_Params
{
public:
	class UFortAthenaAISpawnerDataComponent_GameplayAbilityBase* ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerData.GetDebugComponent
struct UFortAthenaAISpawnerData_GetDebugComponent_Params
{
public:
	class UFortAthenaAISpawnerDataComponent_DebugBase* ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerData.GetCosmeticComponent
struct UFortAthenaAISpawnerData_GetCosmeticComponent_Params
{
public:
	class UFortAthenaAISpawnerDataComponent_CosmeticBase* ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerData.GetConversationComponent
struct UFortAthenaAISpawnerData_GetConversationComponent_Params
{
public:
	class UFortAthenaAISpawnerDataComponent_ConversationBase* ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerData.GetChanceEncounterComponent
struct UFortAthenaAISpawnerData_GetChanceEncounterComponent_Params
{
public:
	class UFortAthenaAISpawnerDataComponent_ChanceEncounterBase* ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerData.GetBehaviorComponent
struct UFortAthenaAISpawnerData_GetBehaviorComponent_Params
{
public:
	class UFortAthenaAISpawnerDataComponent_BehaviorBase* ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerData.GetAnalyticComponent
struct UFortAthenaAISpawnerData_GetAnalyticComponent_Params
{
public:
	class UFortAthenaAISpawnerDataComponent_AnalyticBase* ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerData.GetAILODComponent
struct UFortAthenaAISpawnerData_GetAILODComponent_Params
{
public:
	class UFortAthenaAISpawnerDataComponent_LODBase* ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerData.GetAffiliationComponent
struct UFortAthenaAISpawnerData_GetAffiliationComponent_Params
{
public:
	class UFortAthenaAISpawnerDataComponent_AffiliationBase* ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerData.CreateComponentListFromClass
struct UFortAthenaAISpawnerData_CreateComponentListFromClass_Params
{
public:
	TSubclassOf<class UFortAthenaAISpawnerData>  AISpawnerDataClass;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               OuterObject;                                       // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortAthenaAISpawnerDataComponentList* ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerData.CreateComponentList
struct UFortAthenaAISpawnerData_CreateComponentList_Params
{
public:
	class UObject*                               OuterObject;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortAthenaAISpawnerDataComponentList* ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAthenaAIBotSpawnerData.GetVehicleComponent
struct UFortAthenaAIBotSpawnerData_GetVehicleComponent_Params
{
public:
	class UFortAthenaAISpawnerDataComponent_VehicleBase* ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAthenaAIBotSpawnerData.GetSkillSetComponent
struct UFortAthenaAIBotSpawnerData_GetSkillSetComponent_Params
{
public:
	class UFortAthenaAISpawnerDataComponent_SkillsetBase* ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAthenaAIBotSpawnerData.GetPerksComponent
struct UFortAthenaAIBotSpawnerData_GetPerksComponent_Params
{
public:
	class UFortAthenaAISpawnerDataComponent_PerksBase* ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAthenaAIBotSpawnerData.GetCoverComponent
struct UFortAthenaAIBotSpawnerData_GetCoverComponent_Params
{
public:
	class UFortAthenaAISpawnerDataComponent_CoverBase* ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAthenaAIBotSpawnerData.GetConstructionComponent
struct UFortAthenaAIBotSpawnerData_GetConstructionComponent_Params
{
public:
	class UFortAthenaAISpawnerDataComponent_ConstructionBase* ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.AIHotSpot.SetEnabled
struct UAIHotSpot_SetEnabled_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteAI.AIHotSpot.RemoveGroupFromHotspot
struct UAIHotSpot_RemoveGroupFromHotspot_Params
{
public:
	TArray<class UAIController*>                 GroupOfAI;                                         // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_196B[0x4];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.AIHotSpot.RemoveFromHotspot
struct UAIHotSpot_RemoveFromHotspot_Params
{
public:
	class UAIController*                         AI;                                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAssignFromWaitingList;                            // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_196C[0x6];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.AIHotSpot.OnSlotOccupied
struct UAIHotSpot_OnSlotOccupied_Params
{
public:
	class UAIController*                         AI;                                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UserId;                                            // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.AIHotSpot.OnSlotFreed
struct UAIHotSpot_OnSlotFreed_Params
{
public:
	class UAIController*                         AI;                                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UserId;                                            // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.AIHotSpot.OnSlotEnabled
struct UAIHotSpot_OnSlotEnabled_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UserId;                                            // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.AIHotSpot.OnSlotDisabled
struct UAIHotSpot_OnSlotDisabled_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UserId;                                            // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.AIHotSpot.OnSlotClaimed
struct UAIHotSpot_OnSlotClaimed_Params
{
public:
	class UAIController*                         AI;                                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UserId;                                            // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.AIHotSpot.OnSlotBlocked
struct UAIHotSpot_OnSlotBlocked_Params
{
public:
	class UAIController*                         AI;                                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UserId;                                            // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.AIHotSpot.OnRemovedSlotlessBehavior
struct UAIHotSpot_OnRemovedSlotlessBehavior_Params
{
public:
	class UAIController*                         AI;                                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsClamingSlot;                                    // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_196D[0x7];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function FortniteAI.AIHotSpot.OnRemovedBehavior
struct UAIHotSpot_OnRemovedBehavior_Params
{
public:
	class UAIController*                         AI;                                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UserId;                                            // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAIHotSpotSlot                    PrevState;                                         // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWasOnWaitingList;                                 // 0x11(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_196E[0x6];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function FortniteAI.AIHotSpot.OnMoveToSlotFinished
struct UAIHotSpot_OnMoveToSlotFinished_Params
{
public:
	class UAIController*                         AI;                                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UserId;                                            // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bResult;                                           // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_196F[0x7];                                     // Fixing Size Of Struct..
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.AIHotSpot.OnHotSpotEnabled
struct UAIHotSpot_OnHotSpotEnabled_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.AIHotSpot.OnHotSpotDisabled
struct UAIHotSpot_OnHotSpotDisabled_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.AIHotSpot.OnAssignedSlotlessBehavior
struct UAIHotSpot_OnAssignedSlotlessBehavior_Params
{
public:
	class UAIController*                         AI;                                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1970[0x7];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function FortniteAI.AIHotSpot.OnAssignedOccupiedBehavior
struct UAIHotSpot_OnAssignedOccupiedBehavior_Params
{
public:
	class UAIController*                         AI;                                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UserId;                                            // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1971[0x7];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function FortniteAI.AIHotSpot.OnAssignedClaimedBehavior
struct UAIHotSpot_OnAssignedClaimedBehavior_Params
{
public:
	class UAIController*                         AI;                                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UserId;                                            // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWasOnWaitingList;                                 // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x11(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1972[0x6];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.AIHotSpot.OccupySlotByIndex
struct UAIHotSpot_OccupySlotByIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1973[0x3];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.AIHotSpot.IsSlotlessAssignmentAllowed
struct UAIHotSpot_IsSlotlessAssignmentAllowed_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.AIHotSpot.IsEnabled
struct UAIHotSpot_IsEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.AIHotSpot.IsAIAllowed
struct UAIHotSpot_IsAIAllowed_Params
{
public:
	class UAIController*                         AI;                                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1974[0x7];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.AIHotSpot.HasEnabledSlots
struct UAIHotSpot_HasEnabledSlots_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.AIHotSpot.HasAssignedAI
struct UAIHotSpot_HasAssignedAI_Params
{
public:
	class UAIController*                         AI;                                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAIHotSpotAssignmentFilter        Filter;                                            // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1975[0x6];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.AIHotSpot.GetSlotUserIdByIndex
struct UAIHotSpot_GetSlotUserIdByIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.AIHotSpot.GetSlotStateByOwner
struct UAIHotSpot_GetSlotStateByOwner_Params
{
public:
	class UAIController*                         AIOwner;                                           // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAIHotSpotSlot                    ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1976[0x7];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.AIHotSpot.GetSlotStateByIndex
struct UAIHotSpot_GetSlotStateByIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAIHotSpotSlot                    ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1977[0x3];                                     // Fixing Size Of Struct..
};

// 0x20 (0x20 - 0x0)
// Function FortniteAI.AIHotSpot.GetSlotRotationByIndex
struct UAIHotSpot_GetSlotRotationByIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1978[0x4];                                     // Fixing Size After Last Property..
	struct FRotator                              ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.AIHotSpot.GetSlotOwnerByIndex
struct UAIHotSpot_GetSlotOwnerByIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1979[0x4];                                     // Fixing Size After Last Property..
	class UAIController*                         ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteAI.AIHotSpot.GetSlotLocationByIndex
struct UAIHotSpot_GetSlotLocationByIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_197A[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.AIHotSpot.GetSlotIndexByOwner
struct UAIHotSpot_GetSlotIndexByOwner_Params
{
public:
	class UAIController*                         AIOwner;                                           // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_197B[0x4];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.AIHotSpot.GetSlotCount
struct UAIHotSpot_GetSlotCount_Params
{
public:
	enum class EAIHotSpotSlotFilter              Filter;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_197C[0x3];                                     // Fixing Size After Last Property..
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.AIHotSpot.GetSlotByOwner
struct UAIHotSpot_GetSlotByOwner_Params
{
public:
	class UAIController*                         AIOwner;                                           // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAIHotSpotSlot*                        ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.AIHotSpot.GetSlotByIndex
struct UAIHotSpot_GetSlotByIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_197D[0x4];                                     // Fixing Size After Last Property..
	class UAIHotSpotSlot*                        ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.AIHotSpot.GetAssignedAICount
struct UAIHotSpot_GetAssignedAICount_Params
{
public:
	enum class EAIHotSpotAssignmentFilter        Filter;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_197E[0x3];                                     // Fixing Size After Last Property..
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteAI.AIHotSpot.GetAssignedAI
struct UAIHotSpot_GetAssignedAI_Params
{
public:
	enum class EAIHotSpotAssignmentFilter        Filter;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_197F[0x7];                                     // Fixing Size After Last Property..
	TArray<class UAIController*>                 ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteAI.AIHotSpot.FindBestSlotIndices
struct UAIHotSpot_FindBestSlotIndices_Params
{
public:
	TArray<class UAIController*>                 AI;                                                // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.AIHotSpot.FindBestSlotIndex
struct UAIHotSpot_FindBestSlotIndex_Params
{
public:
	class UAIController*                         AI;                                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1980[0x4];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.AIHotSpot.CanUseSlotByIndex
struct UAIHotSpot_CanUseSlotByIndex_Params
{
public:
	class UAIController*                         AI;                                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1981[0x3];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.AIHotSpot.AssignToSlotByIndex
struct UAIHotSpot_AssignToSlotByIndex_Params
{
public:
	class UAIController*                         AI;                                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1982[0x3];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.AIHotSpot.AssignToHotspot
struct UAIHotSpot_AssignToHotspot_Params
{
public:
	class UAIController*                         AI;                                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1983[0x7];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function FortniteAI.AIHotSpot.AssignGroupToHotspot
struct UAIHotSpot_AssignGroupToHotspot_Params
{
public:
	TArray<class UAIController*>                 GroupOfAI;                                         // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1984[0x4];                                     // Fixing Size Of Struct..
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.AIHotSpot.AssignFromWaitingList
struct UAIHotSpot_AssignFromWaitingList_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.AIHotSpotSlot.SetSlotState
struct UAIHotSpotSlot_SetSlotState_Params
{
public:
	enum class EAIHotSpotSlot                    NewState;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.AIHotSpotSlot.SetSlotOwnerAndState
struct UAIHotSpotSlot_SetSlotOwnerAndState_Params
{
public:
	class UAIController*                         NewOwner;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAIHotSpotSlot                    NewState;                                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_198B[0x7];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.AIHotSpotSlot.SetSlotEnabled
struct UAIHotSpotSlot_SetSlotEnabled_Params
{
public:
	bool                                         bNewEnabled;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.AIHotSpotSlot.OnStateChanged
struct UAIHotSpotSlot_OnStateChanged_Params
{
public:
	class UAIController*                         SlotOwner;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAIHotSpotSlot                    NewState;                                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_198C[0x7];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.AIHotSpotSlot.IsEnabled
struct UAIHotSpotSlot_IsEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.AIHotSpotSlot.IsAIAllowed
struct UAIHotSpotSlot_IsAIAllowed_Params
{
public:
	class UAIController*                         AI;                                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_198D[0x7];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.AIHotSpotSlot.HasUserId
struct UAIHotSpotSlot_HasUserId_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.AIHotSpotSlot.GetSlotUserId
struct UAIHotSpotSlot_GetSlotUserId_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.AIHotSpotSlot.GetSlotState
struct UAIHotSpotSlot_GetSlotState_Params
{
public:
	enum class EAIHotSpotSlot                    ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteAI.AIHotSpotSlot.GetSlotRotation
struct UAIHotSpotSlot_GetSlotRotation_Params
{
public:
	struct FRotator                              ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.AIHotSpotSlot.GetSlotRadius
struct UAIHotSpotSlot_GetSlotRadius_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.AIHotSpotSlot.GetSlotOwner
struct UAIHotSpotSlot_GetSlotOwner_Params
{
public:
	class UAIController*                         ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteAI.AIHotSpotSlot.GetSlotLocation
struct UAIHotSpotSlot_GetSlotLocation_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.AIHotSpotSlot.GetSlotIndex
struct UAIHotSpotSlot_GetSlotIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.AIHotSpotSlot.GetSlotHeight
struct UAIHotSpotSlot_GetSlotHeight_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function FortniteAI.AIHotSpotSlot.GetSlotBounds
struct UAIHotSpotSlot_GetSlotBounds_Params
{
public:
	struct FBox                                  ReturnValue;                                       // 0x0(0x38)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.AIHotSpotSlot.GetHotSpot
struct UAIHotSpotSlot_GetHotSpot_Params
{
public:
	class UAIHotSpot*                            ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.AIHotSpotSlot.ClearSlot
struct UAIHotSpotSlot_ClearSlot_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortAIController.WakeUp
struct UFortAIController_WakeUp_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortAIController.UnlockMovementResource
struct UFortAIController_UnlockMovementResource_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortAIController.UnlockBehaviorResource
struct UFortAIController_UnlockBehaviorResource_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAIController.SetupCustomVIM
struct UFortAIController_SetupCustomVIM_Params
{
public:
	class UClass*                                VIM;                                               // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortAIController.SetTeamInt
struct UFortAIController_SetTeamInt_Params
{
public:
	uint8                                        InTeam;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortAIController.SetTeam
struct UFortAIController_SetTeam_Params
{
public:
	enum class EFortTeam                         InTeam;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortAIController.SetPawnAIType
struct UFortAIController_SetPawnAIType_Params
{
public:
	enum class EFortressAIType                   NewAIType;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1993[0x7];                                     // Fixing Size After Last Property..
	class UActor*                                SpawnSpot;                                         // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortAIController.SetIsSleeping
struct UFortAIController_SetIsSleeping_Params
{
public:
	bool                                         bNewSleepStatus;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortAIController.SetGoalActor
struct UFortAIController_SetGoalActor_Params
{
public:
	class UActor*                                InActor;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLocationAlwaysKnown;                              // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1994[0x7];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortAIController.SetFullPeripheralVision
struct UFortAIController_SetFullPeripheralVision_Params
{
public:
	bool                                         bNewFullPeripheralVision;                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortAIController.SetAlwaysGameplayRelevant
struct UFortAIController_SetAlwaysGameplayRelevant_Params
{
public:
	bool                                         bInAlwaysGameplayRelevant;                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortAIController.OnBuildingActorGoalDestroyed
struct UFortAIController_OnBuildingActorGoalDestroyed_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAIController.OnActorGoalDestroyed
struct UFortAIController_OnActorGoalDestroyed_Params
{
public:
	class UActor*                                DestroyedActor;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortAIController.LockMovementResource
struct UFortAIController_LockMovementResource_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortAIController.LockBehaviorResource
struct UFortAIController_LockBehaviorResource_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortAIController.IsIgnoringProximity
struct UFortAIController_IsIgnoringProximity_Params
{
public:
	class UFortAIController*                     FortAIController;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1995[0x7];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortAIController.IsAllowedToSleep
struct UFortAIController_IsAllowedToSleep_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.FortAIController.IgnoreProximityForDuration
struct UFortAIController_IgnoreProximityForDuration_Params
{
public:
	float                                        DurationToIgnore;                                  // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAIController.GetGoalActor
struct UFortAIController_GetGoalActor_Params
{
public:
	class UActor*                                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAIController.GetEncounterInfo
struct UFortAIController_GetEncounterInfo_Params
{
public:
	class UFortAIEncounterInfo*                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function FortniteAI.FortAIController.CreateBuildingActor
struct UFortAIController_CreateBuildingActor_Params
{
public:
	TSubclassOf<class UBuildingSMActor>          BuildingClass;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               BuildLoc;                                          // 0x8(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              BuildRot;                                          // 0x20(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bMirrored;                                         // 0x38(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x39(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1996[0x6];                                     // Fixing Size Of Struct..
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortAIController.ClearAllFocalPoints
struct UFortAIController_ClearAllFocalPoints_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortAIDirector.UnregisterPatrolWard
struct UFortAIDirector_UnregisterPatrolWard_Params
{
public:
	FInterfaceProperty_                          PatrolWard;                                        // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function FortniteAI.FortAIDirector.StartEncounter
struct UFortAIDirector_StartEncounter_Params
{
public:
	class FString                                EncounterInstigator;                               // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortDifficultyEncounterSettings*      DifficultyEncounterSettings;                       // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortAIEncounterQueryData             OptionalQueryData;                                 // 0x18(0x20)(Parm, NativeAccessSpecifierPublic)
	class UFortAIEncounterInfo*                  ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortAIDirector.RegisterPatrolWard
struct UFortAIDirector_RegisterPatrolWard_Params
{
public:
	FInterfaceProperty_                          PatrolWard;                                        // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAIDirector.ReceivePawnSpawned
struct UFortAIDirector_ReceivePawnSpawned_Params
{
public:
	class UFortPawn*                             SpawnedPawn;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function FortniteAI.FortAIDirector.PostDayPhaseChanged
struct UFortAIDirector_PostDayPhaseChanged_Params
{
public:
	enum class EFortDayPhase                     CurrentDayPhase;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortDayPhase                     PreviousDayPhase;                                  // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAtCreation;                                       // 0x2(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortAIDirector.OnRestStarted
struct UFortAIDirector_OnRestStarted_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortAIDirector.OnRampStarted
struct UFortAIDirector_OnRampStarted_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAIDirector.OnPlayerSpawn
struct UFortAIDirector_OnPlayerSpawn_Params
{
public:
	class UFortPlayerPawn*                       PlayerPawn;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAIDirector.OnPlayerDied
struct UFortAIDirector_OnPlayerDied_Params
{
public:
	class UFortPlayerPawn*                       PlayerPawn;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortAIDirector.OnPeakStarted
struct UFortAIDirector_OnPeakStarted_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAIDirector.OnPawnDied
struct UFortAIDirector_OnPawnDied_Params
{
public:
	class UFortAIPawn*                           KilledPawn;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortAIDirector.OnFadeStarted
struct UFortAIDirector_OnFadeStarted_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortAIDirector.OnDirectorDeactivated
struct UFortAIDirector_OnDirectorDeactivated_Params
{
public:
};

// 0x3 (0x3 - 0x0)
// Function FortniteAI.FortAIDirector.OnDayPhaseChanged
struct UFortAIDirector_OnDayPhaseChanged_Params
{
public:
	enum class EFortDayPhase                     CurrentDayPhase;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortDayPhase                     PreviousDayPhase;                                  // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAtCreation;                                       // 0x2(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteAI.FortAIDirector.IsPointTooCloseToPatrolWards
struct UFortAIDirector_IsPointTooCloseToPatrolWards_Params
{
public:
	struct FVector                               Point;                                             // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWardAffectType                   WardEffectTypeFilter;                              // 0x18(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x19(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_199F[0x6];                                     // Fixing Size Of Struct..
};

// 0x38 (0x38 - 0x0)
// Function FortniteAI.FortAIDirector.IsLineTooCloseToPatrolWards
struct UFortAIDirector_IsLineTooCloseToPatrolWards_Params
{
public:
	struct FVector                               LineStart;                                         // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LineEnd;                                           // 0x18(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19A0[0x7];                                     // Fixing Size Of Struct..
};

// 0x20 (0x20 - 0x0)
// Function FortniteAI.FortAIDirector.IsAnyEncounterGoalWithinDistanceOfPoint
struct UFortAIDirector_IsAnyEncounterGoalWithinDistanceOfPoint_Params
{
public:
	struct FVector                               Point;                                             // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Distance;                                          // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyActiveEncounters;                             // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1D(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19A1[0x2];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortAIDirector.IsAnyAIRelevantToPlayer
struct UFortAIDirector_IsAnyAIRelevantToPlayer_Params
{
public:
	class UFortPlayerPawn*                       Player;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19A2[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortAIDirector.IsAnyActiveEncounterRelevantToPlayer
struct UFortAIDirector_IsAnyActiveEncounterRelevantToPlayer_Params
{
public:
	class UFortPlayerPawn*                       Player;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19A3[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortAIDirector.IsAnyActiveEncounterRelevantToDefender
struct UFortAIDirector_IsAnyActiveEncounterRelevantToDefender_Params
{
public:
	class UFortAIPawn*                           Defender;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19A4[0x7];                                     // Fixing Size Of Struct..
};

// 0x20 (0x20 - 0x0)
// Function FortniteAI.FortAIDirector.GetVectorFromEncounterDirection
struct UFortAIDirector_GetVectorFromEncounterDirection_Params
{
public:
	enum class EFortEncounterDirection           Direction;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19A5[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteAI.FortAIDirector.GetRiftsFromClosestActiveEncounterTo
struct UFortAIDirector_GetRiftsFromClosestActiveEncounterTo_Params
{
public:
	class UActor*                                Target;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UBuildingRift*>                 ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.FortAIDirector.GetNumPlayers
struct UFortAIDirector_GetNumPlayers_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.FortAIDirector.GetNumActiveEncounters
struct UFortAIDirector_GetNumActiveEncounters_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteAI.FortAIDirector.GetEncounterDirectionFromVector
struct UFortAIDirector_GetEncounterDirectionFromVector_Params
{
public:
	struct FVector                               DirectionVector;                                   // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortEncounterDirection           ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19A6[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortAIDirector.GetAmbientThreatEncounterSpawnLocations
struct UFortAIDirector_GetAmbientThreatEncounterSpawnLocations_Params
{
public:
	TArray<struct FVector>                       AmbientThreatEncounterSpawnLocations;              // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortAIDirector.Deactivate
struct UFortAIDirector_Deactivate_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function FortniteAI.FortAIDirector.ConvertInvalidDirectionsToValidDirections
struct UFortAIDirector_ConvertInvalidDirectionsToValidDirections_Params
{
public:
	TArray<enum class EFortEncounterDirection>   InvalidDirections;                                 // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<enum class EFortEncounterDirection>   ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortAIDirector.Activate
struct UFortAIDirector_Activate_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.AthenaAIDirector.AggroOnActor
struct UAthenaAIDirector_AggroOnActor_Params
{
public:
	class UAthenaAIController*                   AIController;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                Target;                                            // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function FortniteAI.FortAISystem.IsInCone2D
struct UFortAISystem_IsInCone2D_Params
{
public:
	struct FVector                               ConeOrigin;                                        // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ConeDirection;                                     // 0x18(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HalfAngle;                                         // 0x30(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19C6[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               LocationToCheck;                                   // 0x38(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x50(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19C7[0x7];                                     // Fixing Size Of Struct..
};

// 0x20 (0x20 - 0x0)
// Function FortniteAI.AthenaAISystem.OnAIPawnSpawned
struct UAthenaAISystem_OnAIPawnSpawned_Params
{
public:
	class UController*                           SpawnedController;                                 // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsABot;                                           // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19CA[0x7];                                     // Fixing Size After Last Property..
	class UFortPawn*                             FortAIPawn;                                        // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortPlayerPawn*                       PlayerPawn;                                        // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function FortniteAI.AthenaAISystem.OnAIPawnDied
struct UAthenaAISystem_OnAIPawnDied_Params
{
public:
	class UController*                           KilledController;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsABot;                                           // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19CB[0x7];                                     // Fixing Size After Last Property..
	class UFortPawn*                             KilledAIPawn;                                      // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortPlayerPawn*                       KilledPlayerPawn;                                  // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UController*                           KillerController;                                  // 0x20(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.AthenaAISystem.OnAIPawnDestroyed
struct UAthenaAISystem_OnAIPawnDestroyed_Params
{
public:
	class UFortPawn*                             DestroyedPawn;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.AthenaAISystem.HandlePlayerExitAircraft
struct UAthenaAISystem_HandlePlayerExitAircraft_Params
{
public:
	class UController*                           ExitingController;                                 // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteAI.AthenaAISystem.HandleGamePhaseStepChanged
struct UAthenaAISystem_HandleGamePhaseStepChanged_Params
{
public:
	FInterfaceProperty_                          SafeZoneInterface;                                 // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAthenaGamePhaseStep              GamePhaseStep;                                     // 0x10(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19CC[0x7];                                     // Fixing Size Of Struct..
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.AthenaAISystem.AIProfiling_OnSafeZoneUpdated
struct UAthenaAISystem_AIProfiling_OnSafeZoneUpdated_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.AthenaAISystem.AIProfiling_OnGamePhaseChanged
struct UAthenaAISystem_AIProfiling_OnGamePhaseChanged_Params
{
public:
	enum class EAthenaGamePhase                  GamePhase;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteAI.AthenaCreativeRift.NotifyActorDespawnEndOverlap
struct UAthenaCreativeRift_NotifyActorDespawnEndOverlap_Params
{
public:
	class UPrimitiveComponent*                   OverlappedComponent;                               // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                OtherActor;                                        // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OtherBodyIndex;                                    // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19CE[0x4];                                     // Fixing Size Of Struct..
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.AthenaCreativeRift.BlueprintShowRift
struct UAthenaCreativeRift_BlueprintShowRift_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function FortniteAI.FortAthenaAITelemetryFunctionLibrary.GetOrCreateAITelemetryData
struct UFortAthenaAITelemetryFunctionLibrary_GetOrCreateAITelemetryData_Params
{
public:
	class UActor*                                Owner;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UFortAthenaAITelemetryData> TelemetryDataClass;                                // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortAthenaAITelemetryData*            ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortAIComponent_Telemetry.OnTetheredFollowerChanged
struct UFortAIComponent_Telemetry_OnTetheredFollowerChanged_Params
{
public:
	class UFortPawn*                             NewFollower;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortPawn*                             OldFollower;                                       // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function FortniteAI.FortAIComponent_Telemetry.OnPawnDied
struct UFortAIComponent_Telemetry_OnPawnDied_Params
{
public:
	class UActor*                                DamagedActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19D6[0x4];                                     // Fixing Size After Last Property..
	class UController*                           InstigatedBy;                                      // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                DamageCauser;                                      // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitLocation;                                       // 0x20(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   FHitComponent;                                     // 0x38(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x40(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19D7[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               Momentum;                                          // 0x48(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function FortniteAI.FortAIComponent_Telemetry.OnDidDamage
struct UFortAIComponent_Telemetry_OnDidDamage_Params
{
public:
	class UActor*                                DamagedActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19D8[0x4];                                     // Fixing Size After Last Property..
	class UController*                           InstigatedBy;                                      // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                DamageCauser;                                      // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitLocation;                                       // 0x20(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   FHitComponent;                                     // 0x38(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x40(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19D9[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               Momentum;                                          // 0x48(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortAIComponent_Telemetry.GetOrCreateTelemetryData
struct UFortAIComponent_Telemetry_GetOrCreateTelemetryData_Params
{
public:
	TSubclassOf<class UFortAthenaAITelemetryData> TelemetryDataClass;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortAthenaAITelemetryData*            ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAIComponent_Voice.SetVoiceSoundBank
struct UFortAIComponent_Voice_SetVoiceSoundBank_Params
{
public:
	class UFortTaggedSoundBank*                  InSoundBank;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAIComponent_Voice.GetVoiceSoundBank
struct UFortAIComponent_Voice_GetVoiceSoundBank_Params
{
public:
	class UFortTaggedSoundBank*                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortAIManagerMinigameComponent.OnPawnSpawned
struct UFortAIManagerMinigameComponent_OnPawnSpawned_Params
{
public:
	class UPawn*                                 Pawn;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequestID;                                         // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19DB[0x4];                                     // Fixing Size Of Struct..
};

// 0x60 (0x60 - 0x0)
// Function FortniteAI.FortAIManagerMinigameComponent.OnPawnDied
struct UFortAIManagerMinigameComponent_OnPawnDied_Params
{
public:
	class UActor*                                DamagedActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19DC[0x4];                                     // Fixing Size After Last Property..
	class UController*                           InstigatedBy;                                      // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                DamageCauser;                                      // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitLocation;                                       // 0x20(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   FHitComponent;                                     // 0x38(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x40(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19DD[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               Momentum;                                          // 0x48(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortAIManagerMinigameComponent.HandleMinigameStarted
struct UFortAIManagerMinigameComponent_HandleMinigameStarted_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortAISpawnerUtilityComponent.StartEnvironmentQuery
struct UFortAISpawnerUtilityComponent_StartEnvironmentQuery_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.FortAISpawnerUtilityComponent.SetQueryRadius
struct UFortAISpawnerUtilityComponent_SetQueryRadius_Params
{
public:
	float                                        Radius;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAISpawnerUtilityComponent.SetMinigame
struct UFortAISpawnerUtilityComponent_SetMinigame_Params
{
public:
	class UFortMinigame*                         Minigame;                                          // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function FortniteAI.FortAISpawnerUtilityComponent.SetEQSQuery
struct UFortAISpawnerUtilityComponent_SetEQSQuery_Params
{
public:
	TSoftObjectPtr<class UEnvQuery>              SelectedEQSQuery;                                  // 0x0(0x28)(Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function FortniteAI.FortAISpawnerUtilityComponent.RequestSpawn
struct UFortAISpawnerUtilityComponent_RequestSpawn_Params
{
public:
	class UFortAthenaAISpawnerDataComponentList* AISpawnerComponentList;                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19DF[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            SpawnTransform;                                    // 0x10(0x60)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x70(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19E0[0xC];                                     // Fixing Size Of Struct..
};

// 0x60 (0x60 - 0x0)
// Function FortniteAI.FortAISpawnerUtilityComponent.OnUnownedPawnDied
struct UFortAISpawnerUtilityComponent_OnUnownedPawnDied_Params
{
public:
	class UActor*                                DamagedActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19E1[0x4];                                     // Fixing Size After Last Property..
	class UController*                           InstigatedBy;                                      // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                DamageCauser;                                      // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitLocation;                                       // 0x20(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   FHitComponent;                                     // 0x38(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x40(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19E2[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               Momentum;                                          // 0x48(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortAISpawnerUtilityComponent.IsSpawnCountCapped
struct UFortAISpawnerUtilityComponent_IsSpawnCountCapped_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAISpawnerUtilityComponent.HandleUnownedPawnSpawned
struct UFortAISpawnerUtilityComponent_HandleUnownedPawnSpawned_Params
{
public:
	class UFortPawn*                             FortPawn;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAIBotDebugActor.OnRep_BotDebugMiniMapIndicator
struct UFortAIBotDebugActor_OnRep_BotDebugMiniMapIndicator_Params
{
public:
	class UAthenaAIBotDebugMiniMapIndicator*     OldBotDebugMiniMap;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAIBotPOIDebugActor.OnRep_PlayerBotsDebugMiniMap
struct UFortAIBotPOIDebugActor_OnRep_PlayerBotsDebugMiniMap_Params
{
public:
	class UAthenaAIBotPOIDebugMiniMapIndicator*  OldPlayerBotsDebugMiniMap;                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteAI.FortAIDirectorDataManager.TriggerEvent
struct UFortAIDirectorDataManager_TriggerEvent_Params
{
public:
	struct FFortAIDirectorEvent                  TriggeredEvent;                                    // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAIDirectorDataManager.GetAIDirectorFactorValue
struct UFortAIDirectorDataManager_GetAIDirectorFactorValue_Params
{
public:
	enum class EFortAIDirectorFactor             AIDirectorFactor;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19EC[0x3];                                     // Fixing Size After Last Property..
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAIEncounterInfo.UnRegisterAISpawner
struct UFortAIEncounterInfo_UnRegisterAISpawner_Params
{
public:
	class UActor*                                InAISpawner;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// Function FortniteAI.FortAIEncounterInfo.SpawnTestAIGroup
struct UFortAIEncounterInfo_SpawnTestAIGroup_Params
{
public:
	class UFortAISpawnGroup*                     SpawnGroupToSpawn;                                 // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SpawnLocation;                                     // 0x8(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              SpawnRotation;                                     // 0x20(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UActor*                                SpawnSource;                                       // 0x38(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UFortAbilitySet*>               AbilitySetsToGrantOnSpawn;                         // 0x40(0x10)(ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FFortAISpawnGroupUpgradeData          UpgradeData;                                       // 0x50(0x60)(Parm, NativeAccessSpecifierPublic)
	bool                                         bAllowAssigningToExternalSpawners;                 // 0xB0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19F0[0x3];                                     // Fixing Size After Last Property..
	float                                        SecondsBetweenSpawns;                              // 0xB4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function FortniteAI.FortAIEncounterInfo.SpawnAIPawnReservedForEnemySpawner
struct UFortAIEncounterInfo_SpawnAIPawnReservedForEnemySpawner_Params
{
public:
	class UActor*                                EnemySpawner;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SpawnLocation;                                     // 0x8(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              SpawnRotation;                                     // 0x20(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UFortAIPawn*                           ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.FortAIEncounterInfo.SetPawnNumberLimit
struct UFortAIEncounterInfo_SetPawnNumberLimit_Params
{
public:
	int32                                        InPawnNumberLimit;                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortAIEncounterInfo.SetNukeWavesAtEncounterEnd
struct UFortAIEncounterInfo_SetNukeWavesAtEncounterEnd_Params
{
public:
	bool                                         bNuke;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortAIEncounterInfo.SetEncounterActivationState
struct UFortAIEncounterInfo_SetEncounterActivationState_Params
{
public:
	bool                                         bEncounterActivityState;                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.FortAIEncounterInfo.RequestActivation
struct UFortAIEncounterInfo_RequestActivation_Params
{
public:
	int32                                        ActivationDelay;                                   // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAIEncounterInfo.RegisterAISpawner
struct UFortAIEncounterInfo_RegisterAISpawner_Params
{
public:
	class UActor*                                InAISpawner;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortAIEncounterInfo.OnRestStarted
struct UFortAIEncounterInfo_OnRestStarted_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortAIEncounterInfo.OnRampStarted
struct UFortAIEncounterInfo_OnRampStarted_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortAIEncounterInfo.OnPeakStarted
struct UFortAIEncounterInfo_OnPeakStarted_Params
{
public:
};

// 0x60 (0x60 - 0x0)
// Function FortniteAI.FortAIEncounterInfo.OnGoalTakeDamage
struct UFortAIEncounterInfo_OnGoalTakeDamage_Params
{
public:
	class UActor*                                DamagedActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19F1[0x4];                                     // Fixing Size After Last Property..
	class UController*                           InstigatedBy;                                      // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                DamageCauser;                                      // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitLocation;                                       // 0x20(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   FHitComponent;                                     // 0x38(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x40(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19F2[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               Momentum;                                          // 0x48(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortAIEncounterInfo.OnGameDifficultyChanged
struct UFortAIEncounterInfo_OnGameDifficultyChanged_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortAIEncounterInfo.OnFadeStarted
struct UFortAIEncounterInfo_OnFadeStarted_Params
{
public:
};

// 0x60 (0x60 - 0x0)
// Function FortniteAI.FortAIEncounterInfo.OnEncounterPawnDamaged
struct UFortAIEncounterInfo_OnEncounterPawnDamaged_Params
{
public:
	class UActor*                                DamagedActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19F3[0x4];                                     // Fixing Size After Last Property..
	class UController*                           InstigatedBy;                                      // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                DamageCauser;                                      // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitLocation;                                       // 0x20(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   FHitComponent;                                     // 0x38(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x40(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19F4[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               Momentum;                                          // 0x48(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function FortniteAI.FortAIEncounterInfo.NotifyRiftDied
struct UFortAIEncounterInfo_NotifyRiftDied_Params
{
public:
	class UActor*                                DamagedActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19F5[0x4];                                     // Fixing Size After Last Property..
	class UController*                           InstigatedBy;                                      // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                DamageCauser;                                      // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitLocation;                                       // 0x20(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   FHitComponent;                                     // 0x38(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x40(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19F6[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               Momentum;                                          // 0x48(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function FortniteAI.FortAIEncounterInfo.GroupHasAIRemainingToSpawn
struct UFortAIEncounterInfo_GroupHasAIRemainingToSpawn_Params
{
public:
	struct FFortAISpawnerData                    FortAISpawnerData;                                 // 0x0(0x78)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x78(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19F7[0x7];                                     // Fixing Size Of Struct..
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.FortAIEncounterInfo.GetPawnNumberLimit
struct UFortAIEncounterInfo_GetPawnNumberLimit_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.FortAIEncounterInfo.GetEncounterTimeSeconds
struct UFortAIEncounterInfo_GetEncounterTimeSeconds_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortAIEncounterInfo.GetEncounterRifts
struct UFortAIEncounterInfo_GetEncounterRifts_Params
{
public:
	TArray<class UBuildingRift*>                 OutRifts;                                          // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAIEncounterInfo.GetEncounterQueryActor
struct UFortAIEncounterInfo_GetEncounterQueryActor_Params
{
public:
	class UActor*                                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteAI.FortAIEncounterInfo.GetEncounterGameplayTags
struct UFortAIEncounterInfo_GetEncounterGameplayTags_Params
{
public:
	struct FGameplayTagContainer                 OutEncounterTags;                                  // 0x0(0x20)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAIEncounterInfo.GetEncounterDataManager
struct UFortAIEncounterInfo_GetEncounterDataManager_Params
{
public:
	class UFortAIDirectorDataManager*            ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortAIEncounterInfo.GetEncounterAssignmentGoalActors
struct UFortAIEncounterInfo_GetEncounterAssignmentGoalActors_Params
{
public:
	TArray<class UActor*>                        OutGoalActors;                                     // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteAI.FortAIEncounterInfo.GetCurrentSpawnAreaDirections
struct UFortAIEncounterInfo_GetCurrentSpawnAreaDirections_Params
{
public:
	TArray<enum class EFortEncounterDirection>   OutDirections;                                     // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19F8[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortAIEncounterInfo.EncounterHasReservedSpawnRequestForEnemySpawner
struct UFortAIEncounterInfo_EncounterHasReservedSpawnRequestForEnemySpawner_Params
{
public:
	class UActor*                                EnemySpawner;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19F9[0x7];                                     // Fixing Size Of Struct..
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortAIEncounterInfo.DespawnPendingAndCurrentAI
struct UFortAIEncounterInfo_DespawnPendingAndCurrentAI_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function FortniteAI.FortAIEncounterInfo.CreateEncounterAssignment
struct UFortAIEncounterInfo_CreateEncounterAssignment_Params
{
public:
	class UFortAIAssignmentSettings*             AssignmentSettings;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                GoalActor;                                         // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortAIAssignment*                     ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAIEncounterInfoOwnerInterface.GetEncounterInfo
struct UFortAIEncounterInfoOwnerInterface_GetEncounterInfo_Params
{
public:
	class UFortAIEncounterInfo*                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAIEncounterRiftManager.OnRiftDestroyed
struct UFortAIEncounterRiftManager_OnRiftDestroyed_Params
{
public:
	class UActor*                                Rift;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAIEncounterRiftManager.GetAssociatedMission
struct UFortAIEncounterRiftManager_GetAssociatedMission_Params
{
public:
	class UFortMission*                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortAIEncounterSequence.StopCurrentEncounter
struct UFortAIEncounterSequence_StopCurrentEncounter_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortAIEncounterSequence.StartCurrentEncounterWithSavedData
struct UFortAIEncounterSequence_StartCurrentEncounterWithSavedData_Params
{
public:
	enum class EFortEncounterSequenceResult      OutRequestResult;                                  // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A1F[0x3];                                     // Fixing Size After Last Property..
	int32                                        ActivationDelay;                                   // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortAIEncounterInfo*                  ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x140 (0x140 - 0x0)
// Function FortniteAI.FortAIEncounterSequence.StartCurrentEncounter
struct UFortAIEncounterSequence_StartCurrentEncounter_Params
{
public:
	enum class EFortEncounterSequenceResult      OutRequestResult;                                  // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A20[0x7];                                     // Fixing Size After Last Property..
	TArray<class UActor*>                        InTargetActors;                                    // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class UFortAIAssignmentSettings*             InAssignmentSettings;                              // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEncounterEnvironmentQueryInfo        InOverrideEnvironmentQueryInfo;                    // 0x20(0x28)(Parm, NativeAccessSpecifierPublic)
	class UActor*                                InOptionalQueryActor;                              // 0x48(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 InInjectedTags;                                    // 0x50(0x20)(Parm, NativeAccessSpecifierPublic)
	struct FFortEncounterSettings                InEncounterSettings;                               // 0x70(0xC0)(Parm, NativeAccessSpecifierPublic)
	int32                                        ActivationDelay;                                   // 0x130(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A21[0x4];                                     // Fixing Size After Last Property..
	class UFortAIEncounterInfo*                  ReturnValue;                                       // 0x138(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x128 (0x128 - 0x0)
// Function FortniteAI.FortAIEncounterSequence.SetEncounterStartingData
struct UFortAIEncounterSequence_SetEncounterStartingData_Params
{
public:
	TArray<class UActor*>                        InTargetActors;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class UFortAIAssignmentSettings*             InAssignmentSettings;                              // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEncounterEnvironmentQueryInfo        InOverrideEnvironmentQueryInfo;                    // 0x18(0x28)(Parm, NativeAccessSpecifierPublic)
	class UActor*                                InOptionalQueryActor;                              // 0x40(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 InInjectedTags;                                    // 0x48(0x20)(Parm, NativeAccessSpecifierPublic)
	struct FFortEncounterSettings                InEncounterSettings;                               // 0x68(0xC0)(Parm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortAIEncounterSequence.Previous
struct UFortAIEncounterSequence_Previous_Params
{
public:
	enum class EFortEncounterSequenceResult      ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortAIEncounterSequence.Next
struct UFortAIEncounterSequence_Next_Params
{
public:
	enum class EFortEncounterSequenceResult      ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortAIEncounterSequence.Last
struct UFortAIEncounterSequence_Last_Params
{
public:
	enum class EFortEncounterSequenceResult      ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortAIEncounterSequence.IsOnFinalIndexInSequence
struct UFortAIEncounterSequence_IsOnFinalIndexInSequence_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortAIEncounterSequence.HasEncounter
struct UFortAIEncounterSequence_HasEncounter_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.FortAIEncounterSequence.GetNumEncountersInSequence
struct UFortAIEncounterSequence_GetNumEncountersInSequence_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.FortAIEncounterSequence.GetEncounterIndexInSequence
struct UFortAIEncounterSequence_GetEncounterIndexInSequence_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAIEncounterSequence.GetCurrentEncounter
struct UFortAIEncounterSequence_GetCurrentEncounter_Params
{
public:
	class UFortAIEncounterInfo*                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortAIEncounterSequence.EncounterBelongsToSequence
struct UFortAIEncounterSequence_EncounterBelongsToSequence_Params
{
public:
	class UFortAIEncounterInfo*                  InEncounter;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A22[0x7];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortAIEncounterTargetInterface.IsFloatingTarget
struct UFortAIEncounterTargetInterface_IsFloatingTarget_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.FortAIEncounterTargetInterface.GetObjectiveCompletionPercentage
struct UFortAIEncounterTargetInterface_GetObjectiveCompletionPercentage_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function FortniteAI.FortAIFunctionLibrary.TeleportAIPawn
struct UFortAIFunctionLibrary_TeleportAIPawn_Params
{
public:
	class UFortAIPawn*                           AIPawn;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               DestLocation;                                      // 0x8(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              DestRotation;                                      // 0x20(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bIgnoreCollision;                                  // 0x38(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x39(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A24[0x6];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortAIFunctionLibrary.SetHearingRange
struct UFortAIFunctionLibrary_SetHearingRange_Params
{
public:
	class UActor*                                AIAgent;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Range;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A25[0x4];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAIFunctionLibrary.RequestNavUpdateForBuilding
struct UFortAIFunctionLibrary_RequestNavUpdateForBuilding_Params
{
public:
	class UBuildingActor*                        BuildingActor;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function FortniteAI.FortAIFunctionLibrary.MakeNoiseEventAtLocation
struct UFortAIFunctionLibrary_MakeNoiseEventAtLocation_Params
{
public:
	class UActor*                                NoiseMaker;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxRange;                                          // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A26[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               NoiseLocation;                                     // 0x10(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NoiseTag;                                          // 0x28(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A27[0x4];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortAIFunctionLibrary.MakeNoiseEvent
struct UFortAIFunctionLibrary_MakeNoiseEvent_Params
{
public:
	class UActor*                                NoiseMaker;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxRange;                                          // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NoiseTag;                                          // 0xC(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function FortniteAI.FortAIFunctionLibrary.IsConcealedByPerceptionModifiers
struct UFortAIFunctionLibrary_IsConcealedByPerceptionModifiers_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ObserverLocation;                                  // 0x8(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TargetLocation;                                    // 0x20(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutConcealment;                                    // 0x38(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x3C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A28[0x3];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function FortniteAI.FortAIFunctionLibrary.GetOrCreateAIRuntimeParameters
struct UFortAIFunctionLibrary_GetOrCreateAIRuntimeParameters_Params
{
public:
	class UAIController*                         AIController;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UFortAthenaAIRuntimeParameters> ParametersClass;                                   // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortAthenaAIRuntimeParameters*        ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortAIFunctionLibrary.GetAISpawner
struct UFortAIFunctionLibrary_GetAISpawner_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAthenaAISpawner*                      ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortAIGoalManager.SetCurrentGoalDiscouragement
struct UFortAIGoalManager_SetCurrentGoalDiscouragement_Params
{
public:
	class UObject*                               WorldContext;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortAIController*                     AI;                                                // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function FortniteAI.FortAIGoalManager.RemoveWorldAssignment
struct UFortAIGoalManager_RemoveWorldAssignment_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortAIAssignmentIdentifier           AssignmentIdentifier;                              // 0x8(0x30)(Parm, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function FortniteAI.FortAIGoalManager.RemoveGoalsFromWorldAssignment
struct UFortAIGoalManager_RemoveGoalsFromWorldAssignment_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortAIAssignmentIdentifier           AssignmentIdentifier;                              // 0x8(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FFortAIGoalInfo>               GoalInfos;                                         // 0x38(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function FortniteAI.FortAIGoalManager.RemoveGoalFromWorldAssignment
struct UFortAIGoalManager_RemoveGoalFromWorldAssignment_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortAIAssignmentIdentifier           AssignmentIdentifier;                              // 0x8(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FFortAIGoalInfo                       GoalInfo;                                          // 0x38(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function FortniteAI.FortAIGoalManager.MakeGoalsFromLocationsAndActor
struct UFortAIGoalManager_MakeGoalsFromLocationsAndActor_Params
{
public:
	TArray<struct FFortAIGoalInfo>               Goals;                                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UObject*                               WorldContextObject;                                // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       GoalLocations;                                     // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class UActor*                                GoalActor;                                         // 0x28(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function FortniteAI.FortAIGoalManager.MakeGoalsFromLocations
struct UFortAIGoalManager_MakeGoalsFromLocations_Params
{
public:
	TArray<struct FFortAIGoalInfo>               Goals;                                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UObject*                               WorldContextObject;                                // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       GoalLocations;                                     // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function FortniteAI.FortAIGoalManager.MakeGoalsFromActors
struct UFortAIGoalManager_MakeGoalsFromActors_Params
{
public:
	TArray<struct FFortAIGoalInfo>               Goals;                                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UObject*                               WorldContextObject;                                // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UActor*>                        GoalActors;                                        // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bActorsAlwaysPerceived;                            // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGoalActorsAllowUndermining;                       // 0x29(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A29[0x6];                                     // Fixing Size Of Struct..
};

// 0x48 (0x48 - 0x0)
// Function FortniteAI.FortAIGoalManager.MakeGoalFromLocation
struct UFortAIGoalManager_MakeGoalFromLocation_Params
{
public:
	struct FFortAIGoalInfo                       Goal;                                              // 0x0(0x28)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	class UObject*                               WorldContextObject;                                // 0x28(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               GoalLocation;                                      // 0x30(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function FortniteAI.FortAIGoalManager.MakeGoalFromActor
struct UFortAIGoalManager_MakeGoalFromActor_Params
{
public:
	struct FFortAIGoalInfo                       Goal;                                              // 0x0(0x28)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	class UObject*                               WorldContextObject;                                // 0x28(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                GoalActor;                                         // 0x30(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bActorAlwaysPerceived;                             // 0x38(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGoalActorAllowsUndermining;                       // 0x39(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A2A[0x6];                                     // Fixing Size Of Struct..
};

// 0x80 (0x80 - 0x0)
// Function FortniteAI.FortAIGoalManager.CreateWorldAssignment
struct UFortAIGoalManager_CreateWorldAssignment_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortAIAssignmentIdentifier           WorldAssignmentIdentifier;                         // 0x8(0x30)(Parm, NativeAccessSpecifierPublic)
	class UFortAIAssignmentSettings*             AssignmentSettings;                                // 0x38(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UFortAIGoalProvider>       GoalProvider;                                      // 0x40(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortAIAssignmentIdentifier           AssignmentIdentifier;                              // 0x48(0x30)(Parm, OutParm, NativeAccessSpecifierPublic)
	enum class EAssignmentCreationResult         CreationResult;                                    // 0x78(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A2B[0x7];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function FortniteAI.FortAIGoalManager.AddWorldAssignment
struct UFortAIGoalManager_AddWorldAssignment_Params
{
public:
	class UFortAIAssignmentSettings*             AssignmentSettings;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                GoalActor;                                         // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortAIAssignment*                     ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function FortniteAI.FortAIGoalManager.AddGoalToWorldAssignment
struct UFortAIGoalManager_AddGoalToWorldAssignment_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortAIAssignmentIdentifier           AssignmentIdentifier;                              // 0x8(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FFortAIGoalInfo                       GoalInfo;                                          // 0x38(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function FortniteAI.FortAIGoalManager.AddGoalsToWorldAssignment
struct UFortAIGoalManager_AddGoalsToWorldAssignment_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortAIAssignmentIdentifier           AssignmentIdentifier;                              // 0x8(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FFortAIGoalInfo>               GoalInfos;                                         // 0x38(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortAIGoalManager.AddGoalActorToAssignment
struct UFortAIGoalManager_AddGoalActorToAssignment_Params
{
public:
	class UFortAIAssignment*                     Assignment;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                GoalActor;                                         // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortAIGoalManager.AddGoal
struct UFortAIGoalManager_AddGoal_Params
{
public:
	class UActor*                                GoalActor;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortAIAssignmentSettings*             GoalSettings;                                      // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function FortniteAI.FortAIRootAssignmentProviderInterface.GetRootAssignmentIdentifier
struct UFortAIRootAssignmentProviderInterface_GetRootAssignmentIdentifier_Params
{
public:
	struct FFortAIAssignmentIdentifier           ReturnValue;                                       // 0x0(0x30)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortAISpawnerInterface.OnReceiveSpawnGroup
struct UFortAISpawnerInterface_OnReceiveSpawnGroup_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortAISpawnerInterface.IsReadyToReceiveNewSpawnGroup
struct UFortAISpawnerInterface_IsReadyToReceiveNewSpawnGroup_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortAISpawnGroup.IsValidForEnemySpawners
struct UFortAISpawnGroup_IsValidForEnemySpawners_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortAISpawnGroup.IsPrototype
struct UFortAISpawnGroup_IsPrototype_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortAISpawnGroup.IsLargeSpawnGroup
struct UFortAISpawnGroup_IsLargeSpawnGroup_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.FortAISpawnGroup.GetNumberOfEnemies
struct UFortAISpawnGroup_GetNumberOfEnemies_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortAISpawnGroup.GetEnemy
struct UFortAISpawnGroup_GetEnemy_Params
{
public:
	int32                                        EnemyIndex;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A34[0x4];                                     // Fixing Size After Last Property..
	TSubclassOf<class UFortAIPawnVariant>        ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.FortAITetheringBoxBoundsInterface.GetTetheredBoxBoundsWidth
struct UFortAITetheringBoxBoundsInterface_GetTetheredBoxBoundsWidth_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.FortAITetheringBoxBoundsInterface.GetTetheredBoxBoundsHeight
struct UFortAITetheringBoxBoundsInterface_GetTetheredBoxBoundsHeight_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.FortAITetheringBoxBoundsInterface.GetTetheredBoxBoundsEQSSpaceBetween
struct UFortAITetheringBoxBoundsInterface_GetTetheredBoxBoundsEQSSpaceBetween_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.FortAITetheringBoxBoundsInterface.GetTetheredBoxBoundsEQSGridSize
struct UFortAITetheringBoxBoundsInterface_GetTetheredBoxBoundsEQSGridSize_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteAI.FortAITetheringBoxBoundsInterface.GetTetheredBoxBoundsCenter
struct UFortAITetheringBoxBoundsInterface_GetTetheredBoxBoundsCenter_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x290 (0x290 - 0x0)
// Function FortniteAI.FortAsyncAction_MakeTieredWaveEncounterSettings.CreateAsyncAction_MakeTieredWaveEncounterSettings
struct UFortAsyncAction_MakeTieredWaveEncounterSettings_CreateAsyncAction_MakeTieredWaveEncounterSettings_Params
{
public:
	struct FTieredWaveSetData                    WaveData;                                          // 0x0(0x1C8)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FFortEncounterSettings                InEncounterSettings;                               // 0x1C8(0xC0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UFortAsyncAction_MakeTieredWaveEncounterSettings* ReturnValue;                                       // 0x288(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortAthenaAIBotController.UpdateLeashActorToFollowLocation
struct UFortAthenaAIBotController_UpdateLeashActorToFollowLocation_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortAthenaAIBotController.ThankBusDriver
struct UFortAthenaAIBotController_ThankBusDriver_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortAthenaAIBotController.SwitchTeam
struct UFortAthenaAIBotController_SwitchTeam_Params
{
public:
	uint8                                        TeamIndex;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortAthenaAIBotController.StopSecondaryFire
struct UFortAthenaAIBotController_StopSecondaryFire_Params
{
public:
	bool                                         bFireWhenStopping;                                 // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortAthenaAIBotController.StopFire
struct UFortAthenaAIBotController_StopFire_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortAthenaAIBotController.StopEmote
struct UFortAthenaAIBotController_StopEmote_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortAthenaAIBotController.StartSecondaryFire
struct UFortAthenaAIBotController_StartSecondaryFire_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortAthenaAIBotController.StartFire
struct UFortAthenaAIBotController_StartFire_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAthenaAIBotController.SetSkillSet
struct UFortAthenaAIBotController_SetSkillSet_Params
{
public:
	TSubclassOf<class UFortAthenaAIBotSkillSet>  SkillSetClass;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.FortAthenaAIBotController.SetRadialLeashOuterRadius
struct UFortAthenaAIBotController_SetRadialLeashOuterRadius_Params
{
public:
	float                                        OuterRadius;                                       // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteAI.FortAthenaAIBotController.SetRadialLeashLocation
struct UFortAthenaAIBotController_SetRadialLeashLocation_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.FortAthenaAIBotController.SetRadialLeashInnerRadius
struct UFortAthenaAIBotController_SetRadialLeashInnerRadius_Params
{
public:
	float                                        InnerRadius;                                       // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortAthenaAIBotController.SetPatrollingEnable
struct UFortAthenaAIBotController_SetPatrollingEnable_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAthenaAIBotController.SetLeashVolume
struct UFortAthenaAIBotController_SetLeashVolume_Params
{
public:
	class UFortAthenaAILeashVolume*              InLeashVolume;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortAthenaAIBotController.SetLeashReturnLocationMode
struct UFortAthenaAIBotController_SetLeashReturnLocationMode_Params
{
public:
	enum class ELeashReturnLocationMode          ReturnMode;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAthenaAIBotController.SetLeashGameplayVolume
struct UFortAthenaAIBotController_SetLeashGameplayVolume_Params
{
public:
	class UGameplayVolume*                       InLeashGameplayVolume;                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function FortniteAI.FortAthenaAIBotController.SetLeashActorToFollow
struct UFortAthenaAIBotController_SetLeashActorToFollow_Params
{
public:
	class UActor*                                ActorToFollow;                                     // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LeashLocationUpdateRate;                           // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A3B[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               LocalOffset;                                       // 0x10(0x18)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAthenaAIBotController.SetBotOwner
struct UFortAthenaAIBotController_SetBotOwner_Params
{
public:
	class UActor*                                InBotOwner;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function FortniteAI.FortAthenaAIBotController.RequestEmote
struct UFortAthenaAIBotController_RequestEmote_Params
{
public:
	struct FPrimaryAssetId                       EmotePrimaryAssetId;                               // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InfiniteEmoteMaxDuration;                          // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAthenaAIBotController.RemoveSkillSet
struct UFortAthenaAIBotController_RemoveSkillSet_Params
{
public:
	TSubclassOf<class UFortAthenaAIBotSkillSet>  SkillSetClass;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortAthenaAIBotController.RemoveEmoteRequest
struct UFortAthenaAIBotController_RemoveEmoteRequest_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortAthenaAIBotController.ReleaseBuildTool
struct UFortAthenaAIBotController_ReleaseBuildTool_Params
{
public:
};

// 0x48 (0x48 - 0x0)
// Function FortniteAI.FortAthenaAIBotController.QueueStim
struct UFortAthenaAIBotController_QueueStim_Params
{
public:
	class UActor*                                SourceActor;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SourceLocation;                                    // 0x8(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SourceDirection;                                   // 0x20(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EStimType                         NewStimType;                                       // 0x38(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A3C[0x3];                                     // Fixing Size After Last Property..
	float                                        StimStrength;                                      // 0x3C(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  StimTag;                                           // 0x40(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A3D[0x4];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAthenaAIBotController.PlayEmote
struct UFortAthenaAIBotController_PlayEmote_Params
{
public:
	struct FPrimaryAssetId                       EmotePrimaryAssetId;                               // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.FortAthenaAIBotController.OverrideSkill
struct UFortAthenaAIBotController_OverrideSkill_Params
{
public:
	float                                        NewSkill;                                          // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortAthenaAIBotController.OverrideAggressivenessPlayStyle
struct UFortAthenaAIBotController_OverrideAggressivenessPlayStyle_Params
{
public:
	bool                                         bInIsAggressive;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortAthenaAIBotController.OnTargetPawnDestroyed
struct UFortAthenaAIBotController_OnTargetPawnDestroyed_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAthenaAIBotController.OnTargetPawnDead
struct UFortAthenaAIBotController_OnTargetPawnDead_Params
{
public:
	class UFortPawn*                             FortPawn;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function FortniteAI.FortAthenaAIBotController.OnTargetPawnDamaged
struct UFortAthenaAIBotController_OnTargetPawnDamaged_Params
{
public:
	class UActor*                                DamagedActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A3E[0x4];                                     // Fixing Size After Last Property..
	class UController*                           InstigatedBy;                                      // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                DamageCauser;                                      // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitLocation;                                       // 0x20(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   FHitComponent;                                     // 0x38(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x40(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A3F[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               Momentum;                                          // 0x48(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortAthenaAIBotController.OnTargetBuildingDestroyed
struct UFortAthenaAIBotController_OnTargetBuildingDestroyed_Params
{
public:
	class UBuildingActor*                        Building;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAthenaAIController*                   AIController;                                      // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAthenaAIBotController.OnTargetActorDestroyed
struct UFortAthenaAIBotController_OnTargetActorDestroyed_Params
{
public:
	class UActor*                                DestroyedActor;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x180 (0x180 - 0x0)
// Function FortniteAI.FortAthenaAIBotController.OnServerMarkerAdded
struct UFortAthenaAIBotController_OnServerMarkerAdded_Params
{
public:
	struct FFortWorldMarkerData                  MarkerData;                                        // 0x0(0x180)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortAthenaAIBotController.OnSafeZoneUpdated
struct UFortAthenaAIBotController_OnSafeZoneUpdated_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortAthenaAIBotController.OnSafeZoneStateChanged
struct UFortAthenaAIBotController_OnSafeZoneStateChanged_Params
{
public:
	enum class EFortSafeZoneState                NewState;                                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function FortniteAI.FortAthenaAIBotController.OnPossessedPawnReceiveDamage
struct UFortAthenaAIBotController_OnPossessedPawnReceiveDamage_Params
{
public:
	class UActor*                                DamagedActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A40[0x4];                                     // Fixing Size After Last Property..
	class UController*                           InstigatedBy;                                      // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                DamageCauser;                                      // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitLocation;                                       // 0x20(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   FHitComponent;                                     // 0x38(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x40(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A41[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               Momentum;                                          // 0x48(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function FortniteAI.FortAthenaAIBotController.OnPossesedPawnDied
struct UFortAthenaAIBotController_OnPossesedPawnDied_Params
{
public:
	class UActor*                                DamagedActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A42[0x4];                                     // Fixing Size After Last Property..
	class UController*                           InstigatedBy;                                      // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                DamageCauser;                                      // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitLocation;                                       // 0x20(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   FHitComponent;                                     // 0x38(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x40(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A43[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               Momentum;                                          // 0x48(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function FortniteAI.FortAthenaAIBotController.OnPerceptionSensed
struct UFortAthenaAIBotController_OnPerceptionSensed_Params
{
public:
	class UActor*                                SourceActor;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAIStimulus                           Stim;                                              // 0x8(0x50)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortAthenaAIBotController.OnPawnWeaponChanged
struct UFortAthenaAIBotController_OnPawnWeaponChanged_Params
{
public:
	class UFortWeapon*                           NewWeapon;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortWeapon*                           OldWeapon;                                         // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function FortniteAI.FortAthenaAIBotController.OnPawnDidDamage
struct UFortAthenaAIBotController_OnPawnDidDamage_Params
{
public:
	class UActor*                                DamagedActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A44[0x4];                                     // Fixing Size After Last Property..
	class UController*                           InstigatedBy;                                      // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                DamageCauser;                                      // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitLocation;                                       // 0x20(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   HitComponent;                                      // 0x38(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x40(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A45[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               Momentum;                                          // 0x48(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortAthenaAIBotController.OnMovementModeChange
struct UFortAthenaAIBotController_OnMovementModeChange_Params
{
public:
	class UCharacter*                            InCharacter;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMovementMode                     PrevMovementMode;                                  // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        PreviousCustomMode;                                // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A46[0x6];                                     // Fixing Size Of Struct..
};

// 0x20 (0x20 - 0x0)
// Function FortniteAI.FortAthenaAIBotController.OnLaunched
struct UFortAthenaAIBotController_OnLaunched_Params
{
public:
	struct FVector                               LaunchVelocity;                                    // 0x0(0x18)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bXYOverride;                                       // 0x18(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bZOverride;                                        // 0x19(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A47[0x6];                                     // Fixing Size Of Struct..
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.FortAthenaAIBotController.OnKnockbacked
struct UFortAthenaAIBotController_OnKnockbacked_Params
{
public:
	struct FGameplayTag                          KnockbackTypeTag;                                  // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteAI.FortAthenaAIBotController.OnGamePhaseStepChanged
struct UFortAthenaAIBotController_OnGamePhaseStepChanged_Params
{
public:
	FInterfaceProperty_                          SafeZoneInterface;                                 // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAthenaGamePhaseStep              GamePhaseStep;                                     // 0x10(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A48[0x7];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortAthenaAIBotController.OnGamePhaseChanged
struct UFortAthenaAIBotController_OnGamePhaseChanged_Params
{
public:
	enum class EAthenaGamePhase                  GamePhase;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAthenaAIBotController.OnEndSpectating
struct UFortAthenaAIBotController_OnEndSpectating_Params
{
public:
	class UFortPlayerStateZone*                  Spectator;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function FortniteAI.FortAthenaAIBotController.OnCurrentHarvestableDestroyed
struct UFortAthenaAIBotController_OnCurrentHarvestableDestroyed_Params
{
public:
	class UActor*                                DamagedActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A49[0x4];                                     // Fixing Size After Last Property..
	class UController*                           InstigatedBy;                                      // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                DamageCauser;                                      // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitLocation;                                       // 0x20(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   FHitComponent;                                     // 0x38(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x40(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A4A[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               Momentum;                                          // 0x48(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAthenaAIBotController.OnBeginSpectating
struct UFortAthenaAIBotController_OnBeginSpectating_Params
{
public:
	class UFortPlayerStateZone*                  Spectator;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function FortniteAI.FortAthenaAIBotController.OnAlertLevelChanged
struct UFortAthenaAIBotController_OnAlertLevelChanged_Params
{
public:
	enum class EAlertLevel                       OldAlertLevel;                                     // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAlertLevel                       NewAlertLevel;                                     // 0x1(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortAthenaAIBotController.OnAgentDBNO
struct UFortAthenaAIBotController_OnAgentDBNO_Params
{
public:
	class UFortPawn*                             InPlayer;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInIsDBNO;                                         // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A4B[0x7];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function FortniteAI.FortAthenaAIBotController.NotifyPickupsSpawnedOnDeath
struct UFortAthenaAIBotController_NotifyPickupsSpawnedOnDeath_Params
{
public:
	TArray<class UFortPickup*>                   SpawnedPickups;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        SpawnRequestId;                                    // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A4C[0x4];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortAthenaAIBotController.IsAnAthenaGameParticipant
struct UFortAthenaAIBotController_IsAnAthenaGameParticipant_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortAthenaAIBotController.GetSlotItemByTag
struct UFortAthenaAIBotController_GetSlotItemByTag_Params
{
public:
	struct FGameplayTag                          TagToCheck;                                        // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A4D[0x4];                                     // Fixing Size After Last Property..
	class UFortWorldItem*                        ReturnValue;                                       // 0x8(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortAthenaAIBotController.GetSlotItemByItemDefinition
struct UFortAthenaAIBotController_GetSlotItemByItemDefinition_Params
{
public:
	class UFortItemDefinition*                   ItemDefinition;                                    // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortWorldItem*                        ReturnValue;                                       // 0x8(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAthenaAIBotController.GetMarkerComponent
struct UFortAthenaAIBotController_GetMarkerComponent_Params
{
public:
	class UAthenaMarkerComponent*                ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAthenaAIBotController.GetCurrentThreat
struct UFortAthenaAIBotController_GetCurrentThreat_Params
{
public:
	class UActor*                                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAthenaAIBotController.GetBotOwner
struct UFortAthenaAIBotController_GetBotOwner_Params
{
public:
	class UActor*                                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortAthenaAIBotController.EquipWeaponByTag
struct UFortAthenaAIBotController_EquipWeaponByTag_Params
{
public:
	struct FGameplayTag                          WeaponTag;                                         // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A4E[0x4];                                     // Fixing Size After Last Property..
	class UFortWeapon*                           ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortAthenaAIBotController.EquipWeapon
struct UFortAthenaAIBotController_EquipWeapon_Params
{
public:
	class UFortWorldItem*                        Weapon;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortWeapon*                           ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAthenaAIBotController.EquipMeleeWeapon
struct UFortAthenaAIBotController_EquipMeleeWeapon_Params
{
public:
	class UFortWeapon*                           ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAthenaAIBotController.EquipBestWeapon
struct UFortAthenaAIBotController_EquipBestWeapon_Params
{
public:
	class UFortWeapon*                           ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortAthenaAIBotController.Cheat_ForceAthenaCosmeticItemInSlot
struct UFortAthenaAIBotController_Cheat_ForceAthenaCosmeticItemInSlot_Params
{
public:
	class UAthenaCosmeticItemDefinition*         CosmeticItem;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAthenaCustomizationCategory      Slot;                                              // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A4F[0x3];                                     // Fixing Size After Last Property..
	int32                                        Index;                                             // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortAthenaAIBotController.Cheat_ClearForcedCosmeticItems
struct UFortAthenaAIBotController_Cheat_ClearForcedCosmeticItems_Params
{
public:
};

// 0xC (0xC - 0x0)
// Function FortniteAI.FortAthenaAIBotController.ChangeActiveVariantForCosmeticItem
struct UFortAthenaAIBotController_ChangeActiveVariantForCosmeticItem_Params
{
public:
	class FName                                  ItemTemplateToChange;                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          VariantChannelToChange;                            // 0x4(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          DesiredActiveVariant;                              // 0x8(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortAthenaAIBotController.BlueprintOnBehaviorTreeStarted
struct UFortAthenaAIBotController_BlueprintOnBehaviorTreeStarted_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function FortniteAI.FortAthenaAIBotController.AddTargetInfos
struct UFortAthenaAIBotController_AddTargetInfos_Params
{
public:
	TArray<class UActor*>                        Targets;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	enum class EPerceptionState                  PerceptionState;                                   // 0x10(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A50[0x3];                                     // Fixing Size After Last Property..
	float                                        ForgetTime;                                        // 0x14(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ForgetDistance;                                    // 0x18(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A51[0x4];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function FortniteAI.FortAthenaAIBotController.AddTargetInfo
struct UFortAthenaAIBotController_AddTargetInfo_Params
{
public:
	class UActor*                                Target;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceTarget;                                      // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPerceptionState                  PerceptionState;                                   // 0x9(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A52[0x2];                                     // Fixing Size After Last Property..
	float                                        ForgetTime;                                        // 0xC(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ForgetDistance;                                    // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A53[0x4];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortAthenaTrackableAIObjectVehicleComponent.HandleSleepStateChanged
struct UFortAthenaTrackableAIObjectVehicleComponent_HandleSleepStateChanged_Params
{
public:
	bool                                         bIsAwake;                                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetWeaponKnockbackImmunityEffect
struct UFortCreativeCreatureManagerInfoComponent_SetWeaponKnockbackImmunityEffect_Params
{
public:
	TSubclassOf<class UGameplayEffect>           Effect;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetWeaponKnockbackImmunity
struct UFortCreativeCreatureManagerInfoComponent_SetWeaponKnockbackImmunity_Params
{
public:
	bool                                         InImmuneToWeaponKnockback;                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetScorePoints
struct UFortCreativeCreatureManagerInfoComponent_SetScorePoints_Params
{
public:
	int32                                        InScorePoints;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetScoreDistribution
struct UFortCreativeCreatureManagerInfoComponent_SetScoreDistribution_Params
{
public:
	enum class EScoreDistributionType            InScoreDistribution;                               // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetOverrideDamage
struct UFortCreativeCreatureManagerInfoComponent_SetOverrideDamage_Params
{
public:
	float                                        InOverrideDamage;                                  // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetMovementSpeedOverrideEffect
struct UFortCreativeCreatureManagerInfoComponent_SetMovementSpeedOverrideEffect_Params
{
public:
	TSubclassOf<class UGameplayEffect>           Effect;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetMovementSpeedMultiplier
struct UFortCreativeCreatureManagerInfoComponent_SetMovementSpeedMultiplier_Params
{
public:
	float                                        InOverrideMovementSpeedMultiplier;                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetMovementOverrideTag
struct UFortCreativeCreatureManagerInfoComponent_SetMovementOverrideTag_Params
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetMaxHealthOverrideTag
struct UFortCreativeCreatureManagerInfoComponent_SetMaxHealthOverrideTag_Params
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetMaxHealthOverrideEffect
struct UFortCreativeCreatureManagerInfoComponent_SetMaxHealthOverrideEffect_Params
{
public:
	TSubclassOf<class UGameplayEffect>           Effect;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetMaxHealth
struct UFortCreativeCreatureManagerInfoComponent_SetMaxHealth_Params
{
public:
	int32                                        InMaxHealth;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetHearingAggroRange
struct UFortCreativeCreatureManagerInfoComponent_SetHearingAggroRange_Params
{
public:
	float                                        InHearingAggroRange;                               // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetEnvironmentalDamageOverrideEffect
struct UFortCreativeCreatureManagerInfoComponent_SetEnvironmentalDamageOverrideEffect_Params
{
public:
	TSubclassOf<class UGameplayEffect>           Effect;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetEnvironmentalDamageOverride
struct UFortCreativeCreatureManagerInfoComponent_SetEnvironmentalDamageOverride_Params
{
public:
	float                                        InOverrideDamage;                                  // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetDamageOverrideTag
struct UFortCreativeCreatureManagerInfoComponent_SetDamageOverrideTag_Params
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetDamageOverrideEffect
struct UFortCreativeCreatureManagerInfoComponent_SetDamageOverrideEffect_Params
{
public:
	TSubclassOf<class UGameplayEffect>           Effect;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetCreatureManagerComponent
struct UFortCreativeCreatureManagerInfoComponent_SetCreatureManagerComponent_Params
{
public:
	class UFortCreativeCreatureManagerComponent* InCreatureManagerComponent;                        // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetCreatureBlueprintClass
struct UFortCreativeCreatureManagerInfoComponent_SetCreatureBlueprintClass_Params
{
public:
	TSoftClassPtr<class UFortAIPawn>             InCreatureBlueprintClass;                          // 0x0(0x28)(Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetAffectedTargetsType
struct UFortCreativeCreatureManagerInfoComponent_SetAffectedTargetsType_Params
{
public:
	enum class ECreatureManagerAffectedTargets   InAffectedTargetsType;                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.ResetWeaponKnockbackImmunity
struct UFortCreativeCreatureManagerInfoComponent_ResetWeaponKnockbackImmunity_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.ResetScorePoints
struct UFortCreativeCreatureManagerInfoComponent_ResetScorePoints_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.ResetScoreDistribution
struct UFortCreativeCreatureManagerInfoComponent_ResetScoreDistribution_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.ResetOverrideDamage
struct UFortCreativeCreatureManagerInfoComponent_ResetOverrideDamage_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.ResetMovementSpeedMultiplier
struct UFortCreativeCreatureManagerInfoComponent_ResetMovementSpeedMultiplier_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.ResetMaxHealth
struct UFortCreativeCreatureManagerInfoComponent_ResetMaxHealth_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.ResetHearingAggroRange
struct UFortCreativeCreatureManagerInfoComponent_ResetHearingAggroRange_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.ResetEnvironmentalDamageOverride
struct UFortCreativeCreatureManagerInfoComponent_ResetEnvironmentalDamageOverride_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.GetWeaponKnockbackImmunity
struct UFortCreativeCreatureManagerInfoComponent_GetWeaponKnockbackImmunity_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.GetScorePoints
struct UFortCreativeCreatureManagerInfoComponent_GetScorePoints_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.GetScoreDistribution
struct UFortCreativeCreatureManagerInfoComponent_GetScoreDistribution_Params
{
public:
	enum class EScoreDistributionType            ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.GetOverrideDamage
struct UFortCreativeCreatureManagerInfoComponent_GetOverrideDamage_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.GetMovementSpeedMultiplier
struct UFortCreativeCreatureManagerInfoComponent_GetMovementSpeedMultiplier_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.GetMaxHealth
struct UFortCreativeCreatureManagerInfoComponent_GetMaxHealth_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.GetInvalidInt32
struct UFortCreativeCreatureManagerInfoComponent_GetInvalidInt32_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.GetInvalidFloat
struct UFortCreativeCreatureManagerInfoComponent_GetInvalidFloat_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.GetHearingAggroRange
struct UFortCreativeCreatureManagerInfoComponent_GetHearingAggroRange_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.GetEnvironmentalDamageOverride
struct UFortCreativeCreatureManagerInfoComponent_GetEnvironmentalDamageOverride_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.GetCreatureManagerComponent
struct UFortCreativeCreatureManagerInfoComponent_GetCreatureManagerComponent_Params
{
public:
	class UFortCreativeCreatureManagerComponent* ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.GetCreatureBlueprintClass
struct UFortCreativeCreatureManagerInfoComponent_GetCreatureBlueprintClass_Params
{
public:
	TSoftClassPtr<class UFortAIPawn>             ReturnValue;                                       // 0x0(0x28)(Parm, OutParm, ReturnParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.GetAffectedTargetsType
struct UFortCreativeCreatureManagerInfoComponent_GetAffectedTargetsType_Params
{
public:
	enum class ECreatureManagerAffectedTargets   ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortCreativeCreatureManagerComponent.OnInfoComponentRemoved
struct UFortCreativeCreatureManagerComponent_OnInfoComponentRemoved_Params
{
public:
	class UFortCreativeCreatureManagerInfoComponent* CreatureManagerInfoComponent;                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortCreativeCreatureManagerComponent.OnInfoComponentAdded
struct UFortCreativeCreatureManagerComponent_OnInfoComponentAdded_Params
{
public:
	class UFortCreativeCreatureManagerInfoComponent* CreatureManagerInfoComponent;                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function FortniteAI.FortCreativeCreatureManagerComponent.OnAIPawnDied
struct UFortCreativeCreatureManagerComponent_OnAIPawnDied_Params
{
public:
	class UActor*                                DamagedActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A86[0x4];                                     // Fixing Size After Last Property..
	class UController*                           InstigatedBy;                                      // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                DamageCauser;                                      // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitLocation;                                       // 0x20(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   FHitComponent;                                     // 0x38(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x40(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A87[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               Momentum;                                          // 0x48(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortEnvQueryManager.OnGamePhaseChanged
struct UFortEnvQueryManager_OnGamePhaseChanged_Params
{
public:
	enum class EAthenaGamePhase                  GamePhase;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortQueryTwoPointSolver.Start
struct UFortQueryTwoPointSolver_Start_Params
{
public:
	class UObject*                               Querier;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortQueryTwoPointSolver.SkipToNextPointA
struct UFortQueryTwoPointSolver_SkipToNextPointA_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function FortniteAI.FortQueryTwoPointSolver.SetCustomRotationA
struct UFortQueryTwoPointSolver_SetCustomRotationA_Params
{
public:
	struct FRotator                              Rotation;                                          // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function FortniteAI.FortQueryTwoPointSolver.OnCustomRotationMode
struct UFortQueryTwoPointSolver_OnCustomRotationMode_Params
{
public:
	struct FVector                               InPointA;                                          // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Querier;                                           // 0x18(0x18)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteAI.FortQueryTwoPointSolver.GetRandomRotationOffset
struct UFortQueryTwoPointSolver_GetRandomRotationOffset_Params
{
public:
	struct FRotator                              ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortQueryTwoPointSolver.AddNamedFloatParamB
struct UFortQueryTwoPointSolver_AddNamedFloatParamB_Params
{
public:
	class FName                                  ParamName;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortQueryTwoPointSolver.AddNamedFloatParamA
struct UFortQueryTwoPointSolver_AddNamedFloatParamA_Params
{
public:
	class FName                                  ParamName;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortGameplayAbility_TeleportToActor.PreTeleportPawn
struct UFortGameplayAbility_TeleportToActor_PreTeleportPawn_Params
{
public:
	class UFortPawn*                             TeleportedPawn;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortGameplayAbility_TeleportToActor.PostTeleportedPawn
struct UFortGameplayAbility_TeleportToActor_PostTeleportedPawn_Params
{
public:
	class UFortPawn*                             TeleportedPawn;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortNavSystem.OnNavDataRegistered
struct UFortNavSystem_OnNavDataRegistered_Params
{
public:
	class UNavigationData*                       NavData;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function FortniteAI.FortNavSystem.IsNavmeshInRadiusInitialized
struct UFortNavSystem_IsNavmeshInRadiusInitialized_Params
{
public:
	class UObject*                               WorldContext;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TestLocation;                                      // 0x8(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TestRadius;                                        // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x24(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A97[0x3];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortPatrolWardInterface.GetAffectingType
struct UFortPatrolWardInterface_GetAffectingType_Params
{
public:
	enum class EWardAffectType                   ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.FortPatrolWardInterface.GetAffectingDistance
struct UFortPatrolWardInterface_GetAffectingDistance_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortThreatVisualsManager.StormsExist
struct UFortThreatVisualsManager_StormsExist_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.FortThreatVisualsManager.SetMinimumCloudAltitude
struct UFortThreatVisualsManager_SetMinimumCloudAltitude_Params
{
public:
	float                                        NewMinimumAltitude;                                // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortThreatVisualsManager.SetCloudsAreHidden
struct UFortThreatVisualsManager_SetCloudsAreHidden_Params
{
public:
	bool                                         bHide;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortThreatVisualsManager.ResetMinimumCloudAltitude
struct UFortThreatVisualsManager_ResetMinimumCloudAltitude_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortThreatVisualsManager.OnWorldReady
struct UFortThreatVisualsManager_OnWorldReady_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortThreatVisualsManager.OnThreatCloudsChanged
struct UFortThreatVisualsManager_OnThreatCloudsChanged_Params
{
public:
	TArray<struct FThreatLocationInfo>           ThreatLocationInfo;                                // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortThreatVisualsManager.OnRep_ThreatLocations
struct UFortThreatVisualsManager_OnRep_ThreatLocations_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortThreatVisualsManager.OnRep_StormWinds
struct UFortThreatVisualsManager_OnRep_StormWinds_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortThreatVisualsManager.OnRep_HideClouds
struct UFortThreatVisualsManager_OnRep_HideClouds_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortThreatVisualsManager.OnRep_GoalActorLocations
struct UFortThreatVisualsManager_OnRep_GoalActorLocations_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function FortniteAI.FortThreatVisualsManager.OnBeginThreatVisualsPrecursor
struct UFortThreatVisualsManager_OnBeginThreatVisualsPrecursor_Params
{
public:
	class UActor*                                SourceActor;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               EndLocation;                                       // 0x8(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortThreatVisualsManager.GetThreatClouds
struct UFortThreatVisualsManager_GetThreatClouds_Params
{
public:
	TArray<struct FThreatLocationInfo>           ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function FortniteAI.FortThreatVisualsManager.GetThreatCloud
struct UFortThreatVisualsManager_GetThreatCloud_Params
{
public:
	struct FThreatLocationInfo                   ThreatLocInfo;                                     // 0x0(0x88)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UThreatCloud*                          ReturnValue;                                       // 0x88(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortThreatVisualsManager.GetCloudsAreHidden
struct UFortThreatVisualsManager_GetCloudsAreHidden_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteAI.FortThreatVisualsManager.BeginThreatVisualsPrecursor
struct UFortThreatVisualsManager_BeginThreatVisualsPrecursor_Params
{
public:
	class UActor*                                SourceActor;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ThreatLocation;                                    // 0x8(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortAIGoalProvider.UpdateGoals
struct UFortAIGoalProvider_UpdateGoals_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function FortniteAI.FortAIGoalProvider.InitializeGoalProvider
struct UFortAIGoalProvider_InitializeGoalProvider_Params
{
public:
	class UWorld*                                ContextWorld;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortAIAssignment*                     Assignment;                                        // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AA6[0x7];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAIGoalProvider.GetEncounterInfo
struct UFortAIGoalProvider_GetEncounterInfo_Params
{
public:
	class UFortAIEncounterInfo*                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.AIHotSpotSlotGenerator.GetHotSpot
struct UAIHotSpotSlotGenerator_GetHotSpot_Params
{
public:
	class UAIHotSpot*                            ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.AIHotSpotSlotGenerator.GenerateSlots
struct UAIHotSpotSlotGenerator_GenerateSlots_Params
{
public:
};

// 0x48 (0x48 - 0x0)
// Function FortniteAI.AIHotSpotSlotGenerator.AddSlot
struct UAIHotSpotSlotGenerator_AddSlot_Params
{
public:
	struct FVector                               RelativeLocation;                                  // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              RelativeRotation;                                  // 0x18(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TSubclassOf<class UAIHotSpotSlot>            CustomSlotClass;                                   // 0x30(0x8)(Parm, ZeroConstructor, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x38(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AAC[0x7];                                     // Fixing Size After Last Property..
	class UAIHotSpotSlot*                        ReturnValue;                                       // 0x40(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteAI.FortInfluenceMap.K2_GetInfluenceSourcePositions
struct UFortInfluenceMap_K2_GetInfluenceSourcePositions_Params
{
public:
	class UObject*                               WorldContext;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       InfluenceSourcePositions;                          // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function FortniteAI.FortInfluenceMap.K2_AddInfluenceSource
struct UFortInfluenceMap_K2_AddInfluenceSource_Params
{
public:
	class UObject*                               WorldContext;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Position;                                          // 0x8(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SourceName;                                        // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Strength;                                          // 0x30(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AB9[0x4];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function FortniteAI.FortBotMissionLogic.SpawnStructureBuilder
struct UFortBotMissionLogic_SpawnStructureBuilder_Params
{
public:
	class UActor*                                MissionGoal;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortBuildingInstructions*             BuildingInstructions;                              // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortBotStructureBuilder*              ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortBotMissionLogic.SetGoalsInvulnerable
struct UFortBotMissionLogic_SetGoalsInvulnerable_Params
{
public:
	bool                                         bGodMode;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortBotMissionLogic.SetCurrentBehavior
struct UFortBotMissionLogic_SetCurrentBehavior_Params
{
public:
	class UBehaviorTree*                         Behavior;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortBotMissionLogic.ResetBehavior
struct UFortBotMissionLogic_ResetBehavior_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortBotMissionLogic.OnMissionStarted
struct UFortBotMissionLogic_OnMissionStarted_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortBotMissionLogic.OnMissionFinished
struct UFortBotMissionLogic_OnMissionFinished_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortBotMissionLogic.OnMissionActivated
struct UFortBotMissionLogic_OnMissionActivated_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function FortniteAI.FortBotMissionLogic.OnInteractWithMissionGoal
struct UFortBotMissionLogic_OnInteractWithMissionGoal_Params
{
public:
	class UFortAIController*                     BotAI;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                MissionGoal;                                       // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1ABC[0x7];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function FortniteAI.FortBotMissionLogic.OnCanStartOtherMission
struct UFortBotMissionLogic_OnCanStartOtherMission_Params
{
public:
	class UFortAIController*                     BotAI;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortMission*                          OtherMission;                                      // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1ABD[0x7];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortBotMissionLogic.OnAssignedBehavior
struct UFortBotMissionLogic_OnAssignedBehavior_Params
{
public:
	class UFortAIController*                     BotAI;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortBotMissionLogic.MarkSingleLocator
struct UFortBotMissionLogic_MarkSingleLocator_Params
{
public:
	class UActor*                                LocatorActor;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortBotMissionLogic.MarkAllLocated
struct UFortBotMissionLogic_MarkAllLocated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortBotMissionLogic.ClearAllLocated
struct UFortBotMissionLogic_ClearAllLocated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortBotStructureBuilder.RunDeconstructor
struct UFortBotStructureBuilder_RunDeconstructor_Params
{
public:
};

// 0x60 (0x60 - 0x0)
// Function FortniteAI.FortBotStructureBuilder.OnBuildingDied
struct UFortBotStructureBuilder_OnBuildingDied_Params
{
public:
	class UActor*                                DamagedActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1ABF[0x4];                                     // Fixing Size After Last Property..
	class UController*                           InstigatedBy;                                      // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                DamageCauser;                                      // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitLocation;                                       // 0x20(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   FHitComponent;                                     // 0x38(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x40(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AC0[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               Momentum;                                          // 0x48(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortBotStructureBuilder.BuildAll
struct UFortBotStructureBuilder_BuildAll_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.AthenaNavInvokerBox.SetInvokerEnabled
struct UAthenaNavInvokerBox_SetInvokerEnabled_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function FortniteAI.AthenaNavMesh.MoveTiles
struct UAthenaNavMesh_MoveTiles_Params
{
public:
	struct FBox                                  SourceBox;                                         // 0x0(0x38)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FIntPoint                             TileOffset;                                        // 0x38(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotationDeg;                                       // 0x40(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AC6[0x4];                                     // Fixing Size After Last Property..
	struct FVector2D                             FillerTilePosition;                                // 0x48(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function FortniteAI.AthenaNavMesh.ComputeOffsetForMoveTiles
struct UAthenaNavMesh_ComputeOffsetForMoveTiles_Params
{
public:
	struct FVector                               StartPosition;                                     // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               DesiredPosition;                                   // 0x18(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OutEndPosition;                                    // 0x30(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntPoint                             OutTileOffset;                                     // 0x48(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteAI.AthenaNavPresenceDetectorComponent.OnNavMeshTilesUpdated
struct UAthenaNavPresenceDetectorComponent_OnNavMeshTilesUpdated_Params
{
public:
	struct FUpdatedNavMeshTiles                  UpdatedNavMeshTiles;                               // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.AthenaNavPresenceDetectorComponent.HasValidNavMeshLocation
struct UAthenaNavPresenceDetectorComponent_HasValidNavMeshLocation_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.AthenaNavSystem.UnregisterNavGenerationObserver
struct UAthenaNavSystem_UnregisterNavGenerationObserver_Params
{
public:
	class USceneComponent*                       Component;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteAI.AthenaNavSystem.RegisterNavGenerationObserver
struct UAthenaNavSystem_RegisterNavGenerationObserver_Params
{
public:
	class USceneComponent*                       Component;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Event;                                             // 0x8(0xC)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1ACC[0x4];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.AthenaNavSystem.IsInitialNavigationLockActive
struct UAthenaNavSystem_IsInitialNavigationLockActive_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1ACD[0x7];                                     // Fixing Size Of Struct..
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortNavPathRendererComponent.UpdatePathsVisualOnClient
struct UFortNavPathRendererComponent_UpdatePathsVisualOnClient_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortNavPathRendererComponent.OnRep_PathPointsUpdated
struct UFortNavPathRendererComponent_OnRep_PathPointsUpdated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortNavPathRendererComponent.OnRep_PathModeUpdated
struct UFortNavPathRendererComponent_OnRep_PathModeUpdated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortNavPathRendererComponent.OnRep_ColorIndexUpdated
struct UFortNavPathRendererComponent_OnRep_ColorIndexUpdated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortNavPathRendererComponent.DeactivateFX
struct UFortNavPathRendererComponent_DeactivateFX_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortZiplineLinkComponent.OnZiplineStateChanged
struct UFortZiplineLinkComponent_OnZiplineStateChanged_Params
{
public:
	bool                                         bIsZiplining;                                      // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1ADD[0x7];                                     // Fixing Size After Last Property..
	class UFortPlayerPawn*                       FortPlayerPawn;                                    // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function FortniteAI.FortAITask_ExecuteAbility.OnInjectedHitResultDied
struct UFortAITask_ExecuteAbility_OnInjectedHitResultDied_Params
{
public:
	class UActor*                                DamagedActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AE5[0x4];                                     // Fixing Size After Last Property..
	class UController*                           InstigatedBy;                                      // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                DamageCauser;                                      // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitLocation;                                       // 0x20(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   FHitComponent;                                     // 0x38(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x40(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AE6[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               Momentum;                                          // 0x48(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.ThreatCloud.OnThreatVolumeChanged
struct UThreatCloud_OnThreatVolumeChanged_Params
{
public:
};

// 0x40 (0x40 - 0x0)
// Function FortniteAI.ThreatCloud.OnLightningStrike
struct UThreatCloud_OnLightningStrike_Params
{
public:
	struct FVector                               StartLocation;                                     // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               EndLocation;                                       // 0x18(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBuildingRift*                         Rift;                                              // 0x30(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLightningStruckRift;                              // 0x38(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AED[0x7];                                     // Fixing Size Of Struct..
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.ThreatCloud.OnCloudStart
struct UThreatCloud_OnCloudStart_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.ThreatCloud.OnCloudHiddenChange
struct UThreatCloud_OnCloudHiddenChange_Params
{
public:
	bool                                         bCloudsAreHidden;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.ThreatCloud.OnCloudDeactivated
struct UThreatCloud_OnCloudDeactivated_Params
{
public:
	enum class EFortThreatDeactivationType       DeactivationType;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.ThreatCloud.OnCloudActivated
struct UThreatCloud_OnCloudActivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.ThreatCloud.OnBeginDeath
struct UThreatCloud_OnBeginDeath_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.ThreatCloud.ManualLightningFlash
struct UThreatCloud_ManualLightningFlash_Params
{
public:
};

// 0x38 (0x38 - 0x0)
// Function FortniteAI.ThreatCloud.GetThreatVolume
struct UThreatCloud_GetThreatVolume_Params
{
public:
	struct FBox                                  ReturnValue;                                       // 0x0(0x38)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function FortniteAI.AthenaAIBlueprintLibrary.MakeBotGroupsTakeEachOtherAsTargets
struct UAthenaAIBlueprintLibrary_MakeBotGroupsTakeEachOtherAsTargets_Params
{
public:
	TArray<class UActor*>                        GroupA;                                            // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class UActor*>                        GroupB;                                            // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	enum class EPerceptionState                  PerceptionState;                                   // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AF2[0x3];                                     // Fixing Size After Last Property..
	float                                        ForgetTime;                                        // 0x24(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ForgetDistance;                                    // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AF3[0x4];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function FortniteAI.AthenaAIBlueprintLibrary.KillBots
struct UAthenaAIBlueprintLibrary_KillBots_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bKillPlayers;                                      // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bKillNoneParticipants;                             // 0x9(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        TeamIndex;                                         // 0xA(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AF4[0x5];                                     // Fixing Size After Last Property..
	class UActor*                                BotOwner;                                          // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteAI.AthenaAIBlueprintLibrary.JoinTeam
struct UAthenaAIBlueprintLibrary_JoinTeam_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UController*                           SourceTeamController;                              // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UController*                           DestinationTeamController;                         // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteAI.AthenaAIBlueprintLibrary.IsWeaponSupported
struct UAthenaAIBlueprintLibrary_IsWeaponSupported_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortWeapon*                           FortWeapon;                                        // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AF5[0x7];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function FortniteAI.AthenaAIBlueprintLibrary.IsItemDefinitionSupported
struct UAthenaAIBlueprintLibrary_IsItemDefinitionSupported_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortItemDefinition*                   FortItemDef;                                       // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AF6[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.AthenaAIBlueprintLibrary.GetAIServicePlayerBots
struct UAthenaAIBlueprintLibrary_GetAIServicePlayerBots_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAthenaAIServicePlayerBots*            ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.AthenaAIBlueprintLibrary.GetAIServiceLoot
struct UAthenaAIBlueprintLibrary_GetAIServiceLoot_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAthenaAIServiceLoot*                  ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.AthenaAIBlueprintLibrary.GetAIServiceCreativePlayerBots
struct UAthenaAIBlueprintLibrary_GetAIServiceCreativePlayerBots_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAthenaAIServiceCreativePlayerBots*    ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.AthenaAIBlueprintLibrary.GetAIPopulationTracker
struct UAthenaAIBlueprintLibrary_GetAIPopulationTracker_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAthenaAIPopulationTracker*            ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function FortniteAI.AthenaAIBlueprintLibrary.AthenaSpawnAIFromClass
struct UAthenaAIBlueprintLibrary_AthenaSpawnAIFromClass_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UPawn>                     PawnClass;                                         // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBehaviorTree*                         BehaviorTree;                                      // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x18(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0x30(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bNoCollisionFail;                                  // 0x48(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AF7[0x7];                                     // Fixing Size After Last Property..
	class UActor*                                Owner;                                             // 0x50(0x8)(Parm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPawn*                                 ReturnValue;                                       // 0x58(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function FortniteAI.AthenaAIBlueprintLibrary.AIPawnFromGAHasLuringPickupAsGoal
struct UAthenaAIBlueprintLibrary_AIPawnFromGAHasLuringPickupAsGoal_Params
{
public:
	struct FGameplayAbilityActorInfo             ActorInfo;                                         // 0x0(0x48)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGameplayTag                          GameplayTag;                                       // 0x48(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxLifetime;                                       // 0x4C(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortPickupSpawnSource            RequiredPickupSpawnSource;                         // 0x50(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x51(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AF8[0x6];                                     // Fixing Size Of Struct..
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.FortAthenaAlertStateComponent.SetStealthMeterTargetTime
struct UFortAthenaAlertStateComponent_SetStealthMeterTargetTime_Params
{
public:
	float                                        InStealthMeterTargetTime;                          // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.FortAthenaAlertStateComponent.SetStealthMeterTarget
struct UFortAthenaAlertStateComponent_SetStealthMeterTarget_Params
{
public:
	float                                        InStealthMeterTarget;                              // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortAthenaAlertStateComponent.OnStealthMeterChanged
struct UFortAthenaAlertStateComponent_OnStealthMeterChanged_Params
{
public:
	class UFortAthenaAIBotController*            BotController;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StealthMeterTarget;                                // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StealthMeterTargetTime;                            // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.FortAthenaAlertStateComponent.GetStealthMeterTargetTime
struct UFortAthenaAlertStateComponent_GetStealthMeterTargetTime_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.FortAthenaAlertStateComponent.GetStealthMeterTarget
struct UFortAthenaAlertStateComponent_GetStealthMeterTarget_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function FortniteAI.FortAthenaNPCLoopStateComponent.OnOwnerPawnDied
struct UFortAthenaNPCLoopStateComponent_OnOwnerPawnDied_Params
{
public:
	class UActor*                                DamagedActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AFD[0x4];                                     // Fixing Size After Last Property..
	class UController*                           InstigatedBy;                                      // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                DamageCauser;                                      // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitLocation;                                       // 0x20(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   FHitComponent;                                     // 0x38(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x40(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AFE[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               Momentum;                                          // 0x48(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAthenaNPCLoopStateComponent.InitLoopState
struct UFortAthenaNPCLoopStateComponent_InitLoopState_Params
{
public:
	class UFortPawn*                             PawnOwner;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortPawnComponent_AIBotPingCommand.OnServerMarkerRemoved
struct UFortPawnComponent_AIBotPingCommand_OnServerMarkerRemoved_Params
{
public:
	struct FMarkerID                             MarkerID;                                          // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x180 (0x180 - 0x0)
// Function FortniteAI.FortPawnComponent_AIBotPingCommand.OnServerMarkerAdded
struct UFortPawnComponent_AIBotPingCommand_OnServerMarkerAdded_Params
{
public:
	struct FFortWorldMarkerData                  MarkerData;                                        // 0x0(0x180)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortPawnComponent_AIBotPingCommand.OnAIPingCommand
struct UFortPawnComponent_AIBotPingCommand_OnAIPingCommand_Params
{
public:
	class UFortPlayerPawn*                       PlayerPawn;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPingCommandType                  CommandType;                                       // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B01[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortPawnComponent_AIBotPingCommand.HandleOnNPCUnconvertEvent
struct UFortPawnComponent_AIBotPingCommand_HandleOnNPCUnconvertEvent_Params
{
public:
	class UFortPawn*                             UnconvertedFortPawn;                               // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EUnconvertReason                  UnconvertReason;                                   // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B02[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortPawnComponent_AIBotPingCommand.HandleOnNPCConvertEvent
struct UFortPawnComponent_AIBotPingCommand_HandleOnNPCConvertEvent_Params
{
public:
	class UFortPawn*                             InstigatorPawn;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortPawn*                             ConvertedPawn;                                     // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function FortniteAI.FortPawnComponent_AIFormation.OnUserDied
struct UFortPawnComponent_AIFormation_OnUserDied_Params
{
public:
	class UActor*                                DamagedActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B03[0x4];                                     // Fixing Size After Last Property..
	class UController*                           InstigatedBy;                                      // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                DamageCauser;                                      // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitLocation;                                       // 0x20(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   FHitComponent;                                     // 0x38(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x40(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B04[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               Momentum;                                          // 0x48(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortPawnComponent_AIGroup.RemoveFromCurrentGroup
struct UFortPawnComponent_AIGroup_RemoveFromCurrentGroup_Params
{
public:
};

// 0x60 (0x60 - 0x0)
// Function FortniteAI.FortPawnComponent_AIGroup.OnGroupMemberDied
struct UFortPawnComponent_AIGroup_OnGroupMemberDied_Params
{
public:
	class UActor*                                DamagedActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B07[0x4];                                     // Fixing Size After Last Property..
	class UController*                           InstigatedBy;                                      // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                DamageCauser;                                      // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitLocation;                                       // 0x20(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   FHitComponent;                                     // 0x38(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x40(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B08[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               Momentum;                                          // 0x48(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortAthenaPatrolPath.SetPatrolPathEnabled
struct UFortAthenaPatrolPath_SetPatrolPathEnabled_Params
{
public:
	bool                                         bIsEnabled;                                        // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortAthenaPatrolPath.PatrolPointReached
struct UFortAthenaPatrolPath_PatrolPointReached_Params
{
public:
	class UFortAthenaPatrolPoint*                PathPoint;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAIController*                         AIInstigator;                                      // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortAthenaPatrolPath.PatrolPointFailedToReach
struct UFortAthenaPatrolPath_PatrolPointFailedToReach_Params
{
public:
	class UFortAthenaPatrolPoint*                PathPoint;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAIController*                         AIInstigator;                                      // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAthenaPatrolPath.PatrolPathStopped
struct UFortAthenaPatrolPath_PatrolPathStopped_Params
{
public:
	class UAIController*                         AIInstigator;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAthenaPatrolPath.PatrolPathStarted
struct UFortAthenaPatrolPath_PatrolPathStarted_Params
{
public:
	class UAIController*                         AIInstigator;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function FortniteAI.FortAthenaPatrolPath.OnCurrentPlaylistLoaded
struct UFortAthenaPatrolPath_OnCurrentPlaylistLoaded_Params
{
public:
	class FName                                  PlaylistName;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B0A[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 PlaylistContextTags;                               // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortAthenaPatrolPath.GetPatrolPoints
struct UFortAthenaPatrolPath_GetPatrolPoints_Params
{
public:
	TArray<class UFortAthenaPatrolPoint*>        OutPatrolPoints;                                   // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortAthenaPatrolPath.CanBeUsed
struct UFortAthenaPatrolPath_CanBeUsed_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortCreativePatrolPath.SetPatrolHasValidNavMesh
struct UFortCreativePatrolPath_SetPatrolHasValidNavMesh_Params
{
public:
	bool                                         bValidNavMesh;                                     // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortCreativePatrolPath.HasPatrolValidNavMesh
struct UFortCreativePatrolPath_HasPatrolValidNavMesh_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function FortniteAI.FortAthenaAIBotCosmeticData.FindLibraryDataFromName
struct UFortAthenaAIBotCosmeticData_FindLibraryDataFromName_Params
{
public:
	class FString                                PartialName;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortAthenaAIBotCosmeticLibraryData> ReturnValue;                                       // 0x10(0x28)(Parm, OutParm, ReturnParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortAthenaAIBotCosmeticLibraryData.RetrieveDataTables
struct UFortAthenaAIBotCosmeticLibraryData_RetrieveDataTables_Params
{
public:
	TArray<class UDataTable*>                    ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteAI.FortAthenaAIBotCosmeticLibraryData.FindDataTableFromAssetType
struct UFortAthenaAIBotCosmeticLibraryData_FindDataTableFromAssetType_Params
{
public:
	class FString                                AssetType;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortAthenaAIBotCosmeticLibraryData.FillDataTableValuesFromSourceLibrary
struct UFortAthenaAIBotCosmeticLibraryData_FillDataTableValuesFromSourceLibrary_Params
{
public:
	class UFortAthenaAIBotCosmeticLibraryData*   SourceLibrary;                                     // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B23[0x7];                                     // Fixing Size Of Struct..
};

// 0x80 (0x80 - 0x0)
// Function FortniteAI.BotCosmeticBlueprintHelperLibrary.SplitDataArrayByType
struct UBotCosmeticBlueprintHelperLibrary_SplitDataArrayByType_Params
{
public:
	TArray<class FString>                        InAssetNames;                                      // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class FString>                        InAssetTypes;                                      // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<int32>                                InAssetUsageCounts;                                // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<int32>                                InAssetTypeSplitIndices;                           // 0x30(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        CurrentSplitIndex;                                 // 0x40(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B24[0x4];                                     // Fixing Size After Last Property..
	class FString                                OutAssetType;                                      // 0x48(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        OutAssetNames;                                     // 0x58(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                OutAssetUsageCounts;                               // 0x68(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x78(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B25[0x7];                                     // Fixing Size Of Struct..
};

// 0x28 (0x28 - 0x0)
// Function FortniteAI.BotCosmeticBlueprintHelperLibrary.OpenCSVFileDialog
struct UBotCosmeticBlueprintHelperLibrary_OpenCSVFileDialog_Params
{
public:
	class FString                                TitleDetails;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowMultipleFiles;                               // 0x10(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B26[0x7];                                     // Fixing Size After Last Property..
	TArray<class FString>                        ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function FortniteAI.BotCosmeticBlueprintHelperLibrary.LoadDataFromCSV
struct UBotCosmeticBlueprintHelperLibrary_LoadDataFromCSV_Params
{
public:
	class FString                                FilePath;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        ForbiddenAssetNames;                               // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class FString>                        ForbiddenAssetPrefix;                              // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class FString>                        AssetNames;                                        // 0x30(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        AssetTypes;                                        // 0x40(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                AssetUsageCounts;                                  // 0x50(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                AssetTypeSplitIndices;                             // 0x60(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x70(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B27[0x7];                                     // Fixing Size Of Struct..
};

// 0x48 (0x48 - 0x0)
// Function FortniteAI.BotCosmeticBlueprintHelperLibrary.GenerateWeightedCSV
struct UBotCosmeticBlueprintHelperLibrary_GenerateWeightedCSV_Params
{
public:
	class FString                                AssetTypeName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        AssetNames;                                        // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<int32>                                AssetWeight;                                       // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                CSV;                                               // 0x30(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B28[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.BotCosmeticBlueprintHelperLibrary.ExportDataTableToSourceCSV
struct UBotCosmeticBlueprintHelperLibrary_ExportDataTableToSourceCSV_Params
{
public:
	class UDataTable*                            DataTable;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanCheckOutFile;                                  // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B29[0x6];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAthenaAIBotCustomizationData.SetCharacterCustomizationFromPlayerPawn
struct UFortAthenaAIBotCustomizationData_SetCharacterCustomizationFromPlayerPawn_Params
{
public:
	class UFortPlayerPawn*                       InFortPawn;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortAthenaAIBotEvaluator_Movement.OnCurrentUnstuckSteeringAttemptFinished
struct UFortAthenaAIBotEvaluator_Movement_OnCurrentUnstuckSteeringAttemptFinished_Params
{
public:
	enum class EBotUnstuckSteeringReason         UnstuckSteeringReason;                             // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortAthenaAIBotEvaluator_Movement.EvaluateIsolatedIslandSteering
struct UFortAthenaAIBotEvaluator_Movement_EvaluateIsolatedIslandSteering_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAthenaAIBotPathFollowingComponent.HandlePawnTeleported
struct UFortAthenaAIBotPathFollowingComponent_HandlePawnTeleported_Params
{
public:
	class UFortPawn*                             TeleportedPawn;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortAthenaAILODComponent.OnRep_CurrentFortAILODLevel
struct UFortAthenaAILODComponent_OnRep_CurrentFortAILODLevel_Params
{
public:
};

// 0x120 (0x120 - 0x0)
// Function FortniteAI.FortAthenaAIObjectTracker.BP_MakeFullAthenaAIObjectTrackerQueryFromSimplified
struct UFortAthenaAIObjectTracker_BP_MakeFullAthenaAIObjectTrackerQueryFromSimplified_Params
{
public:
	struct FFortAthenaAIObjectTrackerQuerySimplified SimplifiedQuery;                                   // 0x0(0x80)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UActor*                                OptionalQuerier;                                   // 0x80(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortAthenaAIObjectTrackerQuery       ReturnValue;                                       // 0x88(0x98)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortAthenaAIRuntimeParameters_SmartObjectBase.SetChooseClosestSmartObject
struct UFortAthenaAIRuntimeParameters_SmartObjectBase_SetChooseClosestSmartObject_Params
{
public:
	bool                                         bInChooseClosestSmartObject;                       // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortAthenaAIRuntimeParameters_SmartObjectBase.GetChooseClosestSmartObject
struct UFortAthenaAIRuntimeParameters_SmartObjectBase_GetChooseClosestSmartObject_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerDataComponentList.OverrideComponentClass
struct UFortAthenaAISpawnerDataComponentList_OverrideComponentClass_Params
{
public:
	TSubclassOf<class UFortAthenaAISpawnerDataComponent> NewComponentSubClass;                              // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortAthenaAISpawnerDataComponentList* ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerDataComponentList.OverrideComponent
struct UFortAthenaAISpawnerDataComponentList_OverrideComponent_Params
{
public:
	class UFortAthenaAISpawnerDataComponent*     NewComponent;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortAthenaAISpawnerDataComponentList* ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerDataComponentList.GetOrCreateComponentClassForModification
struct UFortAthenaAISpawnerDataComponentList_GetOrCreateComponentClassForModification_Params
{
public:
	class UObject*                               ComponentOuter;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UFortAthenaAISpawnerDataComponent> ClassToClone;                                      // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortAthenaAISpawnerDataComponent*     ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerDataComponentList.GetList
struct UFortAthenaAISpawnerDataComponentList_GetList_Params
{
public:
	TArray<class UFortAthenaAISpawnerDataComponent*> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerDataComponent_AffiliationBase.SetFullTeamAwarenessPropagationDistance
struct UFortAthenaAISpawnerDataComponent_AffiliationBase_SetFullTeamAwarenessPropagationDistance_Params
{
public:
	float                                        InFullTeamAwarenessMaxDistance;                    // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerDataComponent_AffiliationBase.SetFullTeamAwarenessPropagation
struct UFortAthenaAISpawnerDataComponent_AffiliationBase_SetFullTeamAwarenessPropagation_Params
{
public:
	bool                                         bInFullTeamAwarenessPropagation;                   // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerDataComponent_AffiliationBase.SetFactionTags
struct UFortAthenaAISpawnerDataComponent_AffiliationBase_SetFactionTags_Params
{
public:
	struct FGameplayTagContainer                 NewTags;                                           // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerDataComponent_AffiliationBase.SetAwarenessPropagationIsBasedOnAlertLevel
struct UFortAthenaAISpawnerDataComponent_AffiliationBase_SetAwarenessPropagationIsBasedOnAlertLevel_Params
{
public:
	bool                                         bInAwarenessPropagationIsBasedOnAlertLevel;        // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerDataComponent_AffiliationBase.GetFullTeamAwarenessPropagation
struct UFortAthenaAISpawnerDataComponent_AffiliationBase_GetFullTeamAwarenessPropagation_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerDataComponent_AffiliationBase.GetFullTeamAwarenessMaxDistance
struct UFortAthenaAISpawnerDataComponent_AffiliationBase_GetFullTeamAwarenessMaxDistance_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerDataComponent_AffiliationBase.GetFactionTag
struct UFortAthenaAISpawnerDataComponent_AffiliationBase_GetFactionTag_Params
{
public:
	struct FGameplayTagContainer                 ReturnValue;                                       // 0x0(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerDataComponent_AffiliationBase.GetAwarenessPropagationIsBasedOnAlertLevel
struct UFortAthenaAISpawnerDataComponent_AffiliationBase_GetAwarenessPropagationIsBasedOnAlertLevel_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotAffiliation.SetOverrideTeamIndex
struct UFortAthenaAISpawnerDataComponent_AIBotAffiliation_SetOverrideTeamIndex_Params
{
public:
	int32                                        InOverrideTeamIdx;                                 // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotAffiliation.GetTeamID
struct UFortAthenaAISpawnerDataComponent_AIBotAffiliation_GetTeamID_Params
{
public:
	int32                                        OutTeamId;                                         // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B6E[0x3];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotAffiliation.GetSquadID
struct UFortAthenaAISpawnerDataComponent_AIBotAffiliation_GetSquadID_Params
{
public:
	int32                                        OutSquadId;                                        // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B6F[0x3];                                     // Fixing Size Of Struct..
};

// 0x2 (0x2 - 0x0)
// Function FortniteAI.FortAthenaAIRuntimeParameters_BehaviorTreeControl.IsBehaviorTreeBranchActive
struct UFortAthenaAIRuntimeParameters_BehaviorTreeControl_IsBehaviorTreeBranchActive_Params
{
public:
	enum class EBehaviorTreeBranches             Behavior;                                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortAthenaAIRuntimeParameters_BehaviorTreeControl.EnableBehaviorTreeBranch
struct UFortAthenaAIRuntimeParameters_BehaviorTreeControl_EnableBehaviorTreeBranch_Params
{
public:
	enum class EBehaviorTreeBranches             Behavior;                                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortAthenaAIRuntimeParameters_BehaviorTreeControl.DisableBehaviorTreeBranch
struct UFortAthenaAIRuntimeParameters_BehaviorTreeControl_DisableBehaviorTreeBranch_Params
{
public:
	enum class EBehaviorTreeBranches             Behavior;                                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotBehavior.IsBehaviorTreeBranchActive
struct UFortAthenaAISpawnerDataComponent_AIBotBehavior_IsBehaviorTreeBranchActive_Params
{
public:
	enum class EBehaviorTreeBranches             Behavior;                                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotBehavior.EnableBehaviorTreeBranch
struct UFortAthenaAISpawnerDataComponent_AIBotBehavior_EnableBehaviorTreeBranch_Params
{
public:
	enum class EBehaviorTreeBranches             Behavior;                                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotBehavior.DisableBehaviorTreeBranch
struct UFortAthenaAISpawnerDataComponent_AIBotBehavior_DisableBehaviorTreeBranch_Params
{
public:
	enum class EBehaviorTreeBranches             Behavior;                                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerDataComponent_CosmeticBase.GetFallbackTag
struct UFortAthenaAISpawnerDataComponent_CosmeticBase_GetFallbackTag_Params
{
public:
	struct FGameplayTag                          OutFallbackTag;                                    // 0x0(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x178 (0x178 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotCosmeticBase.GetLoadout
struct UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase_GetLoadout_Params
{
public:
	struct FFortAthenaLoadout                    OutLoadout;                                        // 0x0(0x178)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotCosmeticBase.GetDances
struct UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase_GetDances_Params
{
public:
	TArray<class UAthenaDanceItemDefinition*>    Dances;                                            // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UFortAthenaAIBotController*            BotController;                                     // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotCosmeticBase.GetCustomCharacterParts
struct UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase_GetCustomCharacterParts_Params
{
public:
	TArray<class UCustomCharacterPart*>          OutCustomCharacterParts;                           // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotCosmeticBase.GetAnimBPOverride
struct UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase_GetAnimBPOverride_Params
{
public:
	TSubclassOf<class UAnimInstance>             OutAnimBPOverride;                                 // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutPriority;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B82[0x4];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotCosmeticBase.GetAllLoadouts
struct UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase_GetAllLoadouts_Params
{
public:
	TArray<struct FFortAthenaLoadout>            OutLoadouts;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotCosmeticBase.AddCosmeticOverrideItemDef
struct UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase_AddCosmeticOverrideItemDef_Params
{
public:
	class UAthenaCosmeticItemDefinition*         InCosmeticItemToPreview;                           // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortAthenaAIRuntimeParameters_AIConvert.SetForceKillWhenUnconverted
struct UFortAthenaAIRuntimeParameters_AIConvert_SetForceKillWhenUnconverted_Params
{
public:
	bool                                         bInForceKillWhenUnconverted;                       // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortAthenaAIRuntimeParameters_AIConvert.SetForceKillWhenConverterDies
struct UFortAthenaAIRuntimeParameters_AIConvert_SetForceKillWhenConverterDies_Params
{
public:
	bool                                         bInForceKillWhenConverterDies;                     // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortAthenaAIRuntimeParameters_AIConvert.SetCanBeConvertedFromDBNO
struct UFortAthenaAIRuntimeParameters_AIConvert_SetCanBeConvertedFromDBNO_Params
{
public:
	bool                                         bInCanBeConvertedFromDBNO;                         // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortAthenaAIRuntimeParameters_AIConvert.SetCanBeConverted
struct UFortAthenaAIRuntimeParameters_AIConvert_SetCanBeConverted_Params
{
public:
	bool                                         bInCanBeConverted;                                 // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortAthenaAIRuntimeParameters_AIConvert.GetPickupTagConvertInfos
struct UFortAthenaAIRuntimeParameters_AIConvert_GetPickupTagConvertInfos_Params
{
public:
	TArray<struct FPickupTagConvertInfo>         ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortAthenaAIRuntimeParameters_AIConvert.GetForceKillWhenUnconverted
struct UFortAthenaAIRuntimeParameters_AIConvert_GetForceKillWhenUnconverted_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortAthenaAIRuntimeParameters_AIConvert.GetForceKillWhenConverterDies
struct UFortAthenaAIRuntimeParameters_AIConvert_GetForceKillWhenConverterDies_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortAthenaAIRuntimeParameters_AIConvert.GetCanBeConvertedFromDBNO
struct UFortAthenaAIRuntimeParameters_AIConvert_GetCanBeConvertedFromDBNO_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortAthenaAIRuntimeParameters_AIConvert.GetCanBeConverted
struct UFortAthenaAIRuntimeParameters_AIConvert_GetCanBeConverted_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerDataComponent_GameplayBase.ShouldOverrideGlobalSpeedMultiplier
struct UFortAthenaAISpawnerDataComponent_GameplayBase_ShouldOverrideGlobalSpeedMultiplier_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerDataComponent_GameplayBase.SetCopyConverterSpecificRelations
struct UFortAthenaAISpawnerDataComponent_GameplayBase_SetCopyConverterSpecificRelations_Params
{
public:
	bool                                         bInCopyConverterSpecificRelations;                 // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerDataComponent_GameplayBase.SetCanBeConverted
struct UFortAthenaAISpawnerDataComponent_GameplayBase_SetCanBeConverted_Params
{
public:
	bool                                         bInCanBeConverted;                                 // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerDataComponent_GameplayBase.PostOnSpawnedBP
struct UFortAthenaAISpawnerDataComponent_GameplayBase_PostOnSpawnedBP_Params
{
public:
	class UPawn*                                 PawnAI;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerDataComponent_GameplayBase.GetGlobalSpeedMultiplier
struct UFortAthenaAISpawnerDataComponent_GameplayBase_GetGlobalSpeedMultiplier_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotGameplay.SetNameSettings
struct UFortAthenaAISpawnerDataComponent_AIBotGameplay_SetNameSettings_Params
{
public:
	enum class EBotNamingMode                    InNamingMode;                                      // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B92[0x7];                                     // Fixing Size After Last Property..
	class FString                                InName;                                            // 0x8(0x10)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInAddPlayerIDSuffix;                              // 0x18(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B93[0x7];                                     // Fixing Size Of Struct..
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotGameplay.SetLeashOuterRadius
struct UFortAthenaAISpawnerDataComponent_AIBotGameplay_SetLeashOuterRadius_Params
{
public:
	float                                        InLeashOuterRadius;                                // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotGameplay.SetLeashLocation
struct UFortAthenaAISpawnerDataComponent_AIBotGameplay_SetLeashLocation_Params
{
public:
	struct FVector                               InLeashLocation;                                   // 0x0(0x18)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotGameplay.SetLeashInnerRadius
struct UFortAthenaAISpawnerDataComponent_AIBotGameplay_SetLeashInnerRadius_Params
{
public:
	float                                        InLeashInnerRadius;                                // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotGameplay.SetAssociatedPatrolPath
struct UFortAthenaAISpawnerDataComponent_AIBotGameplay_SetAssociatedPatrolPath_Params
{
public:
	class UFortAthenaPatrolPath*                 InAssociatedPatrolPath;                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerDataComponent_GameplayAbilityBase.SetLooseTagsToApplyToPawn
struct UFortAthenaAISpawnerDataComponent_GameplayAbilityBase_SetLooseTagsToApplyToPawn_Params
{
public:
	struct FGameplayTagContainer                 InGameplayTagContainer;                            // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerDataComponent_GameplayAbilityBase.GetLooseTagsToApplyToPawn
struct UFortAthenaAISpawnerDataComponent_GameplayAbilityBase_GetLooseTagsToApplyToPawn_Params
{
public:
	struct FGameplayTagContainer                 ReturnValue;                                       // 0x0(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerDataComponent_GameplayAbilityBase.GetInitialGameplayEffects
struct UFortAthenaAISpawnerDataComponent_GameplayAbilityBase_GetInitialGameplayEffects_Params
{
public:
	TArray<struct FInitialGameplayEffectInfo>    OutGEs;                                            // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerDataComponent_GameplayAbilityBase.GetInitialGameplayAbilities
struct UFortAthenaAISpawnerDataComponent_GameplayAbilityBase_GetInitialGameplayAbilities_Params
{
public:
	TArray<class UFortAbilitySet*>               OutGASets;                                         // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerDataComponent_InventoryBase.SetInventoryItems
struct UFortAthenaAISpawnerDataComponent_InventoryBase_SetInventoryItems_Params
{
public:
	TArray<struct FItemAndCount>                 InItems;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerDataComponent_InventoryBase.GetInventoryItems
struct UFortAthenaAISpawnerDataComponent_InventoryBase_GetInventoryItems_Params
{
public:
	TArray<struct FItemAndCount>                 OutList;                                           // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function FortniteAI.FortAthenaAISpawnerDataComponent_PerceptionBase.SetVisibilityRange
struct UFortAthenaAISpawnerDataComponent_PerceptionBase_SetVisibilityRange_Params
{
public:
	float                                        InSightRadius;                                     // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LoseSightRadius;                                   // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInRestrictOverrideToUnaware;                      // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B9C[0x3];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerDataComponent_SkillsetBase.ShouldUseMatchMMRToOverrideSkillLevel
struct UFortAthenaAISpawnerDataComponent_SkillsetBase_ShouldUseMatchMMRToOverrideSkillLevel_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerDataComponent_SkillsetBase.GetSkillSets
struct UFortAthenaAISpawnerDataComponent_SkillsetBase_GetSkillSets_Params
{
public:
	TArray<TSubclassOf<class UFortAthenaAIBotSkillSet>> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerDataComponent_SkillsetBase.GetSkill
struct UFortAthenaAISpawnerDataComponent_SkillsetBase_GetSkill_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotSkillset.SetSkill
struct UFortAthenaAISpawnerDataComponent_AIBotSkillset_SetSkill_Params
{
public:
	float                                        InSKill;                                           // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerDataComponent_CosmeticLibrary.GetAICosmeticLibraryDataIndex
struct UFortAthenaAISpawnerDataComponent_CosmeticLibrary_GetAICosmeticLibraryDataIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerDataComponent_CosmeticLibrary.GetAICosmeticLibraryData
struct UFortAthenaAISpawnerDataComponent_CosmeticLibrary_GetAICosmeticLibraryData_Params
{
public:
	class UFortAthenaAIBotCosmeticLibraryData*   ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerDataComponent_SpawnParamsBase.ShouldSpawnInAir
struct UFortAthenaAISpawnerDataComponent_SpawnParamsBase_ShouldSpawnInAir_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerDataComponent_SpawnParamsBase.ShouldCheckForOverlaps
struct UFortAthenaAISpawnerDataComponent_SpawnParamsBase_ShouldCheckForOverlaps_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerDataComponent_SpawnParamsBase.GetSpawnTracePadding
struct UFortAthenaAISpawnerDataComponent_SpawnParamsBase_GetSpawnTracePadding_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerDataComponent_SpawnParamsBase.GetSpawnerDataSpawnedAsChildren
struct UFortAthenaAISpawnerDataComponent_SpawnParamsBase_GetSpawnerDataSpawnedAsChildren_Params
{
public:
	TArray<TSubclassOf<class UFortAthenaAISpawnerData>> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerDataComponent_SpawnParamsBase.GetPawnStatHandle
struct UFortAthenaAISpawnerDataComponent_SpawnParamsBase_GetPawnStatHandle_Params
{
public:
	struct FDataTableRowHandle                   ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerDataComponent_SpawnParamsBase.GetPawnClass
struct UFortAthenaAISpawnerDataComponent_SpawnParamsBase_GetPawnClass_Params
{
public:
	TSubclassOf<class UPawn>                     ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerDataComponent_SpawnParamsBase.GetInAirSpawnTraceStartHeight
struct UFortAthenaAISpawnerDataComponent_SpawnParamsBase_GetInAirSpawnTraceStartHeight_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerDataComponent_SpawnParamsBase.GetInAirSpawnTraceSphereRadius
struct UFortAthenaAISpawnerDataComponent_SpawnParamsBase_GetInAirSpawnTraceSphereRadius_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerDataComponent_SpawnParamsBase.GetInAirSpawnTraceEndHeight
struct UFortAthenaAISpawnerDataComponent_SpawnParamsBase_GetInAirSpawnTraceEndHeight_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAthenaAISpawnerDataComponent_SpawnParamsBase.GetAIControllerClass
struct UFortAthenaAISpawnerDataComponent_SpawnParamsBase_GetAIControllerClass_Params
{
public:
	TSubclassOf<class UAIController>             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.FortAthenaLeashComponent.SetLeashRadius
struct UFortAthenaLeashComponent_SetLeashRadius_Params
{
public:
	float                                        NewRadius;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteAI.FortAthenaLeashComponent.IsInsideLeash
struct UFortAthenaLeashComponent_IsInsideLeash_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BB7[0x7];                                     // Fixing Size Of Struct..
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.FortAthenaLeashComponent.GetLeashRadius
struct UFortAthenaLeashComponent_GetLeashRadius_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteAI.FortAthenaLeashComponent.GetLeashCenter
struct UFortAthenaLeashComponent_GetLeashCenter_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAthenaLocalGameplayBehavior.OnExecute
struct UFortAthenaLocalGameplayBehavior_OnExecute_Params
{
public:
	class UActor*                                Activator;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortAthenaLocalGameplayBehavior.OnAbort
struct UFortAthenaLocalGameplayBehavior_OnAbort_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortAthenaLocalGameplayBehavior.FinishExecute
struct UFortAthenaLocalGameplayBehavior_FinishExecute_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortAthenaNpcGalileoComponent.SetPatrolPath
struct UFortAthenaNpcGalileoComponent_SetPatrolPath_Params
{
public:
	TArray<struct FVector>                       NewPatrolPath;                                     // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortAthenaNpcGalileoComponent.SetCommunicationGroup
struct UFortAthenaNpcGalileoComponent_SetCommunicationGroup_Params
{
public:
	TArray<class UFortAthenaAIBotController*>    AIBotControllerList;                               // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function FortniteAI.FortAthenaNpcGalileoComponent.OnPawnDied
struct UFortAthenaNpcGalileoComponent_OnPawnDied_Params
{
public:
	class UActor*                                DamagedActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BBA[0x4];                                     // Fixing Size After Last Property..
	class UController*                           InstigatedBy;                                      // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                DamageCauser;                                      // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitLocation;                                       // 0x20(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   FHitComponent;                                     // 0x38(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x40(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BBB[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               Momentum;                                          // 0x48(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortAthenaNpcGalileoComponent.GetPatrolPath
struct UFortAthenaNpcGalileoComponent_GetPatrolPath_Params
{
public:
	TArray<struct FVector>                       ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortAthenaNpcGalileoComponent.GetCommunicationGroup
struct UFortAthenaNpcGalileoComponent_GetCommunicationGroup_Params
{
public:
	TArray<class UFortAthenaAIBotController*>    ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortAthenaNpcPatrollingComponent.UpdateCurrentDestinationToNearestNextPoint
struct UFortAthenaNpcPatrollingComponent_UpdateCurrentDestinationToNearestNextPoint_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortAthenaNpcPatrollingComponent.SetPatrolPath
struct UFortAthenaNpcPatrollingComponent_SetPatrolPath_Params
{
public:
	class UFortAthenaPatrolPath*                 NewPatrolPath;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOrientationAlreadyRandomized;                     // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BBD[0x7];                                     // Fixing Size Of Struct..
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortAthenaNpcPatrollingComponent.SelectNextPatrolPoint
struct UFortAthenaNpcPatrollingComponent_SelectNextPatrolPoint_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortAthenaNpcPatrollingComponent.RemovePatrolPath
struct UFortAthenaNpcPatrollingComponent_RemovePatrolPath_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortAthenaNpcPatrollingComponent.OnPatrolPathStatusChanged
struct UFortAthenaNpcPatrollingComponent_OnPatrolPathStatusChanged_Params
{
public:
	bool                                         bEnableState;                                      // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortAthenaNpcPatrollingComponent.IsPatrollingEnable
struct UFortAthenaNpcPatrollingComponent_IsPatrollingEnable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.FortAthenaNpcPatrollingComponent.IsCurrentPatrolPointAnEndPoint
struct UFortAthenaNpcPatrollingComponent_IsCurrentPatrolPointAnEndPoint_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.FortAthenaNpcPatrollingComponent.GetPatrolPointsCount
struct UFortAthenaNpcPatrollingComponent_GetPatrolPointsCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAthenaNpcPatrollingComponent.GetPatrolPath
struct UFortAthenaNpcPatrollingComponent_GetPatrolPath_Params
{
public:
	class UFortAthenaPatrolPath*                 ReturnValue;                                       // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.FortAthenaNpcPatrollingComponent.GetCurrentPatrolPoint
struct UFortAthenaNpcPatrollingComponent_GetCurrentPatrolPoint_Params
{
public:
	class UFortAthenaPatrolPoint*                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// Function FortniteAI.FortAthenaNpcPatrollingComponent.FindAndSetDynamicPatrolPath
struct UFortAthenaNpcPatrollingComponent_FindAndSetDynamicPatrolPath_Params
{
public:
	struct FFortAthenaAIObjectTrackerQuery       FindQuery;                                         // 0x0(0x98)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bOrientationAlreadyRandomized;                     // 0x98(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExcludeCurrentlyUsedPatrolPath;                   // 0x99(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9A(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BBE[0x5];                                     // Fixing Size Of Struct..
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.AthenaAIPerceptionStimuliSourceComponent.OnOwnerTeamIndexChanged
struct UAthenaAIPerceptionStimuliSourceComponent_OnOwnerTeamIndexChanged_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortCollisionResponseSwapperComponent.UnregisterCallbacksForOverlap
struct UFortCollisionResponseSwapperComponent_UnregisterCallbacksForOverlap_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.FortCollisionResponseSwapperComponent.RestoreCollisionResponses
struct UFortCollisionResponseSwapperComponent_RestoreCollisionResponses_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.FortCollisionResponseSwapperComponent.RegisterCallbacksForOverlap
struct UFortCollisionResponseSwapperComponent_RegisterCallbacksForOverlap_Params
{
public:
	class UPrimitiveComponent*                   InCollisionPrimitiveComponent;                     // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   InOverlapPrimitiveComponent;                       // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteAI.FortCollisionResponseSwapperComponent.HandleEndOverlap
struct UFortCollisionResponseSwapperComponent_HandleEndOverlap_Params
{
public:
	class UPrimitiveComponent*                   OverlappedComponent;                               // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                OtherActor;                                        // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OtherBodyIndex;                                    // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BC4[0x4];                                     // Fixing Size Of Struct..
};

// 0x100 (0x100 - 0x0)
// Function FortniteAI.FortCollisionResponseSwapperComponent.HandleBeginOverlap
struct UFortCollisionResponseSwapperComponent_HandleBeginOverlap_Params
{
public:
	class UPrimitiveComponent*                   OverlappedComponent;                               // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                OtherActor;                                        // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OtherBodyIndex;                                    // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFromSweep;                                        // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BC5[0x3];                                     // Fixing Size After Last Property..
	struct FHitResult                            SweepResult;                                       // 0x20(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function FortniteAI.AthenaAIPopulationTracker.OnFortPawnDied
struct UAthenaAIPopulationTracker_OnFortPawnDied_Params
{
public:
	class UActor*                                DamagedActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BCA[0x4];                                     // Fixing Size After Last Property..
	class UController*                           InstigatedBy;                                      // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                DamageCauser;                                      // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitLocation;                                       // 0x20(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   FHitComponent;                                     // 0x38(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x40(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BCB[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               Momentum;                                          // 0x48(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.AthenaAIPopulationTracker.OnFortPawnDestroyed
struct UAthenaAIPopulationTracker_OnFortPawnDestroyed_Params
{
public:
	class UActor*                                DestroyedActor;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.AthenaAIPopulationTracker.OnAISpawned
struct UAthenaAIPopulationTracker_OnAISpawned_Params
{
public:
	class UPawn*                                 Pawn;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequestID;                                         // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BCC[0x4];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function FortniteAI.AthenaAIPopulationTracker.OnAgentGameOver
struct UAthenaAIPopulationTracker_OnAgentGameOver_Params
{
public:
	class UFortAthenaAIBotController*            AIBotController;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortPawn*                             Pawn;                                              // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UController*                           Instigator;                                        // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.AthenaAIPopulationTracker.GetNumTotalBots
struct UAthenaAIPopulationTracker_GetNumTotalBots_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.AthenaAIPopulationTracker.GetNumPlayerBots
struct UAthenaAIPopulationTracker_GetNumPlayerBots_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.AthenaAIPopulationTracker.GetNumNonAthenaParticipantBots
struct UAthenaAIPopulationTracker_GetNumNonAthenaParticipantBots_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteAI.AthenaAIPopulationTracker.GetNumAIPawn
struct UAthenaAIPopulationTracker_GetNumAIPawn_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function FortniteAI.AthenaAIPopulationTracker.GetAIPopulationTrackerCount
struct UAthenaAIPopulationTracker_GetAIPopulationTrackerCount_Params
{
public:
	struct FAIPopulationCountSnapshot            ReturnValue;                                       // 0x0(0x14)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function FortniteAI.AthenaAIPopulationTracker.GetAIMatchingQuery
struct UAthenaAIPopulationTracker_GetAIMatchingQuery_Params
{
public:
	struct FGameplayTagQuery                     TagQuery;                                          // 0x0(0x48)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class UController*>                   ReturnValue;                                       // 0x48(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.AthenaAIServiceCover.GetAthenaAIServiceCover
struct UAthenaAIServiceCover_GetAthenaAIServiceCover_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAthenaAIServiceCover*                 ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function FortniteAI.AthenaAIServicePlayerBots.SpawnAI
struct UAthenaAIServicePlayerBots_SpawnAI_Params
{
public:
	struct FVector                               InSpawnLocation;                                   // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              InSpawnRotation;                                   // 0x18(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UFortAthenaAISpawnerDataComponentList* AISpawnerComponentList;                            // 0x30(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPawn*                                 ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.AthenaAIServicePlayerBots.OnServerGameMemberRemoved
struct UAthenaAIServicePlayerBots_OnServerGameMemberRemoved_Params
{
public:
	uint8                                        InSquadId;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        InTeamIndex;                                       // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BD2[0x6];                                     // Fixing Size After Last Property..
	class UFortPlayerStateAthena*                ChangedPS;                                         // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.AthenaAIServicePlayerBots.OnSafeZoneUpdated
struct UAthenaAIServicePlayerBots_OnSafeZoneUpdated_Params
{
public:
	struct FFortSafeZonePhaseUpdatedEvent        Event;                                             // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function FortniteAI.AthenaAIServicePlayerBots.OnPlaylistDataReady
struct UAthenaAIServicePlayerBots_OnPlaylistDataReady_Params
{
public:
	class UFortGameStateAthena*                  GameState;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortPlaylist*                         Playlist;                                          // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 PlaylistContextTags;                               // 0x10(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.AthenaAIServicePlayerBots.OnGamePhaseLogicReady
struct UAthenaAIServicePlayerBots_OnGamePhaseLogicReady_Params
{
public:
	struct FFortBattleRoyaleGamePhaseLogicComponentReadyEvent Event;                                             // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.AthenaAIServicePlayerBots.OnGamePhaseChanged
struct UAthenaAIServicePlayerBots_OnGamePhaseChanged_Params
{
public:
	struct FFortGamePhaseUpdatedEvent            Event;                                             // 0x0(0x1)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteAI.AthenaAIServicePlayerBots.OnAIPawnSpawned
struct UAthenaAIServicePlayerBots_OnAIPawnSpawned_Params
{
public:
	class UController*                           SpawnedController;                                 // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsABot;                                           // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BD3[0x7];                                     // Fixing Size After Last Property..
	class UFortPawn*                             FortAIPawn;                                        // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortPlayerPawn*                       PlayerPawn;                                        // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteAI.AthenaAIServicePlayerBots.OnAgentGameOver
struct UAthenaAIServicePlayerBots_OnAgentGameOver_Params
{
public:
	class UFortAthenaAIBotController*            AIBotController;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortPawn*                             Pawn;                                              // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UController*                           Instigator;                                        // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.AthenaAIServicePlayerBots.KillBots
struct UAthenaAIServicePlayerBots_KillBots_Params
{
public:
	bool                                         bKillPlayers;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bKillNPCs;                                         // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        TeamIndex;                                         // 0x2(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BD4[0x5];                                     // Fixing Size After Last Property..
	class UActor*                                BotOwner;                                          // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.AthenaAIServicePlayerBots.JoinTeam
struct UAthenaAIServicePlayerBots_JoinTeam_Params
{
public:
	class UController*                           SourceTeamController;                              // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UController*                           DestinationTeamController;                         // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.AthenaAIServicePlayerBots.IsWeaponSupported
struct UAthenaAIServicePlayerBots_IsWeaponSupported_Params
{
public:
	class UFortWeapon*                           FortWeapon;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BD5[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.AthenaAIServicePlayerBots.FetchNextCustomBotCosmeticVariantID
struct UAthenaAIServicePlayerBots_FetchNextCustomBotCosmeticVariantID_Params
{
public:
	class UFortPlayerPawnAthena*                 BotPawn;                                           // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BD6[0x4];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.AthenaAIServicePlayerBots.AddPOIVolume
struct UAthenaAIServicePlayerBots_AddPOIVolume_Params
{
public:
	class UFortPoiVolume*                        POIVolume;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAthenaAIServicePOIList           POIList;                                           // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BD7[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.AthenaAIServiceCreativePlayerBots.OnMinigameStateChanged
struct UAthenaAIServiceCreativePlayerBots_OnMinigameStateChanged_Params
{
public:
	class UFortMinigame*                         Minigame;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortMinigameState                MinigameState;                                     // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BF0[0x7];                                     // Fixing Size Of Struct..
};

// 0x38 (0x38 - 0x0)
// Function FortniteAI.AthenaAIServiceCreativePlayerBots.OnFinishedAddingMinigamePlayer
struct UAthenaAIServiceCreativePlayerBots_OnFinishedAddingMinigamePlayer_Params
{
public:
	struct FUniqueNetIdRepl                      UniqueNetId;                                       // 0x0(0x30)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsLocalPlayer;                                    // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BF1[0x7];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// Function FortniteAI.AthenaAIServiceCreativePlayerBots.IsMinigameBotSpawningRequired
struct UAthenaAIServiceCreativePlayerBots_IsMinigameBotSpawningRequired_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.AthenaAIServiceCreativePlayerBots.GetLastHiringPlayer
struct UAthenaAIServiceCreativePlayerBots_GetLastHiringPlayer_Params
{
public:
	class UActor*                                HiredOwner;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayerController*                     ReturnValue;                                       // 0x8(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.AthenaAIServiceCreativePlayerBots.ClearHiringHistory
struct UAthenaAIServiceCreativePlayerBots_ClearHiringHistory_Params
{
public:
	class UActor*                                HiredOwner;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.AthenaAIServiceCreativePlayerBots.AddHiringHistory
struct UAthenaAIServiceCreativePlayerBots_AddHiringHistory_Params
{
public:
	class UActor*                                HiredOwner;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayerController*                     HiringPlayer;                                      // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.AthenaAIServiceLoot.UpdateSupplyDropStatus
struct UAthenaAIServiceLoot_UpdateSupplyDropStatus_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.AthenaAIServiceLoot.UpdateMovingLoots
struct UAthenaAIServiceLoot_UpdateMovingLoots_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function FortniteAI.AthenaAIServiceLoot.OnGamePhaseStepChanged
struct UAthenaAIServiceLoot_OnGamePhaseStepChanged_Params
{
public:
	FInterfaceProperty_                          SafeZoneInterface;                                 // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAthenaGamePhaseStep              GamePhaseStep;                                     // 0x10(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BF5[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.AthenaAIServiceLoot.K2_RemoveGameplayTagFromLoot
struct UAthenaAIServiceLoot_K2_RemoveGameplayTagFromLoot_Params
{
public:
	class UActor*                                LootActor;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          GameplayTag;                                       // 0x8(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BF6[0x4];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.AthenaAIServiceLoot.K2_AddGameplayTagToLoot
struct UAthenaAIServiceLoot_K2_AddGameplayTagToLoot_Params
{
public:
	class UActor*                                LootActor;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          GameplayTag;                                       // 0x8(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BF7[0x4];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.AthenaAIServiceZoneManager.UnregisterOccluder
struct UAthenaAIServiceZoneManager_UnregisterOccluder_Params
{
public:
	class UActor*                                OccluderActor;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.AthenaAIServiceZoneManager.UnregisterDangerZone
struct UAthenaAIServiceZoneManager_UnregisterDangerZone_Params
{
public:
	class UActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.AthenaAIServiceZoneManager.RegisterOccluder
struct UAthenaAIServiceZoneManager_RegisterOccluder_Params
{
public:
	class UActor*                                OccluderActor;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SphereRadius;                                      // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C01[0x4];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.AthenaAIServiceZoneManager.RegisterDangerZone
struct UAthenaAIServiceZoneManager_RegisterDangerZone_Params
{
public:
	class UActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C02[0x4];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.AthenaAIServiceZoneManager.OnZoneDestroyed
struct UAthenaAIServiceZoneManager_OnZoneDestroyed_Params
{
public:
	class UActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function FortniteAI.AthenaAIServiceZoneManager.IsLOFOccluded
struct UAthenaAIServiceZoneManager_IsLOFOccluded_Params
{
public:
	struct FVector                               StartLocation;                                     // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               EndLocation;                                       // 0x18(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C03[0x7];                                     // Fixing Size Of Struct..
};

// 0x20 (0x20 - 0x0)
// Function FortniteAI.AthenaAIServiceZoneManager.IsInDangerZone
struct UAthenaAIServiceZoneManager_IsInDangerZone_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C04[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.AthenaAIServiceZoneManager.GetAthenaAIServiceZoneManager
struct UAthenaAIServiceZoneManager_GetAthenaAIServiceZoneManager_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAthenaAIServiceZoneManager*           ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function FortniteAI.AthenaAISpawner.RequestSpawn
struct UAthenaAISpawner_RequestSpawn_Params
{
public:
	class UFortAthenaAISpawnerDataComponentList* AISpawnerComponentList;                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C05[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            SpawnTransform;                                    // 0x10(0x60)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUrgentRequest;                                    // 0x70(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C06[0x3];                                     // Fixing Size After Last Property..
	int32                                        ReturnValue;                                       // 0x74(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C07[0x8];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.AthenaAISpawner.QueueForDespawn
struct UAthenaAISpawner_QueueForDespawn_Params
{
public:
	class UActor*                                ActorToDespawn;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.AthenaAISpawner.CancelRequest
struct UAthenaAISpawner_CancelRequest_Params
{
public:
	int32                                        RequestID;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C08[0x3];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function FortniteAI.DespawnExpiredPawnComponent.GetDespawnRifts
struct UDespawnExpiredPawnComponent_GetDespawnRifts_Params
{
public:
	TArray<class UBuildingRift*>                 ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function FortniteAI.DespawnExpiredPawnComponent.DespawnExpired
struct UDespawnExpiredPawnComponent_DespawnExpired_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function FortniteAI.DespawnExpiredPawnComponent.AddDespawnRift
struct UDespawnExpiredPawnComponent_AddDespawnRift_Params
{
public:
	class UBuildingRift*                         NewRift;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
