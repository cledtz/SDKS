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

// 0x20 (0xA0 - 0x80)
// Class OodleNetworkHandlerComponent.OodleNetworkTrainerCommandlet
class UOodleNetworkTrainerCommandlet : public UCommandlet
{
public:
	bool                                         bCompressionTest;                                  // 0x80(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWriteV5Dictionaries;                              // 0x81(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8023[0x2];                                     // Fixing Size After Last Property..
	int32                                        HashTableSize;                                     // 0x84(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DictionarySize;                                    // 0x88(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DictionaryTrials;                                  // 0x8C(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TrialRandomness;                                   // 0x90(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TrialGenerations;                                  // 0x94(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNoTrials;                                         // 0x98(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8024[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OodleNetworkTrainerCommandlet");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
