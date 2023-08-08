#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x48 - 0x0)
// ScriptStruct CreativeLowMemoryFallbackRuntime.CreativeLowMemoryFallbackUserFacingText
struct FCreativeLowMemoryFallbackUserFacingText
{
public:
	class FText                                  ExitToMainMenuReasonText;                          // 0x0(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  WarningToastTitle;                                 // 0x18(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  WarningToastDescription;                           // 0x30(0x18)(Edit, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct CreativeLowMemoryFallbackRuntime.CreativeLowMemoryFallbackFreeMemoryThresholds
struct FCreativeLowMemoryFallbackFreeMemoryThresholds
{
public:
	float                                        FallbackMB;                                        // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WarningMB;                                         // 0x4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RecoveryMB;                                        // 0x8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
