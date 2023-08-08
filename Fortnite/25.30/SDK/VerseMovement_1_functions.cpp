#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function VerseMovement.VerseMovement._L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_N_RGetPlayerMoveComponent_L_Nplayer__component_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USimulation_player_component*__verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionProperty_                   RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionProperty_ UVerseMovement::_L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_N_RGetPlayerMoveComponent_L_Nplayer__component_R(class USimulation_player_component* __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("VerseMovement", "_L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_N_RGetPlayerMoveComponent_L_Nplayer__component_R");

	Params::UVerseMovement__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_N_RGetPlayerMoveComponent_L_Nplayer__component_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VerseMovement.VerseMovement.VerseMovement_move_config$OverrideFactory
// (Static, HasOutParams, HasDefaults)
// Parameters:
// struct FVerseMovement_move_config  RetVal                                                           (Parm, OutParm, ReturnParm)
// TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap                              (ConstParm, Parm, ContainsInstancedReference)
// FVerseStringProperty_              _ExprResultStack_0                                               (HasGetValueTypeHash)
// FOptionProperty_                   _ExprResult_1                                                    (NoDestructor, HasGetValueTypeHash)
// TArray<struct FVerseMovement_move_config_entry>_ExprResult_2                                                    (ContainsInstancedReference)
// TArray<enum class EVerseFalse>     __verse_0xFFC68BC5_Array_1                                       (ContainsInstancedReference)
// TArray<struct FVerseMovement_move_config_entry>_ForResult_3                                                     (ContainsInstancedReference)
// int64                              _ForIndex_4                                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              _ForLength_5                                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVerseFalse             __verse_0xFB88B569_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_6                                                    (NoDestructor, HasGetValueTypeHash)

struct FVerseMovement_move_config UVerseMovement::VerseMovement_move_config_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap, FVerseStringProperty_ _ExprResultStack_0, FOptionProperty_ _ExprResult_1, const TArray<struct FVerseMovement_move_config_entry>& _ExprResult_2, const TArray<enum class EVerseFalse>& __verse_0xFFC68BC5_Array_1, const TArray<struct FVerseMovement_move_config_entry>& _ForResult_3, int64 _ForIndex_4, int64 _ForLength_5, enum class EVerseFalse __verse_0xFB88B569_Item_3, uint8 _ExprResult_6)
{
	static auto Func = Class->GetFunction("VerseMovement", "VerseMovement_move_config$OverrideFactory");

	Params::UVerseMovement_VerseMovement_move_config_OverrideFactory_Params Parms;

	Parms.__verse_0xFB48ED96__InitOverrideMap = __verse_0xFB48ED96__InitOverrideMap;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms.__verse_0xFFC68BC5_Array_1 = __verse_0xFFC68BC5_Array_1;
	Parms._ForResult_3 = _ForResult_3;
	Parms._ForIndex_4 = _ForIndex_4;
	Parms._ForLength_5 = _ForLength_5;
	Parms.__verse_0xFB88B569_Item_3 = __verse_0xFB88B569_Item_3;
	Parms._ExprResult_6 = _ExprResult_6;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseMovement.VerseMovement.VerseMovement_move_config$Factory
// (Static, HasOutParams, HasDefaults)
// Parameters:
// struct FVerseMovement_move_config  RetVal                                                           (Parm, OutParm, ReturnParm)
// TArray<struct FVerseMovement_move_config_entry>_ExprResult_0                                                    (ContainsInstancedReference)
// TArray<enum class EVerseFalse>     __verse_0xFFC68BC5_Array_1                                       (ContainsInstancedReference)
// TArray<struct FVerseMovement_move_config_entry>_ForResult_1                                                     (ContainsInstancedReference)
// int64                              _ForIndex_2                                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              _ForLength_3                                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVerseFalse             __verse_0xFB88B569_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_4                                                    (NoDestructor, HasGetValueTypeHash)

struct FVerseMovement_move_config UVerseMovement::VerseMovement_move_config_Factory(const TArray<struct FVerseMovement_move_config_entry>& _ExprResult_0, const TArray<enum class EVerseFalse>& __verse_0xFFC68BC5_Array_1, const TArray<struct FVerseMovement_move_config_entry>& _ForResult_1, int64 _ForIndex_2, int64 _ForLength_3, enum class EVerseFalse __verse_0xFB88B569_Item_3, uint8 _ExprResult_4)
{
	static auto Func = Class->GetFunction("VerseMovement", "VerseMovement_move_config$Factory");

	Params::UVerseMovement_VerseMovement_move_config_Factory_Params Parms;

	Parms._ExprResult_0 = _ExprResult_0;
	Parms.__verse_0xFFC68BC5_Array_1 = __verse_0xFFC68BC5_Array_1;
	Parms._ForResult_1 = _ForResult_1;
	Parms._ForIndex_2 = _ForIndex_2;
	Parms._ForLength_3 = _ForLength_3;
	Parms.__verse_0xFB88B569_Item_3 = __verse_0xFB88B569_Item_3;
	Parms._ExprResult_4 = _ExprResult_4;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseMovement.VerseMovement.VerseMovement_move_config_entry$OverrideFactory
// (Static, HasOutParams, HasDefaults)
// Parameters:
// struct FVerseMovement_move_config_entryRetVal                                                           (Parm, OutParm, ReturnParm)
// TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap                              (ConstParm, Parm, ContainsInstancedReference)
// FVerseStringProperty_              _ExprResultStack_0                                               (HasGetValueTypeHash)
// FOptionProperty_                   _ExprResult_1                                                    (NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_2                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_3                                               (HasGetValueTypeHash)
// FOptionProperty_                   _ExprResult_4                                                    (NoDestructor, HasGetValueTypeHash)
// TArray<struct FVerseMovement_move_trigger>_ExprResult_5                                                    (ContainsInstancedReference)
// TArray<enum class EVerseFalse>     __verse_0xFFC68BC5_Array_1                                       (ContainsInstancedReference)
// TArray<struct FVerseMovement_move_trigger>_ForResult_6                                                     (ContainsInstancedReference)
// int64                              _ForIndex_7                                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              _ForLength_8                                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVerseFalse             __verse_0xFB88B569_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_9                                                    (NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_10                                              (HasGetValueTypeHash)
// FOptionProperty_                   _ExprResult_11                                                   (NoDestructor, HasGetValueTypeHash)
// TArray<struct FVerseMovement_move_response>_ExprResult_12                                                   (ContainsInstancedReference)
// TArray<enum class EVerseFalse>     __verse_0xFFC68BC5_Array_5                                       (ContainsInstancedReference)
// TArray<struct FVerseMovement_move_response>_ForResult_13                                                    (ContainsInstancedReference)
// int64                              _ForIndex_14                                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              _ForLength_15                                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVerseFalse             __verse_0xFB88B569_Item_7                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_16                                                   (NoDestructor, HasGetValueTypeHash)

struct FVerseMovement_move_config_entry UVerseMovement::VerseMovement_move_config_entry_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap, FVerseStringProperty_ _ExprResultStack_0, FOptionProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResult_2, FVerseStringProperty_ _ExprResultStack_3, FOptionProperty_ _ExprResult_4, const TArray<struct FVerseMovement_move_trigger>& _ExprResult_5, const TArray<enum class EVerseFalse>& __verse_0xFFC68BC5_Array_1, const TArray<struct FVerseMovement_move_trigger>& _ForResult_6, int64 _ForIndex_7, int64 _ForLength_8, enum class EVerseFalse __verse_0xFB88B569_Item_3, uint8 _ExprResult_9, FVerseStringProperty_ _ExprResultStack_10, FOptionProperty_ _ExprResult_11, const TArray<struct FVerseMovement_move_response>& _ExprResult_12, const TArray<enum class EVerseFalse>& __verse_0xFFC68BC5_Array_5, const TArray<struct FVerseMovement_move_response>& _ForResult_13, int64 _ForIndex_14, int64 _ForLength_15, enum class EVerseFalse __verse_0xFB88B569_Item_7, uint8 _ExprResult_16)
{
	static auto Func = Class->GetFunction("VerseMovement", "VerseMovement_move_config_entry$OverrideFactory");

	Params::UVerseMovement_VerseMovement_move_config_entry_OverrideFactory_Params Parms;

	Parms.__verse_0xFB48ED96__InitOverrideMap = __verse_0xFB48ED96__InitOverrideMap;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResultStack_3 = _ExprResultStack_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms.__verse_0xFFC68BC5_Array_1 = __verse_0xFFC68BC5_Array_1;
	Parms._ForResult_6 = _ForResult_6;
	Parms._ForIndex_7 = _ForIndex_7;
	Parms._ForLength_8 = _ForLength_8;
	Parms.__verse_0xFB88B569_Item_3 = __verse_0xFB88B569_Item_3;
	Parms._ExprResult_9 = _ExprResult_9;
	Parms._ExprResultStack_10 = _ExprResultStack_10;
	Parms._ExprResult_11 = _ExprResult_11;
	Parms._ExprResult_12 = _ExprResult_12;
	Parms.__verse_0xFFC68BC5_Array_5 = __verse_0xFFC68BC5_Array_5;
	Parms._ForResult_13 = _ForResult_13;
	Parms._ForIndex_14 = _ForIndex_14;
	Parms._ForLength_15 = _ForLength_15;
	Parms.__verse_0xFB88B569_Item_7 = __verse_0xFB88B569_Item_7;
	Parms._ExprResult_16 = _ExprResult_16;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseMovement.VerseMovement.VerseMovement_move_config_entry$Factory
// (Static, HasOutParams, HasDefaults)
// Parameters:
// struct FVerseMovement_move_config_entryRetVal                                                           (Parm, OutParm, ReturnParm)
// FVerseStringProperty_              _ExprResult_0                                                    (HasGetValueTypeHash)
// TArray<struct FVerseMovement_move_trigger>_ExprResult_1                                                    (ContainsInstancedReference)
// TArray<enum class EVerseFalse>     __verse_0xFFC68BC5_Array_1                                       (ContainsInstancedReference)
// TArray<struct FVerseMovement_move_trigger>_ForResult_2                                                     (ContainsInstancedReference)
// int64                              _ForIndex_3                                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              _ForLength_4                                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVerseFalse             __verse_0xFB88B569_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_5                                                    (NoDestructor, HasGetValueTypeHash)
// TArray<struct FVerseMovement_move_response>_ExprResult_6                                                    (ContainsInstancedReference)
// TArray<enum class EVerseFalse>     __verse_0xFFC68BC5_Array_5                                       (ContainsInstancedReference)
// TArray<struct FVerseMovement_move_response>_ForResult_7                                                     (ContainsInstancedReference)
// int64                              _ForIndex_8                                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              _ForLength_9                                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVerseFalse             __verse_0xFB88B569_Item_7                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_10                                                   (NoDestructor, HasGetValueTypeHash)

struct FVerseMovement_move_config_entry UVerseMovement::VerseMovement_move_config_entry_Factory(FVerseStringProperty_ _ExprResult_0, const TArray<struct FVerseMovement_move_trigger>& _ExprResult_1, const TArray<enum class EVerseFalse>& __verse_0xFFC68BC5_Array_1, const TArray<struct FVerseMovement_move_trigger>& _ForResult_2, int64 _ForIndex_3, int64 _ForLength_4, enum class EVerseFalse __verse_0xFB88B569_Item_3, uint8 _ExprResult_5, const TArray<struct FVerseMovement_move_response>& _ExprResult_6, const TArray<enum class EVerseFalse>& __verse_0xFFC68BC5_Array_5, const TArray<struct FVerseMovement_move_response>& _ForResult_7, int64 _ForIndex_8, int64 _ForLength_9, enum class EVerseFalse __verse_0xFB88B569_Item_7, uint8 _ExprResult_10)
{
	static auto Func = Class->GetFunction("VerseMovement", "VerseMovement_move_config_entry$Factory");

