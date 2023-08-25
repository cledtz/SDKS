#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class MIDIDevice.MIDIDeviceControllerBase
class UMIDIDeviceControllerBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UMIDIDeviceControllerBase* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class MIDIDevice.MIDIDeviceController
class UMIDIDeviceController : public UMIDIDeviceControllerBase
{
public:
	FMulticastInlineDelegateProperty_            OnMIDIEvent;                                       // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int32                                        DeviceID;                                          // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2922[0x4];                                     // Fixing Size After Last Property 
	class FString                                DeviceName;                                        // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2923[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UMIDIDeviceController* GetDefaultObj();

};

// 0xB0 (0xD8 - 0x28)
// Class MIDIDevice.MIDIDeviceInputController
class UMIDIDeviceInputController : public UMIDIDeviceControllerBase
{
public:
	FMulticastInlineDelegateProperty_            OnMIDINoteOn;                                      // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMIDINoteOff;                                     // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMIDIPitchBend;                                   // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMIDIAftertouch;                                  // 0x58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMIDIControlChange;                               // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMIDIProgramChange;                               // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMIDIChannelAftertouch;                           // 0x88(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_292B[0x18];                                    // Fixing Size After Last Property 
	int32                                        DeviceID;                                          // 0xB0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_292C[0x4];                                     // Fixing Size After Last Property 
	class FString                                DeviceName;                                        // 0xB8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_292D[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UMIDIDeviceInputController* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MIDIDevice.MIDIDeviceManager
class UMIDIDeviceManager : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMIDIDeviceManager* GetDefaultObj();

	void ShutDownAllMIDIDevices();
	void GetMIDIOutputDeviceIDByName(const class FString& DeviceName, int32* DeviceID);
	void GetMIDIInputDeviceIDByName(const class FString& DeviceName, int32* DeviceID);
	void GetDefaultMIDIOutputDeviceID(int32* DeviceID);
	void GetDefaultMIDIInputDeviceID(int32* DeviceID);
	void FindMIDIDevices(TArray<struct FFoundMIDIDevice>* OutMIDIDevices);
	void FindAllMIDIDeviceInfo(TArray<struct FMIDIDeviceInfo>* OutMIDIInputDevices, TArray<struct FMIDIDeviceInfo>* OutMIDIOutputDevices);
	class UMIDIDeviceOutputController* CreateMIDIDeviceOutputController(int32 DeviceID);
	class UMIDIDeviceInputController* CreateMIDIDeviceInputController(int32 DeviceID, int32 MIDIBufferSize);
	class UMIDIDeviceController* CreateMIDIDeviceController(int32 DeviceID, int32 MIDIBufferSize);
};

// 0x20 (0x48 - 0x28)
// Class MIDIDevice.MIDIDeviceOutputController
class UMIDIDeviceOutputController : public UMIDIDeviceControllerBase
{
public:
	int32                                        DeviceID;                                          // 0x28(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_29B2[0x4];                                     // Fixing Size After Last Property 
	class FString                                DeviceName;                                        // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_29B9[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UMIDIDeviceOutputController* GetDefaultObj();

	void SendMIDIProgramChange(int32 Channel, int32 ProgramNumber);
	void SendMIDIPitchBend(int32 Channel, int32 Pitch);
	void SendMIDINoteOn(int32 Channel, int32 Note, int32 Velocity);
	void SendMIDINoteOff(int32 Channel, int32 Note, int32 Velocity);
	void SendMIDINoteAftertouch(int32 Channel, int32 Note, float Amount);
	void SendMIDIEvent(enum class EMIDIEventType EventType, int32 Channel, int32 Data1, int32 Data2);
	void SendMIDIControlChange(int32 Channel, int32 Type, int32 Value);
	void SendMIDIChannelAftertouch(int32 Channel, float Amount);
};

}


