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

// 0x10 (0x10 - 0x0)
// Function Solaris.SolarisWeakMapLibrary.Type
struct USolarisWeakMapLibrary_Type_Params
{
public:
	class UClass*                                KeyType;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                ValueType;                                         // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function Solaris.SolarisWeakMapLibrary.RefCall
struct USolarisWeakMapLibrary_RefCall_Params
{
public:
	TMap<struct FGenericKeyType, struct FGenericValueType> Map;                                               // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGenericKeyType                       Key;                                               // 0x50(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AC5[0x7];                                     // Fixing Size Of Struct..
};

// 0x68 (0x68 - 0x0)
// Function Solaris.SolarisWeakMapLibrary.PersistentVarRefCall
struct USolarisWeakMapLibrary_PersistentVarRefCall_Params
{
public:
	class FString                                Path;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FGenericKeyType, struct FGenericValueType> Map;                                               // 0x10(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGenericKeyType                       Key;                                               // 0x60(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AC6[0x7];                                     // Fixing Size Of Struct..
};

// 0x58 (0x58 - 0x0)
// Function Solaris.SolarisWeakMapLibrary.PersistentVarCall
struct USolarisWeakMapLibrary_PersistentVarCall_Params
{
public:
	TMap<struct FGenericKeyType, struct FGenericValueType> Map;                                               // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGenericKeyType                       Key;                                               // 0x50(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AC7[0x7];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// Function Solaris.SolarisWeakMapLibrary.FitsInPlayerMap
struct USolarisWeakMapLibrary_FitsInPlayerMap_Params
{
public:
	struct FGenericValueType                     Value;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function Solaris.SolarisWeakMapLibrary.CompletelyAssignedRefCall
struct USolarisWeakMapLibrary_CompletelyAssignedRefCall_Params
{
public:
	TMap<struct FGenericKeyType, struct FGenericValueType> Map;                                               // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGenericKeyType                       Key;                                               // 0x50(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AC8[0x7];                                     // Fixing Size Of Struct..
};

// 0x68 (0x68 - 0x0)
// Function Solaris.SolarisWeakMapLibrary.CompletelyAssignedPersistentVarRefCall
struct USolarisWeakMapLibrary_CompletelyAssignedPersistentVarRefCall_Params
{
public:
	class FString                                Path;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FGenericKeyType, struct FGenericValueType> Map;                                               // 0x10(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGenericKeyType                       Key;                                               // 0x60(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AC9[0x7];                                     // Fixing Size Of Struct..
};

// 0x58 (0x58 - 0x0)
// Function Solaris.SolarisWeakMapLibrary.Call
struct USolarisWeakMapLibrary_Call_Params
{
public:
	TMap<struct FGenericKeyType, struct FGenericValueType> Map;                                               // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGenericKeyType                       Key;                                               // 0x50(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3ACA[0x7];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function Solaris.SolarisArrayLibrary.UnsafeCall
struct USolarisArrayLibrary_UnsafeCall_Params
{
public:
	TArray<struct FGenericElementType>           Array;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	int64                                        Index;                                             // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Solaris.SolarisArrayLibrary.RefCall
struct USolarisArrayLibrary_RefCall_Params
{
public:
	TArray<struct FGenericElementType>           Array;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	int64                                        Index;                                             // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Solaris.SolarisArrayLibrary.Move
struct USolarisArrayLibrary_Move_Params
{
public:
	TArray<struct FGenericElementType>           Target;                                            // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FGenericElementType>           Source;                                            // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Solaris.SolarisArrayLibrary.Length
struct USolarisArrayLibrary_Length_Params
{
public:
	TArray<struct FGenericElementType>           Array;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	int64                                        ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Solaris.SolarisArrayLibrary.Empty
struct USolarisArrayLibrary_Empty_Params
{
public:
	TArray<struct FGenericElementType>           Array;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function Solaris.SolarisArrayLibrary.ConcatEquals
struct USolarisArrayLibrary_ConcatEquals_Params
{
public:
	TArray<struct FGenericElementType>           LHS;                                               // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FGenericElementType>           RHS;                                               // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FGenericElementType>           ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function Solaris.SolarisArrayLibrary.Concat
struct USolarisArrayLibrary_Concat_Params
{
public:
	TArray<struct FGenericElementType>           LHS;                                               // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FGenericElementType>           RHS;                                               // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FGenericElementType>           ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Solaris.SolarisArrayLibrary.Call
struct USolarisArrayLibrary_Call_Params
{
public:
	TArray<struct FGenericElementType>           Array;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	int64                                        Index;                                             // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Solaris.SolarisArrayLibrary.Add
struct USolarisArrayLibrary_Add_Params
{
public:
	TArray<struct FGenericElementType>           Array;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGenericElementType                   New_item;                                          // 0x10(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3ACD[0x7];                                     // Fixing Size After Last Property..
	int64                                        ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function Solaris.SolarisCoroutineLibrary.TaskMake
struct USolarisCoroutineLibrary_TaskMake_Params
{
public:
	class UClass*                                Type;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               Caller;                                            // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        CallerResumeState;                                 // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        CallerCancelState;                                 // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               OwnerInstance;                                     // 0x20(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Solaris.SolarisCoroutineLibrary.TaskGetState
struct USolarisCoroutineLibrary_TaskGetState_Params
{
public:
	class UObject*                               Task;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Solaris.SolarisCoroutineLibrary.TaskGetReturnProperty
struct USolarisCoroutineLibrary_TaskGetReturnProperty_Params
{
public:
	class UObject*                               Task;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Solaris.SolarisCoroutineLibrary.TaskFree
struct USolarisCoroutineLibrary_TaskFree_Params
{
public:
	class UObject*                               Task;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Solaris.SolarisCoroutineLibrary.TaskCancel
struct USolarisCoroutineLibrary_TaskCancel_Params
{
public:
	class UObject*                               Task;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// Function Solaris.SolarisMapLibrary.Move
struct USolarisMapLibrary_Move_Params
{
public:
	TMap<struct FGenericKeyType, struct FGenericValueType> Dest;                                              // 0x0(0x50)(Parm, OutParm, NativeAccessSpecifierPublic)
	TMap<struct FGenericKeyType, struct FGenericValueType> Src;                                               // 0x50(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function Solaris.SolarisMapLibrary.Length
struct USolarisMapLibrary_Length_Params
{
public:
	TMap<struct FGenericKeyType, struct FGenericValueType> Map;                                               // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int64                                        ReturnValue;                                       // 0x50(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function Solaris.SolarisMapLibrary.InitMap
struct USolarisMapLibrary_InitMap_Params
{
public:
	TMap<struct FGenericKeyType, struct FGenericValueType> Map;                                               // 0x0(0x50)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function Solaris.SolarisMapLibrary.GetValueByIndex
struct USolarisMapLibrary_GetValueByIndex_Params
{
public:
	TMap<struct FGenericKeyType, struct FGenericValueType> Map;                                               // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int64                                        Index;                                             // 0x50(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGenericValueType                     ReturnValue;                                       // 0x58(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3ACF[0x7];                                     // Fixing Size Of Struct..
};

// 0x60 (0x60 - 0x0)
// Function Solaris.SolarisMapLibrary.GetNextValidIndex
struct USolarisMapLibrary_GetNextValidIndex_Params
{
public:
	TMap<struct FGenericKeyType, struct FGenericValueType> Map;                                               // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int64                                        InitialIndex;                                      // 0x50(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        ReturnValue;                                       // 0x58(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function Solaris.SolarisMapLibrary.GetKeyByIndex
struct USolarisMapLibrary_GetKeyByIndex_Params
{
public:
	TMap<struct FGenericKeyType, struct FGenericValueType> Map;                                               // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int64                                        Index;                                             // 0x50(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGenericKeyType                       ReturnValue;                                       // 0x58(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AD0[0x7];                                     // Fixing Size Of Struct..
};

// 0xF0 (0xF0 - 0x0)
// Function Solaris.SolarisMapLibrary.Concat
struct USolarisMapLibrary_Concat_Params
{
public:
	TMap<struct FGenericKeyType, struct FGenericValueType> LHS;                                               // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TMap<struct FGenericKeyType, struct FGenericValueType> RHS;                                               // 0x50(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TMap<struct FGenericKeyType, struct FGenericValueType> ReturnValue;                                       // 0xA0(0x50)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function Solaris.SolarisMapLibrary.Add
struct USolarisMapLibrary_Add_Params
{
public:
	TMap<struct FGenericKeyType, struct FGenericValueType> Map;                                               // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGenericKeyType                       Key;                                               // 0x50(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGenericValueType                     Value;                                             // 0x51(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AD1[0x6];                                     // Fixing Size Of Struct..
};

// 0x0 (0x0 - 0x0)
// Function Solaris.SolarisMathLibrary_Bool.Query
struct USolarisMathLibrary_Bool_Query_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function Solaris.SolarisMathLibrary_Int.UncheckedConvertI32I64
struct USolarisMathLibrary_Int_UncheckedConvertI32I64_Params
{
public:
	int64                                        RHS;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AD2[0x4];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function Solaris.SolarisMathLibrary_Int.SubtractEquals
struct USolarisMathLibrary_Int_SubtractEquals_Params
{
public:
	int64                                        LHS;                                               // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        RHS;                                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Solaris.SolarisMathLibrary_Int.Subtract
struct USolarisMathLibrary_Int_Subtract_Params
{
public:
	int64                                        LHS;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        RHS;                                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Solaris.SolarisMathLibrary_Int.PredicateNotEqual
struct USolarisMathLibrary_Int_PredicateNotEqual_Params
{
public:
	int64                                        LHS;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        RHS;                                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AD3[0x7];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function Solaris.SolarisMathLibrary_Int.PredicateLessEqual
struct USolarisMathLibrary_Int_PredicateLessEqual_Params
{
public:
	int64                                        LHS;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        RHS;                                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AD4[0x7];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function Solaris.SolarisMathLibrary_Int.PredicateLess
struct USolarisMathLibrary_Int_PredicateLess_Params
{
public:
	int64                                        LHS;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        RHS;                                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AD5[0x7];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function Solaris.SolarisMathLibrary_Int.PredicateGreaterEqual
struct USolarisMathLibrary_Int_PredicateGreaterEqual_Params
{
public:
	int64                                        LHS;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        RHS;                                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AD6[0x7];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function Solaris.SolarisMathLibrary_Int.PredicateGreater
struct USolarisMathLibrary_Int_PredicateGreater_Params
{
public:
	int64                                        LHS;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        RHS;                                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AD7[0x7];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function Solaris.SolarisMathLibrary_Int.PredicateEqual
struct USolarisMathLibrary_Int_PredicateEqual_Params
{
public:
	int64                                        LHS;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        RHS;                                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AD8[0x7];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function Solaris.SolarisMathLibrary_Int.Negate
struct USolarisMathLibrary_Int_Negate_Params
{
public:
	int64                                        Value;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Solaris.SolarisMathLibrary_Int.MultiplyEquals
struct USolarisMathLibrary_Int_MultiplyEquals_Params
{
public:
	int64                                        LHS;                                               // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        RHS;                                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Solaris.SolarisMathLibrary_Int.Multiply
struct USolarisMathLibrary_Int_Multiply_Params
{
public:
	int64                                        LHS;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        RHS;                                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Solaris.SolarisMathLibrary_Int.LessEqual
struct USolarisMathLibrary_Int_LessEqual_Params
{
public:
	int64                                        LHS;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        RHS;                                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Solaris.SolarisMathLibrary_Int.Less
struct USolarisMathLibrary_Int_Less_Params
{
public:
	int64                                        LHS;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        RHS;                                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Solaris.SolarisMathLibrary_Int.GreaterEqual
struct USolarisMathLibrary_Int_GreaterEqual_Params
{
public:
	int64                                        LHS;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        RHS;                                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Solaris.SolarisMathLibrary_Int.Greater
struct USolarisMathLibrary_Int_Greater_Params
{
public:
	int64                                        LHS;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        RHS;                                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Solaris.SolarisMathLibrary_Int.Divide
struct USolarisMathLibrary_Int_Divide_Params
{
public:
	int64                                        LHS;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        RHS;                                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Solaris.SolarisMathLibrary_Int.CheckConstrainedInt
struct USolarisMathLibrary_Int_CheckConstrainedInt_Params
{
public:
	int64                                        Min;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        Max;                                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        Value;                                             // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Solaris.SolarisMathLibrary_Int.AddEquals
struct USolarisMathLibrary_Int_AddEquals_Params
{
public:
	int64                                        LHS;                                               // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        RHS;                                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Solaris.SolarisMathLibrary_Int.Add
struct USolarisMathLibrary_Int_Add_Params
{
public:
	int64                                        LHS;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        RHS;                                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Solaris.SolarisMathLibrary_Int.abs
struct USolarisMathLibrary_Int_Abs_Params
{
public:
	int64                                        Value;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Solaris.SolarisMathLibrary_Rational.floor
struct USolarisMathLibrary_Rational_Floor_Params
{
public:
	struct FVerseRational                        Val;                                               // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Solaris.SolarisMathLibrary_Rational.ceil
struct USolarisMathLibrary_Rational_Ceil_Params
{
public:
	struct FVerseRational                        Val;                                               // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Solaris.SolarisMathLibrary_Float.SubtractEquals
struct USolarisMathLibrary_Float_SubtractEquals_Params
{
public:
	double                                       LHS;                                               // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       RHS;                                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Solaris.SolarisMathLibrary_Float.Subtract
struct USolarisMathLibrary_Float_Subtract_Params
{
public:
	double                                       LHS;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       RHS;                                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Solaris.SolarisMathLibrary_Float.Negate
struct USolarisMathLibrary_Float_Negate_Params
{
public:
	double                                       Value;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Solaris.SolarisMathLibrary_Float.MultiplyIntFloat
struct USolarisMathLibrary_Float_MultiplyIntFloat_Params
{
public:
	int64                                        LHS;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       RHS;                                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Solaris.SolarisMathLibrary_Float.MultiplyFloatInt
struct USolarisMathLibrary_Float_MultiplyFloatInt_Params
{
public:
	double                                       LHS;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        RHS;                                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Solaris.SolarisMathLibrary_Float.MultiplyEquals
struct USolarisMathLibrary_Float_MultiplyEquals_Params
{
public:
	double                                       LHS;                                               // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       RHS;                                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Solaris.SolarisMathLibrary_Float.Multiply
struct USolarisMathLibrary_Float_Multiply_Params
{
public:
	double                                       LHS;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       RHS;                                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Solaris.SolarisMathLibrary_Float.LessEqual
struct USolarisMathLibrary_Float_LessEqual_Params
{
public:
	double                                       LHS;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       RHS;                                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Solaris.SolarisMathLibrary_Float.Less
struct USolarisMathLibrary_Float_Less_Params
{
public:
	double                                       LHS;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       RHS;                                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Solaris.SolarisMathLibrary_Float.GreaterEqual
struct USolarisMathLibrary_Float_GreaterEqual_Params
{
public:
	double                                       LHS;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       RHS;                                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Solaris.SolarisMathLibrary_Float.Greater
struct USolarisMathLibrary_Float_Greater_Params
{
public:
	double                                       LHS;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       RHS;                                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Solaris.SolarisMathLibrary_Float.DivideEquals
struct USolarisMathLibrary_Float_DivideEquals_Params
{
public:
	double                                       LHS;                                               // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       RHS;                                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Solaris.SolarisMathLibrary_Float.Divide
struct USolarisMathLibrary_Float_Divide_Params
{
public:
	double                                       LHS;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       RHS;                                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Solaris.SolarisMathLibrary_Float.CheckConstrainedFloat
struct USolarisMathLibrary_Float_CheckConstrainedFloat_Params
{
public:
	double                                       Min;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Max;                                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Value;                                             // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Solaris.SolarisMathLibrary_Float.AddEquals
struct USolarisMathLibrary_Float_AddEquals_Params
{
public:
	double                                       LHS;                                               // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       RHS;                                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Solaris.SolarisMathLibrary_Float.Add
struct USolarisMathLibrary_Float_Add_Params
{
public:
	double                                       LHS;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       RHS;                                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Solaris.SolarisMathLibrary_Float.abs
struct USolarisMathLibrary_Float_Abs_Params
{
public:
	double                                       Value;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Solaris.SolarisMathLibrary_String.UncheckedCall
struct USolarisMathLibrary_String_UncheckedCall_Params
{
public:
	int32                                        String;                                            // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AD9[0x4];                                     // Fixing Size After Last Property..
	int64                                        Index;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Solaris.SolarisMathLibrary_String.RefCall
struct USolarisMathLibrary_String_RefCall_Params
{
public:
	int32                                        String;                                            // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3ADA[0x4];                                     // Fixing Size After Last Property..
	int64                                        Index;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Solaris.SolarisMathLibrary_String.Move
struct USolarisMathLibrary_String_Move_Params
{
public:
	int32                                        Destination;                                       // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Source;                                            // 0x4(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Solaris.SolarisMathLibrary_String.MakeLiteral
struct USolarisMathLibrary_String_MakeLiteral_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function Solaris.SolarisMathLibrary_String.Make
struct USolarisMathLibrary_String_Make_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function Solaris.SolarisMathLibrary_String.Length
struct USolarisMathLibrary_String_Length_Params
{
public:
	int32                                        Array;                                             // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3ADB[0x4];                                     // Fixing Size After Last Property..
	int64                                        ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Solaris.SolarisMathLibrary_String.ConcatEquals
struct USolarisMathLibrary_String_ConcatEquals_Params
{
public:
	int32                                        LHS;                                               // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RHS;                                               // 0x4(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Solaris.SolarisMathLibrary_String.Concat
struct USolarisMathLibrary_String_Concat_Params
{
public:
	int32                                        LHS;                                               // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RHS;                                               // 0x4(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Solaris.SolarisMathLibrary_String.Call
struct USolarisMathLibrary_String_Call_Params
{
public:
	int32                                        String;                                            // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3ADC[0x4];                                     // Fixing Size After Last Property..
	int64                                        Index;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Solaris.SolarisMathLibrary_String.Add
struct USolarisMathLibrary_String_Add_Params
{
public:
	int32                                        String;                                            // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8                                         Character;                                         // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3ADD[0x3];                                     // Fixing Size Of Struct..
};

// 0x0 (0x0 - 0x0)
// Function Solaris.SolarisMathLibrary_Option.Query
struct USolarisMathLibrary_Option_Query_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Solaris.SolarisMathLibrary_Option.Make
struct USolarisMathLibrary_Option_Make_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function Solaris.SolarisUtilLibrary.ReplaceOptionValue
struct USolarisUtilLibrary_ReplaceOptionValue_Params
{
public:
	int64                                        ResultProperty;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        Option;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        Value;                                             // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Solaris.SolarisUtilLibrary.ReferenceIsValid
struct USolarisUtilLibrary_ReferenceIsValid_Params
{
public:
	int64                                        Reference;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3ADF[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function Solaris.SolarisUtilLibrary.ObjectHasNoFlags
struct USolarisUtilLibrary_ObjectHasNoFlags_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Flags;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AE0[0x3];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function Solaris.SolarisUtilLibrary.MakeUnsetOption
struct USolarisUtilLibrary_MakeUnsetOption_Params
{
public:
	int64                                        ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Solaris.SolarisUtilLibrary.MakeOptionFromValue
struct USolarisUtilLibrary_MakeOptionFromValue_Params
{
public:
	class UObject*                               Property;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        Value;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AE1[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function Solaris.SolarisUtilLibrary.IsOptionSet
struct USolarisUtilLibrary_IsOptionSet_Params
{
public:
	int64                                        Option;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AE2[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function Solaris.SolarisUtilLibrary.IsNonNullObject
struct USolarisUtilLibrary_IsNonNullObject_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AE3[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function Solaris.SolarisUtilLibrary.InstantiateObject
struct USolarisUtilLibrary_InstantiateObject_Params
{
public:
	class UClass*                                Class;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        InstancingGraph;                                   // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Solaris.SolarisUtilLibrary.InstanceFunction
struct USolarisUtilLibrary_InstanceFunction_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  MethodName;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AE4[0x4];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function Solaris.SolarisUtilLibrary.HasInterface
struct USolarisUtilLibrary_HasInterface_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                InterfaceClass;                                    // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AE5[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function Solaris.SolarisUtilLibrary.GetOptionValue
struct USolarisUtilLibrary_GetOptionValue_Params
{
public:
	int64                                        Option;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Solaris.SolarisUtilLibrary.GetFunctionForInterfaceMethod
struct USolarisUtilLibrary_GetFunctionForInterfaceMethod_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  MethodName;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AE6[0x4];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function Solaris.SolarisUtilLibrary.GetCurrentlyInstantiatedObject
struct USolarisUtilLibrary_GetCurrentlyInstantiatedObject_Params
{
public:
	class UObject*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Solaris.SolarisUtilLibrary.Dereference
struct USolarisUtilLibrary_Dereference_Params
{
public:
	int64                                        Reference;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function Solaris.SolarisUtilLibrary.CallFunction
struct USolarisUtilLibrary_CallFunction_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Solaris.SolarisUtilLibrary.CallFinalFunctionWithContext
struct USolarisUtilLibrary_CallFinalFunctionWithContext_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function Solaris.SolarisUtilLibrary.AddPropertyToSubobjectExclusionList
struct USolarisUtilLibrary_AddPropertyToSubobjectExclusionList_Params
{
public:
	int64                                        InstancingGraph;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        Property;                                          // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Solaris.VerseDynamicallyTypedValueLibrary.NotEqual
struct UVerseDynamicallyTypedValueLibrary_NotEqual_Params
{
public:
	int32                                        Left;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Right;                                             // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeTuple
struct UVerseDynamicallyTypedValueLibrary_MakeRuntimeTypeTuple_Params
{
public:
	TArray<int32>                                ValueType;                                         // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeStruct
struct UVerseDynamicallyTypedValueLibrary_MakeRuntimeTypeStruct_Params
{
public:
	class UStruct*                               Struct;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeString
struct UVerseDynamicallyTypedValueLibrary_MakeRuntimeTypeString_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeOption
struct UVerseDynamicallyTypedValueLibrary_MakeRuntimeTypeOption_Params
{
public:
	int32                                        ValueType;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeObject
struct UVerseDynamicallyTypedValueLibrary_MakeRuntimeTypeObject_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeMap
struct UVerseDynamicallyTypedValueLibrary_MakeRuntimeTypeMap_Params
{
public:
	int32                                        KeyType;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ValueType;                                         // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeLogic
struct UVerseDynamicallyTypedValueLibrary_MakeRuntimeTypeLogic_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeInt64
struct UVerseDynamicallyTypedValueLibrary_MakeRuntimeTypeInt64_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeFunction
struct UVerseDynamicallyTypedValueLibrary_MakeRuntimeTypeFunction_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeFloat
struct UVerseDynamicallyTypedValueLibrary_MakeRuntimeTypeFloat_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeEnum
struct UVerseDynamicallyTypedValueLibrary_MakeRuntimeTypeEnum_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeDynamic
struct UVerseDynamicallyTypedValueLibrary_MakeRuntimeTypeDynamic_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeClass
struct UVerseDynamicallyTypedValueLibrary_MakeRuntimeTypeClass_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeChar8
struct UVerseDynamicallyTypedValueLibrary_MakeRuntimeTypeChar8_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeChar32
struct UVerseDynamicallyTypedValueLibrary_MakeRuntimeTypeChar32_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeArray
struct UVerseDynamicallyTypedValueLibrary_MakeRuntimeTypeArray_Params
{
public:
	int32                                        ElementType;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Solaris.VerseDynamicallyTypedValueLibrary.Equal
struct UVerseDynamicallyTypedValueLibrary_Equal_Params
{
public:
	int32                                        Left;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Right;                                             // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Solaris.VerseDynamicallyTypedValueLibrary.ConvertToDynamicallyTypedValue
struct UVerseDynamicallyTypedValueLibrary_ConvertToDynamicallyTypedValue_Params
{
public:
	int32                                        RuntimeType;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Value;                                             // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Solaris.VerseDynamicallyTypedValueLibrary.ConvertFromDynamicallyTypedValue
struct UVerseDynamicallyTypedValueLibrary_ConvertFromDynamicallyTypedValue_Params
{
public:
	int32                                        RuntimeType;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Value;                                             // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
