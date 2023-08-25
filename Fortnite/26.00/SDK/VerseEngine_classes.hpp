#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x80 - 0x28)
// Class VerseEngine.ContentScopeRepository
class UContentScopeRepository : public UObject
{
public:
	uint8                                        Pad_134[0x58];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UContentScopeRepository* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class VerseEngine.VerseWorldSubsystem
class UVerseWorldSubsystem : public UWorldSubsystem
{
public:
	uint8                                        Pad_138[0x8];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UVerseWorldSubsystem* GetDefaultObj();

};

}


