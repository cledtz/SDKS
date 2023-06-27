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

// 0x8 (0x8 - 0x0)
// Function VerseEngine.task_VerseEngine_subscribable_event$Await.Update
struct UTask_VerseEngine_subscribable_event_Await_Update_Params
{
public:
	int64                                        RetVal;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VerseEngine.VerseEngine._L_2fVerse_2eorg_2fVerseEngine_N_Rsubscribable__event_L_Ntype_R
struct UVerseEngine__L_2fVerse_2eorg_2fVerseEngine_N_Rsubscribable__event_L_Ntype_R_Params
{
public:
	class UClass*                                __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                RetVal;                                            // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function VerseEngine.VerseEngine._L_2fVerse_2eorg_2fVerseEngine_N_Rsubscribable__event
struct UVerseEngine__L_2fVerse_2eorg_2fVerseEngine_N_Rsubscribable__event_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_7DD4[0x7];                                     // Fixing Size After Last Property..
	class UClass*                                RetVal;                                            // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_0;                                         // 0x10(0x10)(HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VerseEngine.VerseEngine._L_2fVerse_2eorg_2fVerseEngine_N_Rmulticast__delegate_L_Ntype_R
struct UVerseEngine__L_2fVerse_2eorg_2fVerseEngine_N_Rmulticast__delegate_L_Ntype_R_Params
{
public:
	class UClass*                                __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                RetVal;                                            // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function VerseEngine.VerseEngine._L_2fVerse_2eorg_2fVerseEngine_N_Rmulticast__delegate
struct UVerseEngine__L_2fVerse_2eorg_2fVerseEngine_N_Rmulticast__delegate_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_7DD5[0x7];                                     // Fixing Size After Last Property..
	class UClass*                                RetVal;                                            // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_0;                                         // 0x10(0x10)(HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function VerseEngine.VerseEngine.$InitCDO
struct UVerseEngine__InitCDO_Params
{
public:
};

// 0x9 (0x9 - 0x0)
// Function VerseEngine.VerseEngine_Entity_entity._L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RRemoveComponent_L_Ncomponent_R
struct UVerseEngine_Entity_entity__L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RRemoveComponent_L_Ncomponent_R_Params
{
public:
	class UEntityComponent*                      __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint8                                        RetVal : 1;                                        // Mask: 0x1, PropSize: 0x10x8(0x1)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function VerseEngine.VerseEngine_Entity_entity._L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RIsEqual_L_Nentity_R
struct UVerseEngine_Entity_entity__L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RIsEqual_L_Nentity_R_Params
{
public:
	class UVerseEngine_Entity_entity*            __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint8                                        RetVal : 1;                                        // Mask: 0x1, PropSize: 0x10x8(0x1)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
};

// 0x52 (0x52 - 0x0)
// Function VerseEngine.VerseEngine_Entity_entity._L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RHasComponents_L_N_Ksubtype_Lcomponent_R_R
struct UVerseEngine_Entity_entity__L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RHasComponents_L_N_Ksubtype_Lcomponent_R_R_Params
{
public:
	TArray<class UClass*>                        __verse_0xB2CDDD72_Argument;                       // 0x0(0x10)(Parm, ContainsInstancedReference)
	FOptionProperty_                             RetVal;                                            // 0x10(0x2)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_0 : 1;                                 // Mask: 0x1, PropSize: 0x10x12(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_420 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_7DD6[0x5];                                     // Fixing Size After Last Property..
	int64                                        _ForIndex_1;                                       // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        _ForLength_2;                                      // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                __verse_0xF655308E_ComponentClass_4;               // 0x28(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_3;                                // 0x30(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_4;                                // 0x38(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_5;                                         // 0x40(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_6;                                // 0x50(0x2)(NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VerseEngine.VerseEngine_Entity_entity._L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetOrCreateComponentOfType_L_Ntype_R
struct UVerseEngine_Entity_entity__L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetOrCreateComponentOfType_L_Ntype_R_Params
{
public:
	class UClass*                                __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function VerseEngine.VerseEngine_Entity_entity._L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetName
struct UVerseEngine_Entity_entity__L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetName_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_7DD7[0x7];                                     // Fixing Size After Last Property..
	FVerseStringProperty_                        RetVal;                                            // 0x8(0x10)(Parm, OutParm, ReturnParm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function VerseEngine.VerseEngine_Entity_entity._L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetFullname
struct UVerseEngine_Entity_entity__L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetFullname_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_7DD8[0x7];                                     // Fixing Size After Last Property..
	FVerseStringProperty_                        RetVal;                                            // 0x8(0x10)(Parm, OutParm, ReturnParm, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VerseEngine.VerseEngine_Entity_entity._L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetComponentOfType_L_Ntype_R
struct UVerseEngine_Entity_entity__L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetComponentOfType_L_Ntype_R_Params
{
public:
	class UClass*                                __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function VerseEngine.VerseEngine_Entity_entity._L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetAllComponentsOfType_L_Ntype_R
struct UVerseEngine_Entity_entity__L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetAllComponentsOfType_L_Ntype_R_Params
{
public:
	class UClass*                                __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UEntityComponent*>              RetVal;                                            // 0x8(0x10)(Parm, OutParm, ReturnParm, ContainsInstancedReference)
};

// 0x40 (0x40 - 0x0)
// Function VerseEngine.VerseEngine_Entity_entity._L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_REnsureComponents_L_N_Ksubtype_Lcomponent_R_R
struct UVerseEngine_Entity_entity__L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_REnsureComponents_L_N_Ksubtype_Lcomponent_R_R_Params
{
public:
	TArray<class UClass*>                        __verse_0xB2CDDD72_Argument;                       // 0x0(0x10)(Parm, ContainsInstancedReference)
	int64                                        _ForIndex_0;                                       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        _ForLength_1;                                      // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                __verse_0xF655308E_ComponentClass_4;               // 0x20(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _InvokeSureResultDummy_2;                          // 0x28(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_3;                                         // 0x30(0x10)(HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function VerseEngine.VerseEngine_Entity_entity._L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RDestroy
struct UVerseEngine_Entity_entity__L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RDestroy_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        RetVal : 1;                                        // Mask: 0x1, PropSize: 0x10x1(0x1)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VerseEngine.VerseEngine_Entity_entity._L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RAddComponent_L_Ntype_R
struct UVerseEngine_Entity_entity__L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RAddComponent_L_Ntype_R_Params
{
public:
	class UClass*                                __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function VerseEngine.VerseEngine_Entity_entity.$InitInstance
struct UVerseEngine_Entity_entity__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseEngine.VerseEngine_Entity_entity.$Block
struct UVerseEngine_Entity_entity__Block_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseEngine.VerseEngine_Entity_entity.$InitCDO
struct UVerseEngine_Entity_entity__InitCDO_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function VerseEngine.VerseEngine_Entity_EntityHelpers._L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fEntityHelpers_N_RGetEntityFromComponent_L_Ncomponent_R
struct UVerseEngine_Entity_EntityHelpers__L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fEntityHelpers_N_RGetEntityFromComponent_L_Ncomponent_R_Params
{
public:
	class UEntityComponent*                      __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function VerseEngine.VerseEngine_Entity_EntityHelpers._L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fEntityHelpers_N_RGetComponentOfTypeC_L_Ncomponent_M_Ntype_R
struct UVerseEngine_Entity_EntityHelpers__L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fEntityHelpers_N_RGetComponentOfTypeC_L_Ncomponent_M_Ntype_R_Params
{
public:
	struct FTuple_Lcomponent_Many_R              __verse_0xB2CDDD72_Argument;                       // 0x0(0x10)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function VerseEngine.VerseEngine_Entity_EntityHelpers._L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fEntityHelpers_N_RDestroyObject_L_Ncomponent_R
struct UVerseEngine_Entity_EntityHelpers__L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fEntityHelpers_N_RDestroyObject_L_Ncomponent_R_Params
{
public:
	class UEntityComponent*                      __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint8                                        RetVal : 1;                                        // Mask: 0x1, PropSize: 0x10x8(0x1)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function VerseEngine.VerseEngine_Entity_EntityHelpers.$InitCDO
struct UVerseEngine_Entity_EntityHelpers__InitCDO_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseEngine.VerseEngine_multicast_delegate_base.$InitInstance
struct UVerseEngine_multicast_delegate_base__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseEngine.VerseEngine_multicast_delegate_base.$Block
struct UVerseEngine_multicast_delegate_base__Block_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseEngine.VerseEngine_multicast_delegate_base.$InitCDO
struct UVerseEngine_multicast_delegate_base__InitCDO_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function VerseEngine.VerseEngine_multicast_delegate._L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R
struct UVerseEngine_multicast_delegate__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R_Params
{
public:
	FVerseFunctionProperty_                      __verse_0xB2CDDD72_Argument;                       // 0x0(0x10)(Parm, HasGetValueTypeHash)
	class UObject*                               RetVal;                                            // 0x10(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function VerseEngine.VerseEngine_multicast_delegate._L_2fVerse_2eorg_2fVerseEngine_2fmulticast__delegate_2fmulticast__delegate_Lt_R_N_REmpty
struct UVerseEngine_multicast_delegate__L_2fVerse_2eorg_2fVerseEngine_2fmulticast__delegate_2fmulticast__delegate_Lt_R_N_REmpty_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VerseEngine.VerseEngine_multicast_delegate._L_2fVerse_2eorg_2fVerseEngine_2fmulticast__delegate_2fmulticast__delegate_Lt_R_N_RBroadcast_L_Nt_R
struct UVerseEngine_multicast_delegate__L_2fVerse_2eorg_2fVerseEngine_2fmulticast__delegate_2fmulticast__delegate_Lt_R_N_RBroadcast_L_Nt_R_Params
{
public:
	FVerseDynamicProperty_                       __verse_0xB2CDDD72_Argument;                       // 0x0(0x10)(Parm, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function VerseEngine.VerseEngine_multicast_delegate.$InitInstance
struct UVerseEngine_multicast_delegate__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseEngine.VerseEngine_multicast_delegate.$Block
struct UVerseEngine_multicast_delegate__Block_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseEngine.VerseEngine_multicast_delegate.$InitCDO
struct UVerseEngine_multicast_delegate__InitCDO_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function VerseEngine.VerseEngine_multicast_delegate_subscription._L_2fVerse_2eorg_2fVerse_2fcancelable_N_RCancel
struct UVerseEngine_multicast_delegate_subscription__L_2fVerse_2eorg_2fVerse_2fcancelable_N_RCancel_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function VerseEngine.VerseEngine_multicast_delegate_subscription.$InitInstance
struct UVerseEngine_multicast_delegate_subscription__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseEngine.VerseEngine_multicast_delegate_subscription.$Block
struct UVerseEngine_multicast_delegate_subscription__Block_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseEngine.VerseEngine_multicast_delegate_subscription.$InitCDO
struct UVerseEngine_multicast_delegate_subscription__InitCDO_Params
{
public:
};

// 0x28 (0x28 - 0x0)
// Function VerseEngine.VerseEngine_subscribable_event.Await
struct UVerseEngine_subscribable_event_Await_Params
{
public:
	class UConcurrency_task*                     __verse_0xC1E81372_CallingTask;                    // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int64                                        __verse_0xA3A00DDB_CallerResumeState;              // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        __verse_0x2AC0E4D8_CallerCancelState;              // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x18(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_7DDD[0x7];                                     // Fixing Size After Last Property..
	class UConcurrency_task*                     RetVal;                                            // 0x20(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function VerseEngine.VerseEngine_subscribable_event.$InitInstance
struct UVerseEngine_subscribable_event__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseEngine.VerseEngine_subscribable_event.$Block
struct UVerseEngine_subscribable_event__Block_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseEngine.VerseEngine_subscribable_event.$InitCDO
struct UVerseEngine_subscribable_event__InitCDO_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
