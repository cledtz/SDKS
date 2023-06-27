#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x88 - 0x30)
// Class OptimusSettings.OptimusSettings
class UOptimusSettings : public UDeveloperSettings
{
public:
	enum class EOptimusDefaultDeformerMode       DefaultMode;                                       // 0x30(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_799C[0x7];                                     // Fixing Size After Last Property..
	TSoftObjectPtr<class UMeshDeformer>          DefaultDeformer;                                   // 0x38(0x28)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMeshDeformer>          DefaultRecomputeTangentDeformer;                   // 0x60(0x28)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusSettings");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
