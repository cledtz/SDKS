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

enum class EScriptDiagnosticMessageType : uint8
{
	Debug                          = 0,
	Verbose                        = 1,
	Normal                         = 2,
	Warning                        = 3,
	Error                          = 4,
	EScriptDiagnosticMessageType_MAX = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct UnrealEngineExperimental.PersistentLineBatcher
struct FPersistentLineBatcher
{
public:
	class ULineBatchComponent*                   PersistentLineBatcher;                             // 0x0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AFE[0x8];                                     // Fixing Size Of Struct..
};

// 0x20 (0x20 - 0x0)
// ScriptStruct UnrealEngineExperimental.ScriptDiagnosticSourceLocation
struct FScriptDiagnosticSourceLocation
{
public:
	class FString                                FilePath;                                          // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntPoint                             RowSpan;                                           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntPoint                             ColSpan;                                           // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct UnrealEngineExperimental.ScriptDiagnosticMessage
struct FScriptDiagnosticMessage
{
public:
	enum class EScriptDiagnosticMessageType      MessageType;                                       // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AFF[0x7];                                     // Fixing Size After Last Property..
	struct FDateTime                             Timestamp;                                         // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Channel;                                           // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  MessageStr;                                        // 0x20(0x18)(NativeAccessSpecifierPublic)
	struct FScriptDiagnosticSourceLocation       SourceLocation;                                    // 0x38(0x20)(NativeAccessSpecifierPublic)
};

// 0x8 (0x60 - 0x58)
// ScriptStruct UnrealEngineExperimental.ScriptScreenLogMessage
struct FScriptScreenLogMessage : public FScriptDiagnosticMessage
{
public:
	struct FColor                                ScreenColor;                                       // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DisplayDuration;                                   // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
