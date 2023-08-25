#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EActivityBrowserTileStyle : uint8
{
	Default                        = 0,
	Minimal                        = 1,
	Detailed                       = 2,
	EActivityBrowserTileStyle_MAX  = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0xA8 - 0x0)
// ScriptStruct DiscoveryBrowserUI.ColorSchemeParamaterValues
struct FColorSchemeParamaterValues
{
public:
	class UMaterialParameterCollection*          AlternateMaterialCollection;                       // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, float>                     ScalarParameterValues;                             // 0x8(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMap<class FName, struct FLinearColor>       VectorParameterValues;                             // 0x58(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

}


