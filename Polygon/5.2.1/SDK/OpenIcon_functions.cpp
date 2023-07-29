#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function OpenIcon.CustomIcon.SetIconByID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        IconID                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Size                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCustomIcon::SetIconByID(class FName IconID, int32 Size)
{
	static auto Func = Class->GetFunction("CustomIcon", "SetIconByID");

	Params::UCustomIcon_SetIconByID_Params Parms;

	Parms.IconID = IconID;
	Parms.Size = Size;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OpenIcon.CustomIcon.InitCustomIcon
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDataTable*                  InIconData                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     InIconFont                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCustomIcon::InitCustomIcon(class UDataTable* InIconData, class UObject* InIconFont)
{
	static auto Func = Class->GetFunction("CustomIcon", "InitCustomIcon");

	Params::UCustomIcon_InitCustomIcon_Params Parms;

	Parms.InIconData = InIconData;
	Parms.InIconFont = InIconFont;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OpenIcon.OpenIcon.SetIconByID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        IconID                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Size                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOpenIcon::SetIconByID(class FName IconID, int32 Size)
{
	static auto Func = Class->GetFunction("OpenIcon", "SetIconByID");

	Params::UOpenIcon_SetIconByID_Params Parms;

	Parms.IconID = IconID;
	Parms.Size = Size;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OpenIcon.OpenIcon.SetIcon
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EOpenIconSource         Source                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Category                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      IconUcode                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Size                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOpenIcon::SetIcon(enum class EOpenIconSource Source, const class FString& Category, const class FString& IconUcode, int32 Size)
{
	static auto Func = Class->GetFunction("OpenIcon", "SetIcon");

	Params::UOpenIcon_SetIcon_Params Parms;

	Parms.Source = Source;
	Parms.Category = Category;
	Parms.IconUcode = IconUcode;
	Parms.Size = Size;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OpenIcon.OpenIconUtil.OpenIconToTexture_Advanced
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   Translation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSlateColor                 ColorAndOpacity                                                  (Parm, NativeAccessSpecifierPublic)
// struct FLinearColor                ShadowColorAndOpacity                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ShadowOffset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFontOutlineSettings        OutlineSettings                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSlateBrush                 StrikeBrush                                                      (Parm, NativeAccessSpecifierPublic)
// class FName                        IconID                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              IconSize                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EOpenIconTextureSize    OutputSize                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Path                                                             (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Filename                                                         (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               UseDefaultName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture2D* UOpenIconUtil::OpenIconToTexture_Advanced(const struct FVector2D& Translation, const struct FSlateColor& ColorAndOpacity, const struct FLinearColor& ShadowColorAndOpacity, const struct FVector2D& ShadowOffset, const struct FFontOutlineSettings& OutlineSettings, const struct FSlateBrush& StrikeBrush, class FName IconID, int32 IconSize, enum class EOpenIconTextureSize OutputSize, const class FString& Path, const class FString& Filename, bool UseDefaultName)
{
	static auto Func = Class->GetFunction("OpenIconUtil", "OpenIconToTexture_Advanced");

	Params::UOpenIconUtil_OpenIconToTexture_Advanced_Params Parms;

	Parms.Translation = Translation;
	Parms.ColorAndOpacity = ColorAndOpacity;
	Parms.ShadowColorAndOpacity = ShadowColorAndOpacity;
	Parms.ShadowOffset = ShadowOffset;
	Parms.OutlineSettings = OutlineSettings;
	Parms.StrikeBrush = StrikeBrush;
	Parms.IconID = IconID;
	Parms.IconSize = IconSize;
	Parms.OutputSize = OutputSize;
	Parms.Path = Path;
	Parms.Filename = Filename;
	Parms.UseDefaultName = UseDefaultName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OpenIcon.OpenIconUtil.OpenIconToTexture
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        IconID                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              IconSize                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EOpenIconTextureSize    OutputSize                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Path                                                             (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Filename                                                         (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               UseDefaultName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture2D* UOpenIconUtil::OpenIconToTexture(class FName IconID, int32 IconSize, enum class EOpenIconTextureSize OutputSize, const class FString& Path, const class FString& Filename, bool UseDefaultName)
{
	static auto Func = Class->GetFunction("OpenIconUtil", "OpenIconToTexture");

	Params::UOpenIconUtil_OpenIconToTexture_Params Parms;

	Parms.IconID = IconID;
	Parms.IconSize = IconSize;
	Parms.OutputSize = OutputSize;
	Parms.Path = Path;
	Parms.Filename = Filename;
	Parms.UseDefaultName = UseDefaultName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OpenIcon.OpenIconUtil.GetCustomIconDataFromTable
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDataTable*                  DataTable                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FCustomIconData>     OutData                                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOpenIconUtil::GetCustomIconDataFromTable(class UDataTable* DataTable, TArray<struct FCustomIconData>* OutData)
{
	static auto Func = Class->GetFunction("OpenIconUtil", "GetCustomIconDataFromTable");

	Params::UOpenIconUtil_GetCustomIconDataFromTable_Params Parms;

	Parms.DataTable = DataTable;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutData != nullptr)
		*OutData = Parms.OutData;

	return Parms.ReturnValue;

}


// Function OpenIcon.OpenIconUtil.CustomIconToTexture_Advanced
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   Translation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSlateColor                 ColorAndOpacity                                                  (Parm, NativeAccessSpecifierPublic)
// struct FLinearColor                ShadowColorAndOpacity                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ShadowOffset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFontOutlineSettings        OutlineSettings                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSlateBrush                 StrikeBrush                                                      (Parm, NativeAccessSpecifierPublic)
// class UDataTable*                  IconData                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFont*                       IconFont                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        IconID                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              IconSize                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EOpenIconTextureSize    OutputSize                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Path                                                             (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Filename                                                         (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               UseDefaultName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture2D* UOpenIconUtil::CustomIconToTexture_Advanced(const struct FVector2D& Translation, const struct FSlateColor& ColorAndOpacity, const struct FLinearColor& ShadowColorAndOpacity, const struct FVector2D& ShadowOffset, const struct FFontOutlineSettings& OutlineSettings, const struct FSlateBrush& StrikeBrush, class UDataTable* IconData, class UFont* IconFont, class FName IconID, int32 IconSize, enum class EOpenIconTextureSize OutputSize, const class FString& Path, const class FString& Filename, bool UseDefaultName)
{
	static auto Func = Class->GetFunction("OpenIconUtil", "CustomIconToTexture_Advanced");

	Params::UOpenIconUtil_CustomIconToTexture_Advanced_Params Parms;

	Parms.Translation = Translation;
	Parms.ColorAndOpacity = ColorAndOpacity;
	Parms.ShadowColorAndOpacity = ShadowColorAndOpacity;
	Parms.ShadowOffset = ShadowOffset;
	Parms.OutlineSettings = OutlineSettings;
	Parms.StrikeBrush = StrikeBrush;
	Parms.IconData = IconData;
	Parms.IconFont = IconFont;
	Parms.IconID = IconID;
	Parms.IconSize = IconSize;
	Parms.OutputSize = OutputSize;
	Parms.Path = Path;
	Parms.Filename = Filename;
	Parms.UseDefaultName = UseDefaultName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OpenIcon.OpenIconUtil.CustomIconToTexture
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDataTable*                  IconData                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFont*                       IconFont                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        IconID                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              IconSize                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EOpenIconTextureSize    OutputSize                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Path                                                             (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Filename                                                         (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               UseDefaultName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture2D* UOpenIconUtil::CustomIconToTexture(class UDataTable* IconData, class UFont* IconFont, class FName IconID, int32 IconSize, enum class EOpenIconTextureSize OutputSize, const class FString& Path, const class FString& Filename, bool UseDefaultName)
{
	static auto Func = Class->GetFunction("OpenIconUtil", "CustomIconToTexture");

	Params::UOpenIconUtil_CustomIconToTexture_Params Parms;

	Parms.IconData = IconData;
	Parms.IconFont = IconFont;
	Parms.IconID = IconID;
	Parms.IconSize = IconSize;
	Parms.OutputSize = OutputSize;
	Parms.Path = Path;
	Parms.Filename = Filename;
	Parms.UseDefaultName = UseDefaultName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OpenIcon.OpenIconUtil.CopyToClipboard
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      S                                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOpenIconUtil::CopyToClipboard(const class FString& S)
{
	static auto Func = Class->GetFunction("OpenIconUtil", "CopyToClipboard");

	Params::UOpenIconUtil_CopyToClipboard_Params Parms;

	Parms.S = S;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
