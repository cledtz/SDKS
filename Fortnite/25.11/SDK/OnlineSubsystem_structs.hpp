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

enum class EInAppPurchaseState : uint8
{
	Unknown                        = 0,
	Success                        = 1,
	Failed                         = 2,
	Cancelled                      = 3,
	Invalid                        = 4,
	NotAllowed                     = 5,
	Restored                       = 6,
	AlreadyOwned                   = 7,
	EInAppPurchaseState_MAX        = 8,
};

enum class EMPMatchOutcome : uint8
{
	None                           = 0,
	Quit                           = 1,
	Won                            = 2,
	Lost                           = 3,
	Tied                           = 4,
	TimeExpired                    = 5,
	First                          = 6,
	Second                         = 7,
	Third                          = 8,
	Fourth                         = 9,
	EMPMatchOutcome_MAX            = 10,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct OnlineSubsystem.NamedInterface
struct FNamedInterface
{
public:
	class FName                                  InterfaceName;                                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DD3[0x4];                                     // Fixing Size After Last Property..
	class UObject*                               InterfaceObject;                                   // 0x8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct OnlineSubsystem.NamedInterfaceDef
struct FNamedInterfaceDef
{
public:
	class FName                                  InterfaceName;                                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DD4[0x4];                                     // Fixing Size After Last Property..
	class FString                                InterfaceClassName;                                // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
