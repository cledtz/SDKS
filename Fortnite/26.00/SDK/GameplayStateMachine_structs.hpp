#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x28 - 0x0)
// ScriptStruct GameplayStateMachine.GameplayStateTransition
struct FGameplayStateTransition
{
public:
	struct FGameplayTagContainer                 TransitionConditionTags;                           // 0x0(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTag                          TransitionStateTag;                                // 0x20(0x4)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BeginStateDelay;                                   // 0x24(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GameplayStateMachine.GameplayStateSettings
struct FGameplayStateSettings
{
public:
	TSubclassOf<class UGameplayState>            StateClass;                                        // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          StateId;                                           // 0x8(0x4)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_43F0[0x4];                                     // Fixing Size After Last Property 
	TArray<struct FGameplayStateTransition>      StateTransitions;                                  // 0x10(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GameplayStateMachine.ActiveGameplayStateData
struct FActiveGameplayStateData
{
public:
	class UGameplayState*                        GameplayState;                                     // 0x0(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                          PreviousStateId;                                   // 0x8(0x4)(Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BeginStateDelay;                                   // 0xC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        InitializationTime;                                // 0x10(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_43F2[0x4];                                     // Fixing Size Of Struct
};

// 0x14 (0x20 - 0xC)
// ScriptStruct GameplayStateMachine.GameplayStateMachineItem
struct FGameplayStateMachineItem : public FFastArraySerializerItem
{
public:
	uint8                                        Pad_43F4[0x4];                                     // Fixing Size After Last Property 
	class UGameplayStateMachine*                 StateMachine;                                      // 0x10(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BeginStateDelay;                                   // 0x18(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        InitializationTime;                                // 0x1C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x18 (0x120 - 0x108)
// ScriptStruct GameplayStateMachine.GameplayStateMachineArray
struct FGameplayStateMachineArray : public FFastArraySerializer
{
public:
	class UGameplayStateMachineManager*          StateMachineManager;                               // 0x108(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, RepSkip, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGameplayStateMachineItem>     StateMachineItems;                                 // 0x110(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
};

}


