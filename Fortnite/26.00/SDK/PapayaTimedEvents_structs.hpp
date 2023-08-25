#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x2C (0x38 - 0xC)
// ScriptStruct PapayaTimedEvents.MediaTimeEventItem
struct FMediaTimeEventItem : public FFastArraySerializerItem
{
public:
	uint8                                        Pad_3274[0x4];                                     // Fixing Size After Last Property 
	class FString                                EventName;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        Time;                                              // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Parameter;                                         // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x118 - 0x108)
// ScriptStruct PapayaTimedEvents.MediaTimeEventArray
struct FMediaTimeEventArray : public FFastArraySerializer
{
public:
	TArray<struct FMediaTimeEventItem>           Items;                                             // 0x108(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

}


