#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x140 (0x168 - 0x28)
// Class EpicMediaCDNHostnames.EpicMediaCDNHostnames
class UEpicMediaCDNHostnames : public UObject
{
public:
	TArray<float>                                CDNDistribution;                                   // 0x28(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E8F[0x130];                                   // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UEpicMediaCDNHostnames* GetDefaultObj();

	class FString GetSelectedHostName();
};

}


