#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x160 - 0x118)
// Class FortniteAI.FortAITask_Move
class UFortAITask_Move : public UAITask_MoveTo
{
public:
	struct FFortMoveConfig                       MoveConfig;                                        // 0x118(0x38)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_2BA9[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAITask_Move* GetDefaultObj();

};

// 0xA0 (0x230 - 0x190)
// Class FortniteAI.FortNavModifierComponent
class UFortNavModifierComponent : public UNavModifierComponent
{
public:
	float                                        LowSpeedSquareThreshold;                           // 0x190(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LowSpeedSquareDistanceThreshold;                   // 0x194(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LowSpeedRotationThreshold;                         // 0x198(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LowSpeedScaleThreshold;                            // 0x19C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bAutomaticNavBoundComputation : 1;                 // Mask: 0x1, PropSize: 0x10x1A0(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bForceFailSafeExtent : 1;                          // Mask: 0x2, PropSize: 0x10x1A0(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_1A6 : 6;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_2BAA[0x3];                                     // Fixing Size After Last Property 
	float                                        ExtrapolationMultiplierForFailsafeExtent;          // 0x1A4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<TSubclassOf<class UNavigationData>>   DisableForNavmeshClasses;                          // 0x1A8(0x10)(Edit, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	class UPrimitiveComponent*                   PrimCompAffectingNavMesh;                          // 0x1B8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2BAB[0x70];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortNavModifierComponent* GetDefaultObj();

	void SetComponentAffectingNavMesh(class UPrimitiveComponent* InComponentAffectingNavMesh);
};

// 0x10 (0x240 - 0x230)
// Class FortniteAI.FortPhysicsObjectNavigationComponent
class UFortPhysicsObjectNavigationComponent : public UFortNavModifierComponent
{
public:
	class UFortPhysicsObjectComponent*           PhysicsObjectComponent;                            // 0x230(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2BAF[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortPhysicsObjectNavigationComponent* GetDefaultObj();

	void OnSleepStateChanged(class UPrimitiveComponent* SimulatingComponent, bool bIsAwake);
};

// 0x0 (0x28 - 0x28)
// Class FortniteAI.FortAIAimingInterface
class UFortAIAimingInterface : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UFortAIAimingInterface* GetDefaultObj();

	void GetAimingRotation(struct FRotator* OutRotation);
};

// 0x0 (0x28 - 0x28)
// Class FortniteAI.FortAIAimingManagerInterface
class UFortAIAimingManagerInterface : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UFortAIAimingManagerInterface* GetDefaultObj();

	void ComputeAimingRotations();
};

// 0x0 (0x28 - 0x28)
// Class FortniteAI.FortAIEnvironmentalDangerSourceInterface
class UFortAIEnvironmentalDangerSourceInterface : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UFortAIEnvironmentalDangerSourceInterface* GetDefaultObj();

	struct FBox GetDangerSourceBounds();
	bool GetDangerSourceActive();
	float GetDangerAtLocation(struct FVector& Location);
};

// 0x50 (0xF0 - 0xA0)
// Class FortniteAI.FortAIInjectedBehaviorComponent
class UFortAIInjectedBehaviorComponent : public UActorComponent
{
public:
	uint8                                        Pad_2BB2[0x50];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAIInjectedBehaviorComponent* GetDefaultObj();

};

// 0x0 (0x130 - 0x130)
// Class FortniteAI.FortAIPerceptionSystem
class UFortAIPerceptionSystem : public UAIPerceptionSystem
{
public:

	static class UClass* StaticClass();
	static class UFortAIPerceptionSystem* GetDefaultObj();

};

// 0x260 (0x288 - 0x28)
// Class FortniteAI.FortAthenaAIBotCharacterCustomization
class UFortAthenaAIBotCharacterCustomization : public UObject
{
public:
	struct FFortAthenaLoadout                    CustomizationLoadout;                              // 0x28(0x260)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortAthenaAIBotCharacterCustomization* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class FortniteAI.FortAthenaAIBotInventoryItems
class UFortAthenaAIBotInventoryItems : public UObject
{
public:
	TArray<struct FItemAndCount>                 Items;                                             // 0x28(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortAthenaAIBotInventoryItems* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class FortniteAI.FortAthenaAIControllerInterface
class UFortAthenaAIControllerInterface : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UFortAthenaAIControllerInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class FortniteAI.FortAthenaAILODSettings
class UFortAthenaAILODSettings : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UFortAthenaAILODSettings* GetDefaultObj();

};

// 0x288 (0x2B0 - 0x28)
// Class FortniteAI.FortAthenaAILODSettings_AIEvaluator
class UFortAthenaAILODSettings_AIEvaluator : public UObject
{
public:
	uint8                                        Pad_2BB8[0x8];                                     // Fixing Size After Last Property 
	TArray<TSubclassOf<class UFortAthenaAIEvaluator>> SystemClasses;                                     // 0x30(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FFortAILODSetting_AIEvaluator         BelowLowerLODSettings;                             // 0x40(0x68)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FFortAILODSetting_AIEvaluator         LowerLODSettings;                                  // 0xA8(0x68)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FFortAILODSetting_AIEvaluator         AboveLowerLODSettings;                             // 0x110(0x68)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FFortAILODSetting_AIEvaluator         BelowNormalLODSettings;                            // 0x178(0x68)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FFortAILODSetting_AIEvaluator         NormalLODSettings;                                 // 0x1E0(0x68)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FFortAILODSetting_AIEvaluator         AboveNormalLODSettings;                            // 0x248(0x68)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaAILODSettings_AIEvaluator* GetDefaultObj();

};

// 0x948 (0x970 - 0x28)
// Class FortniteAI.FortAthenaAILODSettings_CharacterMovement
class UFortAthenaAILODSettings_CharacterMovement : public UObject
{
public:
	uint8                                        Pad_2BBB[0x8];                                     // Fixing Size After Last Property 
	TArray<TSubclassOf<class UFortMovementComp_Character>> SystemClasses;                                     // 0x30(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FFortAILODSetting_CharacterMovement   BelowLowerLODSettings;                             // 0x40(0x188)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FFortAILODSetting_CharacterMovement   LowerLODSettings;                                  // 0x1C8(0x188)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FFortAILODSetting_CharacterMovement   AboveLowerLODSettings;                             // 0x350(0x188)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FFortAILODSetting_CharacterMovement   BelowNormalLODSettings;                            // 0x4D8(0x188)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FFortAILODSetting_CharacterMovement   NormalLODSettings;                                 // 0x660(0x188)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FFortAILODSetting_CharacterMovement   AboveNormalLODSettings;                            // 0x7E8(0x188)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaAILODSettings_CharacterMovement* GetDefaultObj();

};

// 0x288 (0x2B0 - 0x28)
// Class FortniteAI.FortAthenaAILODSettings_FortWeaponRanged
class UFortAthenaAILODSettings_FortWeaponRanged : public UObject
{
public:
	uint8                                        Pad_2BBC[0x8];                                     // Fixing Size After Last Property 
	TArray<TSubclassOf<class UFortWeaponRanged>> SystemClasses;                                     // 0x30(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FFortAILODSetting_FortWeaponRanged    BelowLowerLODSettings;                             // 0x40(0x68)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FFortAILODSetting_FortWeaponRanged    LowerLODSettings;                                  // 0xA8(0x68)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FFortAILODSetting_FortWeaponRanged    AboveLowerLODSettings;                             // 0x110(0x68)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FFortAILODSetting_FortWeaponRanged    BelowNormalLODSettings;                            // 0x178(0x68)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FFortAILODSetting_FortWeaponRanged    NormalLODSettings;                                 // 0x1E0(0x68)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FFortAILODSetting_FortWeaponRanged    AboveNormalLODSettings;                            // 0x248(0x68)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaAILODSettings_FortWeaponRanged* GetDefaultObj();

};

// 0x168 (0x190 - 0x28)
// Class FortniteAI.FortAthenaAILODSettings_GenericTickingObject
class UFortAthenaAILODSettings_GenericTickingObject : public UObject
{
public:
	uint8                                        Pad_2BBE[0x8];                                     // Fixing Size After Last Property 
	TArray<TSubclassOf<class UObject>>           SystemClasses;                                     // 0x30(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FFortAILODSetting_GenericTickingObject BelowLowerLODSettings;                             // 0x40(0x38)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FFortAILODSetting_GenericTickingObject LowerLODSettings;                                  // 0x78(0x38)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FFortAILODSetting_GenericTickingObject AboveLowerLODSettings;                             // 0xB0(0x38)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FFortAILODSetting_GenericTickingObject BelowNormalLODSettings;                            // 0xE8(0x38)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FFortAILODSetting_GenericTickingObject NormalLODSettings;                                 // 0x120(0x38)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FFortAILODSetting_GenericTickingObject AboveNormalLODSettings;                            // 0x158(0x38)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaAILODSettings_GenericTickingObject* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class FortniteAI.FortAthenaAISpawnerDataComponent
class UFortAthenaAISpawnerDataComponent : public UObject
{
public:
	uint8                                        Pad_2BC0[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaAISpawnerDataComponent* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class FortniteAI.FortAthenaAISpawnerDataComponent_ConstructionBase
class UFortAthenaAISpawnerDataComponent_ConstructionBase : public UFortAthenaAISpawnerDataComponent
{
public:

	static class UClass* StaticClass();
	static class UFortAthenaAISpawnerDataComponent_ConstructionBase* GetDefaultObj();

	bool GetConstructionBuildingInfo(struct FConstructionBuildingList* OutConstructionInfoList);
};

// 0x90 (0xC0 - 0x30)
// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIBotConstruction
class UFortAthenaAISpawnerDataComponent_AIBotConstruction : public UFortAthenaAISpawnerDataComponent_ConstructionBase
{
public:
	struct FConstructionBuildingList             ConstructionBuildingInfoList;                      // 0x30(0x90)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaAISpawnerDataComponent_AIBotConstruction* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class FortniteAI.FortAthenaAISpawnerDataComponent_BehaviorBase
class UFortAthenaAISpawnerDataComponent_BehaviorBase : public UFortAthenaAISpawnerDataComponent
{
public:

	static class UClass* StaticClass();
	static class UFortAthenaAISpawnerDataComponent_BehaviorBase* GetDefaultObj();

	class UBehaviorTree* GetBehaviorTree();
};

// 0x8 (0x38 - 0x30)
// Class FortniteAI.FortAthenaAISpawnerDataComponent_Behavior
class UFortAthenaAISpawnerDataComponent_Behavior : public UFortAthenaAISpawnerDataComponent_BehaviorBase
{
public:
	class UBehaviorTree*                         BehaviorTree;                                      // 0x30(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaAISpawnerDataComponent_Behavior* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class FortniteAI.FortAthenaAISpawnerDataComponent_ChanceEncounterBase
class UFortAthenaAISpawnerDataComponent_ChanceEncounterBase : public UFortAthenaAISpawnerDataComponent
{
public:

	static class UClass* StaticClass();
	static class UFortAthenaAISpawnerDataComponent_ChanceEncounterBase* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class FortniteAI.FortAthenaAISpawnerDataComponent_ConversationBase
class UFortAthenaAISpawnerDataComponent_ConversationBase : public UFortAthenaAISpawnerDataComponent
{
public:

	static class UClass* StaticClass();
	static class UFortAthenaAISpawnerDataComponent_ConversationBase* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class FortniteAI.FortAthenaAISpawnerDataComponent_DebugBase
class UFortAthenaAISpawnerDataComponent_DebugBase : public UFortAthenaAISpawnerDataComponent
{
public:

	static class UClass* StaticClass();
	static class UFortAthenaAISpawnerDataComponent_DebugBase* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class FortniteAI.FortAthenaAISpawnerDataComponent_LODBase
class UFortAthenaAISpawnerDataComponent_LODBase : public UFortAthenaAISpawnerDataComponent
{
public:

	static class UClass* StaticClass();
	static class UFortAthenaAISpawnerDataComponent_LODBase* GetDefaultObj();

	struct FClientAILODSettings GetClientAILODSettings();
	class UFortAthenaAILODSettingsContainer* GetAILODSettingsContainer();
};

// 0x2F8 (0x328 - 0x30)
// Class FortniteAI.FortAthenaAISpawnerDataComponent_LOD
class UFortAthenaAISpawnerDataComponent_LOD : public UFortAthenaAISpawnerDataComponent_LODBase
{
public:
	TSubclassOf<class UFortAthenaAILODSettingsContainer> LODSettings;                                       // 0x30(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FClientAILODSettings                  ClientLODSettings;                                 // 0x38(0x2F0)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortAthenaAISpawnerDataComponent_LOD* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class FortniteAI.FortAthenaAISpawnerDataComponent_VehicleBase
class UFortAthenaAISpawnerDataComponent_VehicleBase : public UFortAthenaAISpawnerDataComponent
{
public:

	static class UClass* StaticClass();
	static class UFortAthenaAISpawnerDataComponent_VehicleBase* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class FortniteAI.FortAthenaAISpawnerDataComponent_VoiceBase
class UFortAthenaAISpawnerDataComponent_VoiceBase : public UFortAthenaAISpawnerDataComponent
{
public:

	static class UClass* StaticClass();
	static class UFortAthenaAISpawnerDataComponent_VoiceBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class FortniteAI.FortAthenaEntitySubsystemInterface
class UFortAthenaEntitySubsystemInterface : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UFortAthenaEntitySubsystemInterface* GetDefaultObj();

};

// 0xD0 (0x118 - 0x48)
// Class FortniteAI.FortAthenaAISpawnerData
class UFortAthenaAISpawnerData : public UFortAthenaSpawnerDataBase
{
public:
	TArray<class UFortAthenaAISpawnerDataComponent*> ClassComponentList;                                // 0x48(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortAthenaAISpawnerDataComponent_InventoryBase> InventoryComponent;                                // 0x58(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortAthenaAISpawnerDataComponent_SpawnParamsBase> SpawnParamsComponent;                              // 0x60(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortAthenaAISpawnerDataComponent_BehaviorBase> BehaviorComponent;                                 // 0x68(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortAthenaAISpawnerDataComponent_AffiliationBase> AffiliationComponent;                              // 0x70(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortAthenaAISpawnerDataComponent_LODBase> LODComponent;                                      // 0x78(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortAthenaAISpawnerDataComponent_DebugBase> DebugComponent;                                    // 0x80(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortAthenaAISpawnerDataComponent_AnalyticBase> AnalyticComponent;                                 // 0x88(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortAthenaAISpawnerDataComponent_GameplayBase> GameplayComponent;                                 // 0x90(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortAthenaAISpawnerDataComponent_ConversationBase> ConversationComponent;                             // 0x98(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortAthenaAISpawnerDataComponent_VoiceBase> VoiceComponent;                                    // 0xA0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortAthenaAISpawnerDataComponent_CosmeticBase> CosmeticComponent;                                 // 0xA8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortAthenaAISpawnerDataComponent_ChanceEncounterBase> ChanceEncounterComponent;                          // 0xB0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortAthenaAISpawnerDataComponent_OptimBase> OptimizationComponent;                             // 0xB8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortAthenaAISpawnerDataComponent_GameplayAbilityBase> GameplayAbilityComponent;                          // 0xC0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortAthenaAISpawnerDataComponent_PerceptionBase> PerceptionComponent;                               // 0xC8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortAthenaAISpawnerDataComponent_SmartObjectBase> SmartObjectComponent;                              // 0xD0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortAthenaAISpawnerDataComponent_GroupBase> GroupComponent;                                    // 0xD8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortAthenaAISpawnerDataComponent_ScriptBase> ScriptComponent;                                   // 0xE0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortAthenaAISpawnerDataComponent_TokenBase> TokenComponent;                                    // 0xE8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        SpawnIntervalOverride;                             // 0xF0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaAISpawnerData* GetDefaultObj();

	class UFortAthenaAISpawnerDataComponent_VoiceBase* GetVoiceComponent();
	class UFortAthenaAISpawnerDataComponent_TokenBase* GetTokenComponent();
	class UFortAthenaAISpawnerDataComponent_SpawnParamsBase* GetSpawnParamsComponent();
	class UFortAthenaAISpawnerDataComponent_SmartObjectBase* GetSmartObjectComponent();
	class UFortAthenaAISpawnerDataComponent_ScriptBase* GetScriptComponent();
	class UFortAthenaAISpawnerDataComponent_PerceptionBase* GetPerceptionComponent();
	class UFortAthenaAISpawnerDataComponent_OptimBase* GetOptimizationComponent();
	class UFortAthenaAISpawnerDataComponent_InventoryBase* GetInventoryComponent();
	class UFortAthenaAISpawnerDataComponent_GroupBase* GetGroupComponent();
	class UFortAthenaAISpawnerDataComponent_GameplayBase* GetGameplayComponent();
	class UFortAthenaAISpawnerDataComponent_GameplayAbilityBase* GetGameplayAbilityComponent();
	class UFortAthenaAISpawnerDataComponent_DebugBase* GetDebugComponent();
	class UFortAthenaAISpawnerDataComponent_CosmeticBase* GetCosmeticComponent();
	class UFortAthenaAISpawnerDataComponent_ConversationBase* GetConversationComponent();
	class UFortAthenaAISpawnerDataComponent_ChanceEncounterBase* GetChanceEncounterComponent();
	class UFortAthenaAISpawnerDataComponent_BehaviorBase* GetBehaviorComponent();
	class UFortAthenaAISpawnerDataComponent_AnalyticBase* GetAnalyticComponent();
	class UFortAthenaAISpawnerDataComponent_LODBase* GetAILODComponent();
	class UFortAthenaAISpawnerDataComponent_AffiliationBase* GetAffiliationComponent();
	class UFortAthenaAISpawnerDataComponentList* CreateComponentListFromClass(TSubclassOf<class UFortAthenaAISpawnerData> AISpawnerDataClass, class UObject* OuterObject);
	class UFortAthenaAISpawnerDataComponentList* CreateComponentList(class UObject* OuterObject);
};

// 0x28 (0x140 - 0x118)
// Class FortniteAI.FortAthenaAIBotSpawnerData
class UFortAthenaAIBotSpawnerData : public UFortAthenaAISpawnerData
{
public:
	TSubclassOf<class UFortAthenaAISpawnerDataComponent_SkillsetBase> SkillSetComponent;                                 // 0x118(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortAthenaAISpawnerDataComponent_ConstructionBase> ConstructionComponent;                             // 0x120(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortAthenaAISpawnerDataComponent_VehicleBase> VehicleComponent;                                  // 0x128(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortAthenaAISpawnerDataComponent_CoverBase> CoverComponent;                                    // 0x130(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortAthenaAISpawnerDataComponent_PerksBase> PerksComponent;                                    // 0x138(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaAIBotSpawnerData* GetDefaultObj();

	class UFortAthenaAISpawnerDataComponent_VehicleBase* GetVehicleComponent();
	class UFortAthenaAISpawnerDataComponent_SkillsetBase* GetSkillSetComponent();
	class UFortAthenaAISpawnerDataComponent_PerksBase* GetPerksComponent();
	class UFortAthenaAISpawnerDataComponent_CoverBase* GetCoverComponent();
	class UFortAthenaAISpawnerDataComponent_ConstructionBase* GetConstructionComponent();
};

// 0x0 (0x140 - 0x140)
// Class FortniteAI.FortAthenaNPCSpawnerData
class UFortAthenaNPCSpawnerData : public UFortAthenaAIBotSpawnerData
{
public:

	static class UClass* StaticClass();
	static class UFortAthenaNPCSpawnerData* GetDefaultObj();

};

// 0x0 (0x140 - 0x140)
// Class FortniteAI.FortAthenaPlayerBotSpawnerData
class UFortAthenaPlayerBotSpawnerData : public UFortAthenaAIBotSpawnerData
{
public:

	static class UClass* StaticClass();
	static class UFortAthenaPlayerBotSpawnerData* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class FortniteAI.FortBotNameSettings
class UFortBotNameSettings : public UObject
{
public:
	enum class EBotNamingMode                    NamingMode;                                        // 0x28(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BE1[0x7];                                     // Fixing Size After Last Property 
	class FText                                  OverrideName;                                      // 0x30(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         bAddPlayerIDSuffix;                                // 0x48(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BE2[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortBotNameSettings* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class FortniteAI.FortDoorLinkOpenerInterface
class UFortDoorLinkOpenerInterface : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UFortDoorLinkOpenerInterface* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class FortniteAI.FortInjectedBehavior
class UFortInjectedBehavior : public UObject
{
public:
	TSubclassOf<class UFortAthenaAIEvaluator>    AIEvaluator;                                       // 0x28(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Interval;                                          // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RandomDeviation;                                   // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBehaviorTree*                         InjectedBehaviorTree;                              // 0x38(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       Priority;                                          // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BE4[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortInjectedBehavior* GetDefaultObj();

};

// 0x10 (0x58 - 0x48)
// Class FortniteAI.FortMetaNavArea
class UFortMetaNavArea : public UNavAreaMeta
{
public:
	TArray<struct FNavAgentData>                 AgentData;                                         // 0x48(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortMetaNavArea* GetDefaultObj();

};

// 0x0 (0x58 - 0x58)
// Class FortniteAI.FortMetaNavArea_Wall
class UFortMetaNavArea_Wall : public UFortMetaNavArea
{
public:

	static class UClass* StaticClass();
	static class UFortMetaNavArea_Wall* GetDefaultObj();

};

// 0x8 (0x50 - 0x48)
// Class FortniteAI.FortNavArea
class UFortNavArea : public UNavArea
{
public:
	uint8                                        bObstacle : 1;                                     // Mask: 0x1, PropSize: 0x10x48(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSmashable : 1;                                    // Mask: 0x2, PropSize: 0x10x48(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BE5[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortNavArea* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class FortniteAI.FortNavArea_DefaultSmashable
class UFortNavArea_DefaultSmashable : public UFortNavArea
{
public:

	static class UClass* StaticClass();
	static class UFortNavArea_DefaultSmashable* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class FortniteAI.FortNavArea_PlayerBuiltSmashable
class UFortNavArea_PlayerBuiltSmashable : public UFortNavArea_DefaultSmashable
{
public:

	static class UClass* StaticClass();
	static class UFortNavArea_PlayerBuiltSmashable* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class FortniteAI.FortNavArea_WoodenWall
class UFortNavArea_WoodenWall : public UFortNavArea
{
public:

	static class UClass* StaticClass();
	static class UFortNavArea_WoodenWall* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class FortniteAI.FortQueryContext_ConverterPawn
class UFortQueryContext_ConverterPawn : public UEnvQueryContext
{
public:

	static class UClass* StaticClass();
	static class UFortQueryContext_ConverterPawn* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class FortniteAI.FortQueryContext_ConverterController
class UFortQueryContext_ConverterController : public UEnvQueryContext
{
public:

	static class UClass* StaticClass();
	static class UFortQueryContext_ConverterController* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class FortniteAI.FortQueryContext_ConverterViewLocation
class UFortQueryContext_ConverterViewLocation : public UEnvQueryContext
{
public:

	static class UClass* StaticClass();
	static class UFortQueryContext_ConverterViewLocation* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class FortniteAI.FortQueryContext_ConverterViewRotation
class UFortQueryContext_ConverterViewRotation : public UEnvQueryContext
{
public:

	static class UClass* StaticClass();
	static class UFortQueryContext_ConverterViewRotation* GetDefaultObj();

};

// 0x18 (0x48 - 0x30)
// Class FortniteAI.FortSpawnPointsPercentageCurveSequence
class UFortSpawnPointsPercentageCurveSequence : public UDataAsset
{
public:
	TArray<struct FDataTableRowHandle>           SpawnPointsPercentageCurves;                       // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EFortIntensityCurveSequenceType   SequenceType;                                      // 0x40(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BE9[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortSpawnPointsPercentageCurveSequence* GetDefaultObj();

};

// 0x1B0 (0x440 - 0x290)
// Class FortniteAI.AIHotSpot
class UAIHotSpot : public UActor
{
public:
	uint8                                        Pad_2C2B[0x8];                                     // Fixing Size After Last Property 
	TArray<class UAIHotSpotSlot*>                UserSlots;                                         // 0x298(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	class UAIHotSpotSlotGenerator*               SlotGenerator;                                     // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UAIHotSpotSlot*>                Slots;                                             // 0x2B0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	class UActor*                                FocusActor;                                        // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UNavigationQueryFilter>    FilterClass;                                       // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               CustomNavmeshSearchExtent;                         // 0x2D0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bStartEnabled : 1;                                 // Mask: 0x1, PropSize: 0x10x2E8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bAllowSlotlessAssignment : 1;                      // Mask: 0x2, PropSize: 0x10x2E8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bAllowClaimingMultipleSlots : 1;                   // Mask: 0x4, PropSize: 0x10x2E8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bTrackOverlappingSlots : 1;                        // Mask: 0x8, PropSize: 0x10x2E8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bProjectSlotsOnNavmesh : 1;                        // Mask: 0x10, PropSize: 0x10x2E8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bCustomNavmeshSearchExtent : 1;                    // Mask: 0x20, PropSize: 0x10x2E8(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bIsEnabled : 1;                                    // Mask: 0x40, PropSize: 0x10x2E8(0x1)(Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_1AE : 1;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_2C2D[0x7];                                     // Fixing Size After Last Property 
	TArray<class UAIController*>                 NoSlotAssignees;                                   // 0x2F0(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_2C2E[0x128];                                   // Fixing Size After Last Property 
	class UPrimitiveComponent*                   RenderingComponent;                                // 0x428(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBillboardComponent*                   SpriteComponent;                                   // 0x430(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2C2F[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAIHotSpot* GetDefaultObj();

	void SetEnabled(bool bEnabled);
	int32 RemoveGroupFromHotspot(const TArray<class UAIController*>& GroupOfAI);
	bool RemoveFromHotspot(class UAIController* AI, bool bAssignFromWaitingList);
	void OnSlotOccupied(class UAIController* AI, int32 Index, int32 UserId);
	void OnSlotFreed(class UAIController* AI, int32 Index, int32 UserId);
	void OnSlotEnabled(int32 Index, int32 UserId);
	void OnSlotDisabled(int32 Index, int32 UserId);
	void OnSlotClaimed(class UAIController* AI, int32 Index, int32 UserId);
	void OnSlotBlocked(class UAIController* AI, int32 Index, int32 UserId);
	void OnRemovedSlotlessBehavior(class UAIController* AI, bool bIsClamingSlot);
	void OnRemovedBehavior(class UAIController* AI, int32 Index, int32 UserId, enum class EAIHotSpotSlot PrevState, bool bWasOnWaitingList);
	void OnMoveToSlotFinished(class UAIController* AI, int32 Index, int32 UserId, bool bResult);
	void OnHotSpotEnabled();
	void OnHotSpotDisabled();
	bool OnAssignedSlotlessBehavior(class UAIController* AI);
	bool OnAssignedOccupiedBehavior(class UAIController* AI, int32 Index, int32 UserId);
	bool OnAssignedClaimedBehavior(class UAIController* AI, int32 Index, int32 UserId, bool bWasOnWaitingList);
	bool OccupySlotByIndex(int32 Index);
	bool IsSlotlessAssignmentAllowed();
	bool IsEnabled();
	bool IsAIAllowed(class UAIController* AI);
	bool HasEnabledSlots();
	bool HasAssignedAI(class UAIController* AI, enum class EAIHotSpotAssignmentFilter Filter);
	int32 GetSlotUserIdByIndex(int32 Index);
	enum class EAIHotSpotSlot GetSlotStateByOwner(class UAIController* AIOwner);
	enum class EAIHotSpotSlot GetSlotStateByIndex(int32 Index);
	struct FRotator GetSlotRotationByIndex(int32 Index);
	class UAIController* GetSlotOwnerByIndex(int32 Index);
	struct FVector GetSlotLocationByIndex(int32 Index);
	int32 GetSlotIndexByOwner(class UAIController* AIOwner);
	int32 GetSlotCount(enum class EAIHotSpotSlotFilter Filter);
	class UAIHotSpotSlot* GetSlotByOwner(class UAIController* AIOwner);
	class UAIHotSpotSlot* GetSlotByIndex(int32 Index);
	int32 GetAssignedAICount(enum class EAIHotSpotAssignmentFilter Filter);
	TArray<class UAIController*> GetAssignedAI(enum class EAIHotSpotAssignmentFilter Filter);
	TArray<int32> FindBestSlotIndices(const TArray<class UAIController*>& AI);
	int32 FindBestSlotIndex(class UAIController* AI);
	bool CanUseSlotByIndex(class UAIController* AI, int32 Index);
	bool AssignToSlotByIndex(class UAIController* AI, int32 Index);
	bool AssignToHotspot(class UAIController* AI);
	int32 AssignGroupToHotspot(const TArray<class UAIController*>& GroupOfAI);
	void AssignFromWaitingList();
};

// 0x58 (0x80 - 0x28)
// Class FortniteAI.AIHotSpotManagerProxy
class UAIHotSpotManagerProxy : public UAIHotSpotManager
{
public:
	uint8                                        Pad_2C35[0x58];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAIHotSpotManagerProxy* GetDefaultObj();

};

// 0x8 (0x5C0 - 0x5B8)
// Class FortniteAI.AIHotSpotRenderingComponent
class UAIHotSpotRenderingComponent : public UDebugDrawComponent
{
public:
	uint8                                        Pad_2C36[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAIHotSpotRenderingComponent* GetDefaultObj();

};

// 0xF8 (0x120 - 0x28)
// Class FortniteAI.AIHotSpotSlot
class UAIHotSpotSlot : public UObject
{
public:
	uint8                                        Pad_2C4B[0x8];                                     // Fixing Size After Last Property 
	struct FTransform                            LocalTransform;                                    // 0x30(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Height;                                            // 0x90(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Radius;                                            // 0x94(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DistanceToFocusActor;                              // 0x98(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        UserId;                                            // 0x9C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bStartEnabled : 1;                                 // Mask: 0x1, PropSize: 0x10xA0(0x1)(Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bHasCachedAgentData : 1;                           // Mask: 0x2, PropSize: 0x10xA0(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bHasOverlappingSlots : 1;                          // Mask: 0x4, PropSize: 0x10xA0(0x1)(Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bHasDistanceToFocusActor : 1;                      // Mask: 0x8, PropSize: 0x10xA0(0x1)(Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bIsBlockingOthers : 1;                             // Mask: 0x10, PropSize: 0x10xA0(0x1)(Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bIsEnabled : 1;                                    // Mask: 0x20, PropSize: 0x10xA0(0x1)(Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_1B3 : 2;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_2C4E[0x7];                                     // Fixing Size After Last Property 
	class UAIController*                         Owner;                                             // 0xA8(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        SlotIndex;                                         // 0xB0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EAIHotSpotSlot                    SlotState;                                         // 0xB4(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2C4F[0x6B];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAIHotSpotSlot* GetDefaultObj();

	void SetSlotState(enum class EAIHotSpotSlot NewState);
	void SetSlotOwnerAndState(class UAIController* NewOwner, enum class EAIHotSpotSlot NewState);
	void SetSlotEnabled(bool bNewEnabled);
	void OnStateChanged(class UAIController* SlotOwner, enum class EAIHotSpotSlot NewState);
	bool IsEnabled();
	bool IsAIAllowed(class UAIController* AI);
	bool HasUserId();
	int32 GetSlotUserId();
	enum class EAIHotSpotSlot GetSlotState();
	struct FRotator GetSlotRotation();
	float GetSlotRadius();
	class UAIController* GetSlotOwner();
	struct FVector GetSlotLocation();
	int32 GetSlotIndex();
	float GetSlotHeight();
	struct FBox GetSlotBounds();
	class UAIHotSpot* GetHotSpot();
	void ClearSlot();
};

// 0x248 (0x278 - 0x30)
// Class FortniteAI.AthenaAIBudgetManager
class UAthenaAIBudgetManager : public UWorldSubsystem
{
public:
	uint8                                        Pad_2C56[0x30];                                    // Fixing Size After Last Property 
	TMap<TWeakObjectPtr<class UObject>, struct FAthenaMemoryBudgetInterfaces> StaticallyRegisteredPawns;                         // 0x60(0x50)(Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2C57[0x1C8];                                   // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAthenaAIBudgetManager* GetDefaultObj();

};

// 0x1A8 (0x560 - 0x3B8)
// Class FortniteAI.FortAIController
class UFortAIController : public UAIController
{
public:
	uint8                                        Pad_2C7B[0x30];                                    // Fixing Size After Last Property 
	uint8                                        bUsingNavMesh : 1;                                 // Mask: 0x1, PropSize: 0x10x3E8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAlwaysNotifyBumpWall : 1;                         // Mask: 0x2, PropSize: 0x10x3E8(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bInstantRotation : 1;                              // Mask: 0x4, PropSize: 0x10x3E8(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bTurnTransitionsEnabled : 1;                       // Mask: 0x8, PropSize: 0x10x3E8(0x1)(Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_1BA : 4;                                    // Fixing Bit-Field Size 
	uint8                                        BitPad_1BB : 7;                                    // Fixing Bit-Field Size 
	uint8                                        bIgnoreAllActorsThatAreNotPawnsOrBuildings : 1;    // Mask: 0x80, PropSize: 0x10x3E9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bAllowHotspotAbilityLooping : 1;                   // Mask: 0x1, PropSize: 0x10x3EA(0x1)(Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_1BC : 7;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_2C7E[0x5];                                     // Fixing Size After Last Property 
	class UFortPathFollowingComponent*           FortPathFollowingComp;                             // 0x3F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAIHotSpotUseInfo                     CurrentHotSpot;                                    // 0x3F8(0x18)(BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UFortAthenaAIRuntimeParametersComponent* CachedAIRuntimeParametersComponent;                // 0x410(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortAthenaAIRuntimeParameters_AffiliationBase* CachedAffiliationRuntimeParameters;                // 0x418(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        GoalInfoUpdateRate;                                // 0x420(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C80[0x4];                                     // Fixing Size After Last Property 
	class UActor*                                GoalActor;                                         // 0x428(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        GoalVisibilityPersistanceTime;                     // 0x430(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2C81[0xCC];                                    // Fixing Size After Last Property 
	class UFortAIPawn*                           MyFortPawn;                                        // 0x500(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTeamSetDelegate;                                 // 0x508(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnControllerComponentAttachedEvent;                // 0x518(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	class UAIGoalComponent*                      AIGoalComponent;                                   // 0x528(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnControllerNewGoalActorEvent;                     // 0x530(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnPawnKilledEvent;                                 // 0x540(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	class UBehaviorTree*                         BTAssetToRunOnPawnAISpawned;                       // 0x550(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortGameStateComponent_AffiliationManager* CachedAffiliationManager;                          // 0x558(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortAIController* GetDefaultObj();

	void WakeUp();
	void UnlockMovementResource();
	void UnlockBehaviorResource();
	void SetupCustomVIM(class UClass* VIM);
	void SetTeamInt(uint8 InTeam);
	void SetTeam(enum class EFortTeam InTeam);
	void SetPawnAIType(enum class EFortressAIType NewAIType, class UActor* SpawnSpot);
	void SetIsSleeping(bool bNewSleepStatus);
	void SetGoalActor(class UActor* InActor, bool bLocationAlwaysKnown);
	void SetFullPeripheralVision(bool bNewFullPeripheralVision);
	void SetAlwaysGameplayRelevant(bool bInAlwaysGameplayRelevant);
	void OnBuildingActorGoalDestroyed();
	void OnActorGoalDestroyed(class UActor* DestroyedActor);
	void LockMovementResource();
	void LockBehaviorResource();
	bool IsIgnoringProximity(class UFortAIController* FortAIController);
	bool IsAllowedToSleep();
	void IgnoreProximityForDuration(float DurationToIgnore);
	class UActor* GetGoalActor();
	class UFortAIEncounterInfo* GetEncounterInfo();
	bool CreateBuildingActor(TSubclassOf<class UBuildingSMActor> BuildingClass, const struct FVector& BuildLoc, const struct FRotator& BuildRot, bool bMirrored);
	void ClearAllFocalPoints();
};

// 0x90 (0x5F0 - 0x560)
// Class FortniteAI.AthenaAIController
class UAthenaAIController : public UFortAIController
{
public:
	uint8                                        Pad_2C8D[0x20];                                    // Fixing Size After Last Property 
	class UFortGameplayAbility*                  PrimaryMeleeAttackAbilityInstance;                 // 0x580(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortGameplayAbility*                  PrimaryRangedAttackAbilityInstance;                // 0x588(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               NavWalkingSearchExtentScale;                       // 0x590(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CheapFlyingNavPointHorizontalGridRatio;            // 0x5A8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CheapFlyingNavNavPointVerticalGridRatio;           // 0x5AC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 CheapFlyingNavSmashableAbilityTag;                 // 0x5B0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	uint8                                        bEnableCheapFlyingNavigation : 1;                  // Mask: 0x1, PropSize: 0x10x5D0(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bAllowBacktrackPathfinding : 1;                    // Mask: 0x2, PropSize: 0x10x5D0(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bIsGoalRequiredForBehavior : 1;                    // Mask: 0x4, PropSize: 0x10x5D0(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bAutomaticallyChooseClosestTargetAsGoal : 1;       // Mask: 0x8, PropSize: 0x10x5D0(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bAutoGenerateHotspotOnPlayerBuildings : 1;         // Mask: 0x10, PropSize: 0x10x5D0(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bAutoAttackOnMovedHit : 1;                         // Mask: 0x20, PropSize: 0x10x5D0(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_1BD : 2;                                    // Fixing Bit-Field Size 
	uint8                                        BitPad_1BE : 1;                                    // Fixing Bit-Field Size 
	uint8                                        bRegisterToAthenaAIDropper : 1;                    // Mask: 0x2, PropSize: 0x10x5D1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_1BF : 6;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_2C97[0x6];                                     // Fixing Size After Last Property 
	class UActor*                                SecondaryGoalActor;                                // 0x5D8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2C9B[0x8];                                     // Fixing Size After Last Property 
	class UAthenaPathFollowingComponent*         AthenaPFC;                                         // 0x5E8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UAthenaAIController* GetDefaultObj();

};

// 0x8 (0x190 - 0x188)
// Class FortniteAI.FortAIPerceptionComponent
class UFortAIPerceptionComponent : public UAIPerceptionComponent
{
public:
	float                                        LosingSightRadiusBump;                             // 0x188(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CA5[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAIPerceptionComponent* GetDefaultObj();

};

// 0x8 (0x198 - 0x190)
// Class FortniteAI.AthenaAIPerceptionComponent
class UAthenaAIPerceptionComponent : public UFortAIPerceptionComponent
{
public:
	TWeakObjectPtr<class UFortAthenaAIRuntimeParametersComponent> CachedAIRuntimeParametersComponent;                // 0x190(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAthenaAIPerceptionComponent* GetDefaultObj();

};

// 0x0 (0x298 - 0x298)
// Class FortniteAI.FortBehaviorTreeComponent
class UFortBehaviorTreeComponent : public UBehaviorTreeComponent
{
public:

	static class UClass* StaticClass();
	static class UFortBehaviorTreeComponent* GetDefaultObj();

};

// 0x0 (0x298 - 0x298)
// Class FortniteAI.AthenaBehaviorTreeComponent
class UAthenaBehaviorTreeComponent : public UFortBehaviorTreeComponent
{
public:

	static class UClass* StaticClass();
	static class UAthenaBehaviorTreeComponent* GetDefaultObj();

};

// 0xD78 (0x1008 - 0x290)
// Class FortniteAI.FortAIDirector
class UFortAIDirector : public UActor
{
public:
	uint8                                        Pad_2D23[0x10];                                    // Fixing Size After Last Property 
	struct FCurveTableRowHandle                  MaxAliveCurve;                                     // 0x2A0(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                  MinAliveCurve;                                     // 0x2B0(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntensityData                        IntensityInfo;                                     // 0x2C0(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FFortAIEncounterPIDController         AIDirectorPIDController;                           // 0x2F0(0x68)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortAIEncounterPIDControllerSettings PIDControllerSettings;                             // 0x358(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FUtilityData                          UtilityContributionData[0x10];                     // 0x388(0x400)(Edit, NativeAccessSpecifierPublic)
	float                                        UnreachableLocationPathCost;                       // 0x788(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D28[0x4];                                     // Fixing Size After Last Property 
	struct FFortPlayerPerformanceEstimateSettings PlayerPerformanceEstimateSettings;                 // 0x790(0x40)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        bUsePrototypeEnemies : 1;                          // Mask: 0x1, PropSize: 0x10x7D0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1C1 : 7;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_2D2B[0x3];                                     // Fixing Size After Last Property 
	bool                                         bForceByPassNavMeshForAISpawning;                  // 0x7D4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D2C[0x3];                                     // Fixing Size After Last Property 
	TArray<enum class EFortEncounterDirection>   DebugEncounterDirections;                          // 0x7D8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	enum class EDespawnAIType                    DespawnAIType;                                     // 0x7E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2D2D[0x3];                                     // Fixing Size After Last Property 
	float                                        DespawnDistance;                                   // 0x7EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DespawnInterval;                                   // 0x7F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2D30[0x4];                                     // Fixing Size After Last Property 
	struct FGameplayTagContainer                 DebugSpawnAIGroupTags;                             // 0x7F8(0x20)(Transient, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 DebugEncounterTags;                                // 0x818(0x20)(Transient, Protected, NativeAccessSpecifierProtected)
	float                                        BurstSpawnThreatVisualsEndDelay;                   // 0x838(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2D32[0x4];                                     // Fixing Size After Last Property 
	TArray<struct FFortAIEncounterSpawnGroupCapsProfile> EncounterSpawnGroupCapSettings;                    // 0x840(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FFortAIEncounterSpawnPointsProfile> EncounterSpawnPointsSettings;                      // 0x850(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FFortAIEncounterPawnDifficultyLevelModifier> EncounterPawnDifficultyLevelModifiers;             // 0x860(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FFortAISpawnGroupUpgradeData>  SpawnGroupUpgrades;                                // 0x870(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	float                                        GuaranteedUpgradeGroupUtilityBonus;                // 0x880(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DiscreteEncounterUtilityDesireMappings[0x4];       // 0x884(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EFortAIUtility                    InitialDynamicUtilities[0x4];                      // 0x894(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FEncounterEnvironmentQueryInfo        SpawnLocationPlacementQueries[0x4];                // 0x898(0xA0)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FEncounterEnvironmentQueryInfo        SpawnLocationActorSearchQueries[0x4];              // 0x938(0xA0)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class UFortAIDirectorDataTrackingSettings*   DataTrackingSettings;                              // 0x9D8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FDataTableRowHandle>           BaseLootDropData;                                  // 0x9E0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FFortAILootDropModifiers>      LootDropModifiers;                                 // 0x9F0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagQuery                     LootDropDenialQuery;                               // 0xA00(0x48)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                        bDebugEncounterQueries : 1;                        // Mask: 0x1, PropSize: 0x10xA48(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_1C3 : 7;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_2D3E[0x17];                                    // Fixing Size After Last Property 
	TArray<class UFortPlayerControllerZone*>     PlayerControllersForBVTree;                        // 0xA60(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UFortPlayerPawn*>               PlayerPawnsForBVTree;                              // 0xA70(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_2D40[0x30];                                    // Fixing Size After Last Property 
	TArray<class UFortAIController*>             AIControllersForBVTree;                            // 0xAB0(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UFortAIPawn*>                   AIPawnsForBVTree;                                  // 0xAC0(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_2D43[0x30];                                    // Fixing Size After Last Property 
	TArray<class UFortAthenaAIBotController*>    AIPlayerBotControllersForBVTree;                   // 0xB00(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UFortPlayerPawn*>               AIPlayerBotPawnsForBVTree;                         // 0xB10(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_2D46[0x30];                                    // Fixing Size After Last Property 
	TArray<class UFortAthenaAIBotController*>    AINonPlayerBotControllersForBVTree;                // 0xB50(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UFortPlayerPawn*>               AINonPlayerBotPawnsForBVTree;                      // 0xB60(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_2D47[0x30];                                    // Fixing Size After Last Property 
	TArray<class UFortPlayerPawn*>               NonPlayerBotPawns;                                 // 0xBA0(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UFortPlayerPawn*>               PlayerBotPawns;                                    // 0xBB0(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UFortPlayerPawn*>               PlayerPawns;                                       // 0xBC0(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UFortAIPawn*>                   FortAIPawns;                                       // 0xBD0(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_2D4A[0x100];                                   // Fixing Size After Last Property 
	bool                                         bUseLODSettings;                                   // 0xCE0(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2D4B[0x6F];                                    // Fixing Size After Last Property 
	TScriptInterface<class UFortAthenaAILODSettings> CachedLODSettingsManager;                          // 0xD50(0x10)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAsyncProcessUpdateAliveAIs;                       // 0xD60(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAllowProcessPlayerTargeting;                      // 0xD61(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2D4D[0x2];                                     // Fixing Size After Last Property 
	int32                                        MaxNumLODAIProcessPerFrame;                        // 0xD64(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FFortEncounterPawnNumberCaps          DefaultEncounterPawnCaps;                          // 0xD68(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_2D52[0x8];                                     // Fixing Size After Last Property 
	class UReporterGraph*                        IntensityGraph;                                    // 0xD88(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UReporterGraph*                        UtilitiesGraph;                                    // 0xD90(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UReporterGraph*                        PIDValuesGraph;                                    // 0xD98(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UReporterGraph*                        PIDContributionsGraph;                             // 0xDA0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bNightActive : 1;                                  // Mask: 0x1, PropSize: 0x10xDA8(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAIDisabled : 1;                                   // Mask: 0x2, PropSize: 0x10xDA8(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRegisteredForDayPhaseChange : 1;                  // Mask: 0x4, PropSize: 0x10xDA8(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseSpawnCap : 1;                                  // Mask: 0x8, PropSize: 0x10xDA8(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1C4 : 4;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_2D57[0x3];                                     // Fixing Size After Last Property 
	int32                                        NightCount;                                        // 0xDAC(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NightEncounterFailureBreatherTime;                 // 0xDB0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EncounterPawnSpawnInterval;                        // 0xDB4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UFortAIEncounterInfo>      DefaultNightEncounter;                             // 0xDB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UFortAIEncounterInfo>      DummyDebugEncounter;                               // 0xDC0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UFortAIEncounterInfo>      BaseEncounterClass;                                // 0xDC8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxActiveAlive;                                    // 0xDD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumActiveAlive;                                    // 0xDD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumPendingCapRelevantAI;                           // 0xDD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D5E[0x54];                                    // Fixing Size After Last Property 
	TArray<struct FPendingSpawnInfo>             PendingSpawns;                                     // 0xE30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        MaxAISpawnedPerFrame;                              // 0xE40(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        MaxAIDespawnedPerFrame;                            // 0xE44(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        DespawnAllAIMaxAIDespawnedPerFrame;                // 0xE48(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2D62[0x4];                                     // Fixing Size After Last Property 
	TArray<TWeakObjectPtr<class UFortAIPawn>>    PendingDespawns;                                   // 0xE50(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2D64[0x8];                                     // Fixing Size After Last Property 
	int32                                        NumWorldSubdivides;                                // 0xE68(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinAISpawnDistanceFromPlayers;                     // 0xE6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 AmbientThreatPreferredPlacementActorTags;          // 0xE70(0x20)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 AmbientThreatRequiredPlacementActorTags;           // 0xE90(0x20)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	TArray<class UFortAIEncounterInfo*>          ActiveEncounters;                                  // 0xEB0(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UFortAIEncounterInfo*>          InactiveEncounters;                                // 0xEC0(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<struct FFortPendingStoppedEncounterData> PendingStoppedEncounters;                          // 0xED0(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UFortAIEncounterInfo*                  ActiveDefaultEncounter;                            // 0xEE0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortAIEncounterInfo*                  ActiveDummyDebugEncounter;                         // 0xEE8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UFortAIEncounterSequence*>      EncounterSequences;                                // 0xEF0(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	class UEQSRenderingComponent*                EQSRenderingComp;                                  // 0xF00(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        DebugGraphUpdateFrequency;                         // 0xF08(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxNormalLODDistanceToPlayer;                      // 0xF0C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AIRelevantDistanceToPlayer;                        // 0xF10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EncounterRelevantDistanceToPlayer;                 // 0xF14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EncounterRelevantDistanceToDefender;               // 0xF18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D6F[0x4];                                     // Fixing Size After Last Property 
	TArray<TScriptInterface<class UFortPatrolWardInterface>> PatrolWards;                                       // 0xF20(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2D73[0x4];                                     // Fixing Size After Last Property 
	int32                                        MaxTotalActiveAliveAI;                             // 0xF34(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxEncounterActiveAliveAI;                         // 0xF38(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxSPUsed;                                         // 0xF3C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D76[0x8];                                     // Fixing Size After Last Property 
	TArray<struct FUtilityTypeFloatPair>         DebugEncounterTopUtilityPercentages;               // 0xF48(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<class UCurveFloat*>                   DebugEncounterSpawnPointsCurves;                   // 0xF58(0x10)(Edit, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        bDebugAllowEncounterModifierTags : 1;              // Mask: 0x1, PropSize: 0x10xF68(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_1C6 : 7;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_2D77[0x3];                                     // Fixing Size After Last Property 
	int32                                        SimulatedNumberOfPlayersForAIEncounters;           // 0xF6C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2D78[0x78];                                    // Fixing Size After Last Property 
	int32                                        MaxNumberOfEncounterGroups;                        // 0xFE8(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2D7A[0x4];                                     // Fixing Size After Last Property 
	TArray<class UBuildingProp_AISpawner*>       RegisteredAISpawners;                              // 0xFF0(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_2D7B[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAIDirector* GetDefaultObj();

	void UnregisterPatrolWard(TScriptInterface<class UFortPatrolWardInterface> PatrolWard);
	class UFortAIEncounterInfo* StartEncounter(class FString& EncounterInstigator, class UFortDifficultyEncounterSettings* DifficultyEncounterSettings, const struct FFortAIEncounterQueryData& OptionalQueryData);
	void RegisterPatrolWard(TScriptInterface<class UFortPatrolWardInterface> PatrolWard);
	void ReceivePawnSpawned(class UFortPawn* SpawnedPawn);
	void PostDayPhaseChanged(enum class EFortDayPhase CurrentDayPhase, enum class EFortDayPhase PreviousDayPhase, bool bAtCreation);
	void OnRestStarted();
	void OnRampStarted();
	void OnPlayerSpawn(class UFortPlayerPawn* PlayerPawn);
	void OnPlayerDied(class UFortPlayerPawn* PlayerPawn);
	void OnPeakStarted();
	void OnPawnDied(class UFortAIPawn* KilledPawn);
	void OnFadeStarted();
	void OnDirectorDeactivated();
	void OnDayPhaseChanged(enum class EFortDayPhase CurrentDayPhase, enum class EFortDayPhase PreviousDayPhase, bool bAtCreation);
	bool IsPointTooCloseToPatrolWards(struct FVector& Point, enum class EWardAffectType WardEffectTypeFilter);
	bool IsLineTooCloseToPatrolWards(struct FVector& LineStart, struct FVector& LineEnd);
	bool IsAnyEncounterGoalWithinDistanceOfPoint(struct FVector& Point, float Distance, bool bOnlyActiveEncounters);
	bool IsAnyAIRelevantToPlayer(class UFortPlayerPawn* Player);
	bool IsAnyActiveEncounterRelevantToPlayer(class UFortPlayerPawn* Player);
	bool IsAnyActiveEncounterRelevantToDefender(class UFortAIPawn* Defender);
	struct FVector GetVectorFromEncounterDirection(enum class EFortEncounterDirection Direction);
	TArray<class UBuildingRift*> GetRiftsFromClosestActiveEncounterTo(class UActor* Target);
	int32 GetNumPlayers();
	int32 GetNumActiveEncounters();
	enum class EFortEncounterDirection GetEncounterDirectionFromVector(const struct FVector& DirectionVector);
	void GetAmbientThreatEncounterSpawnLocations(TArray<struct FVector>* AmbientThreatEncounterSpawnLocations);
	void Deactivate();
	TArray<enum class EFortEncounterDirection> ConvertInvalidDirectionsToValidDirections(const TArray<enum class EFortEncounterDirection>& InvalidDirections);
	void Activate();
};

// 0x8 (0x1010 - 0x1008)
// Class FortniteAI.AthenaAIDirector
class UAthenaAIDirector : public UFortAIDirector
{
public:
	uint8                                        Pad_2D9D[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAthenaAIDirector* GetDefaultObj();

	void AggroOnActor(class UAthenaAIController* AIController, class UActor* Target);
};

// 0x10 (0x38 - 0x28)
// Class FortniteAI.AthenaAIDropper
class UAthenaAIDropper : public UObject
{
public:
	TArray<struct FDroppingAgentData>            InactiveAgents;                                    // 0x28(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAthenaAIDropper* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class FortniteAI.AthenaAIPerceptionManager
class UAthenaAIPerceptionManager : public UAISubsystem
{
public:
	uint8                                        Pad_2DA2[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAthenaAIPerceptionManager* GetDefaultObj();

};

// 0x0 (0x2A0 - 0x2A0)
// Class FortniteAI.AthenaNavSystemConfigOverride
class UAthenaNavSystemConfigOverride : public UNavSystemConfigOverride
{
public:

	static class UClass* StaticClass();
	static class UAthenaNavSystemConfigOverride* GetDefaultObj();

};

// 0xE8 (0x118 - 0x30)
// Class FortniteAI.AthenaAISettingsAIDIrectorLOD
class UAthenaAISettingsAIDIrectorLOD : public UDataAsset
{
public:
	TArray<struct FPlayerLODViewConeConfig>      PlayerLODViewConeConfigs;                          // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FPlayerLODViewConeHysteresisConfig    PlayerLODViewConeHysteresisConfig;                 // 0x40(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        CouldBeVisibleViewConeAngleDegrees;                // 0x90(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        CouldBeVisibleMaxDistance;                         // 0xB8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        LODSortHysteresisDistance;                         // 0xE0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FFortAIDirectorPerLODConfig>   FortAIDirectorLODConfigs;                          // 0x108(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAthenaAISettingsAIDIrectorLOD* GetDefaultObj();

};

// 0x68 (0x98 - 0x30)
// Class FortniteAI.AthenaAISettings
class UAthenaAISettings : public UDataAsset
{
public:
	uint8                                        bAllowAIDirector : 1;                              // Mask: 0x1, PropSize: 0x10x30(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bAllowAIGoalManager : 1;                           // Mask: 0x2, PropSize: 0x10x30(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bForceRVOUse : 1;                                  // Mask: 0x4, PropSize: 0x10x30(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_1C7 : 5;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_2DAE[0x3];                                     // Fixing Size After Last Property 
	float                                        MaxPlayerSpeedScaleFootstepSounds;                 // 0x34(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MinFootstepHearingRange;                           // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaxFootstepHearingRange;                           // 0x3C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        DamagedHearingRange;                               // 0x40(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        CrouchHearingModifier;                             // 0x44(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaxNPCHearingRange;                                // 0x48(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaxPerceptualStimuliAge;                           // 0x4C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        DeAggroRange;                                      // 0x50(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        ReducedDeAggroRange;                               // 0x54(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        DurationReduceAggroLimits;                         // 0x58(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2DB2[0x4];                                     // Fixing Size After Last Property 
	TSubclassOf<class UAthenaNavSystemConfigOverride> NavigationSystemConfig;                            // 0x60(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UAthenaAISettingsAIDIrectorLOD> AIDIrectorLOD;                                     // 0x68(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<TSubclassOf<class UAthenaAIService>>  AIServices;                                        // 0x88(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UAthenaAISettings* GetDefaultObj();

};

// 0xA0 (0x218 - 0x178)
// Class FortniteAI.FortAISystem
class UFortAISystem : public UAISystem
{
public:
	TArray<class UFortQueryTwoPointSolver*>      TwoPointSolvers;                                   // 0x178(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
	class UFortInfluenceMap*                     InfluenceMap;                                      // 0x188(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortBotMissionManager*                BotManager;                                        // 0x190(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2DC4[0x10];                                    // Fixing Size After Last Property 
	TArray<class UFortRiftBlockerComponent*>     ActiveRiftBlockers;                                // 0x1A8(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_2DC5[0x50];                                    // Fixing Size After Last Property 
	class UAthenaAISpawner*                      AISpawner;                                         // 0x208(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAthenaAIServiceManager*               AIServiceManager;                                  // 0x210(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortAISystem* GetDefaultObj();

	bool IsInCone2D(const struct FVector& ConeOrigin, const struct FVector& ConeDirection, float HalfAngle, const struct FVector& LocationToCheck);
};

// 0x58 (0x270 - 0x218)
// Class FortniteAI.AthenaAISystem
class UAthenaAISystem : public UFortAISystem
{
public:
	class UAthenaAIPerceptionManager*            PerceptionManager;                                 // 0x218(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAthenaAIDropper*                      AIDropper;                                         // 0x220(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAthenaAIPopulationTracker*            AIPopulationTracker;                               // 0x228(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAthenaAIVehicleAvoidanceManager*      AIVehicleAvoidanceManager;                         // 0x230(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UAthenaAIController*>           AIControllers;                                     // 0x238(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UAthenaPathFollowingComponent*> PathFollowingComponents;                           // 0x248(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UActor*>                        RegisteredAISpawners;                              // 0x258(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        bUnlimitedAIHealth : 1;                            // Mask: 0x1, PropSize: 0x10x268(0x1)(Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bNavigationReady : 1;                              // Mask: 0x2, PropSize: 0x10x268(0x1)(Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2DE3[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAthenaAISystem* GetDefaultObj();

	void OnAIPawnSpawned(class UController* SpawnedController, bool bIsABot, class UFortPawn* FortAIPawn, class UFortPlayerPawn* PlayerPawn);
	void OnAIPawnDied(class UController* KilledController, bool bIsABot, class UFortPawn* KilledAIPawn, class UFortPlayerPawn* KilledPlayerPawn, class UController* KillerController);
	void OnAIPawnDestroyed(class UFortPawn* DestroyedPawn);
	void HandlePlayerExitAircraft(class UController* ExitingController);
	void HandleGamePhaseStepChanged(TScriptInterface<class UFortSafeZoneInterface>& SafeZoneInterface, enum class EAthenaGamePhaseStep GamePhaseStep);
	void AIProfiling_OnSafeZoneUpdated(struct FFortSafeZonePhaseUpdatedEvent& Event);
	void AIProfiling_OnGamePhaseChanged(struct FFortGamePhaseUpdatedEvent& Event);
};

// 0xF8 (0xC20 - 0xB28)
// Class FortniteAI.AthenaCreativeRift
class UAthenaCreativeRift : public UBuildingRift
{
public:
	class USphereComponent*                      DespawnSphereComponent;                            // 0xB28(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBuildingProp_AISpawner*               ParentTrap;                                        // 0xB30(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFortEncounterSettings                OverrideEncounterSettings;                         // 0xB38(0xC0)(NativeAccessSpecifierPrivate)
	bool                                         bHasLoadedSettings;                                // 0xBF8(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2DEF[0x7];                                     // Fixing Size After Last Property 
	TArray<class UFortPlayerPawn*>               DespawnPlayerOverlaps;                             // 0xC00(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2DF0[0x8];                                     // Fixing Size After Last Property 
	class UFortAIManagerMinigameComponent*       CachedAIMinigamecomponent;                         // 0xC18(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UAthenaCreativeRift* GetDefaultObj();

	void NotifyActorDespawnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class UActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BlueprintShowRift();
};

// 0x20 (0x338 - 0x318)
// Class FortniteAI.FortPathFollowingComponentBase
class UFortPathFollowingComponentBase : public UCrowdFollowingComponent
{
public:
	class UAIController*                         AIController;                                      // 0x318(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2DF2[0x18];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortPathFollowingComponentBase* GetDefaultObj();

};

// 0xF0 (0x428 - 0x338)
// Class FortniteAI.FortPathFollowingComponent
class UFortPathFollowingComponent : public UFortPathFollowingComponentBase
{
public:
	class UFortAIController*                     MyAI;                                              // 0x338(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DF3[0x20];                                    // Fixing Size After Last Property 
	float                                        MovementBlockFrustrationCooldownSpeed;             // 0x360(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2DF4[0xC4];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortPathFollowingComponent* GetDefaultObj();

};

// 0x40 (0x468 - 0x428)
// Class FortniteAI.AthenaPathFollowingComponent
class UAthenaPathFollowingComponent : public UFortPathFollowingComponent
{
public:
	enum class EAthenaPathFollowingFocus         FocusDirectionMethod;                              // 0x428(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2DF5[0x1F];                                    // Fixing Size After Last Property 
	class UAthenaAIController*                   AthenaAIController;                                // 0x448(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2DF7[0x18];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAthenaPathFollowingComponent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class FortniteAI.FortAthenaAITelemetryFunctionLibrary
class UFortAthenaAITelemetryFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UFortAthenaAITelemetryFunctionLibrary* GetDefaultObj();

	class UFortAthenaAITelemetryData* GetOrCreateAITelemetryData(class UActor* Owner, TSubclassOf<class UFortAthenaAITelemetryData> TelemetryDataClass);
};

// 0x0 (0x28 - 0x28)
// Class FortniteAI.FortAthenaAITelemetryData
class UFortAthenaAITelemetryData : public UObject
{
public:

	static class UClass* StaticClass();
	static class UFortAthenaAITelemetryData* GetDefaultObj();

};

// 0x68 (0x108 - 0xA0)
// Class FortniteAI.FortAIComponent_Telemetry
class UFortAIComponent_Telemetry : public UActorComponent
{
public:
	class UFortAIPawn*                           PossessedPawn;                                     // 0xA0(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAthenaAIController*                   CachedAIController;                                // 0xA8(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UController*                           DeathInstigator;                                   // 0xB0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UFortItemDefinition*>           GrabbedPickups;                                    // 0xB8(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UFortItemDefinition*>           DroppedPickups;                                    // 0xC8(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	class UFortAthenaAIRuntimeParameters_AIAnalytic* AnalyticRuntimeParameters;                         // 0xD8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UFortAthenaAITelemetryData*>    TelemetryData;                                     // 0xE0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2E13[0x18];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAIComponent_Telemetry* GetDefaultObj();

	void OnTetheredFollowerChanged(class UFortPawn* NewFollower, class UFortPawn* OldFollower);
	void OnPawnDied(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void OnDidDamage(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	class UFortAthenaAITelemetryData* GetOrCreateTelemetryData(TSubclassOf<class UFortAthenaAITelemetryData> TelemetryDataClass);
};

// 0x8 (0xA8 - 0xA0)
// Class FortniteAI.FortAIComponent_Voice
class UFortAIComponent_Voice : public UActorComponent
{
public:
	class UFortTaggedSoundBank*                  VoiceSoundBank;                                    // 0xA0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortAIComponent_Voice* GetDefaultObj();

	void SetVoiceSoundBank(class UFortTaggedSoundBank* InSoundBank);
	class UFortTaggedSoundBank* GetVoiceSoundBank();
};

// 0x70 (0x110 - 0xA0)
// Class FortniteAI.FortAIManagerMinigameComponent
class UFortAIManagerMinigameComponent : public UActorComponent
{
public:
	uint8                                        Pad_2E42[0x60];                                    // Fixing Size After Last Property 
	TArray<struct FGameplayTag>                  SpawnableAITypeTags;                               // 0x100(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortAIManagerMinigameComponent* GetDefaultObj();

	void OnPawnSpawned(class UPawn* Pawn, int32 RequestID);
	void OnPawnDied(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void HandleMinigameStarted();
	struct FGameplayTag GetSpawnTagFromPawnObject(class UObject* PawnObject);
};

// 0x90 (0x130 - 0xA0)
// Class FortniteAI.FortAISpawnerUtilityComponent
class UFortAISpawnerUtilityComponent : public UActorComponent
{
public:
	struct FGameplayTag                          AIPawnSpawnTypeTag;                                // 0xA0(0x4)(Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2E75[0x4];                                     // Fixing Size After Last Property 
	class UEnvQuery*                             EnvironmentQuery;                                  // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FEnvNamedValue>                QueryParams;                                       // 0xB0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	float                                        QueryRadius;                                       // 0xC0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        QueryMinDistance;                                  // 0xC4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnEnvironmentQueryFinishedDelegate;                // 0xC8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnUnownedPawnDiedDelegate;                         // 0xD8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_2E77[0x10];                                    // Fixing Size After Last Property 
	TArray<struct FVector>                       FreeSpawnSlots;                                    // 0xF8(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_2E78[0x18];                                    // Fixing Size After Last Property 
	TScriptInterface<class UFortSpatialGameplayInterface> CachedFortSpatialGameplay;                         // 0x120(0x10)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAISpawnerUtilityComponent* GetDefaultObj();

	void StartEnvironmentQuery();
	void SetQueryRadius(float Radius);
	void SetMinigame(class UFortMinigame* Minigame);
	void SetEQSQuery(TSoftObjectPtr<class UEnvQuery> SelectedEQSQuery);
	int32 RequestSpawn(class UFortAthenaAISpawnerDataComponentList* AISpawnerComponentList, struct FTransform& SpawnTransform);
	void OnUnownedPawnDied(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	bool IsSpawnCountCapped();
	void HandleUnownedPawnSpawned(class UFortPawn* FortPawn);
};

// 0x20 (0xC8 - 0xA8)
// Class FortniteAI.FortPawnComponent_AIInventoryManagement
class UFortPawnComponent_AIInventoryManagement : public UFortPawnComponent
{
public:
	struct FGameplayTagContainer                 CanEquipItemTags;                                  // 0xA8(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortPawnComponent_AIInventoryManagement* GetDefaultObj();

};

// 0x48 (0x70 - 0x28)
// Class FortniteAI.FortAIDataProvider_Ability
class UFortAIDataProvider_Ability : public UAIDataProvider
{
public:
	struct FGameplayTagContainer                 AbilityTag;                                        // 0x28(0x20)(Edit, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 AbilityBehaviorDistanceTag;                        // 0x48(0x20)(Edit, NativeAccessSpecifierPublic)
	float                                        BehaviorDistance;                                  // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxTargetSelectionRange;                           // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortAIDataProvider_Ability* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class FortniteAI.FortAIDataProvider_AIDirector
class UFortAIDataProvider_AIDirector : public UAIDataProvider
{
public:
	float                                        AIRelevantDistanceToPlayer;                        // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EncounterRelevantDistanceToPlayer;                 // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortAIDataProvider_AIDirector* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class FortniteAI.FortAIDataProvider_FloatCurveOverGameDifficulty
class UFortAIDataProvider_FloatCurveOverGameDifficulty : public UAIDataProvider
{
public:
	struct FScalableFloat                        ScalableFloat;                                     // 0x28(0x28)(Edit, NativeAccessSpecifierPrivate)
	float                                        FloatValue;                                        // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2E86[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAIDataProvider_FloatCurveOverGameDifficulty* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class FortniteAI.FortAIDataProvider_GoalProviderAbility
class UFortAIDataProvider_GoalProviderAbility : public UFortAIDataProvider_Ability
{
public:

	static class UClass* StaticClass();
	static class UFortAIDataProvider_GoalProviderAbility* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class FortniteAI.FortAIDataProvider_Pawn
class UFortAIDataProvider_Pawn : public UAIDataProvider
{
public:
	float                                        SightRadius;                                       // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HearingRadius;                                     // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ViewLocationOffsetFromGround;                      // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxStepHeight;                                     // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TetheredBoxCenterLocation;                         // 0x38(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TetheredBoxWidth;                                  // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TetheredBoxHeight;                                 // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TetheredBoxEQSGridSize;                            // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TetheredBoxEQSSpaceBetween;                        // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortAIDataProvider_Pawn* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class FortniteAI.FortAIDataProvider_ScalableFloat
class UFortAIDataProvider_ScalableFloat : public UAIDataProvider
{
public:
	struct FScalableFloat                        ScalableFloat;                                     // 0x28(0x28)(Edit, NativeAccessSpecifierPublic)
	float                                        FloatValue;                                        // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IntValue;                                          // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         BoolValue;                                         // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E90[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAIDataProvider_ScalableFloat* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class FortniteAI.FortAIAssetLoader
class UFortAIAssetLoader : public UObject
{
public:
	TArray<struct FPendingRequestManager>        PendingRequests;                                   // 0x28(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<class UObject*>                       AssetsLoaded;                                      // 0x38(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2E93[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAIAssetLoader* GetDefaultObj();

};

// 0xB0 (0xD8 - 0x28)
// Class FortniteAI.FortAIAssignment
class UFortAIAssignment : public UObject
{
public:
	struct FFortAIAssignmentIdentifier           AssignmentIdentifier;                              // 0x28(0x30)(Protected, NativeAccessSpecifierProtected)
	class UFortAIAssignmentSettings*             AssignmentSettings;                                // 0x58(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortAIGoalProvider*                   GoalProvider;                                      // 0x60(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<TWeakObjectPtr<class UAIGoalComponent>> GoalComponentsOnAssignment;                        // 0x68(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_2E97[0x50];                                    // Fixing Size After Last Property 
	TArray<struct FFortAIGoal>                   Goals;                                             // 0xC8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAIAssignment* GetDefaultObj();

};

// 0x60 (0x90 - 0x30)
// Class FortniteAI.FortAIAssignmentSettings
class UFortAIAssignmentSettings : public UDataAsset
{
public:
	TArray<struct FGoalSelectionQueryInfo>       GoalSelectionQueryInfos;                           // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	bool                                         bGoalLocationsAlwaysKnown;                         // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsEnemyAssignment;                                // 0x41(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2E9B[0x6];                                     // Fixing Size After Last Property 
	struct FGameplayTagContainer                 RequiredTags;                                      // 0x48(0x20)(Edit, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                 ProhibitedTags;                                    // 0x68(0x20)(Edit, NativeAccessSpecifierPrivate)
	float                                        MaxAIAllowedForAssignment;                         // 0x88(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaxAIAllowedPerGoal;                               // 0x8C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAIAssignmentSettings* GetDefaultObj();

};

// 0x8 (0x298 - 0x290)
// Class FortniteAI.FortAIBotDebugActor
class UFortAIBotDebugActor : public UActor
{
public:
	class UAthenaAIBotDebugMiniMapIndicator*     BotDebugMiniMapIndicator;                          // 0x290(0x8)(Net, ZeroConstructor, Transient, RepNotify, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAIBotDebugActor* GetDefaultObj();

	void OnRep_BotDebugMiniMapIndicator(class UAthenaAIBotDebugMiniMapIndicator* OldBotDebugMiniMap);
};

// 0x8 (0x298 - 0x290)
// Class FortniteAI.FortAIBotPOIDebugActor
class UFortAIBotPOIDebugActor : public UActor
{
public:
	class UAthenaAIBotPOIDebugMiniMapIndicator*  BotPOIDebugMiniMapIndicator;                       // 0x290(0x8)(Net, ZeroConstructor, Transient, RepNotify, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAIBotPOIDebugActor* GetDefaultObj();

	void OnRep_PlayerBotsDebugMiniMap(class UAthenaAIBotPOIDebugMiniMapIndicator* OldPlayerBotsDebugMiniMap);
};

// 0x60 (0x100 - 0xA0)
// Class FortniteAI.FortAICustomTargetingComponent
class UFortAICustomTargetingComponent : public UActorComponent
{
public:
	TArray<struct FAICustomTargetConfiguration>  Configurations;                                    // 0xA0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2EB0[0x50];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAICustomTargetingComponent* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class FortniteAI.FortAIDirectorLODAIConfig
class UFortAIDirectorLODAIConfig : public UObject
{
public:
	struct FScalableFloat                        SingleAIUnitCost;                                  // 0x28(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        Priority;                                          // 0x50(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortAIDirectorLODAIConfig* GetDefaultObj();

};

// 0xE0 (0x370 - 0x290)
// Class FortniteAI.FortAIDirectorDataManager
class UFortAIDirectorDataManager : public UActor
{
public:
	class UObject*                               OwnerObject;                                       // 0x290(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FAIDirectorEventData>          EventsToTrack;                                     // 0x298(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FFortAIDirectorFactorData>     FactorsToTrack;                                    // 0x2A8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_2EC5[0xA0];                                    // Fixing Size After Last Property 
	TArray<enum class EFortAIDirectorFactor>     FactorsBeingTracked;                               // 0x358(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_2EC6[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAIDirectorDataManager* GetDefaultObj();

	void TriggerEvent(struct FFortAIDirectorEvent& TriggeredEvent);
	float GetAIDirectorFactorValue(enum class EFortAIDirectorFactor AIDirectorFactor);
};

// 0x10 (0x40 - 0x30)
// Class FortniteAI.FortAIDirectorDataTrackingSettings
class UFortAIDirectorDataTrackingSettings : public UDataAsset
{
public:
	TSubclassOf<class UFortAIDirectorDataManager> PlayerDataManager;                                 // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UFortAIDirectorDataManager> EncounterDataManager;                              // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortAIDirectorDataTrackingSettings* GetDefaultObj();

};

// 0x50 (0x2E0 - 0x290)
// Class FortniteAI.FortAIDirectorEventManager
class UFortAIDirectorEventManager : public UActor
{
public:
	uint8                                        Pad_2ED4[0x50];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAIDirectorEventManager* GetDefaultObj();

};

// 0xD70 (0xD98 - 0x28)
// Class FortniteAI.FortAIEncounterInfo
class UFortAIEncounterInfo : public UObject
{
public:
	uint8                                        Pad_2F22[0x10];                                    // Fixing Size After Last Property 
	class UFortAISpawnGroupProgressionInfo*      SpawnGroupProgressionInfo;                         // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FFortSpawnPointsPercentageCurveSequenceInstanceInfo SpawnPointsPercentageCurveSequence;                // 0x40(0x10)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FFortIntensityCurveSequenceInstanceInfo IntensityCurveSequence;                            // 0x50(0x10)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                        BurstSpawnPointsPercentage;                        // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SpawnPointsMultiplier;                             // 0x64(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUseBreathers;                                     // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2F23[0x7];                                     // Fixing Size After Last Property 
	struct FCurveTableRowHandle                  LowPlayerPerformanceBreatherTimeSecondsCurve;      // 0x70(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FCurveTableRowHandle                  NormalPlayerPerformanceBreatherTimeSecondsCurve;   // 0x80(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FCurveTableRowHandle                  HighPlayerPerformanceBreatherTimeSecondsCurve;     // 0x90(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        EncounterTimeSeconds;                              // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2F25[0x4];                                     // Fixing Size After Last Property 
	TArray<struct FUtilityTypeFloatPair>         LockedUtilityValues;                               // 0xA8(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	int32                                        NumFreeUtilities;                                  // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        UtilityAdjustmentPeriodSeconds;                    // 0xBC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MinSpawnDistance;                                  // 0xC0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxSpawnDistance;                                  // 0xC4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        NumDirections;                                     // 0xC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bChangeDirectionsOnRest;                           // 0xCC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2F28[0x3];                                     // Fixing Size After Last Property 
	float                                        SpawnPointsPercentageLimit;                        // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        PawnNumberLimit;                                   // 0xD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FFortEncounterPawnNumberCaps          PawnNumberCaps;                                    // 0xD8(0x18)(Protected, NativeAccessSpecifierProtected)
	float                                        SpawningIntervalSeconds;                           // 0xF0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PreSpawnRequeryTime;                               // 0xF4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FFortEncounterSettingsFixedPace       EncounterSettingsFixed;                            // 0xF8(0x14)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_2F2D[0x4];                                     // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnEncounterSpawnDirectionsChosen;                  // 0x110(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                        NextRiftReplacementTime;                           // 0x120(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NextSpawningTime;                                  // 0x124(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortAIEncounterSpawnGroupCapsProfile EncounterSpawnGroupCapsProfile;                    // 0x128(0x30)(NativeAccessSpecifierPublic)
	TArray<struct FFortAIEncounterSpawnGroupCapsCategory> AdditionalSpawnGroupCapsCategories;                // 0x158(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FFortAIEncounterSpawnPointsProfile    EncounterSpawnPointsProfile;                       // 0x168(0x40)(NativeAccessSpecifierPublic)
	TArray<struct FFortAISpawnGroupUpgradeData>  AvailableUpgrades;                                 // 0x1A8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCurveTableRowHandle>          PawnDifficultyLevelModifiers;                      // 0x1B8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFortAIBaseLootDropRow>        BaseLootDropRows;                                  // 0x1C8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFortAILootDropModifierRow>    LootDropModifierRows;                              // 0x1D8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bRequiresReinitializationFromProfile;              // 0x1E8(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F2F[0x7];                                     // Fixing Size After Last Property 
	struct FCurveTableRowHandle                  DesiredHostilityCurve;                             // 0x1F0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortIntensityCurveSequenceProgression* IntensitySequenceProgression;                      // 0x200(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F31[0x70];                                    // Fixing Size After Last Property 
	float                                        AliveMultiplier;                                   // 0x278(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortEncounterSpawnLimitType      SpawnLimitType;                                    // 0x27C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F32[0x3];                                     // Fixing Size After Last Property 
	int32                                        SpawnLimit;                                        // 0x280(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PawnNumberLimitProgress;                           // 0x284(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SpawnPointsLimitProgress;                          // 0x288(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSpawnLimitReached;                                // 0x28C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasSpawnedAllBurstSpawnAI;                        // 0x28D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideAliveCounts;                              // 0x28E(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F33[0x1];                                     // Fixing Size After Last Property 
	int32                                        MinAliveOverride;                                  // 0x290(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxAliveOverride;                                  // 0x294(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HostilityThreshold;                                // 0x298(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PeakTimeSeconds;                                   // 0x29C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BreatherTimeSeconds;                               // 0x2A0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxRampTimeSeconds;                                // 0x2A4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinTimeBetweenBreathesSeconds;                     // 0x2A8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxFadeTimeSeconds;                                // 0x2AC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FadeEndIntensity;                                  // 0x2B0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FadeEndRemainingSpawnPointsPercentage;             // 0x2B4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CompletionPercentageToDisableBreathers;            // 0x2B8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F37[0x4];                                     // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnEncounterAllEnemiesKilled;                       // 0x2C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnEncounterEnemySpawned;                           // 0x2D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnEncounterEnemySpawnFailed;                       // 0x2E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnEncounterAllBurstEnemiesSpawned;                 // 0x2F0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnEncounterCompleted;                              // 0x300(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnEncounterPawnDied;                               // 0x310(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnEncounterSpawnedFinalEnemy;                      // 0x320(0x10)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnEncounterRiftSpawned;                            // 0x330(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnBuildingRiftBlockedShouldDie;                    // 0x340(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F38[0x3];                                     // Fixing Size After Last Property 
	bool                                         bDisplayThreatVisuals;                             // 0x353(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BaseDesiredUtilities[0x10];                        // 0x354(0x40)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F3A[0x4];                                     // Fixing Size After Last Property 
	struct FGameplayTagContainer                 UtilitiesRequiredTags[0x10];                       // 0x398(0x200)(Edit, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 InjectedTagForUtilityCheck;                        // 0x598(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F3B[0x4];                                     // Fixing Size After Last Property 
	float                                        MaxLargeSpawnGroupDiscountInterval;                // 0x5BC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxSelectionToSpawningDelay;                       // 0x5C0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F3D[0x54];                                    // Fixing Size After Last Property 
	TArray<struct FUtilityTypeFloatPair>         CurrentDesiredUtilities;                           // 0x618(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        UtilityRecentSelectionPenalties[0x10];             // 0x628(0x40)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UtilityEffectivenessMeasurements[0x10];            // 0x668(0x40)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                  UtilityEffectivenessMultiplierCurve;               // 0x6A8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UtilityEffectivenessInfluenceCap;                  // 0x6B8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F3E[0x4];                                     // Fixing Size After Last Property 
	TArray<struct FUtilityTypeFloatPair>         CurrentTopUtilityPercentages;                      // 0x6C0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<enum class EFortAIUtility>            UsedTopUtilities;                                  // 0x6D0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<enum class EFortAIUtility>            CurrentlySelectedFreeUtilities;                    // 0x6E0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	int32                                        NumUtilitiesConsidered;                            // 0x6F0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReactivityPercentage;                              // 0x6F4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAdjustUtilitiesDuringRest;                        // 0x6F8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDespawnAIsDuringRest;                             // 0x6F9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F41[0x2];                                     // Fixing Size After Last Property 
	float                                        LastPlayerCombatFactorUpdateTime;                  // 0x6FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LastUtilityAdjustTime;                             // 0x700(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LastSpawnPointAdjustmentTime;                      // 0x704(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LastLargeGroupSpawnTime;                           // 0x708(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F43[0x4];                                     // Fixing Size After Last Property 
	TArray<struct FAIEncounterSpawnGroupWeights> EnemySpawnData;                                    // 0x710(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FFortAIEncounterPIDController         EncounterPIDController;                            // 0x720(0x68)(NoDestructor, NativeAccessSpecifierPublic)
	int32                                        CurrentSpawnPointsCap;                             // 0x788(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentSpawnPointsUsed;                            // 0x78C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F44[0x8];                                     // Fixing Size After Last Property 
	int32                                        FailSafeMinSpawnPoints;                            // 0x798(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F45[0x4];                                     // Fixing Size After Last Property 
	TArray<struct FSpawnGroupInstanceInfo>       ActiveSpawnGroups;                                 // 0x7A0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        EncounterEngagementDistance;                       // 0x7B0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinRelevantBuildingDamagedDistance;                // 0x7B4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxRelevantBuildingDamagedDistance;                // 0x7B8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F48[0x14];                                    // Fixing Size After Last Property 
	class UActor*                                CurrentGroupSpawnPoint;                            // 0x7D0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortEncounterState               EncounterState;                                    // 0x7D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortEncounterPacingState         PacingState;                                       // 0x7D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F49[0x2];                                     // Fixing Size After Last Property 
	float                                        LastPacingStateTransitionTime;                     // 0x7DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortAIEncounterWaveProgressEstimation WaveProgressEstimate;                              // 0x7E0(0x1C)(NoDestructor, NativeAccessSpecifierPublic)
	float                                        DesiredDifficultyLevel;                            // 0x7FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DifficultyLevelOverride;                           // 0x800(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F4D[0x4];                                     // Fixing Size After Last Property 
	class UFortAIDirector*                       MyAIDirector;                                      // 0x808(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFortGoalActorEncounterDataManagerPair> DataManagers;                                      // 0x810(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class UActor*                                TargetObjective;                                   // 0x820(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyActiveAtNight;                                // 0x828(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F4E[0x3];                                     // Fixing Size After Last Property 
	int32                                        NumRiftsToUse;                                     // 0x82C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinRiftsToUse;                                     // 0x830(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumRiftsUsed;                                      // 0x834(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortEncounterSettings                EncounterSettings;                                 // 0x838(0xC0)(NativeAccessSpecifierPublic)
	float                                        EncounterStartTime;                                // 0x8F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HostilityCurveStartTime;                           // 0x8FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEncounterEnvironmentQueryInfo        DefaultEnvironmentQueryInfo;                       // 0x900(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FEncounterEnvironmentQueryInfo        FallbackEnvironmentQueryInfo;                      // 0x928(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FEncounterEnvironmentQueryInfo        OverrideEnvironmentQueryInfo;                      // 0x950(0x28)(NativeAccessSpecifierPublic)
	struct FEncounterEnvironmentQueryInfo        CurrentEnvironmentQueryInfo;                       // 0x978(0x28)(NativeAccessSpecifierPublic)
	bool                                         bNukeWavesAtDaybreak;                              // 0x9A0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNukeWavesAtEncounterEnd;                          // 0x9A1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNukeWavesAtEncounterDeactivation;                 // 0x9A2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F50[0x1];                                     // Fixing Size After Last Property 
	int32                                        ActiveEnemyCap;                                    // 0x9A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F51[0x8];                                     // Fixing Size After Last Property 
	float                                        CurrentHostilityLevel;                             // 0x9B0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F52[0x4];                                     // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnEncounterRampStarted;                            // 0x9B8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnEncounterPeakStarted;                            // 0x9C8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnEncounterFadeStarted;                            // 0x9D8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnEncounterRestStarted;                            // 0x9E8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnEncounterCombatParticipation;                    // 0x9F8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnEncounterOptionsChanged;                         // 0xA08(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TSubclassOf<class UBuildingRift>             RiftClassTemplate;                                 // 0xA18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F56[0x20];                                    // Fixing Size After Last Property 
	TMap<TWeakObjectPtr<class UActor>, struct FFortAISpawnerData> ExternalAISpawners;                                // 0xA40(0x50)(Transient, NativeAccessSpecifierPrivate)
	struct FFortAIEncounterQueryData             EncounterQueryData;                                // 0xA90(0x20)(NativeAccessSpecifierPrivate)
	class UFortAIEncounterRiftManager*           RiftManager;                                       // 0xAB0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                AssociatedMissionName;                             // 0xAB8(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EFortMissionType                  AssociatedMissionType;                             // 0xAC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2F57[0x3];                                     // Fixing Size After Last Property 
	uint8                                        bCanBeActive : 1;                                  // Mask: 0x1, PropSize: 0x10xACC(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_1D7 : 7;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_2F5A[0x3];                                     // Fixing Size After Last Property 
	TArray<class UFortAIAssignment*>             EncounterAssignments;                              // 0xAD0(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class UFortAIAssignmentSettings*             DefaultEncounterAssignmentSettings;                // 0xAE0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F5C[0x30];                                    // Fixing Size After Last Property 
	int32                                        MaxActiveAlive;                                    // 0xB18(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxSpawnPointsUsed;                                // 0xB1C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           OverrideSpawnPointsCurve;                          // 0xB20(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2F60[0x1F8];                                   // Fixing Size After Last Property 
	bool                                         bSendFullAnalyticsReport;                          // 0xD20(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bUseAILifespans;                                   // 0xD21(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bTrackCombatParticipation;                         // 0xD22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2F62[0x5];                                     // Fixing Size After Last Property 
	struct FGameplayTagContainer                 ModifierTags;                                      // 0xD28(0x20)(BlueprintVisible, BlueprintReadOnly, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<struct FFortAIEncounterTimedModifierTags> TimedModifierTags;                                 // 0xD48(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 GameContextTags;                                   // 0xD58(0x20)(BlueprintVisible, BlueprintReadOnly, Transient, Protected, NativeAccessSpecifierProtected)
	class UFortGameplayMutator_AILevelVariance*  AILevelMutator;                                    // 0xD78(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UFortGameplayMutator_AIEncounterModifierTags*> EncounterModifierTagsMutators;                     // 0xD80(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_2F64[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAIEncounterInfo* GetDefaultObj();

	void UnRegisterAISpawner(class UActor* InAISpawner);
	void SpawnTestAIGroup(class UFortAISpawnGroup* SpawnGroupToSpawn, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, class UActor* SpawnSource, const TArray<class UFortAbilitySet*>& AbilitySetsToGrantOnSpawn, const struct FFortAISpawnGroupUpgradeData& UpgradeData, bool bAllowAssigningToExternalSpawners, float SecondsBetweenSpawns);
	class UFortAIPawn* SpawnAIPawnReservedForEnemySpawner(class UActor* EnemySpawner, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation);
	void SetPawnNumberLimit(int32 InPawnNumberLimit);
	void SetNukeWavesAtEncounterEnd(bool bNuke);
	void SetEncounterActivationState(bool bEncounterActivityState);
	void RequestActivation(int32 ActivationDelay);
	void RegisterAISpawner(class UActor* InAISpawner);
	void OnRestStarted();
	void OnRampStarted();
	void OnPeakStarted();
	void OnGoalTakeDamage(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void OnGameDifficultyChanged();
	void OnFadeStarted();
	void OnEncounterPawnDamaged(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void NotifyRiftDied(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	bool GroupHasAIRemainingToSpawn(struct FFortAISpawnerData& FortAISpawnerData);
	int32 GetPawnNumberLimit();
	float GetEncounterTimeSeconds();
	void GetEncounterRifts(TArray<class UBuildingRift*>* OutRifts);
	class UActor* GetEncounterQueryActor();
	void GetEncounterGameplayTags(struct FGameplayTagContainer* OutEncounterTags);
	class UFortAIDirectorDataManager* GetEncounterDataManager();
	void GetEncounterAssignmentGoalActors(TArray<class UActor*>* OutGoalActors);
	bool GetCurrentSpawnAreaDirections(TArray<enum class EFortEncounterDirection>* OutDirections);
	bool EncounterHasReservedSpawnRequestForEnemySpawner(class UActor* EnemySpawner);
	void DespawnPendingAndCurrentAI();
	class UFortAIAssignment* CreateEncounterAssignment(class UFortAIAssignmentSettings* AssignmentSettings, class UActor* GoalActor);
};

// 0x0 (0x28 - 0x28)
// Class FortniteAI.FortAIEncounterInfoOwnerInterface
class UFortAIEncounterInfoOwnerInterface : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UFortAIEncounterInfoOwnerInterface* GetDefaultObj();

	class UFortAIEncounterInfo* GetEncounterInfo();
};

// 0x288 (0x2B0 - 0x28)
// Class FortniteAI.FortAIEncounterRiftManager
class UFortAIEncounterRiftManager : public UObject
{
public:
	uint8                                        Pad_2F7B[0x10];                                    // Fixing Size After Last Property 
	class UFortAIEncounterInfo*                  MyEncounter;                                       // 0x38(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortAIDirector*                       AIDirector;                                        // 0x40(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortAIEncounterSpawnArea             CurrentSpawnArea;                                  // 0x48(0x58)(NativeAccessSpecifierPublic)
	struct FFortAIEncounterSpawnArea             FutureSpawnArea;                                   // 0xA0(0x58)(NativeAccessSpecifierPublic)
	float                                        UpdateIntervalTimeSeconds;                         // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumRiftsToUse;                                     // 0xFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinRiftsToUse;                                     // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F7C[0x4];                                     // Fixing Size After Last Property 
	struct FFortEncounterSettings                EncounterSettings;                                 // 0x108(0xC0)(NativeAccessSpecifierPublic)
	float                                        ExtraSpawnLocationPercentage;                      // 0x1C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F7D[0x4];                                     // Fixing Size After Last Property 
	struct FEncounterEnvironmentQueryInfo        CurrentEnvironmentQueryInfo;                       // 0x1D0(0x28)(NativeAccessSpecifierPublic)
	struct FEncounterEnvironmentQueryInfo        FallbackEnvironmentQueryInfo;                      // 0x1F8(0x28)(NativeAccessSpecifierPublic)
	struct FFortAIEncounterQueryDirectionTracker EncounterQueryDirectionTracker;                    // 0x220(0x48)(NativeAccessSpecifierPublic)
	TSubclassOf<class UBuildingRift>             RiftClassTemplate;                                 // 0x268(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LastObjectiveBatchPathCostUpdateTime;              // 0x270(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LastPlayerBatchPathCostUpdateTime;                 // 0x274(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F80[0x38];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAIEncounterRiftManager* GetDefaultObj();

	void OnRiftDestroyed(class UActor* Rift);
	class UFortMission* GetAssociatedMission();
};

// 0x178 (0x1A0 - 0x28)
// Class FortniteAI.FortAIEncounterSequence
class UFortAIEncounterSequence : public UObject
{
public:
	struct FFortGeneratedEncounterSequence       GeneratedEncounterSequence;                        // 0x28(0x30)(Protected, NativeAccessSpecifierProtected)
	int32                                        CurrentEncounterIndexInSequence;                   // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2FB1[0x4];                                     // Fixing Size After Last Property 
	class UFortAIEncounterInfo*                  CurrentEncounter;                                  // 0x60(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortAIDirector*                       AssociatedAIDirector;                              // 0x68(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortMission*                          AssociatedMission;                                 // 0x70(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UActor*>                        TargetActors;                                      // 0x78(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	class UFortAIAssignmentSettings*             AssignmentSettings;                                // 0x88(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FEncounterEnvironmentQueryInfo        OverrideEnvironmentQueryInfo;                      // 0x90(0x28)(Protected, NativeAccessSpecifierProtected)
	class UActor*                                OptionalQueryActor;                                // 0xB8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 InjectedTags;                                      // 0xC0(0x20)(Protected, NativeAccessSpecifierProtected)
	struct FFortEncounterSettings                EncounterSettings;                                 // 0xE0(0xC0)(Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortAIEncounterSequence* GetDefaultObj();

	void StopCurrentEncounter();
	class UFortAIEncounterInfo* StartCurrentEncounterWithSavedData(enum class EFortEncounterSequenceResult* OutRequestResult, int32 ActivationDelay);
	class UFortAIEncounterInfo* StartCurrentEncounter(enum class EFortEncounterSequenceResult* OutRequestResult, TArray<class UActor*>& InTargetActors, class UFortAIAssignmentSettings* InAssignmentSettings, const struct FEncounterEnvironmentQueryInfo& InOverrideEnvironmentQueryInfo, class UActor* InOptionalQueryActor, const struct FGameplayTagContainer& InInjectedTags, const struct FFortEncounterSettings& InEncounterSettings, int32 ActivationDelay);
	void SetEncounterStartingData(TArray<class UActor*>& InTargetActors, class UFortAIAssignmentSettings* InAssignmentSettings, const struct FEncounterEnvironmentQueryInfo& InOverrideEnvironmentQueryInfo, class UActor* InOptionalQueryActor, const struct FGameplayTagContainer& InInjectedTags, const struct FFortEncounterSettings& InEncounterSettings);
	enum class EFortEncounterSequenceResult Previous();
	enum class EFortEncounterSequenceResult Next();
	enum class EFortEncounterSequenceResult Last();
	bool IsOnFinalIndexInSequence();
	bool HasEncounter();
	int32 GetNumEncountersInSequence();
	int32 GetEncounterIndexInSequence();
	class UFortAIEncounterInfo* GetCurrentEncounter();
	bool EncounterBelongsToSequence(class UFortAIEncounterInfo* InEncounter);
};

// 0x0 (0x28 - 0x28)
// Class FortniteAI.FortAIEncounterTargetInterface
class UFortAIEncounterTargetInterface : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UFortAIEncounterTargetInterface* GetDefaultObj();

	bool IsFloatingTarget();
	float GetObjectiveCompletionPercentage();
};

// 0x0 (0x28 - 0x28)
// Class FortniteAI.FortAIFunctionLibrary
class UFortAIFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UFortAIFunctionLibrary* GetDefaultObj();

	bool TeleportAIPawn(class UFortAIPawn* AIPawn, const struct FVector& DestLocation, const struct FRotator& DestRotation, bool bIgnoreCollision);
	void SetHearingRange(class UActor* AIAgent, float Range);
	void RequestNavUpdateForBuilding(class UBuildingActor* BuildingActor);
	void MakeNoiseEventAtLocation(class UActor* NoiseMaker, float MaxRange, struct FVector& NoiseLocation, class FName NoiseTag);
	void MakeNoiseEvent(class UActor* NoiseMaker, float MaxRange, class FName NoiseTag);
	bool IsConcealedByPerceptionModifiers(class UObject* WorldContextObject, const struct FVector& ObserverLocation, const struct FVector& TargetLocation, float* OutConcealment);
	class UFortAthenaAIRuntimeParameters* GetOrCreateAIRuntimeParameters(class UAIController* AIController, TSubclassOf<class UFortAthenaAIRuntimeParameters> ParametersClass);
	class UAthenaAISpawner* GetAISpawner(class UObject* WorldContextObject);
};

// 0x170 (0x400 - 0x290)
// Class FortniteAI.FortAIGoalManager
class UFortAIGoalManager : public UActor
{
public:
	uint8                                        Pad_304C[0x8];                                     // Fixing Size After Last Property 
	TArray<class UFortAIAssignment*>             WorldAssignments;                                  // 0x298(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UFortAIAssignment*>             WorldEnemyAssignments;                             // 0x2A8(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	class UFortAIAssignment*                     DefaultAttackPlayersAssignment;                    // 0x2B8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3050[0x60];                                    // Fixing Size After Last Property 
	TArray<class UEnvQuery*>                     CombinedQueries;                                   // 0x320(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3052[0x50];                                    // Fixing Size After Last Property 
	class UFortAIAssignmentSettings*             DefaultEncounterAssignmentSettings;                // 0x380(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAIAssignmentSettings*             DefaultEnemyAssignmentSettings;                    // 0x388(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FPawnGoalSelectionTableEntry>  PawnGoalSelectionTable;                            // 0x390(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3053[0x60];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAIGoalManager* GetDefaultObj();

	void SetCurrentGoalDiscouragement(class UObject* WorldContext, class UFortAIController* AI);
	void RemoveWorldAssignment(class UObject* WorldContextObject, const struct FFortAIAssignmentIdentifier& AssignmentIdentifier);
	void RemoveGoalsFromWorldAssignment(class UObject* WorldContextObject, struct FFortAIAssignmentIdentifier& AssignmentIdentifier, TArray<struct FFortAIGoalInfo>& GoalInfos);
	void RemoveGoalFromWorldAssignment(class UObject* WorldContextObject, struct FFortAIAssignmentIdentifier& AssignmentIdentifier, struct FFortAIGoalInfo& GoalInfo);
	void MakeGoalsFromLocationsAndActor(TArray<struct FFortAIGoalInfo>* Goals, class UObject* WorldContextObject, TArray<struct FVector>& GoalLocations, class UActor* GoalActor);
	void MakeGoalsFromLocations(TArray<struct FFortAIGoalInfo>* Goals, class UObject* WorldContextObject, TArray<struct FVector>& GoalLocations);
	void MakeGoalsFromActors(TArray<struct FFortAIGoalInfo>* Goals, class UObject* WorldContextObject, TArray<class UActor*>& GoalActors, bool bActorsAlwaysPerceived, bool bGoalActorsAllowUndermining);
	void MakeGoalFromLocation(struct FFortAIGoalInfo* Goal, class UObject* WorldContextObject, struct FVector& GoalLocation);
	void MakeGoalFromActor(struct FFortAIGoalInfo* Goal, class UObject* WorldContextObject, class UActor* GoalActor, bool bActorAlwaysPerceived, bool bGoalActorAllowsUndermining);
	void CreateWorldAssignment(class UObject* WorldContextObject, const struct FFortAIAssignmentIdentifier& WorldAssignmentIdentifier, class UFortAIAssignmentSettings* AssignmentSettings, TSubclassOf<class UFortAIGoalProvider> GoalProvider, struct FFortAIAssignmentIdentifier* AssignmentIdentifier, enum class EAssignmentCreationResult* CreationResult);
	class UFortAIAssignment* AddWorldAssignment(class UFortAIAssignmentSettings* AssignmentSettings, class UActor* GoalActor);
	void AddGoalToWorldAssignment(class UObject* WorldContextObject, struct FFortAIAssignmentIdentifier& AssignmentIdentifier, struct FFortAIGoalInfo& GoalInfo);
	void AddGoalsToWorldAssignment(class UObject* WorldContextObject, struct FFortAIAssignmentIdentifier& AssignmentIdentifier, TArray<struct FFortAIGoalInfo>& GoalInfos);
	void AddGoalActorToAssignment(class UFortAIAssignment* Assignment, class UActor* GoalActor);
	void AddGoal(class UActor* GoalActor, class UFortAIAssignmentSettings* GoalSettings);
};

// 0x18 (0xE0 - 0xC8)
// Class FortniteAI.FortAINearbyActorsPerceptionComponent
class UFortAINearbyActorsPerceptionComponent : public UFortNearbyActorsPerceptionComponent
{
public:
	uint8                                        Pad_3062[0x8];                                     // Fixing Size After Last Property 
	TScriptInterface<class UFortAthenaAILODSettings> CachedLODSettingsManager;                          // 0xD0(0x10)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAINearbyActorsPerceptionComponent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class FortniteAI.FortAIObjectiveInterface
class UFortAIObjectiveInterface : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UFortAIObjectiveInterface* GetDefaultObj();

};

// 0x68 (0x98 - 0x30)
// Class FortniteAI.FortAIPawnCustomizationDefinition
class UFortAIPawnCustomizationDefinition : public UPrimaryDataAsset
{
public:
	uint8                                        Pad_3067[0x8];                                     // Fixing Size After Last Property 
	TSoftObjectPtr<class USkeletalMesh>          SkeletalMesh;                                      // 0x38(0x20)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFortAIPawnMaterialDefinition> OverrideMaterials;                                 // 0x58(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UAnimInstance>           AnimationBP;                                       // 0x68(0x20)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UCustomCharacterPart*>          CharacterParts;                                    // 0x88(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortAIPawnCustomizationDefinition* GetDefaultObj();

};

// 0x48 (0x70 - 0x28)
// Class FortniteAI.FortAIPawnVariant
class UFortAIPawnVariant : public UObject
{
public:
	TArray<TSubclassOf<class UFortAIPawn>>       PawnClasses;                                       // 0x28(0x10)(ZeroConstructor, Deprecated, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FFortAIPawnVariantDefinition>  PawnVariantDefinitions;                            // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        MinPlayersToSpawnVariant;                          // 0x48(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_306E[0x4];                                     // Fixing Size After Last Property 
	struct FDataTableRowHandle                   SpawnPointValueHandle;                             // 0x50(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate)
	int32                                        CachedSpawnPointValue;                             // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        EncounterExpectedLifespan;                         // 0x64(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        VersionNum;                                        // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3070[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAIPawnVariant* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class FortniteAI.FortAIRootAssignmentProviderInterface
class UFortAIRootAssignmentProviderInterface : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UFortAIRootAssignmentProviderInterface* GetDefaultObj();

	struct FFortAIAssignmentIdentifier GetRootAssignmentIdentifier();
};

// 0x0 (0x290 - 0x290)
// Class FortniteAI.FortAISpawnerActorBase
class UFortAISpawnerActorBase : public UActor
{
public:

	static class UClass* StaticClass();
	static class UFortAISpawnerActorBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class FortniteAI.FortAISpawnerInterface
class UFortAISpawnerInterface : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UFortAISpawnerInterface* GetDefaultObj();

	bool OnReceiveSpawnGroup();
	bool IsReadyToReceiveNewSpawnGroup();
};

// 0x160 (0x190 - 0x30)
// Class FortniteAI.FortAISpawnGroup
class UFortAISpawnGroup : public UPrimaryDataAsset
{
public:
	float                                        EnemyUtilities[0x10];                              // 0x30(0x40)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSpawnGroupEnemy>              EnemiesToSpawn;                                    // 0x70(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	bool                                         bIsPrototype;                                      // 0x80(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsValidForEnemySpawners;                          // 0x81(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsLargeSpawnGroup;                                // 0x82(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3092[0x1];                                     // Fixing Size After Last Property 
	float                                        MaxDiscountRatio;                                  // 0x84(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUseWeightSystem;                                  // 0x88(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3093[0x7];                                     // Fixing Size After Last Property 
	struct FScalableFloat                        Weight;                                            // 0x90(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MinNumber;                                         // 0xB8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxNumber;                                         // 0xE0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FCurveTableRowHandle                  MaxGroupCategoryPopulationDensityCurve;            // 0x108(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FFortSpawnGroupEncounterTypeData> EncounterTypeData;                                 // 0x118(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 SpawnGroupGameplayTags;                            // 0x128(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagQuery                     RequiredTagQuery;                                  // 0x148(0x48)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortAISpawnGroup* GetDefaultObj();

	bool IsValidForEnemySpawners();
	bool IsPrototype();
	bool IsLargeSpawnGroup();
	int32 GetNumberOfEnemies();
	TSubclassOf<class UFortAIPawnVariant> GetEnemy(int32 EnemyIndex);
};

// 0x10 (0x38 - 0x28)
// Class FortniteAI.FortAISpawnGroupCapsCategorySet
class UFortAISpawnGroupCapsCategorySet : public UObject
{
public:
	TArray<struct FFortAIEncounterSpawnGroupCapsCategory> SpawnGroupCapsCategories;                          // 0x28(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortAISpawnGroupCapsCategorySet* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class FortniteAI.FortAISpawnGroupProgressionInfo
class UFortAISpawnGroupProgressionInfo : public UDataAsset
{
public:
	TArray<struct FSpawnGroupProgression>        SpawnGroups;                                       // 0x30(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAISpawnGroupProgressionInfo* GetDefaultObj();

};

// 0xF0 (0x118 - 0x28)
// Class FortniteAI.FortAISpawnGroupUpgrade
class UFortAISpawnGroupUpgrade : public UObject
{
public:
	struct FGameplayTagContainer                 UpgradeTags;                                       // 0x28(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagQuery                     GroupRequiredTagQuery;                             // 0x48(0x48)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FFortAIPawnUpgrade>            BasePawnUpgrades;                                  // 0x90(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class FName                                  AdditionalModifiersLootTierGroup;                  // 0xA0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bInvalidForEnemySpawners;                          // 0xA4(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_30A3[0x3];                                     // Fixing Size After Last Property 
	float                                        SpawnGroupDiscountPercentage;                      // 0xA8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_30A5[0x4];                                     // Fixing Size After Last Property 
	struct FFortAISpawnGroupUpgradeUIData        UIData;                                            // 0xB0(0x68)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortAISpawnGroupUpgrade* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class FortniteAI.FortAISpawnGroupUpgradeProbabilities
class UFortAISpawnGroupUpgradeProbabilities : public UObject
{
public:
	bool                                         bIsGuaranteedUpgrade;                              // 0x28(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_30AA[0x7];                                     // Fixing Size After Last Property 
	TArray<struct FFortAIPawnUpgradeProbability> UpgradeProbabilities;                              // 0x30(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortAISpawnGroupUpgradeProbabilities* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class FortniteAI.FortAITetheringBoxBoundsInterface
class UFortAITetheringBoxBoundsInterface : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UFortAITetheringBoxBoundsInterface* GetDefaultObj();

	float GetTetheredBoxBoundsWidth();
	float GetTetheredBoxBoundsHeight();
	float GetTetheredBoxBoundsEQSSpaceBetween();
	float GetTetheredBoxBoundsEQSGridSize();
	struct FVector GetTetheredBoxBoundsCenter();
};

// 0x258 (0x288 - 0x30)
// Class FortniteAI.FortAsyncAction_MakeTieredWaveEncounterSettings
class UFortAsyncAction_MakeTieredWaveEncounterSettings : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnComplete;                                        // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FTieredWaveSetData                    WaveData;                                          // 0x40(0x178)(Transient, NativeAccessSpecifierPrivate)
	struct FFortEncounterSettings                EncounterSettings;                                 // 0x1B8(0xC0)(Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_30BD[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAsyncAction_MakeTieredWaveEncounterSettings* GetDefaultObj();

	class UFortAsyncAction_MakeTieredWaveEncounterSettings* CreateAsyncAction_MakeTieredWaveEncounterSettings(struct FTieredWaveSetData& WaveData, struct FFortEncounterSettings& InEncounterSettings);
};

// 0x1368 (0x1720 - 0x3B8)
// Class FortniteAI.FortAthenaAIBotController
class UFortAthenaAIBotController : public UAIController
{
public:
	uint8                                        Pad_31C6[0x70];                                    // Fixing Size After Last Property 
	class UActor*                                PreviousVehicle;                                   // 0x428(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnPickupCreated;                                   // 0x430(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_31C7[0x10];                                    // Fixing Size After Last Property 
	TMap<struct FGuid, struct FFortAbilitySetHandle> AppliedInGameModifierAbilitySetHandles;            // 0x450(0x50)(Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TSet<struct FGuid>                           GadgetTrackedAttributeItemInstanceIds;             // 0x4A0(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_31C9[0x50];                                    // Fixing Size After Last Property 
	struct FFortBotTargetHandler                 TargetHandler;                                     // 0x540(0x40)(Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_31CA[0x1];                                     // Fixing Size After Last Property 
	uint8                                        BitPad_1E0 : 1;                                    // Fixing Bit-Field Size 
	uint8                                        bIsAnAthenaGameParticipant : 1;                    // Mask: 0x2, PropSize: 0x10x581(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_1E1 : 6;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_31CC[0x6];                                     // Fixing Size After Last Property 
	enum class EReachLocationValidationMode      ReachLocationValidationMode;                       // 0x588(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_31CD[0x7];                                     // Fixing Size After Last Property 
	class UBehaviorTree*                         BehaviorTree;                                      // 0x590(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FFortBotInventoryInfo                 SlotItems[0x6];                                    // 0x598(0x270)(Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_31CE[0x48];                                    // Fixing Size After Last Property 
	class UFortAthenaAIBotInventoryDigestedSkillSet* CacheInventoryDigestedSkillSet;                    // 0x850(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_31D1[0x8];                                     // Fixing Size After Last Property 
	class UFortPlayerPawnAthena*                 PlayerBotPawn;                                     // 0x860(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAthenaAIServicePlayerBots*            CachedAIServicePlayerBots;                         // 0x868(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortGameModeAthena*                   CachedGameMode;                                    // 0x870(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortAthenaAIRuntimeParametersComponent* CachedAIRuntimeParametersComponent;                // 0x878(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortAthenaAIRuntimeParameters_Leash*  CachedLeashRuntimeParameters;                      // 0x880(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortAthenaAIRuntimeParameters_AffiliationBase* CachedAffiliationRuntimeParameters;                // 0x888(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortAthenaNpcPatrollingComponent*     CachedPatrollingComponent;                         // 0x890(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortAIControllerPerksComponent*       CachedAIPerksComponent;                            // 0x898(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortAICombatTokenConsumerComponent*   CachedTokenConsumerComponent;                      // 0x8A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TScriptInterface<class UFortAIAimingInterface> CachedAIAimingInterface;                           // 0x8A8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_31D6[0x8];                                     // Fixing Size After Last Property 
	TArray<struct FBotDelayedStimulus>           DelayedStimulus;                                   // 0x8C0(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_31D7[0x18];                                    // Fixing Size After Last Property 
	TArray<struct FFortBotThreatActorInfo>       ObjectsThreatList;                                 // 0x8E8(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<struct FFortBotThreatActorInfo>       TrapsThreatList;                                   // 0x8F8(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	enum class EAlertLevel                       CurrentAlertLevel;                                 // 0x908(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_31D8[0x7];                                     // Fixing Size After Last Property 
	struct FAlertLevelInfo                       DefaultAlertLevelInfo;                             // 0x910(0x10)(Transient, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnAlertLevelChangedEventDelegate;                  // 0x920(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnStealthMeterChangedEventDelegate;                // 0x930(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_31DB[0x8];                                     // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnAgentDBNOStatusChangedEventDelegate;             // 0x948(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnAgentDiedEventDelegate;                          // 0x958(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnAgentGameOver;                                   // 0x968(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_31DC[0x48];                                    // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnPlayerPawnKilledByBot;                           // 0x9C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnAIPawnKilledByBot;                               // 0x9D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnCurrentTargetChangedDelegate;                    // 0x9E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_31DD[0x30];                                    // Fixing Size After Last Property 
	class UFortInventory*                        Inventory;                                         // 0xA20(0x8)(Net, ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Skill;                                             // 0xA28(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bAllowUnsupportedItemsInDefaultInventory : 1;      // Mask: 0x1, PropSize: 0x10xA2C(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_1E2 : 7;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_31DE[0x3];                                     // Fixing Size After Last Property 
	TArray<TSubclassOf<class UFortAthenaAIBotSkillSet>> BotSkillSetClasses;                                // 0xA30(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_31DF[0x20];                                    // Fixing Size After Last Property 
	class UFortAthenaAIBotInventoryItems*        StartupInventory;                                  // 0xA60(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, Protected, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FFortAthenaLoadout                    CosmeticLoadoutBC;                                 // 0xA68(0x260)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<class UCustomCharacterPart*>          CustomCharacterPartOverridesBC;                    // 0xCC8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	class UFortBotNameSettings*                  NameSettingsBC;                                    // 0xCD8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, Protected, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SpectateOnDeathMinTime;                            // 0xCE0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SpectateOnDeathMaxTime;                            // 0xD08(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        EmotesMaxCount;                                    // 0xD30(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FVector                               LeashGameplayVolumeProjectExtent;                  // 0xD58(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortAthenaAIBotPerceptionDigestedSkillSet* CachePerceptionDigestedSkillSet;                   // 0xD70(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortAthenaAIBotHarvestDigestedSkillSet* CacheHarvestDigestedSkillSet;                      // 0xD78(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortAthenaAIBotMovementDigestedSkillSet* CacheMovementSkillSet;                             // 0xD80(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortAthenaAIBotLootingDigestedSkillSet* CacheLootingSkillSet;                              // 0xD88(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortAthenaAIBotAttackingDigestedSkillSet* CacheAttackingSkillSet;                            // 0xD90(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortAthenaAIBotPlayStyleDigestedSkillSet* CachePlayStyleSkillSet;                            // 0xD98(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortAthenaAIBotUnstuckDigestedSkillSet* CacheUnstuckSkillSet;                              // 0xDA0(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortAthenaAIBotRangeAttackDigestedSkillSet* CacheRangeAttackSkillSet;                          // 0xDA8(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortAthenaAIBotVehicleDigestedSkillSet* CacheVehicleSkillSet;                              // 0xDB0(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_31E7[0x60];                                    // Fixing Size After Last Property 
	class UFortInteractContextInfo*              InteractContextInfo;                               // 0xE18(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_31E9[0x78];                                    // Fixing Size After Last Property 
	class UFortAthenaAIBotAimingDigestedSkillSet* CacheAimingDigestedSkillSet;                       // 0xE98(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_31EA[0x4];                                     // Fixing Size After Last Property 
	uint8                                        BitPad_1E3 : 1;                                    // Fixing Bit-Field Size 
	uint8                                        bCanBeDestroyedOnDeath : 1;                        // Mask: 0x2, PropSize: 0x10xEA4(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_1E4 : 6;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_31EB[0xB];                                     // Fixing Size After Last Property 
	struct FVector                               LastDeathLocation;                                 // 0xEB0(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRotator                              LastDeathRotation;                                 // 0xEC8(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UFortWorldItem*                        CachedWorldItem;                                   // 0xEE0(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_31ED[0x8];                                     // Fixing Size After Last Property 
	class UFortWeapon*                           CacheWeaponUsedToCalculateType;                    // 0xEF0(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCachedIsUsingArcedProjectileWeapon;               // 0xEF8(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_31EE[0x3];                                     // Fixing Size After Last Property 
	float                                        CachedProjectileGravityScale;                      // 0xEFC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortWeapon*                           CachedWeaponUsedToCalculateProjectileData;         // 0xF00(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UStatManager*                          StatManager;                                       // 0xF08(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FBuildingWeakSpotData>         ActiveWeakSpots;                                   // 0xF10(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_31EF[0x28];                                    // Fixing Size After Last Property 
	TSubclassOf<class UFortPawn>                 CacheBotPawnClass;                                 // 0xF48(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_31F0[0x8];                                     // Fixing Size After Last Property 
	class UActor*                                CurrentLootActor;                                  // 0xF58(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAthenaMarkerComponent*                MarkerComponent;                                   // 0xF60(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                BotPlayerName;                                     // 0xF68(0x10)(ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                          DescriptorTag;                                     // 0xF78(0x4)(Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_31F1[0x4];                                     // Fixing Size After Last Property 
	class FString                                BotIDSuffix;                                       // 0xF80(0x10)(Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                BotPlayerNameWithSkillRating;                      // 0xF90(0x10)(ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_31F2[0x10];                                    // Fixing Size After Last Property 
	class UFortAthenaMutator_SpawningPolicyData* PolicyDataSpawner;                                 // 0xFB0(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_31F5[0x128];                                   // Fixing Size After Last Property 
	class UFortControllerComponent_Telemetry*    FortControllerComponent_Telemetry;                 // 0x10E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bForceUsingBuildingTool;                           // 0x10E8(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bForceHolsterWeapon;                               // 0x10E9(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_31F7[0x6];                                     // Fixing Size After Last Property 
	class UFortWorldItem*                        PendingEquipWeapon;                                // 0x10F0(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_31F8[0x50];                                    // Fixing Size After Last Property 
	class UPawn*                                 PlayerToSpectateOnDeath;                           // 0x1148(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnPlayerPawnAISpawnedDelegate;                     // 0x1150(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_31FA[0x120];                                   // Fixing Size After Last Property 
	class UAISenseConfig_Sight*                  AISenseConfig_SightOverride;                       // 0x1280(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAISenseConfig_Hearing*                AISenseConfig_HearingOverride;                     // 0x1288(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_31FB[0x10];                                    // Fixing Size After Last Property 
	class UActor*                                BotOwner;                                          // 0x12A0(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        BotControllerUID;                                  // 0x12A8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_31FC[0x4];                                     // Fixing Size After Last Property 
	class UFortPlayerPawnAthena*                 ReviveTarget;                                      // 0x12B0(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_31FD[0x90];                                    // Fixing Size After Last Property 
	class UFortAthenaAIBotCustomizationData*     BotData;                                           // 0x1348(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDebugMinimapData                     DebugMinimapData;                                  // 0x1350(0x1B0)(Transient, Protected, NativeAccessSpecifierProtected)
	class UFortPlayerPawnAthena*                 RevivePlayerPawnToken;                             // 0x1500(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_31FE[0x18];                                    // Fixing Size After Last Property 
	class UActor*                                LeashActorToFollow;                                // 0x1520(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               LeashActorToFollowLocalOffset;                     // 0x1528(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortAthenaAILeashVolume*              LeashVolume;                                       // 0x1540(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UGameplayVolume>        LeashGameplayVolume;                               // 0x1548(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortGameStateComponent_AffiliationManager* CachedAffiliationManager;                          // 0x1550(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortActorComponent_Affiliation*       CachedAffiliationComponent;                        // 0x1558(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsAffectedByMutatorHealthAndShieldModifiers;      // 0x1560(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3203[0x7];                                     // Fixing Size After Last Property 
	bool                                         bHasChangedPawnCullDistanceToAggroMode;            // 0x1568(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3204[0x7];                                     // Fixing Size After Last Property 
	class UFortAthenaAIRuntimeParameters_AIBotRespawn* RespawnRuntimeParameters;                          // 0x1570(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UActor>                 CurrentBlockingObstacle;                           // 0x1578(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3205[0x10];                                    // Fixing Size After Last Property 
	TArray<TWeakObjectPtr<class UActor>>         NoSmashActors;                                     // 0x1590(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_3206[0x8];                                     // Fixing Size After Last Property 
	class UPawn*                                 FinisherPawn;                                      // 0x15A8(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3207[0x54];                                    // Fixing Size After Last Property 
	enum class EFortPawnStasisMode               PreviousStasisMode;                                // 0x1604(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bPostponeGiveWeaponCheat;                          // 0x1605(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bPostponeGiveMaterialsCheat;                       // 0x1606(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3208[0x1];                                     // Fixing Size After Last Property 
	float                                        StartSpectatingTime;                               // 0x1608(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3209[0xB4];                                    // Fixing Size After Last Property 
	class UAthenaDanceItemDefinition*            RequestedEmoteAsset;                               // 0x16C0(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_320A[0x8];                                     // Fixing Size After Last Property 
	class UBehaviorTree*                         BTAssetToRunOnPawnAISpawned;                       // 0x16D0(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_320B[0x48];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaAIBotController* GetDefaultObj();

	void UpdateLeashActorToFollowLocation();
	void ThankBusDriver();
	void SwitchTeam(uint8 TeamIndex);
	void StopSecondaryFire(bool bFireWhenStopping);
	void StopFire();
	void StopEmote();
	void StartSecondaryFire();
	void StartFire();
	void SetSkillSet(TSubclassOf<class UFortAthenaAIBotSkillSet> SkillSetClass);
	void SetRadialLeashOuterRadius(float OuterRadius);
	void SetRadialLeashLocation(struct FVector& Location);
	void SetRadialLeashInnerRadius(float InnerRadius);
	void SetRadialLeashAlertLevelOverride(struct FLeashInfoOverride& LeashInfoOverride, enum class EAlertLevel AlertLevel);
	void SetPatrollingEnable(bool bEnable);
	void SetLeashVolume(class UFortAthenaAILeashVolume* InLeashVolume);
	void SetLeashReturnLocationMode(enum class ELeashReturnLocationMode ReturnMode);
	void SetLeashGameplayVolume(class UGameplayVolume* InLeashGameplayVolume);
	void SetLeashActorToFollow(class UActor* ActorToFollow, float LeashLocationUpdateRate, const struct FVector& LocalOffset);
	void SetBotOwner(class UActor* InBotOwner);
	void RequestEmote(struct FPrimaryAssetId& EmotePrimaryAssetId, float InfiniteEmoteMaxDuration);
	void RemoveSkillSet(TSubclassOf<class UFortAthenaAIBotSkillSet> SkillSetClass);
	void RemoveEmoteRequest();
	void ReleaseBuildTool();
	void QueueStim(class UActor* SourceActor, struct FVector& SourceLocation, struct FVector& SourceDirection, enum class EStimType NewStimType, float StimStrength, class FName StimTag);
	void PlayEmote(struct FPrimaryAssetId& EmotePrimaryAssetId);
	void OverrideSkill(float NewSkill);
	void OverrideAggressivenessPlayStyle(bool bInIsAggressive);
	void OnTargetPawnDestroyed();
	void OnTargetPawnDead(class UFortPawn* FortPawn);
	void OnTargetPawnDamaged(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void OnTargetBuildingDestroyed(class UBuildingActor* Building, class UAthenaAIController* AIController);
	void OnTargetActorDestroyed(class UActor* DestroyedActor);
	void OnServerMarkerAdded(struct FFortWorldMarkerData& MarkerData);
	void OnPossessedPawnReceiveDamage(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void OnPossesedPawnDied(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void OnPerceptionSensed(class UActor* SourceActor, const struct FAIStimulus& Stim);
	void OnPawnWeaponChanged(class UFortWeapon* NewWeapon, class UFortWeapon* OldWeapon);
	void OnPawnDidDamage(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* HitComponent, class FName BoneName, const struct FVector& Momentum);
	void OnMovementModeChange(class UCharacter* InCharacter, enum class EMovementMode PrevMovementMode, uint8 PreviousCustomMode);
	void OnLaunched(const struct FVector& LaunchVelocity, bool bXYOverride, bool bZOverride);
	void OnKnockbacked(const struct FGameplayTag& KnockbackTypeTag);
	void OnEndSpectating(class UFortPlayerStateZone* Spectator);
	void OnCurrentHarvestableDestroyed(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void OnBeginSpectating(class UFortPlayerStateZone* Spectator);
	void OnAlertLevelChanged(enum class EAlertLevel OldAlertLevel, enum class EAlertLevel NewAlertLevel);
	void OnAgentDBNO(class UFortPawn* InPlayer, bool bInIsDBNO);
	void NotifyPickupsSpawnedOnDeath(TArray<class UFortPickup*>& SpawnedPickups, int32 SpawnRequestId);
	bool IsAnAthenaGameParticipant();
	class UFortWorldItem* GetSlotItemByTag(struct FGameplayTag& TagToCheck);
	class UFortWorldItem* GetSlotItemByItemDefinition(class UFortItemDefinition* ItemDefinition);
	class UAthenaMarkerComponent* GetMarkerComponent();
	class UActor* GetCurrentThreat();
	class UActor* GetBotOwner();
	class UFortWeapon* EquipWeaponByTag(struct FGameplayTag& WeaponTag);
	class UFortWeapon* EquipWeapon(class UFortWorldItem* Weapon);
	class UFortWeapon* EquipMeleeWeapon();
	class UFortWeapon* EquipBestWeapon();
	void Cheat_ForceAthenaCosmeticItemInSlot(class UAthenaCosmeticItemDefinition* CosmeticItem, enum class EAthenaCustomizationCategory Slot, int32 Index);
	void Cheat_ClearForcedCosmeticItems();
	void ChangeActiveVariantForCosmeticItem(class FName ItemTemplateToChange, const struct FGameplayTag& VariantChannelToChange, const struct FGameplayTag& DesiredActiveVariant);
	void BlueprintOnBehaviorTreeStarted();
	void AddTargetInfos(TArray<class UActor*>& Targets, enum class EPerceptionState PerceptionState, float ForgetTime, float ForgetDistance);
	void AddTargetInfo(class UActor* Target, bool bForceTarget, enum class EPerceptionState PerceptionState, float ForgetTime, float ForgetDistance);
};

// 0x50 (0x80 - 0x30)
// Class FortniteAI.FortAthenaAIBotNameDataAsset
class UFortAthenaAIBotNameDataAsset : public UDataAsset
{
public:
	TSoftObjectPtr<class UDataTable>             DefaultNameDataTable;                              // 0x30(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UDataTable>             ChinaNameDataTable;                                // 0x50(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FFortAthenaAIBotNameRegionData> RegionData;                                        // 0x70(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaAIBotNameDataAsset* GetDefaultObj();

};

// 0x40 (0xE0 - 0xA0)
// Class FortniteAI.FortAthenaTrackableAIObjectComponent
class UFortAthenaTrackableAIObjectComponent : public UActorComponent
{
public:
	uint8                                        Pad_322B[0x10];                                    // Fixing Size After Last Property 
	struct FGameplayTagContainer                 GameplayTags;                                      // 0xB0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	uint8                                        Pad_322D[0x8];                                     // Fixing Size After Last Property 
	TSubclassOf<class UObject>                   CustomRegistrationClass;                           // 0xD8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaTrackableAIObjectComponent* GetDefaultObj();

};

// 0x0 (0xE0 - 0xE0)
// Class FortniteAI.FortAthenaTrackableAIObjectVehicleComponent
class UFortAthenaTrackableAIObjectVehicleComponent : public UFortAthenaTrackableAIObjectComponent
{
public:

	static class UClass* StaticClass();
	static class UFortAthenaTrackableAIObjectVehicleComponent* GetDefaultObj();

	void HandleSleepStateChanged(bool bIsAwake);
};

// 0x0 (0x1A8 - 0x1A8)
// Class FortniteAI.FortBlackboardComponent
class UFortBlackboardComponent : public UBlackboardComponent
{
public:

	static class UClass* StaticClass();
	static class UFortBlackboardComponent* GetDefaultObj();

};

// 0x98 (0x100 - 0x68)
// Class FortniteAI.FortBTDecorator_QueryGameplayAbility
class UFortBTDecorator_QueryGameplayAbility : public UBTDecorator
{
public:
	struct FGameplayTagContainer                 GameplayAbilityTag;                                // 0x68(0x20)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FBlackboardKeySelector                GameplayAbilityTagBlackboardKey;                   // 0x88(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FBlackboardKeySelector                Target;                                            // 0xB0(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 ActiveAbilityTagsToSkipTesting;                    // 0xD8(0x20)(Edit, Protected, NativeAccessSpecifierProtected)
	bool                                         bUseTarget;                                        // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUseBlackboardTag;                                 // 0xF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_323D[0x6];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortBTDecorator_QueryGameplayAbility* GetDefaultObj();

};

// 0x30 (0xA0 - 0x70)
// Class FortniteAI.FortBTTask_TriggerVOEvent
class UFortBTTask_TriggerVOEvent : public UBTTaskNode
{
public:
	uint8                                        bUseFeedbackBank : 1;                              // Mask: 0x1, PropSize: 0x10x70(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1E5 : 7;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_323F[0x7];                                     // Fixing Size After Last Property 
	class FString                                CustomEventName;                                   // 0x78(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SelectedEvent;                                     // 0x88(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortFeedbackBank*                     FeedbackBank;                                      // 0x98(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortBTTask_TriggerVOEvent* GetDefaultObj();

};

// 0xB0 (0x208 - 0x158)
// Class FortniteAI.FortCreativeCreatureManagerInfoComponent
class UFortCreativeCreatureManagerInfoComponent : public UFortMinigameLogicComponent
{
public:
	uint8                                        Pad_3295[0x18];                                    // Fixing Size After Last Property 
	TSoftClassPtr<class UFortAIPawn>             CreatureBlueprintClass;                            // 0x170(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MaxHealth;                                         // 0x190(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        HearingAggroRange;                                 // 0x194(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        ScorePoints;                                       // 0x198(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DamageCaused;                                      // 0x19C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        EnvironmentalDamageOverride;                       // 0x1A0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MovementSpeedMultiplier;                           // 0x1A4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bImmuneToWeaponKnockback;                          // 0x1A8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3297[0x7];                                     // Fixing Size After Last Property 
	class UFortCreativeCreatureManagerComponent* CreatureManagerComponent;                          // 0x1B0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UGameplayEffect>           DamageOverrideEffect;                              // 0x1B8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UGameplayEffect>           EnvironmentalDamageOverrideEffect;                 // 0x1C0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UGameplayEffect>           MovementSpeedOverrideEffect;                       // 0x1C8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UGameplayEffect>           WeaponKnockbackImmunityEffect;                     // 0x1D0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UGameplayEffect>           MaxHealthOverrideEffect;                           // 0x1D8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EScoreDistributionType            ScoreDistribution;                                 // 0x1E0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ECreatureManagerAffectedTargets   AffectedTargetsType;                               // 0x1E1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_329A[0x26];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortCreativeCreatureManagerInfoComponent* GetDefaultObj();

	void SetWeaponKnockbackImmunityEffect(TSubclassOf<class UGameplayEffect> Effect);
	void SetWeaponKnockbackImmunity(bool InImmuneToWeaponKnockback);
	void SetScorePoints(int32 InScorePoints);
	void SetScoreDistribution(enum class EScoreDistributionType InScoreDistribution);
	void SetOverrideDamage(float InOverrideDamage);
	void SetMovementSpeedOverrideEffect(TSubclassOf<class UGameplayEffect> Effect);
	void SetMovementSpeedMultiplier(float InOverrideMovementSpeedMultiplier);
	void SetMovementOverrideTag(const struct FGameplayTag& Tag);
	void SetMaxHealthOverrideTag(const struct FGameplayTag& Tag);
	void SetMaxHealthOverrideEffect(TSubclassOf<class UGameplayEffect> Effect);
	void SetMaxHealth(int32 InMaxHealth);
	void SetHearingAggroRange(float InHearingAggroRange);
	void SetEnvironmentalDamageOverrideEffect(TSubclassOf<class UGameplayEffect> Effect);
	void SetEnvironmentalDamageOverride(float InOverrideDamage);
	void SetDamageOverrideTag(const struct FGameplayTag& Tag);
	void SetDamageOverrideEffect(TSubclassOf<class UGameplayEffect> Effect);
	void SetCreatureManagerComponent(class UFortCreativeCreatureManagerComponent* InCreatureManagerComponent);
	void SetCreatureBlueprintClass(TSoftClassPtr<class UFortAIPawn> InCreatureBlueprintClass);
	void SetAffectedTargetsType(enum class ECreatureManagerAffectedTargets InAffectedTargetsType);
	void ResetWeaponKnockbackImmunity();
	void ResetScorePoints();
	void ResetScoreDistribution();
	void ResetOverrideDamage();
	void ResetMovementSpeedMultiplier();
	void ResetMaxHealth();
	void ResetHearingAggroRange();
	void ResetEnvironmentalDamageOverride();
	bool GetWeaponKnockbackImmunity();
	int32 GetScorePoints();
	enum class EScoreDistributionType GetScoreDistribution();
	float GetOverrideDamage();
	float GetMovementSpeedMultiplier();
	int32 GetMaxHealth();
	int32 GetInvalidInt32();
	float GetInvalidFloat();
	float GetHearingAggroRange();
	float GetEnvironmentalDamageOverride();
	class UFortCreativeCreatureManagerComponent* GetCreatureManagerComponent();
	TSoftClassPtr<class UFortAIPawn> GetCreatureBlueprintClass();
	enum class ECreatureManagerAffectedTargets GetAffectedTargetsType();
};

// 0xC0 (0x160 - 0xA0)
// Class FortniteAI.FortCreativeCreatureManagerComponent
class UFortCreativeCreatureManagerComponent : public UActorComponent
{
public:
	TArray<class UFortCreativeCreatureManagerInfoComponent*> CreatureManagerInfos;                              // 0xA0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TMap<TSoftClassPtr<class UFortAIPawn>, class UFortCreativeCreatureManagerInfoComponent*> EnabledCreatureManagerInfos;                       // 0xB0(0x50)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_32AA[0x60];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortCreativeCreatureManagerComponent* GetDefaultObj();

	void OnInfoComponentRemoved(class UFortCreativeCreatureManagerInfoComponent* CreatureManagerInfoComponent);
	void OnInfoComponentAdded(class UFortCreativeCreatureManagerInfoComponent* CreatureManagerInfoComponent);
	void OnAIPawnDied(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
};

// 0x8 (0xF8 - 0xF0)
// Class FortniteAI.FortCrowdManager
class UFortCrowdManager : public UCrowdManager
{
public:
	uint8                                        Pad_32AC[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortCrowdManager* GetDefaultObj();

};

// 0x8 (0x718 - 0x710)
// Class FortniteAI.FortEnemySpawn
class UFortEnemySpawn : public UBuildingActor
{
public:
	float                                        ClusterRadius;                                     // 0x710(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32AE[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortEnemySpawn* GetDefaultObj();

};

// 0x60 (0x1B8 - 0x158)
// Class FortniteAI.FortEnvQueryManager
class UFortEnvQueryManager : public UEnvQueryManager
{
public:
	TArray<struct FEnvQueryManagerConfig>        EnvManagerConfigPerGamePhase;                      // 0x158(0x10)(Edit, ZeroConstructor, Config, GlobalConfig, Protected, NativeAccessSpecifierProtected)
	struct FEnvQueryManagerConfig                EnvManagerConfigSTW;                               // 0x168(0x30)(Edit, Config, GlobalConfig, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_32B1[0x20];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortEnvQueryManager* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class FortniteAI.FortQueryContext_WorldLocationParam
class UFortQueryContext_WorldLocationParam : public UEnvQueryContext
{
public:

	static class UClass* StaticClass();
	static class UFortQueryContext_WorldLocationParam* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class FortniteAI.FortQueryItemType_Goal
class UFortQueryItemType_Goal : public UEnvQueryItemType_ActorBase
{
public:

	static class UClass* StaticClass();
	static class UFortQueryItemType_Goal* GetDefaultObj();

};

// 0x118 (0x140 - 0x28)
// Class FortniteAI.FortQueryTwoPointSolver
class UFortQueryTwoPointSolver : public UObject
{
public:
	class UEnvQuery*                             QueryPointA;                                       // 0x28(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEnvQuery*                             QueryPointB;                                       // 0x30(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FEnvNamedValue>                QueryParamsA;                                      // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FEnvNamedValue>                QueryParamsB;                                      // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnFinished;                                        // 0x58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnFailed;                                          // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	enum class ETwoPointSolverRotationA          RotationMode;                                      // 0x78(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3307[0x7];                                     // Fixing Size After Last Property 
	struct FRotator                              MinRotationOffset;                                 // 0x80(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FRotator                              MaxRotationOffset;                                 // 0x98(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        bUseNegativeAngleOffsets : 1;                      // Mask: 0x1, PropSize: 0x10xB0(0x1)(Edit, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bUsePositiveAngleOffsets : 1;                      // Mask: 0x2, PropSize: 0x10xB0(0x1)(Edit, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_1E8 : 6;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_3308[0x7F];                                    // Fixing Size After Last Property 
	class UFortAISystem*                         AISys;                                             // 0x130(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UObject*                               CachedQuerier;                                     // 0x138(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortQueryTwoPointSolver* GetDefaultObj();

	void Start(class UObject* Querier);
	void SkipToNextPointA();
	void SetCustomRotationA(struct FRotator& Rotation);
	void OnCustomRotationMode(struct FVector& InPointA, const struct FVector& Querier);
	struct FRotator GetRandomRotationOffset();
	void AddNamedFloatParamB(class FName ParamName, float Value);
	void AddNamedFloatParamA(class FName ParamName, float Value);
};

// 0x8 (0x298 - 0x290)
// Class FortniteAI.FortForcedLODZone
class UFortForcedLODZone : public UActor
{
public:
	enum class EFortAILODLevel                   ForcedLODLevel;                                    // 0x290(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3311[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortForcedLODZone* GetDefaultObj();

};

// 0x38 (0xB60 - 0xB28)
// Class FortniteAI.FortGameplayAbility_TeleportToActor
class UFortGameplayAbility_TeleportToActor : public UFortGameplayAbility
{
public:
	uint8                                        Pad_331A[0x4];                                     // Fixing Size After Last Property 
	bool                                         bCheckPlayerLOSWhenTeleporting;                    // 0xB2C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_331B[0x3];                                     // Fixing Size After Last Property 
	float                                        MaxDistanceToConsiderLOS;                          // 0xB30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        PlayerFOV;                                         // 0xB34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        TeleportDelay;                                     // 0xB38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        TeleportRetries;                                   // 0xB3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        RetryDelay;                                        // 0xB40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_331D[0xC];                                     // Fixing Size After Last Property 
	class UEnvQuery*                             FindTeleportSpotEQSQuery;                          // 0xB50(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_331E[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortGameplayAbility_TeleportToActor* GetDefaultObj();

	void PreTeleportPawn(class UFortPawn* TeleportedPawn);
	void PostTeleportedPawn(class UFortPawn* TeleportedPawn);
};

// 0x18 (0x48 - 0x30)
// Class FortniteAI.FortIntensityCurveSequence
class UFortIntensityCurveSequence : public UDataAsset
{
public:
	TArray<struct FDataTableRowHandle>           IntensityCurves;                                   // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EFortIntensityCurveSequenceType   SequenceType;                                      // 0x40(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3326[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortIntensityCurveSequence* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class FortniteAI.FortIntensityCurveSequenceProgression
class UFortIntensityCurveSequenceProgression : public UDataAsset
{
public:
	TArray<struct FFortInstensityCurveSequenceProgression> IntensityCurveSequences;                           // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortIntensityCurveSequenceProgression* GetDefaultObj();

};

// 0x0 (0x2E0 - 0x2E0)
// Class FortniteAI.FortJumpDownLink
class UFortJumpDownLink : public UNavLinkProxy
{
public:

	static class UClass* StaticClass();
	static class UFortJumpDownLink* GetDefaultObj();

};

// 0x10 (0x2A0 - 0x290)
// Class FortniteAI.FortNavGraphGoal
class UFortNavGraphGoal : public UActor
{
public:
	uint8                                        Pad_3332[0x8];                                     // Fixing Size After Last Property 
	float                                        GraphRadius;                                       // 0x298(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3333[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortNavGraphGoal* GetDefaultObj();

};

// 0x8 (0x5B0 - 0x5A8)
// Class FortniteAI.FortNavLinkBlockerComponent
class UFortNavLinkBlockerComponent : public UBoxComponent
{
public:
	uint8                                        Pad_3338[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortNavLinkBlockerComponent* GetDefaultObj();

};

// 0x0 (0x290 - 0x290)
// Class FortniteAI.FortNavLinkContainer
class UFortNavLinkContainer : public UActor
{
public:

	static class UClass* StaticClass();
	static class UFortNavLinkContainer* GetDefaultObj();

};

// 0x30 (0x80 - 0x50)
// Class FortniteAI.FortNavLinkDefinition
class UFortNavLinkDefinition : public UNavLinkDefinition
{
public:
	struct FFortNavLinkPattern                   Pattern;                                           // 0x50(0x8)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FFortNavLinkPattern>           AdditionalPatterns;                                // 0x58(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<enum class EBuildingStairsRailing>    StairsRailing;                                     // 0x68(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	enum class EBuildingFloorRailing             FloorRailing;                                      // 0x78(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortNavLinkPattern               PatternType;                                       // 0x79(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3344[0x6];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortNavLinkDefinition* GetDefaultObj();

};

// 0x8 (0x5B0 - 0x5A8)
// Class FortniteAI.FortNavMesh
class UFortNavMesh : public URecastNavMesh
{
public:
	class UFortAIHotSpotManager*                 HotSpotManager;                                    // 0x5A8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortNavMesh* GetDefaultObj();

};

// 0x8 (0xF8 - 0xF0)
// Class FortniteAI.FortNavObstacleComponent
class UFortNavObstacleComponent : public UNavRelevantComponent
{
public:
	TSubclassOf<class UNavArea>                  ObstacleAreaClass;                                 // 0xF0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortNavObstacleComponent* GetDefaultObj();

};

// 0x240 (0x17C8 - 0x1588)
// Class FortniteAI.FortNavSystem
class UFortNavSystem : public UNavigationSystemV1
{
public:
	uint8                                        Pad_334E[0x10];                                    // Fixing Size After Last Property 
	TSoftClassPtr<class UNavArea>                DefaultSmashableArea;                              // 0x1598(0x20)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UNavArea>                JumpDownArea;                                      // 0x15B8(0x20)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_334F[0x20];                                    // Fixing Size After Last Property 
	TSoftClassPtr<class UNavArea>                JumpDownSmashableArea2;                            // 0x15F8(0x20)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UNavArea>                JumpDownSmashableArea3;                            // 0x1618(0x20)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UFortCustomNavLinkGlobalProxy*> LinkGlobalProxies;                                 // 0x1638(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class URecastNavMesh*>                NamedNavmeshes;                                    // 0x1648(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UFortNavLinkBlockerComponent*>  NavLinkBlockers;                                   // 0x1658(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_3351[0x10];                                    // Fixing Size After Last Property 
	TArray<class UFortPathCostEstimator*>        PathEstimators;                                    // 0x1678(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UFortInescapableZoneTracker*>   InescapableZones;                                  // 0x1688(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        bAllowAutoRebuild : 1;                             // Mask: 0x1, PropSize: 0x10x1698(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRebuildOnInitialUnlock : 1;                       // Mask: 0x2, PropSize: 0x10x1698(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUsesStreamedInNavLevel : 1;                       // Mask: 0x4, PropSize: 0x10x1698(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseStaticMeshLinks : 1;                           // Mask: 0x8, PropSize: 0x10x1698(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseStaticWorldLinksDown : 1;                      // Mask: 0x10, PropSize: 0x10x1698(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseStaticWorldLinksUp : 1;                        // Mask: 0x20, PropSize: 0x10x1698(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseJumpLinkActors : 1;                            // Mask: 0x40, PropSize: 0x10x1698(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGenerateWallClimbLinks : 1;                       // Mask: 0x80, PropSize: 0x10x1698(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGenerateClamberLinks : 1;                         // Mask: 0x1, PropSize: 0x10x1699(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1E9 : 7;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_3354[0x2];                                     // Fixing Size After Last Property 
	int32                                        UndermineHorizontalTileLimit;                      // 0x169C(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UndermineVerticalTileLimit;                        // 0x16A0(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DirtyAreasUpdateFreqInactive;                      // 0x16A4(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3355[0xD8];                                    // Fixing Size After Last Property 
	class UFortNavigationGraph*                  NavGraphData;                                      // 0x1780(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<TWeakObjectPtr<class UActor>>         CompositePathGoals;                                // 0x1788(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<struct FBox>                          AtlasCells;                                        // 0x1798(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_3356[0x10];                                    // Fixing Size After Last Property 
	TArray<struct FMetaNavCachedEntry>           MetaNavCachedAreas;                                // 0x17B8(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortNavSystem* GetDefaultObj();

	void OnNavDataRegistered(class UNavigationData* NavData);
	bool IsNavmeshInRadiusInitialized(class UObject* WorldContext, struct FVector& TestLocation, float TestRadius);
};

// 0x8 (0x60 - 0x58)
// Class FortniteAI.FortNavSystemConfig
class UFortNavSystemConfig : public UNavigationSystemModuleConfig
{
public:
	uint8                                        bAllowAutoRebuild : 1;                             // Mask: 0x1, PropSize: 0x10x58(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bRebuildOnInitialUnlock : 1;                       // Mask: 0x2, PropSize: 0x10x58(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bUsesStreamedInNavLevel : 1;                       // Mask: 0x4, PropSize: 0x10x58(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3359[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortNavSystemConfig* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class FortniteAI.FortPatrolWardInterface
class UFortPatrolWardInterface : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UFortPatrolWardInterface* GetDefaultObj();

	enum class EWardAffectType GetAffectingType();
	float GetAffectingDistance();
};

// 0x0 (0x2B8 - 0x2B8)
// Class FortniteAI.FortPlacedPawnMarker
class UFortPlacedPawnMarker : public UNavigationObjectBase
{
public:

	static class UClass* StaticClass();
	static class UFortPlacedPawnMarker* GetDefaultObj();

};

// 0x8 (0x5B0 - 0x5A8)
// Class FortniteAI.FortRiftBlockerComponent
class UFortRiftBlockerComponent : public UBoxComponent
{
public:
	uint8                                        bStartActive : 1;                                  // Mask: 0x1, PropSize: 0x10x5A8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3364[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortRiftBlockerComponent* GetDefaultObj();

};

// 0x48 (0x138 - 0xF0)
// Class FortniteAI.FortStaticMeshLinkComponent
class UFortStaticMeshLinkComponent : public UNavRelevantComponent
{
public:
	uint8                                        Pad_3366[0x48];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortStaticMeshLinkComponent* GetDefaultObj();

};

// 0x2B8 (0x548 - 0x290)
// Class FortniteAI.FortThreatVisualsManager
class UFortThreatVisualsManager : public UActor
{
public:
	uint8                                        Pad_33CF[0x8];                                     // Fixing Size After Last Property 
	TSubclassOf<class UThreatCloud>              CloudBlueprint;                                    // 0x298(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        CloudRadius;                                       // 0x2A0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        ThreatBoxVolumeTopPadding;                         // 0x2A4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        ThreatBoxVolumeBottomPadding;                      // 0x2A8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bUseLocalPlayersOnlyForCloudMinimumHeight;         // 0x2AC(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bHideClouds;                                       // 0x2AD(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_33D0[0x2];                                     // Fixing Size After Last Property 
	float                                        CloudMinimumHeightAbovePlayers;                    // 0x2B0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        CloudMinimumHeightAboveGround;                     // 0x2B4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        CloudMinimumAltitude;                              // 0x2B8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        CloudMaxVerticalDelta;                             // 0x2BC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        CloudMinSpeed;                                     // 0x2C0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        CloudMaxSpeed;                                     // 0x2C4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        StormWindCloudRadius;                              // 0x2C8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        StormWindGoalRadius;                               // 0x2CC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        StormWindFalloffRadius;                            // 0x2D0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        StormWindInactiveMagnitude;                        // 0x2D4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        StormWindActiveMagnitude;                          // 0x2D8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        StormWindDesiredDeltaBlendTime;                    // 0x2DC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        StormWindDirectionAdditionalAngle;                 // 0x2E0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_33D6[0x4];                                     // Fixing Size After Last Property 
	struct FThreatLocationArray                  ThreatLocations;                                   // 0x2E8(0x118)(Net, Transient, RepNotify, NativeAccessSpecifierPrivate)
	struct FStormWindArray                       StormWindArray;                                    // 0x400(0x118)(Net, Transient, RepNotify, NativeAccessSpecifierPrivate)
	TArray<struct FVector>                       GoalActorLocations;                                // 0x518(0x10)(Net, ZeroConstructor, Transient, RepNotify, NativeAccessSpecifierPrivate)
	uint8                                        Pad_33DA[0x20];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortThreatVisualsManager* GetDefaultObj();

	bool StormsExist();
	void SetMinimumCloudAltitude(float NewMinimumAltitude);
	void SetCloudsAreHidden(bool bHide);
	void ResetMinimumCloudAltitude();
	void OnWorldReady();
	void OnThreatCloudsChanged(TArray<struct FThreatLocationInfo>& ThreatLocationInfo);
	void OnRep_ThreatLocations();
	void OnRep_StormWinds();
	void OnRep_HideClouds();
	void OnRep_GoalActorLocations();
	void OnBeginThreatVisualsPrecursor(class UActor* SourceActor, struct FVector& EndLocation);
	TArray<struct FThreatLocationInfo> GetThreatClouds();
	class UThreatCloud* GetThreatCloud(struct FThreatLocationInfo& ThreatLocInfo);
	bool GetCloudsAreHidden();
	void BeginThreatVisualsPrecursor(class UActor* SourceActor, const struct FVector& ThreatLocation);
};

// 0x68 (0x108 - 0xA0)
// Class FortniteAI.AIGoalComponent
class UAIGoalComponent : public UGameFrameworkComponent
{
public:
	uint8                                        Pad_33E0[0x68];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAIGoalComponent* GetDefaultObj();

};

// 0x50 (0x158 - 0x108)
// Class FortniteAI.FortAIGoalComponent
class UFortAIGoalComponent : public UAIGoalComponent
{
public:
	TMap<enum class EFortAILODLevel, struct FScalableFloat> AssignmentUpdatePeriods;                           // 0x108(0x50)(Edit, EditFixedSize, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortAIGoalComponent* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class FortniteAI.FortAIGoalProvider
class UFortAIGoalProvider : public UObject
{
public:
	uint8                                        Pad_3401[0x8];                                     // Fixing Size After Last Property 
	class UWorld*                                World;                                             // 0x30(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAIAssignment*                     AssignmentOwner;                                   // 0x38(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAIEncounterInfo*                  EncounterInfo;                                     // 0x40(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAIGoalProvider* GetDefaultObj();

	void UpdateGoals();
	bool InitializeGoalProvider(class UWorld* ContextWorld, class UFortAIAssignment* Assignment);
	class UFortAIEncounterInfo* GetEncounterInfo();
};

// 0x88 (0xD0 - 0x48)
// Class FortniteAI.FortAIGoalProvider_EnvQuery
class UFortAIGoalProvider_EnvQuery : public UFortAIGoalProvider
{
public:
	uint8                                        Pad_3404[0x8];                                     // Fixing Size After Last Property 
	class UEnvQuery*                             GoalQuery;                                         // 0x50(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AutomaticUpdatePeriodInSeconds;                    // 0x58(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3406[0x4];                                     // Fixing Size After Last Property 
	struct FFortAIAssignmentIdentifier           SpecificAssignmentContext;                         // 0x60(0x30)(Edit, Protected, NativeAccessSpecifierProtected)
	TSoftClassPtr<class UFortAIPawn>             AIPawnContext;                                     // 0x90(0x20)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3407[0x20];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAIGoalProvider_EnvQuery* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class FortniteAI.FortAIEncounterGoalSelectionTable
class UFortAIEncounterGoalSelectionTable : public UDataAsset
{
public:
	TArray<struct FEncounterGoalSelectionTableEntry> EncounterGoalSelectionCriteria;                    // 0x30(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortAIEncounterGoalSelectionTable* GetDefaultObj();

};

// 0x20 (0x50 - 0x30)
// Class FortniteAI.AIHotSpotConfig
class UAIHotSpotConfig : public UDataAsset
{
public:
	TArray<struct FAIHotSpotSlotConfig>          Slots;                                             // 0x30(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	uint8                                        bDetectUnreachableSlots : 1;                       // Mask: 0x1, PropSize: 0x10x40(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1F2 : 7;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_3410[0x7];                                     // Fixing Size After Last Property 
	class UAIHotSpotSlotGenerator*               SlotGenerator;                                     // 0x48(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAIHotSpotConfig* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class FortniteAI.AIHotSpotSlotGenerator
class UAIHotSpotSlotGenerator : public UObject
{
public:

	static class UClass* StaticClass();
	static class UAIHotSpotSlotGenerator* GetDefaultObj();

	class UAIHotSpot* GetHotSpot();
	void GenerateSlots();
	class UAIHotSpotSlot* AddSlot(struct FVector& RelativeLocation, struct FRotator& RelativeRotation, TSubclassOf<class UAIHotSpotSlot> CustomSlotClass, bool bEnabled);
};

// 0x70 (0x98 - 0x28)
// Class FortniteAI.AIHotSpotSlotGenerator_OnBoundingBox
class UAIHotSpotSlotGenerator_OnBoundingBox : public UAIHotSpotSlotGenerator
{
public:
	TSubclassOf<class UAIHotSpotSlot>            SlotClass;                                         // 0x28(0x8)(Edit, ZeroConstructor, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               MaxExtent;                                         // 0x30(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExpandBy;                                          // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OffsetFromEdge;                                    // 0x4C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Spacing;                                           // 0x50(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bLimitMaxExtent : 1;                               // Mask: 0x1, PropSize: 0x10x54(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bMustHitFocusActor : 1;                            // Mask: 0x2, PropSize: 0x10x54(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1F3 : 6;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_3423[0x3];                                     // Fixing Size After Last Property 
	enum class EBoundingBoxSlotDirectionCalculation SlotDirectionCalculation;                          // 0x58(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3424[0x3F];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAIHotSpotSlotGenerator_OnBoundingBox* GetDefaultObj();

};

// 0x128 (0x158 - 0x30)
// Class FortniteAI.BuildingActorHotSpotConfig
class UBuildingActorHotSpotConfig : public UDataAsset
{
public:
	struct FBuildingActorHotSpotDirection        DirectionSetup[0x6];                               // 0x30(0xF0)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FBuildingActorHotSpotDirection        DefaultSetup;                                      // 0x120(0x28)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UAIHotSpotConfig*                      ExtraTypeConfig;                                   // 0x148(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bHasDirectionalSetup : 1;                          // Mask: 0x1, PropSize: 0x10x150(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3426[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UBuildingActorHotSpotConfig* GetDefaultObj();

};

// 0x8 (0x5C0 - 0x5B8)
// Class FortniteAI.BuildingActorHotSpotRenderingComponent
class UBuildingActorHotSpotRenderingComponent : public UDebugDrawComponent
{
public:
	uint8                                        Pad_3428[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UBuildingActorHotSpotRenderingComponent* GetDefaultObj();

};

// 0x28 (0x468 - 0x440)
// Class FortniteAI.FortAIHotSpot
class UFortAIHotSpot : public UAIHotSpot
{
public:
	uint8                                        Pad_3429[0x28];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAIHotSpot* GetDefaultObj();

};

// 0x140 (0x1C0 - 0x80)
// Class FortniteAI.FortAIHotSpotManager
class UFortAIHotSpotManager : public UAIHotSpotManagerProxy
{
public:
	TSoftObjectPtr<class UBuildingActorHotSpotConfig> FallbackHotspotConfig;                             // 0x80(0x20)(Transient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_342B[0xF0];                                    // Fixing Size After Last Property 
	TArray<struct FAutoAcquireSlot>              AutoAcquireSlots;                                  // 0x190(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_342C[0x20];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAIHotSpotManager* GetDefaultObj();

};

// 0x10 (0x130 - 0x120)
// Class FortniteAI.FortAIHotSpotSlot
class UFortAIHotSpotSlot : public UAIHotSpotSlot
{
public:
	enum class EFortHotSpotSlot                  SlotType;                                          // 0x120(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3430[0x3];                                     // Fixing Size After Last Property 
	uint8                                        bHasProjectedLocation : 1;                         // Mask: 0x1, PropSize: 0x10x124(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bProjectedOnLowArea : 1;                           // Mask: 0x2, PropSize: 0x10x124(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsAutoGenerated : 1;                              // Mask: 0x4, PropSize: 0x10x124(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCanDuplicateOnProjection : 1;                     // Mask: 0x8, PropSize: 0x10x124(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCanProjectUp : 1;                                 // Mask: 0x10, PropSize: 0x10x124(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3433[0xB];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAIHotSpotSlot* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class FortniteAI.FortAIHotSpotSlotGenerator_FromConfig
class UFortAIHotSpotSlotGenerator_FromConfig : public UAIHotSpotSlotGenerator
{
public:
	class UAIHotSpotConfig*                      BuildingConfig;                                    // 0x28(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Offset;                                            // 0x30(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bMirrorX : 1;                                      // Mask: 0x1, PropSize: 0x10x48(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bMirrorY : 1;                                      // Mask: 0x2, PropSize: 0x10x48(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3437[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAIHotSpotSlotGenerator_FromConfig* GetDefaultObj();

};

// 0x8 (0xA0 - 0x98)
// Class FortniteAI.FortAIHotSpotSlotGenerator_OnBoundingBox
class UFortAIHotSpotSlotGenerator_OnBoundingBox : public UAIHotSpotSlotGenerator_OnBoundingBox
{
public:
	float                                        DistanceForRangedSlots;                            // 0x98(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DistanceForHugeSlots;                              // 0x9C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortAIHotSpotSlotGenerator_OnBoundingBox* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class FortniteAI.FortAIHotSpotSlotGenerator_RampTrace
class UFortAIHotSpotSlotGenerator_RampTrace : public UAIHotSpotSlotGenerator
{
public:
	uint8                                        Pad_343B[0x30];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAIHotSpotSlotGenerator_RampTrace* GetDefaultObj();

};

// 0xE8 (0x550 - 0x468)
// Class FortniteAI.FortAIHotSpot_Building
class UFortAIHotSpot_Building : public UFortAIHotSpot
{
public:
	class UAIHotSpotConfig*                      ExtraTypeConfig;                                   // 0x468(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_343D[0xE0];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAIHotSpot_Building* GetDefaultObj();

};

// 0x0 (0x468 - 0x468)
// Class FortniteAI.FortAIHotSpot_FakeBuilding
class UFortAIHotSpot_FakeBuilding : public UFortAIHotSpot
{
public:

	static class UClass* StaticClass();
	static class UFortAIHotSpot_FakeBuilding* GetDefaultObj();

};

// 0x0 (0x468 - 0x468)
// Class FortniteAI.FortAIHotSpot_Shooting
class UFortAIHotSpot_Shooting : public UFortAIHotSpot
{
public:

	static class UClass* StaticClass();
	static class UFortAIHotSpot_Shooting* GetDefaultObj();

};

// 0xD0 (0xF8 - 0x28)
// Class FortniteAI.FortInfluenceMap
class UFortInfluenceMap : public UObject
{
public:
	uint8                                        Pad_344F[0xB8];                                    // Fixing Size After Last Property 
	class UFortNavigationGraph*                  GraphData;                                         // 0xE0(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3450[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortInfluenceMap* GetDefaultObj();

	void K2_GetInfluenceSourcePositions(class UObject* WorldContext, TArray<struct FVector>* InfluenceSourcePositions);
	void K2_AddInfluenceSource(class UObject* WorldContext, struct FVector& Position, const class FString& SourceName, float Strength);
};

// 0x0 (0x5F0 - 0x5F0)
// Class FortniteAI.IrwinAIController
class UIrwinAIController : public UAthenaAIController
{
public:

	static class UClass* StaticClass();
	static class UIrwinAIController* GetDefaultObj();

};

// 0x0 (0x290 - 0x290)
// Class FortniteAI.LevelTestingActorBase
class ULevelTestingActorBase : public UActor
{
public:

	static class UClass* StaticClass();
	static class ULevelTestingActorBase* GetDefaultObj();

};

// 0x8 (0x568 - 0x560)
// Class FortniteAI.FortBotController
class UFortBotController : public UFortAIController
{
public:
	class UFortBotMissionLogic*                  CurrentMissionLogic;                               // 0x560(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortBotController* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class FortniteAI.FortBotMissionLogic
class UFortBotMissionLogic : public UObject
{
public:
	class UFortMission*                          Mission;                                           // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UActor*>                        Goals;                                             // 0x30(0x10)(BlueprintVisible, ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UFortBotStructureBuilder*>      Builders;                                          // 0x40(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
	class UBehaviorTree*                         CurrentBehaviorAsset;                              // 0x50(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UFortBotController*>            AssignedAI;                                        // 0x58(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<uint8>                                GoalHasLocator;                                    // 0x68(0x10)(BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortBotMissionLogic* GetDefaultObj();

	class UFortBotStructureBuilder* SpawnStructureBuilder(class UActor* MissionGoal, class UFortBuildingInstructions* BuildingInstructions);
	void SetGoalsInvulnerable(bool bGodMode);
	void SetCurrentBehavior(class UBehaviorTree* Behavior);
	void ResetBehavior();
	void OnMissionStarted();
	void OnMissionFinished();
	void OnMissionActivated();
	bool OnInteractWithMissionGoal(class UFortAIController* BotAI, class UActor* MissionGoal);
	bool OnCanStartOtherMission(class UFortAIController* BotAI, class UFortMission* OtherMission);
	void OnAssignedBehavior(class UFortAIController* BotAI);
	void MarkSingleLocator(class UActor* LocatorActor);
	void MarkAllLocated();
	void ClearAllLocated();
};

// 0xA0 (0xC8 - 0x28)
// Class FortniteAI.FortBotMissionManager
class UFortBotMissionManager : public UObject
{
public:
	TSoftClassPtr<class UFortPawn>               BotPawnClass;                                      // 0x28(0x20)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UFortPawn*>                     BotPawns;                                          // 0x48(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UFortBotMissionLogic*>          ActiveMissionsLogicData;                           // 0x58(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	class UFortBotMissionLogic*                  PrimaryMissionLogicData;                           // 0x68(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_34A4[0x58];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortBotMissionManager* GetDefaultObj();

};

// 0x38 (0x2C8 - 0x290)
// Class FortniteAI.FortBotStructureBuilder
class UFortBotStructureBuilder : public UActor
{
public:
	class UFortBuildingInstructions*             BuildingInstructions;                              // 0x290(0x8)(Edit, ZeroConstructor, Transient, EditConst, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UBuildingActor*>                BuiltActors;                                       // 0x298(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	class UActor*                                CachedGoal;                                        // 0x2A8(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_34C4[0x18];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortBotStructureBuilder* GetDefaultObj();

	void RunDeconstructor();
	void OnBuildingDied(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void BuildAll();
};

// 0x8 (0x50 - 0x48)
// Class FortniteAI.FortMetaNavArea_Obstacles
class UFortMetaNavArea_Obstacles : public UNavAreaMeta
{
public:
	int32                                        HealthThreshold;                                   // 0x48(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34CC[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortMetaNavArea_Obstacles* GetDefaultObj();

};

// 0x18 (0x48 - 0x30)
// Class FortniteAI.FortNavAgentCostData
class UFortNavAgentCostData : public UPrimaryDataAsset
{
public:
	class FName                                  NavAgentName;                                      // 0x30(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_34CD[0x4];                                     // Fixing Size After Last Property 
	TArray<TSubclassOf<class UNavArea>>          NavAreaStrengthBuckets;                            // 0x38(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortNavAgentCostData* GetDefaultObj();

};

// 0x18 (0x68 - 0x50)
// Class FortniteAI.FortNavAreaAutomatic
class UFortNavAreaAutomatic : public UFortNavArea
{
public:
	struct FCurveTableRowHandle                  NavCostCurveHandle;                                // 0x50(0x10)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        NavAreaStrength;                                   // 0x60(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AutomaticNavCost;                                  // 0x64(0x4)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortNavAreaAutomatic* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class FortniteAI.FortNavArea_BigMovingPawn
class UFortNavArea_BigMovingPawn : public UFortNavArea
{
public:

	static class UClass* StaticClass();
	static class UFortNavArea_BigMovingPawn* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class FortniteAI.FortNavArea_CheapObstacle
class UFortNavArea_CheapObstacle : public UFortNavArea
{
public:

	static class UClass* StaticClass();
	static class UFortNavArea_CheapObstacle* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class FortniteAI.FortNavArea_Clamber
class UFortNavArea_Clamber : public UFortNavArea
{
public:

	static class UClass* StaticClass();
	static class UFortNavArea_Clamber* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class FortniteAI.FortNavArea_ClosedDoors
class UFortNavArea_ClosedDoors : public UFortNavArea
{
public:

	static class UClass* StaticClass();
	static class UFortNavArea_ClosedDoors* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class FortniteAI.FortNavArea_Danger
class UFortNavArea_Danger : public UFortNavArea
{
public:

	static class UClass* StaticClass();
	static class UFortNavArea_Danger* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class FortniteAI.FortNavArea_DefenderNull
class UFortNavArea_DefenderNull : public UFortNavArea
{
public:

	static class UClass* StaticClass();
	static class UFortNavArea_DefenderNull* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class FortniteAI.FortNavArea_HuskNull
class UFortNavArea_HuskNull : public UFortNavArea
{
public:

	static class UClass* StaticClass();
	static class UFortNavArea_HuskNull* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class FortniteAI.FortNavArea_LowJump
class UFortNavArea_LowJump : public UFortNavArea
{
public:

	static class UClass* StaticClass();
	static class UFortNavArea_LowJump* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class FortniteAI.FortNavArea_LowSmashable
class UFortNavArea_LowSmashable : public UFortNavArea_DefaultSmashable
{
public:

	static class UClass* StaticClass();
	static class UFortNavArea_LowSmashable* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class FortniteAI.FortNavArea_Obstacle
class UFortNavArea_Obstacle : public UFortNavArea
{
public:

	static class UClass* StaticClass();
	static class UFortNavArea_Obstacle* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class FortniteAI.FortNavArea_PortalOrSmash
class UFortNavArea_PortalOrSmash : public UFortNavArea
{
public:

	static class UClass* StaticClass();
	static class UFortNavArea_PortalOrSmash* GetDefaultObj();

};

// 0x8 (0x58 - 0x50)
// Class FortniteAI.FortNavArea_SmashableJump
class UFortNavArea_SmashableJump : public UFortNavArea
{
public:
	int32                                        Strength;                                          // 0x50(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34DB[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortNavArea_SmashableJump* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class FortniteAI.FortNavArea_Stairs
class UFortNavArea_Stairs : public UFortNavArea
{
public:

	static class UClass* StaticClass();
	static class UFortNavArea_Stairs* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class FortniteAI.FortNavArea_StarlightCheapObstacle
class UFortNavArea_StarlightCheapObstacle : public UFortNavArea_CheapObstacle
{
public:

	static class UClass* StaticClass();
	static class UFortNavArea_StarlightCheapObstacle* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class FortniteAI.FortNavArea_StarlightObstacle
class UFortNavArea_StarlightObstacle : public UFortNavArea_Obstacle
{
public:

	static class UClass* StaticClass();
	static class UFortNavArea_StarlightObstacle* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class FortniteAI.FortNavArea_StoneWall
class UFortNavArea_StoneWall : public UFortNavArea
{
public:

	static class UClass* StaticClass();
	static class UFortNavArea_StoneWall* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class FortniteAI.FortNavArea_TakerOnly
class UFortNavArea_TakerOnly : public UFortNavArea
{
public:

	static class UClass* StaticClass();
	static class UFortNavArea_TakerOnly* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class FortniteAI.FortNavArea_TraceSmashable
class UFortNavArea_TraceSmashable : public UFortNavArea_DefaultSmashable
{
public:

	static class UClass* StaticClass();
	static class UFortNavArea_TraceSmashable* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class FortniteAI.FortNavArea_Unwalkable
class UFortNavArea_Unwalkable : public UFortNavArea
{
public:

	static class UClass* StaticClass();
	static class UFortNavArea_Unwalkable* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class FortniteAI.FortNavArea_WalkOverWall
class UFortNavArea_WalkOverWall : public UFortNavArea
{
public:

	static class UClass* StaticClass();
	static class UFortNavArea_WalkOverWall* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class FortniteAI.FortNavArea_WallCorner
class UFortNavArea_WallCorner : public UFortNavArea
{
public:

	static class UClass* StaticClass();
	static class UFortNavArea_WallCorner* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class FortniteAI.FortNavArea_Zipline
class UFortNavArea_Zipline : public UFortNavArea
{
public:

	static class UClass* StaticClass();
	static class UFortNavArea_Zipline* GetDefaultObj();

};

// 0x0 (0xE0 - 0xE0)
// Class FortniteAI.AthenaAvoidanceManager
class UAthenaAvoidanceManager : public UAvoidanceManager
{
public:

	static class UClass* StaticClass();
	static class UAthenaAvoidanceManager* GetDefaultObj();

};

// 0x10 (0x2A0 - 0x290)
// Class FortniteAI.AthenaNavInvokerBox
class UAthenaNavInvokerBox : public UActor
{
public:
	float                                        GenerationRange;                                   // 0x290(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_34EC[0x4];                                     // Fixing Size After Last Property 
	class UNavigationInvokerComponent*           InvokerComp;                                       // 0x298(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UAthenaNavInvokerBox* GetDefaultObj();

	void SetInvokerEnabled(bool bEnable);
};

// 0x100 (0x6B0 - 0x5B0)
// Class FortniteAI.AthenaNavMesh
class UAthenaNavMesh : public UFortNavMesh
{
public:
	int32                                        HotSpotPathfindingMaxSearchNodes;                  // 0x5B0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ShallowWaterTraceStartOffsetZ;                     // 0x5B4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ShallowWaterTraceEndOffsetZ;                       // 0x5B8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MaximumTilesToProcessForWaterPerFrame;             // 0x5BC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSuspendNavmeshWhenNoAIUsersAlive;                 // 0x5C0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_34F9[0x7];                                     // Fixing Size After Last Property 
	TArray<struct FBox>                          SerializedDirtyAreas;                              // 0x5C8(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_34FB[0xD8];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAthenaNavMesh* GetDefaultObj();

	void MoveTiles(struct FBox& SourceBox, struct FIntPoint& TileOffset, float RotationDeg, struct FVector2D& FillerTilePosition);
	void ComputeOffsetForMoveTiles(struct FVector& StartPosition, struct FVector& DesiredPosition, struct FVector* OutEndPosition, struct FIntPoint* OutTileOffset);
};

// 0x0 (0x5D0 - 0x5D0)
// Class FortniteAI.AthenaNavMeshRenderingComponent
class UAthenaNavMeshRenderingComponent : public UNavMeshRenderingComponent
{
public:

	static class UClass* StaticClass();
	static class UAthenaNavMeshRenderingComponent* GetDefaultObj();

};

// 0x8 (0x6B8 - 0x6B0)
// Class FortniteAI.AthenaNavMesh_Big
class UAthenaNavMesh_Big : public UAthenaNavMesh
{
public:
	float                                        MaximumDistanceToWaterForShallow;                  // 0x6B0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_350C[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAthenaNavMesh_Big* GetDefaultObj();

};

// 0x0 (0x2C8 - 0x2C8)
// Class FortniteAI.AthenaNavOctTreeInclusionBounds
class UAthenaNavOctTreeInclusionBounds : public UVolume
{
public:

	static class UClass* StaticClass();
	static class UAthenaNavOctTreeInclusionBounds* GetDefaultObj();

};

// 0x48 (0xE8 - 0xA0)
// Class FortniteAI.AthenaNavPresenceDetectorComponent
class UAthenaNavPresenceDetectorComponent : public UActorComponent
{
public:
	bool                                         bDisableUponNavMeshPresence;                       // 0xA0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHasValidNavMesh;                                  // 0xA1(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_351C[0x2];                                     // Fixing Size After Last Property 
	class FName                                  NavMeshNameToUse;                                  // 0xA4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FNavMeshDetectedInfo>          NavMeshesInfo;                                     // 0xA8(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            NavMeshPresenceDetected;                           // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            NavMeshPresenceUndetected;                         // 0xC8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_3521[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAthenaNavPresenceDetectorComponent* GetDefaultObj();

	void OnNavMeshTilesUpdated(struct FUpdatedNavMeshTiles& UpdatedNavMeshTiles);
	bool HasValidNavMeshLocation();
};

// 0x0 (0x28 - 0x28)
// Class FortniteAI.AthenaNavRelevantActorInterface
class UAthenaNavRelevantActorInterface : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UAthenaNavRelevantActorInterface* GetDefaultObj();

};

// 0x1B0 (0x1978 - 0x17C8)
// Class FortniteAI.AthenaNavSystem
class UAthenaNavSystem : public UFortNavSystem
{
public:
	uint8                                        Pad_353B[0x8];                                     // Fixing Size After Last Property 
	TArray<struct FNavDataSetVariantSettings>    NavDataSetVariants;                                // 0x17D0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        bUseNavDataSetVariants : 1;                        // Mask: 0x1, PropSize: 0x10x17E0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bMarkBuildingFoundationDirty : 1;                  // Mask: 0x2, PropSize: 0x10x17E0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bSupportRuntimeNavmeshDisabling : 1;               // Mask: 0x4, PropSize: 0x10x17E0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_1F9 : 5;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_353D[0x3];                                     // Fixing Size After Last Property 
	float                                        NavGenerationObserverCheckInterval;                // 0x17E4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_353F[0x20];                                    // Fixing Size After Last Property 
	uint8                                        bAllowStaticNavigationInvokerBoxes : 1;            // Mask: 0x1, PropSize: 0x10x1808(0x1)(Edit, Config, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_1FA : 7;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_3540[0x7];                                     // Fixing Size After Last Property 
	TArray<struct FBoxNavInvoker>                BoxInvokers;                                       // 0x1810(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3541[0x138];                                   // Fixing Size After Last Property 
	TArray<struct FBox>                          NavOctTreeInclusionBounds;                         // 0x1958(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3542[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAthenaNavSystem* GetDefaultObj();

	void UnregisterNavGenerationObserver(class USceneComponent* Component);
	void RegisterNavGenerationObserver(class USceneComponent* Component, FDelegateProperty_ Event);
	bool IsInitialNavigationLockActive(class UObject* WorldContextObject);
};

// 0x48 (0xA8 - 0x60)
// Class FortniteAI.AthenaNavSystemConfig
class UAthenaNavSystemConfig : public UFortNavSystemConfig
{
public:
	TArray<struct FNavDataSetVariantSettings>    NavDataSetVariants;                                // 0x60(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        bUseNavDataSetVariants : 1;                        // Mask: 0x1, PropSize: 0x10x70(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bDiscardNavDataFromSublevels : 1;                  // Mask: 0x2, PropSize: 0x10x70(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bUseNavigationInvokers : 1;                        // Mask: 0x4, PropSize: 0x10x70(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bAllowStaticNavigationInvokerBoxes : 1;            // Mask: 0x8, PropSize: 0x10x70(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bLazyOctree : 1;                                   // Mask: 0x10, PropSize: 0x10x70(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bUseNavOctTreeInclusionBounds : 1;                 // Mask: 0x20, PropSize: 0x10x70(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bPrioritizeNavigationAroundSpawners : 1;           // Mask: 0x40, PropSize: 0x10x70(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bResetDirtyAreasOnInitialBuildingRelease : 1;      // Mask: 0x80, PropSize: 0x10x70(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bSupportRuntimeNavmeshDisabling : 1;               // Mask: 0x1, PropSize: 0x10x71(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bNavOctreeUnlockedByDefaultWhenNotPreloadingNavData : 1; // Mask: 0x2, PropSize: 0x10x71(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bConfigureDirtyAreaWarningSizeThreshold : 1;       // Mask: 0x4, PropSize: 0x10x71(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_1FB : 5;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_3545[0x2];                                     // Fixing Size After Last Property 
	float                                        DirtyAreaWarningSizeThreshold;                     // 0x74(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FOverriddenSupportedAgentsByReleaseVersion> OverriddenSupportedAgentsByReleaseVersion;         // 0x78(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bSuspendNavmeshWhenNoPossibleUsers;                // 0x88(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3546[0x7];                                     // Fixing Size After Last Property 
	TArray<class FName>                          AllowedNavBoundsUniqueActorTags;                   // 0x90(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FNavAgentSelector                     EnableAutoNavConfigForAgent;                       // 0xA0(0x4)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_3547[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAthenaNavSystemConfig* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class FortniteAI.FortNavArea_MetaReplacement
class UFortNavArea_MetaReplacement : public UFortNavArea
{
public:

	static class UClass* StaticClass();
	static class UFortNavArea_MetaReplacement* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class FortniteAI.FortNavArea_WallCornerReplacement
class UFortNavArea_WallCornerReplacement : public UFortNavArea
{
public:

	static class UClass* StaticClass();
	static class UFortNavArea_WallCornerReplacement* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class FortniteAI.FortNavArea_ObstacleReplacement
class UFortNavArea_ObstacleReplacement : public UFortNavArea
{
public:

	static class UClass* StaticClass();
	static class UFortNavArea_ObstacleReplacement* GetDefaultObj();

};

// 0x0 (0x68 - 0x68)
// Class FortniteAI.FortNavArea_TempWallReplacement
class UFortNavArea_TempWallReplacement : public UFortNavAreaAutomatic
{
public:

	static class UClass* StaticClass();
	static class UFortNavArea_TempWallReplacement* GetDefaultObj();

};

// 0x50 (0x330 - 0x2E0)
// Class FortniteAI.EdgeNavLinks
class UEdgeNavLinks : public UNavLinkProxy
{
public:
	float                                        DistanceBetweenLinks;                              // 0x2E0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3559[0x4];                                     // Fixing Size After Last Property 
	struct FVector                               Start;                                             // 0x2E8(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               End;                                               // 0x300(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SnapRadius;                                        // 0x318(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SnapHeight;                                        // 0x31C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LinkProjectionHeight;                              // 0x320(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RightLinkForwardOffset;                            // 0x324(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ECollisionChannel                 CollisionChannel;                                  // 0x328(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_355D[0x3];                                     // Fixing Size After Last Property 
	uint8                                        bManualAdjustment : 1;                             // Mask: 0x1, PropSize: 0x10x32C(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_355E[0x3];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UEdgeNavLinks* GetDefaultObj();

};

// 0x0 (0x570 - 0x570)
// Class FortniteAI.EdgeNavLinksRenderingComponent
class UEdgeNavLinksRenderingComponent : public UNavLinkRenderingComponent
{
public:

	static class UClass* StaticClass();
	static class UEdgeNavLinksRenderingComponent* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class FortniteAI.FortCustomNavLinkGlobalProxy
class UFortCustomNavLinkGlobalProxy : public UObject
{
public:
	uint8                                        Pad_3571[0x8];                                     // Fixing Size After Last Property 
	struct FNavLinkId                            LinkId;                                            // 0x30(0x8)(Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UObject*                               Owner;                                             // 0x38(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortCustomNavLinkGlobalProxy* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class FortniteAI.FortClamberLinkGlobalProxy
class UFortClamberLinkGlobalProxy : public UFortCustomNavLinkGlobalProxy
{
public:

	static class UClass* StaticClass();
	static class UFortClamberLinkGlobalProxy* GetDefaultObj();

};

// 0x0 (0x1E0 - 0x1E0)
// Class FortniteAI.FortDoorLinkComponent
class UFortDoorLinkComponent : public UNavLinkCustomComponent
{
public:

	static class UClass* StaticClass();
	static class UFortDoorLinkComponent* GetDefaultObj();

};

// 0x0 (0x48 - 0x48)
// Class FortniteAI.FortNavigationMetaFilter
class UFortNavigationMetaFilter : public UNavigationQueryFilter
{
public:

	static class UClass* StaticClass();
	static class UFortNavigationMetaFilter* GetDefaultObj();

};

// 0x0 (0x48 - 0x48)
// Class FortniteAI.FortNavigationFilter_Hunting
class UFortNavigationFilter_Hunting : public UFortNavigationMetaFilter
{
public:

	static class UClass* StaticClass();
	static class UFortNavigationFilter_Hunting* GetDefaultObj();

};

// 0x0 (0x48 - 0x48)
// Class FortniteAI.FortNavigationFilter_IgnoreSmashingCost
class UFortNavigationFilter_IgnoreSmashingCost : public UNavigationQueryFilter
{
public:

	static class UClass* StaticClass();
	static class UFortNavigationFilter_IgnoreSmashingCost* GetDefaultObj();

};

// 0x0 (0x48 - 0x48)
// Class FortniteAI.FortNavigationFilter_Leash
class UFortNavigationFilter_Leash : public UNavigationQueryFilter
{
public:

	static class UClass* StaticClass();
	static class UFortNavigationFilter_Leash* GetDefaultObj();

};

// 0x0 (0x48 - 0x48)
// Class FortniteAI.FortNavigationFilter_NoSmashing
class UFortNavigationFilter_NoSmashing : public UNavigationQueryFilter
{
public:

	static class UClass* StaticClass();
	static class UFortNavigationFilter_NoSmashing* GetDefaultObj();

};

// 0x0 (0x48 - 0x48)
// Class FortniteAI.FortNavigationFilter_NoSmashingIncludeLow
class UFortNavigationFilter_NoSmashingIncludeLow : public UNavigationQueryFilter
{
public:

	static class UClass* StaticClass();
	static class UFortNavigationFilter_NoSmashingIncludeLow* GetDefaultObj();

};

// 0x0 (0x48 - 0x48)
// Class FortniteAI.FortNavigationFilter_TetherZone
class UFortNavigationFilter_TetherZone : public UNavigationQueryFilter
{
public:

	static class UClass* StaticClass();
	static class UFortNavigationFilter_TetherZone* GetDefaultObj();

};

// 0x158 (0x5E8 - 0x490)
// Class FortniteAI.FortNavigationGraph
class UFortNavigationGraph : public UNavigationData
{
public:
	uint8                                        Pad_3581[0x158];                                   // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortNavigationGraph* GetDefaultObj();

};

// 0x10 (0x2F0 - 0x2E0)
// Class FortniteAI.FortNavModifierVolume
class UFortNavModifierVolume : public UNavModifierVolume
{
public:
	TArray<TSubclassOf<class UNavigationData>>   EnableOnlyForNavmeshClasses;                       // 0x2E0(0x10)(Edit, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortNavModifierVolume* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class FortniteAI.FortNavPathRendererInfoInterface
class UFortNavPathRendererInfoInterface : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UFortNavPathRendererInfoInterface* GetDefaultObj();

};

// 0x80 (0x120 - 0xA0)
// Class FortniteAI.FortNavPathRendererComponent
class UFortNavPathRendererComponent : public UActorComponent
{
public:
	class UNiagaraSystem*                        PathVFX;                                           // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               PathVFXOffset;                                     // 0xA8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FColor>                        PathColors;                                        // 0xC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UNiagaraComponent*                     PathVFXComponent;                                  // 0xD0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FPathRendererInfo>             PathRendererList;                                  // 0xD8(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<struct FVector4f>                     AllPathsPoints;                                    // 0xE8(0x10)(Net, ZeroConstructor, Transient, RepNotify, Protected, NativeAccessSpecifierProtected)
	TArray<struct FVector>                       NavPathPoints;                                     // 0xF8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected)
	TArray<int32>                                NavPathPointsStatus;                               // 0x108(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected)
	enum class EPatrollingMode                   PathMode;                                          // 0x118(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3591[0x3];                                     // Fixing Size After Last Property 
	int32                                        CurrentPathColorIndex;                             // 0x11C(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortNavPathRendererComponent* GetDefaultObj();

	void UpdatePathsVisualOnClient();
	void OnRep_PathPointsUpdated();
	void OnRep_PathModeUpdated();
	void OnRep_ColorIndexUpdated();
	void DeactivateFX();
};

// 0x40 (0x220 - 0x1E0)
// Class FortniteAI.FortZiplineLinkComponent
class UFortZiplineLinkComponent : public UNavLinkCustomComponent
{
public:
	struct FVector                               LinkOffsetFromSplineStart;                         // 0x1E0(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               LinkOffsetFromSplineEnd;                           // 0x1F8(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bOverrideSnapRadius;                               // 0x210(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3599[0x3];                                     // Fixing Size After Last Property 
	float                                        SnapRadiusOverride;                                // 0x214(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bOverrideSnapHeight;                               // 0x218(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_359A[0x3];                                     // Fixing Size After Last Property 
	float                                        SnapHeightOverride;                                // 0x21C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortZiplineLinkComponent* GetDefaultObj();

	void OnZiplineStateChanged(bool bIsZiplining, class UFortPlayerPawn* FortPlayerPawn);
};

// 0x0 (0x6B0 - 0x6B0)
// Class FortniteAI.JLargeNavMesh
class UJLargeNavMesh : public UAthenaNavMesh
{
public:

	static class UClass* StaticClass();
	static class UJLargeNavMesh* GetDefaultObj();

};

// 0x0 (0x6B0 - 0x6B0)
// Class FortniteAI.JMediumNavMesh
class UJMediumNavMesh : public UAthenaNavMesh
{
public:

	static class UClass* StaticClass();
	static class UJMediumNavMesh* GetDefaultObj();

};

// 0x0 (0x6B0 - 0x6B0)
// Class FortniteAI.JSmallNavMesh
class UJSmallNavMesh : public UAthenaNavMesh
{
public:

	static class UClass* StaticClass();
	static class UJSmallNavMesh* GetDefaultObj();

};

// 0x68 (0x90 - 0x28)
// Class FortniteAI.FortInescapableZoneTracker
class UFortInescapableZoneTracker : public UObject
{
public:
	class UFortNavigationGraph*                  NavGraph;                                          // 0x28(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_35A1[0x60];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortInescapableZoneTracker* GetDefaultObj();

};

// 0x80 (0xA8 - 0x28)
// Class FortniteAI.FortPathCostEstimator
class UFortPathCostEstimator : public UObject
{
public:
	TWeakObjectPtr<class UActor>                 GoalActorWeak;                                     // 0x28(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortNavigationGraph*                  NavGraph;                                          // 0x30(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_35A2[0x70];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortPathCostEstimator* GetDefaultObj();

};

// 0x0 (0x290 - 0x290)
// Class FortniteAI.NavGraphDebugActor
class UNavGraphDebugActor : public UActor
{
public:

	static class UClass* StaticClass();
	static class UNavGraphDebugActor* GetDefaultObj();

};

// 0x0 (0xE0 - 0xE0)
// Class FortniteAI.AthenaAISense_Hearing
class UAthenaAISense_Hearing : public UAISense_Hearing
{
public:

	static class UClass* StaticClass();
	static class UAthenaAISense_Hearing* GetDefaultObj();

};

// 0x18 (0xC0 - 0xA8)
// Class FortniteAI.FortAIControllerPerksComponent
class UFortAIControllerPerksComponent : public UFortControllerComponent
{
public:
	uint8                                        Pad_35A8[0x18];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAIControllerPerksComponent* GetDefaultObj();

};

// 0x140 (0x168 - 0x28)
// Class FortniteAI.FortAIPerkBase
class UFortAIPerkBase : public UObject
{
public:
	struct FScalableFloat                        CooldownDuration;                                  // 0x28(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        CooldownDurationRandomDeviation;                   // 0x50(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        ActivationCountBeforeCooldown;                     // 0x78(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        ActivationDuration;                                // 0xA0(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        ActivationDurationRandomDeviation;                 // 0xC8(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        OddsToActivate;                                    // 0xF0(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        FailedActivationCooldownDuration;                  // 0x118(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        FailedActivationCooldownDurationRandomDeviation;   // 0x140(0x28)(Edit, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAIPerkBase* GetDefaultObj();

};

// 0x28 (0x90 - 0x68)
// Class FortniteAI.AITask_ExecuteAbility
class UAITask_ExecuteAbility : public UAITask
{
public:
	uint8                                        Pad_35AC[0x28];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAITask_ExecuteAbility* GetDefaultObj();

};

// 0x58 (0xC0 - 0x68)
// Class FortniteAI.FortAITask_AdjustToSlot
class UFortAITask_AdjustToSlot : public UAITask
{
public:
	struct FVector                               SlotLocation;                                      // 0x68(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SlotDirection;                                     // 0x80(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35B0[0x28];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAITask_AdjustToSlot* GetDefaultObj();

};

// 0x28 (0xB8 - 0x90)
// Class FortniteAI.FortAITask_ExecuteAbility
class UFortAITask_ExecuteAbility : public UAITask_ExecuteAbility
{
public:
	uint8                                        Pad_35C3[0x28];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAITask_ExecuteAbility* GetDefaultObj();

	void OnInjectedHitResultDied(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
};

// 0x20 (0x138 - 0x118)
// Class FortniteAI.FortAITask_FuzzyQueue
class UFortAITask_FuzzyQueue : public UAITask_MoveTo
{
public:
	uint8                                        Pad_35C8[0x20];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAITask_FuzzyQueue* GetDefaultObj();

};

// 0x0 (0x118 - 0x118)
// Class FortniteAI.FortAITask_MoveTo
class UFortAITask_MoveTo : public UAITask_MoveTo
{
public:

	static class UClass* StaticClass();
	static class UFortAITask_MoveTo* GetDefaultObj();

};

// 0x10 (0x78 - 0x68)
// Class FortniteAI.FortAITask_NavmeshWait
class UFortAITask_NavmeshWait : public UAITask
{
public:
	uint8                                        Pad_35CA[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAITask_NavmeshWait* GetDefaultObj();

};

// 0x28 (0x90 - 0x68)
// Class FortniteAI.FortAITask_RotateToFace
class UFortAITask_RotateToFace : public UAITask
{
public:
	class UActor*                                FocusTarget;                                       // 0x68(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               FocalPoint;                                        // 0x70(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35CD[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAITask_RotateToFace* GetDefaultObj();

};

// 0x48 (0x1A8 - 0x160)
// Class FortniteAI.FortAITask_StepAside
class UFortAITask_StepAside : public UFortAITask_Move
{
public:
	uint8                                        Pad_35D0[0x18];                                    // Fixing Size After Last Property 
	class UActor*                                GoalActor;                                         // 0x178(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_35D1[0x28];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAITask_StepAside* GetDefaultObj();

};

// 0x98 (0x328 - 0x290)
// Class FortniteAI.FortAICloudVortex
class UFortAICloudVortex : public UActor
{
public:
	TArray<class USplineMeshComponent*>          SplineMeshesBody;                                  // 0x290(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class UParticleSystemComponent*              VortexBase;                                        // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UParticleSystemComponent*              VortexRing;                                        // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FVector>                       SplinePointsA;                                     // 0x2B0(0x10)(BlueprintVisible, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<struct FVector>                       SplinePointsB;                                     // 0x2C0(0x10)(BlueprintVisible, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<struct FVector>                       SplineTangentsA;                                   // 0x2D0(0x10)(BlueprintVisible, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<struct FVector>                       SplineTangentsB;                                   // 0x2E0(0x10)(BlueprintVisible, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<double>                               TimeRandomArray;                                   // 0x2F0(0x10)(BlueprintVisible, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	float                                        TwistOverTime;                                     // 0x300(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        NumberOfSplinePoints;                              // 0x304(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnableVortexBaseParticleSystem;                   // 0x308(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnableVortexRingParticleSystem;                   // 0x309(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_35E1[0x6];                                     // Fixing Size After Last Property 
	struct FVector                               BasePSOffset;                                      // 0x310(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortAICloudVortex* GetDefaultObj();

	void CalculateTwisterWiggle(double TickDelta);
};

// 0x240 (0x4D0 - 0x290)
// Class FortniteAI.ThreatCloud
class UThreatCloud : public UActor
{
public:
	TArray<class UBoxComponent*>                 LightningSourceAreas;                              // 0x290(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	struct FSlateBrush                           MiniMapIconBrush;                                  // 0x2A0(0xC0)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	float                                        MiniMapIconPercent;                                // 0x360(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_35FD[0xC];                                     // Fixing Size After Last Property 
	struct FSlateBrush                           MiniMapFarOffIconBrush;                            // 0x370(0xC0)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FLinearColor                          ActiveTint;                                        // 0x430(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FLinearColor                          InActiveTint;                                      // 0x440(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        ActiveTransitionTime;                              // 0x450(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        DeathTimerDuration;                                // 0x454(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        CloudMiniMapTickInterval;                          // 0x458(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3600[0x14];                                    // Fixing Size After Last Property 
	float                                        MiniMapFarOffIconDegreesOfArc;                     // 0x470(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3601[0xC];                                     // Fixing Size After Last Property 
	struct FBox                                  ThreatBoxVolume;                                   // 0x480(0x38)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	float                                        GroundLevelUnderCloud;                             // 0x4B8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3602[0x4];                                     // Fixing Size After Last Property 
	TArray<struct FVector>                       GoalActorLocations;                                // 0x4C0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UThreatCloud* GetDefaultObj();

	void OnThreatVolumeChanged();
	void OnLightningStrike(struct FVector& StartLocation, struct FVector& EndLocation, class UBuildingRift* Rift, bool bLightningStruckRift);
	void OnCloudStart();
	void OnCloudHiddenChange(bool bCloudsAreHidden);
	void OnCloudDeactivated(enum class EFortThreatDeactivationType DeactivationType);
	void OnCloudActivated();
	void OnBeginDeath();
	void ManualLightningFlash();
	struct FBox GetThreatVolume();
};

// 0x0 (0x28 - 0x28)
// Class FortniteAI.AthenaAIBlueprintLibrary
class UAthenaAIBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAthenaAIBlueprintLibrary* GetDefaultObj();

	void MakeBotGroupsTakeEachOtherAsTargets(TArray<class UActor*>& GroupA, TArray<class UActor*>& GroupB, enum class EPerceptionState PerceptionState, float ForgetTime, float ForgetDistance);
	void KillBots(class UObject* WorldContextObject, bool bKillPlayers, bool bKillNoneParticipants, uint8 TeamIndex, class UActor* BotOwner);
	void JoinTeam(class UObject* WorldContextObject, class UController* SourceTeamController, class UController* DestinationTeamController);
	bool IsWeaponSupported(class UObject* WorldContextObject, class UFortWeapon* FortWeapon);
	bool IsItemDefinitionSupported(class UObject* WorldContextObject, class UFortItemDefinition* FortItemDef);
	class UAthenaAIServicePlayerBots* GetAIServicePlayerBots(class UObject* WorldContextObject);
	class UAthenaAIServiceLoot* GetAIServiceLoot(class UObject* WorldContextObject);
	class UAthenaAIServiceCreativePlayerBots* GetAIServiceCreativePlayerBots(class UObject* WorldContextObject);
	class UAthenaAIPopulationTracker* GetAIPopulationTracker(class UObject* WorldContextObject);
	class UPawn* AthenaSpawnAIFromClass(class UObject* WorldContextObject, TSubclassOf<class UPawn> PawnClass, class UBehaviorTree* BehaviorTree, const struct FVector& Location, const struct FRotator& Rotation, bool bNoCollisionFail, class UActor* Owner);
	bool AIPawnFromGAHasLuringPickupAsGoal(struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayTag& GameplayTag, float MaxLifetime, enum class EFortPickupSpawnSource RequiredPickupSpawnSource);
};

// 0x30 (0xD8 - 0xA8)
// Class FortniteAI.FortAICombatTokenConsumerComponent
class UFortAICombatTokenConsumerComponent : public UFortPawnComponent
{
public:
	float                                        TokenHoldMinDuration;                              // 0xA8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        TokenHoldMaxDuration;                              // 0xAC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAthenaAIBotController*            CachedOwnerBotController;                          // 0xB0(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class UFortAICombatTokenProviderComponent> CurrentTargetTokenProvider;                        // 0xB8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bHasToken;                                         // 0xC0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3679[0x17];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAICombatTokenConsumerComponent* GetDefaultObj();

};

// 0x58 (0xF8 - 0xA0)
// Class FortniteAI.FortAICombatTokenProviderComponent
class UFortAICombatTokenProviderComponent : public UActorComponent
{
public:
	struct FScalableFloat                        TokenMaxCount;                                     // 0xA0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	int32                                        TokenMaxCountRuntime;                              // 0xC8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_367C[0x4];                                     // Fixing Size After Last Property 
	TArray<TWeakObjectPtr<class UFortAICombatTokenConsumerComponent>> Tokens;                                            // 0xD0(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_367D[0x18];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAICombatTokenProviderComponent* GetDefaultObj();

};

// 0x38 (0xD8 - 0xA0)
// Class FortniteAI.FortAthenaAIBotBuildingComponent
class UFortAthenaAIBotBuildingComponent : public UActorComponent
{
public:
	uint8                                        Pad_3682[0x38];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaAIBotBuildingComponent* GetDefaultObj();

};

// 0x8 (0xA8 - 0xA0)
// Class FortniteAI.FortAthenaAlertStateComponent
class UFortAthenaAlertStateComponent : public UActorComponent
{
public:
	float                                        StealthMeterTarget;                                // 0xA0(0x4)(BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        StealthMeterTargetTime;                            // 0xA4(0x4)(BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortAthenaAlertStateComponent* GetDefaultObj();

	void SetStealthMeterTargetTime(float InStealthMeterTargetTime);
	void SetStealthMeterTarget(float InStealthMeterTarget);
	void OnStealthMeterChanged(class UFortAthenaAIBotController* BotController, float StealthMeterTarget, float StealthMeterTargetTime);
	float GetStealthMeterTargetTime();
	float GetStealthMeterTarget();
};

// 0x10 (0xB0 - 0xA0)
// Class FortniteAI.FortAthenaNPCLoopStateComponent
class UFortAthenaNPCLoopStateComponent : public UActorComponent
{
public:
	uint8                                        bSpawnOutsideTheLoop : 1;                          // Mask: 0x1, PropSize: 0x10xA0(0x1)(BlueprintVisible, BlueprintReadOnly, Net, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_202 : 7;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_36FB[0x7];                                     // Fixing Size After Last Property 
	class UFortAthenaAIRuntimeParameters_AIBotLoopSettings* RuntimeLoopSettings;                               // 0xA8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaNPCLoopStateComponent* GetDefaultObj();

	void OnOwnerPawnDied(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void InitLoopState(class UFortPawn* PawnOwner);
};

// 0x1A0 (0x248 - 0xA8)
// Class FortniteAI.FortPawnComponent_PingCommand
class UFortPawnComponent_PingCommand : public UFortPawnComponent
{
public:
	struct FFortPingInfo                         PingInfo;                                          // 0xA8(0x188)(Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_36FE[0x18];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortPawnComponent_PingCommand* GetDefaultObj();

};

// 0x8 (0x250 - 0x248)
// Class FortniteAI.FortPawnComponent_AIBotPingCommand
class UFortPawnComponent_AIBotPingCommand : public UFortPawnComponent_PingCommand
{
public:
	class UAIController*                         CachedOwnerController;                             // 0x248(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortPawnComponent_AIBotPingCommand* GetDefaultObj();

	void OnServerMarkerRemoved(const struct FMarkerID& MarkerID);
	void OnServerMarkerAdded(struct FFortWorldMarkerData& MarkerData);
	void OnAIPingCommand(class UFortPlayerPawn* PlayerPawn, enum class EPingCommandType CommandType);
	void HandleOnNPCUnconvertEvent(class UFortPawn* UnconvertedFortPawn, enum class EUnconvertReason UnconvertReason);
	void HandleOnNPCConvertEvent(class UFortPawn* InstigatorPawn, class UFortPawn* ConvertedPawn);
};

// 0x30 (0xD8 - 0xA8)
// Class FortniteAI.FortPawnComponent_AIFormation
class UFortPawnComponent_AIFormation : public UFortPawnComponent
{
public:
	TArray<struct FVector>                       Slots;                                             // 0xA8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	float                                        MaxDistanceFromSlotToSprint;                       // 0xB8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3734[0x4];                                     // Fixing Size After Last Property 
	TArray<struct FFortAthenaAIFormationSlotRuntime> RuntimeSlots;                                      // 0xC0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	float                                        MaxDistanceFromSlotToSprintSqr;                    // 0xD0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3735[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortPawnComponent_AIFormation* GetDefaultObj();

	void OnUserDied(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
};

// 0x8 (0xB0 - 0xA8)
// Class FortniteAI.FortPawnComponent_AIGroup
class UFortPawnComponent_AIGroup : public UFortPawnComponent
{
public:
	bool                                         bCanBeGroupLeader;                                 // 0xA8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_37A1[0x3];                                     // Fixing Size After Last Property 
	int32                                        GroupId;                                           // 0xAC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortPawnComponent_AIGroup* GetDefaultObj();

	void RemoveFromCurrentGroup();
	void OnGroupMemberDied(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
};

// 0x1C8 (0x458 - 0x290)
// Class FortniteAI.FortAthenaPatrolPath
class UFortAthenaPatrolPath : public UActor
{
public:
	uint8                                        Pad_3845[0x18];                                    // Fixing Size After Last Property 
	enum class EPatrollingMode                   Mode;                                              // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3846[0x7];                                     // Fixing Size After Last Property 
	TArray<class UFortAthenaPatrolPoint*>        PatrolPoints;                                      // 0x2B0(0x10)(Edit, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	bool                                         bUseRandomStartupPatrolPoint;                      // 0x2C0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUseRandomStartupDirection;                        // 0x2C1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3848[0x6];                                     // Fixing Size After Last Property 
	struct FGameplayTagContainer                 GameplayTags;                                      // 0x2C8(0x20)(Edit, Protected, NativeAccessSpecifierProtected)
	class UActor*                                RadialLeashLocationActorOverride;                  // 0x2E8(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RadialLeashInnerRadiusOverride;                    // 0x2F0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RadialLeashOuterRadiusOverride;                    // 0x2F4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FPatrolPathLeash>              PathLeashArray;                                    // 0x2F8(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        WaterLevelIndexMax;                                // 0x308(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        WaterLevelIndexMin;                                // 0x330(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnPatrolPointFailedToReach;                        // 0x358(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnPatrolPointReached;                              // 0x368(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnPatrolPathStarted;                               // 0x378(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnPatrolPathStopped;                               // 0x388(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnPatrolPathActivationStatusChanged;               // 0x398(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxConcurrentUsage;                                // 0x3A8(0x28)(Edit, NativeAccessSpecifierPrivate)
	int32                                        CurrentConcurrentUsage;                            // 0x3D0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_384E[0x4];                                     // Fixing Size After Last Property 
	struct FScalableFloat                        MaxLifetimeUsage;                                  // 0x3D8(0x28)(Edit, NativeAccessSpecifierPrivate)
	float                                        DebugLinkWidthSelected;                            // 0x400(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        DebugLinkWidthNotSelected;                         // 0x404(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FLinearColor                          DebugNotSelectedColor;                             // 0x408(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_206 : 1;                                    // Fixing Bit-Field Size 
	uint8                                        bIsPatrolPathEnabled : 1;                          // Mask: 0x2, PropSize: 0x10x418(0x1)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3851[0x3F];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaPatrolPath* GetDefaultObj();

	void SetPatrolPathEnabled(bool bIsEnabled);
	void PatrolPointReached(class UFortAthenaPatrolPoint* PathPoint, class UAIController* AIInstigator);
	void PatrolPointFailedToReach(class UFortAthenaPatrolPoint* PathPoint, class UAIController* AIInstigator);
	void PatrolPathStopped(class UAIController* AIInstigator);
	void PatrolPathStarted(class UAIController* AIInstigator);
	void OnCurrentPlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags);
	void GetPatrolPoints(TArray<class UFortAthenaPatrolPoint*>* OutPatrolPoints);
	bool CanBeUsed();
};

// 0x28 (0x480 - 0x458)
// Class FortniteAI.FortCreativePatrolPath
class UFortCreativePatrolPath : public UFortAthenaPatrolPath
{
public:
	TArray<class UFortCreativeDeviceProp*>       CreativePatrolPoints;                              // 0x458(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	enum class EFortCreativePatrolPathGroup      PatrolPathGroup;                                   // 0x468(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_385D[0x7];                                     // Fixing Size After Last Property 
	class UBuildingActor*                        CreativePathRenderer;                              // 0x470(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_385E[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortCreativePatrolPath* GetDefaultObj();

	void SetPatrolHasValidNavMesh(bool bValidNavMesh);
	bool HasPatrolValidNavMesh();
};

// 0x8 (0x30 - 0x28)
// Class FortniteAI.FortAthenaAIRuntimeParameters
class UFortAthenaAIRuntimeParameters : public UObject
{
public:
	int32                                        ExtractedLevel;                                    // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3861[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaAIRuntimeParameters* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class FortniteAI.FortAthenaAIBotDigestedSkillSet
class UFortAthenaAIBotDigestedSkillSet : public UFortAthenaAIRuntimeParameters
{
public:

	static class UClass* StaticClass();
	static class UFortAthenaAIBotDigestedSkillSet* GetDefaultObj();

};

// 0x750 (0x780 - 0x30)
// Class FortniteAI.FortAthenaAIBotAimingDigestedSkillSet
class UFortAthenaAIBotAimingDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet
{
public:
	struct FDigestedFocusSetting                 DefaultFocusSetting;                               // 0x30(0x68)(Transient, Protected, NativeAccessSpecifierProtected)
	TArray<struct FDigestedFocusSetting>         FocusSettings;                                     // 0x98(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	struct FLookAtDigestedSetting                LookAtSettings[0x4];                               // 0xA8(0x40)(Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bAllowScanAroundWhileSwimming;                     // 0xE8(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_386F[0x3];                                     // Fixing Size After Last Property 
	float                                        TrackingReactionTime;                              // 0xEC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        InAirTrackingReactionTimeMultiplier;               // 0xF0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TrackingInterpTime;                                // 0xF4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TrackingInterpTimeMultForGroundVehicles;           // 0xF8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TrackingInterpTimeMultForFlyingVehicles;           // 0xFC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxTrackingPredictionError;                        // 0x100(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxTrackingOffsetErrorMultiplier;                  // 0x104(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AdjustedTrackingOffsetErrorMultiplierAgainstAIs;   // 0x108(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TrackingErrorUpdateInterval;                       // 0x10C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TrackingInAirVelocityThreshold;                    // 0x110(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TrackingInAirHeightDeltaThreshold;                 // 0x114(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TargetAcquisitionRate;                             // 0x118(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TimeToHitMultiplier;                               // 0x11C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxTimeToHitAddedCausedByTargetSpeed;              // 0x120(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxTimeToHitAddedCausedByTargetInAir;              // 0x124(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TimeToHitDelayMultiplierWhenTargetInAir;           // 0x128(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3879[0x4];                                     // Fixing Size After Last Property 
	struct FScalableFloat                        TimeToHitDelayMultiplierCurveBasedOnSpeed;         // 0x130(0x28)(Transient, Protected, NativeAccessSpecifierProtected)
	bool                                         bAimingCircleEnabled;                              // 0x158(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bTargetIdleDetectionEnabled;                       // 0x159(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bTargetIdleUseAgainstNPC;                          // 0x15A(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_387C[0x1];                                     // Fixing Size After Last Property 
	float                                        TargetIdleLookBackTime;                            // 0x15C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TargetIdleUnsuspectingCosAngle;                    // 0x160(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TargetIdleUnsuspectingDistance;                    // 0x164(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TargetIdleUnsuspectingDamageDuration;              // 0x168(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TargetIdleUnsuspectingTimeMultiplier;              // 0x16C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TargetIdleVerticalSpeedThreshold;                  // 0x170(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TargetIdleLateralSpeedThreshold;                   // 0x174(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TargetIdleFrontalSpeedThreshold;                   // 0x178(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TargetIdleRevivedGracePeriodDuration;              // 0x17C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxDistanceEvaluationErrorRatio;                   // 0x180(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TargetingUpdateInterval;                           // 0x184(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TargetingUpdateIntervalMaxDeviation;               // 0x188(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ReachLeashLimitToleranceDistance;                  // 0x18C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShootFloorTrapOnlyWhenHigherThanTrap;             // 0x190(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3888[0x3];                                     // Fixing Size After Last Property 
	float                                        TargetingRotationSpeedLimit;                       // 0x194(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TargetingRotationSnapThreshold;                    // 0x198(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BaseClampingDistance;                              // 0x19C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDigestedWeaponAccuracy               NoWeaponAccuracy;                                  // 0x1A0(0x328)(Transient, Protected, NativeAccessSpecifierProtected)
	TArray<struct FDigestedWeaponAccuracyCategory> WeaponAccuracies;                                  // 0x4C8(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<struct FDigestedTargetBasedAccuracyCategory> DigestedTargetBasedAccuracies;                     // 0x4D8(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	struct FDigestedTrackingOffsetModifiers      TrackingOffsetModifiers;                           // 0x4E8(0x120)(Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDigestedAimingCircleSettings         DefaultAimingCircleSettings;                       // 0x608(0x168)(Transient, Protected, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UFortWeapon>            CachedWeaponUsedToCalculateAccuracy;               // 0x770(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_389A[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaAIBotAimingDigestedSkillSet* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class FortniteAI.FortAthenaAIBotSkillSet
class UFortAthenaAIBotSkillSet : public UObject
{
public:
	uint8                                        Pad_38A6[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaAIBotSkillSet* GetDefaultObj();

};

// 0x1568 (0x1598 - 0x30)
// Class FortniteAI.FortAthenaAIBotAimingSkillSet
class UFortAthenaAIBotAimingSkillSet : public UFortAthenaAIBotSkillSet
{
public:
	struct FFocusSetting                         DefaultFocusSetting;                               // 0x30(0x140)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FFocusSetting>                 FocusSettings;                                     // 0x170(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FLookAtSetting                        LookAtSettings[0x4];                               // 0x180(0x280)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        AllowScanAroundWhileSwimming;                      // 0x400(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        TrackingReactionTime;                              // 0x428(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        InAirTrackingReactionTimeMultiplier;               // 0x450(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        TrackingInterpTime;                                // 0x478(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        TrackingInterpTimeMultForGroundVehicles;           // 0x4A0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        TrackingInterpTimeMultForFlyingVehicles;           // 0x4C8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxTrackingPredictionError;                        // 0x4F0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxTrackingOffsetErrorMultiplier;                  // 0x518(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        AdjustedTrackingOffsetErrorMultiplierAgainstAIs;   // 0x540(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        TrackingErrorUpdateInterval;                       // 0x568(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        TrackingInAirVelocityThreshold;                    // 0x590(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        TrackingInAirHeightDeltaThreshold;                 // 0x5B8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        TargetAcquisitionRate;                             // 0x5E0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        TimeToHitMultiplier;                               // 0x608(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxTimeToHitAddedCausedByTargetSpeed;              // 0x630(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxTimeToHitAddedCausedByTargetInAir;              // 0x658(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        TimeToHitDelayMultiplierWhenTargetInAir;           // 0x680(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        TimeToHitDelayMultiplierCurveBasedOnSpeed;         // 0x6A8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        AimingCircleEnabled;                               // 0x6D0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        TargetIdleDetectionEnabled;                        // 0x6F8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        TargetIdleUseAgainstNPC;                           // 0x720(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        TargetIdleLookBackTime;                            // 0x748(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        TargetIdleUnsuspectingAngle;                       // 0x770(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        TargetIdleUnsuspectingDistance;                    // 0x798(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        TargetIdleUnsuspectingDamageDuration;              // 0x7C0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        TargetIdleUnsuspectingTimeMultiplier;              // 0x7E8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        TargetIdleVerticalSpeedThreshold;                  // 0x810(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        TargetIdleLateralSpeedThreshold;                   // 0x838(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        TargetIdleFrontalSpeedThreshold;                   // 0x860(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        TargetIdleRevivedGracePeriodDuration;              // 0x888(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxDistanceEvaluationErrorRatio;                   // 0x8B0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        TargetingUpdateInterval;                           // 0x8D8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        TargetingUpdateIntervalMaxDeviation;               // 0x900(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ReachLeashLimitToleranceDistance;                  // 0x928(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ShootFloorTrapOnlyWhenHigherThanTrap;              // 0x950(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        TargetingRotationSpeedLimit;                       // 0x978(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        TargetingRotationSnapThreshold;                    // 0x9A0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        BaseClampingDistance;                              // 0x9C8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FWeaponAccuracy                       NoWeaponAccuracy;                                  // 0x9F0(0x760)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FWeaponAccuracyCategory>       WeaponAccuracies;                                  // 0x1150(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FTargetBasedAccuracyCategory>  TargetBasedAccuracies;                             // 0x1160(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                        bDigestTrackingOffsetModifiersWithAvgMatchMMR : 1; // Mask: 0x1, PropSize: 0x10x1170(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_207 : 7;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_38D3[0x7];                                     // Fixing Size After Last Property 
	TArray<struct FTrackingOffsetModifierInfo>   TrackingOffsetModifiers;                           // 0x1178(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FAimingCircleSettings                 DefaultAimingCircleSettings;                       // 0x1188(0x410)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortAthenaAIBotAimingSkillSet* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class FortniteAI.AISenseScalableConfig
class UAISenseScalableConfig : public UObject
{
public:

	static class UClass* StaticClass();
	static class UAISenseScalableConfig* GetDefaultObj();

};

// 0xC8 (0xF0 - 0x28)
// Class FortniteAI.AISenseScalableConfig_Sight
class UAISenseScalableConfig_Sight : public UAISenseScalableConfig
{
public:
	struct FScalableFloat                        SightRadius;                                       // 0x28(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        LoseSightRadius;                                   // 0x50(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        PeripheralVisionAngleDegrees;                      // 0x78(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        PointOfViewBackwardOffset;                         // 0xA0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        NearClippingRadius;                                // 0xC8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAISenseScalableConfig_Sight* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class FortniteAI.AISenseScalableConfig_Hearing
class UAISenseScalableConfig_Hearing : public UAISenseScalableConfig
{
public:
	struct FScalableFloat                        HearingRange;                                      // 0x28(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAISenseScalableConfig_Hearing* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class FortniteAI.FortAthenaAIBotAlertLevelConfig
class UFortAthenaAIBotAlertLevelConfig : public UObject
{
public:
	int32                                        AlertLevels;                                       // 0x28(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_391C[0x4];                                     // Fixing Size After Last Property 
	class UAISenseScalableConfig*                ScalableSenseConfig;                               // 0x30(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaAIBotAlertLevelConfig* GetDefaultObj();

};

// 0x110 (0x140 - 0x30)
// Class FortniteAI.FortAthenaAIBotAttackingDigestedSkillSet
class UFortAthenaAIBotAttackingDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet
{
public:
	float                                        MaxDistanceToEngageMeleeSq;                        // 0x30(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MinDistanceToGiveUpMeleeSq;                        // 0x34(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxDistanceToThrowMeleeAttackSq;                   // 0x38(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ExcludeReachingTargetInMeleeTime;                  // 0x3C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ExcludeReachingTargetMoveDistanceSquared;          // 0x40(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUseContinuousMeleeAttack;                         // 0x44(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bOnlyEngageMeleeAgainstThreatThatHasNoRangeWeapon; // 0x45(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bOnlyUsePickaxeAgainstGameParticipants;            // 0x46(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3928[0x1];                                     // Fixing Size After Last Property 
	float                                        MaxDistanceToConsiderAsAnAlternateTargetSq;        // 0x48(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnableAlternateTargetRequiredTags;                // 0x4C(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3929[0x3];                                     // Fixing Size After Last Property 
	struct FGameplayTagContainer                 AlternateTargetRequiredTags;                       // 0x50(0x20)(Transient, Protected, NativeAccessSpecifierProtected)
	bool                                         bEnableWTFBehavior;                                // 0x70(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_392A[0x3];                                     // Fixing Size After Last Property 
	float                                        MinCooldownDelayBetweenMeleeAttackAttempts;        // 0x74(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxCooldownDelayBetweenMeleeAttackAttempts;        // 0x78(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_392B[0x4];                                     // Fixing Size After Last Property 
	struct FGameplayTagContainer                 ThrowableGameplayTags;                             // 0x80(0x20)(Transient, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagQuery                     CombatMeleeTagQuery;                               // 0xA0(0x48)(Transient, Protected, NativeAccessSpecifierProtected)
	int32                                        MinThrowableCount;                                 // 0xE8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MaxThrowableCount;                                 // 0xEC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ThrowableCooldownMin;                              // 0xF0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ThrowableCooldownMax;                              // 0xF4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ThrowableMinimumRangeSquared;                      // 0xF8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bThrowableEvaluatorActive;                         // 0xFC(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_392D[0x3];                                     // Fixing Size After Last Property 
	float                                        RetreatMinHealthRange;                             // 0x100(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RetreatMaxHealthRange;                             // 0x104(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RetreatProbability;                                // 0x108(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RetreatRangeMinSquared;                            // 0x10C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RetreatRangeMaxSquared;                            // 0x110(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RetreatMaxDuration;                                // 0x114(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               RetreatPositionBoxExtent;                          // 0x118(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         CautiousInvestigationEnabled;                      // 0x130(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_392E[0x3];                                     // Fixing Size After Last Property 
	float                                        TimeSinceLastStimToBeCautious;                     // 0x134(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CautiousInvestigationTimeMax;                      // 0x138(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_392F[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaAIBotAttackingDigestedSkillSet* GetDefaultObj();

};

// 0x500 (0x530 - 0x30)
// Class FortniteAI.FortAthenaAIBotAttackingSkillSet
class UFortAthenaAIBotAttackingSkillSet : public UFortAthenaAIBotSkillSet
{
public:
	struct FScalableFloat                        MaxDistanceToEngageMelee;                          // 0x30(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MinDistanceToGiveUpMelee;                          // 0x58(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxDistanceToThrowMeleeAttack;                     // 0x80(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        UseContinuousMeleeAttack;                          // 0xA8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        OnlyEngageMeleeAgainstThreatThatHasNoRangeWeapon;  // 0xD0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        OnlyUsePickaxeAgainstGameParticipants;             // 0xF8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        EnableWTFBehavior;                                 // 0x120(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MinCooldownDelayBetweenMeleeAttackAttempts;        // 0x148(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxCooldownDelayBetweenMeleeAttackAttempts;        // 0x170(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagQuery                     CombatMeleeTagQuery;                               // 0x198(0x48)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ExcludeReachingTargetInMeleeTime;                  // 0x1E0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ExcludeReachingTargetMoveDistance;                 // 0x208(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxDistanceToConsiderAsAnAlternateTarget;          // 0x230(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        EnableAlternateTargetRequiredTags;                 // 0x258(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 AlternateTargetRequiredTags;                       // 0x280(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 ThrowableGameplayTags;                             // 0x2A0(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MinThrowableCount;                                 // 0x2C0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxThrowableCount;                                 // 0x2E8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ThrowableCooldownMin;                              // 0x310(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ThrowableCooldownMax;                              // 0x338(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ThrowableMinimumRange;                             // 0x360(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ThrowableEvaluatorActive;                          // 0x388(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        RetreatMinHealthRange;                             // 0x3B0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        RetreatMaxHealthRange;                             // 0x3D8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        RetreatProbability;                                // 0x400(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        RetreatRangeMin;                                   // 0x428(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        RetreatRangeMax;                                   // 0x450(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        RetreatMaxDuration;                                // 0x478(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FVector                               RetreatPositionBoxExtent;                          // 0x4A0(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                        CautiousInvestigationEnabled;                      // 0x4B8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        TimeSinceLastStimToBeCautious;                     // 0x4E0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        CautiousInvestigationTimeMax;                      // 0x508(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortAthenaAIBotAttackingSkillSet* GetDefaultObj();

};

// 0x40 (0x70 - 0x30)
// Class FortniteAI.FortAthenaAIBotBuildingDigestedSkillSet
class UFortAthenaAIBotBuildingDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet
{
public:
	float                                        DefensiveBuildingDelayBetweenBuilds;               // 0x30(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DefensiveBuildingDelayDeviationBetweenBuilds;      // 0x34(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DelayBetweenBuildPieces;                           // 0x38(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ForceEquipBuildToolDuration;                       // 0x3C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        StealWallTurboBuildDetectionTime;                  // 0x40(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        StealWallAfterNumberOfTurboBuiltWall;              // 0x44(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        StealWallEfficiency;                               // 0x48(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        StealWallBuildingTemplateWeights[0x5];             // 0x4C(0x14)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FAthenaFortAIBotDigestedWeightedBuildingList> WeightedBuildingLists;                             // 0x60(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortAthenaAIBotBuildingDigestedSkillSet* GetDefaultObj();

};

// 0x1F0 (0x220 - 0x30)
// Class FortniteAI.FortAthenaAIBotBuildingSkillSet
class UFortAthenaAIBotBuildingSkillSet : public UFortAthenaAIBotSkillSet
{
public:
	struct FScalableFloat                        DefensiveBuildingDelayBetweenBuilds;               // 0x30(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        DefensiveBuildingDelayDeviationBetweenBuilds;      // 0x58(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        DelayBetweenBuildPieces;                           // 0x80(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ForceEquipBuildToolDuration;                       // 0xA8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FAthenaFortAIBotWeightedBuildingList> WeightedBuildingLists;                             // 0xD0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        StealWallTurboBuildDetectionTime;                  // 0xE0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        StealWallAfterNumberOfTurboBuiltWall;              // 0x108(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        StealWallEfficiency;                               // 0x130(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        StealWallBuildingTemplateWeights[0x5];             // 0x158(0xC8)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortAthenaAIBotBuildingSkillSet* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class FortniteAI.FortAthenaAIBotCosmeticData
class UFortAthenaAIBotCosmeticData : public UDataAsset
{
public:
	TArray<TSoftObjectPtr<class UFortAthenaAIBotCosmeticLibraryData>> CosmeticLibraries;                                 // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaAIBotCosmeticData* GetDefaultObj();

	TSoftObjectPtr<class UFortAthenaAIBotCosmeticLibraryData> FindLibraryDataFromName(const class FString& PartialName);
};

// 0x190 (0x1C0 - 0x30)
// Class FortniteAI.FortAthenaAIBotCosmeticLibraryData
class UFortAthenaAIBotCosmeticLibraryData : public UPrimaryDataAsset
{
public:
	TSoftObjectPtr<class UDataTable>             PredefineSetsDataTable;                            // 0x30(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UDataTable>             CharactersDataTable;                               // 0x50(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UDataTable>             GlidersDataTable;                                  // 0x70(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UDataTable>             SkyDiveContrailsDataTable;                         // 0x90(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UDataTable>             BackpacksDataTable;                                // 0xB0(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UDataTable>             PickaxesDataTable;                                 // 0xD0(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UDataTable>             FallbackCharactersDataTable;                       // 0xF0(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UDataTable>             EmotesDataTable;                                   // 0x110(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UDataTable>             BannerIconDataTable;                               // 0x130(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UDataTable>             BannerColorDataTable;                              // 0x150(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        OddsToUseSameSetCosmeticItems;                     // 0x170(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        OddsToUseRandomItemWhenNoneFromSetAvailable;       // 0x198(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaAIBotCosmeticLibraryData* GetDefaultObj();

	TArray<class UDataTable*> RetrieveDataTables();
	class UDataTable* FindDataTableFromAssetType(const class FString& AssetType);
	bool FillDataTableValuesFromSourceLibrary(class UFortAthenaAIBotCosmeticLibraryData* SourceLibrary);
};

// 0x0 (0x28 - 0x28)
// Class FortniteAI.BotCosmeticBlueprintHelperLibrary
class UBotCosmeticBlueprintHelperLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBotCosmeticBlueprintHelperLibrary* GetDefaultObj();

	bool SplitDataArrayByType(TArray<class FString>& InAssetNames, TArray<class FString>& InAssetTypes, TArray<int32>& InAssetUsageCounts, TArray<int32>& InAssetTypeSplitIndices, int32 CurrentSplitIndex, class FString* OutAssetType, TArray<class FString>* OutAssetNames, TArray<int32>* OutAssetUsageCounts);
	TArray<class FString> OpenCSVFileDialog(const class FString& TitleDetails, bool bAllowMultipleFiles);
	bool LoadDataFromCSV(const class FString& FilePath, TArray<class FString>& ForbiddenAssetNames, TArray<class FString>& ForbiddenAssetPrefix, TArray<class FString>* AssetNames, TArray<class FString>* AssetTypes, TArray<int32>* AssetUsageCounts, TArray<int32>* AssetTypeSplitIndices);
	bool GenerateWeightedCSV(const class FString& AssetTypeName, TArray<class FString>& AssetNames, TArray<int32>& AssetWeight, class FString* CSV);
	bool ExportDataTableToSourceCSV(class UDataTable* DataTable, bool bCanCheckOutFile);
};

// 0x150 (0x180 - 0x30)
// Class FortniteAI.FortAthenaAIBotCustomizationData
class UFortAthenaAIBotCustomizationData : public UPrimaryDataAsset
{
public:
	TSubclassOf<class UFortPlayerPawnAthena>     PawnClass;                                         // 0x30(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bRequiresUniqueNetId : 1;                          // Mask: 0x1, PropSize: 0x10x38(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bHasCustomSquadId : 1;                             // Mask: 0x2, PropSize: 0x10x38(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_208 : 6;                                    // Fixing Bit-Field Size 
	uint8                                        CustomSquadId;                                     // 0x39(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bOverrideCanRespawnOnDeath : 1;                    // Mask: 0x1, PropSize: 0x10x3A(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bCanRespawnOnDeath : 1;                            // Mask: 0x2, PropSize: 0x10x3A(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bOverrideBehaviorTree : 1;                         // Mask: 0x4, PropSize: 0x10x3A(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bOverrideCharacterCustomization : 1;               // Mask: 0x8, PropSize: 0x10x3A(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bOverrideDBNOPlayStyle : 1;                        // Mask: 0x10, PropSize: 0x10x3A(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bOverrideSkillLevel : 1;                           // Mask: 0x20, PropSize: 0x10x3A(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bUseMatchMMRToOverrideSkillLevel : 1;              // Mask: 0x40, PropSize: 0x10x3A(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bOverrideSkillSets : 1;                            // Mask: 0x80, PropSize: 0x10x3A(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bOverrideStartupInventory : 1;                     // Mask: 0x1, PropSize: 0x10x3B(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bOverrideBotNameSettings : 1;                      // Mask: 0x2, PropSize: 0x10x3B(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bOverrideBotIDAnalyticsSuffix : 1;                 // Mask: 0x4, PropSize: 0x10x3B(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bOverrideConstructionBuildingInfo : 1;             // Mask: 0x8, PropSize: 0x10x3B(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_209 : 4;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_39F2[0x4];                                     // Fixing Size After Last Property 
	TSoftObjectPtr<class UDataTable>             OverrideSkillLevelMMRTable;                        // 0x40(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBehaviorTree*                         BehaviorTree;                                      // 0x60(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EBotDataOverrideCosmeticMode      OverrideCosmeticMode;                              // 0x68(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_39FC[0x7];                                     // Fixing Size After Last Property 
	class UFortAthenaAIBotCharacterCustomization* CharacterCustomization;                            // 0x70(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UFortAthenaAIBotCosmeticLibraryData> CosmeticCustomizationLibrary;                      // 0x78(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EDBNOPlayStyle                    DBNOPlayStyle;                                     // 0x98(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_39FE[0x3];                                     // Fixing Size After Last Property 
	float                                        SkillLevel;                                        // 0x9C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_39FF[0x8];                                     // Fixing Size After Last Property 
	TArray<TSubclassOf<class UFortAthenaAIBotSkillSet>> SkillSetOverrideClasses;                           // 0xA8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	class UFortAthenaAIBotInventoryItems*        StartupInventory;                                  // 0xB8(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortBotNameSettings*                  BotNameSettings;                                   // 0xC0(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                BotAnalyticsSuffix;                                // 0xC8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        SpawnTracePadding;                                 // 0xD8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3A0A[0x4];                                     // Fixing Size After Last Property 
	struct FConstructionBuildingInfo             OverrideConstructionBuildingInfo[0x6];             // 0xE0(0x90)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortAthenaAILODSettingsContainer> AILODSettingsContainer;                            // 0x170(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAthenaAILODSettingsContainer*     AILODSettingsContainerLoaded;                      // 0x178(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaAIBotCustomizationData* GetDefaultObj();

	void SetCharacterCustomizationFromPlayerPawn(class UFortPlayerPawn* InFortPawn);
};

// 0x20 (0x50 - 0x30)
// Class FortniteAI.FortAthenaAIBotDBNODigestedSkillSet
class UFortAthenaAIBotDBNODigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet
{
public:
	float                                        MaxDBNOCrawlingResponseTime;                       // 0x30(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxDBNOCrawlingResponseTimeDeviation;              // 0x34(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AllyEvaluationTime;                                // 0x38(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AllyEvaluationTimeDeviation;                       // 0x3C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AllyEvaluationMaxDistance;                         // 0x40(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        OddsToLookForCover;                                // 0x44(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CoverEvaluationTime;                               // 0x48(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CoverEvaluationTimeDeviation;                      // 0x4C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortAthenaAIBotDBNODigestedSkillSet* GetDefaultObj();

};

// 0x140 (0x170 - 0x30)
// Class FortniteAI.FortAthenaAIBotDBNOSkillSet
class UFortAthenaAIBotDBNOSkillSet : public UFortAthenaAIBotSkillSet
{
public:
	struct FScalableFloat                        MaxDBNOCrawlingResponseTime;                       // 0x30(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxDBNOCrawlingResponseTimeDeviation;              // 0x58(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        AllyEvaluationTime;                                // 0x80(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        AllyEvaluationTimeDeviation;                       // 0xA8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        AllyEvaluationMaxDistance;                         // 0xD0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        OddsToLookForCover;                                // 0xF8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        CoverEvaluationTime;                               // 0x120(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        CoverEvaluationTimeDeviation;                      // 0x148(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortAthenaAIBotDBNOSkillSet* GetDefaultObj();

};

// 0x20 (0x50 - 0x30)
// Class FortniteAI.FortAthenaAIBotEmoteDigestedSkillSet
class UFortAthenaAIBotEmoteDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet
{
public:
	float                                        InfiniteEmoteMinDuration;                          // 0x30(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        InfiniteEmoteMaxDuration;                          // 0x34(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        EmotesMaxCount;                                    // 0x38(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DanceOnKillMaxDistanceFromKillSqr;                 // 0x3C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DanceOnKillMaxTimeFromKill;                        // 0x40(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DanceOnKillMinTimeFromLastTry;                     // 0x44(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DanceOnKillChanceToDanceOnBots;                    // 0x48(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DanceOnKillChanceToDanceOnPlayers;                 // 0x4C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortAthenaAIBotEmoteDigestedSkillSet* GetDefaultObj();

};

// 0x118 (0x148 - 0x30)
// Class FortniteAI.FortAthenaAIBotEmoteSkillSet
class UFortAthenaAIBotEmoteSkillSet : public UFortAthenaAIBotSkillSet
{
public:
	struct FScalableFloat                        InfiniteEmoteMinDuration;                          // 0x30(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        InfiniteEmoteMaxDuration;                          // 0x58(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        DanceOnKillMaxDistanceFromKill;                    // 0x80(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        DanceOnKillMaxTimeFromKill;                        // 0xA8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        DanceOnKillMinTimeFromLastTry;                     // 0xD0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        DanceOnKillChanceToDanceOnBots;                    // 0xF8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        DanceOnKillChanceToDanceOnPlayers;                 // 0x120(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortAthenaAIBotEmoteSkillSet* GetDefaultObj();

};

// 0x78 (0xA0 - 0x28)
// Class FortniteAI.FortAthenaAIEvaluator
class UFortAthenaAIEvaluator : public UObject
{
public:
	class UBehaviorTreeComponent*                CachedOwnerComp;                                   // 0x28(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAIController*                         CachedAIController;                                // 0x30(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UNavigationQueryFilter>    OverrideNavigationFilterClass;                     // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3A1B[0x18];                                    // Fixing Size After Last Property 
	class FName                                  ExecutionStatusName;                               // 0x58(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3A1C[0xC];                                     // Fixing Size After Last Property 
	TScriptInterface<class UFortAthenaAILODSettings> CachedLODSettingsInterface;                        // 0x68(0x10)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBlackboardKeyAccessValidator*         KeyAccessValidator;                                // 0x78(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3A1D[0x20];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaAIEvaluator* GetDefaultObj();

};

// 0x8 (0xA8 - 0xA0)
// Class FortniteAI.FortAthenaAIBotEvaluator
class UFortAthenaAIBotEvaluator : public UFortAthenaAIEvaluator
{
public:
	class UFortAthenaAIBotController*            CachedBotController;                               // 0xA0(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortAthenaAIBotEvaluator* GetDefaultObj();

};

// 0x100 (0x1A8 - 0xA8)
// Class FortniteAI.FortAthenaAIBotEvaluator_Movement
class UFortAthenaAIBotEvaluator_Movement : public UFortAthenaAIBotEvaluator
{
public:
	class FName                                  MovementStateKeyName;                              // 0xA8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  MovementDestinationKeyName;                        // 0xAC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  LastPartialPathTimeKeyName;                        // 0xB0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  LastPartialPathCountKeyName;                       // 0xB4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  LastBlockedPathCountKeyName;                       // 0xB8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  UnstuckInWaterExecutionStatusName;                 // 0xBC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  UnstuckLastBlockedByActorKeyName;                  // 0xC0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  UnstuckExecutionStatusKeyName;                     // 0xC4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  TeleportExecutionStatusKeyName;                    // 0xC8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  UndermineExecutionStatusKeyName;                   // 0xCC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  UndermineTargetKeyName;                            // 0xD0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  UndermineLocationImpactName;                       // 0xD4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  UnstuckSteerExecutionStatusKeyName;                // 0xD8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  UnstuckSteerDirectionKeyName;                      // 0xDC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAthenaAIServicePlayerBots*            CachedAIServicePlayerBots;                         // 0xE0(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3A3C[0x10];                                    // Fixing Size After Last Property 
	class UFortAthenaAIBotMovementDigestedSkillSet* CachedMovementDigestedSkillSet;                    // 0xF8(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortAthenaAIBotUnstuckDigestedSkillSet* UnstuckSkillSet;                                   // 0x100(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3A40[0xA0];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaAIBotEvaluator_Movement* GetDefaultObj();

	void OnCurrentUnstuckSteeringAttemptFinished(enum class EBotUnstuckSteeringReason UnstuckSteeringReason);
	void EvaluateIsolatedIslandSteering();
};

// 0x1C0 (0x368 - 0x1A8)
// Class FortniteAI.FortAthenaAIBotEvaluator_Loot
class UFortAthenaAIBotEvaluator_Loot : public UFortAthenaAIBotEvaluator_Movement
{
public:
	class UAthenaAIServiceLoot*                  CachedAIServiceLoot;                               // 0x1A8(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortAthenaAIBotLootingDigestedSkillSet* LootingSkillSet;                                   // 0x1B0(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3A49[0x10];                                    // Fixing Size After Last Property 
	class FName                                  LootDestinationKeyName;                            // 0x1C8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  LootObjectKeyName;                                 // 0x1CC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  LootTypeKeyName;                                   // 0x1D0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  POINavigationExecutionStatusKeyName;               // 0x1D4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3A4B[0x8];                                     // Fixing Size After Last Property 
	enum class EExecutionStatus                  POINavigationExecutionStatus;                      // 0x1E0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3A4C[0x177];                                   // Fixing Size After Last Property 
	uint32                                       CurrentLootOctreeElementId;                        // 0x358(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3A4D[0x4];                                     // Fixing Size After Last Property 
	class UFortTeamInfoAthena*                   CachedTeamInfo;                                    // 0x360(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaAIBotEvaluator_Loot* GetDefaultObj();

};

// 0x118 (0x148 - 0x30)
// Class FortniteAI.FortAthenaAIBotEvasiveManeuversDigestedSkillSet
class UFortAthenaAIBotEvasiveManeuversDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet
{
public:
	uint8                                        Pad_3A51[0x8];                                     // Fixing Size After Last Property 
	struct FDigestedEvasiveManeuverSkillSettings DefaultEvasiveManeuverSkillSettings;               // 0x38(0x58)(Transient, Protected, NativeAccessSpecifierProtected)
	TArray<struct FDigestedEvasiveManeuverSkillSettingsSpecialization> EvasiveManeuverSkillSettingsSpecializations;       // 0x90(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	float                                        JetpackStrafeDelay;                                // 0xA0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        JetpackStrafeRandomDeviationDelay;                 // 0xA4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        JetpackStrafeOverlayWeight;                        // 0xA8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        JetpackStrafeDistanceMax;                          // 0xAC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        JetpackStrafeDistanceMin;                          // 0xB0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        JetpackStrafeActivationTime;                       // 0xB4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        JetpackStrafeActivationTimeRandomDeviation;        // 0xB8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        JetpackStrafeTime;                                 // 0xBC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        JetpackStrafeTimeRandomDeviation;                  // 0xC0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DodgeMaxDistanceSquared;                           // 0xC4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CrouchMaxDistanceSquared;                          // 0xC8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        JumpMaxDistanceSquared;                            // 0xCC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        JetpackStrafeMaxDistanceSquared;                   // 0xD0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AvoidProjectilesReactionDistanceSqr;               // 0xD4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AvoidProjectilesReactionTimeMin;                   // 0xD8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AvoidProjectilesReactionTimeMax;                   // 0xDC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AvoidProjectilesEvasiveDistanceMin;                // 0xE0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AvoidProjectilesEvasiveDistanceMax;                // 0xE4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AvoidPhysicsObjectsReactionDistanceMin;            // 0xE8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AvoidPhysicsObjectsReactionDistanceMax;            // 0xEC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AvoidPhysicsObjectsSpeedMin;                       // 0xF0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AvoidPhysicsObjectsSpeedMax;                       // 0xF4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTagQuery                     CanUseEvasiveManeuversTagQuery;                    // 0xF8(0x48)(Transient, Protected, NativeAccessSpecifierProtected)
	bool                                         bCanCrouchInUrgentMovement;                        // 0x140(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCanDodgeInUrgentMovement;                         // 0x141(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCanJumpInUrgentMovement;                          // 0x142(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3A65[0x5];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaAIBotEvasiveManeuversDigestedSkillSet* GetDefaultObj();

};

// 0x698 (0x6C8 - 0x30)
// Class FortniteAI.FortAthenaAIBotEvasiveManeuversSkillSet
class UFortAthenaAIBotEvasiveManeuversSkillSet : public UFortAthenaAIBotSkillSet
{
public:
	struct FEvasiveManeuverSkillSettings         DefaultEvasiveManeuverSkillSettings;               // 0x30(0x258)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FEvasiveManeuverSkillSettingsSpecialization> EvasiveManeuverSkillSettingsSpecializations;       // 0x288(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        JetpackStrafeOverlayWeight;                        // 0x298(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        JetpackStrafeDelay;                                // 0x2C0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        JetpackStrafeRandomDeviationDelay;                 // 0x2E8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        JetpackStrafeDistanceMax;                          // 0x310(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        JetpackStrafeDistanceMin;                          // 0x338(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        JetpackStrafeActivationTime;                       // 0x360(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        JetpackStrafeActivationTimeRandomDeviation;        // 0x388(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        JetpackStrafeTime;                                 // 0x3B0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        JetpackStrafeTimeRandomDeviation;                  // 0x3D8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        DodgeMaxDistance;                                  // 0x400(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        CanDodgeInUrgentMovement;                          // 0x428(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        CrouchMaxDistance;                                 // 0x450(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        CanCrouchInUrgentMovement;                         // 0x478(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        JumpMaxDistance;                                   // 0x4A0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        CanJumpInUrgentMovement;                           // 0x4C8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        JetpackStrafeMaxDistance;                          // 0x4F0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        AvoidProjectilesReactionDistanceMax;               // 0x518(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        AvoidProjectilesReactionTimeMin;                   // 0x540(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        AvoidProjectilesReactionTimeMax;                   // 0x568(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        AvoidProjectilesEvasiveDistanceMin;                // 0x590(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        AvoidProjectilesEvasiveDistanceMax;                // 0x5B8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        AvoidPhysicsObjectsReactionDistanceMin;            // 0x5E0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        AvoidPhysicsObjectsReactionDistanceMax;            // 0x608(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        AvoidPhysicsObjectsSpeedMin;                       // 0x630(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        AvoidPhysicsObjectsSpeedMax;                       // 0x658(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagQuery                     CanUseEvasiveManeuversTagQuery;                    // 0x680(0x48)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortAthenaAIBotEvasiveManeuversSkillSet* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class FortniteAI.FortAthenaAIBotHarvestDigestedSkillSet
class UFortAthenaAIBotHarvestDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet
{
public:
	float                                        DelayBetweenHarvest;                               // 0x30(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DeviationTimeBetweenHarvest;                       // 0x34(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        HarvestingMaxDistanceSquared;                      // 0x38(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        WeakSpotHitProbability;                            // 0x3C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortAthenaAIBotHarvestDigestedSkillSet* GetDefaultObj();

};

// 0xA0 (0xD0 - 0x30)
// Class FortniteAI.FortAthenaAIBotHarvestSkillSet
class UFortAthenaAIBotHarvestSkillSet : public UFortAthenaAIBotSkillSet
{
public:
	struct FScalableFloat                        DelayBetweenHarvest;                               // 0x30(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        DeviationTimeBetweenHarvest;                       // 0x58(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        HarvestingMaxDistance;                             // 0x80(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        WeakSpotHitProbability;                            // 0xA8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortAthenaAIBotHarvestSkillSet* GetDefaultObj();

};

// 0x40 (0x70 - 0x30)
// Class FortniteAI.FortAthenaAIBotHealingDigestedSkillSet
class UFortAthenaAIBotHealingDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet
{
public:
	struct FFortBotDigestedHealingItemsList      HealthItemsList;                                   // 0x30(0x10)(Transient, Protected, NativeAccessSpecifierProtected)
	TArray<struct FFortBotDigestedHealingItemsSpec> HealthItemsSpecializations;                        // 0x40(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	struct FFortBotDigestedHealingItemsList      ShieldItemsList;                                   // 0x50(0x10)(Transient, Protected, NativeAccessSpecifierProtected)
	TArray<struct FFortBotDigestedHealingItemsSpec> ShieldItemsSpecializations;                        // 0x60(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortAthenaAIBotHealingDigestedSkillSet* GetDefaultObj();

};

// 0x40 (0x70 - 0x30)
// Class FortniteAI.FortAthenaAIBotHealingSkillSet
class UFortAthenaAIBotHealingSkillSet : public UFortAthenaAIBotSkillSet
{
public:
	struct FFortBotHealingItemsList              HealthItemsList;                                   // 0x30(0x10)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FFortBotHealingItemsSpec>      HealthItemsSpecializations;                        // 0x40(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FFortBotHealingItemsList              ShieldItemsList;                                   // 0x50(0x10)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FFortBotHealingItemsSpec>      ShieldItemsSpecializations;                        // 0x60(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortAthenaAIBotHealingSkillSet* GetDefaultObj();

};

// 0x170 (0x1A0 - 0x30)
// Class FortniteAI.FortAthenaAIBotInventoryDigestedSkillSet
class UFortAthenaAIBotInventoryDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet
{
public:
	float                                        DefaultWeaponSelectionDistance;                    // 0x30(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        DefaultWeaponSelectionDistanceDeviation;           // 0x34(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bHasInfiniteResources;                             // 0x38(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bHasInfiniteAmmoForAllWeapons;                     // 0x39(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3AA8[0x6];                                     // Fixing Size After Last Property 
	struct FGameplayTagContainer                 InventorySlotPreference[0x6];                      // 0x40(0xC0)(Transient, NativeAccessSpecifierPrivate)
	TArray<struct FDigestedBotEquipWeaponInfo>   EquipWeaponInfo;                                   // 0x100(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	bool                                         bShouldPrioritizeRangedWeaponWithoutTarget;        // 0x110(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3AB0[0x7];                                     // Fixing Size After Last Property 
	struct FGameplayTagContainer                 InfiniteAmmoCheats;                                // 0x118(0x20)(Transient, NativeAccessSpecifierPrivate)
	TArray<struct FItemAndCount>                 MaterialItems;                                     // 0x138(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	float                                        GiveMaterialsToBotFrequency;                       // 0x148(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3AB1[0x4];                                     // Fixing Size After Last Property 
	struct FGameplayTagContainer                 CheckLoadedAmmoForInfiniteAmmoCheats;              // 0x150(0x20)(Transient, NativeAccessSpecifierPrivate)
	float                                        NoWeaponGiveWeaponAfterTime;                       // 0x170(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        NoWeaponNoPlayerConeDistance;                      // 0x174(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        NoWeaponNoPlayerConeFOV;                           // 0x178(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  NoWeaponLootTierGroup;                             // 0x17C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                 IgnoredAsWeaponTags;                               // 0x180(0x20)(Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaAIBotInventoryDigestedSkillSet* GetDefaultObj();

};

// 0x280 (0x2B0 - 0x30)
// Class FortniteAI.FortAthenaAIBotInventorySkillSet
class UFortAthenaAIBotInventorySkillSet : public UFortAthenaAIBotSkillSet
{
public:
	struct FScalableFloat                        DefaultWeaponSelectionDistance;                    // 0x30(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        DefaultWeaponSelectionDistanceDeviation;           // 0x58(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        HasInfiniteResources;                              // 0x80(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 InventorySlotPreference[0x6];                      // 0xA8(0xC0)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FBotEquipWeaponInfo>           EquipWeaponInfo;                                   // 0x168(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ShouldPrioritizeRangedWeaponWithoutTarget;         // 0x178(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        HasInfiniteAmmoForAllWeapons;                      // 0x1A0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FWeaponAmmoCheat>              AmmoCheats;                                        // 0x1C8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FItemAndCount>                 MaterialItems;                                     // 0x1D8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        GiveMaterialsToBotFrequency;                       // 0x1E8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        NoWeaponGiveWeaponAfterTime;                       // 0x210(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        NoWeaponNoPlayerConeDistance;                      // 0x238(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        NoWeaponNoPlayerConeFOV;                           // 0x260(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class FName                                  NoWeaponLootTierGroup;                             // 0x288(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3ABE[0x4];                                     // Fixing Size After Last Property 
	struct FGameplayTagContainer                 IgnoredAsWeaponTags;                               // 0x290(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortAthenaAIBotInventorySkillSet* GetDefaultObj();

};

// 0x80 (0xB0 - 0x30)
// Class FortniteAI.FortAthenaAIBotLootingDigestedSkillSet
class UFortAthenaAIBotLootingDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet
{
public:
	float                                        ThresholdDistanceToSwitchLootItem;                 // 0x30(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ThresholdDistanceSquaredToRescanForBetterLoot;     // 0x34(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ThresholdTimeToRescanForBetterLoot;                // 0x38(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3AC2[0x4];                                     // Fixing Size After Last Property 
	struct FVector                               OctreeBoxHalfExtent;                               // 0x40(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LootStateEvaluationRadiusSq;                       // 0x58(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MinLootDurationPerPOI;                             // 0x5C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxLootDurationPerPOI;                             // 0x60(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LootPickupInteractionTime;                         // 0x64(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LootPickupInteractionDeviationTime;                // 0x68(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Distance2DScore;                                   // 0x6C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        HeightScore;                                       // 0x70(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ThreatMaxScore;                                    // 0x74(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ThreatProximityScoreTable;                         // 0x78(0x28)(Transient, Protected, NativeAccessSpecifierProtected)
	float                                        PrioritizeWeaponScore;                             // 0xA0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PoiSelectionDistanceScore;                         // 0xA4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PoiSelectionBotPresenceScore;                      // 0xA8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3ADA[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaAIBotLootingDigestedSkillSet* GetDefaultObj();

};

// 0x270 (0x2A0 - 0x30)
// Class FortniteAI.FortAthenaAIBotLootingSkillSet
class UFortAthenaAIBotLootingSkillSet : public UFortAthenaAIBotSkillSet
{
public:
	struct FScalableFloat                        ThresholdDistanceToSwitchLootItem;                 // 0x30(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ThresholdDistanceToRescanForBetterLoot;            // 0x58(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ThresholdTimeToRescanForBetterLoot;                // 0x80(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FVector                               OctreeBoxExtent;                                   // 0xA8(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                        LootStateEvaluationRadius;                         // 0xC0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MinLootDurationPerPOI;                             // 0xE8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxLootDurationPerPOI;                             // 0x110(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        LootPickupInteractionTime;                         // 0x138(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        LootPickupInteractionDeviationTime;                // 0x160(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        Distance2DScore;                                   // 0x188(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        HeightScore;                                       // 0x1B0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ThreatMaxScore;                                    // 0x1D8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ThreatProximityScoreTable;                         // 0x200(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        PrioritizeWeaponScore;                             // 0x228(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        PoiSelectionDistanceScore;                         // 0x250(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        PoiSelectionBotPresenceScore;                      // 0x278(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortAthenaAIBotLootingSkillSet* GetDefaultObj();

};

// 0x288 (0x2B8 - 0x30)
// Class FortniteAI.FortAthenaAIBotMovementDigestedSkillSet
class UFortAthenaAIBotMovementDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet
{
public:
	float                                        SlowDownDistanceSquared;                           // 0x30(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TraversalSpeedEstimation;                          // 0x34(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TraversalSpeedEstimationWithThreat;                // 0x38(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bOffPathDetectionEnabled;                          // 0x3C(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3AEF[0x3];                                     // Fixing Size After Last Property 
	float                                        OffPathDistanceThresholdSquared;                   // 0x40(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        GliderDeployMinAngle;                              // 0x44(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        GliderDeployMaxAngle;                              // 0x48(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        GliderNoiseMinDistance;                            // 0x4C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        GliderNoiseMaxDistance;                            // 0x50(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        GliderNoiseMinDelay;                               // 0x54(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        GliderNoiseMaxDelay;                               // 0x58(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        GliderNoiseDistanceTreshold;                       // 0x5C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        GliderStopRotationDistance;                        // 0x60(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        GliderLandingDistance;                             // 0x64(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        GliderRotationLerpDuration;                        // 0x68(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         GliderBehaviorEnableFlag;                          // 0x6C(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3B08[0x3];                                     // Fixing Size After Last Property 
	float                                        GliderBehaviorMinInterval;                         // 0x70(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        GliderBehaviorMaxInterval;                         // 0x74(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        GliderBehaviorMinRadius;                           // 0x78(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        GliderBehaviorMaxRadius;                           // 0x7C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        GliderBehaviorSurveyProbability;                   // 0x80(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         GliderMovementTypeEnableFlag;                      // 0x84(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3B0E[0x3];                                     // Fixing Size After Last Property 
	float                                        GliderLinearProbability;                           // 0x88(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        GliderSpiralMinRadius;                             // 0x8C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        GliderSpiralMaxRadius;                             // 0x90(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        GliderSpiralMinAngle;                              // 0x94(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        GliderSpiralMaxAngle;                              // 0x98(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        GliderSpiralMinInterval;                           // 0x9C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        GliderSpiralMaxInterval;                           // 0xA0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        GliderSpiralProbability;                           // 0xA4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        GliderSerpentineMinAngle;                          // 0xA8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        GliderSerpentineMaxAngle;                          // 0xAC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        GliderSerpentineMinRadius;                         // 0xB0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        GliderSerpentineMaxRadius;                         // 0xB4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        GliderSerpentineMinInterval;                       // 0xB8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        GliderSerpentineMaxInterval;                       // 0xBC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        GliderSerpentineMinPeriod;                         // 0xC0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        GliderSerpentineMaxPeriod;                         // 0xC4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        GliderSerpentineProbability;                       // 0xC8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        JumpOffMinAngle;                                   // 0xCC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        JumpOffMaxAngle;                                   // 0xD0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MinPatrolDistance;                                 // 0xD4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxPatrolDistance;                                 // 0xD8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxPatrolDistanceRandomDeviation;                  // 0xDC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        WobbleProbability;                                 // 0xE0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxDelayBetweenWobblingMovement;                   // 0xE4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxDelayBetweenWobblingMovementRandomDeviation;    // 0xE8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAllowSwimWobble;                                  // 0xEC(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3B20[0x3];                                     // Fixing Size After Last Property 
	float                                        MaxWobblingDuration;                               // 0xF0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxWobblingDurationRandomDeviation;                // 0xF4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxWobblingIntensity;                              // 0xF8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        WobblingIntensityDeviation;                        // 0xFC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxWobblingFrequency;                              // 0x100(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        WobblingFrequencyDeviation;                        // 0x104(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        WobblingStickToPathCorridorStrength;               // 0x108(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxAfterLaunchedPauseTime;                         // 0x10C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxAfterLaunchedFromVortexPauseTime;               // 0x110(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AfterLaunchedPauseTimeDeviation;                   // 0x114(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSteerMovementWhenLaunched;                        // 0x118(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3B28[0x3];                                     // Fixing Size After Last Property 
	float                                        SteerMovementWhenLaunchedDirectionUpdateTime;      // 0x11C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxReactionTimeToDangerZone;                       // 0x120(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxReactionTimeToDangerZoneDeviation;              // 0x124(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bLimitBlockingObstacleAngle;                       // 0x128(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnableSwimSprintJump;                             // 0x129(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3B2B[0x2];                                     // Fixing Size After Last Property 
	float                                        SwimSprintJumpDelay;                               // 0x12C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SwimSprintJumpDelayDeviation;                      // 0x130(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SwimUnblockJumpHeightThreshold;                    // 0x134(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSwimSprintJumpNav2D;                              // 0x138(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3B30[0x3];                                     // Fixing Size After Last Property 
	float                                        TacticalSprintEvaluationMinTime;                   // 0x13C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TacticalSprintEvaluationMaxTime;                   // 0x140(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TacticalSprintMinTriggerChance;                    // 0x144(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TacticalSprintMaxTriggerChance;                    // 0x148(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TacticalSprintMinTriggerChanceInUrgentMovement;    // 0x14C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TacticalSprintMaxTriggerChanceInUrgentMovement;    // 0x150(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TacticalSprintMaxSlopeAngle;                       // 0x154(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TacticalSprintMinPathTargetDistance;               // 0x158(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TacticalSprintMaxPathAlignmentAngle;               // 0x15C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TacticalSprintMaxPathConeAngle;                    // 0x160(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TacticalSprintPathConeRearOffset;                  // 0x164(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         TacticalSprintUsageEnabled;                        // 0x168(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3B33[0x3];                                     // Fixing Size After Last Property 
	float                                        TacticalSprintJumpTriggerChance;                   // 0x16C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TacticalSprintJumpDelay;                           // 0x170(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TacticalSprintJumpDelayDeviation;                  // 0x174(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TacticalSprintJumpDelayInitialRatio;               // 0x178(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3B3B[0x4];                                     // Fixing Size After Last Property 
	struct FVector                               SlidingBoxExtent;                                  // 0x180(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SlidingEnabled[0x4];                               // 0x198(0x10)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SlidingEvaluationMinTime;                          // 0x1A8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SlidingEvaluationMaxTime;                          // 0x1AC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SlidingTriggerChanceStyleMalus;                    // 0x1B0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SlidingTriggerChanceStyleMalusRandomDeviation;     // 0x1B4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SlidingTriggerChanceFlat;                          // 0x1B8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SlidingTriggerChanceLittleSlope;                   // 0x1BC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SlidingTriggerChanceSteepSlope;                    // 0x1C0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SlidingDuringUrgentMovementTriggerChanceFlat;      // 0x1C4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SlidingDuringUrgentMovementTriggerChanceLittleSlope; // 0x1C8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SlidingDuringUrgentMovementTriggerChanceSteepSlope; // 0x1CC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MinSlidingDuration;                                // 0x1D0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SlidingCooldownMinTime;                            // 0x1D4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SlidingCooldownMaxTime;                            // 0x1D8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SlidingStopMinDelay;                               // 0x1DC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SlidingStopMaxDelay;                               // 0x1E0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SlidingMaxPathConeAngle;                           // 0x1E4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SlidingMinPathTargetDistance;                      // 0x1E8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SlidingAllowResumeFocusOnTargetTriggerChance;      // 0x1EC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MoveToRangeAttackMinOffset;                        // 0x1F0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MoveToRangeAttackMaxOffset;                        // 0x1F4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LKPMinOffset;                                      // 0x1F8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LKPMaxOffset;                                      // 0x1FC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bInvestigateAllowSearch;                           // 0x200(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3B4E[0x3];                                     // Fixing Size After Last Property 
	float                                        InvestigateWaitMinTime;                            // 0x204(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        InvestigateWaitMaxTime;                            // 0x208(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        InvestigateSearchMinDistance;                      // 0x20C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        InvestigateSearchMaxDistance;                      // 0x210(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SandTunnelJumpMinTime;                             // 0x214(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SandTunnelJumpMaxTime;                             // 0x218(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SandTunnelBurrowedAndHiddenChance;                 // 0x21C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SandTunnelBurrowedAndHiddenMinTime;                // 0x220(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SandTunnelBurrowedAndHiddenMaxTime;                // 0x224(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               ZiplineOctreeBoxExtent;                            // 0x228(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ThresholdDistanceToRescanForZiplines;              // 0x240(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CooldownBetweenZiplineUsages;                      // 0x244(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DistanceToAddToZiplineStartPosition;               // 0x248(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RadiusFromZiplineEnterPointToLookAtExit;           // 0x24C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         ZiplineUsageEnabled;                               // 0x250(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3B58[0x7];                                     // Fixing Size After Last Property 
	struct FDigestedBotKnockbackSettings         DefaultKnockbackSettings;                          // 0x258(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
	TArray<struct FDigestedBotKnockbackSettings> KnockbackSettingsSpecializations;                  // 0x2A8(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortAthenaAIBotMovementDigestedSkillSet* GetDefaultObj();

};

// 0x13C8 (0x13F8 - 0x30)
// Class FortniteAI.FortAthenaAIBotMovementSkillSet
class UFortAthenaAIBotMovementSkillSet : public UFortAthenaAIBotSkillSet
{
public:
	struct FScalableFloat                        SlowDownDistance;                                  // 0x30(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        TraversalSpeedEstimation;                          // 0x58(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        TraversalSpeedEstimationWithThreat;                // 0x80(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        OffPathDetectionEnabled;                           // 0xA8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        OffPathDistanceThreshold;                          // 0xD0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        GliderDeployMinAngle;                              // 0xF8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        GliderDeployMaxAngle;                              // 0x120(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        GliderNoiseMinDistance;                            // 0x148(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        GliderNoiseMaxDistance;                            // 0x170(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        GliderNoiseMinDelay;                               // 0x198(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        GliderNoiseMaxDelay;                               // 0x1C0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        GliderNoiseDistanceTreshold;                       // 0x1E8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        GliderStopRotationDistance;                        // 0x210(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        GliderLandingDistance;                             // 0x238(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        GliderRotationLerpDuration;                        // 0x260(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        GliderBehaviorEnableFlag;                          // 0x288(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        GliderBehaviorMinInterval;                         // 0x2B0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        GliderBehaviorMaxInterval;                         // 0x2D8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        GliderBehaviorMinRadius;                           // 0x300(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        GliderBehaviorMaxRadius;                           // 0x328(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        GliderBehaviorSurveyProbability;                   // 0x350(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        GliderMovementTypeEnableFlag;                      // 0x378(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        GliderLinearProbability;                           // 0x3A0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        GliderSpiralMinRadius;                             // 0x3C8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        GliderSpiralMaxRadius;                             // 0x3F0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        GliderSpiralMinAngle;                              // 0x418(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        GliderSpiralMaxAngle;                              // 0x440(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        GliderSpiralMinInterval;                           // 0x468(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        GliderSpiralMaxInterval;                           // 0x490(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        GliderSpiralProbability;                           // 0x4B8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        GliderSerpentineMinAngle;                          // 0x4E0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        GliderSerpentineMaxAngle;                          // 0x508(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        GliderSerpentineMinRadius;                         // 0x530(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        GliderSerpentineMaxRadius;                         // 0x558(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        GliderSerpentineMinInterval;                       // 0x580(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        GliderSerpentineMaxInterval;                       // 0x5A8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        GliderSerpentineMinPeriod;                         // 0x5D0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        GliderSerpentineMaxPeriod;                         // 0x5F8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        GliderSerpentineProbability;                       // 0x620(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        JumpOffMinAngle;                                   // 0x648(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        JumpOffMaxAngle;                                   // 0x670(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MinPatrolDistance;                                 // 0x698(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxPatrolDistance;                                 // 0x6C0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxPatrolDistanceRandomDeviation;                  // 0x6E8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MoveToRangeAttackMinOffset;                        // 0x710(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MoveToRangeAttackMaxOffset;                        // 0x738(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        LKPMinOffset;                                      // 0x760(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        LKPMaxOffset;                                      // 0x788(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        bInvestigateAllowSearch;                           // 0x7B0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        InvestigateWaitMinTime;                            // 0x7D8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        InvestigateWaitMaxTime;                            // 0x800(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        InvestigateSearchMinDistance;                      // 0x828(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        InvestigateSearchMaxDistance;                      // 0x850(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SandTunnelJumpMinTime;                             // 0x878(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SandTunnelJumpMaxTime;                             // 0x8A0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SandTunnelBurrowedAndHiddenChance;                 // 0x8C8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SandTunnelBurrowedAndHiddenMinTime;                // 0x8F0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SandTunnelBurrowedAndHiddenMaxTime;                // 0x918(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        WobblingProbability;                               // 0x940(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxDelayBetweenWobblingMovement;                   // 0x968(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxDelayBetweenWobblingMovementRandomDeviation;    // 0x990(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxWobblingDuration;                               // 0x9B8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxWobblingDurationRandomDeviation;                // 0x9E0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxWobblingIntensity;                              // 0xA08(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        WobblingIntensityDeviation;                        // 0xA30(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxWobblingFrequency;                              // 0xA58(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        WobblingFrequencyDeviation;                        // 0xA80(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        WobblingStickToPathCorridorStrength;               // 0xAA8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        LimitBlockingObstacleAngle;                        // 0xAD0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxAfterLaunchedPauseTime;                         // 0xAF8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxAfterLaunchedFromVortexPauseTime;               // 0xB20(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        AfterLaunchedPauseTimeDeviation;                   // 0xB48(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SteerMovementWhenLaunched;                         // 0xB70(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SteerMovementWhenLaunchedDirectionUpdateTime;      // 0xB98(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxReactionTimeToDangerZone;                       // 0xBC0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxReactionTimeToDangerZoneDeviation;              // 0xBE8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        AllowSwimWobble;                                   // 0xC10(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        EnableSwimSprintJump;                              // 0xC38(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SwimSprintJumpDelay;                               // 0xC60(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SwimSprintJumpDelayDeviation;                      // 0xC88(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SwimUnblockJumpHeightThreshold;                    // 0xCB0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SwimSprintJumpNav2D;                               // 0xCD8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        TacticalSprintEvaluationMinTime;                   // 0xD00(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        TacticalSprintEvaluationMaxTime;                   // 0xD28(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        TacticalSprintMinTriggerChance;                    // 0xD50(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        TacticalSprintMaxTriggerChance;                    // 0xD78(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        TacticalSprintMinTriggerChanceInUrgentMovement;    // 0xDA0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        TacticalSprintMaxTriggerChanceInUrgentMovement;    // 0xDC8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        TacticalSprintMaxSlopeAngle;                       // 0xDF0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        TacticalSprintMinPathTargetDistance;               // 0xE18(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        TacticalSprintMaxPathAlignmentAngle;               // 0xE40(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        TacticalSprintMaxPathConeAngle;                    // 0xE68(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        TacticalSprintPathConeRearOffset;                  // 0xE90(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        TacticalSprintUsageEnabled;                        // 0xEB8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        TacticalSprintJumpTriggerChance;                   // 0xEE0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        TacticalSprintJumpDelay;                           // 0xF08(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        TacticalSprintJumpDelayDeviation;                  // 0xF30(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        TacticalSprintJumpDelayInitialRatio;               // 0xF58(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FVector                               SlidingBoxExtent;                                  // 0xF80(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SlidingEnabled[0x4];                               // 0xF98(0xA0)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SlidingEvaluationMinTime;                          // 0x1038(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SlidingEvaluationMaxTime;                          // 0x1060(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SlidingTriggerChanceStyleMalus;                    // 0x1088(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SlidingTriggerChanceStyleMalusRandomDeviation;     // 0x10B0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SlidingTriggerChanceFlat;                          // 0x10D8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SlidingTriggerChanceLittleSlope;                   // 0x1100(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SlidingTriggerChanceSteepSlope;                    // 0x1128(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SlidingDuringUrgentMovementTriggerChanceFlat;      // 0x1150(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SlidingDuringUrgentMovementTriggerChanceLittleSlope; // 0x1178(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SlidingDuringUrgentMovementTriggerChanceSteepSlope; // 0x11A0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MinSlidingDuration;                                // 0x11C8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SlidingCooldownMinTime;                            // 0x11F0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SlidingCooldownMaxTime;                            // 0x1218(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SlidingStopMinDelay;                               // 0x1240(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SlidingStopMaxDelay;                               // 0x1268(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SlidingMaxPathConeAngle;                           // 0x1290(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SlidingMinPathTargetDistance;                      // 0x12B8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SlidingAllowResumeFocusOnTargetTriggerChance;      // 0x12E0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FVector                               ZiplineOctreeBoxExtent;                            // 0x1308(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ThresholdDistanceToRescanForZiplines;              // 0x1320(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        CooldownBetweenZiplineUsages;                      // 0x1348(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        DistanceToAddToZiplineStartPosition;               // 0x1370(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        RadiusFromZiplineEnterPointToLookAtExit;           // 0x1398(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ZiplineUsageEnabled;                               // 0x13C0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FBotKnockbackSettings>         KnockbackSettings;                                 // 0x13E8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortAthenaAIBotMovementSkillSet* GetDefaultObj();

};

// 0x238 (0x570 - 0x338)
// Class FortniteAI.FortAthenaAIBotPathFollowingComponent
class UFortAthenaAIBotPathFollowingComponent : public UFortPathFollowingComponentBase
{
public:
	class UFortAthenaAIBotController*            BotController;                                     // 0x338(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBuildingActor*                        HitBuilding;                                       // 0x340(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAthenaAIBotUnstuckDigestedSkillSet* CachedUnstuckSkillSet;                             // 0x348(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAthenaAIBotMovementDigestedSkillSet* CachedMovementSkillSet;                            // 0x350(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAthenaAIBotVehicleDigestedSkillSet* CachedVehicleSkillSet;                             // 0x358(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3BBE[0x210];                                   // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaAIBotPathFollowingComponent* GetDefaultObj();

	void HandlePawnTeleported(class UFortPawn* TeleportedPawn);
};

// 0x320 (0x350 - 0x30)
// Class FortniteAI.FortAthenaAIBotPerceptionDigestedSkillSet
class UFortAthenaAIBotPerceptionDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet
{
public:
	float                                        SightReactionTime;                                 // 0x30(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SightRandomDeviation;                              // 0x34(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3BC1[0x28];                                    // Fixing Size After Last Property 
	TArray<struct FDigestedSightReactionSpecialization> SightReactionSpecializations;                      // 0x60(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	float                                        LoseSightTime;                                     // 0x70(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LoseSightRandomDeviation;                          // 0x74(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SightSuspicionTime;                                // 0x78(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SightSuspicionRandomDeviation;                     // 0x7C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        EnemyMarkedReactionTime;                           // 0x80(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        EnemyMarkedReactionRandomDeviation;                // 0x84(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ChancesToHelpOnMarkedEnemy;                        // 0x88(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DamageReactionTime;                                // 0x8C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DamageRandomDeviation;                             // 0x90(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        HearingReactionTime;                               // 0x94(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        HearingRandomDeviation;                            // 0x98(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxHearingLocationError;                           // 0x9C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ObstacleDistanceOverrideTargetingSq;               // 0xA0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ObstacleForgetDistanceSq;                          // 0xA4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ObstacleMinimumBlockingTime;                       // 0xA8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3BC6[0x4];                                     // Fixing Size After Last Property 
	struct FFortAthenaAIBotDigestedTargetHeuristicSettings DefaultTargetHeuristicSettings;                    // 0xB0(0x190)(Transient, Protected, NativeAccessSpecifierProtected)
	TArray<struct FFortAthenaAIBotDigestedTargetHeuristicSettingsSpecialization> TargetHeuristicsSettingsSpecializations;           // 0x240(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	struct FSoundPerceptionDigestedSetting       SoundSettings[0x7];                                // 0x250(0x54)(Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                        AlertedAccumulatedLoudnessLimit;                   // 0x2A4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AlertedAccumulatedDamageLimit;                     // 0x2A8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LKPAccumulatedLoudnessLimit;                       // 0x2AC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        EnemyMarkingDelay;                                 // 0x2B0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        EnemyMarkingDelayRandomDeviation;                  // 0x2B4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AdditionalMarkedEnemyLKPForgetTime;                // 0x2B8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AdditionalMarkedEnemyLKPForgetDistance;            // 0x2BC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FAlertLevelInfo                       AlertLevelInfos[0x4];                              // 0x2C0(0x40)(Transient, Protected, NativeAccessSpecifierProtected)
	float                                        ProjectileThreatForgetTime;                        // 0x300(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FTrapPerceptionSettings               TrapPerceptionSettings;                            // 0x304(0x14)(Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bStealthMeterEnable;                               // 0x318(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3BC8[0x3];                                     // Fixing Size After Last Property 
	float                                        StealthMeterThreshold;                             // 0x31C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                        StealthMeterIncreaseSpeed;                         // 0x320(0x28)(Transient, Protected, NativeAccessSpecifierProtected)
	float                                        StealthMeterDecreaseSpeed;                         // 0x348(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bStealthMeterAllowSharedTarget;                    // 0x34C(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bStealthMeterForceLKPWhenDamagedAndThreatened;     // 0x34D(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3BC9[0x2];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaAIBotPerceptionDigestedSkillSet* GetDefaultObj();

};

// 0xCB0 (0xCE0 - 0x30)
// Class FortniteAI.FortAthenaAIBotPerceptionSkillSet
class UFortAthenaAIBotPerceptionSkillSet : public UFortAthenaAIBotSkillSet
{
public:
	struct FScalableFloat                        SightReactionTime;                                 // 0x30(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SightRandomDeviation;                              // 0x58(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SightRandomAddition;                               // 0x80(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FSightReactionSpecialization>  SightReactionSpecializations;                      // 0xA8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        LoseSightTime;                                     // 0xB8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        LoseSightRandomDeviation;                          // 0xE0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SightSuspicionTime;                                // 0x108(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SightSuspicionRandomDeviation;                     // 0x130(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        EnemyMarkedReactionTime;                           // 0x158(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        EnemyMarkedReactionRandomDeviation;                // 0x180(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ChancesToHelpOnMarkedEnemy;                        // 0x1A8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        DamageReactionTime;                                // 0x1D0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        DamageRandomDeviation;                             // 0x1F8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        HearingReactionTime;                               // 0x220(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        HearingRandomDeviation;                            // 0x248(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxHearingLocationError;                           // 0x270(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FFortAthenaAIBotTargetHeuristicSettings DefaultTargetHeuristicSettings;                    // 0x298(0x348)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FFortAthenaAIBotTargetHeuristicSettingsSpecialization> TargetHeuristicSettingsSpecializations;            // 0x5E0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ObstacleDistanceOverrideTargeting;                 // 0x5F0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ObstacleForgetDistance;                            // 0x618(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ObstacleMinimumBlockingTime;                       // 0x640(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FSoundPerceptionSetting               SoundSettings[0x7];                                // 0x668(0x348)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        AlertedAccumulatedLoudnessLimit;                   // 0x9B0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        AlertedAccumulatedDamageLimit;                     // 0x9D8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        LKPAccumulatedLoudnessLimit;                       // 0xA00(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        EnemyMarkingDelay;                                 // 0xA28(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        EnemyMarkingDelayRandomDeviation;                  // 0xA50(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        AdditionalMarkedEnemyLKPForgetTime;                // 0xA78(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        AdditionalMarkedEnemyLKPForgetDistance;            // 0xAA0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<class UFortAthenaAIBotAlertLevelConfig*> AlertLevelConfigs;                                 // 0xAC8(0x10)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ProjectileThreatForgetTime;                        // 0xAD8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        TrapDetectionDistanceMax;                          // 0xB00(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        TrapDetectionDistanceMaxDeviation;                 // 0xB28(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        TrapDetectionChanceWhenPerpendicular;              // 0xB50(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        TrapDetectionChanceWhenParallel;                   // 0xB78(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        TrapDetectionEvaluationAngleThreshold;             // 0xBA0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        TrapDetectionAutomaticIfWithinCreationTime;        // 0xBC8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        StealthMeterEnable;                                // 0xBF0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        StealthMeterThreshold;                             // 0xC18(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        StealthMeterIncreaseSpeed;                         // 0xC40(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        StealthMeterDecreaseSpeed;                         // 0xC68(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        StealthMeterAllowSharedTarget;                     // 0xC90(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        bStealthMeterForceLKPWhenDamagedAndThreatened;     // 0xCB8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortAthenaAIBotPerceptionSkillSet* GetDefaultObj();

};

// 0x68 (0x98 - 0x30)
// Class FortniteAI.FortAthenaAIBotPlayStyleDigestedSkillSet
class UFortAthenaAIBotPlayStyleDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet
{
public:
	struct FScalableFloat                        AggressiveTowardsThreatWeight;                     // 0x30(0x28)(Transient, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        DefensiveTowardsThreatWeight;                      // 0x58(0x28)(Transient, Protected, NativeAccessSpecifierProtected)
	enum class EDBNOPlayStyle                    DBNOPlayStyle;                                     // 0x80(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3BDD[0x7];                                     // Fixing Size After Last Property 
	TArray<struct FPlaystyleSwitchToAggressiveDataDigested> ChangeToAggressiveData;                            // 0x88(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortAthenaAIBotPlayStyleDigestedSkillSet* GetDefaultObj();

};

// 0xD8 (0x108 - 0x30)
// Class FortniteAI.FortAthenaAIBotPlayStyleSkillSet
class UFortAthenaAIBotPlayStyleSkillSet : public UFortAthenaAIBotSkillSet
{
public:
	struct FScalableFloat                        AggressiveTowardsThreatWeight;                     // 0x30(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        DefensiveTowardsThreatWeight;                      // 0x58(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        PassiveDBNOPlayStyle;                              // 0x80(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ThirstyDBNOPlayStyle;                              // 0xA8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        PassiveOnHumansDBNOPlayStyle;                      // 0xD0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FPlaystyleSwitchToAggressiveData> ChangeToAggressiveData;                            // 0xF8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortAthenaAIBotPlayStyleSkillSet* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class FortniteAI.FortAthenaAIBotPropagateAwarenessDigestedSkillSet
class UFortAthenaAIBotPropagateAwarenessDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet
{
public:
	float                                        PropagationMaxDistanceSQ;                          // 0x30(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CosineFOV;                                         // 0x34(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortAthenaAIBotPropagateAwarenessDigestedSkillSet* GetDefaultObj();

};

// 0x50 (0x80 - 0x30)
// Class FortniteAI.FortAthenaAIBotPropagateAwarenessSkillSet
class UFortAthenaAIBotPropagateAwarenessSkillSet : public UFortAthenaAIBotSkillSet
{
public:
	struct FScalableFloat                        PropagationMaxDistance;                            // 0x30(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        FOV;                                               // 0x58(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortAthenaAIBotPropagateAwarenessSkillSet* GetDefaultObj();

};

// 0x120 (0x150 - 0x30)
// Class FortniteAI.FortAthenaAIBotRangeAttackDigestedSkillSet
class UFortAthenaAIBotRangeAttackDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet
{
public:
	TWeakObjectPtr<class UFortWeapon>            CachedWeaponUsedToCalculateSkillSet;               // 0x30(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3BE8[0x8];                                     // Fixing Size After Last Property 
	TArray<struct FDigestedRangedWeaponSkillCategory> RangedWeaponCategorySkills;                        // 0x40(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	float                                        ChangeWeaponDelay;                                 // 0x50(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ChangeWeaponDelayDeviation;                        // 0x54(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SwapInsteadOfReloadOdds;                           // 0x58(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SwapInsteadOfReloadRangeMax;                       // 0x5C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 SwapInsteadOfReloadIgnoredWeaponTags;              // 0x60(0x20)(Transient, Protected, NativeAccessSpecifierProtected)
	float                                        InterruptReloadToShootOdds;                        // 0x80(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ReloadPartiallyEmptyWeaponsOdds;                   // 0x84(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        UseCoverOdds;                                      // 0x88(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CoverDistanceMin;                                  // 0x8C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                        CoverDistanceMaxCurve;                             // 0x90(0x28)(Transient, Protected, NativeAccessSpecifierProtected)
	float                                        CoverDistanceToTargetMin;                          // 0xB8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MinimumDistanceToTargetWhileMovingToCover;         // 0xBC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CoverSearchCooldown;                               // 0xC0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaximumPathDetourFactor;                           // 0xC4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PostCoverCooldownMin;                              // 0xC8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PostCoverCooldownMax;                              // 0xCC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCanFindShootingPositionAround;                    // 0xD0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3BE9[0x3];                                     // Fixing Size After Last Property 
	float                                        PositioningMaxSearchRadius;                        // 0xD4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PositioningQueryCooldown;                          // 0xD8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PositioningQueryCooldownDeviation;                 // 0xDC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        CoverPeekCountMin;                                 // 0xE0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        CoverPeekCountMax;                                 // 0xE4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ShotDelayAfterTargetRevived;                       // 0xE8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3BEB[0x4];                                     // Fixing Size After Last Property 
	TArray<struct FDigestedFiringPattern>        DefaultTargetInAirFiringPatterns;                  // 0xF0(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	bool                                         bStepBackEnabled;                                  // 0x100(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3BEC[0x3];                                     // Fixing Size After Last Property 
	float                                        StepBackCooldown;                                  // 0x104(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        StepBackPercentageChance;                          // 0x108(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        StepBackDistanceBetweenAIPawnAndTargetMin;         // 0x10C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        StepBackDistanceBetweenAIPawnAndTargetMax;         // 0x110(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        StepBackDistanceBetweenCoverAndTargetMin;          // 0x114(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        StepBackDistanceBetweenCoverAndTargetMax;          // 0x118(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        StepBackDistanceBetweenAIPawnAndCoverMin;          // 0x11C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        StepBackDistanceBetweenAIPawnAndCoverMax;          // 0x120(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bFlankingEnabled;                                  // 0x124(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3BED[0x3];                                     // Fixing Size After Last Property 
	float                                        FlankingCooldown;                                  // 0x128(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        FlankingPercentageChance;                          // 0x12C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        FlankingInnerRadius;                               // 0x130(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        FlankingOuterRadius;                               // 0x134(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        FlankingLayersCount;                               // 0x138(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        FlankingPointsPerLayerCount;                       // 0x13C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        FlankingMaxAngleRad;                               // 0x140(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        FlankingScorePawnDetectionRadius;                  // 0x144(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LoFMaxDistanceToTest;                              // 0x148(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LoFForceCrouchVehicleSeatZOffset;                  // 0x14C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortAthenaAIBotRangeAttackDigestedSkillSet* GetDefaultObj();

};

// 0x6D0 (0x700 - 0x30)
// Class FortniteAI.FortAthenaAIBotRangeAttackSkillSet
class UFortAthenaAIBotRangeAttackSkillSet : public UFortAthenaAIBotSkillSet
{
public:
	TArray<struct FRangedWeaponSkillCategory>    RangedWeaponSkills;                                // 0x30(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ChangeWeaponDelay;                                 // 0x40(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ChangeWeaponDelayDeviation;                        // 0x68(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SwapInsteadOfReloadOdds;                           // 0x90(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SwapInsteadOfReloadRangeMax;                       // 0xB8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 SwapInsteadOfReloadIgnoredWeaponTags;              // 0xE0(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        InterruptReloadToShootOdds;                        // 0x100(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ReloadPartiallyEmptyWeaponsOdds;                   // 0x128(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        UseCoverOdds;                                      // 0x150(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        CoverDistanceMin;                                  // 0x178(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        CoverDistanceMaxCurve;                             // 0x1A0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        CoverDistanceToTargetMin;                          // 0x1C8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MinimumDistanceToTargetWhileMovingToCover;         // 0x1F0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        CoverSearchCooldown;                               // 0x218(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaximumPathDetourFactor;                           // 0x240(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        PostCoverCooldownMin;                              // 0x268(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        PostCoverCooldownMax;                              // 0x290(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        CanFindShootingPositionAround;                     // 0x2B8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        PositioningMaxSearchRadius;                        // 0x2E0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        PositioningQueryCooldown;                          // 0x308(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        PositioningQueryCooldownDeviation;                 // 0x330(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        CoverPeekCountMin;                                 // 0x358(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        CoverPeekCountMax;                                 // 0x380(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ShotDelayAfterTargetRevived;                       // 0x3A8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FFiringPattern>                DefaultTargetInAirFiringPatterns;                  // 0x3D0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        StepBackEnabled;                                   // 0x3E0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        StepBackCooldown;                                  // 0x408(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        StepBackPercentageChance;                          // 0x430(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        StepBackDistanceBetweenAIPawnAndTargetMin;         // 0x458(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        StepBackDistanceBetweenAIPawnAndTargetMax;         // 0x480(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        StepBackDistanceBetweenCoverAndTargetMin;          // 0x4A8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        StepBackDistanceBetweenCoverAndTargetMax;          // 0x4D0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        StepBackDistanceBetweenAIPawnAndCoverMin;          // 0x4F8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        StepBackDistanceBetweenAIPawnAndCoverMax;          // 0x520(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        FlankingEnabled;                                   // 0x548(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        FlankingCooldown;                                  // 0x570(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        FlankingPercentageChance;                          // 0x598(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        FlankingInnerRadius;                               // 0x5C0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        FlankingOuterRadius;                               // 0x5E8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        FlankingLayersCount;                               // 0x610(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        FlankingPointsPerLayerCount;                       // 0x638(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        FlankingMaxAngle;                                  // 0x660(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        FlankingScorePawnDetectionRadius;                  // 0x688(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        LoFMaxDistanceToTest;                              // 0x6B0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        LoFForceCrouchVehicleSeatZOffset;                  // 0x6D8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortAthenaAIBotRangeAttackSkillSet* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class FortniteAI.FortAthenaAIBotReviveDigestedSkillSet
class UFortAthenaAIBotReviveDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet
{
public:
	float                                        AllyEvaluationTime;                                // 0x30(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AllyEvaluationTimeDeviation;                       // 0x34(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CooldownOnCancel;                                  // 0x38(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3BFD[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaAIBotReviveDigestedSkillSet* GetDefaultObj();

};

// 0x78 (0xA8 - 0x30)
// Class FortniteAI.FortAthenaAIBotReviveSkillSet
class UFortAthenaAIBotReviveSkillSet : public UFortAthenaAIBotSkillSet
{
public:
	struct FScalableFloat                        AllyEvaluationTime;                                // 0x30(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        AllyEvaluationTimeDeviation;                       // 0x58(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        CooldownOnCancel;                                  // 0x80(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortAthenaAIBotReviveSkillSet* GetDefaultObj();

};

// 0x60 (0x90 - 0x30)
// Class FortniteAI.FortAthenaAIBotUnstuckDigestedSkillSet
class UFortAthenaAIBotUnstuckDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet
{
public:
	bool                                         bCanUndermineWhenStuck;                            // 0x30(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCanTeleportWhenStuck;                             // 0x31(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAvoidsTeleportLocationsUnderTheLandscape;         // 0x32(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCanTeleportWhenStuckWithPlayerAround;             // 0x33(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxDistanceSqToPlayerToTeleport;                   // 0x34(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PlayerToPhoebeAngleVisibilityConeToTeleport;       // 0x38(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TimeBetweenPartialPathToConsiderPathStuck;         // 0x3C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        ConsecutivePartialPathCountToConsiderPathStuck;    // 0x40(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DistanceSqBetweenBlockedPathToConsiderPathStuck;   // 0x44(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DistanceBetweenSampleToConsiderPathStuckInWater;   // 0x48(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TimeBetweenSampleToConsiderPathStuckInWater;       // 0x4C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DistanceBetweenSampleToConsiderPathStuckOnGround;  // 0x50(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TimeBetweenSampleToConsiderPathStuckOnGround;      // 0x54(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        ConsecutiveBlockedPathCountToConsiderPathStuck;    // 0x58(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MaxSafeZoneIndexToAllowTeleport;                   // 0x5C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TimeToBreakBlockingDoor;                           // 0x60(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TimeToCloseBlockingDoor;                           // 0x64(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RiverbedObstacleCollisionNormalThreshold;          // 0x68(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCanUseSteeringWhenStuckOnIsolatedIsland;          // 0x6C(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3C04[0x3];                                     // Fixing Size After Last Property 
	int32                                        MaxSteeringDirectionAttempts;                      // 0x70(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SteeringAttemptDuration;                           // 0x74(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        EvaluateIsolatedIslandSteeringTime;                // 0x78(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCanSlideWhenBlocked;                              // 0x7C(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3C10[0x3];                                     // Fixing Size After Last Property 
	float                                        SlidingDurationSeconds;                            // 0x80(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SlidingStartIntensity;                             // 0x84(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SlidingIntensityPerSeconds;                        // 0x88(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SlidingMaxIntensity;                               // 0x8C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortAthenaAIBotUnstuckDigestedSkillSet* GetDefaultObj();

};

// 0x438 (0x468 - 0x30)
// Class FortniteAI.FortAthenaAIBotUnstuckSkillSet
class UFortAthenaAIBotUnstuckSkillSet : public UFortAthenaAIBotSkillSet
{
public:
	struct FScalableFloat                        CanUndermineWhenStuck;                             // 0x30(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        CanTeleportWhenStuck;                              // 0x58(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        AvoidsTeleportLocationsUnderTheLandscape;          // 0x80(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        CanTeleportWhenStuckWithPlayerAround;              // 0xA8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MaxDistanceToPlayerToTeleport;                     // 0xD0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        PlayerToPhoebeAngleVisibilityConeToTeleport;       // 0xF8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MaxSafeZoneIndexToAllowTeleport;                   // 0x120(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        TimeToCloseBlockingDoor;                           // 0x148(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        TimeToBreakBlockingDoor;                           // 0x170(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        RiverbedObstacleCollisionNormalThreshold;          // 0x198(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        CanUseSteeringWhenStuckOnIsolatedIsland;           // 0x1C0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MaxSteeringDirectionAttempts;                      // 0x1E8(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        SteeringAttemptDuration;                           // 0x210(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        EvaluateIsolatedIslandSteeringTime;                // 0x238(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        TimeBetweenPartialPathToConsiderPathStuck;         // 0x260(0x28)(Edit, AdvancedDisplay, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        ConsecutivePartialPathCountToConsiderPathStuck;    // 0x288(0x28)(Edit, AdvancedDisplay, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        DistanceBetweenSampleToConsiderPathStuckInWater;   // 0x2B0(0x28)(Edit, AdvancedDisplay, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        TimeBetweenSampleToConsiderPathStuckInWater;       // 0x2D8(0x28)(Edit, AdvancedDisplay, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        DistanceBetweenSampleToConsiderPathStuckOnGround;  // 0x300(0x28)(Edit, AdvancedDisplay, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        TimeBetweenSampleToConsiderPathStuckOnGround;      // 0x328(0x28)(Edit, AdvancedDisplay, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        DistanceBetweenBlockedPathToConsiderPathStuck;     // 0x350(0x28)(Transient, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        ConsecutiveBlockedPathCountToConsiderPathStuck;    // 0x378(0x28)(Transient, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        bCanSlideWhenBlocked;                              // 0x3A0(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        SlidingDurationSeconds;                            // 0x3C8(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        SlidingStartIntensity;                             // 0x3F0(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        SlidingIntensityPerSeconds;                        // 0x418(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        SlidingMaxIntensity;                               // 0x440(0x28)(Edit, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaAIBotUnstuckSkillSet* GetDefaultObj();

};

// 0xC8 (0xF8 - 0x30)
// Class FortniteAI.FortAthenaAIBotVehicleDigestedSkillSet
class UFortAthenaAIBotVehicleDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet
{
public:
	struct FDigestedVehicleDriving               NoMatchingVehicleDriving;                          // 0x30(0xB8)(Transient, Protected, NativeAccessSpecifierProtected)
	TArray<struct FDigestedVehicleDrivingCategory> VehicleDrivingArray;                               // 0xE8(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortAthenaAIBotVehicleDigestedSkillSet* GetDefaultObj();

};

// 0x310 (0x340 - 0x30)
// Class FortniteAI.FortAthenaAIBotVehicleSkillSet
class UFortAthenaAIBotVehicleSkillSet : public UFortAthenaAIBotSkillSet
{
public:
	struct FVehicleDriving                       NoMatchingVehicleDriving;                          // 0x30(0x300)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TArray<struct FVehicleDrivingCategory>       VehicleDrivingArray;                               // 0x330(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaAIBotVehicleSkillSet* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class FortniteAI.FortAthenaAIBotWarmupDigestedSkillSet
class UFortAthenaAIBotWarmupDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet
{
public:
	float                                        WarmupPlayEmoteBehaviorWeight;                     // 0x30(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        WarmupLootAndShootBehaviorWeight;                  // 0x34(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        WarmupIdleBehaviorWeight;                          // 0x38(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3C1B[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaAIBotWarmupDigestedSkillSet* GetDefaultObj();

};

// 0x78 (0xA8 - 0x30)
// Class FortniteAI.FortAthenaAIBotWarmupSkillSet
class UFortAthenaAIBotWarmupSkillSet : public UFortAthenaAIBotSkillSet
{
public:
	struct FScalableFloat                        WarmupPlayEmoteBehaviorWeight;                     // 0x30(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        WarmupLootAndShootBehaviorWeight;                  // 0x58(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        WarmupIdleBehaviorWeight;                          // 0x80(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortAthenaAIBotWarmupSkillSet* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class FortniteAI.FortAthenaAIBot_EQSQueryContext_CurrentTarget
class UFortAthenaAIBot_EQSQueryContext_CurrentTarget : public UEnvQueryContext
{
public:

	static class UClass* StaticClass();
	static class UFortAthenaAIBot_EQSQueryContext_CurrentTarget* GetDefaultObj();

};

// 0x38 (0xD8 - 0xA0)
// Class FortniteAI.FortAthenaAICoverComponent
class UFortAthenaAICoverComponent : public UControllerComponent
{
public:
	TSubclassOf<class UNavigationQueryFilter>    CoverPositionFilterClass;                          // 0xA0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CoverBoxExtent;                                    // 0xA8(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CoverOffset;                                       // 0xC0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C23[0x4];                                     // Fixing Size After Last Property 
	class UAIController*                         CachedController;                                  // 0xC8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class UBuildingActor>         LastBuildingActorUsedForCover;                     // 0xD0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaAICoverComponent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class FortniteAI.BlackboardKeyAccessValidator
class UBlackboardKeyAccessValidator : public UObject
{
public:

	static class UClass* StaticClass();
	static class UBlackboardKeyAccessValidator* GetDefaultObj();

};

// 0x20 (0xC0 - 0xA0)
// Class FortniteAI.FortAthenaAIEvaluatorComponent
class UFortAthenaAIEvaluatorComponent : public UActorComponent
{
public:
	TArray<struct FMovementEvaluatorInfo>        MovementEvaluatorInfo;                             // 0xA0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<class UFortAthenaAIEvaluator*>        AIEvaluators;                                      // 0xB0(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaAIEvaluatorComponent* GetDefaultObj();

};

// 0x20 (0x2E8 - 0x2C8)
// Class FortniteAI.FortAthenaAILeashVolume
class UFortAthenaAILeashVolume : public UVolume
{
public:
	struct FVector                               ProjectExtent;                                     // 0x2C8(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        IsInsideTolerance;                                 // 0x2E0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3C3E[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaAILeashVolume* GetDefaultObj();

};

// 0xA0 (0xC8 - 0x28)
// Class FortniteAI.FortAthenaAILODSettingsContainer
class UFortAthenaAILODSettingsContainer : public UObject
{
public:
	TMap<TSubclassOf<class UObject>, TScriptInterface<class UFortAthenaAILODSettings>> ClassToSettings;                                   // 0x28(0x50)(Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<TSubclassOf<class UFortAthenaAILODSettings_AIEvaluator>> LODSettings_AIEvaluators;                          // 0x78(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<TSubclassOf<class UFortAthenaAILODSettings_CharacterMovement>> LODSettings_CharacterMovement;                     // 0x88(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<TSubclassOf<class UFortAthenaAILODSettings_FortWeaponRanged>> LODSettings_FortWeaponRanged;                      // 0x98(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<TSubclassOf<class UFortAthenaAILODSettings_GenericTickingObject>> LODSettings_GenericTickingObject;                  // 0xA8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortAIDirectorLODAIConfig> FortAIDirectorLODConfig;                           // 0xB8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortAIDirectorLODAIConfig*            FortAIDirectorObjectLODConfig;                     // 0xC0(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortAthenaAILODSettingsContainer* GetDefaultObj();

};

// 0x48 (0xE8 - 0xA0)
// Class FortniteAI.FortAthenaAILODComponent
class UFortAthenaAILODComponent : public UActorComponent
{
public:
	enum class EFortAILODLevel                   CurrentFortAILODLevel;                             // 0xA0(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3C69[0x2];                                     // Fixing Size After Last Property 
	uint8                                        BitPad_236 : 1;                                    // Fixing Bit-Field Size 
	uint8                                        bCouldBeVisibleToPlayers : 1;                      // Mask: 0x2, PropSize: 0x10xA3(0x1)(Net, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_237 : 6;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_3C6A[0x4];                                     // Fixing Size After Last Property 
	class UFortPawn*                             CachedFortPawn;                                    // 0xA8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAthenaAILODSettingsContainer*     AILODSettingsContainer;                            // 0xB0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3C6C[0x30];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaAILODComponent* GetDefaultObj();

	void OnRep_CurrentFortAILODLevel();
};

// 0x78 (0xA8 - 0x30)
// Class FortniteAI.FortAthenaAIObjectTracker
class UFortAthenaAIObjectTracker : public UWorldSubsystem
{
public:
	uint8                                        Pad_3C74[0x28];                                    // Fixing Size After Last Property 
	TMap<TSubclassOf<class UObject>, struct FAITrackedObjectsSet> TrackedObjects;                                    // 0x58(0x50)(Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaAIObjectTracker* GetDefaultObj();

	struct FFortAthenaAIObjectTrackerQuery BP_MakeFullAthenaAIObjectTrackerQueryFromSimplified(struct FFortAthenaAIObjectTrackerQuerySimplified& SimplifiedQuery, class UActor* OptionalQuerier);
};

// 0x0 (0x28 - 0x28)
// Class FortniteAI.FortAthenaAIRuntimeParametersProvider
class UFortAthenaAIRuntimeParametersProvider : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UFortAthenaAIRuntimeParametersProvider* GetDefaultObj();

};

// 0xA0 (0x140 - 0xA0)
// Class FortniteAI.FortAthenaAIRuntimeParametersComponent
class UFortAthenaAIRuntimeParametersComponent : public UActorComponent
{
public:
	TMap<TSubclassOf<class UFortAthenaAIRuntimeParameters>, TScriptInterface<class UFortAthenaAIRuntimeParametersProvider>> RegisteredParametersProviders;                     // 0xA0(0x50)(Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	TMap<TSubclassOf<class UObject>, class UFortAthenaAIRuntimeParameters*> ExtractedRuntimeParameters;                        // 0xF0(0x50)(Transient, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaAIRuntimeParametersComponent* GetDefaultObj();

};

// 0xD0 (0x100 - 0x30)
// Class FortniteAI.FortAthenaAIRuntimeParameters_SmartObjectBase
class UFortAthenaAIRuntimeParameters_SmartObjectBase : public UFortAthenaAIRuntimeParameters
{
public:
	uint8                                        bEnabled : 1;                                      // Mask: 0x1, PropSize: 0x10x30(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bChooseClosestSmartObject : 1;                     // Mask: 0x2, PropSize: 0x10x30(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_238 : 6;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_3C79[0x3];                                     // Fixing Size After Last Property 
	float                                        UnreachableBanDuration;                            // 0x34(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        SelectedSmartObjectExpirationDelay;                // 0x38(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        GlobalSmartObjectCooldownOnFinished;               // 0x3C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        GlobalSmartObjectCooldownOnInterrupted;            // 0x40(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3C7A[0x4];                                     // Fixing Size After Last Property 
	TArray<struct FAIRuntimeParametersSmartObjectActivity> SmartObjectActivities;                             // 0x48(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<struct FSmartObjectRecentlyUsed>      SmartObjectsMostRecentlyUsed;                      // 0x58(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<struct FSmartObjectBanned>            SmartObjectsBannedList;                            // 0x68(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	int32                                        SelectedActivityID;                                // 0x78(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3C7D[0x4];                                     // Fixing Size After Last Property 
	struct FSmartObjectRequestResult             SelectedResult;                                    // 0x80(0x18)(Transient, NoDestructor, NativeAccessSpecifierPrivate)
	struct FSmartObjectSlotEntranceHandle        SelectedEntranceHandle;                            // 0x98(0x18)(Transient, NoDestructor, NativeAccessSpecifierPrivate)
	float                                        LastSelectedSmartObjectTimestamp;                  // 0xB0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3C80[0x4];                                     // Fixing Size After Last Property 
	struct FSmartObjectClaimHandle               ClaimedHandle;                                     // 0xB8(0x20)(Transient, NoDestructor, NativeAccessSpecifierPrivate)
	class UGameplayBehaviorConfig*               BehaviorConfig;                                    // 0xD8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameplayBehavior*                     GameplayBehavior;                                  // 0xE0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameplayInteractionSmartObjectBehaviorDefinition* GameplayInteractionBehaviorDefinition;             // 0xE8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        GlobalSmartObjectLastUseTimestamp;                 // 0xF0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        GlobalSmartObjectCooldown;                         // 0xF4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        ActivitiesIDCount;                                 // 0xF8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3C82[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaAIRuntimeParameters_SmartObjectBase* GetDefaultObj();

	void SetChooseClosestSmartObject(bool bInChooseClosestSmartObject);
	bool GetChooseClosestSmartObject();
};

// 0x130 (0x158 - 0x28)
// Class FortniteAI.FortAthenaAISmartObjectActivity
class UFortAthenaAISmartObjectActivity : public UObject
{
public:
	struct FScalableFloat                        Enabled;                                           // 0x28(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortAthenaAISmartObjectActivityCondition SmartObjectActivityCondition;                      // 0x50(0x48)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortAthenaAISmartObjectActivityConfig SmartObjectActivityConfig;                         // 0x98(0xC0)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortAthenaAISmartObjectActivity* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class FortniteAI.FortAthenaAISpawnerDataComponentList
class UFortAthenaAISpawnerDataComponentList : public UObject
{
public:
	uint8                                        Pad_3C8D[0x30];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaAISpawnerDataComponentList* GetDefaultObj();

	class UFortAthenaAISpawnerDataComponentList* OverrideComponentClass(TSubclassOf<class UFortAthenaAISpawnerDataComponent> NewComponentSubClass);
	class UFortAthenaAISpawnerDataComponentList* OverrideComponent(class UFortAthenaAISpawnerDataComponent* NewComponent);
	class UFortAthenaAISpawnerDataComponent* GetOrCreateComponentClassForModification(class UObject* ComponentOuter, TSubclassOf<class UFortAthenaAISpawnerDataComponent> ClassToClone);
	TArray<class UFortAthenaAISpawnerDataComponent*> GetList();
	class UPawn* GetDefaultPawn();
};

// 0x10 (0x40 - 0x30)
// Class FortniteAI.FortAthenaAIRuntimeParameters_AffiliationBase
class UFortAthenaAIRuntimeParameters_AffiliationBase : public UFortAthenaAIRuntimeParameters
{
public:
	uint8                                        Pad_3C91[0x4];                                     // Fixing Size After Last Property 
	uint8                                        bFullTeamAwarenessPropagation : 1;                 // Mask: 0x1, PropSize: 0x10x34(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bAwarenessPropagationIsBasedOnAlertLevel : 1;      // Mask: 0x2, PropSize: 0x10x34(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bTurnHostileOnDamageIfNeutral : 1;                 // Mask: 0x4, PropSize: 0x10x34(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_239 : 5;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_3C92[0x3];                                     // Fixing Size After Last Property 
	float                                        TurnHostileWhenBlockedTime;                        // 0x38(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3C93[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaAIRuntimeParameters_AffiliationBase* GetDefaultObj();

};

// 0x90 (0xC0 - 0x30)
// Class FortniteAI.FortAthenaAISpawnerDataComponent_AffiliationBase
class UFortAthenaAISpawnerDataComponent_AffiliationBase : public UFortAthenaAISpawnerDataComponent
{
public:
	struct FGameplayTagContainer                 FactionTags;                                       // 0x30(0x20)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        TurnHostileOnDamageIfNeutral;                      // 0x50(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        TurnHostileWhenBlockedTime;                        // 0x78(0x28)(Edit, NativeAccessSpecifierPrivate)
	TArray<struct FSpawnerDataComponentAffiliationSharedBBConfiguration> FactionSharedBBConfigurations;                     // 0xA0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        bFullTeamAwarenessPropagation : 1;                 // Mask: 0x1, PropSize: 0x10xB0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bAwarenessPropagationIsBasedOnAlertLevel : 1;      // Mask: 0x2, PropSize: 0x10xB0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_23A : 6;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_3CA4[0x3];                                     // Fixing Size After Last Property 
	float                                        FullTeamAwarenessMaxDistance;                      // 0xB4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bAddGameParticipantFactionAutomatically;           // 0xB8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3CA5[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaAISpawnerDataComponent_AffiliationBase* GetDefaultObj();

	void SetFullTeamAwarenessPropagationDistance(float InFullTeamAwarenessMaxDistance);
	void SetFullTeamAwarenessPropagation(bool bInFullTeamAwarenessPropagation);
	void SetFactionTags(struct FGameplayTagContainer& NewTags);
	void SetAwarenessPropagationIsBasedOnAlertLevel(bool bInAwarenessPropagationIsBasedOnAlertLevel);
	bool GetFullTeamAwarenessPropagation();
	float GetFullTeamAwarenessMaxDistance();
	struct FGameplayTagContainer GetFactionTag();
	bool GetAwarenessPropagationIsBasedOnAlertLevel();
};

// 0x20 (0x50 - 0x30)
// Class FortniteAI.FortAthenaAIRuntimeParameters_Analytic
class UFortAthenaAIRuntimeParameters_Analytic : public UFortAthenaAIRuntimeParameters
{
public:
	struct FGameplayTagContainer                 OnDeathGameplayTags;                               // 0x30(0x20)(Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaAIRuntimeParameters_Analytic* GetDefaultObj();

};

// 0x28 (0x78 - 0x50)
// Class FortniteAI.FortAthenaAIRuntimeParameters_AIAnalytic
class UFortAthenaAIRuntimeParameters_AIAnalytic : public UFortAthenaAIRuntimeParameters_Analytic
{
public:
	class FString                                AnalyticUniqueID;                                  // 0x50(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                AIType;                                            // 0x60(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bShouldSendSpawnEvents : 1;                        // Mask: 0x1, PropSize: 0x10x70(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bShouldRecordGrabbedPickups : 1;                   // Mask: 0x2, PropSize: 0x10x70(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bShouldRecordDroppedPickups : 1;                   // Mask: 0x4, PropSize: 0x10x70(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bShouldRecordDeathInstigator : 1;                  // Mask: 0x8, PropSize: 0x10x70(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bShouldRecordRegularDowns : 1;                     // Mask: 0x10, PropSize: 0x10x70(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bShouldRecordTetheredDowns : 1;                    // Mask: 0x20, PropSize: 0x10x70(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3CAA[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaAIRuntimeParameters_AIAnalytic* GetDefaultObj();

};

// 0x30 (0x60 - 0x30)
// Class FortniteAI.FortAthenaAISpawnerDataComponent_AnalyticBase
class UFortAthenaAISpawnerDataComponent_AnalyticBase : public UFortAthenaAISpawnerDataComponent
{
public:
	struct FGameplayTagContainer                 OnDeathGameplayTags;                               // 0x30(0x20)(Edit, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_3CAD[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaAISpawnerDataComponent_AnalyticBase* GetDefaultObj();

};

// 0x100 (0x160 - 0x60)
// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIAnalytic
class UFortAthenaAISpawnerDataComponent_AIAnalytic : public UFortAthenaAISpawnerDataComponent_AnalyticBase
{
public:
	class FString                                AIType;                                            // 0x60(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        ShouldSendSpawnEvents;                             // 0x70(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        ShouldRecordGrabbedPickups;                        // 0x98(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        ShouldRecordDroppedPickups;                        // 0xC0(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        ShouldRecordDeathInstigator;                       // 0xE8(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        ShouldRecordRegularDowns;                          // 0x110(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        ShouldRecordTetheredDowns;                         // 0x138(0x28)(Edit, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaAISpawnerDataComponent_AIAnalytic* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class FortniteAI.FortAthenaAIRuntimeParameters_Marker
class UFortAthenaAIRuntimeParameters_Marker : public UFortAthenaAIRuntimeParameters
{
public:
	uint8                                        bSupportsMarkerWithFaction : 1;                    // Mask: 0x1, PropSize: 0x10x30(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_23B : 7;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_3CB0[0x3];                                     // Fixing Size After Last Property 
	float                                        MarkerPropagationMaxDistanceSQ;                    // 0x34(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaAIRuntimeParameters_Marker* GetDefaultObj();

};

// 0xA0 (0xD0 - 0x30)
// Class FortniteAI.FortAthenaAIRuntimeParameters_AIBotDisguise
class UFortAthenaAIRuntimeParameters_AIBotDisguise : public UFortAthenaAIRuntimeParameters
{
public:
	bool                                         bShouldApplyDisguise;                              // 0x30(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bRevealDisguiseOnDamage;                           // 0x31(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bRevealOnDamageExcludeAIPawnDamage;                // 0x32(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bRevealDisguiseOnPlayerProximity;                  // 0x33(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        RevealPlayerProximityDistanceSqr;                  // 0x34(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        RevealPlayerProximityMinDuration;                  // 0x38(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        RevealPlayerProximityMaxDuration;                  // 0x3C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortBotNameSettings*                  NameSettingsAfterReveal;                           // 0x40(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                 DisguisedFactionsBeforeReveal;                     // 0x48(0x20)(Transient, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                 DisguisedFactionsAfterReveal;                      // 0x68(0x20)(Transient, NativeAccessSpecifierPrivate)
	TArray<TSubclassOf<class UGameplayEffect>>   DisguiseGameplayEffectBeforeReveal;                // 0x88(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<TSubclassOf<class UGameplayEffect>>   DisguiseGameplayEffectAfterReveal;                 // 0x98(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<struct FItemAndCount>                 DisguiseInventory;                                 // 0xA8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                   DisguiseLootInfo;                                  // 0xB8(0x10)(Transient, NoDestructor, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortNPCConversationParticipantComponent> DisguiseConversationComponentOverride;             // 0xC8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaAIRuntimeParameters_AIBotDisguise* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class FortniteAI.FortAthenaAIRuntimeParameters_Collection
class UFortAthenaAIRuntimeParameters_Collection : public UFortAthenaAIRuntimeParameters
{
public:
	bool                                         bForceAddToCollectionOnDamage;                     // 0x30(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CBC[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaAIRuntimeParameters_Collection* GetDefaultObj();

};

// 0x208 (0x2C8 - 0xC0)
// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIBotAffiliation
class UFortAthenaAISpawnerDataComponent_AIBotAffiliation : public UFortAthenaAISpawnerDataComponent_AffiliationBase
{
public:
	bool                                         bForceAddToCollectionOnDamage;                     // 0xC0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bOverrideIsAnAthenaGameParticipant : 1;            // Mask: 0x1, PropSize: 0x10xC1(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bIsAnAthenaGameParticipant : 1;                    // Mask: 0x2, PropSize: 0x10xC1(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_23C : 6;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_3CC1[0x6];                                     // Fixing Size After Last Property 
	struct FScalableFloat                        SupportsMarkerWithFaction;                         // 0xC8(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MarkerPropagationMaxDistance;                      // 0xF0(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        DisguiseProbability;                               // 0x118(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        RevealDisguiseOnDamage;                            // 0x140(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        RevealOnDamageExcludeAIPawnDamage;                 // 0x168(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        RevealDisguiseOnPlayerProximity;                   // 0x190(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        RevealPlayerProximityDistance;                     // 0x1B8(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        RevealPlayerProximityMinDuration;                  // 0x1E0(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        RevealPlayerProximityMaxDuration;                  // 0x208(0x28)(Edit, NativeAccessSpecifierPrivate)
	class UFortBotNameSettings*                  NameSettingsAfterReveal;                           // 0x230(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                 DisguisedFactionsBeforeReveal;                     // 0x238(0x20)(Edit, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                 DisguisedFactionsAfterReveal;                      // 0x258(0x20)(Edit, NativeAccessSpecifierPrivate)
	TArray<TSubclassOf<class UGameplayEffect>>   DisguiseGameplayEffectBeforeReveal;                // 0x278(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<TSubclassOf<class UGameplayEffect>>   DisguiseGameplayEffectAfterReveal;                 // 0x288(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<struct FItemAndCount>                 DisguiseInventory;                                 // 0x298(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                   DisguiseLootInfo;                                  // 0x2A8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortNPCConversationParticipantComponent> DisguiseConversationComponent;                     // 0x2B8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        OverrideTeamIndex;                                 // 0x2C0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3CC2[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaAISpawnerDataComponent_AIBotAffiliation* GetDefaultObj();

	void SetOverrideTeamIndex(int32 InOverrideTeamIdx);
	bool GetTeamID(int32* OutTeamId);
	bool GetSquadID(int32* OutSquadId);
};

// 0x38 (0x98 - 0x60)
// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIBotAnalytic
class UFortAthenaAISpawnerDataComponent_AIBotAnalytic : public UFortAthenaAISpawnerDataComponent_AnalyticBase
{
public:
	uint8                                        bUseDescriptorTagSuffix : 1;                       // Mask: 0x1, PropSize: 0x10x60(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_23D : 7;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_3CC5[0x7];                                     // Fixing Size After Last Property 
	class FString                                BotIDSuffix;                                       // 0x68(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FScalableFloat>                IdleDetectionBucketsCutoffs;                       // 0x78(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FScalableFloat>                DamageDistanceBuckets;                             // 0x88(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaAISpawnerDataComponent_AIBotAnalytic* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class FortniteAI.FortAthenaAIRuntimeParameters_BehaviorTreeControl
class UFortAthenaAIRuntimeParameters_BehaviorTreeControl : public UFortAthenaAIRuntimeParameters
{
public:
	uint32                                       BehaviorTreeControls;                              // 0x30(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3CCF[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaAIRuntimeParameters_BehaviorTreeControl* GetDefaultObj();

	bool IsBehaviorTreeBranchActive(enum class EBehaviorTreeBranches Behavior);
	void EnableBehaviorTreeBranch(enum class EBehaviorTreeBranches Behavior);
	void DisableBehaviorTreeBranch(enum class EBehaviorTreeBranches Behavior);
};

// 0x10 (0x40 - 0x30)
// Class FortniteAI.FortAthenaAIRuntimeParameters_ReviveBehavior
class UFortAthenaAIRuntimeParameters_ReviveBehavior : public UFortAthenaAIRuntimeParameters
{
public:
	uint8                                        bAllowReviveSquadmates : 1;                        // Mask: 0x1, PropSize: 0x10x30(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bAllowReviveSameFactionNPCs : 1;                   // Mask: 0x2, PropSize: 0x10x30(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bAllowReviveConverter : 1;                         // Mask: 0x4, PropSize: 0x10x30(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bAllowReviveConverterSquadmates : 1;               // Mask: 0x8, PropSize: 0x10x30(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bUseReviveToken : 1;                               // Mask: 0x10, PropSize: 0x10x30(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_23E : 3;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_3CD4[0x3];                                     // Fixing Size After Last Property 
	float                                        MaxDistanceToRevive;                               // 0x34(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaxDistanceToReviveHumanPlayer;                    // 0x38(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3CD6[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaAIRuntimeParameters_ReviveBehavior* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class FortniteAI.FortAthenaAIRuntimeParameters_DBNOBehavior
class UFortAthenaAIRuntimeParameters_DBNOBehavior : public UFortAthenaAIRuntimeParameters
{
public:
	uint8                                        bDieWhenAllAlliesAreDBNO : 1;                      // Mask: 0x1, PropSize: 0x10x30(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_23F : 7;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_3CD7[0x3];                                     // Fixing Size After Last Property 
	float                                        AliveAlliesMaxRangeSqr;                            // 0x34(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        SecondsBeforeAutomaticReviveFromDBNOWhenOutOfCombat; // 0x38(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3CD8[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaAIRuntimeParameters_DBNOBehavior* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class FortniteAI.FortAthenaAIRuntimeParameters_NPCBehavior
class UFortAthenaAIRuntimeParameters_NPCBehavior : public UFortAthenaAIRuntimeParameters
{
public:
	uint8                                        bSupportsHolsteredWeapon : 1;                      // Mask: 0x1, PropSize: 0x10x30(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3CDB[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaAIRuntimeParameters_NPCBehavior* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class FortniteAI.FortAthenaAIRuntimeParameters_Behavior
class UFortAthenaAIRuntimeParameters_Behavior : public UFortAthenaAIRuntimeParameters
{
public:
	uint8                                        bSurfaceTypeCheckEnabled : 1;                      // Mask: 0x1, PropSize: 0x10x30(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3CDE[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaAIRuntimeParameters_Behavior* GetDefaultObj();

};

// 0x240 (0x278 - 0x38)
// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIBotBehavior
class UFortAthenaAISpawnerDataComponent_AIBotBehavior : public UFortAthenaAISpawnerDataComponent_Behavior
{
public:
	uint32                                       BehaviorTreeControls;                              // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bCanUseFallbackPatrolAround : 1;                   // Mask: 0x1, PropSize: 0x10x3C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bAllowReviveSquadmates : 1;                        // Mask: 0x2, PropSize: 0x10x3C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bAllowReviveSameFactionNPCs : 1;                   // Mask: 0x4, PropSize: 0x10x3C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_240 : 5;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_3CEB[0x3];                                     // Fixing Size After Last Property 
	struct FScalableFloat                        AllowReviveConverter;                              // 0x40(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        AllowReviveConverterSquadmates;                    // 0x68(0x28)(Edit, NativeAccessSpecifierPrivate)
	uint8                                        bUseReviveToken : 1;                               // Mask: 0x1, PropSize: 0x10x90(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_241 : 7;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_3CEC[0x7];                                     // Fixing Size After Last Property 
	struct FScalableFloat                        MaxDistanceToRevive;                               // 0x98(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MaxDistanceToReviveHumanPlayer;                    // 0xC0(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        DieWhenAllAlliesAreDBNO;                           // 0xE8(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        AliveAlliesMaxRange;                               // 0x110(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        SecondsBeforeAutomaticReviveFromDBNOWhenOutOfCombat; // 0x138(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        SupportsHolsteredWeapon;                           // 0x160(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        SurfaceTypeCheckEnabled;                           // 0x188(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        bShouldResetAggressivePlayStyleOnUnaware;          // 0x1B0(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        TimeToKeepTrackOfDamagingActorsForAggressivePlayStyle; // 0x1D8(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        TimeToIgnoreDamagingActorsWhenBeingControlled;     // 0x200(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        PauseBehaviorOnSpawnDuration;                      // 0x228(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        bShouldBeInvulnerableDuringPause;                  // 0x250(0x28)(Edit, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaAISpawnerDataComponent_AIBotBehavior* GetDefaultObj();

	bool IsBehaviorTreeBranchActive(enum class EBehaviorTreeBranches Behavior);
	void EnableBehaviorTreeBranch(enum class EBehaviorTreeBranches Behavior);
	void DisableBehaviorTreeBranch(enum class EBehaviorTreeBranches Behavior);
};

// 0x30 (0x60 - 0x30)
// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIBotChanceEncounter
class UFortAthenaAISpawnerDataComponent_AIBotChanceEncounter : public UFortAthenaAISpawnerDataComponent_ChanceEncounterBase
{
public:
	struct FScalableFloat                        PassiveHealerEnable;                               // 0x30(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortPawnComponent_PassiveHealer> PassiveHealerComponentClass;                       // 0x58(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaAISpawnerDataComponent_AIBotChanceEncounter* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class FortniteAI.FortAthenaAIRuntimeParameters_AIBotLoopSettings
class UFortAthenaAIRuntimeParameters_AIBotLoopSettings : public UFortAthenaAIRuntimeParameters
{
public:
	uint8                                        bSpawnOutsideTheLoop : 1;                          // Mask: 0x1, PropSize: 0x10x30(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bRespawnOustideTheLoop : 1;                        // Mask: 0x2, PropSize: 0x10x30(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bRemoveInvulnerabilityOutsideSafeZone : 1;         // Mask: 0x4, PropSize: 0x10x30(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bDisableSpecialActorComponentUntilRespawn : 1;     // Mask: 0x8, PropSize: 0x10x30(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3CF0[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaAIRuntimeParameters_AIBotLoopSettings* GetDefaultObj();

};

// 0x30 (0x60 - 0x30)
// Class FortniteAI.FortAthenaAIRuntimeParameters_Conversation
class UFortAthenaAIRuntimeParameters_Conversation : public UFortAthenaAIRuntimeParameters
{
public:
	uint8                                        bEnterBTTaskConversationIfPlayerAround : 1;        // Mask: 0x1, PropSize: 0x10x30(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bCanConverseWhenConverted : 1;                     // Mask: 0x2, PropSize: 0x10x30(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_242 : 6;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_3CF2[0x3];                                     // Fixing Size After Last Property 
	float                                        EnterBTTaskConversationIfPlayerAroundDistSqr;      // 0x34(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        WaitTimeWhileNotInConversationState;               // 0x38(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        SecondsToDenyActorToWaitForConversation;           // 0x3C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UAthenaDanceItemDefinition*>    GreetingEmotes;                                    // 0x40(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	float                                        GreetingEmoteMaxDuration;                          // 0x50(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3CF6[0x4];                                     // Fixing Size After Last Property 
	class UFortTandemCharacterData*              CharacterData;                                     // 0x58(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaAIRuntimeParameters_Conversation* GetDefaultObj();

};

// 0x210 (0x240 - 0x30)
// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIBotConversation
class UFortAthenaAISpawnerDataComponent_AIBotConversation : public UFortAthenaAISpawnerDataComponent_ConversationBase
{
public:
	TSubclassOf<class UFortNPCConversationParticipantComponent> ConversationComponentClass;                        // 0x30(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGameplayTag                          ConversationEntryTag;                              // 0x38(0x4)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGameplayTag                          InteractorParticipantTag;                          // 0x3C(0x4)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGameplayTag                          SelfParticipantTag;                                // 0x40(0x4)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3CF9[0x4];                                     // Fixing Size After Last Property 
	struct FScalableFloat                        EnterBTTaskConversationIfPlayerAround;             // 0x48(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        EnterBTTaskConversationIfPlayerAroundDist;         // 0x70(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        WaitTimeWhileNotInConversationState;               // 0x98(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        SecondsToDenyActorToWaitForConversation;           // 0xC0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TArray<class UAthenaDanceItemDefinition*>    GreetingEmotes;                                    // 0xE8(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        GreetingEmoteMaxDuration;                          // 0xF8(0x28)(Edit, NativeAccessSpecifierPrivate)
	class UFortTandemCharacterData*              CharacterData;                                     // 0x120(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  ConversationInteractionCollisionProfile;           // 0x128(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3CFA[0x4];                                     // Fixing Size After Last Property 
	struct FVector                               ConversationInteractionBoxExtent;                  // 0x130(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               ConversationInteractionBoxOffset;                  // 0x148(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        SpawnOutOfTheLoop;                                 // 0x160(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        RespawnOutsideTheLoop;                             // 0x188(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        RemoveInvulnerabilityOutsideSafeZone;              // 0x1B0(0x28)(Edit, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortAthenaNPCLoopStateComponent> NPCLoopStateComponentClass;                        // 0x1D8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        UseSpecialActorComponent;                          // 0x1E0(0x28)(Edit, NativeAccessSpecifierPrivate)
	TSubclassOf<class UAthenaSpecialActorComponent> SpecialActorComponentClass;                        // 0x208(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        BlockSpecialActorUntilOutsideTheLoop;              // 0x210(0x28)(Edit, NativeAccessSpecifierPrivate)
	bool                                         bCanConverseWhenConverted;                         // 0x238(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3CFB[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaAISpawnerDataComponent_AIBotConversation* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class FortniteAI.FortAthenaAISpawnerDataComponent_CosmeticBase
class UFortAthenaAISpawnerDataComponent_CosmeticBase : public UFortAthenaAISpawnerDataComponent
{
public:

	static class UClass* StaticClass();
	static class UFortAthenaAISpawnerDataComponent_CosmeticBase* GetDefaultObj();

	void GetFallbackTag(struct FGameplayTag* OutFallbackTag);
};

// 0x10 (0x40 - 0x30)
// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIBotCosmeticBase
class UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase : public UFortAthenaAISpawnerDataComponent_CosmeticBase
{
public:
	TArray<class UAthenaCosmeticItemDefinition*> CosmeticOverrideList;                              // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase* GetDefaultObj();

	void GetLoadout(struct FFortAthenaLoadout* OutLoadout);
	void GetDances(TArray<class UAthenaDanceItemDefinition*>* Dances, class UFortAthenaAIBotController* BotController);
	void GetCustomCharacterParts(TArray<class UCustomCharacterPart*>* OutCustomCharacterParts);
	void GetAnimBPOverride(TSubclassOf<class UAnimInstance>* OutAnimBPOverride, int32* OutPriority);
	void GetAllLoadouts(TArray<struct FFortAthenaLoadout>* OutLoadouts);
	void AddCosmeticOverrideItemDef(class UAthenaCosmeticItemDefinition* InCosmeticItemToPreview);
};

// 0x1C0 (0x1F0 - 0x30)
// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIBotDebug
class UFortAthenaAISpawnerDataComponent_AIBotDebug : public UFortAthenaAISpawnerDataComponent_DebugBase
{
public:
	struct FDebugMinimapData                     DebugMinimapData;                                  // 0x30(0x1B0)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TArray<class FString>                        EditorConsoleCommands;                             // 0x1E0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaAISpawnerDataComponent_AIBotDebug* GetDefaultObj();

};

// 0xE0 (0x110 - 0x30)
// Class FortniteAI.FortAthenaAIRuntimeParameters_AIConvert
class UFortAthenaAIRuntimeParameters_AIConvert : public UFortAthenaAIRuntimeParameters
{
public:
	bool                                         bCanBeConverted;                                   // 0x30(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bCanBeConvertedFromDBNO;                           // 0x31(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bForceKillWhenUnconverted;                         // 0x32(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bForceKillWhenConverterDies;                       // 0x33(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bCopyConverterSpecificRelations;                   // 0x34(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bRemoveFromAllFactions;                            // 0x35(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bAddConverterFactions;                             // 0x36(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D1F[0x1];                                     // Fixing Size After Last Property 
	float                                        ReleaseDistanceSq;                                 // 0x38(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        CheckReleaseConditionsTimeInterval;                // 0x3C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                 AddToFactions;                                     // 0x40(0x20)(Transient, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                 RemoveFromFactions;                                // 0x60(0x20)(Transient, NativeAccessSpecifierPrivate)
	uint8                                        PreConversionTeamIndex;                            // 0x80(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D20[0x7];                                     // Fixing Size After Last Property 
	struct FGameplayTagContainer                 PreConversionFactions;                             // 0x88(0x20)(Transient, NativeAccessSpecifierPrivate)
	TArray<class UFortAbilitySet*>               AbilitySetsForConverted;                           // 0xA8(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FTeleportSettings                     TeleportSettings;                                  // 0xB8(0x38)(Transient, NativeAccessSpecifierPrivate)
	bool                                         bEnableDBNO;                                       // 0xF0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ETInteractionType                 DBNOInteractionType;                               // 0xF1(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D21[0x2];                                     // Fixing Size After Last Property 
	float                                        DBNOInteractionDuration;                           // 0xF4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FPickupTagConvertInfo>         PickupTagConvertInfos;                             // 0xF8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	struct FGameplayTag                          ConvertIdentifierTag;                              // 0x108(0x4)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D22[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaAIRuntimeParameters_AIConvert* GetDefaultObj();

	void SetForceKillWhenUnconverted(bool bInForceKillWhenUnconverted);
	void SetForceKillWhenConverterDies(bool bInForceKillWhenConverterDies);
	void SetCanBeConvertedFromDBNO(bool bInCanBeConvertedFromDBNO);
	void SetCanBeConverted(bool bInCanBeConverted);
	TArray<struct FPickupTagConvertInfo> GetPickupTagConvertInfos();
	bool GetForceKillWhenUnconverted();
	bool GetForceKillWhenConverterDies();
	bool GetCanBeConvertedFromDBNO();
	bool GetCanBeConverted();
};

// 0xA8 (0x1B8 - 0x110)
// Class FortniteAI.FortAthenaAIRuntimeParameters_AIBotConvert
class UFortAthenaAIRuntimeParameters_AIBotConvert : public UFortAthenaAIRuntimeParameters_AIConvert
{
public:
	uint8                                        bShouldLeashFollowConverter : 1;                   // Mask: 0x1, PropSize: 0x10x110(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bShouldScanAroundWhenWaiting : 1;                  // Mask: 0x2, PropSize: 0x10x110(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bFollowingBehaviorEnabled : 1;                     // Mask: 0x4, PropSize: 0x10x110(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bFollowerCanUseDBNO : 1;                           // Mask: 0x8, PropSize: 0x10x110(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bMimicBehaviorEnabled : 1;                         // Mask: 0x10, PropSize: 0x10x110(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bShouldTeleportTowardsConverter : 1;               // Mask: 0x20, PropSize: 0x10x110(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bCanDanceWithConverter : 1;                        // Mask: 0x40, PropSize: 0x10x110(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bTargetPawnConverterDamaged : 1;                   // Mask: 0x80, PropSize: 0x10x110(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D24[0x3];                                     // Fixing Size After Last Property 
	float                                        SkillLevelOverride;                                // 0x114(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        PreConversionSkillLevel;                           // 0x118(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        InnerLeashRadius;                                  // 0x11C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        OuterLeashRadius;                                  // 0x120(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D25[0x4];                                     // Fixing Size After Last Property 
	class UFortAthenaAIRuntimeParameters_Leash*  PreConversionLeashParams;                          // 0x128(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        LeashFollowActorUpdateRate;                        // 0x130(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D26[0x4];                                     // Fixing Size After Last Property 
	struct FVector                               LeashFollowActorLocalOffset;                       // 0x138(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        FollowingBehaviorRadiusSqr;                        // 0x150(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        FollowingBehaviorRadius;                           // 0x154(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        FollowingBehaviorUrgenceRadiusSqr;                 // 0x158(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        FollowingBehaviorUrgenceRadius;                    // 0x15C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        FollowingBehaviorBlockedSightAngleRad;             // 0x160(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        FollowingBehaviorBlockedSightExitAngleRad;         // 0x164(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        FollowingBehaviorBlockedSightExitDistMin;          // 0x168(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MimicBehaviorRadiusSqr;                            // 0x16C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MimicBehaviorRadius;                               // 0x170(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        TeleportTowardsConverterDistanceSq;                // 0x174(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        TeleportTowardsConverterInCombatDistanceSq;        // 0x178(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MinDistanceFromConverterWhenTeleported;            // 0x17C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaxDistanceFromConverterWhenTeleported;            // 0x180(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D2A[0x4];                                     // Fixing Size After Last Property 
	TArray<TSubclassOf<class UFortAthenaAIBotSkillSet>> ConvertedSkillSetClasses;                          // 0x188(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<TSubclassOf<class UFortAthenaAIBotSkillSet>> PreConversionSkillSetClasses;                      // 0x198(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D2C[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaAIRuntimeParameters_AIBotConvert* GetDefaultObj();

};

// 0x80 (0xB0 - 0x30)
// Class FortniteAI.FortAthenaAIRuntimeParameters_Leash
class UFortAthenaAIRuntimeParameters_Leash : public UFortAthenaAIRuntimeParameters
{
public:
	struct FVector                               LeashLocation;                                     // 0x30(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        LeashInnerRadius;                                  // 0x48(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        LeashOuterRadius;                                  // 0x4C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        LeashTeleportRadius;                               // 0x50(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bCheckForReachabilityOnRandomLocationGeneration;   // 0x54(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ELeashReturnLocationMode          LeashReturnLocationMode;                           // 0x55(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D2E[0x2];                                     // Fixing Size After Last Property 
	struct FLeashInfoOverride                    DefaultLeashInfo;                                  // 0x58(0x8)(Transient, NoDestructor, NativeAccessSpecifierPrivate)
	TMap<enum class EAlertLevel, struct FLeashInfoOverride> AlertLevelLeashOverride;                           // 0x60(0x50)(Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaAIRuntimeParameters_Leash* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class FortniteAI.FortAthenaAIRuntimeParameters_AIBotRespawn
class UFortAthenaAIRuntimeParameters_AIBotRespawn : public UFortAthenaAIRuntimeParameters
{
public:
	uint8                                        bCanRespawnOnDeath : 1;                            // Mask: 0x1, PropSize: 0x10x30(0x1)(BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bRespawnOnDeathLocation : 1;                       // Mask: 0x2, PropSize: 0x10x30(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_24A : 6;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_3D32[0x3];                                     // Fixing Size After Last Property 
	float                                        RespawnTime;                                       // 0x34(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAthenaAISpawnerDataComponentList* AISpawnerDataComponentList;                        // 0x38(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaAIRuntimeParameters_AIBotRespawn* GetDefaultObj();

};

// 0x2C0 (0x2F0 - 0x30)
// Class FortniteAI.FortAthenaAISpawnerDataComponent_GameplayBase
class UFortAthenaAISpawnerDataComponent_GameplayBase : public UFortAthenaAISpawnerDataComponent
{
public:
	bool                                         bOverrideGlobalSpeedMultiplier;                    // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D3B[0x7];                                     // Fixing Size After Last Property 
	struct FScalableFloat                        GlobalSpeedMultiplier;                             // 0x38(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        CanBeConverted;                                    // 0x60(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        CanBeConvertedFromDBNO;                            // 0x88(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        ForceKillWhenUnconverted;                          // 0xB0(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        ForceKillWhenConverterDies;                        // 0xD8(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        CopyConverterSpecificRelations;                    // 0x100(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        RemoveFromAllFactions;                             // 0x128(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        AddConverterFactions;                              // 0x150(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        ReleaseDistance;                                   // 0x178(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        CheckReleaseConditionsTimeInterval;                // 0x1A0(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                 AddToFactions;                                     // 0x1C8(0x20)(Edit, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                 RemoveFromFactions;                                // 0x1E8(0x20)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        PawnCullDistance;                                  // 0x208(0x28)(Edit, NativeAccessSpecifierPrivate)
	TArray<class UFortAbilitySet*>               AbilitySetsForConverted;                           // 0x230(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FTeleportSettings                     TeleportSettings;                                  // 0x240(0x38)(Edit, NativeAccessSpecifierPrivate)
	bool                                         bApplyTaggedNavFilters;                            // 0x278(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D3F[0x7];                                     // Fixing Size After Last Property 
	struct FFortAITaggedNavFilterData            NavFilterData;                                     // 0x280(0x60)(Edit, NativeAccessSpecifierPrivate)
	bool                                         bEnableDBNO;                                       // 0x2E0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ETInteractionType                 DBNOInteractionType;                               // 0x2E1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D41[0x2];                                     // Fixing Size After Last Property 
	float                                        DBNOInteractionDuration;                           // 0x2E4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bOnlyLeaderInteraction;                            // 0x2E8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D42[0x3];                                     // Fixing Size After Last Property 
	struct FGameplayTag                          ConvertIdentifierTag;                              // 0x2EC(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaAISpawnerDataComponent_GameplayBase* GetDefaultObj();

	bool ShouldOverrideGlobalSpeedMultiplier();
	void SetCopyConverterSpecificRelations(bool bInCopyConverterSpecificRelations);
	void SetCanBeConverted(bool bInCanBeConverted);
	void PostOnSpawnedBP(class UPawn* PawnAI);
	float GetGlobalSpeedMultiplier();
};

// 0x4E8 (0x7D8 - 0x2F0)
// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIBotGameplay
class UFortAthenaAISpawnerDataComponent_AIBotGameplay : public UFortAthenaAISpawnerDataComponent_GameplayBase
{
public:
	class UFortBotNameSettings*                  NameSettings;                                      // 0x2F0(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bRequiresUniqueNetId : 1;                          // Mask: 0x1, PropSize: 0x10x2F8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_24B : 7;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_3D56[0x7];                                     // Fixing Size After Last Property 
	struct FScalableFloat                        CanRespawnOnDeath;                                 // 0x300(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        RespawnOnDeathLocation;                            // 0x328(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        RespawnTime;                                       // 0x350(0x28)(Edit, NativeAccessSpecifierPrivate)
	float                                        PawnCullDistanceAfterPlayerAggroMode;              // 0x378(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EReachLocationValidationMode      ReachLocationValidationMode;                       // 0x37C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D57[0x3];                                     // Fixing Size After Last Property 
	struct FVector                               LeashLocation;                                     // 0x380(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        LeashInnerRadius;                                  // 0x398(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        LeashOuterRadius;                                  // 0x39C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        LeashTeleportRadius;                               // 0x3A0(0x28)(Edit, NativeAccessSpecifierPrivate)
	bool                                         bCheckForReachabilityOnRandomLocationGeneration;   // 0x3C8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ELeashReturnLocationMode          LeashReturnLocationMode;                           // 0x3C9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D5A[0x6];                                     // Fixing Size After Last Property 
	TMap<enum class EAlertLevel, struct FLeashInfoOverride> AlertLevelLeashOverride;                           // 0x3D0(0x50)(Edit, NativeAccessSpecifierPrivate)
	class UFortAthenaPatrolPath*                 AssociatedPatrolPath;                              // 0x420(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bCanInvestigateWithMeleeWeapon;                    // 0x428(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bApplyMutatorsHealthAndShieldModifiers;            // 0x429(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bSupportsTethering;                                // 0x42A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bEnableRenderCustomDepth;                          // 0x42B(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bDisableGiveWeaponCheat;                           // 0x42C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bDisableGiveMaterialsCheat;                        // 0x42D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D5B[0x2];                                     // Fixing Size After Last Property 
	struct FScalableFloat                        InnerLeashRadius;                                  // 0x430(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        OuterLeashRadius;                                  // 0x458(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        ShouldLeashFollowConverter;                        // 0x480(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        LeashFollowActorUpdateRate;                        // 0x4A8(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FVector                               LeashFollowActorLocalOffset;                       // 0x4D0(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        SkillLevelOverride;                                // 0x4E8(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        ShouldScanAroundWhenWaiting;                       // 0x510(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        ShouldTeleportTowardsConverter;                    // 0x538(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        FollowingBehaviorEnabled;                          // 0x560(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        FollowerCanUseDBNO;                                // 0x588(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        FollowingBehaviorRadius;                           // 0x5B0(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        FollowingBehaviorUrgenceRadius;                    // 0x5D8(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        FollowingBehaviorBlockedSightAngle;                // 0x600(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        FollowingBehaviorBlockedSightExitAngle;            // 0x628(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        FollowingBehaviorBlockedSightExitDistMin;          // 0x650(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MimicBehaviorEnabled;                              // 0x678(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MimicBehaviorRadius;                               // 0x6A0(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        CanDanceWithConverter;                             // 0x6C8(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        TeleportTowardsConverterDistance;                  // 0x6F0(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        TeleportTowardsConverterInCombatDistance;          // 0x718(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MinDistanceFromConverterWhenTeleported;            // 0x740(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MaxDistanceFromConverterWhenTeleported;            // 0x768(0x28)(Edit, NativeAccessSpecifierPrivate)
	TArray<TSubclassOf<class UFortAthenaAIBotSkillSet>> ConvertedSkillSetClasses;                          // 0x790(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortPawnComponent_AIBotPingCommand> PingCommandComponentClass;                         // 0x7A0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        TargetPawnConverterDamaged;                        // 0x7A8(0x28)(Edit, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D60[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaAISpawnerDataComponent_AIBotGameplay* GetDefaultObj();

	void SetNameSettings(enum class EBotNamingMode InNamingMode, const class FString& InName, bool bInAddPlayerIDSuffix);
	void SetLeashOuterRadius(float InLeashOuterRadius);
	void SetLeashLocation(const struct FVector& InLeashLocation);
	void SetLeashInnerRadius(float InLeashInnerRadius);
	void SetAssociatedPatrolPath(class UFortAthenaPatrolPath* InAssociatedPatrolPath);
};

// 0x40 (0x70 - 0x30)
// Class FortniteAI.FortAthenaAISpawnerDataComponent_GameplayAbilityBase
class UFortAthenaAISpawnerDataComponent_GameplayAbilityBase : public UFortAthenaAISpawnerDataComponent
{
public:
	TArray<struct FInitialGameplayEffectInfo>    InitialGameplayEffect;                             // 0x30(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TArray<class UFortAbilitySet*>               InitialGameplayAbilitiesSet;                       // 0x40(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                 LooseTagsToApplyToPawn;                            // 0x50(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaAISpawnerDataComponent_GameplayAbilityBase* GetDefaultObj();

	void SetLooseTagsToApplyToPawn(struct FGameplayTagContainer& InGameplayTagContainer);
	struct FGameplayTagContainer GetLooseTagsToApplyToPawn();
	void GetInitialGameplayEffects(TArray<struct FInitialGameplayEffectInfo>* OutGEs);
	void GetInitialGameplayAbilities(TArray<class UFortAbilitySet*>* OutGASets);
};

// 0x0 (0x70 - 0x70)
// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIBotGameplayAbilityBase
class UFortAthenaAISpawnerDataComponent_AIBotGameplayAbilityBase : public UFortAthenaAISpawnerDataComponent_GameplayAbilityBase
{
public:

	static class UClass* StaticClass();
	static class UFortAthenaAISpawnerDataComponent_AIBotGameplayAbilityBase* GetDefaultObj();

};

// 0x80 (0xB0 - 0x30)
// Class FortniteAI.FortAthenaAISpawnerDataComponent_InventoryBase
class UFortAthenaAISpawnerDataComponent_InventoryBase : public UFortAthenaAISpawnerDataComponent
{
public:
	TArray<struct FItemAndCount>                 Items;                                             // 0x30(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ShouldDropCurrencyOnDeath;                         // 0x40(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        DefaultInventoryIgnoresRestrictions;               // 0x68(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	class FName                                  CurrencyPayoutRowName;                             // 0x90(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D71[0x4];                                     // Fixing Size After Last Property 
	struct FDataTableRowHandle                   LootInfo;                                          // 0x98(0x10)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	bool                                         bDeathTagsCanBlockLootDrop;                        // 0xA8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bUseDefenderInventoryManagement;                   // 0xA9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D72[0x6];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaAISpawnerDataComponent_InventoryBase* GetDefaultObj();

	void SetInventoryItems(TArray<struct FItemAndCount>& InItems);
	void GetInventoryItems(TArray<struct FItemAndCount>* OutList);
};

// 0x18 (0xC8 - 0xB0)
// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIBotInventory
class UFortAthenaAISpawnerDataComponent_AIBotInventory : public UFortAthenaAISpawnerDataComponent_InventoryBase
{
public:
	uint8                                        bItemsToGiveInEditorWhenCustomizationIsEnabled : 1; // Mask: 0x1, PropSize: 0x10xB0(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_24C : 7;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_3D76[0x7];                                     // Fixing Size After Last Property 
	TArray<struct FItemAndCount>                 EditorOnlyItems;                                   // 0xB8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaAISpawnerDataComponent_AIBotInventory* GetDefaultObj();

};

// 0x60 (0x90 - 0x30)
// Class FortniteAI.FortAthenaAISpawnerDataComponent_PerceptionBase
class UFortAthenaAISpawnerDataComponent_PerceptionBase : public UFortAthenaAISpawnerDataComponent
{
public:
	bool                                         bOverrideVisibilityRange;                          // 0x30(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D7C[0x7];                                     // Fixing Size After Last Property 
	struct FGameplayTagContainer                 OverrideVisibilityRangeConditionTag;               // 0x38(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                        SightRadius;                                       // 0x58(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LoseSightRadius;                                   // 0x5C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRestrictSightOverrideToUnaware;                   // 0x60(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideHearingRange;                             // 0x61(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D7E[0x6];                                     // Fixing Size After Last Property 
	struct FGameplayTagContainer                 OverrideHearingRangeConditionTag;                  // 0x68(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                        HearingRadius;                                     // 0x88(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRestrictHearingOverrideToUnaware;                 // 0x8C(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D80[0x3];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaAISpawnerDataComponent_PerceptionBase* GetDefaultObj();

	void SetVisibilityRange(float InSightRadius, float LoseSightRadius, bool bInRestrictOverrideToUnaware);
};

// 0x0 (0x90 - 0x90)
// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIBotPerception
class UFortAthenaAISpawnerDataComponent_AIBotPerception : public UFortAthenaAISpawnerDataComponent_PerceptionBase
{
public:

	static class UClass* StaticClass();
	static class UFortAthenaAISpawnerDataComponent_AIBotPerception* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class FortniteAI.FortAthenaAISpawnerDataComponent_SkillsetBase
class UFortAthenaAISpawnerDataComponent_SkillsetBase : public UFortAthenaAISpawnerDataComponent
{
public:

	static class UClass* StaticClass();
	static class UFortAthenaAISpawnerDataComponent_SkillsetBase* GetDefaultObj();

	bool ShouldUseMatchMMRToOverrideSkillLevel();
	TArray<TSubclassOf<class UFortAthenaAIBotSkillSet>> GetSkillSets();
	float GetSkill();
};

// 0xE8 (0x118 - 0x30)
// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIBotSkillset
class UFortAthenaAISpawnerDataComponent_AIBotSkillset : public UFortAthenaAISpawnerDataComponent_SkillsetBase
{
public:
	TSubclassOf<class UFortAthenaAIBotAimingSkillSet> AimingSkillSet;                                    // 0x30(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortAthenaAIBotAttackingSkillSet> AttackingSkillSet;                                 // 0x38(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortAthenaAIBotBuildingSkillSet> BuildingSkillSet;                                  // 0x40(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortAthenaAIBotDBNOSkillSet> DBNOSkillSet;                                      // 0x48(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortAthenaAIBotEmoteSkillSet> EmoteSkillSet;                                     // 0x50(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortAthenaAIBotEvasiveManeuversSkillSet> EvasiveManeuversSkillSet;                          // 0x58(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortAthenaAIBotHarvestSkillSet> HarvestSkillSet;                                   // 0x60(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortAthenaAIBotHealingSkillSet> HealingSkillSet;                                   // 0x68(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortAthenaAIBotInventorySkillSet> InventorySkillSet;                                 // 0x70(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortAthenaAIBotLootingSkillSet> LootingSkillSet;                                   // 0x78(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortAthenaAIBotMovementSkillSet> MovementSkillSet;                                  // 0x80(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortAthenaAIBotPerceptionSkillSet> PerceptionSkillSet;                                // 0x88(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortAthenaAIBotPlayStyleSkillSet> PlayStyleSkillSet;                                 // 0x90(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortAthenaAIBotPropagateAwarenessSkillSet> PropagateAwarenessSkillSet;                        // 0x98(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortAthenaAIBotRangeAttackSkillSet> RangeAttackSkillSet;                               // 0xA0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortAthenaAIBotReviveSkillSet> ReviveSkillSet;                                    // 0xA8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortAthenaAIBotUnstuckSkillSet> UnstuckSkillSet;                                   // 0xB0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortAthenaAIBotVehicleSkillSet> VehicleSkillSet;                                   // 0xB8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bUseMatchMMRToOverrideSkillLevel : 1;              // Mask: 0x1, PropSize: 0x10xC0(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_24D : 7;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_3D8A[0x7];                                     // Fixing Size After Last Property 
	TSoftObjectPtr<class UDataTable>             OverrideSkillLevelMMRTable;                        // 0xC8(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        Skill;                                             // 0xE8(0x28)(Edit, NativeAccessSpecifierPrivate)
	float                                        SkillOverride;                                     // 0x110(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D8B[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaAISpawnerDataComponent_AIBotSkillset* GetDefaultObj();

	void SetSkill(float InSKill);
};

// 0x8 (0x120 - 0x118)
// Class FortniteAI.FortAthenaAISpawnerDataComponent_PlayerBotSkillset
class UFortAthenaAISpawnerDataComponent_PlayerBotSkillset : public UFortAthenaAISpawnerDataComponent_AIBotSkillset
{
public:
	TSubclassOf<class UFortAthenaAIBotWarmupSkillSet> WarmUpSkillSet;                                    // 0x118(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaAISpawnerDataComponent_PlayerBotSkillset* GetDefaultObj();

};

// 0x50 (0x340 - 0x2F0)
// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIGameplay
class UFortAthenaAISpawnerDataComponent_AIGameplay : public UFortAthenaAISpawnerDataComponent_GameplayBase
{
public:
	float                                        MoveSoundStimulusBroadcastInterval;                // 0x2F0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaxMoveSoundRange;                                 // 0x2F4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bGenerateSoundInAllMovementModes : 1;              // Mask: 0x1, PropSize: 0x10x2F8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_24E : 7;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_3D93[0x7];                                     // Fixing Size After Last Property 
	struct FScalableFloat                        DefaultLifespanAfterDeath;                         // 0x300(0x28)(Edit, NativeAccessSpecifierPrivate)
	enum class EFortAthenaAISpawnerDataComponentTriBool IsAlwaysGameplayRelevantOverride;                  // 0x328(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D95[0x7];                                     // Fixing Size After Last Property 
	TArray<struct FPickupTagConvertInfo>         PickupTagConvertInfos;                             // 0x330(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaAISpawnerDataComponent_AIGameplay* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIPawnCosmeticBase
class UFortAthenaAISpawnerDataComponent_AIPawnCosmeticBase : public UFortAthenaAISpawnerDataComponent_CosmeticBase
{
public:

	static class UClass* StaticClass();
	static class UFortAthenaAISpawnerDataComponent_AIPawnCosmeticBase* GetDefaultObj();

};

// 0x18 (0x48 - 0x30)
// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIPawnCosmeticCustomization
class UFortAthenaAISpawnerDataComponent_AIPawnCosmeticCustomization : public UFortAthenaAISpawnerDataComponent_AIPawnCosmeticBase
{
public:
	struct FGameplayTag                          FallbackTag;                                       // 0x30(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D97[0x4];                                     // Fixing Size After Last Property 
	class UFortAIPawnCustomizationDefinition*    CustomizationDefinition;                           // 0x38(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bCanUnloadCustomization;                           // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D98[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaAISpawnerDataComponent_AIPawnCosmeticCustomization* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class FortniteAI.FortAthenaAISpawnerDataComponent_OptimBase
class UFortAthenaAISpawnerDataComponent_OptimBase : public UFortAthenaAISpawnerDataComponent
{
public:

	static class UClass* StaticClass();
	static class UFortAthenaAISpawnerDataComponent_OptimBase* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIPawnOptim
class UFortAthenaAISpawnerDataComponent_AIPawnOptim : public UFortAthenaAISpawnerDataComponent_OptimBase
{
public:
	uint8                                        bRegisterToAIDropper : 1;                          // Mask: 0x1, PropSize: 0x10x30(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3DA0[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaAISpawnerDataComponent_AIPawnOptim* GetDefaultObj();

};

// 0x20 (0x50 - 0x30)
// Class FortniteAI.FortAthenaAISpawnerDataComponent_AssembledMesh
class UFortAthenaAISpawnerDataComponent_AssembledMesh : public UFortAthenaAISpawnerDataComponent_CosmeticBase
{
public:
	TSoftObjectPtr<class UAssembledMeshSchema>   AssembledMeshSchema;                               // 0x30(0x20)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaAISpawnerDataComponent_AssembledMesh* GetDefaultObj();

};

// 0xB8 (0xF8 - 0x40)
// Class FortniteAI.FortAthenaAISpawnerDataComponent_CosmeticLibrary
class UFortAthenaAISpawnerDataComponent_CosmeticLibrary : public UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase
{
public:
	TArray<TSoftObjectPtr<class UFortAthenaAIBotCosmeticLibraryData>> CosmeticLibraries;                                 // 0x40(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        DefaultCosmeticLibraryWeight;                      // 0x50(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FGameplayTag                          PredefinedCosmeticSetTag;                          // 0x78(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3DAA[0x4];                                     // Fixing Size After Last Property 
	struct FScalableFloat                        EmotesMaxCount;                                    // 0x80(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        bUseFixedSeed;                                     // 0xA8(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        FixedSeed;                                         // 0xD0(0x28)(Edit, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaAISpawnerDataComponent_CosmeticLibrary* GetDefaultObj();

	int32 GetAICosmeticLibraryDataIndex();
	class UFortAthenaAIBotCosmeticLibraryData* GetAICosmeticLibraryData();
};

// 0x298 (0x2D8 - 0x40)
// Class FortniteAI.FortAthenaAISpawnerDataComponent_CosmeticLoadout
class UFortAthenaAISpawnerDataComponent_CosmeticLoadout : public UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase
{
public:
	struct FFortAthenaLoadout                    CosmeticLoadout;                                   // 0x40(0x260)(Deprecated, NativeAccessSpecifierPrivate)
	TArray<struct FFortAthenaAIWeightedCosmeticLoadout> WeightedLoadouts;                                  // 0x2A0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class UCustomCharacterPart*>          CustomCharacterParts;                              // 0x2B0(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	bool                                         bCanShowDefaultSkin;                               // 0x2C0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3DAE[0x3];                                     // Fixing Size After Last Property 
	struct FGameplayTag                          FallbackTag;                                       // 0x2C4(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UAnimInstance>             AnimBPOverride;                                    // 0x2C8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        AnimBPOverridePriority;                            // 0x2D0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3DAF[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaAISpawnerDataComponent_CosmeticLoadout* GetDefaultObj();

};

// 0x28 (0x58 - 0x30)
// Class FortniteAI.FortAthenaAISpawnerDataComponent_CoverBase
class UFortAthenaAISpawnerDataComponent_CoverBase : public UFortAthenaAISpawnerDataComponent
{
public:
	TSubclassOf<class UNavigationQueryFilter>    CoverPositionFilterClass;                          // 0x30(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               CoverBoxExtent;                                    // 0x38(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CoverOffset;                                       // 0x50(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3DB6[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaAISpawnerDataComponent_CoverBase* GetDefaultObj();

};

// 0xB0 (0xE0 - 0x30)
// Class FortniteAI.FortAthenaAISpawnerDataComponent_GroupBase
class UFortAthenaAISpawnerDataComponent_GroupBase : public UFortAthenaAISpawnerDataComponent
{
public:
	struct FScalableFloat                        EnableGroupComponent;                              // 0x30(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        CanBeGroupLeader;                                  // 0x58(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        EnableFormationComponent;                          // 0x80(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TArray<struct FVector>                       FormationSlots;                                    // 0xA8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MaxDistanceFromSlotToSprint;                       // 0xB8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaAISpawnerDataComponent_GroupBase* GetDefaultObj();

};

// 0x20 (0x50 - 0x30)
// Class FortniteAI.FortAthenaAIRuntimeParameters_Inventory
class UFortAthenaAIRuntimeParameters_Inventory : public UFortAthenaAIRuntimeParameters
{
public:
	uint8                                        bShouldDropCurrencyOnDeath : 1;                    // Mask: 0x1, PropSize: 0x10x30(0x1)(BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bDefaultInventoryIgnoresRestrictions : 1;          // Mask: 0x2, PropSize: 0x10x30(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bSkipInventoryInitialization : 1;                  // Mask: 0x4, PropSize: 0x10x30(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_24F : 5;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_3DBA[0x3];                                     // Fixing Size After Last Property 
	class FName                                  CurrencyPayoutRowName;                             // 0x34(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bDeathTagsCanBlockLootDrop : 1;                    // Mask: 0x1, PropSize: 0x10x38(0x1)(BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_250 : 7;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_3DBB[0x7];                                     // Fixing Size After Last Property 
	struct FDataTableRowHandle                   LootInfo;                                          // 0x40(0x10)(Transient, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortAthenaAIRuntimeParameters_Inventory* GetDefaultObj();

};

// 0x30 (0x60 - 0x30)
// Class FortniteAI.FortAthenaAIRuntimeParameters_Hearing
class UFortAthenaAIRuntimeParameters_Hearing : public UFortAthenaAIRuntimeParameters
{
public:
	bool                                         bOverrideHearingRange;                             // 0x30(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3DBE[0x7];                                     // Fixing Size After Last Property 
	struct FGameplayTagContainer                 OverrideHearingRangeConditionTag;                  // 0x38(0x20)(Transient, NativeAccessSpecifierPrivate)
	float                                        HearingRadius;                                     // 0x58(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bRestrictOverrideToUnaware;                        // 0x5C(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3DBF[0x3];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaAIRuntimeParameters_Hearing* GetDefaultObj();

};

// 0x38 (0x68 - 0x30)
// Class FortniteAI.FortAthenaAIRuntimeParameters_Sight
class UFortAthenaAIRuntimeParameters_Sight : public UFortAthenaAIRuntimeParameters
{
public:
	bool                                         bOverrideVisibilityRange;                          // 0x30(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3DC1[0x7];                                     // Fixing Size After Last Property 
	struct FGameplayTagContainer                 OverrideVisibilityRangeConditionTag;               // 0x38(0x20)(Transient, NativeAccessSpecifierPrivate)
	float                                        SightRadius;                                       // 0x58(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        LoseSightRadius;                                   // 0x5C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bRestrictOverrideToUnaware;                        // 0x60(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3DC2[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaAIRuntimeParameters_Sight* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class FortniteAI.FortAthenaAISpawnerDataComponent_PerksBase
class UFortAthenaAISpawnerDataComponent_PerksBase : public UFortAthenaAISpawnerDataComponent
{
public:
	TArray<struct FPerkAvailabilityContainer>    PerksContainers;                                   // 0x30(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortAthenaAISpawnerDataComponent_PerksBase* GetDefaultObj();

};

// 0x10 (0xC0 - 0xB0)
// Class FortniteAI.FortAthenaAISpawnerDataComponent_RandomInventory
class UFortAthenaAISpawnerDataComponent_RandomInventory : public UFortAthenaAISpawnerDataComponent_InventoryBase
{
public:
	TArray<struct FWeightedAIInventoryLoadout>   Loadouts;                                          // 0xB0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaAISpawnerDataComponent_RandomInventory* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class FortniteAI.FortAthenaAISpawnerDataComponent_ScriptBase
class UFortAthenaAISpawnerDataComponent_ScriptBase : public UFortAthenaAISpawnerDataComponent
{
public:

	static class UClass* StaticClass();
	static class UFortAthenaAISpawnerDataComponent_ScriptBase* GetDefaultObj();

};

// 0x120 (0x150 - 0x30)
// Class FortniteAI.FortAthenaAISpawnerDataComponent_SmartObjectBase
class UFortAthenaAISpawnerDataComponent_SmartObjectBase : public UFortAthenaAISpawnerDataComponent
{
public:
	struct FScalableFloat                        Enabled;                                           // 0x30(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        ChooseClosestSmartObject;                          // 0x58(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        UnreachableBanDuration;                            // 0x80(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        SelectedSmartObjectExpirationDelay;                // 0xA8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        GlobalSmartObjectCooldownOnFinished;               // 0xD0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        GlobalSmartObjectCooldownOnInterrupted;            // 0xF8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TArray<TSubclassOf<class UFortAthenaAISmartObjectActivity>> SmartObjectActivitiesCombined;                     // 0x120(0x10)(Edit, ZeroConstructor, EditConst, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<TSubclassOf<class UFortAthenaAISmartObjectActivity>> SmartObjectActivitiesToAdd;                        // 0x130(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<TSubclassOf<class UFortAthenaAISmartObjectActivity>> SmartObjectActivitiesToRemove;                     // 0x140(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaAISpawnerDataComponent_SmartObjectBase* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class FortniteAI.FortAthenaAISpawnerDataComponent_SpawnParamsBase
class UFortAthenaAISpawnerDataComponent_SpawnParamsBase : public UFortAthenaAISpawnerDataComponent
{
public:

	static class UClass* StaticClass();
	static class UFortAthenaAISpawnerDataComponent_SpawnParamsBase* GetDefaultObj();

	bool ShouldSpawnInAir();
	bool ShouldCheckForOverlaps();
	float GetSpawnTracePadding();
	TArray<TSubclassOf<class UFortAthenaAISpawnerData>> GetSpawnerDataSpawnedAsChildren();
	struct FDataTableRowHandle GetPawnStatHandle();
	TSubclassOf<class UPawn> GetPawnClass();
	float GetInAirSpawnTraceStartHeight();
	float GetInAirSpawnTraceSphereRadius();
	float GetInAirSpawnTraceEndHeight();
	TSubclassOf<class UAIController> GetAIControllerClass();
};

// 0x50 (0x80 - 0x30)
// Class FortniteAI.FortAthenaAISpawnerDataComponent_SpawnParams
class UFortAthenaAISpawnerDataComponent_SpawnParams : public UFortAthenaAISpawnerDataComponent_SpawnParamsBase
{
public:
	TSubclassOf<class UPawn>                     PawnClass;                                         // 0x30(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UAIController>             AIControllerClass;                                 // 0x38(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                   PawnStatHandle;                                    // 0x40(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate)
	TArray<TSubclassOf<class UFortAthenaAISpawnerData>> SpawnerDataSpawnedAsChildren;                      // 0x50(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        bSpawnInAir : 1;                                   // Mask: 0x1, PropSize: 0x10x60(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bSetSkyDivingFromBus : 1;                          // Mask: 0x2, PropSize: 0x10x60(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_251 : 6;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_3DE8[0x3];                                     // Fixing Size After Last Property 
	float                                        InAirSpawnTraceStartHeight;                        // 0x64(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        InAirSpawnTraceEndHeight;                          // 0x68(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        InAirSpawnTraceSphereRadius;                       // 0x6C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        SpawnTracePadding;                                 // 0x70(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bCheckForOverlaps : 1;                             // Mask: 0x1, PropSize: 0x10x74(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bAddPOILocationTagsOnSpawn : 1;                    // Mask: 0x2, PropSize: 0x10x74(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_252 : 6;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_3DED[0x3];                                     // Fixing Size After Last Property 
	bool                                         bSetPlayerPawnAttributesWithThisStatHandle;        // 0x78(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3DEE[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaAISpawnerDataComponent_SpawnParams* GetDefaultObj();

};

// 0xC8 (0xF8 - 0x30)
// Class FortniteAI.FortAthenaAISpawnerDataComponent_TokenBase
class UFortAthenaAISpawnerDataComponent_TokenBase : public UFortAthenaAISpawnerDataComponent
{
public:
	struct FScalableFloat                        EnableTokenProviderComponent;                      // 0x30(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        TokenMaxCount;                                     // 0x58(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        EnableTokenConsumerComponent;                      // 0x80(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        TokenHoldMinDuration;                              // 0xA8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        TokenHoldMaxDuration;                              // 0xD0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaAISpawnerDataComponent_TokenBase* GetDefaultObj();

};

// 0x20 (0x50 - 0x30)
// Class FortniteAI.FortAthenaAISpawnerDataComponent_Vehicle
class UFortAthenaAISpawnerDataComponent_Vehicle : public UFortAthenaAISpawnerDataComponent_VehicleBase
{
public:
	TSubclassOf<class UFortAthenaVehicle>        VehicleToSpawnAndEnter;                            // 0x30(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bSetInfiniteFuel : 1;                              // Mask: 0x1, PropSize: 0x10x38(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_253 : 7;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_3DF4[0x7];                                     // Fixing Size After Last Property 
	TArray<TSubclassOf<class UFortAthenaAIBotSkillSet>> VehicleSkillSets;                                  // 0x40(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaAISpawnerDataComponent_Vehicle* GetDefaultObj();

};

// 0x20 (0x50 - 0x30)
// Class FortniteAI.FortAthenaAISpawnerDataComponent_Voice
class UFortAthenaAISpawnerDataComponent_Voice : public UFortAthenaAISpawnerDataComponent_VoiceBase
{
public:
	TSubclassOf<class UFortAIComponent_Voice>    VoiceComponentClass;                               // 0x30(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortTaggedSoundBank*                  SoundBank;                                         // 0x38(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortTaggedSoundBank*                  MaleSoundBankOverride;                             // 0x40(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortTaggedSoundBank*                  FemaleSoundBankOverride;                           // 0x48(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaAISpawnerDataComponent_Voice* GetDefaultObj();

};

// 0x30 (0xD0 - 0xA0)
// Class FortniteAI.FortAthenaBeaconComponent
class UFortAthenaBeaconComponent : public UActorComponent
{
public:
	int32                                        MaxAttractedBots;                                  // 0xA0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        AttractionRadius;                                  // 0xA4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UActor*>                        RegisteredActors;                                  // 0xA8(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnConsumeEvent;                                    // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	bool                                         bIsConsumed;                                       // 0xC8(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3DFD[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaBeaconComponent* GetDefaultObj();

};

// 0x10 (0x80 - 0x70)
// Class FortniteAI.FortAthenaBTTask_DynamicBlueprint
class UFortAthenaBTTask_DynamicBlueprint : public UBTTaskNode
{
public:
	class FName                                  DynamicBlueprintStatusKeyName;                     // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  DynamicBlueprintActorKeyName;                      // 0x74(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E01[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaBTTask_DynamicBlueprint* GetDefaultObj();

};

// 0x48 (0xE8 - 0xA0)
// Class FortniteAI.FortAthenaLeashComponent
class UFortAthenaLeashComponent : public UActorComponent
{
public:
	struct FScalableFloat                        LeashRadius;                                       // 0xA0(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FVector                               LeashCenter;                                       // 0xC8(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        LeashRadiusSqr;                                    // 0xE0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E29[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaLeashComponent* GetDefaultObj();

	void SetLeashRadius(float NewRadius);
	bool IsInsideLeash(struct FVector& Location);
	float GetLeashRadius();
	struct FVector GetLeashCenter();
};

// 0x10 (0x2A0 - 0x290)
// Class FortniteAI.FortAthenaLocalGameplayBehavior
class UFortAthenaLocalGameplayBehavior : public UActor
{
public:
	bool                                         bNeedToAwakeDuringExecution;                       // 0x290(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E2B[0x7];                                     // Fixing Size After Last Property 
	class UFortAthenaBTTask_DynamicBlueprint*    CachedTask;                                        // 0x298(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaLocalGameplayBehavior* GetDefaultObj();

	void OnExecute(class UActor* Activator);
	void OnAbort();
	void FinishExecute();
};

// 0x0 (0x50 - 0x50)
// Class FortniteAI.FortAthenaNavArea_ShallowWater
class UFortAthenaNavArea_ShallowWater : public UFortNavArea
{
public:

	static class UClass* StaticClass();
	static class UFortAthenaNavArea_ShallowWater* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class FortniteAI.FortAthenaNavArea_Water
class UFortAthenaNavArea_Water : public UFortNavArea
{
public:

	static class UClass* StaticClass();
	static class UFortAthenaNavArea_Water* GetDefaultObj();

};

// 0x60 (0x100 - 0xA0)
// Class FortniteAI.FortAthenaNpcGalileoComponent
class UFortAthenaNpcGalileoComponent : public UActorComponent
{
public:
	class UFortAthenaAIBotController*            CachedBotController;                               // 0xA0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortPawn*                             PossessedPawn;                                     // 0xA8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FVector>                       PatrolPath;                                        // 0xB0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<class UFortAthenaAIBotController*>    CommunicationGroup;                                // 0xC0(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnPatrollingStart;                                 // 0xD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnPatrollingStop;                                  // 0xE0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E39[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaNpcGalileoComponent* GetDefaultObj();

	void SetPatrolPath(TArray<struct FVector>& NewPatrolPath);
	void SetCommunicationGroup(TArray<class UFortAthenaAIBotController*>& AIBotControllerList);
	void OnPawnDied(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	TArray<struct FVector> GetPatrolPath();
	TArray<class UFortAthenaAIBotController*> GetCommunicationGroup();
};

// 0x58 (0xF8 - 0xA0)
// Class FortniteAI.FortAthenaNpcPatrollingComponent
class UFortAthenaNpcPatrollingComponent : public UActorComponent
{
public:
	class UAIController*                         CachedAIController;                                // 0xA0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnStartPatrollingEvent;                            // 0xA8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnStopPatrollingEvent;                             // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	class UFortAthenaPatrolPath*                 PatrolPath;                                        // 0xC8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E4F[0x28];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaNpcPatrollingComponent* GetDefaultObj();

	void UpdateCurrentDestinationToNearestNextPoint();
	void SetPatrolPath(class UFortAthenaPatrolPath* NewPatrolPath, bool bOrientationAlreadyRandomized);
	void SelectNextPatrolPoint();
	void RemovePatrolPath();
	void OnPatrolPathStatusChanged(bool bEnableState);
	bool IsPatrollingEnable();
	bool IsCurrentPatrolPointAnEndPoint();
	int32 GetPatrolPointsCount();
	class UFortAthenaPatrolPath* GetPatrolPath();
	class UFortAthenaPatrolPoint* GetCurrentPatrolPoint();
	bool FindAndSetDynamicPatrolPath(struct FFortAthenaAIObjectTrackerQuery& FindQuery, bool bOrientationAlreadyRandomized, bool bExcludeCurrentlyUsedPatrolPath);
};

// 0x8 (0x570 - 0x568)
// Class FortniteAI.PatrolPathRenderingComponent
class UPatrolPathRenderingComponent : public UPrimitiveComponent
{
public:
	uint8                                        Pad_3E54[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UPatrolPathRenderingComponent* GetDefaultObj();

};

// 0x8 (0x570 - 0x568)
// Class FortniteAI.PatrolPointRenderingComponent
class UPatrolPointRenderingComponent : public UPrimitiveComponent
{
public:
	uint8                                        Pad_3E55[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UPatrolPointRenderingComponent* GetDefaultObj();

};

// 0x8 (0x298 - 0x290)
// Class FortniteAI.FortAthenaPatrolPoint
class UFortAthenaPatrolPoint : public UActor
{
public:
	class UFortAthenaLocalGameplayBehavior*      LocalGameplayBehavior;                             // 0x290(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaPatrolPoint* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class FortniteAI.FortAthenaTrackableAIObjectInterface
class UFortAthenaTrackableAIObjectInterface : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UFortAthenaTrackableAIObjectInterface* GetDefaultObj();

};

// 0x8 (0xC0 - 0xB8)
// Class FortniteAI.AthenaAIPerceptionStimuliSourceComponent
class UAthenaAIPerceptionStimuliSourceComponent : public UAIPerceptionStimuliSourceComponent
{
public:
	bool                                         bIsConsideredAsThreateningObjectForBots;           // 0xB8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E5E[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAthenaAIPerceptionStimuliSourceComponent* GetDefaultObj();

	void OnOwnerTeamIndexChanged();
};

// 0x0 (0xC0 - 0xC0)
// Class FortniteAI.AthenaPhysicsAIPerceptionStimuliSourceComponent
class UAthenaPhysicsAIPerceptionStimuliSourceComponent : public UAthenaAIPerceptionStimuliSourceComponent
{
public:

	static class UClass* StaticClass();
	static class UAthenaPhysicsAIPerceptionStimuliSourceComponent* GetDefaultObj();

};

// 0x58 (0x110 - 0xB8)
// Class FortniteAI.AthenaTrapAIPerceptionStimuliSourceComponent
class UAthenaTrapAIPerceptionStimuliSourceComponent : public UAIPerceptionStimuliSourceComponent
{
public:
	TMap<class UActor*, struct FTrapDetectionState> TrapDiscoverabilityMap;                            // 0xB8(0x50)(Transient, NativeAccessSpecifierPrivate)
	uint8                                        bEnablePerceptionSystemOnTrap : 1;                 // Mask: 0x1, PropSize: 0x10x108(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E65[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAthenaTrapAIPerceptionStimuliSourceComponent* GetDefaultObj();

};

// 0x80 (0x120 - 0xA0)
// Class FortniteAI.FortCollisionResponseSwapperComponent
class UFortCollisionResponseSwapperComponent : public UActorComponent
{
public:
	class UPrimitiveComponent*                   CollisionPrimitiveComponent;                       // 0xA0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPrimitiveComponent*                   OverlapPrimitiveComponent;                         // 0xA8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E7A[0x28];                                    // Fixing Size After Last Property 
	TArray<class UFortPawn*>                     PawnsListenedTo;                                   // 0xD8(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E7B[0x8];                                     // Fixing Size After Last Property 
	struct FScalableFloat                        VisibilityModifiedTime;                            // 0xF0(0x28)(Edit, NativeAccessSpecifierPrivate)
	enum class ECollisionResponse                NewCollisionResponse;                              // 0x118(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E7C[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortCollisionResponseSwapperComponent* GetDefaultObj();

	void UnregisterCallbacksForOverlap();
	void RestoreCollisionResponses();
	void RegisterCallbacksForOverlap(class UPrimitiveComponent* InCollisionPrimitiveComponent, class UPrimitiveComponent* InOverlapPrimitiveComponent);
	void HandleEndOverlap(class UPrimitiveComponent* OverlappedComponent, class UActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void HandleBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class UActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
};

// 0x0 (0x168 - 0x168)
// Class FortniteAI.FortAthenaAIPerk_Ambush
class UFortAthenaAIPerk_Ambush : public UFortAIPerkBase
{
public:

	static class UClass* StaticClass();
	static class UFortAthenaAIPerk_Ambush* GetDefaultObj();

};

// 0x168 (0x2D0 - 0x168)
// Class FortniteAI.FortAthenaAIPerk_Bunker
class UFortAthenaAIPerk_Bunker : public UFortAIPerkBase
{
public:
	struct FScalableFloat                        OddsToBeUsedAgainstUnknownThreat;                  // 0x168(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        OddsToUseRoofBuilding;                             // 0x190(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        OddsToBuildForwardRamp;                            // 0x1B8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        InitialBuildDelay;                                 // 0x1E0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SamePieceBuildDelay;                               // 0x208(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SamePieceBuildDelayRandomDeviation;                // 0x230(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        DifferentPieceBuildDelay;                          // 0x258(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        DifferentPieceBuildDelayRandomDeviation;           // 0x280(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        OddsToSelectRandomMaterial;                        // 0x2A8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortAthenaAIPerk_Bunker* GetDefaultObj();

};

// 0x2F0 (0x458 - 0x168)
// Class FortniteAI.FortAthenaAIPerk_EvasiveManeuvers
class UFortAthenaAIPerk_EvasiveManeuvers : public UFortAIPerkBase
{
public:
	struct FEvasiveManeuverSkillSettings         EvasiveManeuverSkillSettings;                      // 0x168(0x258)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        DistanceMin;                                       // 0x3C0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        DistanceMax;                                       // 0x3E8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagQuery                     WeaponTagQuery;                                    // 0x410(0x48)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortAthenaAIPerk_EvasiveManeuvers* GetDefaultObj();

};

// 0x130 (0x270 - 0x140)
// Class FortniteAI.AthenaAIBotDebugMiniMapIndicator
class UAthenaAIBotDebugMiniMapIndicator : public UFortMiniMapIndicator
{
public:
	TArray<struct FBotDebugInfo>                 BotDebugInfoList;                                  // 0x140(0x10)(Net, ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           DebugMinimapIconBrush;                             // 0x150(0xC0)(Net, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E85[0x60];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAthenaAIBotDebugMiniMapIndicator* GetDefaultObj();

};

// 0x48 (0x188 - 0x140)
// Class FortniteAI.AthenaAIBotPOIDebugMiniMapIndicator
class UAthenaAIBotPOIDebugMiniMapIndicator : public UFortMiniMapIndicator
{
public:
	TArray<struct FBotPOIDebugInfo>              BotPOIDebugInfoList;                               // 0x140(0x10)(Net, ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FBotPOIExcludedZonesDebugInfo> BotPOIExcludedZonesDebugInfoList;                  // 0x150(0x10)(Net, ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FVector>                       ClusteredLootLocationsDebug;                       // 0x160(0x10)(Net, ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class FString>                        ClusteredLootNamesDebug;                           // 0x170(0x10)(Net, ZeroConstructor, NativeAccessSpecifierPrivate)
	int32                                        ClusteredLootDrawDebugLevel;                       // 0x180(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        DynamicPOIDrawDebugLevel;                          // 0x184(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UAthenaAIBotPOIDebugMiniMapIndicator* GetDefaultObj();

};

// 0x138 (0x170 - 0x38)
// Class FortniteAI.AthenaAIPopulationTracker
class UAthenaAIPopulationTracker : public UAISubsystem
{
public:
	FMulticastInlineDelegateProperty_            OnAIPawnDied;                                      // 0x38(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnAIPawnDestroyed;                                 // 0x48(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnAIPawnSpawned;                                   // 0x58(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EA8[0x60];                                    // Fixing Size After Last Property 
	TArray<class UController*>                   AIList;                                            // 0xC8(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	class UFortGameModeAthena*                   CachedGameMode;                                    // 0xD8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3EA9[0x90];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAthenaAIPopulationTracker* GetDefaultObj();

	void OnFortPawnDied(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void OnFortPawnDestroyed(class UActor* DestroyedActor);
	void OnAISpawned(class UPawn* Pawn, int32 RequestID);
	void OnAgentGameOver(class UFortAthenaAIBotController* AIBotController, class UFortPawn* Pawn, class UController* Instigator);
	int32 GetNumTotalBots();
	int32 GetNumPlayerBots();
	int32 GetNumNonAthenaParticipantBots();
	int32 GetNumAIPawn();
	struct FAIPopulationCountSnapshot GetAIPopulationTrackerCount();
	TArray<class UController*> GetAIMatchingQuery(struct FGameplayTagQuery& TagQuery);
};

// 0x50 (0x78 - 0x28)
// Class FortniteAI.AthenaAIService
class UAthenaAIService : public UObject
{
public:
	class UFortGameModeAthena*                   CachedGameMode;                                    // 0x28(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortGameStateAthena*                  CachedGameState;                                   // 0x30(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3EAE[0x30];                                    // Fixing Size After Last Property 
	class UAthenaAIServiceManager*               AIServiceManager;                                  // 0x68(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3EAF[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAthenaAIService* GetDefaultObj();

};

// 0x30 (0xA8 - 0x78)
// Class FortniteAI.AthenaAIServiceCover
class UAthenaAIServiceCover : public UAthenaAIService
{
public:
	TSubclassOf<class UNavigationQueryFilter>    CoverPositionFilterClass;                          // 0x78(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3EB4[0x28];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAthenaAIServiceCover* GetDefaultObj();

	class UAthenaAIServiceCover* GetAthenaAIServiceCover(class UObject* WorldContextObject);
};

// 0x1210 (0x1288 - 0x78)
// Class FortniteAI.AthenaAIServicePlayerBots
class UAthenaAIServicePlayerBots : public UAthenaAIService
{
public:
	uint8                                        Pad_3EF3[0x8];                                     // Fixing Size After Last Property 
	class UFortAthenaAISpawnerDataComponentList* DefaultAISpawnerDataComponentList;                 // 0x80(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAthenaAISpawnerDataComponent_SpawnParamsBase* DefaultAISpawnComponent;                           // 0x88(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FFortServerBotInfo>            DeadBots;                                          // 0x90(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<struct FFortServerBotInfo>            PlayerBotsRestartLeft;                             // 0xA0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	struct FVector                               ZiplineOctreeCenter;                               // 0xB0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        ZiplineOctreeRadius;                               // 0xC8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        UseZiplines;                                       // 0xF0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3EF6[0x138];                                   // Fixing Size After Last Property 
	struct FDebugMinimapData                     DebugMinimapData;                                  // 0x250(0x1B0)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	class FName                                  MarkPlayerBotsAggressiveStencilName;               // 0x400(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  MarkPlayerBotsDefensiveStencilName;                // 0x404(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bBotHostileToHumanPlayersOnly;                     // 0x408(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3EF8[0x7];                                     // Fixing Size After Last Property 
	struct FScalableFloat                        UseAllBattleBusPOIsSquadRatio;                     // 0x410(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	class UCurveFloat*                           TagQueryWeightChance;                              // 0x438(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UEnvQuery>              FindLocationsAroundPOIQuery;                       // 0x440(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FBattleBusPOI>                 BattleBusTagQueryPOIList;                          // 0x460(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TArray<struct FBattleBusPOI>                 SecondaryBattleBusTagQueryPOIList;                 // 0x470(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3EFB[0x8];                                     // Fixing Size After Last Property 
	TArray<struct FNavigationPOI>                OnGroundTagQueryPOIList;                           // 0x488(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FConstructionBuildingInfo             ConstructionBuildingInfo[0x6];                     // 0x498(0x90)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        UseCustomSupportedItemList;                        // 0x528(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	class UDataTable*                            BotItemDataTable;                                  // 0x550(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  AugmentsRegistryName;                              // 0x558(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3F06[0x4];                                     // Fixing Size After Last Property 
	class UDataRegistry*                         ItemBehaviorsRegistry;                             // 0x560(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UBehaviorTree*>                 InjectionSupportingBehaviors;                      // 0x568(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        UseRegionalNameList;                               // 0x578(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MaxAnonymousBotCount;                              // 0x5A0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UFortAthenaAIBotNameDataAsset> BotNameDataAsset;                                  // 0x5C8(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        CosmeticVariationCount;                            // 0x5E8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        ThankBusDriverProbability;                         // 0x610(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        ThankBusDriverMinTime;                             // 0x638(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        ThankBusDriverMaxTime;                             // 0x660(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        TriggerEndGameBehaviorMinTime;                     // 0x688(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        TriggerEndGameBehaviorMaxTime;                     // 0x6B0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        ShowSeasonLevelProbability;                        // 0x6D8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        SpectateOthersOnDeath;                             // 0x700(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MaxNumberOfBotsToSpawnAroundPlayer;                // 0x728(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	float                                        MaxAroundBotDistanceToSearchPOIToLand;             // 0x750(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3F0A[0x4];                                     // Fixing Size After Last Property 
	struct FScalableFloat                        BackfillEnabled;                                   // 0x758(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        UsePlayerCosmeticForBackfill;                      // 0x780(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        UsePlayerInventoryForBackfill;                     // 0x7A8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        OnlyUseBackfillDuringSafezones;                    // 0x7D0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UFortAthenaAISpawnerData> BackfillSpawnerData;                               // 0x7F8(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                 SupportedItemTags;                                 // 0x818(0x20)(Transient, NativeAccessSpecifierPrivate)
	TArray<struct FCachedPOIVolumeLocations>     CachedValidPOIVolumeLocations;                     // 0x838(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<class UBuildingFoundation*>           CachedBuildingFoundations;                         // 0x848(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<struct FFortBotAugmentsDataTableRow>  CachedSupportedAugments;                           // 0x858(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3F0F[0x60];                                    // Fixing Size After Last Property 
	TScriptInterface<class UFortAIAimingManagerInterface> CachedAIAimingManager;                             // 0x8C8(0x10)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3F10[0x160];                                   // Fixing Size After Last Property 
	class UFortPlayerStartWarmup*                LastTeamPlayerStart;                               // 0xA38(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3F16[0x8];                                     // Fixing Size After Last Property 
	TMap<int32, class UCacheSafeZoneLocation*>   CacheSafeZoneLocationsMap;                         // 0xA48(0x50)(Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	bool                                         bCleanupBotsRegardlessOfRemainingSquadMembers;     // 0xA98(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3F19[0x3];                                     // Fixing Size After Last Property 
	float                                        DeadBotCleanupMinDelay;                            // 0xA9C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3F1B[0x8];                                     // Fixing Size After Last Property 
	TSet<class FString>                          ReservedPlayerNames;                               // 0xAA8(0x50)(Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3F1C[0x8];                                     // Fixing Size After Last Property 
	TArray<int32>                                LocationsInSafeZoneFreeIndices;                    // 0xB00(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3F1D[0x68];                                    // Fixing Size After Last Property 
	class UFortTeamInfoAthena*                   CurrentFillingTeam;                                // 0xB78(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3F1E[0x58];                                    // Fixing Size After Last Property 
	struct FScalableFloat                        BotsUniqueIDUseValidAccountID;                     // 0xBD8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	int32                                        CurrentBotControllerUID;                           // 0xC00(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3F1F[0x4];                                     // Fixing Size After Last Property 
	TArray<class UFortAthenaBeaconComponent*>    BeaconList;                                        // 0xC08(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_254 : 6;                                    // Fixing Bit-Field Size 
	uint8                                        bWaitForNavmeshToBeLoaded : 1;                     // Mask: 0x40, PropSize: 0x10xC18(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bDoSpawnBotFlow : 1;                               // Mask: 0x80, PropSize: 0x10xC18(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bDoMapSampling : 1;                                // Mask: 0x1, PropSize: 0x10xC19(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_255 : 7;                                    // Fixing Bit-Field Size 
	enum class EAthenaGamePhase                  GamePhaseToStartSpawning;                          // 0xC1A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3F20[0x5];                                     // Fixing Size After Last Property 
	TSubclassOf<class UFortAthenaAISpawnerData>  DefaultBotAISpawnerData;                           // 0xC20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3F22[0x10];                                    // Fixing Size After Last Property 
	TSoftObjectPtr<class UEnvQuery>              EQSMapSampling;                                    // 0xC38(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3F23[0x30];                                    // Fixing Size After Last Property 
	struct FScalableFloat                        CanReviveDownedSquad;                              // 0xC88(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	class UAthenaAIPopulationTracker*            CachedAIPopulationTracker;                         // 0xCB0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FFortServerBotInfo>            PlayerBots;                                        // 0xCB8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<struct FFortServerBotInfo>            NonAthenaParticipantBots;                          // 0xCC8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3F24[0x88];                                    // Fixing Size After Last Property 
	TSoftObjectPtr<class UDataTable>             MMRSpawnTable;                                     // 0xD60(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<TSoftObjectPtr<class UDataTable>>     MMRSpawnTableOverrides;                            // 0xD80(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FMMRSpawningPlayerBotsRuntimeInfo     CachedMMRSpawningInfo;                             // 0xD90(0x38)(Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3F25[0x20];                                    // Fixing Size After Last Property 
	struct FScalableFloat                        OverridePOISpreadingSquadCount;                    // 0xDE8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3F26[0x68];                                    // Fixing Size After Last Property 
	struct FScalableFloat                        OnlyPickPOIsInSafeZone;                            // 0xE78(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FVector                               KillVolumeOverlapCheckHalfExtent;                  // 0xEA0(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        DynamicBotPOIEnabled;                              // 0xEB8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UEnvQuery>              BotPOIEQS;                                         // 0xEE0(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        BotPOIMinimumWeightForSquadMembers;                // 0xF00(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        BotPOINextPOIDurationSecondByWeight;               // 0xF28(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        BotPOINextPOIMinDuration;                          // 0xF50(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        BotPOINextPOIMaxDuration;                          // 0xF78(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	class UDataRegistry*                         BotPOIExcludedZonesDataRegistry;                   // 0xFA0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                 DynamicPOIPointProviderTags;                       // 0xFA8(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        JumpOffBusWithDynamicPOIEnabled;                   // 0xFC8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        BotPOIJumpMainPOICountMax;                         // 0xFF0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        BotPOISquadJumpOnMainPOICountMax;                  // 0x1018(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        DenyJumpBusBotPOIByProximityEnabled;               // 0x1040(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        DenyJumpBusBotPOIDistance;                         // 0x1068(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        NavigationWithDynamicPOIEnabled;                   // 0x1090(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        FailToReachBotPOICountMax;                         // 0x10B8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        BotPOIScoringWeightFactor;                         // 0x10E0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        BotPOIScoringDistanceFactor;                       // 0x1108(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        BotPOIScoringOccupancyFactor;                      // 0x1130(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        BotPOIScoringVisitedFactor;                        // 0x1158(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        ChanceToUseNextSafeZone;                           // 0x1180(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	int32                                        BotPOIIdCount;                                     // 0x11A8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        BotPOISquadJumpedOnMainPOICount;                   // 0x11AC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<int32>                                StartupPOIPendingEQSRequestIDList;                 // 0x11B0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<struct FBotPOI>                       BotPOIList;                                        // 0x11C0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<struct FBotPOI>                       CachedMainJumpBotPOIList;                          // 0x11D0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<struct FBotPOI>                       CachedSecondaryJumpBotPOIList;                     // 0x11E0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<struct FBotPOIExcludedZone>           CachedBotPOIExcludedZonesList;                     // 0x11F0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	bool                                         bIsBotPOIJumpListSplit;                            // 0x1200(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsExcludedZoneGenerated;                          // 0x1201(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3F27[0x6];                                     // Fixing Size After Last Property 
	class UFortAIBotPOIDebugActor*               BotPOIDebugDebugActor;                             // 0x1208(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bCheatBotPOIDebugMiniMapEnabled;                   // 0x1210(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3F28[0x7];                                     // Fixing Size After Last Property 
	class UFortAIBotDebugActor*                  BotDebugDebugActor;                                // 0x1218(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bCheatBotDebugMiniMapEnabled;                      // 0x1220(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3F29[0x7];                                     // Fixing Size After Last Property 
	class UFortGameStateComponent_BattleRoyaleGamePhaseLogic* CachedGamePhaseLogic;                              // 0x1228(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3F2A[0x58];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAthenaAIServicePlayerBots* GetDefaultObj();

	class UPawn* SpawnAI(struct FVector& InSpawnLocation, struct FRotator& InSpawnRotation, class UFortAthenaAISpawnerDataComponentList* AISpawnerComponentList);
	void OnServerGameMemberRemoved(uint8 InSquadId, uint8 InTeamIndex, class UFortPlayerStateAthena* ChangedPS);
	void OnSafeZoneUpdated(struct FFortSafeZonePhaseUpdatedEvent& Event);
	void OnPlaylistDataReady(class UFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags);
	void OnGamePhaseLogicReady(struct FFortBattleRoyaleGamePhaseLogicComponentReadyEvent& Event);
	void OnGamePhaseChanged(struct FFortGamePhaseUpdatedEvent& Event);
	void OnAIPawnSpawned(class UController* SpawnedController, bool bIsABot, class UFortPawn* FortAIPawn, class UFortPlayerPawn* PlayerPawn);
	void OnAgentGameOver(class UFortAthenaAIBotController* AIBotController, class UFortPawn* Pawn, class UController* Instigator);
	void KillBots(bool bKillPlayers, bool bKillNPCs, uint8 TeamIndex, class UActor* BotOwner);
	void JoinTeam(class UController* SourceTeamController, class UController* DestinationTeamController);
	bool IsWeaponSupported(class UFortWeapon* FortWeapon);
	int32 FetchNextCustomBotCosmeticVariantID(class UFortPlayerPawnAthena* BotPawn);
	void AddPOIVolume(class UFortPoiVolume* POIVolume, enum class EAthenaAIServicePOIList POIList);
};

// 0x80 (0x1308 - 0x1288)
// Class FortniteAI.AthenaAIServiceCreativePlayerBots
class UAthenaAIServiceCreativePlayerBots : public UAthenaAIServicePlayerBots
{
public:
	FMulticastInlineDelegateProperty_            OnMinigameBotsReady;                               // 0x1288(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UFortMinigame>          CachedMinigame;                                    // 0x1298(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3F39[0x8];                                     // Fixing Size After Last Property 
	TMap<class UActor*, class UPlayerController*> HiringHistory;                                     // 0x12A8(0x50)(Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3F3A[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAthenaAIServiceCreativePlayerBots* GetDefaultObj();

	void OnMinigameStateChanged(class UFortMinigame* Minigame, enum class EFortMinigameState MinigameState);
	void OnFinishedAddingMinigamePlayer(const struct FUniqueNetIdRepl& UniqueNetId, bool bIsLocalPlayer);
	bool IsMinigameBotSpawningRequired();
	class UPlayerController* GetLastHiringPlayer(class UActor* HiredOwner);
	void ClearHiringHistory(class UActor* HiredOwner);
	void AddHiringHistory(class UActor* HiredOwner, class UPlayerController* HiringPlayer);
};

// 0x18 (0x90 - 0x78)
// Class FortniteAI.AthenaAIServiceGroup
class UAthenaAIServiceGroup : public UAthenaAIService
{
public:
	int32                                        GroupIndexCount;                                   // 0x78(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3F3E[0x4];                                     // Fixing Size After Last Property 
	TArray<struct FAthenaAIServiceGroupInfo>     GroupList;                                         // 0x80(0x10)(ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UAthenaAIServiceGroup* GetDefaultObj();

};

// 0x538 (0x5B0 - 0x78)
// Class FortniteAI.AthenaAIServiceLoot
class UAthenaAIServiceLoot : public UAthenaAIService
{
public:
	struct FVector                               LootOctreeCenter;                                  // 0x78(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        LootOctreeRadius;                                  // 0x90(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        SupplyDropStatusUpdateRate;                        // 0xB8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        RemoveInvalidChestFromOctreeProbability;           // 0xE0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MovingLootTrackingEnabled;                         // 0x108(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MovingLootUpdateRate;                              // 0x130(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MovingLootOctreeUpdateDistanceThreshold;           // 0x158(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TArray<TSubclassOf<class UBuildingProp>>     HarvestableActorClassList;                         // 0x180(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        LootClusteringEnabled;                             // 0x190(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        LootClusteringNeighborDistanceMax;                 // 0x1B8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        LootClusteringNeighborhoodCountMin;                // 0x1E0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	class UDataRegistry*                         LootClusteringItemWeightDataRegistry;              // 0x208(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        LootClusteringDefaultWeight;                       // 0x210(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        LootClusteringExpandByBoxX;                        // 0x238(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        LootClusteringExpandByBoxY;                        // 0x260(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        LootClusteringExpandByBoxZ;                        // 0x288(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3F53[0x210];                                   // Fixing Size After Last Property 
	TMap<TWeakObjectPtr<class UFortPickup>, struct FMovingLootInfo> MovingLoots;                                       // 0x4C0(0x50)(Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3F54[0x8];                                     // Fixing Size After Last Property 
	TArray<struct FCachedSupplyDrop>             CachedSupplyDrops;                                 // 0x518(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	class UFortWorldItem*                        CachedWorldItem;                                   // 0x528(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDataTable*                            BotBuildingContainerExcludeListDataTable;          // 0x530(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EAthenaGamePhaseStep              LootClusterCalculationGamePhase;                   // 0x538(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3F56[0x5F];                                    // Fixing Size After Last Property 
	TArray<struct FFortBotClusterLootWeightDataTableRow> CachedLootClusteringItemWeightTable;               // 0x598(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3F57[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAthenaAIServiceLoot* GetDefaultObj();

	void UpdateSupplyDropStatus();
	void UpdateMovingLoots();
	void OnGamePhaseStepChanged(TScriptInterface<class UFortSafeZoneInterface>& SafeZoneInterface, enum class EAthenaGamePhaseStep GamePhaseStep);
	void K2_RemoveGameplayTagFromLoot(class UActor* LootActor, struct FGameplayTag& GameplayTag);
	void K2_AddGameplayTagToLoot(class UActor* LootActor, struct FGameplayTag& GameplayTag);
};

// 0x48 (0x80 - 0x38)
// Class FortniteAI.AthenaAIServiceManager
class UAthenaAIServiceManager : public UAISubsystem
{
public:
	uint8                                        Pad_3F5B[0x18];                                    // Fixing Size After Last Property 
	TArray<class UAthenaAIService*>              AIServices;                                        // 0x50(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3F5C[0x20];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAthenaAIServiceManager* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class FortniteAI.CacheSafeZoneLocation
class UCacheSafeZoneLocation : public UObject
{
public:
	uint8                                        Pad_3F5F[0x38];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UCacheSafeZoneLocation* GetDefaultObj();

};

// 0x50 (0xC8 - 0x78)
// Class FortniteAI.AthenaAIServiceVehicle
class UAthenaAIServiceVehicle : public UAthenaAIService
{
public:
	uint8                                        Pad_3F61[0x48];                                    // Fixing Size After Last Property 
	float                                        TimeToRefreshTree;                                 // 0xC0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3F62[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAthenaAIServiceVehicle* GetDefaultObj();

};

// 0x10 (0x88 - 0x78)
// Class FortniteAI.AthenaAIServiceZoneManager
class UAthenaAIServiceZoneManager : public UAthenaAIService
{
public:
	TArray<struct FAthenaAITrackedZone>          TrackedZones;                                      // 0x78(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UAthenaAIServiceZoneManager* GetDefaultObj();

	void UnregisterOccluder(class UActor* OccluderActor);
	void UnregisterDangerZone(class UActor* Actor);
	void RegisterOccluder(class UActor* OccluderActor, float SphereRadius);
	void RegisterDangerZone(class UActor* Actor, float Radius);
	void OnZoneDestroyed(class UActor* Actor);
	bool IsLOFOccluded(struct FVector& StartLocation, struct FVector& EndLocation);
	bool IsInDangerZone(struct FVector& Location);
	class UAthenaAIServiceZoneManager* GetAthenaAIServiceZoneManager(class UObject* WorldContextObject);
};

// 0xD0 (0x108 - 0x38)
// Class FortniteAI.AthenaAISpawner
class UAthenaAISpawner : public UAISubsystem
{
public:
	FMulticastInlineDelegateProperty_            OnPawnPreFinishSpawningEvent;                      // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnPawnSpawnedEvent;                                // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_3F81[0xB0];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAthenaAISpawner* GetDefaultObj();

	int32 RequestSpawn(class UFortAthenaAISpawnerDataComponentList* AISpawnerComponentList, struct FTransform& SpawnTransform, bool bUrgentRequest);
	void QueueForDespawn(class UActor* ActorToDespawn);
	bool CancelRequest(int32 RequestID);
};

// 0x50 (0x88 - 0x38)
// Class FortniteAI.AthenaAIVehicleAvoidanceManager
class UAthenaAIVehicleAvoidanceManager : public UAISubsystem
{
public:
	uint8                                        Pad_3F84[0x4C];                                    // Fixing Size After Last Property 
	float                                        TimeToRefreshTree;                                 // 0x84(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UAthenaAIVehicleAvoidanceManager* GetDefaultObj();

};

// 0x0 (0xA8 - 0xA8)
// Class FortniteAI.DespawnExpiredPawnComponent
class UDespawnExpiredPawnComponent : public UFortPawnComponent
{
public:

	static class UClass* StaticClass();
	static class UDespawnExpiredPawnComponent* GetDefaultObj();

	TArray<class UBuildingRift*> GetDespawnRifts();
	void DespawnExpired();
	void AddDespawnRift(class UBuildingRift* NewRift);
};

}


