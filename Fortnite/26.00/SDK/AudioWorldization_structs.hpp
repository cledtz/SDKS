#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ETraceDirection : uint8
{
	N                              = 0,
	E                              = 1,
	S                              = 2,
	W                              = 3,
	None                           = 4,
	ETraceDirection_MAX            = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x68 - 0x0)
// ScriptStruct AudioWorldization.AudioWorldizationSend
struct FAudioWorldizationSend
{
public:
	class USoundSubmix*                          Submix;                                            // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSet<class USoundModulatorBase*>             VolumeModulators;                                  // 0x8(0x50)(Edit, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class USoundEffectSubmixPreset*>      EffectChain;                                       // 0x58(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct AudioWorldization.AudioWorldizationSettings
struct FAudioWorldizationSettings
{
public:
	class FName                                  Identifier;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EF[0x4];                                      // Fixing Size After Last Property 
	TArray<struct FAudioWorldizationSend>        Sends;                                             // 0x8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        TraceRadius;                                       // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TracePoints;                                       // 0x1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TracesPerFrame;                                    // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F3[0x4];                                      // Fixing Size After Last Property 
	struct FVector                               TraceOrigin;                                       // 0x28(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 TraceChannel;                                      // 0x40(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F5[0x7];                                      // Fixing Size After Last Property 
	TSubclassOf<class UAudioWorldizationTracePolicyBase> TracePolicy;                                       // 0x48(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UAudioWorldizationTraceDirectionPolicyBase> TraceDirectionPolicy;                              // 0x50(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct AudioWorldization.AudioWorldizationQuadrantSettings
struct FAudioWorldizationQuadrantSettings
{
public:
	class USoundControlBus*                      WallDistanceBus;                                   // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundControlBus*                      EnclosureBus;                                      // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct AudioWorldization.AudioWorldizationGlobalSettings
struct FAudioWorldizationGlobalSettings
{
public:
	float                                        EffectCrossfadeTime;                               // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F8[0x4];                                      // Fixing Size After Last Property 
	class USoundControlBus*                      EnclosureBus;                                      // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundControlBus*                      WallDistanceBus;                                   // 0x10(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundControlBus*                      ListenerAzimuthBus;                                // 0x18(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAudioWorldizationQuadrantSettings> Quadrants;                                         // 0x20(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct AudioWorldization.AudioSphereTraceResult
struct FAudioSphereTraceResult
{
public:
	bool                                         bBlocking;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FA[0x3];                                      // Fixing Size After Last Property 
	float                                        Distance;                                          // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FB[0x4];                                      // Fixing Size Of Struct
};

}


