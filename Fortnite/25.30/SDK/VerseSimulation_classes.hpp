#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

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

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseAgent");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class VerseSimulation.VerseTeam
class UVerseTeam : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseTeam");
		return Clss;
	}

};

// 0x60 (0x90 - 0x30)
// Class VerseSimulation.VerseSimulationSubsystem
class UVerseSimulationSubsystem : public UWorldSubsystem
{
public:
	TMap<TWeakObjectPtr<class UController>, class UVerseAgent*> TrackedAgents;                                     // 0x30(0x50)(Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2882[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseSimulationSubsystem");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
