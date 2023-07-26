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

// 0x18 (0x18 - 0x0)
// VerseStruct EpicGamesTemporary.SpatialMath_vector3
struct FSpatialMath_vector3
{
public:
	double                                       __verse_0x51F8FD2F_X;                              // 0x0(0x8)(Edit, ZeroConstructor, InstancedReference, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __verse_0x349F4197_Y;                              // 0x8(0x8)(Edit, ZeroConstructor, InstancedReference, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __verse_0xDA30F485_Z;                              // 0x10(0x8)(Edit, ZeroConstructor, InstancedReference, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// VerseStruct EpicGamesTemporary.SpatialMath_transform
struct FSpatialMath_transform
{
public:
	struct FSpatialMath_vector3                  __verse_0xA376805D_Scale;                          // 0x0(0x18)(Edit, ZeroConstructor, InstancedReference, SaveGame, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8B61[0x8];                                     // Fixing Size After Last Property..
	struct FVerseRotation                        __verse_0x78C70FF3_Rotation;                       // 0x20(0x20)(Edit, InstancedReference, SaveGame, NoDestructor)
	struct FSpatialMath_vector3                  __verse_0x4E05BF15_Translation;                    // 0x40(0x18)(Edit, ZeroConstructor, InstancedReference, SaveGame, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8B62[0x8];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// VerseStruct EpicGamesTemporary.SpatialMath_vector2
struct FSpatialMath_vector2
{
public:
	double                                       __verse_0x51F8FD2F_X;                              // 0x0(0x8)(Edit, ZeroConstructor, InstancedReference, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __verse_0x349F4197_Y;                              // 0x8(0x8)(Edit, ZeroConstructor, InstancedReference, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// VerseStruct EpicGamesTemporary.SpatialMath_vector2i
struct FSpatialMath_vector2i
{
public:
	int64                                        __verse_0x51F8FD2F_X;                              // 0x0(0x8)(Edit, ZeroConstructor, InstancedReference, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        __verse_0x349F4197_Y;                              // 0x8(0x8)(Edit, ZeroConstructor, InstancedReference, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// VerseStruct EpicGamesTemporary.tuple_L_R
struct FTuple_L_R
{
public:
	uint8                                        _StructPaddingDummy;                               // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// VerseStruct EpicGamesTemporary.tuple_Lfloat_Mfloat_Mfloat_R
struct FTuple_Lfloat_Mfloat_Mfloat_R
{
public:
	double                                       __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __verse_0x7D844C3C_Elem1;                          // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __verse_0x932BF92E_Elem2;                          // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// VerseStruct EpicGamesTemporary.tuple_Lfloat_Mtuple_L_R_Mtuple_L_R_R
struct FTuple_Lfloat_Mtuple_L_R_Mtuple_L_R_R
{
public:
	double                                       __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0x7D844C3C_Elem1;                          // 0x8(0x1)(InstancedReference, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0x932BF92E_Elem2;                          // 0x9(0x1)(InstancedReference, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// VerseStruct EpicGamesTemporary.tuple_Lfloat_Mvector2_R
struct FTuple_Lfloat_Mvector2_R
{
public:
	double                                       __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSpatialMath_vector2                  __verse_0x7D844C3C_Elem1;                          // 0x8(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// VerseStruct EpicGamesTemporary.tuple_Lfloat_Mvector3_R
struct FTuple_Lfloat_Mvector3_R
{
public:
	double                                       __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSpatialMath_vector3                  __verse_0x7D844C3C_Elem1;                          // 0x8(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// VerseStruct EpicGamesTemporary.tuple_Lint_Mvector2i_R
struct FTuple_Lint_Mvector2i_R
{
public:
	int64                                        __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSpatialMath_vector2i                 __verse_0x7D844C3C_Elem1;                          // 0x8(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
};

// 0x48 (0x48 - 0x0)
// VerseStruct EpicGamesTemporary.tuple_Lrotation_Mrotation_Mfloat_R
struct FTuple_Lrotation_Mrotation_Mfloat_R
{
public:
	struct FVerseRotation                        __verse_0x18E3F084_Elem0;                          // 0x0(0x20)(InstancedReference, NoDestructor)
	struct FVerseRotation                        __verse_0x7D844C3C_Elem1;                          // 0x20(0x20)(InstancedReference, NoDestructor)
	double                                       __verse_0x932BF92E_Elem2;                          // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// VerseStruct EpicGamesTemporary.tuple_Lrotation_Mrotation_R
struct FTuple_Lrotation_Mrotation_R
{
public:
	struct FVerseRotation                        __verse_0x18E3F084_Elem0;                          // 0x0(0x20)(InstancedReference, NoDestructor)
	struct FVerseRotation                        __verse_0x7D844C3C_Elem1;                          // 0x20(0x20)(InstancedReference, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// VerseStruct EpicGamesTemporary.tuple_Lrotation_Mtuple_L_R_Mfloat_R
struct FTuple_Lrotation_Mtuple_L_R_Mfloat_R
{
public:
	struct FVerseRotation                        __verse_0x18E3F084_Elem0;                          // 0x0(0x20)(InstancedReference, NoDestructor)
	struct FTuple_L_R                            __verse_0x7D844C3C_Elem1;                          // 0x20(0x1)(InstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_8B63[0x7];                                     // Fixing Size After Last Property..
	double                                       __verse_0x932BF92E_Elem2;                          // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// VerseStruct EpicGamesTemporary.tuple_Lrotation_Mtuple_L_R_Mrotation_R
struct FTuple_Lrotation_Mtuple_L_R_Mrotation_R
{
public:
	struct FVerseRotation                        __verse_0x18E3F084_Elem0;                          // 0x0(0x20)(InstancedReference, NoDestructor)
	struct FTuple_L_R                            __verse_0x7D844C3C_Elem1;                          // 0x20(0x1)(InstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_8B64[0xF];                                     // Fixing Size After Last Property..
	struct FVerseRotation                        __verse_0x932BF92E_Elem2;                          // 0x30(0x20)(InstancedReference, NoDestructor)
};

// 0x22 (0x22 - 0x0)
// VerseStruct EpicGamesTemporary.tuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R
struct FTuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R
{
public:
	struct FVerseRotation                        __verse_0x18E3F084_Elem0;                          // 0x0(0x20)(InstancedReference, NoDestructor)
	struct FTuple_L_R                            __verse_0x7D844C3C_Elem1;                          // 0x20(0x1)(InstancedReference, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0x932BF92E_Elem2;                          // 0x21(0x1)(InstancedReference, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// VerseStruct EpicGamesTemporary.tuple_Lrotation_Mtuple_L_R_Mvector3_R
struct FTuple_Lrotation_Mtuple_L_R_Mvector3_R
{
public:
	struct FVerseRotation                        __verse_0x18E3F084_Elem0;                          // 0x0(0x20)(InstancedReference, NoDestructor)
	struct FTuple_L_R                            __verse_0x7D844C3C_Elem1;                          // 0x20(0x1)(InstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_8B65[0x7];                                     // Fixing Size After Last Property..
	struct FSpatialMath_vector3                  __verse_0x932BF92E_Elem2;                          // 0x28(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
};

// 0x78 (0x78 - 0x0)
// VerseStruct EpicGamesTemporary.tuple_Ltransform_Mvector3_R
struct FTuple_Ltransform_Mvector3_R
{
public:
	struct FSpatialMath_transform                __verse_0x18E3F084_Elem0;                          // 0x0(0x60)(InstancedReference, NoDestructor)
	struct FSpatialMath_vector3                  __verse_0x7D844C3C_Elem1;                          // 0x60(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// VerseStruct EpicGamesTemporary.tuple_Lvector2_Mfloat_R
struct FTuple_Lvector2_Mfloat_R
{
public:
	struct FSpatialMath_vector2                  __verse_0x18E3F084_Elem0;                          // 0x0(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	double                                       __verse_0x7D844C3C_Elem1;                          // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// VerseStruct EpicGamesTemporary.tuple_Lvector2_Mtuple_L_R_Mfloat_R
struct FTuple_Lvector2_Mtuple_L_R_Mfloat_R
{
public:
	struct FSpatialMath_vector2                  __verse_0x18E3F084_Elem0;                          // 0x0(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FTuple_L_R                            __verse_0x7D844C3C_Elem1;                          // 0x10(0x1)(InstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_8B66[0x7];                                     // Fixing Size After Last Property..
	double                                       __verse_0x932BF92E_Elem2;                          // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x12 (0x12 - 0x0)
// VerseStruct EpicGamesTemporary.tuple_Lvector2_Mtuple_L_R_Mtuple_L_R_R
struct FTuple_Lvector2_Mtuple_L_R_Mtuple_L_R_R
{
public:
	struct FSpatialMath_vector2                  __verse_0x18E3F084_Elem0;                          // 0x0(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FTuple_L_R                            __verse_0x7D844C3C_Elem1;                          // 0x10(0x1)(InstancedReference, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0x932BF92E_Elem2;                          // 0x11(0x1)(InstancedReference, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// VerseStruct EpicGamesTemporary.tuple_Lvector2_Mvector2_Mfloat_R
struct FTuple_Lvector2_Mvector2_Mfloat_R
{
public:
	struct FSpatialMath_vector2                  __verse_0x18E3F084_Elem0;                          // 0x0(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FSpatialMath_vector2                  __verse_0x7D844C3C_Elem1;                          // 0x10(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	double                                       __verse_0x932BF92E_Elem2;                          // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// VerseStruct EpicGamesTemporary.tuple_Lvector2_Mvector2_R
struct FTuple_Lvector2_Mvector2_R
{
public:
	struct FSpatialMath_vector2                  __verse_0x18E3F084_Elem0;                          // 0x0(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FSpatialMath_vector2                  __verse_0x7D844C3C_Elem1;                          // 0x10(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// VerseStruct EpicGamesTemporary.tuple_Lvector2i_Mint_R
struct FTuple_Lvector2i_Mint_R
{
public:
	struct FSpatialMath_vector2i                 __verse_0x18E3F084_Elem0;                          // 0x0(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	int64                                        __verse_0x7D844C3C_Elem1;                          // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// VerseStruct EpicGamesTemporary.tuple_Lvector2i_Mvector2i_R
struct FTuple_Lvector2i_Mvector2i_R
{
public:
	struct FSpatialMath_vector2i                 __verse_0x18E3F084_Elem0;                          // 0x0(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FSpatialMath_vector2i                 __verse_0x7D844C3C_Elem1;                          // 0x10(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// VerseStruct EpicGamesTemporary.tuple_Lvector3_Mfloat_R
struct FTuple_Lvector3_Mfloat_R
{
public:
	struct FSpatialMath_vector3                  __verse_0x18E3F084_Elem0;                          // 0x0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	double                                       __verse_0x7D844C3C_Elem1;                          // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// VerseStruct EpicGamesTemporary.tuple_Lvector3_Mtuple_L_R_Mfloat_R
struct FTuple_Lvector3_Mtuple_L_R_Mfloat_R
{
public:
	struct FSpatialMath_vector3                  __verse_0x18E3F084_Elem0;                          // 0x0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FTuple_L_R                            __verse_0x7D844C3C_Elem1;                          // 0x18(0x1)(InstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_8B67[0x7];                                     // Fixing Size After Last Property..
	double                                       __verse_0x932BF92E_Elem2;                          // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A (0x1A - 0x0)
// VerseStruct EpicGamesTemporary.tuple_Lvector3_Mtuple_L_R_Mtuple_L_R_R
struct FTuple_Lvector3_Mtuple_L_R_Mtuple_L_R_R
{
public:
	struct FSpatialMath_vector3                  __verse_0x18E3F084_Elem0;                          // 0x0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FTuple_L_R                            __verse_0x7D844C3C_Elem1;                          // 0x18(0x1)(InstancedReference, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0x932BF92E_Elem2;                          // 0x19(0x1)(InstancedReference, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// VerseStruct EpicGamesTemporary.tuple_Lvector3_Mvector3_Mfloat_R
struct FTuple_Lvector3_Mvector3_Mfloat_R
{
public:
	struct FSpatialMath_vector3                  __verse_0x18E3F084_Elem0;                          // 0x0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FSpatialMath_vector3                  __verse_0x7D844C3C_Elem1;                          // 0x18(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	double                                       __verse_0x932BF92E_Elem2;                          // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// VerseStruct EpicGamesTemporary.tuple_Lvector3_Mvector3_R
struct FTuple_Lvector3_Mvector3_R
{
public:
	struct FSpatialMath_vector3                  __verse_0x18E3F084_Elem0;                          // 0x0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FSpatialMath_vector3                  __verse_0x7D844C3C_Elem1;                          // 0x18(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
