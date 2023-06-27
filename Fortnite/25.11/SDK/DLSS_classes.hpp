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
// Class DLSS.DLSSOverrideSettings
class UDLSSOverrideSettings : public UObject
{
public:
	enum class EDLSSSettingOverride              EnableDLSSInEditorViewportsOverride;               // 0x28(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDLSSSettingOverride              EnableDLSSInPlayInEditorViewportsOverride;         // 0x29(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowDLSSIncompatiblePluginsToolsWarnings;         // 0x2A(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDLSSSettingOverride              ShowDLSSSDebugOnScreenMessages;                    // 0x2B(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2321[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DLSSOverrideSettings");
		return Clss;
	}

};

// 0x38 (0x60 - 0x28)
// Class DLSS.DLSSSettings
class UDLSSSettings : public UObject
{
public:
	bool                                         bEnableDLSSD3D12;                                  // 0x28(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableDLSSD3D11;                                  // 0x29(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableDLSSVulkan;                                 // 0x2A(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableDLSSInEditorViewports;                      // 0x2B(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableDLSSInPlayInEditorViewports;                // 0x2C(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowDLSSSDebugOnScreenMessages;                   // 0x2D(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2322[0x2];                                     // Fixing Size After Last Property..
	class FString                                GenericDLSSBinaryPath;                             // 0x30(0x10)(Edit, ZeroConstructor, Config, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGenericDLSSBinaryExists;                          // 0x40(0x1)(Edit, ZeroConstructor, Config, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2323[0x3];                                     // Fixing Size After Last Property..
	uint32                                       NVIDIANGXApplicationId;                            // 0x44(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CustomDLSSBinaryPath;                              // 0x48(0x10)(Edit, ZeroConstructor, Config, EditConst, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCustomDLSSBinaryExists;                           // 0x58(0x1)(Edit, ZeroConstructor, Config, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2324[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DLSSSettings");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
