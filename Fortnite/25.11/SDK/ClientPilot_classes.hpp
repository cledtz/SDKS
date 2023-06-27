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

// 0x50 (0x78 - 0x28)
// Class ClientPilot.ClientPilotBlackboard
class UClientPilotBlackboard : public UObject
{
public:
	uint8                                        Pad_42CF[0x50];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ClientPilotBlackboard");
		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class ClientPilot.ClientPilotBlackboardManager
class UClientPilotBlackboardManager : public UObject
{
public:
	class UClientPilotBlackboard*                PilotBlackboard;                                   // 0x28(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ClientPilotBlackboardManager");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class ClientPilot.ClientPilotComponent
class UClientPilotComponent : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ClientPilotComponent");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
