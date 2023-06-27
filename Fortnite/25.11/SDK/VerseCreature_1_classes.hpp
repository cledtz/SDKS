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

// 0x10 (0xA8 - 0x98)
// Class VerseCreature.CreaturePerceptionComponentBase
class UCreaturePerceptionComponentBase : public UAIComponent
{
public:
	uint8                                        Pad_7E73[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CreaturePerceptionComponentBase");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