	Params::UVerseMovement_VerseMovement_move_config_entry_Factory_Params Parms;

	Parms._ExprResult_0 = _ExprResult_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms.__verse_0xFFC68BC5_Array_1 = __verse_0xFFC68BC5_Array_1;
	Parms._ForResult_2 = _ForResult_2;
	Parms._ForIndex_3 = _ForIndex_3;
	Parms._ForLength_4 = _ForLength_4;
	Parms.__verse_0xFB88B569_Item_3 = __verse_0xFB88B569_Item_3;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms.__verse_0xFFC68BC5_Array_5 = __verse_0xFFC68BC5_Array_5;
	Parms._ForResult_7 = _ForResult_7;
	Parms._ForIndex_8 = _ForIndex_8;
	Parms._ForLength_9 = _ForLength_9;
	Parms.__verse_0xFB88B569_Item_7 = __verse_0xFB88B569_Item_7;
	Parms._ExprResult_10 = _ExprResult_10;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseMovement.VerseMovement.VerseMovement_move_response$OverrideFactory
// (Static, HasOutParams, HasDefaults)
// Parameters:
// struct FVerseMovement_move_responseRetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)
// TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap                              (ConstParm, Parm, ContainsInstancedReference)
// FVerseStringProperty_              _ExprResultStack_0                                               (HasGetValueTypeHash)
// FOptionProperty_                   _ExprResult_1                                                    (NoDestructor, HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_2                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FVerseStringProperty_              _ExprResultStack_3                                               (HasGetValueTypeHash)
// FOptionProperty_                   _ExprResult_4                                                    (NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_5                                               (HasGetValueTypeHash)
// FOptionProperty_                   _ExprResult_6                                                    (NoDestructor, HasGetValueTypeHash)
// FOptionProperty_                   _ExprResult_7                                                    (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionProperty_                   __verse_0x00000000__1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_8                                                    (NoDestructor, HasGetValueTypeHash)
// FOptionProperty_                   _ExprResultStack_9                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_10                                              (HasGetValueTypeHash)
// FOptionProperty_                   _ExprResult_11                                                   (NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_12                                              (HasGetValueTypeHash)
// FOptionProperty_                   _ExprResult_13                                                   (NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_14                                              (HasGetValueTypeHash)
// FOptionProperty_                   _ExprResult_15                                                   (NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_16                                              (HasGetValueTypeHash)
// FOptionProperty_                   _ExprResult_17                                                   (NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_18                                              (HasGetValueTypeHash)
// FOptionProperty_                   _ExprResult_19                                                   (NoDestructor, HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_20                                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_21                                              (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_22                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_23                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_24                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_25                                              (HasGetValueTypeHash)
// FOptionProperty_                   _ExprResult_26                                                   (NoDestructor, HasGetValueTypeHash)

struct FVerseMovement_move_response UVerseMovement::VerseMovement_move_response_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap, FVerseStringProperty_ _ExprResultStack_0, FOptionProperty_ _ExprResult_1, const struct FSpatialMath_vector3& _ExprResult_2, FVerseStringProperty_ _ExprResultStack_3, FOptionProperty_ _ExprResult_4, FVerseStringProperty_ _ExprResultStack_5, FOptionProperty_ _ExprResult_6, FOptionProperty_ _ExprResult_7, FOptionProperty_ __verse_0x00000000__1, uint8 _ExprResult_8, FOptionProperty_ _ExprResultStack_9, FVerseStringProperty_ _ExprResultStack_10, FOptionProperty_ _ExprResult_11, FVerseStringProperty_ _ExprResultStack_12, FOptionProperty_ _ExprResult_13, FVerseStringProperty_ _ExprResultStack_14, FOptionProperty_ _ExprResult_15, FVerseStringProperty_ _ExprResultStack_16, FOptionProperty_ _ExprResult_17, FVerseStringProperty_ _ExprResultStack_18, FOptionProperty_ _ExprResult_19, const struct FSpatialMath_vector3& _ExprResult_20, TMap<FVerseStringProperty_, uint8> _ExprResultStack_21, FVerseStringProperty_ _ExprResult_22, FVerseStringProperty_ _ExprResult_23, FVerseStringProperty_ _ExprResult_24, FVerseStringProperty_ _ExprResultStack_25, FOptionProperty_ _ExprResult_26)
{
	static auto Func = Class->GetFunction("VerseMovement", "VerseMovement_move_response$OverrideFactory");

	Params::UVerseMovement_VerseMovement_move_response_OverrideFactory_Params Parms;

	Parms.__verse_0xFB48ED96__InitOverrideMap = __verse_0xFB48ED96__InitOverrideMap;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResultStack_3 = _ExprResultStack_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResultStack_5 = _ExprResultStack_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._ExprResult_7 = _ExprResult_7;
	Parms.__verse_0x00000000__1 = __verse_0x00000000__1;
	Parms._ExprResult_8 = _ExprResult_8;
	Parms._ExprResultStack_9 = _ExprResultStack_9;
	Parms._ExprResultStack_10 = _ExprResultStack_10;
	Parms._ExprResult_11 = _ExprResult_11;
	Parms._ExprResultStack_12 = _ExprResultStack_12;
	Parms._ExprResult_13 = _ExprResult_13;
	Parms._ExprResultStack_14 = _ExprResultStack_14;
	Parms._ExprResult_15 = _ExprResult_15;
	Parms._ExprResultStack_16 = _ExprResultStack_16;
	Parms._ExprResult_17 = _ExprResult_17;
	Parms._ExprResultStack_18 = _ExprResultStack_18;
	Parms._ExprResult_19 = _ExprResult_19;
	Parms._ExprResult_20 = _ExprResult_20;
	Parms._ExprResultStack_21 = _ExprResultStack_21;
	Parms._ExprResult_22 = _ExprResult_22;
	Parms._ExprResult_23 = _ExprResult_23;
	Parms._ExprResult_24 = _ExprResult_24;
	Parms._ExprResultStack_25 = _ExprResultStack_25;
	Parms._ExprResult_26 = _ExprResult_26;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseMovement.VerseMovement.VerseMovement_move_response$Factory
// (Static, HasOutParams, HasDefaults)
// Parameters:
// struct FVerseMovement_move_responseRetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)
// struct FSpatialMath_vector3        _ExprResult_0                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FOptionProperty_                   _ExprResult_1                                                    (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionProperty_                   __verse_0x00000000__1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_2                                                    (NoDestructor, HasGetValueTypeHash)
// FOptionProperty_                   _ExprResultStack_3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_4                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_5                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_6                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_7                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_8                                                    (HasGetValueTypeHash)

struct FVerseMovement_move_response UVerseMovement::VerseMovement_move_response_Factory(const struct FSpatialMath_vector3& _ExprResult_0, FOptionProperty_ _ExprResult_1, FOptionProperty_ __verse_0x00000000__1, uint8 _ExprResult_2, FOptionProperty_ _ExprResultStack_3, const struct FSpatialMath_vector3& _ExprResult_4, TMap<FVerseStringProperty_, uint8> _ExprResultStack_5, FVerseStringProperty_ _ExprResult_6, FVerseStringProperty_ _ExprResult_7, FVerseStringProperty_ _ExprResult_8)
{
	static auto Func = Class->GetFunction("VerseMovement", "VerseMovement_move_response$Factory");

	Params::UVerseMovement_VerseMovement_move_response_Factory_Params Parms;

	Parms._ExprResult_0 = _ExprResult_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms.__verse_0x00000000__1 = __verse_0x00000000__1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResultStack_3 = _ExprResultStack_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResultStack_5 = _ExprResultStack_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._ExprResult_7 = _ExprResult_7;
	Parms._ExprResult_8 = _ExprResult_8;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseMovement.VerseMovement.VerseMovement_move_trigger$OverrideFactory
// (Static, HasOutParams, HasDefaults)
// Parameters:
// struct FVerseMovement_move_trigger RetVal                                                           (Parm, OutParm, ReturnParm)
// TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap                              (ConstParm, Parm, ContainsInstancedReference)
// FVerseStringProperty_              _ExprResultStack_0                                               (HasGetValueTypeHash)
// FOptionProperty_                   _ExprResult_1                                                    (NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_2                                               (HasGetValueTypeHash)
// FOptionProperty_                   _ExprResult_3                                                    (NoDestructor, HasGetValueTypeHash)
// struct FVerseMovement_move_input_trigger_params_ExprResult_4                                                    ()
// FVerseStringProperty_              _ExprResultStack_5                                               (HasGetValueTypeHash)
// FOptionProperty_                   _ExprResult_6                                                    (NoDestructor, HasGetValueTypeHash)
// struct FVerseMovement_move_physics_trigger_params_ExprResult_7                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FVerseStringProperty_              _ExprResultStack_8                                               (HasGetValueTypeHash)
// FOptionProperty_                   _ExprResult_9                                                    (NoDestructor, HasGetValueTypeHash)
// struct FVerseMovement_move_trace_trigger_params_ExprResult_10                                                   (NoDestructor)

struct FVerseMovement_move_trigger UVerseMovement::VerseMovement_move_trigger_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap, FVerseStringProperty_ _ExprResultStack_0, FOptionProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResultStack_2, FOptionProperty_ _ExprResult_3, const struct FVerseMovement_move_input_trigger_params& _ExprResult_4, FVerseStringProperty_ _ExprResultStack_5, FOptionProperty_ _ExprResult_6, const struct FVerseMovement_move_physics_trigger_params& _ExprResult_7, FVerseStringProperty_ _ExprResultStack_8, FOptionProperty_ _ExprResult_9, const struct FVerseMovement_move_trace_trigger_params& _ExprResult_10)
{
	static auto Func = Class->GetFunction("VerseMovement", "VerseMovement_move_trigger$OverrideFactory");

	Params::UVerseMovement_VerseMovement_move_trigger_OverrideFactory_Params Parms;

	Parms.__verse_0xFB48ED96__InitOverrideMap = __verse_0xFB48ED96__InitOverrideMap;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResultStack_2 = _ExprResultStack_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResultStack_5 = _ExprResultStack_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._ExprResult_7 = _ExprResult_7;
	Parms._ExprResultStack_8 = _ExprResultStack_8;
	Parms._ExprResult_9 = _ExprResult_9;
	Parms._ExprResult_10 = _ExprResult_10;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseMovement.VerseMovement.VerseMovement_move_trigger$Factory
// (Static, HasOutParams, HasDefaults)
// Parameters:
// struct FVerseMovement_move_trigger RetVal                                                           (Parm, OutParm, ReturnParm)
// struct FVerseMovement_move_input_trigger_params_ExprResult_0                                                    ()
// struct FVerseMovement_move_physics_trigger_params_ExprResult_1                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVerseMovement_move_trace_trigger_params_ExprResult_2                                                    (NoDestructor)

struct FVerseMovement_move_trigger UVerseMovement::VerseMovement_move_trigger_Factory(const struct FVerseMovement_move_input_trigger_params& _ExprResult_0, const struct FVerseMovement_move_physics_trigger_params& _ExprResult_1, const struct FVerseMovement_move_trace_trigger_params& _ExprResult_2)
{
	static auto Func = Class->GetFunction("VerseMovement", "VerseMovement_move_trigger$Factory");

	Params::UVerseMovement_VerseMovement_move_trigger_Factory_Params Parms;

