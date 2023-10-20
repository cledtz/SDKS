#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0xA0 - 0x38)
// Class OptimusSettings.OptimusSettings
class UOptimusSettings : public UDeveloperSettings
{
public:
	enum class EOptimusDefaultDeformerMode       DefaultMode;                                       // 0x38(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ABB[0x7];                                      // Fixing Size After Last Property 
	TSoftObjectPtr<class UMeshDeformer>          DefaultDeformer;                                   // 0x40(0x30)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMeshDeformer>          DefaultRecomputeTangentDeformer;                   // 0x70(0x30)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UOptimusSettings* GetDefaultObj();

};

}


