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

// 0x1 (0x1 - 0x0)
// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.IsOpen
struct AMilitaryBase_Door_01_C_IsOpen_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.GetComponentToLock
struct AMilitaryBase_Door_01_C_GetComponentToLock_Params
{
public:
	TArray<class UPrimitiveComponent*>           ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, ContainsInstancedReference)
	TArray<class UPrimitiveComponent*>           K2Node_MakeArray_Array;                            // 0x10(0x10)(ReferenceParm, ContainsInstancedReference)
};

// 0x0 (0x0 - 0x0)
// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.OnRep_DoorOpen
struct AMilitaryBase_Door_01_C_OnRep_DoorOpen_Params
{
public:
};

// 0x19 (0x19 - 0x0)
// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.GetDoorMID
struct AMilitaryBase_Door_01_C_GetDoorMID_Params
{
public:
	class UMaterialInterface*                    CallFunc_GetMaterial_ReturnValue;                  // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              K2Node_DynamicCast_AsMaterial_Instance_Dynamic;    // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2C (0x2C - 0x0)
// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.UserConstructionScript
struct AMilitaryBase_Door_01_C_UserConstructionScript_Params
{
public:
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8F5C[0x7];                                     // Fixing Size After Last Property..
	class UMaterialInterface*                    CallFunc_GetMaterial_ReturnValue;                  // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceConstant*             K2Node_DynamicCast_AsMaterial_Instance_Constant;   // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8F5D[0x3];                                     // Fixing Size After Last Property..
	struct FLinearColor                          CallFunc_K2_GetVectorParameterValue_ReturnValue;   // 0x1C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.Timeline_0__FinishedFunc
struct AMilitaryBase_Door_01_C_Timeline_0__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.Timeline_0__UpdateFunc
struct AMilitaryBase_Door_01_C_Timeline_0__UpdateFunc_Params
{
public:
};

// 0x100 (0x100 - 0x0)
// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AMilitaryBase_Door_01_C_BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
public:
	class UPrimitiveComponent*                   OverlappedComponent;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        OtherBodyIndex;                                    // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bFromSweep;                                        // 0x1C(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8F5E[0x3];                                     // Fixing Size After Last Property..
	struct FHitResult                            SweepResult;                                       // 0x20(0xE0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x1C (0x1C - 0x0)
// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct AMilitaryBase_Door_01_C_BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
public:
	class UPrimitiveComponent*                   OverlappedComponent;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        OtherBodyIndex;                                    // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.OpenDoor
struct AMilitaryBase_Door_01_C_OpenDoor_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.CloseDoor
struct AMilitaryBase_Door_01_C_CloseDoor_Params
{
public:
};

// 0x9 (0x9 - 0x0)
// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.Open
struct AMilitaryBase_Door_01_C_Open_Params
{
public:
	class AController*                           ControllerInstigator;                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         bRequestFastOpen;                                  // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.Close
struct AMilitaryBase_Door_01_C_Close_Params
{
public:
	class AController*                           ControllerInstigator;                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.OnUnLocked
struct AMilitaryBase_Door_01_C_OnUnLocked_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.OnLocked
struct AMilitaryBase_Door_01_C_OnLocked_Params
{
public:
};

// 0x1D8 (0x1D8 - 0x0)
// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.ExecuteUbergraph_MilitaryBase_Door_01
struct AMilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue_1;          // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8F5F[0x1];                                     // Fixing Size After Last Property..
	class UPrimitiveComponent*                   K2Node_ComponentBoundEvent_OverlappedComponent_1;  // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_ComponentBoundEvent_OtherActor_1;           // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   K2Node_ComponentBoundEvent_OtherComp_1;            // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_OtherBodyIndex_1;       // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bFromSweep;             // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8F60[0x3];                                     // Fixing Size After Last Property..
	struct FHitResult                            K2Node_ComponentBoundEvent_SweepResult;            // 0x28(0xE0)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AFortAthenaVehicle*                    K2Node_DynamicCast_AsFort_Athena_Vehicle;          // 0x108(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8F61[0x7];                                     // Fixing Size After Last Property..
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x118(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue_1;               // 0x121(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8F62[0x6];                                     // Fixing Size After Last Property..
	class UPrimitiveComponent*                   K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x128(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_ComponentBoundEvent_OtherActor;             // 0x130(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   K2Node_ComponentBoundEvent_OtherComp;              // 0x138(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8F63[0x4];                                     // Fixing Size After Last Property..
	class AFortAthenaVehicle*                    K2Node_DynamicCast_AsFort_Athena_Vehicle_1;        // 0x148(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8F64[0x7];                                     // Fixing Size After Last Property..
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn_1;           // 0x158(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8F65[0x3];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Variable;                                 // 0x164(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8F66[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x16C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x170(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Max_ReturnValue;                          // 0x174(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8F67[0x3];                                     // Fixing Size After Last Property..
	struct FLinearColor                          CallFunc_LinearColorLerp_ReturnValue;              // 0x17C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x18C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x18D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8F68[0x2];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x190(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x1A8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                           K2Node_Event_ControllerInstigator_1;               // 0x1C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bRequestFastOpen;                     // 0x1C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8F69[0x7];                                     // Fixing Size After Last Property..
	class AController*                           K2Node_Event_ControllerInstigator;                 // 0x1D0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.OnDoorOpened__DelegateSignature
struct AMilitaryBase_Door_01_C_OnDoorOpened__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
