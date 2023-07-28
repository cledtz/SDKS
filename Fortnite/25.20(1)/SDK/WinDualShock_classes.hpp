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
// Class WinDualShock.DualShockExternalEndpointSettings
class UDualShockExternalEndpointSettings : public UAudioEndpointSettingsBase
{
public:
	int32                                        ControllerIndex;                                   // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_462F[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DualShockExternalEndpointSettings");
		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class WinDualShock.DualShockSoundfieldEndpointSettings
class UDualShockSoundfieldEndpointSettings : public USoundfieldEndpointSettingsBase
{
public:
	int32                                        ControllerIndex;                                   // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4630[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DualShockSoundfieldEndpointSettings");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class WinDualShock.DualShockSpatializationSettings
class UDualShockSpatializationSettings : public USoundfieldEncodingSettingsBase
{
public:
	float                                        Spread;                                            // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Priority;                                          // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PassThrough;                                       // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4631[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DualShockSpatializationSettings");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
