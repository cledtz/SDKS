#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ENiagaraIterationSource : uint8
{
	Particles                      = 0,
	DataInterface                  = 1,
	DirectSet                      = 2,
	ENiagaraIterationSource_MAX    = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct NiagaraCore.NiagaraVariableCommonReference
struct FNiagaraVariableCommonReference
{
public:
	class FName                                  Name;                                              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17A1[0x4];                                     // Fixing Size After Last Property 
	class UObject*                               UnderlyingType;                                    // 0x8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NiagaraCore.NiagaraCompileHash
struct FNiagaraCompileHash
{
public:
	TArray<uint8>                                DataHash;                                          // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

}


