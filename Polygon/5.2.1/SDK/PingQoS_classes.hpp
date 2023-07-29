#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x60 - 0x30)
// Class PingQoS.PingQoSSubsystem
class UPingQoSSubsystem : public UEngineSubsystem
{
public:
	FMulticastInlineDelegateProperty_            OnPingCompleted;                                   // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1261[0x8];                                     // Fixing Size After Last Property
	TArray<struct FPingQoSInfo>                  Infos;                                             // 0x48(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1262[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PingQoSSubsystem");
		return Clss;
	}

	bool Update();
	void Recv(TArray<struct FPingQoSInfo>* ResultInfos);
	void Init(const TArray<struct FPingQoSInfo>& SetInfo);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
