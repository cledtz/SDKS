#pragma once

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

// 0x50 (0x50 - 0x0)
// ScriptStruct CreativeDataChannelTriggerRuntime.CDCStringFloatArrayMap
struct FCDCStringFloatArrayMap
{
public:
	TMap<class FString, struct FVector>          Data;                                              // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CreativeDataChannelTriggerRuntime.CDCFloatArray
struct FCDCFloatArray
{
public:
	TArray<float>                                Data;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct CreativeDataChannelTriggerRuntime.CDCStringFloatMap
struct FCDCStringFloatMap
{
public:
	TMap<class FString, float>                   Data;                                              // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct CreativeDataChannelTriggerRuntime.CDCStringIntMap
struct FCDCStringIntMap
{
public:
	TMap<class FString, int32>                   Data;                                              // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct CreativeDataChannelTriggerRuntime.CDCInt
struct FCDCInt
{
public:
	int32                                        Data;                                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CreativeDataChannelTriggerRuntime.CDCLargeInt
struct FCDCLargeInt
{
public:
	int64                                        Data;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct CreativeDataChannelTriggerRuntime.CDCStringStringMap
struct FCDCStringStringMap
{
public:
	TMap<class FString, class FString>           Data;                                              // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMap<class FString, int32>                   ExtraData;                                         // 0x50(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CreativeDataChannelTriggerRuntime.CDCString
struct FCDCString
{
public:
	class FString                                Data;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CreativeDataChannelTriggerRuntime.CDCStringArray
struct FCDCStringArray
{
public:
	TArray<class FString>                        Data;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        ExtraData;                                         // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_66C[0x4];                                      // Fixing Size Of Struct
};

// 0xC (0xC - 0x0)
// ScriptStruct CreativeDataChannelTriggerRuntime.CreativeDataChannelEvent
struct FCreativeDataChannelEvent
{
public:
	class FName                                  EventName;                                         // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Parameters;                                        // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TriggerCondition;                                  // 0x8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CreativeDataChannelTriggerRuntime.CreativeDataChannelEvents
struct FCreativeDataChannelEvents
{
public:
	TArray<struct FCreativeDataChannelEvent>     Events;                                            // 0x0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
