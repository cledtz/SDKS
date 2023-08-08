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

// 0x0 (0x0 - 0x0)
// Function QualityLevelSelectScreen.QualityLevelSelectScreen_C.Construct
struct UQualityLevelSelectScreen_C_Construct_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function QualityLevelSelectScreen.QualityLevelSelectScreen_C.ExecuteUbergraph_QualityLevelSelectScreen
struct UQualityLevelSelectScreen_C_ExecuteUbergraph_QualityLevelSelectScreen_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CCE[0x4];                                     // Fixing Size After Last Property
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
