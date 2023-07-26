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

// 0x0 (0x28 - 0x28)
// Class ForwardingChannels.ForwardingChannelFactory
class UForwardingChannelFactory : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ForwardingChannelFactory");
		return Clss;
	}

};

// 0x68 (0x98 - 0x30)
// Class ForwardingChannels.ForwardingChannelsSubsystem
class UForwardingChannelsSubsystem : public UGameInstanceSubsystem
{
public:
	TArray<FInterfaceProperty_>                  ForwardingChannelFactories;                        // 0x30(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_44F1[0x58];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ForwardingChannelsSubsystem");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
