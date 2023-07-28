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

// 0x21 (0x21 - 0x0)
// Function ItemPreviewPedestal.ItemPreviewPedestal_C.Remove Floor
struct UItemPreviewPedestal_C_Remove_Floor_Params
{
public:
	class UFortItemPreviewActor*                 Preview;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWrapPreview_C*                        K2Node_DynamicCast_AsWrap_Preview;                 // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9597[0x7];                                     // Fixing Size After Last Property..
	class UItemOnPawnPreview_C*                  K2Node_DynamicCast_AsItem_on_Pawn_Preview;         // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ItemPreviewPedestal.ItemPreviewPedestal_C.OnItemDisplayed
struct UItemPreviewPedestal_C_OnItemDisplayed_Params
{
public:
	enum class EFortItemType                     ItemType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function ItemPreviewPedestal.ItemPreviewPedestal_C.ExecuteUbergraph_ItemPreviewPedestal
struct UItemPreviewPedestal_C_ExecuteUbergraph_ItemPreviewPedestal_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortItemType                     K2Node_Event_ItemType;                             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
