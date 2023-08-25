#pragma once

// Dumped with Dumper-7!


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
	uint8                                        Pad_F30[0x17C];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UUACNetworkComponent* GetDefaultObj();

	void SendPacketToServer(uint8 EnhPacketType, TArray<uint8>& Data);
	void SendPacketToClient(uint8 EnhPacketType, TArray<uint8>& Data);
	void SendClientHello(uint32 SessionKey);
};

}


