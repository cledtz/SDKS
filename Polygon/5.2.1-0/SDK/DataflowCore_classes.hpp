#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0xE0 - 0x38)
// Class DataflowCore.DataflowSettings
class UDataflowSettings : public UDeveloperSettings
{
public:
	struct FLinearColor                          ArrayPinTypeColor;                                 // 0x38(0x10)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ManagedArrayCollectionPinTypeColor;                // 0x48(0x10)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          BoxPinTypeColor;                                   // 0x58(0x10)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          SpherePinTypeColor;                                // 0x68(0x10)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, struct FNodeColors>        NodeColorsMap;                                     // 0x78(0x50)(Edit, Config, NativeAccessSpecifierPublic)
	uint8                                        Pad_22FC[0x18];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UDataflowSettings* GetDefaultObj();

};

}


