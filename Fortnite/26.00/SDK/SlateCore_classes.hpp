#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x30 - 0x28)
// Class SlateCore.SlateWidgetStyleAsset
class USlateWidgetStyleAsset : public UObject
{
public:
	class USlateWidgetStyleContainerBase*        CustomStyle;                                       // 0x28(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USlateWidgetStyleAsset* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class SlateCore.FontBulkData
class UFontBulkData : public UObject
{
public:
	uint8                                        Pad_135[0x50];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFontBulkData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class SlateCore.FontFaceInterface
class UFontFaceInterface : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UFontFaceInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class SlateCore.FontProviderInterface
class UFontProviderInterface : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UFontProviderInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class SlateCore.SlateTypes
class USlateTypes : public UObject
{
public:

	static class UClass* StaticClass();
	static class USlateTypes* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class SlateCore.SlateWidgetStyleContainerBase
class USlateWidgetStyleContainerBase : public UObject
{
public:
	uint8                                        Pad_13C[0x8];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class USlateWidgetStyleContainerBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class SlateCore.SlateWidgetStyleContainerInterface
class USlateWidgetStyleContainerInterface : public UInterface
{
public:

	static class UClass* StaticClass();
	static class USlateWidgetStyleContainerInterface* GetDefaultObj();

};

// 0x998 (0x9C0 - 0x28)
// Class SlateCore.SlateThemeManager
class USlateThemeManager : public UObject
{
public:
	struct FGuid                                 CurrentThemeId;                                    // 0x28(0x10)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStyleColorList                       ActiveColors;                                      // 0x38(0x988)(Edit, Transient, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USlateThemeManager* GetDefaultObj();

};

}


