#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0xA (0xA - 0x0)
// Function ConvertedMarkerInfo.ConvertedMarkerInfo_C.SetBackgroundVisibility
struct UConvertedMarkerInfo_C_SetBackgroundVisibility_Params
{
public:
	bool                                         bOverride;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bBackgroundVisible;                                // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bLocal_BackgroundVisible;                          // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_IsValidTimerHandle_ReturnValue;        // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ConvertedMarkerInfo.ConvertedMarkerInfo_C.OnLoaded_68559753464A154900ECA9BC6BB940C0
struct UConvertedMarkerInfo_C_OnLoaded_68559753464A154900ECA9BC6BB940C0_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ConvertedMarkerInfo.ConvertedMarkerInfo_C.OnLoaded_25BCEE7642585A8BD6CE1CAFC70FEAF3
struct UConvertedMarkerInfo_C_OnLoaded_25BCEE7642585A8BD6CE1CAFC70FEAF3_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ConvertedMarkerInfo.ConvertedMarkerInfo_C.OverrideShowBackground
struct UConvertedMarkerInfo_C_OverrideShowBackground_Params
{
public:
	bool                                         bShowBackground;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ConvertedMarkerInfo.ConvertedMarkerInfo_C.PreConstruct
struct UConvertedMarkerInfo_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ConvertedMarkerInfo.ConvertedMarkerInfo_C.InitPlayerIconState
struct UConvertedMarkerInfo_C_InitPlayerIconState_Params
{
public:
	class AFortPlayerStateAthena*                PSA;                                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function ConvertedMarkerInfo.ConvertedMarkerInfo_C.UpdateCommandIcon
struct UConvertedMarkerInfo_C_UpdateCommandIcon_Params
{
public:
	enum class EPingCommandType                  PingCommand;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7992[0x3];                                     // Fixing Size After Last Property..
	struct FLinearColor                          Color;                                             // 0x4(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function ConvertedMarkerInfo.ConvertedMarkerInfo_C.InitNPCCommandIcon
struct UConvertedMarkerInfo_C_InitNPCCommandIcon_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1BC (0x1BC - 0x0)
// Function ConvertedMarkerInfo.ConvertedMarkerInfo_C.ExecuteUbergraph_ConvertedMarkerInfo
struct UConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7993[0x4];                                     // Fixing Size After Last Property..
	class UObject*                               Temp_object_Variable;                              // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D;                   // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPingCommandType                  Temp_byte_Variable;                                // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7994[0x6];                                     // Fixing Size After Last Property..
	TSoftObjectPtr<class UTexture2D>             Temp_softobject_Variable;                          // 0x20(0x28)(HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             Temp_softobject_Variable_1;                        // 0x48(0x28)(HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             Temp_softobject_Variable_2;                        // 0x70(0x28)(HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             Temp_softobject_Variable_3;                        // 0x98(0x28)(HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bShowBackground;                // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7995[0x7];                                     // Fixing Size After Last Property..
	class UObject*                               K2Node_CustomEvent_Loaded;                         // 0xC8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7996[0x7];                                     // Fixing Size After Last Property..
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0xD8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerStateAthena*                K2Node_CustomEvent_PSA;                            // 0xE0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerControllerAthena*           K2Node_DynamicCast_AsFort_Player_Controller_Athena; // 0xE8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7997[0x7];                                     // Fixing Size After Last Property..
	TSoftObjectPtr<class UTexture2D>             CallFunc_GetSocialAvatarBrush_ReturnValue;         // 0xF8(0x28)(UObjectWrapper, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetPinColor_ReturnValue;                  // 0x120(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x130(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Temp_object_Variable_1;                            // 0x138(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x140(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7998[0x4];                                     // Fixing Size After Last Property..
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D_1;                 // 0x150(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPingCommandType                  K2Node_CustomEvent_PingCommand;                    // 0x159(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7999[0x2];                                     // Fixing Size After Last Property..
	struct FLinearColor                          K2Node_CustomEvent_Color_1;                        // 0x15C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x16C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_799A[0x3];                                     // Fixing Size After Last Property..
	TSoftObjectPtr<class UTexture2D>             K2Node_Select_Default;                             // 0x170(0x28)(HasGetValueTypeHash)
	struct FLinearColor                          K2Node_CustomEvent_Color;                          // 0x198(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_CustomEvent_Loaded_1;                       // 0x1A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x1B0(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
