#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EGameplayMessageMatchType : uint8
{
	ExactMatch                     = 0,
	PartialMatch                   = 1,
	EGameplayMessageMatchType_MAX  = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x4 - 0x4)
// ScriptStruct GameplayMessages.EventMessageTag
struct FEventMessageTag : public FGameplayTag
{
public:
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GameplayMessages.ReplicatedMessageData
struct FReplicatedMessageData
{
public:
	class UScriptStruct*                         StructType;                                        // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A7E[0x10];                                    // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GameplayMessages.ReplicatedMessage
struct FReplicatedMessage
{
public:
	uint8                                        Pad_1A7F[0x10];                                    // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GameplayMessages.GameplayMessageReceiverHandle
struct FGameplayMessageReceiverHandle
{
public:
	TWeakObjectPtr<class UGameplayMessageRouter> Subsystem;                                         // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FEventMessageTag                      Channel;                                           // 0x8(0x4)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        ID;                                                // 0xC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1A80[0x8];                                     // Fixing Size Of Struct
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct GameplayMessages.GameplayMessageReceiverData
struct FGameplayMessageReceiverData
{
public:
	uint8                                        Pad_1A82[0xA0];                                    // Fixing Size Of Struct
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
