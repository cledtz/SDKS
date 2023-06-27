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

// 0x1E1 (0x1E1 - 0x0)
// Function VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.UpdatePosition For Camera
struct AVaultCharacterPlacementHelper_C_UpdatePosition_For_Camera_Params
{
public:
	enum class EFrontEndCamera                   FrontEndCamera;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_99CD[0x4];                                     // Fixing Size After Last Property..
	TArray<enum class EFrontEndCamera>           K2Node_MakeArray_Array;                            // 0x8(0x10)(ConstParm, ReferenceParm)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_99CE[0x6];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x20(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x38(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x50(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x68(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_ComposeRotators_ReturnValue;              // 0x80(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_99CF[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0xA0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetActorTransform_SweepHitResult;      // 0x100(0xE0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_K2_SetActorTransform_ReturnValue;         // 0x1E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.UserConstructionScript
struct AVaultCharacterPlacementHelper_C_UserConstructionScript_Params
{
public:
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x0(0x60)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.ReceiveBeginPlay
struct AVaultCharacterPlacementHelper_C_ReceiveBeginPlay_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.SubGameChanged_Event_0
struct AVaultCharacterPlacementHelper_C_SubGameChanged_Event_0_Params
{
public:
	enum class ESubGame                          SubGame;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.OnFrontEndCameraChanged
struct AVaultCharacterPlacementHelper_C_OnFrontEndCameraChanged_Params
{
public:
	enum class EFrontEndCamera                   NewCamera;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFrontEndCamera                   OldCamera;                                         // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A0 (0x1A0 - 0x0)
// Function VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.ExecuteUbergraph_VaultCharacterPlacementHelper
struct AVaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_99D0[0x4];                                     // Fixing Size After Last Property..
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ESubGame                          CallFunc_GetSubGame_ReturnValue;                   // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_99D1[0x3];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x14(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_99D2[0x7];                                     // Fixing Size After Last Property..
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue_1;                 // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ESubGame                          CallFunc_GetSubGame_ReturnValue_1;                 // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInZone_ReturnValue;                     // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESubGame                          K2Node_CustomEvent_SubGame;                        // 0x33(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_99D3[0x3];                                     // Fixing Size After Last Property..
	struct FHitResult                            CallFunc_K2_SetActorTransform_SweepHitResult;      // 0x38(0xE0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_K2_SetActorTransform_ReturnValue;         // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_99D4[0x7];                                     // Fixing Size After Last Property..
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue_2;                 // 0x120(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EFrontEndCamera                   K2Node_CustomEvent_NewCamera;                      // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFrontEndCamera                   K2Node_CustomEvent_OldCamera;                      // 0x129(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_99D5[0x2];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x12C(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_99D6[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x140(0x60)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.OnZoomLevelUpdated__DelegateSignature
struct AVaultCharacterPlacementHelper_C_OnZoomLevelUpdated__DelegateSignature_Params
{
public:
	double                                       CurrentZoomLevel;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
