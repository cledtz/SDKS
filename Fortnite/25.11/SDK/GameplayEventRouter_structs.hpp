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

enum class EEventBubblingRule : uint8
{
	None                           = 0,
	Down                           = 1,
	Up                             = 2,
	EEventBubblingRule_MAX         = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct GameplayEventRouter.GameplayEventId
struct FGameplayEventId
{
public:
	uint8                                        Pad_1E2F[0x10];                                    // Fixing Size Of Struct..
};

// 0x1C (0x1C - 0x0)
// ScriptStruct GameplayEventRouter.GameplayEventListenerHandle
struct FGameplayEventListenerHandle
{
public:
	uint8                                        Pad_1E30[0x10];                                    // Fixing Size After Last Property..
	int32                                        Handle;                                            // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1E31[0x8];                                     // Fixing Size Of Struct..
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct GameplayEventRouter.GameplayEventListenerData
struct FGameplayEventListenerData
{
public:
	uint8                                        Pad_1E32[0xC0];                                    // Fixing Size After Last Property..
	class UScriptStruct*                         EventType;                                         // 0xC0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               EventContext;                                      // 0xC8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E33[0x20];                                    // Fixing Size Of Struct..
};

// 0x38 (0x38 - 0x0)
// ScriptStruct GameplayEventRouter.GameplayEventListenerList
struct FGameplayEventListenerList
{
public:
	uint8                                        Pad_1E34[0x38];                                    // Fixing Size Of Struct..
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
