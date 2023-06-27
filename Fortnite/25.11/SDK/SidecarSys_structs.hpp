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

enum class EInventoryPersistenceMode : uint8
{
	Normal                         = 0,
	Deferred                       = 1,
	Disabled                       = 2,
	ReadOnly                       = 3,
	EInventoryPersistenceMode_MAX  = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x68 - 0x0)
// ScriptStruct SidecarSys.SidecarFileInfo
struct FSidecarFileInfo
{
public:
	TMap<class FString, class FString>           Meta;                                              // 0x0(0x50)(NativeAccessSpecifierPublic)
	bool                                         bIsCheckedOut;                                     // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOperationPending;                                 // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C0C[0x6];                                     // Fixing Size After Last Property..
	class FString                                CheckoutGuid;                                      // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
