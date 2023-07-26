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


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x68 - 0x0)
// UserDefinedStruct AudioParameterQueryData.AudioParameterQueryData
struct FAudioParameterQueryData
{
public:
	struct FGameplayTagQuery                     TagQuery_12_74B441D54446A49EB7F00AAC728B68F0;      // 0x0(0x48)(Edit, BlueprintVisible)
	class FName                                  ParameterName_2_0E82F2EF4DD09C9EB9E25D9AD7DB520D;  // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A57[0x4];                                     // Fixing Size After Last Property..
	class USoundControlBus*                      ControlBus_5_0B33E9404596DE8D58698EA40F70C171;     // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             ControlBusFadeTime_9_E9701E2E4995E4A3C8798FA35536B86E; // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
