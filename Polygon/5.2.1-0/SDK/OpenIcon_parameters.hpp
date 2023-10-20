#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0xC - 0x0)
// Function OpenIcon.CustomIcon.SetIconByID
struct UCustomIcon_SetIconByID_Params
{
public:
	class FName                                  IconID;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Size;                                              // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OpenIcon.CustomIcon.InitCustomIcon
struct UCustomIcon_InitCustomIcon_Params
{
public:
	class UDataTable*                            InIconData;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               InIconFont;                                        // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function OpenIcon.OpenIcon.SetIconByID
struct UOpenIcon_SetIconByID_Params
{
public:
	class FName                                  IconID;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Size;                                              // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function OpenIcon.OpenIcon.SetIcon
struct UOpenIcon_SetIcon_Params
{
public:
	enum class EOpenIconSource                   Source;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10AC[0x7];                                     // Fixing Size After Last Property 
	class FString                                Category;                                          // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                IconUcode;                                         // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Size;                                              // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10AD[0x4];                                     // Fixing Size Of Struct
};

// 0x180 (0x180 - 0x0)
// Function OpenIcon.OpenIconUtil.OpenIconToTexture_Advanced
struct UOpenIconUtil_OpenIconToTexture_Advanced_Params
{
public:
	struct FVector2D                             Translation;                                       // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                           ColorAndOpacity;                                   // 0x10(0x14)(Parm, NativeAccessSpecifierPublic)
	struct FLinearColor                          ShadowColorAndOpacity;                             // 0x24(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10C3[0x4];                                     // Fixing Size After Last Property 
	struct FVector2D                             ShadowOffset;                                      // 0x38(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFontOutlineSettings                  OutlineSettings;                                   // 0x48(0x20)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10C5[0x8];                                     // Fixing Size After Last Property 
	struct FSlateBrush                           StrikeBrush;                                       // 0x70(0xD0)(Parm, NativeAccessSpecifierPublic)
	class FName                                  IconID;                                            // 0x140(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IconSize;                                          // 0x148(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOpenIconTextureSize              OutputSize;                                        // 0x14C(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10C7[0x3];                                     // Fixing Size After Last Property 
	class FString                                Path;                                              // 0x150(0x10)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Filename;                                          // 0x160(0x10)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseDefaultName;                                    // 0x170(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10CA[0x7];                                     // Fixing Size After Last Property 
	class UTexture2D*                            ReturnValue;                                       // 0x178(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function OpenIcon.OpenIconUtil.OpenIconToTexture
struct UOpenIconUtil_OpenIconToTexture_Params
{
public:
	class FName                                  IconID;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IconSize;                                          // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOpenIconTextureSize              OutputSize;                                        // 0xC(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10D3[0x3];                                     // Fixing Size After Last Property 
	class FString                                Path;                                              // 0x10(0x10)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Filename;                                          // 0x20(0x10)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseDefaultName;                                    // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10D4[0x7];                                     // Fixing Size After Last Property 
	class UTexture2D*                            ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function OpenIcon.OpenIconUtil.GetCustomIconDataFromTable
struct UOpenIconUtil_GetCustomIconDataFromTable_Params
{
public:
	class UDataTable*                            DataTable;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCustomIconData>               OutData;                                           // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10DC[0x7];                                     // Fixing Size Of Struct
};

// 0x190 (0x190 - 0x0)
// Function OpenIcon.OpenIconUtil.CustomIconToTexture_Advanced
struct UOpenIconUtil_CustomIconToTexture_Advanced_Params
{
public:
	struct FVector2D                             Translation;                                       // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                           ColorAndOpacity;                                   // 0x10(0x14)(Parm, NativeAccessSpecifierPublic)
	struct FLinearColor                          ShadowColorAndOpacity;                             // 0x24(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10F1[0x4];                                     // Fixing Size After Last Property 
	struct FVector2D                             ShadowOffset;                                      // 0x38(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFontOutlineSettings                  OutlineSettings;                                   // 0x48(0x20)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10F2[0x8];                                     // Fixing Size After Last Property 
	struct FSlateBrush                           StrikeBrush;                                       // 0x70(0xD0)(Parm, NativeAccessSpecifierPublic)
	class UDataTable*                            IconData;                                          // 0x140(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFont*                                 IconFont;                                          // 0x148(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  IconID;                                            // 0x150(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IconSize;                                          // 0x158(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOpenIconTextureSize              OutputSize;                                        // 0x15C(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10F4[0x3];                                     // Fixing Size After Last Property 
	class FString                                Path;                                              // 0x160(0x10)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Filename;                                          // 0x170(0x10)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseDefaultName;                                    // 0x180(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10F6[0x7];                                     // Fixing Size After Last Property 
	class UTexture2D*                            ReturnValue;                                       // 0x188(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function OpenIcon.OpenIconUtil.CustomIconToTexture
struct UOpenIconUtil_CustomIconToTexture_Params
{
public:
	class UDataTable*                            IconData;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFont*                                 IconFont;                                          // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  IconID;                                            // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IconSize;                                          // 0x18(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOpenIconTextureSize              OutputSize;                                        // 0x1C(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_110F[0x3];                                     // Fixing Size After Last Property 
	class FString                                Path;                                              // 0x20(0x10)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Filename;                                          // 0x30(0x10)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseDefaultName;                                    // 0x40(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1111[0x7];                                     // Fixing Size After Last Property 
	class UTexture2D*                            ReturnValue;                                       // 0x48(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OpenIcon.OpenIconUtil.CopyToClipboard
struct UOpenIconUtil_CopyToClipboard_Params
{
public:
	class FString                                S;                                                 // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


