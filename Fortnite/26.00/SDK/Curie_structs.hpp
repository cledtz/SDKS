#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ECurieHandlerBehavior : uint8
{
	Handler_Add                    = 0,
	Handler_Replace                = 1,
	Handler_MAX                    = 2,
};

enum class ECurieHandlerPriority : uint8
{
	Priority_1                     = 1,
	Priority_2                     = 2,
	Priority_3                     = 3,
	Priority_4                     = 4,
	Priority_5                     = 5,
	Priority_6                     = 6,
	Priority_7                     = 7,
	Priority_8                     = 8,
	Priority_9                     = 9,
	Priority_10                    = 10,
	Priority_Default               = 11,
	Priority_MAX                   = 12,
};

enum class ECurieManagerComponentPriority : uint8
{
	Priority_1                     = 1,
	Priority_2                     = 2,
	Priority_3                     = 3,
	Priority_4                     = 4,
	Priority_5                     = 5,
	Priority_6                     = 6,
	Priority_7                     = 7,
	Priority_8                     = 8,
	Priority_9                     = 9,
	Priority_10                    = 10,
	Priority_Default               = 11,
	Priority_MAX                   = 12,
};

enum class ECurieEntityType : uint8
{
	Invalid                        = 0,
	Material                       = 1,
	Element                        = 2,
	ECurieEntityType_MAX           = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x4 - 0x0)
// ScriptStruct Curie.CurieContainerHandle
struct FCurieContainerHandle
{
public:
	uint8                                        Pad_1A45[0x4];                                     // Fixing Size Of Struct
};

// 0x80 (0x88 - 0x8)
// ScriptStruct Curie.CurieMaterialDefinitionBase
struct FCurieMaterialDefinitionBase : public FTableRowBase
{
public:
	struct FGameplayTagContainer                 ElementalImmunities;                               // 0x8(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                 ElementAttachmentImmunities;                       // 0x28(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                 ElementsAllowedWhenCannotBeDamaged;                // 0x48(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                 MaterialProperties;                                // 0x68(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
};

// 0x78 (0x80 - 0x8)
// ScriptStruct Curie.CurieElementDefinitionBase
struct FCurieElementDefinitionBase : public FTableRowBase
{
public:
	TSubclassOf<class UCurieElementAllocationHandler> ElementAllocationHandler;                          // 0x8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoClear, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<TSubclassOf<class UCurieElementAttachHandler>> ElementAttachHandlers;                             // 0x10(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TSubclassOf<class UCurieElementAttachConditionHandler> ElementAttachConditionHandler;                     // 0x20(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<TSubclassOf<class UCurieElementInteractWithElementHandler>> ElementInteractHandlers;                           // 0x28(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<TSubclassOf<class UCurieElementInteractWithMaterialHandler>> ElementMaterialInteractHandlers;                   // 0x38(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<TSubclassOf<class UCurieElementInteractWithContainerHandler>> ElementContainerInteractHandlers;                  // 0x48(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 ElementalImmunities;                               // 0x58(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                        bIsEnabled : 1;                                    // Mask: 0x1, PropSize: 0x10x78(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A4B[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x18 - 0x8)
// ScriptStruct Curie.CurieEntityStateDefinitionBase
struct FCurieEntityStateDefinitionBase : public FTableRowBase
{
public:
	TSubclassOf<class UCurieEntityStateBehavior> StateBehaviorClass;                                // 0x8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bIsEnabled : 1;                                    // Mask: 0x1, PropSize: 0x10x10(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1A4C[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Curie.CurieElementAttachHandlersContainer
struct FCurieElementAttachHandlersContainer
{
public:
	TArray<class UCurieElementAttachHandler*>    Handlers;                                          // 0x0(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Curie.CurieElementAttachConditionHandlersContainer
struct FCurieElementAttachConditionHandlersContainer
{
public:
	TArray<class UCurieElementAttachConditionHandler*> Handlers;                                          // 0x0(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Curie.CurieElementInteractWithElementHandlersContainer
struct FCurieElementInteractWithElementHandlersContainer
{
public:
	TArray<class UCurieElementInteractWithElementHandler*> Handlers;                                          // 0x0(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Curie.CurieElementInteractWithMaterialHandlersContainer
struct FCurieElementInteractWithMaterialHandlersContainer
{
public:
	TArray<class UCurieElementInteractWithMaterialHandler*> Handlers;                                          // 0x0(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Curie.CurieElementInteractWithContainerHandlersContainer
struct FCurieElementInteractWithContainerHandlersContainer
{
public:
	TArray<class UCurieElementInteractWithContainerHandler*> Handlers;                                          // 0x0(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Curie.CurieInteractParamsHandle
struct FCurieInteractParamsHandle
{
public:
	uint8                                        Pad_1A57[0x10];                                    // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Curie.CurieElementPairKey
struct FCurieElementPairKey
{
public:
	uint8                                        Pad_1A58[0x8];                                     // Fixing Size Of Struct
};

// 0x18 (0x20 - 0x8)
// ScriptStruct Curie.CurieManagerComponentEntry
struct FCurieManagerComponentEntry : public FTableRowBase
{
public:
	bool                                         bIsActive;                                         // 0x8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ECurieManagerComponentPriority    Priority;                                          // 0x9(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1A60[0x6];                                     // Fixing Size After Last Property 
	TSubclassOf<class UCurieManagerComponent>    ManagerType;                                       // 0x10(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurieManagerComponentConfig*          Config;                                            // 0x18(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Curie.CurieInteractHandle
struct FCurieInteractHandle
{
public:
	uint8                                        Pad_1A64[0x4];                                     // Fixing Size Of Struct
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Curie.CurieEffectContainer
struct FCurieEffectContainer
{
public:
	struct FGameplayTagQuery                     TargetFilter;                                      // 0x0(0x48)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TSubclassOf<class UGameplayEffect>           GameplayEffect;                                    // 0x48(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Curie.CurieStateHandle
struct FCurieStateHandle
{
public:
	uint8                                        Pad_1A69[0x4];                                     // Fixing Size Of Struct
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Curie.CurieElementHandle
struct FCurieElementHandle
{
public:
	uint8                                        Pad_1A6A[0x4];                                     // Fixing Size Of Struct
};

}


