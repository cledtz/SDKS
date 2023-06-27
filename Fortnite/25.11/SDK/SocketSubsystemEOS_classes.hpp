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

// 0x8 (0x1E88 - 0x1E80)
// Class SocketSubsystemEOS.NetConnectionEOS
class UNetConnectionEOS : public UIpConnection
{
public:
	uint8                                        Pad_8693[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NetConnectionEOS");
		return Clss;
	}

};

// 0x8 (0x870 - 0x868)
// Class SocketSubsystemEOS.NetDriverEOSBase
class UNetDriverEOSBase : public UIpNetDriver
{
public:
	bool                                         bIsPassthrough;                                    // 0x868(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsUsingP2PSockets;                                // 0x869(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8694[0x6];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NetDriverEOSBase");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
