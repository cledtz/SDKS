#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EActionState : uint8
{
	Preparing                      = 0,
	Running                        = 1,
	Success                        = 2,
	Failure                        = 3,
	Cancelled                      = 4,
	EActionState_MAX               = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// ScriptStruct Actions.ActionsTickGroup
struct FActionsTickGroup
{
public:
	float                                        TickRate;                                          // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TickTimeElapsed;                                   // 0x4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UAction*>                       Actions;                                           // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Actions.RootAction
struct FRootAction
{
public:
	TWeakObjectPtr<class UObject>                Owner;                                             // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UAction*>                       Actions;                                           // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

}


