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

// 0x50 (0x50 - 0x0)
// ScriptStruct CosmeticsFrameworkFlowgraph.CosmeticFlowData
struct FCosmeticFlowData
{
public:
	TMap<class FName, struct FInstancedStruct>   NamedData;                                         // 0x0(0x50)(NativeAccessSpecifierPrivate)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CosmeticsFrameworkFlowgraph.OperationSequenceHandle
struct FOperationSequenceHandle
{
public:
	uint8                                        Pad_2326[0x10];                                    // Fixing Size Of Struct
};

}


