#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ESolarisDebugMessageClientId : int32
{
	None                           = 0,
	Max                            = 2147483646,
};

enum class ESolarisDebugMessageCommand : int32
{
	Connect                        = 0,
	Disconnect                     = 1,
	Message                        = 2,
	PackageMapping                 = 3,
	ESolarisDebugMessageCommand_MAX = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// ScriptStruct VerseInterface.SolarisDebugMessage
struct FSolarisDebugMessage
{
public:
	enum class ESolarisDebugMessageClientId      ClientId;                                          // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESolarisDebugMessageCommand       Command;                                           // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                MessageBodyUTF8;                                   // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

}


