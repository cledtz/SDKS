#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xA0 - 0x90)
// Class VerseCreature.CreaturePerceptionComponentBase
class UCreaturePerceptionComponentBase : public UAIComponent
{
public:
	uint8                                        Pad_358B[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UCreaturePerceptionComponentBase* GetDefaultObj();

};

}


