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
	uint8                                        Pad_374C[0x10];                                    // Fixing Size Of Struct..
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
