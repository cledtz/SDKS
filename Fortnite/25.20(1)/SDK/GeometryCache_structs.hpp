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

// 0xC0 (0xC0 - 0x0)
// ScriptStruct GeometryCache.TrackRenderData
struct FTrackRenderData
{
public:
	uint8                                        Pad_8285[0xC0];                                    // Fixing Size Of Struct..
};

// 0xC (0xC - 0x0)
// ScriptStruct GeometryCache.GeometryCacheMeshBatchInfo
struct FGeometryCacheMeshBatchInfo
{
public:
	uint8                                        Pad_8286[0xC];                                     // Fixing Size Of Struct..
};

// 0x9 (0x9 - 0x0)
// ScriptStruct GeometryCache.GeometryCacheVertexInfo
struct FGeometryCacheVertexInfo
{
public:
	uint8                                        Pad_8287[0x9];                                     // Fixing Size Of Struct..
};

// 0xC8 (0xC8 - 0x0)
// ScriptStruct GeometryCache.GeometryCacheMeshData
struct FGeometryCacheMeshData
{
public:
	uint8                                        Pad_8288[0xC8];                                    // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GeometryCache.NiagaraGeometryCacheMICOverride
struct FNiagaraGeometryCacheMICOverride
{
public:
	class UMaterialInterface*                    OriginalMaterial;                                  // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceConstant*             ReplacementMaterial;                               // 0x8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct GeometryCache.NiagaraGeometryCacheReference
struct FNiagaraGeometryCacheReference
{
public:
	class UGeometryCache*                        GeometryCache;                                     // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraUserParameterBinding          GeometryCacheUserParamBinding;                     // 0x8(0x18)(Edit, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>            OverrideMaterials;                                 // 0x20(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraGeometryCacheMICOverride> MICOverrideMaterials;                              // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
