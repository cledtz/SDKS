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

// 0x8 (0x30 - 0x28)
// Class VerseSimulation.VerseAgent
class UVerseAgent : public UObject
{
public:
	TWeakObjectPtr<class AController>            Controller;                                        // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

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

// 0x50 (0x80 - 0x30)
// Class VerseSimulation.VerseSimulationSubsystem
class UVerseSimulationSubsystem : public UWorldSubsystem
{
public:
	TMap<TWeakObjectPtr<class AController>, class UVerseAgent*> TrackedAgents;                                     // 0x30(0x50)(Transient, UObjectWrapper, NativeAccessSpecifierPrivate)

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