	Parms._ExprResult_0 = _ExprResult_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResult_2 = _ExprResult_2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseMovement.VerseMovement.VerseMovement_move_trace_trigger_params$OverrideFactory
// (Static, HasOutParams, HasDefaults)
// Parameters:
// struct FVerseMovement_move_trace_trigger_paramsRetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)
// TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap                              (ConstParm, Parm, ContainsInstancedReference)
// FVerseStringProperty_              _ExprResultStack_0                                               (HasGetValueTypeHash)
// FOptionProperty_                   _ExprResult_1                                                    (NoDestructor, HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_2                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FVerseStringProperty_              _ExprResultStack_3                                               (HasGetValueTypeHash)
// FOptionProperty_                   _ExprResult_4                                                    (NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_5                                               (HasGetValueTypeHash)
// FOptionProperty_                   _ExprResult_6                                                    (NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_7                                               (HasGetValueTypeHash)
// FOptionProperty_                   _ExprResult_8                                                    (NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_9                                               (HasGetValueTypeHash)
// FOptionProperty_                   _ExprResult_10                                                   (NoDestructor, HasGetValueTypeHash)
// FOptionProperty_                   _ExprResult_11                                                   (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionProperty_                   __verse_0x00000000__1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_12                                                   (NoDestructor, HasGetValueTypeHash)
// FOptionProperty_                   _ExprResultStack_13                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVerseMovement_move_trace_trigger_params UVerseMovement::VerseMovement_move_trace_trigger_params_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap, FVerseStringProperty_ _ExprResultStack_0, FOptionProperty_ _ExprResult_1, const struct FSpatialMath_vector3& _ExprResult_2, FVerseStringProperty_ _ExprResultStack_3, FOptionProperty_ _ExprResult_4, FVerseStringProperty_ _ExprResultStack_5, FOptionProperty_ _ExprResult_6, FVerseStringProperty_ _ExprResultStack_7, FOptionProperty_ _ExprResult_8, FVerseStringProperty_ _ExprResultStack_9, FOptionProperty_ _ExprResult_10, FOptionProperty_ _ExprResult_11, FOptionProperty_ __verse_0x00000000__1, uint8 _ExprResult_12, FOptionProperty_ _ExprResultStack_13)
{
	static auto Func = Class->GetFunction("VerseMovement", "VerseMovement_move_trace_trigger_params$OverrideFactory");

	Params::UVerseMovement_VerseMovement_move_trace_trigger_params_OverrideFactory_Params Parms;

	Parms.__verse_0xFB48ED96__InitOverrideMap = __verse_0xFB48ED96__InitOverrideMap;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResultStack_3 = _ExprResultStack_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResultStack_5 = _ExprResultStack_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._ExprResultStack_7 = _ExprResultStack_7;
	Parms._ExprResult_8 = _ExprResult_8;
	Parms._ExprResultStack_9 = _ExprResultStack_9;
	Parms._ExprResult_10 = _ExprResult_10;
	Parms._ExprResult_11 = _ExprResult_11;
	Parms.__verse_0x00000000__1 = __verse_0x00000000__1;
	Parms._ExprResult_12 = _ExprResult_12;
	Parms._ExprResultStack_13 = _ExprResultStack_13;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseMovement.VerseMovement.VerseMovement_move_trace_trigger_params$Factory
// (Static, HasOutParams, HasDefaults)
// Parameters:
// struct FVerseMovement_move_trace_trigger_paramsRetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)
// struct FSpatialMath_vector3        _ExprResult_0                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FOptionProperty_                   _ExprResult_1                                                    (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionProperty_                   __verse_0x00000000__1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_2                                                    (NoDestructor, HasGetValueTypeHash)
// FOptionProperty_                   _ExprResultStack_3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVerseMovement_move_trace_trigger_params UVerseMovement::VerseMovement_move_trace_trigger_params_Factory(const struct FSpatialMath_vector3& _ExprResult_0, FOptionProperty_ _ExprResult_1, FOptionProperty_ __verse_0x00000000__1, uint8 _ExprResult_2, FOptionProperty_ _ExprResultStack_3)
{
	static auto Func = Class->GetFunction("VerseMovement", "VerseMovement_move_trace_trigger_params$Factory");

	Params::UVerseMovement_VerseMovement_move_trace_trigger_params_Factory_Params Parms;

	Parms._ExprResult_0 = _ExprResult_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms.__verse_0x00000000__1 = __verse_0x00000000__1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResultStack_3 = _ExprResultStack_3;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseMovement.VerseMovement.VerseMovement_move_physics_trigger_params$OverrideFactory
// (Static, HasOutParams, HasDefaults)
// Parameters:
// struct FVerseMovement_move_physics_trigger_paramsRetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap                              (ConstParm, Parm, ContainsInstancedReference)
// FVerseStringProperty_              _ExprResultStack_0                                               (HasGetValueTypeHash)
// FOptionProperty_                   _ExprResult_1                                                    (NoDestructor, HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_2                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FVerseMovement_move_physics_trigger_params UVerseMovement::VerseMovement_move_physics_trigger_params_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap, FVerseStringProperty_ _ExprResultStack_0, FOptionProperty_ _ExprResult_1, const struct FSpatialMath_vector3& _ExprResult_2)
{
	static auto Func = Class->GetFunction("VerseMovement", "VerseMovement_move_physics_trigger_params$OverrideFactory");

	Params::UVerseMovement_VerseMovement_move_physics_trigger_params_OverrideFactory_Params Parms;

	Parms.__verse_0xFB48ED96__InitOverrideMap = __verse_0xFB48ED96__InitOverrideMap;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResult_2 = _ExprResult_2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseMovement.VerseMovement.VerseMovement_move_physics_trigger_params$Factory
// (Static, HasOutParams, HasDefaults)
// Parameters:
// struct FVerseMovement_move_physics_trigger_paramsRetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FSpatialMath_vector3        _ExprResult_0                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FVerseMovement_move_physics_trigger_params UVerseMovement::VerseMovement_move_physics_trigger_params_Factory(const struct FSpatialMath_vector3& _ExprResult_0)
{
	static auto Func = Class->GetFunction("VerseMovement", "VerseMovement_move_physics_trigger_params$Factory");

	Params::UVerseMovement_VerseMovement_move_physics_trigger_params_Factory_Params Parms;

	Parms._ExprResult_0 = _ExprResult_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseMovement.VerseMovement.VerseMovement_move_input_trigger_params$OverrideFactory
// (Static, HasOutParams, HasDefaults)
// Parameters:
// struct FVerseMovement_move_input_trigger_paramsRetVal                                                           (Parm, OutParm, ReturnParm)
// TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap                              (ConstParm, Parm, ContainsInstancedReference)
// FVerseStringProperty_              _ExprResultStack_0                                               (HasGetValueTypeHash)
// FOptionProperty_                   _ExprResult_1                                                    (NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_2                                               (HasGetValueTypeHash)
// FOptionProperty_                   _ExprResult_3                                                    (NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_4                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_5                                               (HasGetValueTypeHash)
// FOptionProperty_                   _ExprResult_6                                                    (NoDestructor, HasGetValueTypeHash)
// FOptionProperty_                   _ExprResult_7                                                    (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionProperty_                   __verse_0x00000000__1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_8                                                    (NoDestructor, HasGetValueTypeHash)
// FOptionProperty_                   _ExprResultStack_9                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_10                                              (HasGetValueTypeHash)
// FOptionProperty_                   _ExprResult_11                                                   (NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_12                                              (HasGetValueTypeHash)
// FOptionProperty_                   _ExprResult_13                                                   (NoDestructor, HasGetValueTypeHash)
// struct FSpatialMath_vector2        _ExprResult_14                                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_15                                              (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_16                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_17                                                   (HasGetValueTypeHash)

struct FVerseMovement_move_input_trigger_params UVerseMovement::VerseMovement_move_input_trigger_params_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap, FVerseStringProperty_ _ExprResultStack_0, FOptionProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResultStack_2, FOptionProperty_ _ExprResult_3, FVerseStringProperty_ _ExprResult_4, FVerseStringProperty_ _ExprResultStack_5, FOptionProperty_ _ExprResult_6, FOptionProperty_ _ExprResult_7, FOptionProperty_ __verse_0x00000000__1, uint8 _ExprResult_8, FOptionProperty_ _ExprResultStack_9, FVerseStringProperty_ _ExprResultStack_10, FOptionProperty_ _ExprResult_11, FVerseStringProperty_ _ExprResultStack_12, FOptionProperty_ _ExprResult_13, const struct FSpatialMath_vector2& _ExprResult_14, TMap<FVerseStringProperty_, uint8> _ExprResultStack_15, FVerseStringProperty_ _ExprResult_16, FVerseStringProperty_ _ExprResult_17)
{
	static auto Func = Class->GetFunction("VerseMovement", "VerseMovement_move_input_trigger_params$OverrideFactory");

	Params::UVerseMovement_VerseMovement_move_input_trigger_params_OverrideFactory_Params Parms;

	Parms.__verse_0xFB48ED96__InitOverrideMap = __verse_0xFB48ED96__InitOverrideMap;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResultStack_2 = _ExprResultStack_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResultStack_5 = _ExprResultStack_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._ExprResult_7 = _ExprResult_7;
	Parms.__verse_0x00000000__1 = __verse_0x00000000__1;
	Parms._ExprResult_8 = _ExprResult_8;
	Parms._ExprResultStack_9 = _ExprResultStack_9;
	Parms._ExprResultStack_10 = _ExprResultStack_10;
	Parms._ExprResult_11 = _ExprResult_11;
	Parms._ExprResultStack_12 = _ExprResultStack_12;
	Parms._ExprResult_13 = _ExprResult_13;
	Parms._ExprResult_14 = _ExprResult_14;
	Parms._ExprResultStack_15 = _ExprResultStack_15;
	Parms._ExprResult_16 = _ExprResult_16;
	Parms._ExprResult_17 = _ExprResult_17;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseMovement.VerseMovement.VerseMovement_move_input_trigger_params$Factory
// (Static, HasOutParams, HasDefaults)
// Parameters:
// struct FVerseMovement_move_input_trigger_paramsRetVal                                                           (Parm, OutParm, ReturnParm)
// FVerseStringProperty_              _ExprResult_0                                                    (HasGetValueTypeHash)
// FOptionProperty_                   _ExprResult_1                                                    (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionProperty_                   __verse_0x00000000__1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_2                                                    (NoDestructor, HasGetValueTypeHash)
// FOptionProperty_                   _ExprResultStack_3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpatialMath_vector2        _ExprResult_4                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_5                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_6                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_7                                                    (HasGetValueTypeHash)

struct FVerseMovement_move_input_trigger_params UVerseMovement::VerseMovement_move_input_trigger_params_Factory(FVerseStringProperty_ _ExprResult_0, FOptionProperty_ _ExprResult_1, FOptionProperty_ __verse_0x00000000__1, uint8 _ExprResult_2, FOptionProperty_ _ExprResultStack_3, const struct FSpatialMath_vector2& _ExprResult_4, TMap<FVerseStringProperty_, uint8> _ExprResultStack_5, FVerseStringProperty_ _ExprResult_6, FVerseStringProperty_ _ExprResult_7)
{
	static auto Func = Class->GetFunction("VerseMovement", "VerseMovement_move_input_trigger_params$Factory");

	Params::UVerseMovement_VerseMovement_move_input_trigger_params_Factory_Params Parms;

	Parms._ExprResult_0 = _ExprResult_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms.__verse_0x00000000__1 = __verse_0x00000000__1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResultStack_3 = _ExprResultStack_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResultStack_5 = _ExprResultStack_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._ExprResult_7 = _ExprResult_7;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseMovement.VerseMovement.$InitCDO
// ()
// Parameters:

void UVerseMovement::_InitCDO()
{
	static auto Func = Class->GetFunction("VerseMovement", "$InitCDO");

	Params::UVerseMovement__InitCDO_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseMovement.VerseMovement_move_config_asset.$InitInstance
// ()
// Parameters:

void UVerseMovement_move_config_asset::_InitInstance()
{
	static auto Func = Class->GetFunction("VerseMovement_move_config_asset", "$InitInstance");

	Params::UVerseMovement_move_config_asset__InitInstance_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseMovement.VerseMovement_move_config_asset.$Block
// ()
// Parameters:

void UVerseMovement_move_config_asset::_Block()
{
	static auto Func = Class->GetFunction("VerseMovement_move_config_asset", "$Block");

	Params::UVerseMovement_move_config_asset__Block_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseMovement.VerseMovement_move_config_asset.$InitCDO
// ()
// Parameters:

void UVerseMovement_move_config_asset::_InitCDO()
{
	static auto Func = Class->GetFunction("VerseMovement_move_config_asset", "$InitCDO");

	Params::UVerseMovement_move_config_asset__InitCDO_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseMovement.VerseMovement_movement_component._L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetVelocity_L_Nvector3_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FSpatialMath_vector3        __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UVerseMovement_movement_component::_L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetVelocity_L_Nvector3_R(const struct FSpatialMath_vector3& __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("VerseMovement_movement_component", "_L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetVelocity_L_Nvector3_R");

	Params::UVerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetVelocity_L_Nvector3_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseMovement.VerseMovement_movement_component._L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetRotation_L_Nrotation_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FVerseRotation              __verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor)

void UVerseMovement_movement_component::_L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetRotation_L_Nrotation_R(const struct FVerseRotation& __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("VerseMovement_movement_component", "_L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetRotation_L_Nrotation_R");

	Params::UVerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetRotation_L_Nrotation_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseMovement.VerseMovement_movement_component._L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetPosition_L_Nvector3_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FSpatialMath_vector3        __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UVerseMovement_movement_component::_L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetPosition_L_Nvector3_R(const struct FSpatialMath_vector3& __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("VerseMovement_movement_component", "_L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetPosition_L_Nvector3_R");

	Params::UVerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetPosition_L_Nvector3_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseMovement.VerseMovement_movement_component._L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetEnabled_L_Nlogic_R
// (Native, Public, BlueprintCallable)
// Parameters:
// uint8                              __verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor, HasGetValueTypeHash)

void UVerseMovement_movement_component::_L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetEnabled_L_Nlogic_R(uint8 __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("VerseMovement_movement_component", "_L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetEnabled_L_Nlogic_R");

	Params::UVerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetEnabled_L_Nlogic_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseMovement.VerseMovement_movement_component._L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetConfig_L_Nmove__config__asset_R
// (Native, Public, BlueprintCallable)
// Parameters:
// class UVerseMovement_move_config_asset*__verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

void UVerseMovement_movement_component::_L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetConfig_L_Nmove__config__asset_R(class UVerseMovement_move_config_asset* __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("VerseMovement_movement_component", "_L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetConfig_L_Nmove__config__asset_R");

	Params::UVerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetConfig_L_Nmove__config__asset_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseMovement.VerseMovement_movement_component._L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetConfig_L_Nmove__config_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FVerseMovement_move_config  __verse_0xB2CDDD72_Argument                                      (Parm)

void UVerseMovement_movement_component::_L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetConfig_L_Nmove__config_R(const struct FVerseMovement_move_config& __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("VerseMovement_movement_component", "_L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetConfig_L_Nmove__config_R");

	Params::UVerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetConfig_L_Nmove__config_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseMovement.VerseMovement_movement_component._L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_REnableInput_L_Nplayer__component_R
// (Native, Public, BlueprintCallable)
// Parameters:
// class USimulation_player_component*__verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

void UVerseMovement_movement_component::_L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_REnableInput_L_Nplayer__component_R(class USimulation_player_component* __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("VerseMovement_movement_component", "_L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_REnableInput_L_Nplayer__component_R");

	Params::UVerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_REnableInput_L_Nplayer__component_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseMovement.VerseMovement_movement_component._L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RDisableInput_L_Nplayer__component_R
// (Native, Public, BlueprintCallable)
// Parameters:
// class USimulation_player_component*__verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

void UVerseMovement_movement_component::_L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RDisableInput_L_Nplayer__component_R(class USimulation_player_component* __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("VerseMovement_movement_component", "_L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RDisableInput_L_Nplayer__component_R");

	Params::UVerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RDisableInput_L_Nplayer__component_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseMovement.VerseMovement_movement_component._L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RAddImpulse_L_Nvector3_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FSpatialMath_vector3        __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UVerseMovement_movement_component::_L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RAddImpulse_L_Nvector3_R(const struct FSpatialMath_vector3& __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("VerseMovement_movement_component", "_L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RAddImpulse_L_Nvector3_R");

	Params::UVerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RAddImpulse_L_Nvector3_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseMovement.VerseMovement_movement_component._L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RAddAngularImpulse_L_Nvector3_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FSpatialMath_vector3        __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UVerseMovement_movement_component::_L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RAddAngularImpulse_L_Nvector3_R(const struct FSpatialMath_vector3& __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("VerseMovement_movement_component", "_L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RAddAngularImpulse_L_Nvector3_R");

	Params::UVerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RAddAngularImpulse_L_Nvector3_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseMovement.VerseMovement_movement_component.$InitInstance
// ()
// Parameters:

void UVerseMovement_movement_component::_InitInstance()
{
	static auto Func = Class->GetFunction("VerseMovement_movement_component", "$InitInstance");

	Params::UVerseMovement_movement_component__InitInstance_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseMovement.VerseMovement_movement_component.$Block
// ()
// Parameters:

void UVerseMovement_movement_component::_Block()
{
	static auto Func = Class->GetFunction("VerseMovement_movement_component", "$Block");

	Params::UVerseMovement_movement_component__Block_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseMovement.VerseMovement_movement_component.$InitCDO
// ()
// Parameters:

void UVerseMovement_movement_component::_InitCDO()
{
	static auto Func = Class->GetFunction("VerseMovement_movement_component", "$InitCDO");

	Params::UVerseMovement_movement_component__InitCDO_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseMovement.VerseMovement_VerseMovementUtil.$InitCDO
// (HasDefaults)
// Parameters:
// struct FVerseMovement_move_config  _ExprResult_0                                                    ()
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_1                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_2                                                    (HasGetValueTypeHash)
// TArray<struct FVerseMovement_move_config_entry>_ExprResult_3                                                    (ContainsInstancedReference)
// struct FVerseMovement_move_config_entry_ExprResult_4                                                    ()
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_5                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_6                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_7                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_8                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_9                                                    (HasGetValueTypeHash)
// TArray<struct FVerseMovement_move_trigger>_ExprResult_10                                                   (ContainsInstancedReference)
// struct FVerseMovement_move_trigger _ExprResult_11                                                   ()
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_12                                              (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_13                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_14                                                   (HasGetValueTypeHash)
// struct FVerseMovement_move_input_trigger_params_ExprResult_15                                                   ()
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_16                                              (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_17                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_18                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_19                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_20                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_21                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_22                                                   (HasGetValueTypeHash)
// FOptionProperty_                   _ExprResult_23                                                   (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionProperty_                   __verse_0x00000000__1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_24                                                   (NoDestructor, HasGetValueTypeHash)
// FOptionProperty_                   _ExprResultStack_25                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpatialMath_vector2        _ExprResult_26                                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_27                                              (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_28                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_29                                                   (HasGetValueTypeHash)
// TArray<struct FVerseMovement_move_response>_ExprResult_30                                                   (ContainsInstancedReference)
// struct FVerseMovement_move_response_ExprResult_31                                                   (NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_32                                              (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_33                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_34                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_35                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_36                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_37                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_38                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_39                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_40                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_41                                                   (HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_42                                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_43                                              (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_44                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_45                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_46                                                   (HasGetValueTypeHash)
// FOptionProperty_                   _ExprResult_47                                                   (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionProperty_                   __verse_0x00000000__3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_48                                                   (NoDestructor, HasGetValueTypeHash)
// FOptionProperty_                   _ExprResultStack_49                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_50                                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_51                                              (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_52                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_53                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_54                                                   (HasGetValueTypeHash)
// struct FVerseMovement_move_config_entry_ExprResult_55                                                   ()
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_56                                              (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_57                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_58                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_59                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_60                                                   (HasGetValueTypeHash)
// TArray<struct FVerseMovement_move_trigger>_ExprResult_61                                                   (ContainsInstancedReference)
// struct FVerseMovement_move_trigger _ExprResult_62                                                   ()
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_63                                              (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_64                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_65                                                   (HasGetValueTypeHash)
// struct FVerseMovement_move_input_trigger_params_ExprResult_66                                                   ()
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_67                                              (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_68                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_69                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_70                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_71                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_72                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_73                                                   (HasGetValueTypeHash)
// FOptionProperty_                   _ExprResult_74                                                   (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionProperty_                   __verse_0x00000000__5                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_75                                                   (NoDestructor, HasGetValueTypeHash)
// FOptionProperty_                   _ExprResultStack_76                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpatialMath_vector2        _ExprResult_77                                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_78                                              (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_79                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_80                                                   (HasGetValueTypeHash)
// TArray<struct FVerseMovement_move_response>_ExprResult_81                                                   (ContainsInstancedReference)
// struct FVerseMovement_move_response_ExprResult_82                                                   (NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_83                                              (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_84                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_85                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_86                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_87                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_88                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_89                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_90                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_91                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_92                                                   (HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_93                                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_94                                              (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_95                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_96                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_97                                                   (HasGetValueTypeHash)
// FOptionProperty_                   _ExprResult_98                                                   (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionProperty_                   __verse_0x00000000__7                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_99                                                   (NoDestructor, HasGetValueTypeHash)
// FOptionProperty_                   _ExprResultStack_100                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_101                                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_102                                             (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_103                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_104                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_105                                                  (HasGetValueTypeHash)
// struct FVerseMovement_move_config_entry_ExprResult_106                                                  ()
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_107                                             (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_108                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_109                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_110                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_111                                                  (HasGetValueTypeHash)
// TArray<struct FVerseMovement_move_trigger>_ExprResult_112                                                  (ContainsInstancedReference)
// struct FVerseMovement_move_trigger _ExprResult_113                                                  ()
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_114                                             (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_115                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_116                                                  (HasGetValueTypeHash)
// struct FVerseMovement_move_input_trigger_params_ExprResult_117                                                  ()
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_118                                             (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_119                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_120                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_121                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_122                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_123                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_124                                                  (HasGetValueTypeHash)
// FOptionProperty_                   _ExprResult_125                                                  (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionProperty_                   __verse_0x00000000__9                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_126                                                  (NoDestructor, HasGetValueTypeHash)
// FOptionProperty_                   _ExprResultStack_127                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpatialMath_vector2        _ExprResult_128                                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_129                                             (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_130                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_131                                                  (HasGetValueTypeHash)
// struct FVerseMovement_move_trigger _ExprResult_132                                                  ()
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_133                                             (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_134                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_135                                                  (HasGetValueTypeHash)
// struct FVerseMovement_move_trace_trigger_params_ExprResult_136                                                  (NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_137                                             (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_138                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_139                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_140                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_141                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_142                                                  (HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_143                                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_144                                             (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_145                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_146                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_147                                                  (HasGetValueTypeHash)
// FOptionProperty_                   _ExprResult_148                                                  (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionProperty_                   __verse_0x00000000__11                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_149                                                  (NoDestructor, HasGetValueTypeHash)
// FOptionProperty_                   _ExprResultStack_150                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVerseMovement_move_response>_ExprResult_151                                                  (ContainsInstancedReference)
// struct FVerseMovement_move_response_ExprResult_152                                                  (NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_153                                             (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_154                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_155                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_156                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_157                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_158                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_159                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_160                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_161                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_162                                                  (HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_163                                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_164                                             (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_165                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_166                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_167                                                  (HasGetValueTypeHash)
// FOptionProperty_                   _ExprResult_168                                                  (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionProperty_                   __verse_0x00000000__13                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_169                                                  (NoDestructor, HasGetValueTypeHash)
// FOptionProperty_                   _ExprResultStack_170                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_171                                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_172                                             (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_173                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_174                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_175                                                  (HasGetValueTypeHash)
// struct FVerseMovement_move_config_entry_ExprResult_176                                                  ()
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_177                                             (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_178                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_179                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_180                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_181                                                  (HasGetValueTypeHash)
// TArray<struct FVerseMovement_move_trigger>_ExprResult_182                                                  (ContainsInstancedReference)
// struct FVerseMovement_move_trigger _ExprResult_183                                                  ()
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_184                                             (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_185                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_186                                                  (HasGetValueTypeHash)
// struct FVerseMovement_move_input_trigger_params_ExprResult_187                                                  ()
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_188                                             (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_189                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_190                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_191                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_192                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_193                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_194                                                  (HasGetValueTypeHash)
// FOptionProperty_                   _ExprResult_195                                                  (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionProperty_                   __verse_0x00000000__15                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_196                                                  (NoDestructor, HasGetValueTypeHash)
// FOptionProperty_                   _ExprResultStack_197                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpatialMath_vector2        _ExprResult_198                                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_199                                             (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_200                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_201                                                  (HasGetValueTypeHash)
// struct FVerseMovement_move_trigger _ExprResult_202                                                  ()
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_203                                             (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_204                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_205                                                  (HasGetValueTypeHash)
// struct FVerseMovement_move_trace_trigger_params_ExprResult_206                                                  (NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_207                                             (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_208                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_209                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_210                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_211                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_212                                                  (HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_213                                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_214                                             (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_215                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_216                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_217                                                  (HasGetValueTypeHash)
// FOptionProperty_                   _ExprResult_218                                                  (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionProperty_                   __verse_0x00000000__17                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_219                                                  (NoDestructor, HasGetValueTypeHash)
// FOptionProperty_                   _ExprResultStack_220                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVerseMovement_move_response>_ExprResult_221                                                  (ContainsInstancedReference)
// struct FVerseMovement_move_response_ExprResult_222                                                  (NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_223                                             (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_224                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_225                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_226                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_227                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_228                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_229                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_230                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_231                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_232                                                  (HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_233                                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_234                                             (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_235                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_236                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_237                                                  (HasGetValueTypeHash)
// FOptionProperty_                   _ExprResult_238                                                  (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionProperty_                   __verse_0x00000000__19                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_239                                                  (NoDestructor, HasGetValueTypeHash)
// FOptionProperty_                   _ExprResultStack_240                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_241                                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_242                                             (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_243                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_244                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_245                                                  (HasGetValueTypeHash)
// struct FVerseMovement_move_config_entry_ExprResult_246                                                  ()
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_247                                             (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_248                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_249                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_250                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_251                                                  (HasGetValueTypeHash)
// TArray<struct FVerseMovement_move_trigger>_ExprResult_252                                                  (ContainsInstancedReference)
// struct FVerseMovement_move_trigger _ExprResult_253                                                  ()
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_254                                             (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_255                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_256                                                  (HasGetValueTypeHash)
// struct FVerseMovement_move_input_trigger_params_ExprResult_257                                                  ()
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_258                                             (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_259                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_260                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_261                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_262                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_263                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_264                                                  (HasGetValueTypeHash)
// FOptionProperty_                   _ExprResult_265                                                  (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionProperty_                   __verse_0x00000000__21                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_266                                                  (NoDestructor, HasGetValueTypeHash)
// FOptionProperty_                   _ExprResultStack_267                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpatialMath_vector2        _ExprResult_268                                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_269                                             (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_270                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_271                                                  (HasGetValueTypeHash)
// TArray<struct FVerseMovement_move_response>_ExprResult_272                                                  (ContainsInstancedReference)
// struct FVerseMovement_move_response_ExprResult_273                                                  (NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_274                                             (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_275                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_276                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_277                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_278                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_279                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_280                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_281                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_282                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_283                                                  (HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_284                                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_285                                             (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_286                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_287                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_288                                                  (HasGetValueTypeHash)
// FOptionProperty_                   _ExprResult_289                                                  (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionProperty_                   __verse_0x00000000__23                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_290                                                  (NoDestructor, HasGetValueTypeHash)
// FOptionProperty_                   _ExprResultStack_291                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_292                                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_293                                             (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_294                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_295                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_296                                                  (HasGetValueTypeHash)
// struct FVerseMovement_move_config_entry_ExprResult_297                                                  ()
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_298                                             (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_299                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_300                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_301                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_302                                                  (HasGetValueTypeHash)
// TArray<struct FVerseMovement_move_trigger>_ExprResult_303                                                  (ContainsInstancedReference)
// struct FVerseMovement_move_trigger _ExprResult_304                                                  ()
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_305                                             (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_306                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_307                                                  (HasGetValueTypeHash)
// struct FVerseMovement_move_trace_trigger_params_ExprResult_308                                                  (NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_309                                             (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_310                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_311                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_312                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_313                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_314                                                  (HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_315                                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_316                                             (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_317                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_318                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_319                                                  (HasGetValueTypeHash)
// FOptionProperty_                   _ExprResult_320                                                  (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionProperty_                   __verse_0x00000000__25                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_321                                                  (NoDestructor, HasGetValueTypeHash)
// FOptionProperty_                   _ExprResultStack_322                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVerseMovement_move_response>_ExprResult_323                                                  (ContainsInstancedReference)
// struct FVerseMovement_move_response_ExprResult_324                                                  (NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_325                                             (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_326                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_327                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_328                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_329                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_330                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_331                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_332                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_333                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_334                                                  (HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_335                                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_336                                             (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_337                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_338                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_339                                                  (HasGetValueTypeHash)
// FOptionProperty_                   _ExprResult_340                                                  (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionProperty_                   __verse_0x00000000__27                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_341                                                  (NoDestructor, HasGetValueTypeHash)
// FOptionProperty_                   _ExprResultStack_342                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_343                                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_344                                             (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_345                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_346                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_347                                                  (HasGetValueTypeHash)

void UVerseMovement_VerseMovementUtil::_InitCDO(const struct FVerseMovement_move_config& _ExprResult_0, TMap<FVerseStringProperty_, uint8> _ExprResultStack_1, FVerseStringProperty_ _ExprResult_2, const TArray<struct FVerseMovement_move_config_entry>& _ExprResult_3, const struct FVerseMovement_move_config_entry& _ExprResult_4, TMap<FVerseStringProperty_, uint8> _ExprResultStack_5, FVerseStringProperty_ _ExprResult_6, FVerseStringProperty_ _ExprResult_7, FVerseStringProperty_ _ExprResult_8, FVerseStringProperty_ _ExprResult_9, const TArray<struct FVerseMovement_move_trigger>& _ExprResult_10, const struct FVerseMovement_move_trigger& _ExprResult_11, TMap<FVerseStringProperty_, uint8> _ExprResultStack_12, FVerseStringProperty_ _ExprResult_13, FVerseStringProperty_ _ExprResult_14, const struct FVerseMovement_move_input_trigger_params& _ExprResult_15, TMap<FVerseStringProperty_, uint8> _ExprResultStack_16, FVerseStringProperty_ _ExprResult_17, FVerseStringProperty_ _ExprResult_18, FVerseStringProperty_ _ExprResult_19, FVerseStringProperty_ _ExprResult_20, FVerseStringProperty_ _ExprResult_21, FVerseStringProperty_ _ExprResult_22, FOptionProperty_ _ExprResult_23, FOptionProperty_ __verse_0x00000000__1, uint8 _ExprResult_24, FOptionProperty_ _ExprResultStack_25, const struct FSpatialMath_vector2& _ExprResult_26, TMap<FVerseStringProperty_, uint8> _ExprResultStack_27, FVerseStringProperty_ _ExprResult_28, FVerseStringProperty_ _ExprResult_29, const TArray<struct FVerseMovement_move_response>& _ExprResult_30, const struct FVerseMovement_move_response& _ExprResult_31, TMap<FVerseStringProperty_, uint8> _ExprResultStack_32, FVerseStringProperty_ _ExprResult_33, FVerseStringProperty_ _ExprResult_34, FVerseStringProperty_ _ExprResult_35, FVerseStringProperty_ _ExprResult_36, FVerseStringProperty_ _ExprResult_37, FVerseStringProperty_ _ExprResult_38, FVerseStringProperty_ _ExprResult_39, FVerseStringProperty_ _ExprResult_40, FVerseStringProperty_ _ExprResult_41, const struct FSpatialMath_vector3& _ExprResult_42, TMap<FVerseStringProperty_, uint8> _ExprResultStack_43, FVerseStringProperty_ _ExprResult_44, FVerseStringProperty_ _ExprResult_45, FVerseStringProperty_ _ExprResult_46, FOptionProperty_ _ExprResult_47, FOptionProperty_ __verse_0x00000000__3, uint8 _ExprResult_48, FOptionProperty_ _ExprResultStack_49, const struct FSpatialMath_vector3& _ExprResult_50, TMap<FVerseStringProperty_, uint8> _ExprResultStack_51, FVerseStringProperty_ _ExprResult_52, FVerseStringProperty_ _ExprResult_53, FVerseStringProperty_ _ExprResult_54, const struct FVerseMovement_move_config_entry& _ExprResult_55, TMap<FVerseStringProperty_, uint8> _ExprResultStack_56, FVerseStringProperty_ _ExprResult_57, FVerseStringProperty_ _ExprResult_58, FVerseStringProperty_ _ExprResult_59, FVerseStringProperty_ _ExprResult_60, const TArray<struct FVerseMovement_move_trigger>& _ExprResult_61, const struct FVerseMovement_move_trigger& _ExprResult_62, TMap<FVerseStringProperty_, uint8> _ExprResultStack_63, FVerseStringProperty_ _ExprResult_64, FVerseStringProperty_ _ExprResult_65, const struct FVerseMovement_move_input_trigger_params& _ExprResult_66, TMap<FVerseStringProperty_, uint8> _ExprResultStack_67, FVerseStringProperty_ _ExprResult_68, FVerseStringProperty_ _ExprResult_69, FVerseStringProperty_ _ExprResult_70, FVerseStringProperty_ _ExprResult_71, FVerseStringProperty_ _ExprResult_72, FVerseStringProperty_ _ExprResult_73, FOptionProperty_ _ExprResult_74, FOptionProperty_ __verse_0x00000000__5, uint8 _ExprResult_75, FOptionProperty_ _ExprResultStack_76, const struct FSpatialMath_vector2& _ExprResult_77, TMap<FVerseStringProperty_, uint8> _ExprResultStack_78, FVerseStringProperty_ _ExprResult_79, FVerseStringProperty_ _ExprResult_80, const TArray<struct FVerseMovement_move_response>& _ExprResult_81, const struct FVerseMovement_move_response& _ExprResult_82, TMap<FVerseStringProperty_, uint8> _ExprResultStack_83, FVerseStringProperty_ _ExprResult_84, FVerseStringProperty_ _ExprResult_85, FVerseStringProperty_ _ExprResult_86, FVerseStringProperty_ _ExprResult_87, FVerseStringProperty_ _ExprResult_88, FVerseStringProperty_ _ExprResult_89, FVerseStringProperty_ _ExprResult_90, FVerseStringProperty_ _ExprResult_91, FVerseStringProperty_ _ExprResult_92, const struct FSpatialMath_vector3& _ExprResult_93, TMap<FVerseStringProperty_, uint8> _ExprResultStack_94, FVerseStringProperty_ _ExprResult_95, FVerseStringProperty_ _ExprResult_96, FVerseStringProperty_ _ExprResult_97, FOptionProperty_ _ExprResult_98, FOptionProperty_ __verse_0x00000000__7, uint8 _ExprResult_99, FOptionProperty_ _ExprResultStack_100, const struct FSpatialMath_vector3& _ExprResult_101, TMap<FVerseStringProperty_, uint8> _ExprResultStack_102, FVerseStringProperty_ _ExprResult_103, FVerseStringProperty_ _ExprResult_104, FVerseStringProperty_ _ExprResult_105, const struct FVerseMovement_move_config_entry& _ExprResult_106, TMap<FVerseStringProperty_, uint8> _ExprResultStack_107, FVerseStringProperty_ _ExprResult_108, FVerseStringProperty_ _ExprResult_109, FVerseStringProperty_ _ExprResult_110, FVerseStringProperty_ _ExprResult_111, const TArray<struct FVerseMovement_move_trigger>& _ExprResult_112, const struct FVerseMovement_move_trigger& _ExprResult_113, TMap<FVerseStringProperty_, uint8> _ExprResultStack_114, FVerseStringProperty_ _ExprResult_115, FVerseStringProperty_ _ExprResult_116, const struct FVerseMovement_move_input_trigger_params& _ExprResult_117, TMap<FVerseStringProperty_, uint8> _ExprResultStack_118, FVerseStringProperty_ _ExprResult_119, FVerseStringProperty_ _ExprResult_120, FVerseStringProperty_ _ExprResult_121, FVerseStringProperty_ _ExprResult_122, FVerseStringProperty_ _ExprResult_123, FVerseStringProperty_ _ExprResult_124, FOptionProperty_ _ExprResult_125, FOptionProperty_ __verse_0x00000000__9, uint8 _ExprResult_126, FOptionProperty_ _ExprResultStack_127, const struct FSpatialMath_vector2& _ExprResult_128, TMap<FVerseStringProperty_, uint8> _ExprResultStack_129, FVerseStringProperty_ _ExprResult_130, FVerseStringProperty_ _ExprResult_131, const struct FVerseMovement_move_trigger& _ExprResult_132, TMap<FVerseStringProperty_, uint8> _ExprResultStack_133, FVerseStringProperty_ _ExprResult_134, FVerseStringProperty_ _ExprResult_135, const struct FVerseMovement_move_trace_trigger_params& _ExprResult_136, TMap<FVerseStringProperty_, uint8> _ExprResultStack_137, FVerseStringProperty_ _ExprResult_138, FVerseStringProperty_ _ExprResult_139, FVerseStringProperty_ _ExprResult_140, FVerseStringProperty_ _ExprResult_141, FVerseStringProperty_ _ExprResult_142, const struct FSpatialMath_vector3& _ExprResult_143, TMap<FVerseStringProperty_, uint8> _ExprResultStack_144, FVerseStringProperty_ _ExprResult_145, FVerseStringProperty_ _ExprResult_146, FVerseStringProperty_ _ExprResult_147, FOptionProperty_ _ExprResult_148, FOptionProperty_ __verse_0x00000000__11, uint8 _ExprResult_149, FOptionProperty_ _ExprResultStack_150, const TArray<struct FVerseMovement_move_response>& _ExprResult_151, const struct FVerseMovement_move_response& _ExprResult_152, TMap<FVerseStringProperty_, uint8> _ExprResultStack_153, FVerseStringProperty_ _ExprResult_154, FVerseStringProperty_ _ExprResult_155, FVerseStringProperty_ _ExprResult_156, FVerseStringProperty_ _ExprResult_157, FVerseStringProperty_ _ExprResult_158, FVerseStringProperty_ _ExprResult_159, FVerseStringProperty_ _ExprResult_160, FVerseStringProperty_ _ExprResult_161, FVerseStringProperty_ _ExprResult_162, const struct FSpatialMath_vector3& _ExprResult_163, TMap<FVerseStringProperty_, uint8> _ExprResultStack_164, FVerseStringProperty_ _ExprResult_165, FVerseStringProperty_ _ExprResult_166, FVerseStringProperty_ _ExprResult_167, FOptionProperty_ _ExprResult_168, FOptionProperty_ __verse_0x00000000__13, uint8 _ExprResult_169, FOptionProperty_ _ExprResultStack_170, const struct FSpatialMath_vector3& _ExprResult_171, TMap<FVerseStringProperty_, uint8> _ExprResultStack_172, FVerseStringProperty_ _ExprResult_173, FVerseStringProperty_ _ExprResult_174, FVerseStringProperty_ _ExprResult_175, const struct FVerseMovement_move_config_entry& _ExprResult_176, TMap<FVerseStringProperty_, uint8> _ExprResultStack_177, FVerseStringProperty_ _ExprResult_178, FVerseStringProperty_ _ExprResult_179, FVerseStringProperty_ _ExprResult_180, FVerseStringProperty_ _ExprResult_181, const TArray<struct FVerseMovement_move_trigger>& _ExprResult_182, const struct FVerseMovement_move_trigger& _ExprResult_183, TMap<FVerseStringProperty_, uint8> _ExprResultStack_184, FVerseStringProperty_ _ExprResult_185, FVerseStringProperty_ _ExprResult_186, const struct FVerseMovement_move_input_trigger_params& _ExprResult_187, TMap<FVerseStringProperty_, uint8> _ExprResultStack_188, FVerseStringProperty_ _ExprResult_189, FVerseStringProperty_ _ExprResult_190, FVerseStringProperty_ _ExprResult_191, FVerseStringProperty_ _ExprResult_192, FVerseStringProperty_ _ExprResult_193, FVerseStringProperty_ _ExprResult_194, FOptionProperty_ _ExprResult_195, FOptionProperty_ __verse_0x00000000__15, uint8 _ExprResult_196, FOptionProperty_ _ExprResultStack_197, const struct FSpatialMath_vector2& _ExprResult_198, TMap<FVerseStringProperty_, uint8> _ExprResultStack_199, FVerseStringProperty_ _ExprResult_200, FVerseStringProperty_ _ExprResult_201, const struct FVerseMovement_move_trigger& _ExprResult_202, TMap<FVerseStringProperty_, uint8> _ExprResultStack_203, FVerseStringProperty_ _ExprResult_204, FVerseStringProperty_ _ExprResult_205, const struct FVerseMovement_move_trace_trigger_params& _ExprResult_206, TMap<FVerseStringProperty_, uint8> _ExprResultStack_207, FVerseStringProperty_ _ExprResult_208, FVerseStringProperty_ _ExprResult_209, FVerseStringProperty_ _ExprResult_210, FVerseStringProperty_ _ExprResult_211, FVerseStringProperty_ _ExprResult_212, const struct FSpatialMath_vector3& _ExprResult_213, TMap<FVerseStringProperty_, uint8> _ExprResultStack_214, FVerseStringProperty_ _ExprResult_215, FVerseStringProperty_ _ExprResult_216, FVerseStringProperty_ _ExprResult_217, FOptionProperty_ _ExprResult_218, FOptionProperty_ __verse_0x00000000__17, uint8 _ExprResult_219, FOptionProperty_ _ExprResultStack_220, const TArray<struct FVerseMovement_move_response>& _ExprResult_221, const struct FVerseMovement_move_response& _ExprResult_222, TMap<FVerseStringProperty_, uint8> _ExprResultStack_223, FVerseStringProperty_ _ExprResult_224, FVerseStringProperty_ _ExprResult_225, FVerseStringProperty_ _ExprResult_226, FVerseStringProperty_ _ExprResult_227, FVerseStringProperty_ _ExprResult_228, FVerseStringProperty_ _ExprResult_229, FVerseStringProperty_ _ExprResult_230, FVerseStringProperty_ _ExprResult_231, FVerseStringProperty_ _ExprResult_232, const struct FSpatialMath_vector3& _ExprResult_233, TMap<FVerseStringProperty_, uint8> _ExprResultStack_234, FVerseStringProperty_ _ExprResult_235, FVerseStringProperty_ _ExprResult_236, FVerseStringProperty_ _ExprResult_237, FOptionProperty_ _ExprResult_238, FOptionProperty_ __verse_0x00000000__19, uint8 _ExprResult_239, FOptionProperty_ _ExprResultStack_240, const struct FSpatialMath_vector3& _ExprResult_241, TMap<FVerseStringProperty_, uint8> _ExprResultStack_242, FVerseStringProperty_ _ExprResult_243, FVerseStringProperty_ _ExprResult_244, FVerseStringProperty_ _ExprResult_245, const struct FVerseMovement_move_config_entry& _ExprResult_246, TMap<FVerseStringProperty_, uint8> _ExprResultStack_247, FVerseStringProperty_ _ExprResult_248, FVerseStringProperty_ _ExprResult_249, FVerseStringProperty_ _ExprResult_250, FVerseStringProperty_ _ExprResult_251, const TArray<struct FVerseMovement_move_trigger>& _ExprResult_252, const struct FVerseMovement_move_trigger& _ExprResult_253, TMap<FVerseStringProperty_, uint8> _ExprResultStack_254, FVerseStringProperty_ _ExprResult_255, FVerseStringProperty_ _ExprResult_256, const struct FVerseMovement_move_input_trigger_params& _ExprResult_257, TMap<FVerseStringProperty_, uint8> _ExprResultStack_258, FVerseStringProperty_ _ExprResult_259, FVerseStringProperty_ _ExprResult_260, FVerseStringProperty_ _ExprResult_261, FVerseStringProperty_ _ExprResult_262, FVerseStringProperty_ _ExprResult_263, FVerseStringProperty_ _ExprResult_264, FOptionProperty_ _ExprResult_265, FOptionProperty_ __verse_0x00000000__21, uint8 _ExprResult_266, FOptionProperty_ _ExprResultStack_267, const struct FSpatialMath_vector2& _ExprResult_268, TMap<FVerseStringProperty_, uint8> _ExprResultStack_269, FVerseStringProperty_ _ExprResult_270, FVerseStringProperty_ _ExprResult_271, const TArray<struct FVerseMovement_move_response>& _ExprResult_272, const struct FVerseMovement_move_response& _ExprResult_273, TMap<FVerseStringProperty_, uint8> _ExprResultStack_274, FVerseStringProperty_ _ExprResult_275, FVerseStringProperty_ _ExprResult_276, FVerseStringProperty_ _ExprResult_277, FVerseStringProperty_ _ExprResult_278, FVerseStringProperty_ _ExprResult_279, FVerseStringProperty_ _ExprResult_280, FVerseStringProperty_ _ExprResult_281, FVerseStringProperty_ _ExprResult_282, FVerseStringProperty_ _ExprResult_283, const struct FSpatialMath_vector3& _ExprResult_284, TMap<FVerseStringProperty_, uint8> _ExprResultStack_285, FVerseStringProperty_ _ExprResult_286, FVerseStringProperty_ _ExprResult_287, FVerseStringProperty_ _ExprResult_288, FOptionProperty_ _ExprResult_289, FOptionProperty_ __verse_0x00000000__23, uint8 _ExprResult_290, FOptionProperty_ _ExprResultStack_291, const struct FSpatialMath_vector3& _ExprResult_292, TMap<FVerseStringProperty_, uint8> _ExprResultStack_293, FVerseStringProperty_ _ExprResult_294, FVerseStringProperty_ _ExprResult_295, FVerseStringProperty_ _ExprResult_296, const struct FVerseMovement_move_config_entry& _ExprResult_297, TMap<FVerseStringProperty_, uint8> _ExprResultStack_298, FVerseStringProperty_ _ExprResult_299, FVerseStringProperty_ _ExprResult_300, FVerseStringProperty_ _ExprResult_301, FVerseStringProperty_ _ExprResult_302, const TArray<struct FVerseMovement_move_trigger>& _ExprResult_303, const struct FVerseMovement_move_trigger& _ExprResult_304, TMap<FVerseStringProperty_, uint8> _ExprResultStack_305, FVerseStringProperty_ _ExprResult_306, FVerseStringProperty_ _ExprResult_307, const struct FVerseMovement_move_trace_trigger_params& _ExprResult_308, TMap<FVerseStringProperty_, uint8> _ExprResultStack_309, FVerseStringProperty_ _ExprResult_310, FVerseStringProperty_ _ExprResult_311, FVerseStringProperty_ _ExprResult_312, FVerseStringProperty_ _ExprResult_313, FVerseStringProperty_ _ExprResult_314, const struct FSpatialMath_vector3& _ExprResult_315, TMap<FVerseStringProperty_, uint8> _ExprResultStack_316, FVerseStringProperty_ _ExprResult_317, FVerseStringProperty_ _ExprResult_318, FVerseStringProperty_ _ExprResult_319, FOptionProperty_ _ExprResult_320, FOptionProperty_ __verse_0x00000000__25, uint8 _ExprResult_321, FOptionProperty_ _ExprResultStack_322, const TArray<struct FVerseMovement_move_response>& _ExprResult_323, const struct FVerseMovement_move_response& _ExprResult_324, TMap<FVerseStringProperty_, uint8> _ExprResultStack_325, FVerseStringProperty_ _ExprResult_326, FVerseStringProperty_ _ExprResult_327, FVerseStringProperty_ _ExprResult_328, FVerseStringProperty_ _ExprResult_329, FVerseStringProperty_ _ExprResult_330, FVerseStringProperty_ _ExprResult_331, FVerseStringProperty_ _ExprResult_332, FVerseStringProperty_ _ExprResult_333, FVerseStringProperty_ _ExprResult_334, const struct FSpatialMath_vector3& _ExprResult_335, TMap<FVerseStringProperty_, uint8> _ExprResultStack_336, FVerseStringProperty_ _ExprResult_337, FVerseStringProperty_ _ExprResult_338, FVerseStringProperty_ _ExprResult_339, FOptionProperty_ _ExprResult_340, FOptionProperty_ __verse_0x00000000__27, uint8 _ExprResult_341, FOptionProperty_ _ExprResultStack_342, const struct FSpatialMath_vector3& _ExprResult_343, TMap<FVerseStringProperty_, uint8> _ExprResultStack_344, FVerseStringProperty_ _ExprResult_345, FVerseStringProperty_ _ExprResult_346, FVerseStringProperty_ _ExprResult_347)
{
	static auto Func = Class->GetFunction("VerseMovement_VerseMovementUtil", "$InitCDO");

	Params::UVerseMovement_VerseMovementUtil__InitCDO_Params Parms;

	Parms._ExprResult_0 = _ExprResult_0;
	Parms._ExprResultStack_1 = _ExprResultStack_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResultStack_5 = _ExprResultStack_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._ExprResult_7 = _ExprResult_7;
	Parms._ExprResult_8 = _ExprResult_8;
	Parms._ExprResult_9 = _ExprResult_9;
	Parms._ExprResult_10 = _ExprResult_10;
	Parms._ExprResult_11 = _ExprResult_11;
	Parms._ExprResultStack_12 = _ExprResultStack_12;
	Parms._ExprResult_13 = _ExprResult_13;
	Parms._ExprResult_14 = _ExprResult_14;
	Parms._ExprResult_15 = _ExprResult_15;
	Parms._ExprResultStack_16 = _ExprResultStack_16;
	Parms._ExprResult_17 = _ExprResult_17;
	Parms._ExprResult_18 = _ExprResult_18;
	Parms._ExprResult_19 = _ExprResult_19;
	Parms._ExprResult_20 = _ExprResult_20;
	Parms._ExprResult_21 = _ExprResult_21;
	Parms._ExprResult_22 = _ExprResult_22;
	Parms._ExprResult_23 = _ExprResult_23;
	Parms.__verse_0x00000000__1 = __verse_0x00000000__1;
	Parms._ExprResult_24 = _ExprResult_24;
	Parms._ExprResultStack_25 = _ExprResultStack_25;
	Parms._ExprResult_26 = _ExprResult_26;
	Parms._ExprResultStack_27 = _ExprResultStack_27;
	Parms._ExprResult_28 = _ExprResult_28;
	Parms._ExprResult_29 = _ExprResult_29;
	Parms._ExprResult_30 = _ExprResult_30;
	Parms._ExprResult_31 = _ExprResult_31;
	Parms._ExprResultStack_32 = _ExprResultStack_32;
	Parms._ExprResult_33 = _ExprResult_33;
	Parms._ExprResult_34 = _ExprResult_34;
	Parms._ExprResult_35 = _ExprResult_35;
	Parms._ExprResult_36 = _ExprResult_36;
	Parms._ExprResult_37 = _ExprResult_37;
	Parms._ExprResult_38 = _ExprResult_38;
	Parms._ExprResult_39 = _ExprResult_39;
	Parms._ExprResult_40 = _ExprResult_40;
	Parms._ExprResult_41 = _ExprResult_41;
	Parms._ExprResult_42 = _ExprResult_42;
	Parms._ExprResultStack_43 = _ExprResultStack_43;
	Parms._ExprResult_44 = _ExprResult_44;
	Parms._ExprResult_45 = _ExprResult_45;
	Parms._ExprResult_46 = _ExprResult_46;
	Parms._ExprResult_47 = _ExprResult_47;
	Parms.__verse_0x00000000__3 = __verse_0x00000000__3;
	Parms._ExprResult_48 = _ExprResult_48;
	Parms._ExprResultStack_49 = _ExprResultStack_49;
	Parms._ExprResult_50 = _ExprResult_50;
	Parms._ExprResultStack_51 = _ExprResultStack_51;
	Parms._ExprResult_52 = _ExprResult_52;
	Parms._ExprResult_53 = _ExprResult_53;
	Parms._ExprResult_54 = _ExprResult_54;
	Parms._ExprResult_55 = _ExprResult_55;
	Parms._ExprResultStack_56 = _ExprResultStack_56;
	Parms._ExprResult_57 = _ExprResult_57;
	Parms._ExprResult_58 = _ExprResult_58;
	Parms._ExprResult_59 = _ExprResult_59;
	Parms._ExprResult_60 = _ExprResult_60;
	Parms._ExprResult_61 = _ExprResult_61;
	Parms._ExprResult_62 = _ExprResult_62;
	Parms._ExprResultStack_63 = _ExprResultStack_63;
	Parms._ExprResult_64 = _ExprResult_64;
	Parms._ExprResult_65 = _ExprResult_65;
	Parms._ExprResult_66 = _ExprResult_66;
	Parms._ExprResultStack_67 = _ExprResultStack_67;
	Parms._ExprResult_68 = _ExprResult_68;
	Parms._ExprResult_69 = _ExprResult_69;
	Parms._ExprResult_70 = _ExprResult_70;
	Parms._ExprResult_71 = _ExprResult_71;
	Parms._ExprResult_72 = _ExprResult_72;
	Parms._ExprResult_73 = _ExprResult_73;
	Parms._ExprResult_74 = _ExprResult_74;
	Parms.__verse_0x00000000__5 = __verse_0x00000000__5;
	Parms._ExprResult_75 = _ExprResult_75;
	Parms._ExprResultStack_76 = _ExprResultStack_76;
	Parms._ExprResult_77 = _ExprResult_77;
	Parms._ExprResultStack_78 = _ExprResultStack_78;
	Parms._ExprResult_79 = _ExprResult_79;
	Parms._ExprResult_80 = _ExprResult_80;
	Parms._ExprResult_81 = _ExprResult_81;
	Parms._ExprResult_82 = _ExprResult_82;
	Parms._ExprResultStack_83 = _ExprResultStack_83;
	Parms._ExprResult_84 = _ExprResult_84;
	Parms._ExprResult_85 = _ExprResult_85;
	Parms._ExprResult_86 = _ExprResult_86;
	Parms._ExprResult_87 = _ExprResult_87;
	Parms._ExprResult_88 = _ExprResult_88;
	Parms._ExprResult_89 = _ExprResult_89;
	Parms._ExprResult_90 = _ExprResult_90;
	Parms._ExprResult_91 = _ExprResult_91;
	Parms._ExprResult_92 = _ExprResult_92;
	Parms._ExprResult_93 = _ExprResult_93;
	Parms._ExprResultStack_94 = _ExprResultStack_94;
	Parms._ExprResult_95 = _ExprResult_95;
	Parms._ExprResult_96 = _ExprResult_96;
	Parms._ExprResult_97 = _ExprResult_97;
	Parms._ExprResult_98 = _ExprResult_98;
	Parms.__verse_0x00000000__7 = __verse_0x00000000__7;
	Parms._ExprResult_99 = _ExprResult_99;
	Parms._ExprResultStack_100 = _ExprResultStack_100;
	Parms._ExprResult_101 = _ExprResult_101;
	Parms._ExprResultStack_102 = _ExprResultStack_102;
	Parms._ExprResult_103 = _ExprResult_103;
	Parms._ExprResult_104 = _ExprResult_104;
	Parms._ExprResult_105 = _ExprResult_105;
	Parms._ExprResult_106 = _ExprResult_106;
	Parms._ExprResultStack_107 = _ExprResultStack_107;
	Parms._ExprResult_108 = _ExprResult_108;
	Parms._ExprResult_109 = _ExprResult_109;
	Parms._ExprResult_110 = _ExprResult_110;
	Parms._ExprResult_111 = _ExprResult_111;
	Parms._ExprResult_112 = _ExprResult_112;
	Parms._ExprResult_113 = _ExprResult_113;
	Parms._ExprResultStack_114 = _ExprResultStack_114;
	Parms._ExprResult_115 = _ExprResult_115;
	Parms._ExprResult_116 = _ExprResult_116;
	Parms._ExprResult_117 = _ExprResult_117;
	Parms._ExprResultStack_118 = _ExprResultStack_118;
	Parms._ExprResult_119 = _ExprResult_119;
	Parms._ExprResult_120 = _ExprResult_120;
	Parms._ExprResult_121 = _ExprResult_121;
	Parms._ExprResult_122 = _ExprResult_122;
	Parms._ExprResult_123 = _ExprResult_123;
	Parms._ExprResult_124 = _ExprResult_124;
	Parms._ExprResult_125 = _ExprResult_125;
	Parms.__verse_0x00000000__9 = __verse_0x00000000__9;
	Parms._ExprResult_126 = _ExprResult_126;
	Parms._ExprResultStack_127 = _ExprResultStack_127;
	Parms._ExprResult_128 = _ExprResult_128;
	Parms._ExprResultStack_129 = _ExprResultStack_129;
	Parms._ExprResult_130 = _ExprResult_130;
	Parms._ExprResult_131 = _ExprResult_131;
	Parms._ExprResult_132 = _ExprResult_132;
	Parms._ExprResultStack_133 = _ExprResultStack_133;
	Parms._ExprResult_134 = _ExprResult_134;
	Parms._ExprResult_135 = _ExprResult_135;
	Parms._ExprResult_136 = _ExprResult_136;
	Parms._ExprResultStack_137 = _ExprResultStack_137;
	Parms._ExprResult_138 = _ExprResult_138;
	Parms._ExprResult_139 = _ExprResult_139;
	Parms._ExprResult_140 = _ExprResult_140;
	Parms._ExprResult_141 = _ExprResult_141;
	Parms._ExprResult_142 = _ExprResult_142;
	Parms._ExprResult_143 = _ExprResult_143;
	Parms._ExprResultStack_144 = _ExprResultStack_144;
	Parms._ExprResult_145 = _ExprResult_145;
	Parms._ExprResult_146 = _ExprResult_146;
	Parms._ExprResult_147 = _ExprResult_147;
	Parms._ExprResult_148 = _ExprResult_148;
	Parms.__verse_0x00000000__11 = __verse_0x00000000__11;
	Parms._ExprResult_149 = _ExprResult_149;
	Parms._ExprResultStack_150 = _ExprResultStack_150;
	Parms._ExprResult_151 = _ExprResult_151;
	Parms._ExprResult_152 = _ExprResult_152;
	Parms._ExprResultStack_153 = _ExprResultStack_153;
	Parms._ExprResult_154 = _ExprResult_154;
	Parms._ExprResult_155 = _ExprResult_155;
	Parms._ExprResult_156 = _ExprResult_156;
	Parms._ExprResult_157 = _ExprResult_157;
	Parms._ExprResult_158 = _ExprResult_158;
	Parms._ExprResult_159 = _ExprResult_159;
	Parms._ExprResult_160 = _ExprResult_160;
	Parms._ExprResult_161 = _ExprResult_161;
	Parms._ExprResult_162 = _ExprResult_162;
	Parms._ExprResult_163 = _ExprResult_163;
	Parms._ExprResultStack_164 = _ExprResultStack_164;
	Parms._ExprResult_165 = _ExprResult_165;
	Parms._ExprResult_166 = _ExprResult_166;
	Parms._ExprResult_167 = _ExprResult_167;
	Parms._ExprResult_168 = _ExprResult_168;
	Parms.__verse_0x00000000__13 = __verse_0x00000000__13;
	Parms._ExprResult_169 = _ExprResult_169;
	Parms._ExprResultStack_170 = _ExprResultStack_170;
	Parms._ExprResult_171 = _ExprResult_171;
	Parms._ExprResultStack_172 = _ExprResultStack_172;
	Parms._ExprResult_173 = _ExprResult_173;
	Parms._ExprResult_174 = _ExprResult_174;
	Parms._ExprResult_175 = _ExprResult_175;
	Parms._ExprResult_176 = _ExprResult_176;
	Parms._ExprResultStack_177 = _ExprResultStack_177;
	Parms._ExprResult_178 = _ExprResult_178;
	Parms._ExprResult_179 = _ExprResult_179;
	Parms._ExprResult_180 = _ExprResult_180;
	Parms._ExprResult_181 = _ExprResult_181;
	Parms._ExprResult_182 = _ExprResult_182;
	Parms._ExprResult_183 = _ExprResult_183;
	Parms._ExprResultStack_184 = _ExprResultStack_184;
	Parms._ExprResult_185 = _ExprResult_185;
	Parms._ExprResult_186 = _ExprResult_186;
	Parms._ExprResult_187 = _ExprResult_187;
	Parms._ExprResultStack_188 = _ExprResultStack_188;
	Parms._ExprResult_189 = _ExprResult_189;
	Parms._ExprResult_190 = _ExprResult_190;
	Parms._ExprResult_191 = _ExprResult_191;
	Parms._ExprResult_192 = _ExprResult_192;
	Parms._ExprResult_193 = _ExprResult_193;
	Parms._ExprResult_194 = _ExprResult_194;
	Parms._ExprResult_195 = _ExprResult_195;
	Parms.__verse_0x00000000__15 = __verse_0x00000000__15;
	Parms._ExprResult_196 = _ExprResult_196;
	Parms._ExprResultStack_197 = _ExprResultStack_197;
	Parms._ExprResult_198 = _ExprResult_198;
	Parms._ExprResultStack_199 = _ExprResultStack_199;
	Parms._ExprResult_200 = _ExprResult_200;
	Parms._ExprResult_201 = _ExprResult_201;
	Parms._ExprResult_202 = _ExprResult_202;
	Parms._ExprResultStack_203 = _ExprResultStack_203;
	Parms._ExprResult_204 = _ExprResult_204;
	Parms._ExprResult_205 = _ExprResult_205;
	Parms._ExprResult_206 = _ExprResult_206;
	Parms._ExprResultStack_207 = _ExprResultStack_207;
	Parms._ExprResult_208 = _ExprResult_208;
	Parms._ExprResult_209 = _ExprResult_209;
	Parms._ExprResult_210 = _ExprResult_210;
	Parms._ExprResult_211 = _ExprResult_211;
	Parms._ExprResult_212 = _ExprResult_212;
	Parms._ExprResult_213 = _ExprResult_213;
	Parms._ExprResultStack_214 = _ExprResultStack_214;
	Parms._ExprResult_215 = _ExprResult_215;
	Parms._ExprResult_216 = _ExprResult_216;
	Parms._ExprResult_217 = _ExprResult_217;
	Parms._ExprResult_218 = _ExprResult_218;
	Parms.__verse_0x00000000__17 = __verse_0x00000000__17;
	Parms._ExprResult_219 = _ExprResult_219;
	Parms._ExprResultStack_220 = _ExprResultStack_220;
	Parms._ExprResult_221 = _ExprResult_221;
	Parms._ExprResult_222 = _ExprResult_222;
	Parms._ExprResultStack_223 = _ExprResultStack_223;
	Parms._ExprResult_224 = _ExprResult_224;
	Parms._ExprResult_225 = _ExprResult_225;
	Parms._ExprResult_226 = _ExprResult_226;
	Parms._ExprResult_227 = _ExprResult_227;
	Parms._ExprResult_228 = _ExprResult_228;
	Parms._ExprResult_229 = _ExprResult_229;
	Parms._ExprResult_230 = _ExprResult_230;
	Parms._ExprResult_231 = _ExprResult_231;
	Parms._ExprResult_232 = _ExprResult_232;
	Parms._ExprResult_233 = _ExprResult_233;
	Parms._ExprResultStack_234 = _ExprResultStack_234;
	Parms._ExprResult_235 = _ExprResult_235;
	Parms._ExprResult_236 = _ExprResult_236;
	Parms._ExprResult_237 = _ExprResult_237;
	Parms._ExprResult_238 = _ExprResult_238;
	Parms.__verse_0x00000000__19 = __verse_0x00000000__19;
	Parms._ExprResult_239 = _ExprResult_239;
	Parms._ExprResultStack_240 = _ExprResultStack_240;
	Parms._ExprResult_241 = _ExprResult_241;
	Parms._ExprResultStack_242 = _ExprResultStack_242;
	Parms._ExprResult_243 = _ExprResult_243;
	Parms._ExprResult_244 = _ExprResult_244;
	Parms._ExprResult_245 = _ExprResult_245;
	Parms._ExprResult_246 = _ExprResult_246;
	Parms._ExprResultStack_247 = _ExprResultStack_247;
	Parms._ExprResult_248 = _ExprResult_248;
	Parms._ExprResult_249 = _ExprResult_249;
	Parms._ExprResult_250 = _ExprResult_250;
	Parms._ExprResult_251 = _ExprResult_251;
	Parms._ExprResult_252 = _ExprResult_252;
	Parms._ExprResult_253 = _ExprResult_253;
	Parms._ExprResultStack_254 = _ExprResultStack_254;
	Parms._ExprResult_255 = _ExprResult_255;
	Parms._ExprResult_256 = _ExprResult_256;
	Parms._ExprResult_257 = _ExprResult_257;
	Parms._ExprResultStack_258 = _ExprResultStack_258;
	Parms._ExprResult_259 = _ExprResult_259;
	Parms._ExprResult_260 = _ExprResult_260;
	Parms._ExprResult_261 = _ExprResult_261;
	Parms._ExprResult_262 = _ExprResult_262;
	Parms._ExprResult_263 = _ExprResult_263;
	Parms._ExprResult_264 = _ExprResult_264;
	Parms._ExprResult_265 = _ExprResult_265;
	Parms.__verse_0x00000000__21 = __verse_0x00000000__21;
	Parms._ExprResult_266 = _ExprResult_266;
	Parms._ExprResultStack_267 = _ExprResultStack_267;
	Parms._ExprResult_268 = _ExprResult_268;
	Parms._ExprResultStack_269 = _ExprResultStack_269;
	Parms._ExprResult_270 = _ExprResult_270;
	Parms._ExprResult_271 = _ExprResult_271;
	Parms._ExprResult_272 = _ExprResult_272;
	Parms._ExprResult_273 = _ExprResult_273;
	Parms._ExprResultStack_274 = _ExprResultStack_274;
	Parms._ExprResult_275 = _ExprResult_275;
	Parms._ExprResult_276 = _ExprResult_276;
	Parms._ExprResult_277 = _ExprResult_277;
	Parms._ExprResult_278 = _ExprResult_278;
	Parms._ExprResult_279 = _ExprResult_279;
	Parms._ExprResult_280 = _ExprResult_280;
	Parms._ExprResult_281 = _ExprResult_281;
	Parms._ExprResult_282 = _ExprResult_282;
	Parms._ExprResult_283 = _ExprResult_283;
	Parms._ExprResult_284 = _ExprResult_284;
	Parms._ExprResultStack_285 = _ExprResultStack_285;
	Parms._ExprResult_286 = _ExprResult_286;
	Parms._ExprResult_287 = _ExprResult_287;
	Parms._ExprResult_288 = _ExprResult_288;
	Parms._ExprResult_289 = _ExprResult_289;
	Parms.__verse_0x00000000__23 = __verse_0x00000000__23;
	Parms._ExprResult_290 = _ExprResult_290;
	Parms._ExprResultStack_291 = _ExprResultStack_291;
	Parms._ExprResult_292 = _ExprResult_292;
	Parms._ExprResultStack_293 = _ExprResultStack_293;
	Parms._ExprResult_294 = _ExprResult_294;
	Parms._ExprResult_295 = _ExprResult_295;
	Parms._ExprResult_296 = _ExprResult_296;
	Parms._ExprResult_297 = _ExprResult_297;
	Parms._ExprResultStack_298 = _ExprResultStack_298;
	Parms._ExprResult_299 = _ExprResult_299;
	Parms._ExprResult_300 = _ExprResult_300;
	Parms._ExprResult_301 = _ExprResult_301;
	Parms._ExprResult_302 = _ExprResult_302;
	Parms._ExprResult_303 = _ExprResult_303;
	Parms._ExprResult_304 = _ExprResult_304;
	Parms._ExprResultStack_305 = _ExprResultStack_305;
	Parms._ExprResult_306 = _ExprResult_306;
	Parms._ExprResult_307 = _ExprResult_307;
	Parms._ExprResult_308 = _ExprResult_308;
	Parms._ExprResultStack_309 = _ExprResultStack_309;
	Parms._ExprResult_310 = _ExprResult_310;
	Parms._ExprResult_311 = _ExprResult_311;
	Parms._ExprResult_312 = _ExprResult_312;
	Parms._ExprResult_313 = _ExprResult_313;
	Parms._ExprResult_314 = _ExprResult_314;
	Parms._ExprResult_315 = _ExprResult_315;
	Parms._ExprResultStack_316 = _ExprResultStack_316;
	Parms._ExprResult_317 = _ExprResult_317;
	Parms._ExprResult_318 = _ExprResult_318;
	Parms._ExprResult_319 = _ExprResult_319;
	Parms._ExprResult_320 = _ExprResult_320;
	Parms.__verse_0x00000000__25 = __verse_0x00000000__25;
	Parms._ExprResult_321 = _ExprResult_321;
	Parms._ExprResultStack_322 = _ExprResultStack_322;
	Parms._ExprResult_323 = _ExprResult_323;
	Parms._ExprResult_324 = _ExprResult_324;
	Parms._ExprResultStack_325 = _ExprResultStack_325;
	Parms._ExprResult_326 = _ExprResult_326;
	Parms._ExprResult_327 = _ExprResult_327;
	Parms._ExprResult_328 = _ExprResult_328;
	Parms._ExprResult_329 = _ExprResult_329;
	Parms._ExprResult_330 = _ExprResult_330;
	Parms._ExprResult_331 = _ExprResult_331;
	Parms._ExprResult_332 = _ExprResult_332;
	Parms._ExprResult_333 = _ExprResult_333;
	Parms._ExprResult_334 = _ExprResult_334;
	Parms._ExprResult_335 = _ExprResult_335;
	Parms._ExprResultStack_336 = _ExprResultStack_336;
	Parms._ExprResult_337 = _ExprResult_337;
	Parms._ExprResult_338 = _ExprResult_338;
	Parms._ExprResult_339 = _ExprResult_339;
	Parms._ExprResult_340 = _ExprResult_340;
	Parms.__verse_0x00000000__27 = __verse_0x00000000__27;
	Parms._ExprResult_341 = _ExprResult_341;
	Parms._ExprResultStack_342 = _ExprResultStack_342;
	Parms._ExprResult_343 = _ExprResult_343;
	Parms._ExprResultStack_344 = _ExprResultStack_344;
	Parms._ExprResult_345 = _ExprResult_345;
	Parms._ExprResult_346 = _ExprResult_346;
	Parms._ExprResult_347 = _ExprResult_347;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
