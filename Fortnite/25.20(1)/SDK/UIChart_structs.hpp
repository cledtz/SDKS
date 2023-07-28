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

enum class EWidgetStateComponentUnloadDefaultBehavior : uint8
{
	WaitForAnimations              = 0,
	DoNotWaitForAnimations         = 1,
	EWidgetStateComponentUnloadDefaultBehavior_MAX = 2,
};

enum class EUIStateTransitionUrgency : uint8
{
	Normal                         = 0,
	High                           = 1,
	EUIStateTransitionUrgency_MAX  = 2,
};

enum class EUIStateAutomationType : uint8
{
	Initial                        = 0,
	Continual                      = 1,
	EUIStateAutomationType_MAX     = 2,
};

enum class EUIStateChartContextConditionType : uint8
{
	IsEmpty                        = 0,
	IsNotEmpty                     = 1,
	IsEqualTo                      = 2,
	IsNotEqualTo                   = 3,
	IsGreaterThan                  = 4,
	IsGreaterThanOrEqualTo         = 5,
	IsLessThan                     = 6,
	IsLessThanOrEqualTo            = 7,
	IsTrue                         = 8,
	IsNotTrue                      = 9,
	StartsWith                     = 10,
	EndsWith                       = 11,
	Contains                       = 12,
	EUIStateChartContextConditionType_MAX = 13,
};

enum class EUIChartRegionTransitionScope : uint8
{
	ThisRegionOnly                 = 0,
	ThisRegionOrChildRegions       = 1,
	EUIChartRegionTransitionScope_MAX = 2,
};

enum class EStateComponentStatus : uint8
{
	Inactive                       = 0,
	PreparingForLoad               = 1,
	Loading                        = 2,
	DoneLoading                    = 3,
	Operational                    = 4,
	PreparingForUnload             = 5,
	Unloading                      = 6,
	DoneUnloading                  = 7,
	EStateComponentStatus_MAX      = 8,
};

enum class EStateChartResourceScope : uint8
{
	StateChart                     = 0,
	Player                         = 1,
	Global                         = 2,
	EStateChartResourceScope_MAX   = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x28 - 0x0)
// ScriptStruct UIChart.UIStateChartTransitionOperationParameters
struct FUIStateChartTransitionOperationParameters
{
public:
	struct FGameplayTagContainer                 AnimationHints;                                    // 0x0(0x20)(Protected, NativeAccessSpecifierProtected)
	enum class EUIStateTransitionUrgency         Urgency;                                           // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8741[0x7];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// ScriptStruct UIChart.ContextSetterSetEntry
struct FContextSetterSetEntry
{
public:
	struct FGameplayTag                          Key;                                               // 0x0(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8742[0x4];                                     // Fixing Size After Last Property..
	class FString                                Value;                                             // 0x8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct UIChart.ContextSetterClearEntry
struct FContextSetterClearEntry
{
public:
	struct FGameplayTag                          Key;                                               // 0x0(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct UIChart.ContextSetterChanges
struct FContextSetterChanges
{
public:
	TArray<struct FContextSetterSetEntry>        ValuesToSet;                                       // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FContextSetterClearEntry>      ValuesToClear;                                     // 0x10(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct UIChart.UIStateComponentInstanceStack
struct FUIStateComponentInstanceStack
{
public:
	TArray<class UStackingUIStateComponent*>     InstanceStack;                                     // 0x0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct UIChart.UIStateConfigurationChildReference
struct FUIStateConfigurationChildReference
{
public:
	int32                                        ChildStateId;                                      // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct UIChart.UIStateChartContextCondition
struct FUIStateChartContextCondition
{
public:
	struct FGameplayTag                          Key;                                               // 0x0(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EUIStateChartContextConditionType ConditionType;                                     // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ComparisonConstant;                                // 0x8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct UIChart.UIStateAutomationRule
struct FUIStateAutomationRule
{
public:
	TArray<struct FUIStateChartContextCondition> ContextConditions;                                 // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FUIStateConfigurationChildReference   ChildStateReference;                               // 0x10(0x4)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_8743[0x4];                                     // Fixing Size Of Struct..
};

// 0xC (0xC - 0x0)
// ScriptStruct UIChart.UIStateTransitionData
struct FUIStateTransitionData
{
public:
	struct FGameplayTag                          TriggerTag;                                        // 0x0(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SourceStateId;                                     // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TargetStateId;                                     // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct UIChart.UIStateChartContextChangeSet
struct FUIStateChartContextChangeSet
{
public:
	TMap<struct FGameplayTag, class FString>     Changes;                                           // 0x0(0x50)(Edit, Protected, NativeAccessSpecifierProtected)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct UIChart.UIStateChartContextEntryOverride
struct FUIStateChartContextEntryOverride
{
public:
	class FString                                OverrideValue;                                     // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8744[0x18];                                    // Fixing Size Of Struct..
};

// 0x88 (0x88 - 0x0)
// ScriptStruct UIChart.UIStateChartManagerChartDeactivationRequest
struct FUIStateChartManagerChartDeactivationRequest
{
public:
	uint8                                        Pad_8745[0x88];                                    // Fixing Size Of Struct..
};

// 0x28 (0x28 - 0x0)
// ScriptStruct UIChart.UIStateRelayBaton
struct FUIStateRelayBaton
{
public:
	uint8                                        Pad_8746[0x10];                                    // Fixing Size After Last Property..
	class UUIStateComponent*                     OfferingComponent;                                 // 0x10(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UUIStateComponent>         OfferingComponentType;                             // 0x18(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUIStateComponentConfiguration*        OfferingComponentConfiguration;                    // 0x20(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct UIChart.UIStateRelay
struct FUIStateRelay
{
public:
	TArray<struct FUIStateRelayBaton>            AvailableBatons;                                   // 0x0(0x10)(ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<struct FUIStateRelayBaton>            ClaimedBatons;                                     // 0x10(0x10)(ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_8747[0x8];                                     // Fixing Size Of Struct..
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
