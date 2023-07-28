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
// Function VerseMovement.VerseMovement._L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_N_RGetPlayerMoveComponent_L_Nplayer__component_R
struct UVerseMovement__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_N_RGetPlayerMoveComponent_L_Nplayer__component_R_Params
{
public:
	class USimulation_player_component*          __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0xBA (0xBA - 0x0)
// Function VerseMovement.VerseMovement.VerseMovement_move_config$OverrideFactory
struct UVerseMovement_VerseMovement_move_config_OverrideFactory_Params
{
public:
	struct FVerseMovement_move_config            RetVal;                                            // 0x0(0x10)(Parm, OutParm, ReturnParm)
	TMap<FVerseStringProperty_, uint8>           __verse_0xFB48ED96__InitOverrideMap;               // 0x10(0x50)(ConstParm, Parm, ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResultStack_0;                                // 0x60(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_1;                                     // 0x70(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_892C[0x6];                                     // Fixing Size After Last Property..
	TArray<struct FVerseMovement_move_config_entry> _ExprResult_2;                                     // 0x78(0x10)(ContainsInstancedReference)
	TArray<enum class EVerseFalse>               __verse_0xFFC68BC5_Array_1;                        // 0x88(0x10)(ContainsInstancedReference)
	TArray<struct FVerseMovement_move_config_entry> _ForResult_3;                                      // 0x98(0x10)(ContainsInstancedReference)
	int64                                        _ForIndex_4;                                       // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        _ForLength_5;                                      // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVerseFalse                       __verse_0xFB88B569_Item_3;                         // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_6 : 1;                                 // Mask: 0x1, PropSize: 0x10xB9(0x1)(NoDestructor, HasGetValueTypeHash)
};

// 0x52 (0x52 - 0x0)
// Function VerseMovement.VerseMovement.VerseMovement_move_config$Factory
struct UVerseMovement_VerseMovement_move_config_Factory_Params
{
public:
	struct FVerseMovement_move_config            RetVal;                                            // 0x0(0x10)(Parm, OutParm, ReturnParm)
	TArray<struct FVerseMovement_move_config_entry> _ExprResult_0;                                     // 0x10(0x10)(ContainsInstancedReference)
	TArray<enum class EVerseFalse>               __verse_0xFFC68BC5_Array_1;                        // 0x20(0x10)(ContainsInstancedReference)
	TArray<struct FVerseMovement_move_config_entry> _ForResult_1;                                      // 0x30(0x10)(ContainsInstancedReference)
	int64                                        _ForIndex_2;                                       // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        _ForLength_3;                                      // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVerseFalse                       __verse_0xFB88B569_Item_3;                         // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_4 : 1;                                 // Mask: 0x1, PropSize: 0x10x51(0x1)(NoDestructor, HasGetValueTypeHash)
};

// 0x162 (0x162 - 0x0)
// Function VerseMovement.VerseMovement.VerseMovement_move_config_entry$OverrideFactory
struct UVerseMovement_VerseMovement_move_config_entry_OverrideFactory_Params
{
public:
	struct FVerseMovement_move_config_entry      RetVal;                                            // 0x0(0x30)(Parm, OutParm, ReturnParm)
	TMap<FVerseStringProperty_, uint8>           __verse_0xFB48ED96__InitOverrideMap;               // 0x30(0x50)(ConstParm, Parm, ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResultStack_0;                                // 0x80(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_1;                                     // 0x90(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_892D[0x6];                                     // Fixing Size After Last Property..
	FVerseStringProperty_                        _ExprResult_2;                                     // 0x98(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResultStack_3;                                // 0xA8(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_4;                                     // 0xB8(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_892E[0x6];                                     // Fixing Size After Last Property..
	TArray<struct FVerseMovement_move_trigger>   _ExprResult_5;                                     // 0xC0(0x10)(ContainsInstancedReference)
	TArray<enum class EVerseFalse>               __verse_0xFFC68BC5_Array_1;                        // 0xD0(0x10)(ContainsInstancedReference)
	TArray<struct FVerseMovement_move_trigger>   _ForResult_6;                                      // 0xE0(0x10)(ContainsInstancedReference)
	int64                                        _ForIndex_7;                                       // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        _ForLength_8;                                      // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVerseFalse                       __verse_0xFB88B569_Item_3;                         // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_9 : 1;                                 // Mask: 0x1, PropSize: 0x10x101(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_460 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_892F[0x6];                                     // Fixing Size After Last Property..
	FVerseStringProperty_                        _ExprResultStack_10;                               // 0x108(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_11;                                    // 0x118(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8930[0x6];                                     // Fixing Size After Last Property..
	TArray<struct FVerseMovement_move_response>  _ExprResult_12;                                    // 0x120(0x10)(ContainsInstancedReference)
	TArray<enum class EVerseFalse>               __verse_0xFFC68BC5_Array_5;                        // 0x130(0x10)(ContainsInstancedReference)
	TArray<struct FVerseMovement_move_response>  _ForResult_13;                                     // 0x140(0x10)(ContainsInstancedReference)
	int64                                        _ForIndex_14;                                      // 0x150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        _ForLength_15;                                     // 0x158(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVerseFalse                       __verse_0xFB88B569_Item_7;                         // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_16 : 1;                                // Mask: 0x1, PropSize: 0x10x161(0x1)(NoDestructor, HasGetValueTypeHash)
};

// 0xCA (0xCA - 0x0)
// Function VerseMovement.VerseMovement.VerseMovement_move_config_entry$Factory
struct UVerseMovement_VerseMovement_move_config_entry_Factory_Params
{
public:
	struct FVerseMovement_move_config_entry      RetVal;                                            // 0x0(0x30)(Parm, OutParm, ReturnParm)
	FVerseStringProperty_                        _ExprResult_0;                                     // 0x30(0x10)(HasGetValueTypeHash)
	TArray<struct FVerseMovement_move_trigger>   _ExprResult_1;                                     // 0x40(0x10)(ContainsInstancedReference)
	TArray<enum class EVerseFalse>               __verse_0xFFC68BC5_Array_1;                        // 0x50(0x10)(ContainsInstancedReference)
	TArray<struct FVerseMovement_move_trigger>   _ForResult_2;                                      // 0x60(0x10)(ContainsInstancedReference)
	int64                                        _ForIndex_3;                                       // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        _ForLength_4;                                      // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVerseFalse                       __verse_0xFB88B569_Item_3;                         // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_5 : 1;                                 // Mask: 0x1, PropSize: 0x10x81(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_461 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8931[0x6];                                     // Fixing Size After Last Property..
	TArray<struct FVerseMovement_move_response>  _ExprResult_6;                                     // 0x88(0x10)(ContainsInstancedReference)
	TArray<enum class EVerseFalse>               __verse_0xFFC68BC5_Array_5;                        // 0x98(0x10)(ContainsInstancedReference)
	TArray<struct FVerseMovement_move_response>  _ForResult_7;                                      // 0xA8(0x10)(ContainsInstancedReference)
	int64                                        _ForIndex_8;                                       // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        _ForLength_9;                                      // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVerseFalse                       __verse_0xFB88B569_Item_7;                         // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_10 : 1;                                // Mask: 0x1, PropSize: 0x10xC9(0x1)(NoDestructor, HasGetValueTypeHash)
};

// 0x232 (0x232 - 0x0)
// Function VerseMovement.VerseMovement.VerseMovement_move_response$OverrideFactory
struct UVerseMovement_VerseMovement_move_response_OverrideFactory_Params
{
public:
	struct FVerseMovement_move_response          RetVal;                                            // 0x0(0x50)(Parm, OutParm, ReturnParm, NoDestructor)
	TMap<FVerseStringProperty_, uint8>           __verse_0xFB48ED96__InitOverrideMap;               // 0x50(0x50)(ConstParm, Parm, ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResultStack_0;                                // 0xA0(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_1;                                     // 0xB0(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8932[0x6];                                     // Fixing Size After Last Property..
	struct FSpatialMath_vector3                  _ExprResult_2;                                     // 0xB8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	FVerseStringProperty_                        _ExprResultStack_3;                                // 0xD0(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_4;                                     // 0xE0(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8933[0x6];                                     // Fixing Size After Last Property..
	FVerseStringProperty_                        _ExprResultStack_5;                                // 0xE8(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_6;                                     // 0xF8(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8934[0x6];                                     // Fixing Size After Last Property..
	FOptionProperty_                             _ExprResult_7;                                     // 0x100(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x00000000__1;                             // 0x108(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_8 : 1;                                 // Mask: 0x1, PropSize: 0x10x10A(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_462 : 7;                                    // Fixing Bit-Field Size..
	FOptionProperty_                             _ExprResultStack_9;                                // 0x10B(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8935[0x3];                                     // Fixing Size After Last Property..
	FVerseStringProperty_                        _ExprResultStack_10;                               // 0x110(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_11;                                    // 0x120(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8936[0x6];                                     // Fixing Size After Last Property..
	FVerseStringProperty_                        _ExprResultStack_12;                               // 0x128(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_13;                                    // 0x138(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8937[0x6];                                     // Fixing Size After Last Property..
	FVerseStringProperty_                        _ExprResultStack_14;                               // 0x140(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_15;                                    // 0x150(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8938[0x6];                                     // Fixing Size After Last Property..
	FVerseStringProperty_                        _ExprResultStack_16;                               // 0x158(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_17;                                    // 0x168(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8939[0x6];                                     // Fixing Size After Last Property..
	FVerseStringProperty_                        _ExprResultStack_18;                               // 0x170(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_19;                                    // 0x180(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_893A[0x6];                                     // Fixing Size After Last Property..
	struct FSpatialMath_vector3                  _ExprResult_20;                                    // 0x188(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_21;                               // 0x1A0(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_22;                                    // 0x1F0(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_23;                                    // 0x200(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_24;                                    // 0x210(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResultStack_25;                               // 0x220(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_26;                                    // 0x230(0x2)(NoDestructor, HasGetValueTypeHash)
};

// 0x110 (0x110 - 0x0)
// Function VerseMovement.VerseMovement.VerseMovement_move_response$Factory
struct UVerseMovement_VerseMovement_move_response_Factory_Params
{
public:
	struct FVerseMovement_move_response          RetVal;                                            // 0x0(0x50)(Parm, OutParm, ReturnParm, NoDestructor)
	struct FSpatialMath_vector3                  _ExprResult_0;                                     // 0x50(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	FOptionProperty_                             _ExprResult_1;                                     // 0x68(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x00000000__1;                             // 0x70(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_2 : 1;                                 // Mask: 0x1, PropSize: 0x10x72(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_463 : 7;                                    // Fixing Bit-Field Size..
	FOptionProperty_                             _ExprResultStack_3;                                // 0x73(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_893B[0x3];                                     // Fixing Size After Last Property..
	struct FSpatialMath_vector3                  _ExprResult_4;                                     // 0x78(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_5;                                // 0x90(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_6;                                     // 0xE0(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_7;                                     // 0xF0(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_8;                                     // 0x100(0x10)(HasGetValueTypeHash)
};

// 0x1C8 (0x1C8 - 0x0)
// Function VerseMovement.VerseMovement.VerseMovement_move_trigger$OverrideFactory
struct UVerseMovement_VerseMovement_move_trigger_OverrideFactory_Params
{
public:
	struct FVerseMovement_move_trigger           RetVal;                                            // 0x0(0x90)(Parm, OutParm, ReturnParm)
	TMap<FVerseStringProperty_, uint8>           __verse_0xFB48ED96__InitOverrideMap;               // 0x90(0x50)(ConstParm, Parm, ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResultStack_0;                                // 0xE0(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_1;                                     // 0xF0(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_893C[0x6];                                     // Fixing Size After Last Property..
	FVerseStringProperty_                        _ExprResultStack_2;                                // 0xF8(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_3;                                     // 0x108(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_893D[0x6];                                     // Fixing Size After Last Property..
	struct FVerseMovement_move_input_trigger_params _ExprResult_4;                                     // 0x110(0x38)()
	FVerseStringProperty_                        _ExprResultStack_5;                                // 0x148(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_6;                                     // 0x158(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_893E[0x6];                                     // Fixing Size After Last Property..
	struct FVerseMovement_move_physics_trigger_params _ExprResult_7;                                     // 0x160(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	FVerseStringProperty_                        _ExprResultStack_8;                                // 0x178(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_9;                                     // 0x188(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_893F[0x6];                                     // Fixing Size After Last Property..
	struct FVerseMovement_move_trace_trigger_params _ExprResult_10;                                    // 0x190(0x38)(NoDestructor)
};

// 0x118 (0x118 - 0x0)
// Function VerseMovement.VerseMovement.VerseMovement_move_trigger$Factory
struct UVerseMovement_VerseMovement_move_trigger_Factory_Params
{
public:
	struct FVerseMovement_move_trigger           RetVal;                                            // 0x0(0x90)(Parm, OutParm, ReturnParm)
	struct FVerseMovement_move_input_trigger_params _ExprResult_0;                                     // 0x90(0x38)()
	struct FVerseMovement_move_physics_trigger_params _ExprResult_1;                                     // 0xC8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVerseMovement_move_trace_trigger_params _ExprResult_2;                                     // 0xE0(0x38)(NoDestructor)
};

// 0x125 (0x125 - 0x0)
// Function VerseMovement.VerseMovement.VerseMovement_move_trace_trigger_params$OverrideFactory
struct UVerseMovement_VerseMovement_move_trace_trigger_params_OverrideFactory_Params
{
public:
	struct FVerseMovement_move_trace_trigger_params RetVal;                                            // 0x0(0x38)(Parm, OutParm, ReturnParm, NoDestructor)
	TMap<FVerseStringProperty_, uint8>           __verse_0xFB48ED96__InitOverrideMap;               // 0x38(0x50)(ConstParm, Parm, ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResultStack_0;                                // 0x88(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_1;                                     // 0x98(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8940[0x6];                                     // Fixing Size After Last Property..
	struct FSpatialMath_vector3                  _ExprResult_2;                                     // 0xA0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	FVerseStringProperty_                        _ExprResultStack_3;                                // 0xB8(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_4;                                     // 0xC8(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8941[0x6];                                     // Fixing Size After Last Property..
	FVerseStringProperty_                        _ExprResultStack_5;                                // 0xD0(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_6;                                     // 0xE0(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8942[0x6];                                     // Fixing Size After Last Property..
	FVerseStringProperty_                        _ExprResultStack_7;                                // 0xE8(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_8;                                     // 0xF8(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8943[0x6];                                     // Fixing Size After Last Property..
	FVerseStringProperty_                        _ExprResultStack_9;                                // 0x100(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_10;                                    // 0x110(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8944[0x6];                                     // Fixing Size After Last Property..
	FOptionProperty_                             _ExprResult_11;                                    // 0x118(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x00000000__1;                             // 0x120(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_12 : 1;                                // Mask: 0x1, PropSize: 0x10x122(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_464 : 7;                                    // Fixing Bit-Field Size..
	FOptionProperty_                             _ExprResultStack_13;                               // 0x123(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5D (0x5D - 0x0)
// Function VerseMovement.VerseMovement.VerseMovement_move_trace_trigger_params$Factory
struct UVerseMovement_VerseMovement_move_trace_trigger_params_Factory_Params
{
public:
	struct FVerseMovement_move_trace_trigger_params RetVal;                                            // 0x0(0x38)(Parm, OutParm, ReturnParm, NoDestructor)
	struct FSpatialMath_vector3                  _ExprResult_0;                                     // 0x38(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	FOptionProperty_                             _ExprResult_1;                                     // 0x50(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x00000000__1;                             // 0x58(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_2 : 1;                                 // Mask: 0x1, PropSize: 0x10x5A(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_465 : 7;                                    // Fixing Bit-Field Size..
	FOptionProperty_                             _ExprResultStack_3;                                // 0x5B(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x98 (0x98 - 0x0)
// Function VerseMovement.VerseMovement.VerseMovement_move_physics_trigger_params$OverrideFactory
struct UVerseMovement_VerseMovement_move_physics_trigger_params_OverrideFactory_Params
{
public:
	struct FVerseMovement_move_physics_trigger_params RetVal;                                            // 0x0(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	TMap<FVerseStringProperty_, uint8>           __verse_0xFB48ED96__InitOverrideMap;               // 0x18(0x50)(ConstParm, Parm, ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResultStack_0;                                // 0x68(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_1;                                     // 0x78(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8945[0x6];                                     // Fixing Size After Last Property..
	struct FSpatialMath_vector3                  _ExprResult_2;                                     // 0x80(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function VerseMovement.VerseMovement.VerseMovement_move_physics_trigger_params$Factory
struct UVerseMovement_VerseMovement_move_physics_trigger_params_Factory_Params
{
public:
	struct FVerseMovement_move_physics_trigger_params RetVal;                                            // 0x0(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	struct FSpatialMath_vector3                  _ExprResult_0;                                     // 0x18(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1A0 (0x1A0 - 0x0)
// Function VerseMovement.VerseMovement.VerseMovement_move_input_trigger_params$OverrideFactory
struct UVerseMovement_VerseMovement_move_input_trigger_params_OverrideFactory_Params
{
public:
	struct FVerseMovement_move_input_trigger_params RetVal;                                            // 0x0(0x38)(Parm, OutParm, ReturnParm)
	TMap<FVerseStringProperty_, uint8>           __verse_0xFB48ED96__InitOverrideMap;               // 0x38(0x50)(ConstParm, Parm, ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResultStack_0;                                // 0x88(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_1;                                     // 0x98(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8946[0x6];                                     // Fixing Size After Last Property..
	FVerseStringProperty_                        _ExprResultStack_2;                                // 0xA0(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_3;                                     // 0xB0(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8947[0x6];                                     // Fixing Size After Last Property..
	FVerseStringProperty_                        _ExprResult_4;                                     // 0xB8(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResultStack_5;                                // 0xC8(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_6;                                     // 0xD8(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8948[0x6];                                     // Fixing Size After Last Property..
	FOptionProperty_                             _ExprResult_7;                                     // 0xE0(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x00000000__1;                             // 0xE8(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_8 : 1;                                 // Mask: 0x1, PropSize: 0x10xEA(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_466 : 7;                                    // Fixing Bit-Field Size..
	FOptionProperty_                             _ExprResultStack_9;                                // 0xEB(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8949[0x3];                                     // Fixing Size After Last Property..
	FVerseStringProperty_                        _ExprResultStack_10;                               // 0xF0(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_11;                                    // 0x100(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_894A[0x6];                                     // Fixing Size After Last Property..
	FVerseStringProperty_                        _ExprResultStack_12;                               // 0x108(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_13;                                    // 0x118(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_894B[0x6];                                     // Fixing Size After Last Property..
	struct FSpatialMath_vector2                  _ExprResult_14;                                    // 0x120(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_15;                               // 0x130(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_16;                                    // 0x180(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_17;                                    // 0x190(0x10)(HasGetValueTypeHash)
};

// 0xD8 (0xD8 - 0x0)
// Function VerseMovement.VerseMovement.VerseMovement_move_input_trigger_params$Factory
struct UVerseMovement_VerseMovement_move_input_trigger_params_Factory_Params
{
public:
	struct FVerseMovement_move_input_trigger_params RetVal;                                            // 0x0(0x38)(Parm, OutParm, ReturnParm)
	FVerseStringProperty_                        _ExprResult_0;                                     // 0x38(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_1;                                     // 0x48(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x00000000__1;                             // 0x50(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_2 : 1;                                 // Mask: 0x1, PropSize: 0x10x52(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_467 : 7;                                    // Fixing Bit-Field Size..
	FOptionProperty_                             _ExprResultStack_3;                                // 0x53(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_894C[0x3];                                     // Fixing Size After Last Property..
	struct FSpatialMath_vector2                  _ExprResult_4;                                     // 0x58(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_5;                                // 0x68(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_6;                                     // 0xB8(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_7;                                     // 0xC8(0x10)(HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function VerseMovement.VerseMovement.$InitCDO
struct UVerseMovement__InitCDO_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseMovement.VerseMovement_move_config_asset.$InitInstance
struct UVerseMovement_move_config_asset__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseMovement.VerseMovement_move_config_asset.$Block
struct UVerseMovement_move_config_asset__Block_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseMovement.VerseMovement_move_config_asset.$InitCDO
struct UVerseMovement_move_config_asset__InitCDO_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function VerseMovement.VerseMovement_movement_component._L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetVelocity_L_Nvector3_R
struct UVerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetVelocity_L_Nvector3_R_Params
{
public:
	struct FSpatialMath_vector3                  __verse_0xB2CDDD72_Argument;                       // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function VerseMovement.VerseMovement_movement_component._L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetRotation_L_Nrotation_R
struct UVerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetRotation_L_Nrotation_R_Params
{
public:
	struct FVerseRotation                        __verse_0xB2CDDD72_Argument;                       // 0x0(0x20)(Parm, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function VerseMovement.VerseMovement_movement_component._L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetPosition_L_Nvector3_R
struct UVerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetPosition_L_Nvector3_R_Params
{
public:
	struct FSpatialMath_vector3                  __verse_0xB2CDDD72_Argument;                       // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function VerseMovement.VerseMovement_movement_component._L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetEnabled_L_Nlogic_R
struct UVerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetEnabled_L_Nlogic_R_Params
{
public:
	uint8                                        __verse_0xB2CDDD72_Argument : 1;                   // Mask: 0x1, PropSize: 0x10x0(0x1)(Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function VerseMovement.VerseMovement_movement_component._L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetConfig_L_Nmove__config__asset_R
struct UVerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetConfig_L_Nmove__config__asset_R_Params
{
public:
	class UVerseMovement_move_config_asset*      __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VerseMovement.VerseMovement_movement_component._L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetConfig_L_Nmove__config_R
struct UVerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetConfig_L_Nmove__config_R_Params
{
public:
	struct FVerseMovement_move_config            __verse_0xB2CDDD72_Argument;                       // 0x0(0x10)(Parm)
};

// 0x8 (0x8 - 0x0)
// Function VerseMovement.VerseMovement_movement_component._L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_REnableInput_L_Nplayer__component_R
struct UVerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_REnableInput_L_Nplayer__component_R_Params
{
public:
	class USimulation_player_component*          __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function VerseMovement.VerseMovement_movement_component._L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RDisableInput_L_Nplayer__component_R
struct UVerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RDisableInput_L_Nplayer__component_R_Params
{
public:
	class USimulation_player_component*          __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function VerseMovement.VerseMovement_movement_component._L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RAddImpulse_L_Nvector3_R
struct UVerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RAddImpulse_L_Nvector3_R_Params
{
public:
	struct FSpatialMath_vector3                  __verse_0xB2CDDD72_Argument;                       // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function VerseMovement.VerseMovement_movement_component._L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RAddAngularImpulse_L_Nvector3_R
struct UVerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RAddAngularImpulse_L_Nvector3_R_Params
{
public:
	struct FSpatialMath_vector3                  __verse_0xB2CDDD72_Argument;                       // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function VerseMovement.VerseMovement_movement_component.$InitInstance
struct UVerseMovement_movement_component__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseMovement.VerseMovement_movement_component.$Block
struct UVerseMovement_movement_component__Block_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseMovement.VerseMovement_movement_component.$InitCDO
struct UVerseMovement_movement_component__InitCDO_Params
{
public:
};

// 0x2838 (0x2838 - 0x0)
// Function VerseMovement.VerseMovement_VerseMovementUtil.$InitCDO
struct UVerseMovement_VerseMovementUtil__InitCDO_Params
{
public:
	struct FVerseMovement_move_config            _ExprResult_0;                                     // 0x0(0x10)()
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_1;                                // 0x10(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_2;                                     // 0x60(0x10)(HasGetValueTypeHash)
	TArray<struct FVerseMovement_move_config_entry> _ExprResult_3;                                     // 0x70(0x10)(ContainsInstancedReference)
	struct FVerseMovement_move_config_entry      _ExprResult_4;                                     // 0x80(0x30)()
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_5;                                // 0xB0(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_6;                                     // 0x100(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_7;                                     // 0x110(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_8;                                     // 0x120(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_9;                                     // 0x130(0x10)(HasGetValueTypeHash)
	TArray<struct FVerseMovement_move_trigger>   _ExprResult_10;                                    // 0x140(0x10)(ContainsInstancedReference)
	struct FVerseMovement_move_trigger           _ExprResult_11;                                    // 0x150(0x90)()
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_12;                               // 0x1E0(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_13;                                    // 0x230(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_14;                                    // 0x240(0x10)(HasGetValueTypeHash)
	struct FVerseMovement_move_input_trigger_params _ExprResult_15;                                    // 0x250(0x38)()
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_16;                               // 0x288(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_17;                                    // 0x2D8(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_18;                                    // 0x2E8(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_19;                                    // 0x2F8(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_20;                                    // 0x308(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_21;                                    // 0x318(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_22;                                    // 0x328(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_23;                                    // 0x338(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x00000000__1;                             // 0x340(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_24 : 1;                                // Mask: 0x1, PropSize: 0x10x342(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_468 : 7;                                    // Fixing Bit-Field Size..
	FOptionProperty_                             _ExprResultStack_25;                               // 0x343(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_894D[0x3];                                     // Fixing Size After Last Property..
	struct FSpatialMath_vector2                  _ExprResult_26;                                    // 0x348(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_27;                               // 0x358(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_28;                                    // 0x3A8(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_29;                                    // 0x3B8(0x10)(HasGetValueTypeHash)
	TArray<struct FVerseMovement_move_response>  _ExprResult_30;                                    // 0x3C8(0x10)(ContainsInstancedReference)
	struct FVerseMovement_move_response          _ExprResult_31;                                    // 0x3D8(0x50)(NoDestructor)
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_32;                               // 0x428(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_33;                                    // 0x478(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_34;                                    // 0x488(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_35;                                    // 0x498(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_36;                                    // 0x4A8(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_37;                                    // 0x4B8(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_38;                                    // 0x4C8(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_39;                                    // 0x4D8(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_40;                                    // 0x4E8(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_41;                                    // 0x4F8(0x10)(HasGetValueTypeHash)
	struct FSpatialMath_vector3                  _ExprResult_42;                                    // 0x508(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_43;                               // 0x520(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_44;                                    // 0x570(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_45;                                    // 0x580(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_46;                                    // 0x590(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_47;                                    // 0x5A0(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x00000000__3;                             // 0x5A8(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_48 : 1;                                // Mask: 0x1, PropSize: 0x10x5AA(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_469 : 7;                                    // Fixing Bit-Field Size..
	FOptionProperty_                             _ExprResultStack_49;                               // 0x5AB(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_894E[0x3];                                     // Fixing Size After Last Property..
	struct FSpatialMath_vector3                  _ExprResult_50;                                    // 0x5B0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_51;                               // 0x5C8(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_52;                                    // 0x618(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_53;                                    // 0x628(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_54;                                    // 0x638(0x10)(HasGetValueTypeHash)
	struct FVerseMovement_move_config_entry      _ExprResult_55;                                    // 0x648(0x30)()
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_56;                               // 0x678(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_57;                                    // 0x6C8(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_58;                                    // 0x6D8(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_59;                                    // 0x6E8(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_60;                                    // 0x6F8(0x10)(HasGetValueTypeHash)
	TArray<struct FVerseMovement_move_trigger>   _ExprResult_61;                                    // 0x708(0x10)(ContainsInstancedReference)
	struct FVerseMovement_move_trigger           _ExprResult_62;                                    // 0x718(0x90)()
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_63;                               // 0x7A8(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_64;                                    // 0x7F8(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_65;                                    // 0x808(0x10)(HasGetValueTypeHash)
	struct FVerseMovement_move_input_trigger_params _ExprResult_66;                                    // 0x818(0x38)()
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_67;                               // 0x850(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_68;                                    // 0x8A0(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_69;                                    // 0x8B0(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_70;                                    // 0x8C0(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_71;                                    // 0x8D0(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_72;                                    // 0x8E0(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_73;                                    // 0x8F0(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_74;                                    // 0x900(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x00000000__5;                             // 0x908(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_75 : 1;                                // Mask: 0x1, PropSize: 0x10x90A(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_46A : 7;                                    // Fixing Bit-Field Size..
	FOptionProperty_                             _ExprResultStack_76;                               // 0x90B(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_894F[0x3];                                     // Fixing Size After Last Property..
	struct FSpatialMath_vector2                  _ExprResult_77;                                    // 0x910(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_78;                               // 0x920(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_79;                                    // 0x970(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_80;                                    // 0x980(0x10)(HasGetValueTypeHash)
	TArray<struct FVerseMovement_move_response>  _ExprResult_81;                                    // 0x990(0x10)(ContainsInstancedReference)
	struct FVerseMovement_move_response          _ExprResult_82;                                    // 0x9A0(0x50)(NoDestructor)
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_83;                               // 0x9F0(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_84;                                    // 0xA40(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_85;                                    // 0xA50(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_86;                                    // 0xA60(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_87;                                    // 0xA70(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_88;                                    // 0xA80(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_89;                                    // 0xA90(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_90;                                    // 0xAA0(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_91;                                    // 0xAB0(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_92;                                    // 0xAC0(0x10)(HasGetValueTypeHash)
	struct FSpatialMath_vector3                  _ExprResult_93;                                    // 0xAD0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_94;                               // 0xAE8(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_95;                                    // 0xB38(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_96;                                    // 0xB48(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_97;                                    // 0xB58(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_98;                                    // 0xB68(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x00000000__7;                             // 0xB70(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_99 : 1;                                // Mask: 0x1, PropSize: 0x10xB72(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_46B : 7;                                    // Fixing Bit-Field Size..
	FOptionProperty_                             _ExprResultStack_100;                              // 0xB73(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8950[0x3];                                     // Fixing Size After Last Property..
	struct FSpatialMath_vector3                  _ExprResult_101;                                   // 0xB78(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_102;                              // 0xB90(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_103;                                   // 0xBE0(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_104;                                   // 0xBF0(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_105;                                   // 0xC00(0x10)(HasGetValueTypeHash)
	struct FVerseMovement_move_config_entry      _ExprResult_106;                                   // 0xC10(0x30)()
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_107;                              // 0xC40(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_108;                                   // 0xC90(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_109;                                   // 0xCA0(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_110;                                   // 0xCB0(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_111;                                   // 0xCC0(0x10)(HasGetValueTypeHash)
	TArray<struct FVerseMovement_move_trigger>   _ExprResult_112;                                   // 0xCD0(0x10)(ContainsInstancedReference)
	struct FVerseMovement_move_trigger           _ExprResult_113;                                   // 0xCE0(0x90)()
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_114;                              // 0xD70(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_115;                                   // 0xDC0(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_116;                                   // 0xDD0(0x10)(HasGetValueTypeHash)
	struct FVerseMovement_move_input_trigger_params _ExprResult_117;                                   // 0xDE0(0x38)()
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_118;                              // 0xE18(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_119;                                   // 0xE68(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_120;                                   // 0xE78(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_121;                                   // 0xE88(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_122;                                   // 0xE98(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_123;                                   // 0xEA8(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_124;                                   // 0xEB8(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_125;                                   // 0xEC8(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x00000000__9;                             // 0xED0(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_126 : 1;                               // Mask: 0x1, PropSize: 0x10xED2(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_46C : 7;                                    // Fixing Bit-Field Size..
	FOptionProperty_                             _ExprResultStack_127;                              // 0xED3(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8951[0x3];                                     // Fixing Size After Last Property..
	struct FSpatialMath_vector2                  _ExprResult_128;                                   // 0xED8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_129;                              // 0xEE8(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_130;                                   // 0xF38(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_131;                                   // 0xF48(0x10)(HasGetValueTypeHash)
	struct FVerseMovement_move_trigger           _ExprResult_132;                                   // 0xF58(0x90)()
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_133;                              // 0xFE8(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_134;                                   // 0x1038(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_135;                                   // 0x1048(0x10)(HasGetValueTypeHash)
	struct FVerseMovement_move_trace_trigger_params _ExprResult_136;                                   // 0x1058(0x38)(NoDestructor)
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_137;                              // 0x1090(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_138;                                   // 0x10E0(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_139;                                   // 0x10F0(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_140;                                   // 0x1100(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_141;                                   // 0x1110(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_142;                                   // 0x1120(0x10)(HasGetValueTypeHash)
	struct FSpatialMath_vector3                  _ExprResult_143;                                   // 0x1130(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_144;                              // 0x1148(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_145;                                   // 0x1198(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_146;                                   // 0x11A8(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_147;                                   // 0x11B8(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_148;                                   // 0x11C8(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x00000000__11;                            // 0x11D0(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_149 : 1;                               // Mask: 0x1, PropSize: 0x10x11D2(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_46D : 7;                                    // Fixing Bit-Field Size..
	FOptionProperty_                             _ExprResultStack_150;                              // 0x11D3(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8952[0x3];                                     // Fixing Size After Last Property..
	TArray<struct FVerseMovement_move_response>  _ExprResult_151;                                   // 0x11D8(0x10)(ContainsInstancedReference)
	struct FVerseMovement_move_response          _ExprResult_152;                                   // 0x11E8(0x50)(NoDestructor)
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_153;                              // 0x1238(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_154;                                   // 0x1288(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_155;                                   // 0x1298(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_156;                                   // 0x12A8(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_157;                                   // 0x12B8(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_158;                                   // 0x12C8(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_159;                                   // 0x12D8(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_160;                                   // 0x12E8(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_161;                                   // 0x12F8(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_162;                                   // 0x1308(0x10)(HasGetValueTypeHash)
	struct FSpatialMath_vector3                  _ExprResult_163;                                   // 0x1318(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_164;                              // 0x1330(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_165;                                   // 0x1380(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_166;                                   // 0x1390(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_167;                                   // 0x13A0(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_168;                                   // 0x13B0(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x00000000__13;                            // 0x13B8(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_169 : 1;                               // Mask: 0x1, PropSize: 0x10x13BA(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_46E : 7;                                    // Fixing Bit-Field Size..
	FOptionProperty_                             _ExprResultStack_170;                              // 0x13BB(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8953[0x3];                                     // Fixing Size After Last Property..
	struct FSpatialMath_vector3                  _ExprResult_171;                                   // 0x13C0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_172;                              // 0x13D8(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_173;                                   // 0x1428(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_174;                                   // 0x1438(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_175;                                   // 0x1448(0x10)(HasGetValueTypeHash)
	struct FVerseMovement_move_config_entry      _ExprResult_176;                                   // 0x1458(0x30)()
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_177;                              // 0x1488(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_178;                                   // 0x14D8(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_179;                                   // 0x14E8(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_180;                                   // 0x14F8(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_181;                                   // 0x1508(0x10)(HasGetValueTypeHash)
	TArray<struct FVerseMovement_move_trigger>   _ExprResult_182;                                   // 0x1518(0x10)(ContainsInstancedReference)
	struct FVerseMovement_move_trigger           _ExprResult_183;                                   // 0x1528(0x90)()
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_184;                              // 0x15B8(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_185;                                   // 0x1608(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_186;                                   // 0x1618(0x10)(HasGetValueTypeHash)
	struct FVerseMovement_move_input_trigger_params _ExprResult_187;                                   // 0x1628(0x38)()
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_188;                              // 0x1660(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_189;                                   // 0x16B0(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_190;                                   // 0x16C0(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_191;                                   // 0x16D0(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_192;                                   // 0x16E0(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_193;                                   // 0x16F0(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_194;                                   // 0x1700(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_195;                                   // 0x1710(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x00000000__15;                            // 0x1718(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_196 : 1;                               // Mask: 0x1, PropSize: 0x10x171A(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_46F : 7;                                    // Fixing Bit-Field Size..
	FOptionProperty_                             _ExprResultStack_197;                              // 0x171B(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8954[0x3];                                     // Fixing Size After Last Property..
	struct FSpatialMath_vector2                  _ExprResult_198;                                   // 0x1720(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_199;                              // 0x1730(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_200;                                   // 0x1780(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_201;                                   // 0x1790(0x10)(HasGetValueTypeHash)
	struct FVerseMovement_move_trigger           _ExprResult_202;                                   // 0x17A0(0x90)()
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_203;                              // 0x1830(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_204;                                   // 0x1880(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_205;                                   // 0x1890(0x10)(HasGetValueTypeHash)
	struct FVerseMovement_move_trace_trigger_params _ExprResult_206;                                   // 0x18A0(0x38)(NoDestructor)
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_207;                              // 0x18D8(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_208;                                   // 0x1928(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_209;                                   // 0x1938(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_210;                                   // 0x1948(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_211;                                   // 0x1958(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_212;                                   // 0x1968(0x10)(HasGetValueTypeHash)
	struct FSpatialMath_vector3                  _ExprResult_213;                                   // 0x1978(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_214;                              // 0x1990(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_215;                                   // 0x19E0(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_216;                                   // 0x19F0(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_217;                                   // 0x1A00(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_218;                                   // 0x1A10(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x00000000__17;                            // 0x1A18(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_219 : 1;                               // Mask: 0x1, PropSize: 0x10x1A1A(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_470 : 7;                                    // Fixing Bit-Field Size..
	FOptionProperty_                             _ExprResultStack_220;                              // 0x1A1B(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8955[0x3];                                     // Fixing Size After Last Property..
	TArray<struct FVerseMovement_move_response>  _ExprResult_221;                                   // 0x1A20(0x10)(ContainsInstancedReference)
	struct FVerseMovement_move_response          _ExprResult_222;                                   // 0x1A30(0x50)(NoDestructor)
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_223;                              // 0x1A80(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_224;                                   // 0x1AD0(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_225;                                   // 0x1AE0(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_226;                                   // 0x1AF0(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_227;                                   // 0x1B00(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_228;                                   // 0x1B10(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_229;                                   // 0x1B20(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_230;                                   // 0x1B30(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_231;                                   // 0x1B40(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_232;                                   // 0x1B50(0x10)(HasGetValueTypeHash)
	struct FSpatialMath_vector3                  _ExprResult_233;                                   // 0x1B60(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_234;                              // 0x1B78(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_235;                                   // 0x1BC8(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_236;                                   // 0x1BD8(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_237;                                   // 0x1BE8(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_238;                                   // 0x1BF8(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x00000000__19;                            // 0x1C00(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_239 : 1;                               // Mask: 0x1, PropSize: 0x10x1C02(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_471 : 7;                                    // Fixing Bit-Field Size..
	FOptionProperty_                             _ExprResultStack_240;                              // 0x1C03(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8956[0x3];                                     // Fixing Size After Last Property..
	struct FSpatialMath_vector3                  _ExprResult_241;                                   // 0x1C08(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_242;                              // 0x1C20(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_243;                                   // 0x1C70(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_244;                                   // 0x1C80(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_245;                                   // 0x1C90(0x10)(HasGetValueTypeHash)
	struct FVerseMovement_move_config_entry      _ExprResult_246;                                   // 0x1CA0(0x30)()
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_247;                              // 0x1CD0(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_248;                                   // 0x1D20(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_249;                                   // 0x1D30(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_250;                                   // 0x1D40(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_251;                                   // 0x1D50(0x10)(HasGetValueTypeHash)
	TArray<struct FVerseMovement_move_trigger>   _ExprResult_252;                                   // 0x1D60(0x10)(ContainsInstancedReference)
	struct FVerseMovement_move_trigger           _ExprResult_253;                                   // 0x1D70(0x90)()
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_254;                              // 0x1E00(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_255;                                   // 0x1E50(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_256;                                   // 0x1E60(0x10)(HasGetValueTypeHash)
	struct FVerseMovement_move_input_trigger_params _ExprResult_257;                                   // 0x1E70(0x38)()
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_258;                              // 0x1EA8(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_259;                                   // 0x1EF8(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_260;                                   // 0x1F08(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_261;                                   // 0x1F18(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_262;                                   // 0x1F28(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_263;                                   // 0x1F38(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_264;                                   // 0x1F48(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_265;                                   // 0x1F58(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x00000000__21;                            // 0x1F60(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_266 : 1;                               // Mask: 0x1, PropSize: 0x10x1F62(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_472 : 7;                                    // Fixing Bit-Field Size..
	FOptionProperty_                             _ExprResultStack_267;                              // 0x1F63(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8957[0x3];                                     // Fixing Size After Last Property..
	struct FSpatialMath_vector2                  _ExprResult_268;                                   // 0x1F68(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_269;                              // 0x1F78(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_270;                                   // 0x1FC8(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_271;                                   // 0x1FD8(0x10)(HasGetValueTypeHash)
	TArray<struct FVerseMovement_move_response>  _ExprResult_272;                                   // 0x1FE8(0x10)(ContainsInstancedReference)
	struct FVerseMovement_move_response          _ExprResult_273;                                   // 0x1FF8(0x50)(NoDestructor)
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_274;                              // 0x2048(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_275;                                   // 0x2098(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_276;                                   // 0x20A8(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_277;                                   // 0x20B8(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_278;                                   // 0x20C8(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_279;                                   // 0x20D8(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_280;                                   // 0x20E8(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_281;                                   // 0x20F8(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_282;                                   // 0x2108(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_283;                                   // 0x2118(0x10)(HasGetValueTypeHash)
	struct FSpatialMath_vector3                  _ExprResult_284;                                   // 0x2128(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_285;                              // 0x2140(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_286;                                   // 0x2190(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_287;                                   // 0x21A0(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_288;                                   // 0x21B0(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_289;                                   // 0x21C0(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x00000000__23;                            // 0x21C8(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_290 : 1;                               // Mask: 0x1, PropSize: 0x10x21CA(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_473 : 7;                                    // Fixing Bit-Field Size..
	FOptionProperty_                             _ExprResultStack_291;                              // 0x21CB(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8958[0x3];                                     // Fixing Size After Last Property..
	struct FSpatialMath_vector3                  _ExprResult_292;                                   // 0x21D0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_293;                              // 0x21E8(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_294;                                   // 0x2238(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_295;                                   // 0x2248(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_296;                                   // 0x2258(0x10)(HasGetValueTypeHash)
	struct FVerseMovement_move_config_entry      _ExprResult_297;                                   // 0x2268(0x30)()
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_298;                              // 0x2298(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_299;                                   // 0x22E8(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_300;                                   // 0x22F8(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_301;                                   // 0x2308(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_302;                                   // 0x2318(0x10)(HasGetValueTypeHash)
	TArray<struct FVerseMovement_move_trigger>   _ExprResult_303;                                   // 0x2328(0x10)(ContainsInstancedReference)
	struct FVerseMovement_move_trigger           _ExprResult_304;                                   // 0x2338(0x90)()
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_305;                              // 0x23C8(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_306;                                   // 0x2418(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_307;                                   // 0x2428(0x10)(HasGetValueTypeHash)
	struct FVerseMovement_move_trace_trigger_params _ExprResult_308;                                   // 0x2438(0x38)(NoDestructor)
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_309;                              // 0x2470(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_310;                                   // 0x24C0(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_311;                                   // 0x24D0(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_312;                                   // 0x24E0(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_313;                                   // 0x24F0(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_314;                                   // 0x2500(0x10)(HasGetValueTypeHash)
	struct FSpatialMath_vector3                  _ExprResult_315;                                   // 0x2510(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_316;                              // 0x2528(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_317;                                   // 0x2578(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_318;                                   // 0x2588(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_319;                                   // 0x2598(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_320;                                   // 0x25A8(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x00000000__25;                            // 0x25B0(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_321 : 1;                               // Mask: 0x1, PropSize: 0x10x25B2(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_474 : 7;                                    // Fixing Bit-Field Size..
	FOptionProperty_                             _ExprResultStack_322;                              // 0x25B3(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8959[0x3];                                     // Fixing Size After Last Property..
	TArray<struct FVerseMovement_move_response>  _ExprResult_323;                                   // 0x25B8(0x10)(ContainsInstancedReference)
	struct FVerseMovement_move_response          _ExprResult_324;                                   // 0x25C8(0x50)(NoDestructor)
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_325;                              // 0x2618(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_326;                                   // 0x2668(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_327;                                   // 0x2678(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_328;                                   // 0x2688(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_329;                                   // 0x2698(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_330;                                   // 0x26A8(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_331;                                   // 0x26B8(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_332;                                   // 0x26C8(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_333;                                   // 0x26D8(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_334;                                   // 0x26E8(0x10)(HasGetValueTypeHash)
	struct FSpatialMath_vector3                  _ExprResult_335;                                   // 0x26F8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_336;                              // 0x2710(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_337;                                   // 0x2760(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_338;                                   // 0x2770(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_339;                                   // 0x2780(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_340;                                   // 0x2790(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x00000000__27;                            // 0x2798(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_341 : 1;                               // Mask: 0x1, PropSize: 0x10x279A(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_475 : 7;                                    // Fixing Bit-Field Size..
	FOptionProperty_                             _ExprResultStack_342;                              // 0x279B(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_895A[0x3];                                     // Fixing Size After Last Property..
	struct FSpatialMath_vector3                  _ExprResult_343;                                   // 0x27A0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_344;                              // 0x27B8(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_345;                                   // 0x2808(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_346;                                   // 0x2818(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_347;                                   // 0x2828(0x10)(HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
