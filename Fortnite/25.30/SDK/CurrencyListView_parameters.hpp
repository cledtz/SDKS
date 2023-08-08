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

// 0x58 (0x58 - 0x0)
// Function CurrencyListView.CurrencyListView_C.AddDataToList
struct UCurrencyListView_C_AddDataToList_Params
{
public:
	struct FCurrencyData                         CurrencyData;                                      // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UCurrencyListObject_C*                 CallFunc_SpawnObject_ReturnValue;                  // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function CurrencyListView.CurrencyListView_C.RunClearListView
struct UCurrencyListView_C_RunClearListView_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function CurrencyListView.CurrencyListView_C.ExecuteUbergraph_CurrencyListView
struct UCurrencyListView_C_ExecuteUbergraph_CurrencyListView_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
