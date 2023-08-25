#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ENetworkPredictionTickingPolicy : uint8
{
	Independent                    = 1,
	Fixed                          = 2,
	All                            = 3,
	ENetworkPredictionTickingPolicy_MAX = 4,
};

enum class ENetworkLOD : uint8
{
	Interpolated                   = 1,
	SimExtrapolate                 = 2,
	ForwardPredict                 = 4,
	All                            = 7,
	ENetworkLOD_MAX                = 8,
};

enum class ENetworkPredictionStateRead : uint8
{
	Simulation                     = 0,
	Presentation                   = 1,
	ENetworkPredictionStateRead_MAX = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xB0 (0xB0 - 0x0)
// ScriptStruct NetworkPrediction.NetworkPredictionProxy
struct FNetworkPredictionProxy
{
public:
	uint8                                        Pad_1C5F[0xA0];                                    // Fixing Size After Last Property 
	class UNetworkPredictionWorldManager*        WorldManager;                                      // 0xA0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1C60[0x8];                                     // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NetworkPrediction.SharedPackageMapItem
struct FSharedPackageMapItem
{
public:
	TSoftObjectPtr<class UObject>                SoftPtr;                                           // 0x0(0x20)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NetworkPrediction.SharedPackageMap
struct FSharedPackageMap
{
public:
	TArray<struct FSharedPackageMapItem>         Items;                                             // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct NetworkPrediction.ReplicationProxy
struct FReplicationProxy
{
public:
	uint8                                        Pad_1C63[0x50];                                    // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NetworkPrediction.ServerReplicationRPCParameter
struct FServerReplicationRPCParameter
{
public:
	uint8                                        Pad_1C65[0x18];                                    // Fixing Size Of Struct
};

// 0x30 (0x30 - 0x0)
// ScriptStruct NetworkPrediction.NetworkPredictionSettings
struct FNetworkPredictionSettings
{
public:
	enum class ENetworkPredictionTickingPolicy   PreferredTickingPolicy;                            // 0x0(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C66[0x7];                                     // Fixing Size After Last Property 
	TSubclassOf<class UNetworkPredictionReplicatedManager> ReplicatedManagerClassOverride;                    // 0x8(0x8)(Edit, ZeroConstructor, Config, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FixedTickFrameRate;                                // 0x10(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceEngineFixTickForcePhysics;                   // 0x14(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENetworkLOD                       SimulatedProxyNetworkLOD;                          // 0x15(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C67[0x2];                                     // Fixing Size After Last Property 
	int32                                        FixedTickInterpolationBufferedMS;                  // 0x18(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IndependentTickInterpolationBufferedMS;            // 0x1C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IndependentTickInterpolationMaxBufferedMS;         // 0x20(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FixedTickInputSendCount;                           // 0x24(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IndependentTickInputSendCount;                     // 0x28(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaximumRemoteInputFaultLimit;                      // 0x2C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct NetworkPrediction.NetworkPredictionDevHUDItem
struct FNetworkPredictionDevHUDItem
{
public:
	class FString                                DisplayName;                                       // 0x0(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ExecCommand;                                       // 0x10(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoBack;                                         // 0x20(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRequirePIE;                                       // 0x21(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRequireNotPIE;                                    // 0x22(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C6B[0x5];                                     // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// ScriptStruct NetworkPrediction.NetworkPredictionDevHUD
struct FNetworkPredictionDevHUD
{
public:
	class FString                                HUDName;                                           // 0x0(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNetworkPredictionDevHUDItem>  Items;                                             // 0x10(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	bool                                         bRequirePIE;                                       // 0x20(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRequireNotPIE;                                    // 0x21(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C6D[0x6];                                     // Fixing Size Of Struct
};

}


