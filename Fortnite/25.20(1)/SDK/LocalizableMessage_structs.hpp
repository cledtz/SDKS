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

// 0x20 (0x20 - 0x0)
// ScriptStruct LocalizableMessage.LocalizableMessageParameterEntry
struct FLocalizableMessageParameterEntry
{
public:
	class FString                                Key;                                               // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInstancedStruct                      Value;                                             // 0x10(0x10)(NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct LocalizableMessage.LocalizableMessage
struct FLocalizableMessage
{
public:
	class FString                                Key;                                               // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DefaultText;                                       // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLocalizableMessageParameterEntry> Substitutions;                                     // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct LocalizableMessage.LocalizableMessageParameterInt
struct FLocalizableMessageParameterInt
{
public:
	int64                                        Value;                                             // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct LocalizableMessage.LocalizableMessageParameterFloat
struct FLocalizableMessageParameterFloat
{
public:
	double                                       Value;                                             // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LocalizableMessage.LocalizableMessageParameterString
struct FLocalizableMessageParameterString
{
public:
	class FString                                Value;                                             // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct LocalizableMessage.LocalizableMessageParameterMessage
struct FLocalizableMessageParameterMessage
{
public:
	struct FLocalizableMessage                   Value;                                             // 0x0(0x30)(NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
