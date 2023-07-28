#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EDynamicUIStrength : uint8
{
	Weak                           = 0,
	Medium                         = 1,
	Strong                         = 2,
	Required                       = 3,
	EDynamicUIStrength_MAX         = 4,
};

enum class EDynamicUIAnchor : uint8
{
	TopLeft                        = 0,
	TopCenter                      = 1,
	TopRight                       = 2,
	CenterLeft                     = 3,
	CenterCenter                   = 4,
	CenterRight                    = 5,
	BottomLeft                     = 6,
	BottomCenter                   = 7,
	BottomRight                    = 8,
	MAX                            = 9,
};

enum class EDynamicUIAspectRatioType : uint8
{
	AspectRatio_1_1                = 0,
	AspectRatio_4_3                = 1,
	AspectRatio_5_4                = 2,
	AspectRatio_16_9               = 3,
	AspectRatio_16_10              = 4,
	AspectRatio_21_9               = 5,
	Custom                         = 6,
	EDynamicUIAspectRatioType_MAX  = 7,
};

enum class EDynamicUISizeMatch : uint8
{
	Both                           = 0,
	Width                          = 1,
	Height                         = 2,
	EDynamicUISizeMatch_MAX        = 3,
};

enum class EDynamicUIZOrder : uint8
{
	Back                           = 1000,
	Middle                         = 2000,
	Front                          = 3000,
	Custom                         = 2500,
	CustomMin                      = 0,
	CustomMax                      = 5000,
	Loading                        = 30000,
	Top                            = 50000,
	EDynamicUIZOrder_MAX           = 50001,
};

enum class EDynamicUIUnallowedBehavior : uint8
{
	Hide                           = 0,
	Collapse                       = 1,
	Destroy                        = 2,
	EDynamicUIUnallowedBehavior_MAX = 3,
};

enum class EDynamicUIDebugDisplayMode : uint8
{
	Hide                           = 0,
	ShowSelected                   = 1,
	ShowAll                        = 2,
	EDynamicUIDebugDisplayMode_MAX = 3,
};

enum class EDynamicUIUnallowLayerComparison : uint8
{
	Equal                          = 0,
	NotEqual                       = 1,
	Less                           = 2,
	LessOrEqual                    = 3,
	Greater                        = 4,
	GreaterOrEqual                 = 5,
	EDynamicUIUnallowLayerComparison_MAX = 6,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x38 - 0x0)
// ScriptStruct DynamicUI.DynamicUIUnallowed
struct FDynamicUIUnallowed
{
public:
	TSoftClassPtr<class UWidget>                 Widget;                                            // 0x0(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  UniqueId;                                          // 0x28(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDynamicUIUnallowedBehavior       Behavior;                                          // 0x2C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bTargetAll : 1;                                    // Mask: 0x1, PropSize: 0x10x30(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseUniqueID : 1;                                  // Mask: 0x2, PropSize: 0x10x30(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F61[0x7];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// ScriptStruct DynamicUI.DynamicUIManagerDebug
struct FDynamicUIManagerDebug
{
public:
	uint8                                        Pad_3F62[0x1];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// ScriptStruct DynamicUI.DynamicUIPanelDebug
struct FDynamicUIPanelDebug
{
public:
	uint8                                        Pad_3F63[0x1];                                     // Fixing Size Of Struct..
};

// 0x78 (0x78 - 0x0)
// ScriptStruct DynamicUI.DynamicUIAllowed
struct FDynamicUIAllowed
{
public:
	TSoftClassPtr<class UWidget>                 Widget;                                            // 0x0(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDynamicUIZOrder                  ZOrder;                                            // 0x28(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CustomZOrder;                                      // 0x2C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  UniqueId;                                          // 0x30(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F64[0x4];                                     // Fixing Size After Last Property..
	TSoftObjectPtr<class UCommonInputActionDomain> ActionDomain;                                      // 0x38(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicUIConstraintBase*              LayoutConstraint;                                  // 0x60(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicUISizeBase*                    SizeModifier;                                      // 0x68(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        LayerIDOverride;                                   // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsUnique : 1;                                     // Mask: 0x1, PropSize: 0x10x71(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseActionDomain : 1;                              // Mask: 0x2, PropSize: 0x10x71(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseLayerOverride : 1;                             // Mask: 0x4, PropSize: 0x10x71(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F65[0x6];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// ScriptStruct DynamicUI.DynamicUIAspectRatio
struct FDynamicUIAspectRatio
{
public:
	enum class EDynamicUIAspectRatioType         AspectRatio;                                       // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CustomAspectRatio;                                 // 0x4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct DynamicUI.DynamicUIPreload
struct FDynamicUIPreload
{
public:
	TSoftClassPtr<class UWidget>                 Widget;                                            // 0x0(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct DynamicUI.DynamicUISceneData
struct FDynamicUISceneData
{
public:
	uint8                                        Pad_3F66[0x1];                                     // Fixing Size Of Struct..
};

// 0x38 (0x38 - 0x0)
// ScriptStruct DynamicUI.DynamicUIDirectorData
struct FDynamicUIDirectorData
{
public:
	TSoftClassPtr<class UActor>                  DirectorClass;                                     // 0x0(0x28)(Transient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UActor>                 Instance;                                          // 0x28(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F67[0x8];                                     // Fixing Size Of Struct..
};

// 0x90 (0x90 - 0x0)
// ScriptStruct DynamicUI.DynamicUIPlayerData
struct FDynamicUIPlayerData
{
public:
	uint8                                        Pad_3F68[0x40];                                    // Fixing Size After Last Property..
	TMap<class FString, struct FDynamicUIDirectorData> ActiveDirectors;                                   // 0x40(0x50)(Transient, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct DynamicUI.DynamicUIWidgetTarget
struct FDynamicUIWidgetTarget
{
public:
	class FName                                  WidgetPath;                                        // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F69[0x4];                                     // Fixing Size After Last Property..
	TSoftClassPtr<class UWidget>                 WidgetClass;                                       // 0x8(0x28)(Transient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  UniqueId;                                          // 0x30(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseUniqueID : 1;                                  // Mask: 0x1, PropSize: 0x10x34(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F6A[0x3B];                                    // Fixing Size Of Struct..
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
