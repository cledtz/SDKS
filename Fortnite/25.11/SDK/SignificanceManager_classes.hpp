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

// 0x110 (0x138 - 0x28)
// Class SignificanceManager.SignificanceManager
class USignificanceManager : public UObject
{
public:
	uint8                                        Pad_3E5D[0xF8];                                    // Fixing Size After Last Property..
	struct FSoftClassPath                        SignificanceManagerClassName;                      // 0x120(0x18)(Edit, ZeroConstructor, Config, GlobalConfig, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SignificanceManager");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
