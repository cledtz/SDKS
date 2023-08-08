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
// Function GA_DefaultPlayer_PetOtherPet.GA_DefaultPlayer_PetOtherPet_C.OnCancelled_FB7AFE5D4FF547CAEB1ECA8264EE1330
struct UGA_DefaultPlayer_PetOtherPet_C_OnCancelled_FB7AFE5D4FF547CAEB1ECA8264EE1330_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_DefaultPlayer_PetOtherPet.GA_DefaultPlayer_PetOtherPet_C.OnInterrupted_FB7AFE5D4FF547CAEB1ECA8264EE1330
struct UGA_DefaultPlayer_PetOtherPet_C_OnInterrupted_FB7AFE5D4FF547CAEB1ECA8264EE1330_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_DefaultPlayer_PetOtherPet.GA_DefaultPlayer_PetOtherPet_C.OnBlendOut_FB7AFE5D4FF547CAEB1ECA8264EE1330
struct UGA_DefaultPlayer_PetOtherPet_C_OnBlendOut_FB7AFE5D4FF547CAEB1ECA8264EE1330_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_DefaultPlayer_PetOtherPet.GA_DefaultPlayer_PetOtherPet_C.OnCompleted_FB7AFE5D4FF547CAEB1ECA8264EE1330
struct UGA_DefaultPlayer_PetOtherPet_C_OnCompleted_FB7AFE5D4FF547CAEB1ECA8264EE1330_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_DefaultPlayer_PetOtherPet.GA_DefaultPlayer_PetOtherPet_C.K2_ActivateAbility
struct UGA_DefaultPlayer_PetOtherPet_C_K2_ActivateAbility_Params
{
public:
};

// 0x41 (0x41 - 0x0)
// Function GA_DefaultPlayer_PetOtherPet.GA_DefaultPlayer_PetOtherPet_C.ExecuteUbergraph_GA_DefaultPlayer_PetOtherPet
struct UGA_DefaultPlayer_PetOtherPet_C_ExecuteUbergraph_GA_DefaultPlayer_PetOtherPet_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x10(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x1C(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x28(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_41DA[0x4];                                     // Fixing Size After Last Property
	class UAbilityTask_PlayMontageAndWait*       CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue; // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
