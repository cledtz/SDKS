#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ELaserConnectionState : uint8
{
	Off                            = 0,
	TransitionOn                   = 1,
	On                             = 2,
	TransitionOff                  = 3,
	ELaserConnectionState_MAX      = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x2 (0x2 - 0x0)
// ScriptStruct LaserGameplayRuntime.LaserOutletConnection
struct FLaserOutletConnection
{
public:
	uint8                                        PrimaryOutletIndex;                                // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        SecondaryOutletIndex;                              // 0x1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0xC (0x18 - 0xC)
// ScriptStruct LaserGameplayRuntime.LaserGridConnectionEntry
struct FLaserGridConnectionEntry : public FFastArraySerializerItem
{
public:
	struct FLaserOutletConnection                OutletConnection;                                  // 0xC(0x2)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	enum class ELaserConnectionState             State;                                             // 0xE(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3AA7[0x1];                                     // Fixing Size After Last Property 
	class ULaserCapsuleComponent*                LaserCapsuleComponent;                             // 0x10(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, RepSkip, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x10 (0x118 - 0x108)
// ScriptStruct LaserGameplayRuntime.LaserGridConnectionArray
struct FLaserGridConnectionArray : public FFastArraySerializer
{
public:
	TArray<struct FLaserGridConnectionEntry>     Entries;                                           // 0x108(0x10)(ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x4 (0x10 - 0xC)
// ScriptStruct LaserGameplayRuntime.LaserGridOutletEntry
struct FLaserGridOutletEntry : public FFastArraySerializerItem
{
public:
	uint8                                        InstanceIndex;                                     // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ELaserConnectionState             State;                                             // 0xD(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3AA9[0x2];                                     // Fixing Size Of Struct
};

// 0x18 (0x120 - 0x108)
// ScriptStruct LaserGameplayRuntime.LaserGridOutletArray
struct FLaserGridOutletArray : public FFastArraySerializer
{
public:
	TArray<struct FLaserGridOutletEntry>         Entries;                                           // 0x108(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AAB[0x8];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// ScriptStruct LaserGameplayRuntime.LaserGridPattern
struct FLaserGridPattern
{
public:
	TArray<struct FLaserOutletConnection>        OutletConnections;                                 // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AAC[0x4];                                     // Fixing Size Of Struct
};

}


