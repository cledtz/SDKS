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

// 0x8 (0x498 - 0x490)
// Class CRD_HSRuntime.FortAthenaMutator_HenchmanSpawner
class AFortAthenaMutator_HenchmanSpawner : public AFortAthenaMutator_GameModeBase
{
public:
	uint8                                        Pad_811F[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaMutator_HenchmanSpawner");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
