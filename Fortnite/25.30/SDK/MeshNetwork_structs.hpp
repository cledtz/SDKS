#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EMeshNetworkNodeType : uint8
{
	Root                           = 0,
	Inner                          = 1,
	Edge                           = 2,
	Client                         = 3,
	Unknown                        = 4,
	EMeshNetworkNodeType_MAX       = 5,
};

enum class EMeshNetworkRelevancy : uint8
{
	NotRelevant                    = 0,
	RelevantToEdgeNodes            = 1,
	RelevantToClients              = 2,
	EMeshNetworkRelevancy_MAX      = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x28 - 0x0)
// ScriptStruct MeshNetwork.AggregatedFunction
struct FAggregatedFunction
{
public:
	class UFunction*                             Function;                                          // 0x0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29B5[0x20];                                    // Fixing Size Of Struct
};

// 0x60 (0x60 - 0x0)
// ScriptStruct MeshNetwork.AggregatedFunctionConfig
struct FAggregatedFunctionConfig
{
public:
	double                                       AggregationTimeout;                                // 0x0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAggregationEnabled;                               // 0x8(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29B8[0x7];                                     // Fixing Size After Last Property
	TSet<class FName>                            NoAggregationParameters;                           // 0x10(0x50)(Edit, EditConst, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// ScriptStruct MeshNetwork.MeshMetaDataStruct
struct FMeshMetaDataStruct
{
public:
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
