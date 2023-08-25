#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EGameplayEventNetPolicy : uint8
{
	ServerOnly                     = 0,
	ClientOrServer                 = 1,
	EGameplayEventNetPolicy_MAX    = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct DataDrivenGameplayEventRouter.GameplayEventDefinition
struct FGameplayEventDefinition
{
public:
	class UScriptStruct*                         EventType;                                         // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsStateful;                                       // 0x8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayEventNetPolicy           NetPolicy;                                         // 0x9(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BBB[0x6];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// ScriptStruct DataDrivenGameplayEventRouter.GameplayEventDescriptor
struct FGameplayEventDescriptor
{
public:
	uint8                                        Pad_1BBC[0x8];                                     // Fixing Size Of Struct
};

// 0x70 (0x70 - 0x0)
// ScriptStruct DataDrivenGameplayEventRouter.GameplayEventSubscription
struct FGameplayEventSubscription
{
public:
	TSoftObjectPtr<class UObject>                Object;                                            // 0x0(0x20)(Edit, SaveGame, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMemberReference                      EventDescriptor;                                   // 0x20(0x30)(Edit, SaveGame, NativeAccessSpecifierPublic)
	struct FGameplayEventListenerHandle          EventHandle;                                       // 0x50(0x1C)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BBE[0x4];                                     // Fixing Size Of Struct
};

// 0x80 (0x80 - 0x0)
// ScriptStruct DataDrivenGameplayEventRouter.GameplayEventHandlerFunction
struct FGameplayEventHandlerFunction
{
public:
	struct FMemberReference                      EventHandlerFunction;                              // 0x0(0x30)(Edit, NativeAccessSpecifierPublic)
	TMap<class FName, class FString>             EventHandlerFunctionDefaultValues;                 // 0x30(0x50)(NativeAccessSpecifierPublic)
};

// 0x180 (0x180 - 0x0)
// ScriptStruct DataDrivenGameplayEventRouter.GameplayEventHandlerFunctions
struct FGameplayEventHandlerFunctions
{
public:
	struct FGameplayEventHandlerFunction         OnEventReceived;                                   // 0x0(0x80)(Edit, NativeAccessSpecifierPublic)
	struct FGameplayEventHandlerFunction         OnStatefulEventApplied;                            // 0x80(0x80)(Edit, NativeAccessSpecifierPublic)
	struct FGameplayEventHandlerFunction         OnStatefulEventCleared;                            // 0x100(0x80)(Edit, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct DataDrivenGameplayEventRouter.GameplayEventFunction
struct FGameplayEventFunction
{
public:
	uint8                                        Pad_1BC1[0x8];                                     // Fixing Size After Last Property 
	TArray<struct FGameplayEventSubscription>    EventSubscriptions;                                // 0x8(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, SaveGame, NativeAccessSpecifierPublic)
};

}


