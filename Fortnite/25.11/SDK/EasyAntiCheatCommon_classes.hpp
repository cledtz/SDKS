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

// 0x8 (0xA8 - 0xA0)
// Class EasyAntiCheatCommon.EasyAntiCheatNetComponent
class UEasyAntiCheatNetComponent : public UActorComponent
{
public:
	uint8                                        Pad_40C4[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EasyAntiCheatNetComponent");
		return Clss;
	}

	void ServerMessage(TArray<uint8>& Message);
	void ClientMessage(TArray<uint8>& Message);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
