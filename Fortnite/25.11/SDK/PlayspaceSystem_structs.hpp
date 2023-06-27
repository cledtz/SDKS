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

enum class EPlayspaceCreationType : uint8
{
	ChildOfRoot                    = 0,
	RootDestroy                    = 1,
	RootInserted                   = 2,
	RootDoNotClobber               = 3,
	EPlayspaceCreationType_MAX     = 4,
};

enum class EWithinBoundsEvaluationType : uint8
{
	UseOverlaps                    = 0,
	UseBoxBounds                   = 1,
	UseSphereBounds                = 2,
	EWithinBoundsEvaluationType_MAX = 3,
};

enum class EPlayspaceComponentCreationType : uint8
{
	Root                           = 0,
	ByLocation                     = 1,
	ByTags                         = 2,
	EPlayspaceComponentCreationType_MAX = 3,
};

enum class EPlayspaceRootType : uint8
{
	ShouldBeRoot                   = 0,
	ShouldBeClobbered              = 1,
	EPlayspaceRootType_MAX         = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x4C (0x58 - 0xC)
// ScriptStruct PlayspaceSystem.PlayspaceUser
struct FPlayspaceUser : public FFastArraySerializerItem
{
public:
	uint8                                        Pad_363F[0x4];                                     // Fixing Size After Last Property..
	struct FUniqueNetIdRepl                      UserId;                                            // 0x10(0x30)(BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class APlayspace*                            LeafPlayspace;                                     // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class APlayerState*                          PlayerStateCached;                                 // 0x48(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, RepSkip, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AController*                           ControllerCached;                                  // 0x50(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, RepSkip, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct PlayspaceSystem.ReplicatedSpawnInfo
struct FReplicatedSpawnInfo
{
public:
	struct FVector                               SpawnLocation;                                     // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              SpawnRotation;                                     // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        ServerSpawnTime;                                   // 0x30(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3640[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               LastLocation;                                      // 0x38(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinTimeForCameraFadeTransition;                    // 0x50(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3641[0x4];                                     // Fixing Size Of Struct..
};

// 0x98 (0x98 - 0x0)
// ScriptStruct PlayspaceSystem.PlayspaceSpawningInfo
struct FPlayspaceSpawningInfo
{
public:
	struct FUniqueNetIdRepl                      UserId;                                            // 0x0(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class APlayspace>             RequestingPlayspace;                               // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                SpawnLocationActor;                                // 0x38(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SpawnLocation;                                     // 0x40(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              SpawnRotation;                                     // 0x58(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        SpawnTimeServer;                                   // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3642[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               LastLocation;                                      // 0x78(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinTimeForCameraFadeTransition;                    // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsRespawnFromDeath;                               // 0x94(0x1)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3643[0x3];                                     // Fixing Size Of Struct..
};

// 0x90 (0x90 - 0x0)
// ScriptStruct PlayspaceSystem.PlayspaceComponentConfiguration
struct FPlayspaceComponentConfiguration
{
public:
	TSoftClassPtr<class UPlayspaceComponent>     PlayspaceComponentClass;                           // 0x0(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPlayspaceComponentCreationType   CreationType;                                      // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3644[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayTagQuery                     TagQuery;                                          // 0x30(0x48)(Edit, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x78(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct PlayspaceSystem.PlayspaceConfiguration
struct FPlayspaceConfiguration
{
public:
	TSoftClassPtr<class APlayspace>              PlayspaceClass;                                    // 0x0(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPlayspaceCreationType            CreationType;                                      // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3645[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// ScriptStruct PlayspaceSystem.Playspace_ComponentInfo_Base
struct FPlayspace_ComponentInfo_Base
{
public:
	uint8                                        Pad_3646[0x8];                                     // Fixing Size After Last Property..
	bool                                         bCreateOnClient;                                   // 0x8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCreateOnServer;                                   // 0x9(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3647[0x6];                                     // Fixing Size Of Struct..
};

// 0x8 (0x18 - 0x10)
// ScriptStruct PlayspaceSystem.Playspace_ControllerComponentInfo
struct FPlayspace_ControllerComponentInfo : public FPlayspace_ComponentInfo_Base
{
public:
	TSubclassOf<class UControllerComponent>      ComponentClass;                                    // 0x10(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x18 - 0x10)
// ScriptStruct PlayspaceSystem.Playspace_PlayerStateComponentInfo
struct FPlayspace_PlayerStateComponentInfo : public FPlayspace_ComponentInfo_Base
{
public:
	TSubclassOf<class UPlayerStateComponent>     ComponentClass;                                    // 0x10(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x18 - 0x10)
// ScriptStruct PlayspaceSystem.Playspace_ActorComponentInfo
struct FPlayspace_ActorComponentInfo : public FPlayspace_ComponentInfo_Base
{
public:
	TSubclassOf<class UActorComponent>           ComponentClass;                                    // 0x10(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct PlayspaceSystem.ActorOverlapEvent
struct FActorOverlapEvent
{
public:
	class APlayerState*                          PlayerState;                                       // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGameplayVolume*                       Volume;                                            // 0x8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x178 - 0x108)
// ScriptStruct PlayspaceSystem.PlayspaceUserList
struct FPlayspaceUserList : public FFastArraySerializer
{
public:
	TArray<struct FPlayspaceUser>                PlayspaceUsers;                                    // 0x108(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_3648[0x54];                                    // Fixing Size After Last Property..
	bool                                         bIsInitialized;                                    // 0x16C(0x1)(ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3649[0x3];                                     // Fixing Size After Last Property..
	class APlayspace*                            Playspace;                                         // 0x170(0x8)(ZeroConstructor, Transient, RepSkip, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
