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

// 0x80 (0x80 - 0x0)
// Function SidebarSocialAddingTagWidget.SidebarSocialAddingTagWidget_C.EventSetTag
struct USidebarSocialAddingTagWidget_C_EventSetTag_Params
{
public:
	struct FSidebarSocialTagCategoryStructure    CallFunc_Get_Sidebar_Social_Tag_Category_Structure_SidebarSocialTagCategoryStructure; // 0x0(0x6C)(HasGetValueTypeHash)
	uint8                                        Pad_A0D9[0x4];                                     // Fixing Size After Last Property..
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function SidebarSocialAddingTagWidget.SidebarSocialAddingTagWidget_C.Construct
struct USidebarSocialAddingTagWidget_C_Construct_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function SidebarSocialAddingTagWidget.SidebarSocialAddingTagWidget_C.ExecuteUbergraph_SidebarSocialAddingTagWidget
struct USidebarSocialAddingTagWidget_C_ExecuteUbergraph_SidebarSocialAddingTagWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
