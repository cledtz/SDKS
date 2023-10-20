#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0xA4 (0xA4 - 0x0)
// Function BPFL_General.BPFL_General_C.GetRareColor
struct UBPFL_General_C_GetRareColor_Params
{
public:
	enum class EItemRareType                     Rare;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32B8[0x7];                                     // Fixing Size After Last Property 
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          NewParam;                                          // 0x10(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EItemRareType                     Temp_byte_Variable;                                // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32BA[0x3];                                     // Fixing Size After Last Property 
	struct FLinearColor                          Temp_struct_Variable;                              // 0x24(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable_1;                            // 0x34(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable_2;                            // 0x44(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable_3;                            // 0x54(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable_4;                            // 0x64(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable_5;                            // 0x74(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable_6;                            // 0x84(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Select_Default;                             // 0x94(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x68 (0x68 - 0x0)
// Function BPFL_General.BPFL_General_C.GetDefaultModuleClassByType
struct UBPFL_General_C_GetDefaultModuleClassByType_Params
{
public:
	enum class EGunModuleType                    ModuleType;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32C4[0x7];                                     // Fixing Size After Last Property 
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                DefaultModuleClass;                                // 0x10(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EGunModuleType                    Temp_byte_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32C5[0x7];                                     // Fixing Size After Last Property 
	class UClass*                                Temp_class_Variable;                               // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Temp_class_Variable_1;                             // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Temp_class_Variable_2;                             // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Temp_class_Variable_3;                             // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Temp_class_Variable_4;                             // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Temp_class_Variable_5;                             // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Temp_class_Variable_6;                             // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Temp_class_Variable_7;                             // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_Select_Default;                             // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0xA8 (0xA8 - 0x0)
// Function BPFL_General.BPFL_General_C.GetActorRelativeLocation
struct UBPFL_General_C_GetActorRelativeLocation_Params
{
public:
	class UActor*                                ParentActor;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UActor*                                ChildActor;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ReturnValue;                                       // 0x18(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_K2_GetActorRotation_ReturnValue;          // 0x30(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x48(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x60(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x78(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_LessLess_VectorRotator_ReturnValue;       // 0x90(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function BPFL_General.BPFL_General_C.GetGameInstance
struct UBPFL_General_C_GetGameInstance_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PG_GameInstance_C*                 MyGameIntance;                                     // 0x8(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PG_GameInstance_C*                 K2Node_DynamicCast_AsBP_PG_Game_Instance;          // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function BPFL_General.BPFL_General_C.GetGameModeBP_Game
struct UBPFL_General_C_GetGameModeBP_Game_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PG_GameMode_Game_C*                MyGameMode;                                        // 0x8(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UGameModeBase*                         CallFunc_GetGameMode_ReturnValue;                  // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PG_GameMode_Game_C*                K2Node_DynamicCast_AsBP_PG_Game_Mode_Game;         // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function BPFL_General.BPFL_General_C.GetGameStateBP
struct UBPFL_General_C_GetGameStateBP_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PG_GameState_Game_C*               MyGameState;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PG_GameState_Game_C*               K2Node_DynamicCast_AsBP_PG_Game_State_Game;        // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


