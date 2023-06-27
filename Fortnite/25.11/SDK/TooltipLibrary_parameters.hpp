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

// 0x98 (0x98 - 0x0)
// Function TooltipLibrary.TooltipLibrary_C.CreateXPTooltip
struct UTooltipLibrary_C_CreateXPTooltip_Params
{
public:
	class APlayerController*                     Owner;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  Header;                                            // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  CommanderXP;                                       // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  BoostXP;                                           // 0x38(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  RestXP;                                            // 0x50(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  Body;                                              // 0x68(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               __WorldContext;                                    // 0x80(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCommonUserWidget*                     Out;                                               // 0x88(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UXpBarToolTip_C*                       CallFunc_Create_ReturnValue;                       // 0x90(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function TooltipLibrary.TooltipLibrary_C.Create Compare Item Tooltip
struct UTooltipLibrary_C_Create_Compare_Item_Tooltip_Params
{
public:
	class APlayerController*                     Owning_Player;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  Header_Text;                                       // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class USlateBrushAsset*                      Header_Icon;                                       // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             Item;                                              // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             ComparedItem;                                      // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               Return_Value;                                      // 0x40(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function TooltipLibrary.TooltipLibrary_C.Create Item Tooltip
struct UTooltipLibrary_C_Create_Item_Tooltip_Params
{
public:
	class APlayerController*                     Owning_Player;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  Header_Text;                                       // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class USlateBrushAsset*                      Header_Icon;                                       // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             Item;                                              // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        OverrideQuantity;                                  // 0x30(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_96C2[0x4];                                     // Fixing Size After Last Property..
	class UObject*                               __WorldContext;                                    // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               Return_Value;                                      // 0x40(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function TooltipLibrary.TooltipLibrary_C.Set Enabled And Tooltip Text
struct UTooltipLibrary_C_Set_Enabled_And_Tooltip_Text_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         Enabled;                                           // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_96C3[0x7];                                     // Fixing Size After Last Property..
	class FText                                  Tooltip_Text;                                      // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               __WorldContext;                                    // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           CallFunc_Create_Basic_Tooltip_Output;              // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function TooltipLibrary.TooltipLibrary_C.Create Custom Tooltip
struct UTooltipLibrary_C_Create_Custom_Tooltip_Params
{
public:
	class APlayerController*                     Owning_Player;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  Header_Text;                                       // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class USlateBrushAsset*                      Icon_Brush;                                        // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           Widget;                                            // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           Output;                                            // 0x38(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UTooltip_Custom_S_C*                   CallFunc_Create_ReturnValue;                       // 0x40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x68 (0x68 - 0x0)
// Function TooltipLibrary.TooltipLibrary_C.Create Basic Tooltip
struct UTooltipLibrary_C_Create_Basic_Tooltip_Params
{
public:
	class APlayerController*                     Owning_Player;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  Body_Text;                                         // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  Header_Text;                                       // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class USlateBrushAsset*                      Icon_Brush;                                        // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Header_Style;                                      // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Body_Style;                                        // 0x48(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x50(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           Output;                                            // 0x58(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UTooltip_Basic_S_C*                    CallFunc_Create_ReturnValue;                       // 0x60(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
