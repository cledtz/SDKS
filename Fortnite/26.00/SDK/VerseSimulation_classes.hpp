#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x30 - 0x28)
// Class VerseSimulation.VerseAgent
class UVerseAgent : public UVersePersistentVarWeakMapKey
{
public:
	TWeakObjectPtr<class UController>            Controller;                                        // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UVerseAgent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class VerseSimulation.VerseTeam
class UVerseTeam : public UObject
{
public:

	static class UClass* StaticClass();
	static class UVerseTeam* GetDefaultObj();

};

// 0x60 (0x90 - 0x30)
// Class VerseSimulation.VerseSimulationSubsystem
class UVerseSimulationSubsystem : public UWorldSubsystem
{
public:
	TMap<TWeakObjectPtr<class UController>, class UVerseAgent*> TrackedAgents;                                     // 0x30(0x50)(Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2C9D[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UVerseSimulationSubsystem* GetDefaultObj();

};

}


