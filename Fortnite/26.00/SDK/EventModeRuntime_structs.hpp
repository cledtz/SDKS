#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EFortEventModeEmoteToPlay : uint8
{
	Emote1                         = 0,
	Emote2                         = 1,
	Emote3                         = 2,
	RandomEmote                    = 3,
	QuickEmotes                    = 4,
	EFortEventModeEmoteToPlay_MAX  = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x48 - 0x0)
// ScriptStruct EventModeRuntime.EventModeFocusActor
struct FEventModeFocusActor
{
public:
	TSoftObjectPtr<class UActor>                 Target;                                            // 0x0(0x20)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Distance;                                          // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B9E[0x4];                                      // Fixing Size After Last Property 
	struct FVector                               Offset;                                            // 0x28(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FOV;                                               // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BA1[0x4];                                      // Fixing Size Of Struct
};

// 0xC (0xC - 0x0)
// ScriptStruct EventModeRuntime.EventModeWidgetCachedData
struct FEventModeWidgetCachedData
{
public:
	enum class EUIExtensionSlot                  Slot;                                              // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BA3[0x3];                                      // Fixing Size After Last Property 
	TWeakObjectPtr<class UUserWidget>            Widget;                                            // 0x4(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


