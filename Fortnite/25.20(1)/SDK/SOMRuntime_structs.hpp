#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// ScriptStruct SOMRuntime.ScriptedObjectMovement_AStarGraphWrapper
struct FScriptedObjectMovement_AStarGraphWrapper
{
public:
	uint8                                        Pad_7E6C[0x1];                                     // Fixing Size Of Struct..
};

// 0x38 (0x38 - 0x0)
// ScriptStruct SOMRuntime.ScriptedObjectMovement_DynamicPathContext
struct FScriptedObjectMovement_DynamicPathContext
{
public:
	class UFortScriptedObjectMovement_Slot*      SourceSlot;                                        // 0x0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortScriptedObjectMovement_Slot*      DestinationSlot;                                   // 0x8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FInterfaceProperty_                          GridProvider;                                      // 0x10(0x10)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E6D[0x18];                                    // Fixing Size Of Struct..
};

// 0xC8 (0xC8 - 0x0)
// ScriptStruct SOMRuntime.ScriptedObjectMovement_Grid
struct FScriptedObjectMovement_Grid
{
public:
	uint8                                        Pad_7E6E[0x50];                                    // Fixing Size After Last Property..
	struct FVector                               CellSize;                                          // 0x50(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7E6F[0x60];                                    // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SOMRuntime.FortScriptedObjectMovementPhaseData
struct FFortScriptedObjectMovementPhaseData
{
public:
	TArray<class UFortScriptedObjectMovement_Structure*> Structures;                                        // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct SOMRuntime.ScriptedObjectMovementCalendarEventData
struct FScriptedObjectMovementCalendarEventData
{
public:
	uint8                                        Pad_7E70[0x28];                                    // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SOMRuntime.ScriptedObjectMovement_StaticPathCalendarCheatDefinitionData
struct FScriptedObjectMovement_StaticPathCalendarCheatDefinitionData
{
public:
	class FString                                EventName;                                         // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DurationTimeSeconds;                               // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DelayStartTimeSeconds;                             // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct SOMRuntime.ScriptedObjectMovement_StaticPathStepData
struct FScriptedObjectMovement_StaticPathStepData
{
public:
	struct FTransform                            StartWorldTransform;                               // 0x0(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            EndWorldTransform;                                 // 0x60(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MasterPathStartSplinePoint;                        // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SubSplineStartPoint;                               // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MoveAtServerTimeSecs;                              // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E71[0x4];                                     // Fixing Size After Last Property..
	class UFortScriptedObjectMovement_MovableObjectBase* PathTraveler;                                      // 0xD0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E72[0x8];                                     // Fixing Size After Last Property..
	struct FGameplayTag                          MoveStyleTag;                                      // 0xE0(0x4)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTeleport;                                         // 0xE4(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsSkipStep;                                       // 0xE5(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E73[0xA];                                     // Fixing Size Of Struct..
};

// 0x30 (0x30 - 0x0)
// ScriptStruct SOMRuntime.StaticPathCalendarSplinePointGroup
struct FStaticPathCalendarSplinePointGroup
{
public:
	uint8                                        Pad_7E74[0x30];                                    // Fixing Size Of Struct..
};

// 0x28 (0x28 - 0x0)
// ScriptStruct SOMRuntime.ScriptedObjectMovement_StaticPathSplineInputKeyData
struct FScriptedObjectMovement_StaticPathSplineInputKeyData
{
public:
	bool                                         bLockGeneratedData;                                // 0x0(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E75[0x7];                                     // Fixing Size After Last Property..
	class FString                                CalendarEvent;                                     // 0x8(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PauseCalendarEvent;                                // 0x18(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct SOMRuntime.ScriptedObjectMovement_StepMetaData
struct FScriptedObjectMovement_StepMetaData
{
public:
	bool                                         bSkipStep;                                         // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct SOMRuntime.ScriptedObjectMovement_StaticPathTravelerData
struct FScriptedObjectMovement_StaticPathTravelerData
{
public:
	TArray<class USplineComponent*>              GeneratedSplinesArray;                             // 0x0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FScriptedObjectMovement_StepMetaData> StepMetaData;                                      // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class USplineComponent*                      EnterSpline;                                       // 0x20(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USplineComponent*                      ExitSpline;                                        // 0x28(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortScriptedObjectMovement_MovableObjectBase* PathTraveler;                                      // 0x30(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TravelOrder;                                       // 0x38(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LateralOffset;                                     // 0x3C(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLocked;                                           // 0x40(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLockEnterSpline;                                  // 0x41(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLockExitSpline;                                   // 0x42(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E76[0x5];                                     // Fixing Size After Last Property..
	struct FVector                               TravelerBounds;                                    // 0x48(0x18)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E77[0x60];                                    // Fixing Size Of Struct..
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
