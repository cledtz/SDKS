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

// 0x20 (0x48 - 0x28)
// Class WaveTable.WaveTableBank
class UWaveTableBank : public UObject
{
public:
	uint8                                        Pad_1A8D[0x8];                                     // Fixing Size After Last Property..
	enum class EWaveTableResolution              Resolution;                                        // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBipolar;                                          // 0x31(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A8E[0x6];                                     // Fixing Size After Last Property..
	TArray<struct FWaveTableBankEntry>           Entries;                                           // 0x38(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WaveTableBank");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
