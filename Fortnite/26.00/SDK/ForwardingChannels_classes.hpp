#pragma once

// Dumped with Dumper-7!


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

	static class UClass* StaticClass();
	static class UForwardingChannelFactory* GetDefaultObj();

};

// 0x68 (0x98 - 0x30)
// Class ForwardingChannels.ForwardingChannelsSubsystem
class UForwardingChannelsSubsystem : public UGameInstanceSubsystem
{
public:
	TArray<TScriptInterface<class UForwardingChannelFactory>> ForwardingChannelFactories;                        // 0x30(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2534[0x58];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UForwardingChannelsSubsystem* GetDefaultObj();

};

}


