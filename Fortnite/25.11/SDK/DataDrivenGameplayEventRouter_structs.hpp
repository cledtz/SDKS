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
	uint8                                        Pad_361F[0x6];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// ScriptStruct DataDrivenGameplayEventRouter.GameplayEventDescriptor
struct FGameplayEventDescriptor
{
public:
	uint8                                        Pad_3620[0x8];                                     // Fixing Size Of Struct..
};

// 0x78 (0x78 - 0x0)
// ScriptStruct DataDrivenGameplayEventRouter.GameplayEventSubscription
struct FGameplayEventSubscription
{
public:
	TSoftObjectPtr<class UObject>                Object;                                            // 0x0(0x28)(Edit, SaveGame, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMemberReference                      EventDescriptor;                                   // 0x28(0x30)(Edit, SaveGame, NativeAccessSpecifierPublic)
	struct FGameplayEventListenerHandle          EventHandle;                                       // 0x58(0x1C)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3621[0x4];                                     // Fixing Size Of Struct..
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
	uint8                                        Pad_3622[0x8];                                     // Fixing Size After Last Property..
	TArray<struct FGameplayEventSubscription>    EventSubscriptions;                                // 0x8(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, SaveGame, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
