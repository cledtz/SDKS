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

// 0x180 (0x220 - 0xA0)
// Class UACCommon.UACNetworkComponent
class UUACNetworkComponent : public UActorComponent
{
public:
	int32                                        PlayerId;                                          // 0xA0(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_460D[0x17C];                                   // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UACNetworkComponent");
		return Clss;
	}

	void SendPacketToServer(uint8 EnhPacketType, TArray<uint8>& Data);
	void SendPacketToClient(uint8 EnhPacketType, TArray<uint8>& Data);
	void SendClientHello(uint32 SessionKey);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
