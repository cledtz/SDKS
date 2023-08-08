#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

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
	uint8                                        Pad_129E[0x130];                                   // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EpicMediaCDNHostnames");
		return Clss;
	}

	class FString GetSelectedHostName();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
