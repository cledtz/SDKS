#pragma once

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

// 0x28 (0x28 - 0x0)
// Function MainMenuButton.MainMenuButton_C.UpdateRightSideIcon
struct UMainMenuButton_C_UpdateRightSideIcon_Params
{
public:
	TSoftObjectPtr<class UMaterialInterface>     SoftMaterial;                                      // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, UObjectWrapper, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function MainMenuButton.MainMenuButton_C.PreConstruct
struct UMainMenuButton_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function MainMenuButton.MainMenuButton_C.UpdateRightSideIconColor
struct UMainMenuButton_C_UpdateRightSideIconColor_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function MainMenuButton.MainMenuButton_C.BP_OnHovered
struct UMainMenuButton_C_BP_OnHovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MainMenuButton.MainMenuButton_C.BP_OnSelected
struct UMainMenuButton_C_BP_OnSelected_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MainMenuButton.MainMenuButton_C.BP_OnUnhovered
struct UMainMenuButton_C_BP_OnUnhovered_Params
{
public:
};

// 0x45 (0x45 - 0x0)
// Function MainMenuButton.MainMenuButton_C.ExecuteUbergraph_MainMenuButton
struct UMainMenuButton_C_ExecuteUbergraph_MainMenuButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_879E[0x1];                                     // Fixing Size After Last Property
	TSoftObjectPtr<class UMaterialInterface>     K2Node_CustomEvent_SoftMaterial;                   // 0x8(0x28)(UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_879F[0x3];                                     // Fixing Size After Last Property
	struct FLinearColor                          K2Node_CustomEvent_Color;                          // 0x34(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
