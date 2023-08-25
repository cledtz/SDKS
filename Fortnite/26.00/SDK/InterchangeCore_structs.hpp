#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EInterchangeFactoryAssetType : uint8
{
	None                           = 0,
	Textures                       = 1,
	Materials                      = 2,
	Meshes                         = 3,
	Animations                     = 4,
	Physics                        = 5,
	EInterchangeFactoryAssetType_MAX = 6,
};

enum class EInterchangePipelineTask : uint8
{
	PostTranslator                 = 0,
	PostFactory                    = 1,
	PostImport                     = 2,
	Export                         = 3,
	EInterchangePipelineTask_MAX   = 4,
};

enum class EInterchangePipelineContext : uint8
{
	None                           = 0,
	AssetImport                    = 1,
	AssetReimport                  = 2,
	SceneImport                    = 3,
	SceneReimport                  = 4,
	AssetCustomLODImport           = 5,
	AssetCustomLODReimport         = 6,
	AssetAlternateSkinningImport   = 7,
	AssetAlternateSkinningReimport = 8,
	EInterchangePipelineContext_MAX = 9,
};

enum class EInterchangeResultType : uint8
{
	Success                        = 0,
	Warning                        = 1,
	Error                          = 2,
	EInterchangeResultType_MAX     = 3,
};

enum class EInterchangeTranslatorType : uint8
{
	Invalid                        = 0,
	Assets                         = 2,
	Actors                         = 4,
	Scenes                         = 6,
	EInterchangeTranslatorType_MAX = 7,
};

enum class EInterchangeTranslatorAssetType : uint8
{
	None                           = 0,
	Textures                       = 1,
	Materials                      = 2,
	Meshes                         = 4,
	Animations                     = 8,
	EInterchangeTranslatorAssetType_MAX = 9,
};

enum class EInterchangeNodeContainerType : uint8
{
	None                           = 0,
	TranslatedScene                = 1,
	TranslatedAsset                = 2,
	FactoryData                    = 3,
	EInterchangeNodeContainerType_MAX = 4,
};

enum class EReimportStrategyFlags : uint8
{
	ApplyNoProperties              = 0,
	ApplyPipelineProperties        = 1,
	ApplyEditorChangedProperties   = 2,
	EReimportStrategyFlags_MAX     = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// ScriptStruct InterchangeCore.InterchangePipelinePropertyStatePerContext
struct FInterchangePipelinePropertyStatePerContext
{
public:
	bool                                         bVisible;                                          // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// ScriptStruct InterchangeCore.InterchangePipelinePropertyStates
struct FInterchangePipelinePropertyStates
{
public:
	bool                                         bLocked;                                           // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInterchangePipelinePropertyStatePerContext ImportStates;                                      // 0x1(0x1)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FInterchangePipelinePropertyStatePerContext ReimportStates;                                    // 0x2(0x1)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct InterchangeCore.InterchangeUserDefinedAttributeInfo
struct FInterchangeUserDefinedAttributeInfo
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2EFA[0x20];                                    // Fixing Size Of Struct
};

}


