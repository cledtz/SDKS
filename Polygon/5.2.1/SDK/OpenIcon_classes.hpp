#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x390 - 0x338)
// Class OpenIcon.CustomIcon
class UCustomIcon : public UTextBlock
{
public:
	class UDataTable*                            IconData;                                          // 0x338(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               IconFont;                                          // 0x340(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IconSize;                                          // 0x348(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_111C[0x4];                                     // Fixing Size After Last Property
	class FString                                IconPack;                                          // 0x350(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                IconCategory;                                      // 0x360(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  IconSymbol;                                        // 0x370(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	uint8                                        Pad_1127[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CustomIcon");
		return Clss;
	}

	void SetIconByID(class FName IconID, int32 Size);
	void InitCustomIcon(class UDataTable* InIconData, class UObject* InIconFont);
};

// 0x58 (0x390 - 0x338)
// Class OpenIcon.OpenIcon
class UOpenIcon : public UTextBlock
{
public:
	enum class EOpenIconSource                   IconSource;                                        // 0x338(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFA_Category                      FA_Category;                                       // 0x339(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMD_Category                      MD_Category;                                       // 0x33A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFK_Category                      FK_Category;                                       // 0x33B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1141[0x4];                                     // Fixing Size After Last Property
	class FString                                IconCategory;                                      // 0x340(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IconSize;                                          // 0x350(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1143[0x4];                                     // Fixing Size After Last Property
	class FText                                  IconSymbol;                                        // 0x358(0x18)(Edit, NativeAccessSpecifierPublic)
	class UDataTable*                            OpenIconDT;                                        // 0x370(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UObject*                               OpenIconFontObject;                                // 0x378(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1146[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OpenIcon");
		return Clss;
	}

	void SetIconByID(class FName IconID, int32 Size);
	void SetIcon(enum class EOpenIconSource Source, const class FString& Category, const class FString& IconUcode, int32 Size);
};

// 0x0 (0x28 - 0x28)
// Class OpenIcon.OpenIconUtil
class UOpenIconUtil : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OpenIconUtil");
		return Clss;
	}

	class UTexture2D* OpenIconToTexture_Advanced(const struct FVector2D& Translation, const struct FSlateColor& ColorAndOpacity, const struct FLinearColor& ShadowColorAndOpacity, const struct FVector2D& ShadowOffset, const struct FFontOutlineSettings& OutlineSettings, const struct FSlateBrush& StrikeBrush, class FName IconID, int32 IconSize, enum class EOpenIconTextureSize OutputSize, const class FString& Path, const class FString& Filename, bool UseDefaultName);
	class UTexture2D* OpenIconToTexture(class FName IconID, int32 IconSize, enum class EOpenIconTextureSize OutputSize, const class FString& Path, const class FString& Filename, bool UseDefaultName);
	bool GetCustomIconDataFromTable(class UDataTable* DataTable, TArray<struct FCustomIconData>* OutData);
	class UTexture2D* CustomIconToTexture_Advanced(const struct FVector2D& Translation, const struct FSlateColor& ColorAndOpacity, const struct FLinearColor& ShadowColorAndOpacity, const struct FVector2D& ShadowOffset, const struct FFontOutlineSettings& OutlineSettings, const struct FSlateBrush& StrikeBrush, class UDataTable* IconData, class UFont* IconFont, class FName IconID, int32 IconSize, enum class EOpenIconTextureSize OutputSize, const class FString& Path, const class FString& Filename, bool UseDefaultName);
	class UTexture2D* CustomIconToTexture(class UDataTable* IconData, class UFont* IconFont, class FName IconID, int32 IconSize, enum class EOpenIconTextureSize OutputSize, const class FString& Path, const class FString& Filename, bool UseDefaultName);
	void CopyToClipboard(const class FString& S);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
