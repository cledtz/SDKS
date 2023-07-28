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
// VerseStruct Verse.Colors_color
struct FColors_color
{
public:
	double                                       __verse_0x35184040_R;                              // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __verse_0x98BF8727_G;                              // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __verse_0xAA4F5910_B;                              // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// VerseStruct Verse.tuple_L_K_Kchar_M_Kchar_R
struct FTuple_L_K_Kchar_M_Kchar_R
{
public:
	TArray<FVerseStringProperty_>                __verse_0x18E3F084_Elem0;                          // 0x0(0x10)(InstancedReference, ContainsInstancedReference)
	FVerseStringProperty_                        __verse_0x7D844C3C_Elem1;                          // 0x10(0x10)(InstancedReference, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// VerseStruct Verse.tuple_L_Kany_M_Kany_R
struct FTuple_L_Kany_M_Kany_R
{
public:
	TArray<FVerseDynamicProperty_>               __verse_0x18E3F084_Elem0;                          // 0x0(0x10)(InstancedReference, ContainsInstancedReference)
	TArray<FVerseDynamicProperty_>               __verse_0x7D844C3C_Elem1;                          // 0x10(0x10)(InstancedReference, ContainsInstancedReference)
};

// 0x1 (0x1 - 0x0)
// VerseStruct Verse.tuple_L_R
struct FTuple_L_R
{
public:
	uint8                                        _StructPaddingDummy;                               // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// VerseStruct Verse.tuple_L_Kany_Mtuple_L_R_Many_R
struct FTuple_L_Kany_Mtuple_L_R_Many_R
{
public:
	TArray<FVerseDynamicProperty_>               __verse_0x18E3F084_Elem0;                          // 0x0(0x10)(InstancedReference, ContainsInstancedReference)
	struct FTuple_L_R                            __verse_0x7D844C3C_Elem1;                          // 0x10(0x1)(InstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_8876[0x7];                                     // Fixing Size After Last Property..
	FVerseDynamicProperty_                       __verse_0x932BF92E_Elem2;                          // 0x18(0x10)(InstancedReference, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// VerseStruct Verse.tuple_L_Kany_Mtuple_L_R_Mint_R
struct FTuple_L_Kany_Mtuple_L_R_Mint_R
{
public:
	TArray<FVerseDynamicProperty_>               __verse_0x18E3F084_Elem0;                          // 0x0(0x10)(InstancedReference, ContainsInstancedReference)
	struct FTuple_L_R                            __verse_0x7D844C3C_Elem1;                          // 0x10(0x1)(InstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_8877[0x7];                                     // Fixing Size After Last Property..
	int64                                        __verse_0x932BF92E_Elem2;                          // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// VerseStruct Verse.tuple_L_Kany_Mtuple_L_R_Mtuple_L_Kany_M_Kany_R_R
struct FTuple_L_Kany_Mtuple_L_R_Mtuple_L_Kany_M_Kany_R_R
{
public:
	TArray<FVerseDynamicProperty_>               __verse_0x18E3F084_Elem0;                          // 0x0(0x10)(InstancedReference, ContainsInstancedReference)
	struct FTuple_L_R                            __verse_0x7D844C3C_Elem1;                          // 0x10(0x1)(InstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_8878[0x7];                                     // Fixing Size After Last Property..
	struct FTuple_L_Kany_M_Kany_R                __verse_0x932BF92E_Elem2;                          // 0x18(0x20)(InstancedReference, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// VerseStruct Verse.tuple_Lany_Many_R
struct FTuple_Lany_Many_R
{
public:
	FVerseDynamicProperty_                       __verse_0x18E3F084_Elem0;                          // 0x0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseDynamicProperty_                       __verse_0x7D844C3C_Elem1;                          // 0x10(0x10)(InstancedReference, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// VerseStruct Verse.tuple_L_Kany_Mtuple_L_R_Mtuple_Lany_Many_R_R
struct FTuple_L_Kany_Mtuple_L_R_Mtuple_Lany_Many_R_R
{
public:
	TArray<FVerseDynamicProperty_>               __verse_0x18E3F084_Elem0;                          // 0x0(0x10)(InstancedReference, ContainsInstancedReference)
	struct FTuple_L_R                            __verse_0x7D844C3C_Elem1;                          // 0x10(0x1)(InstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_8879[0x7];                                     // Fixing Size After Last Property..
	struct FTuple_Lany_Many_R                    __verse_0x932BF92E_Elem2;                          // 0x18(0x20)(InstancedReference, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// VerseStruct Verse.tuple_Lint_M_Kany_R
struct FTuple_Lint_M_Kany_R
{
public:
	int64                                        __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<FVerseDynamicProperty_>               __verse_0x7D844C3C_Elem1;                          // 0x8(0x10)(InstancedReference, ContainsInstancedReference)
};

// 0x30 (0x30 - 0x0)
// VerseStruct Verse.tuple_L_Kany_Mtuple_L_R_Mtuple_Lint_M_Kany_R_R
struct FTuple_L_Kany_Mtuple_L_R_Mtuple_Lint_M_Kany_R_R
{
public:
	TArray<FVerseDynamicProperty_>               __verse_0x18E3F084_Elem0;                          // 0x0(0x10)(InstancedReference, ContainsInstancedReference)
	struct FTuple_L_R                            __verse_0x7D844C3C_Elem1;                          // 0x10(0x1)(InstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_887A[0x7];                                     // Fixing Size After Last Property..
	struct FTuple_Lint_M_Kany_R                  __verse_0x932BF92E_Elem2;                          // 0x18(0x18)(InstancedReference, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// VerseStruct Verse.tuple_Lint_Many_R
struct FTuple_Lint_Many_R
{
public:
	int64                                        __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FVerseDynamicProperty_                       __verse_0x7D844C3C_Elem1;                          // 0x8(0x10)(InstancedReference, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// VerseStruct Verse.tuple_L_Kany_Mtuple_L_R_Mtuple_Lint_Many_R_R
struct FTuple_L_Kany_Mtuple_L_R_Mtuple_Lint_Many_R_R
{
public:
	TArray<FVerseDynamicProperty_>               __verse_0x18E3F084_Elem0;                          // 0x0(0x10)(InstancedReference, ContainsInstancedReference)
	struct FTuple_L_R                            __verse_0x7D844C3C_Elem1;                          // 0x10(0x1)(InstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_887B[0x7];                                     // Fixing Size After Last Property..
	struct FTuple_Lint_Many_R                    __verse_0x932BF92E_Elem2;                          // 0x18(0x18)(InstancedReference, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// VerseStruct Verse.tuple_Lint_Mint_R
struct FTuple_Lint_Mint_R
{
public:
	int64                                        __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        __verse_0x7D844C3C_Elem1;                          // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// VerseStruct Verse.tuple_L_Kany_Mtuple_L_R_Mtuple_Lint_Mint_R_R
struct FTuple_L_Kany_Mtuple_L_R_Mtuple_Lint_Mint_R_R
{
public:
	TArray<FVerseDynamicProperty_>               __verse_0x18E3F084_Elem0;                          // 0x0(0x10)(InstancedReference, ContainsInstancedReference)
	struct FTuple_L_R                            __verse_0x7D844C3C_Elem1;                          // 0x10(0x1)(InstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_887C[0x7];                                     // Fixing Size After Last Property..
	struct FTuple_Lint_Mint_R                    __verse_0x932BF92E_Elem2;                          // 0x18(0x10)(InstancedReference, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// VerseStruct Verse.tuple_Ltype_7b0_7d_Mint_R
struct FTuple_Ltype_7b0_7d_Mint_R
{
public:
	int64                                        __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        __verse_0x7D844C3C_Elem1;                          // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// VerseStruct Verse.tuple_L_Kany_Mtuple_L_R_Mtuple_Ltype_7b0_7d_Mint_R_R
struct FTuple_L_Kany_Mtuple_L_R_Mtuple_Ltype_7b0_7d_Mint_R_R
{
public:
	TArray<FVerseDynamicProperty_>               __verse_0x18E3F084_Elem0;                          // 0x0(0x10)(InstancedReference, ContainsInstancedReference)
	struct FTuple_L_R                            __verse_0x7D844C3C_Elem1;                          // 0x10(0x1)(InstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_887D[0x7];                                     // Fixing Size After Last Property..
	struct FTuple_Ltype_7b0_7d_Mint_R            __verse_0x932BF92E_Elem2;                          // 0x18(0x10)(InstancedReference, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// VerseStruct Verse.tuple_L_Kchar_M_Kchar_M_5b_Kchar_5dlocalizable__value_R
struct FTuple_L_Kchar_M_Kchar_M_5b_Kchar_5dlocalizable__value_R
{
public:
	FVerseStringProperty_                        __verse_0x18E3F084_Elem0;                          // 0x0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseStringProperty_                        __verse_0x7D844C3C_Elem1;                          // 0x10(0x10)(InstancedReference, HasGetValueTypeHash)
	TMap<FVerseStringProperty_, class UVerse_localizable_value*> __verse_0x932BF92E_Elem2;                          // 0x20(0x50)(InstancedReference, ContainsInstancedReference)
};

// 0x40 (0x40 - 0x0)
// VerseStruct Verse.tuple_L_Kchar_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_R
struct FTuple_L_Kchar_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_R
{
public:
	FVerseStringProperty_                        __verse_0x18E3F084_Elem0;                          // 0x0(0x10)(InstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x7D844C3C_Elem1;                          // 0x10(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x932BF92E_Elem2;                          // 0x20(0x20)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x12 (0x12 - 0x0)
// VerseStruct Verse.tuple_L_Kchar_M_QWhere_Nlocale_R
struct FTuple_L_Kchar_M_QWhere_Nlocale_R
{
public:
	FVerseStringProperty_                        __verse_0x18E3F084_Elem0;                          // 0x0(0x10)(InstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x7D844C3C_Elem1;                          // 0x10(0x2)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x30 (0x30 - 0x0)
// VerseStruct Verse.tuple_Lcolor_Mcolor_R
struct FTuple_Lcolor_Mcolor_R
{
public:
	struct FColors_color                         __verse_0x18E3F084_Elem0;                          // 0x0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x7D844C3C_Elem1;                          // 0x18(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// VerseStruct Verse.tuple_Lcolor_Mfloat_R
struct FTuple_Lcolor_Mfloat_R
{
public:
	struct FColors_color                         __verse_0x18E3F084_Elem0;                          // 0x0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	double                                       __verse_0x7D844C3C_Elem1;                          // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// VerseStruct Verse.tuple_Lcolor_Mint_R
struct FTuple_Lcolor_Mint_R
{
public:
	struct FColors_color                         __verse_0x18E3F084_Elem0;                          // 0x0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	int64                                        __verse_0x7D844C3C_Elem1;                          // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// VerseStruct Verse.tuple_Lfloat_M_QWhere_Nlocale_R
struct FTuple_Lfloat_M_QWhere_Nlocale_R
{
public:
	double                                       __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x7D844C3C_Elem1;                          // 0x8(0x2)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x20 (0x20 - 0x0)
// VerseStruct Verse.tuple_Lfloat_Mcolor_R
struct FTuple_Lfloat_Mcolor_R
{
public:
	double                                       __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColors_color                         __verse_0x7D844C3C_Elem1;                          // 0x8(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// VerseStruct Verse.tuple_Lfloat_Mfloat_Mfloat_R
struct FTuple_Lfloat_Mfloat_Mfloat_R
{
public:
	double                                       __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __verse_0x7D844C3C_Elem1;                          // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __verse_0x932BF92E_Elem2;                          // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// VerseStruct Verse.tuple_Lfloat_Mfloat_R
struct FTuple_Lfloat_Mfloat_R
{
public:
	double                                       __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __verse_0x7D844C3C_Elem1;                          // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// VerseStruct Verse.tuple_Lfloat_Mtuple_L_R_Mfloat_R
struct FTuple_Lfloat_Mtuple_L_R_Mfloat_R
{
public:
	double                                       __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0x7D844C3C_Elem1;                          // 0x8(0x1)(InstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_887E[0x7];                                     // Fixing Size After Last Property..
	double                                       __verse_0x932BF92E_Elem2;                          // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// VerseStruct Verse.tuple_Lfloat_Mtuple_L_R_Mtuple_L_R_R
struct FTuple_Lfloat_Mtuple_L_R_Mtuple_L_R_R
{
public:
	double                                       __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0x7D844C3C_Elem1;                          // 0x8(0x1)(InstancedReference, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0x932BF92E_Elem2;                          // 0x9(0x1)(InstancedReference, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// VerseStruct Verse.tuple_Lint_M_QWhere_Nlocale_R
struct FTuple_Lint_M_QWhere_Nlocale_R
{
public:
	int64                                        __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x7D844C3C_Elem1;                          // 0x8(0x2)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x20 (0x20 - 0x0)
// VerseStruct Verse.tuple_Lint_Mcolor_R
struct FTuple_Lint_Mcolor_R
{
public:
	int64                                        __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColors_color                         __verse_0x7D844C3C_Elem1;                          // 0x8(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// VerseStruct Verse.tuple_Lint_Mint_Mint_R
struct FTuple_Lint_Mint_Mint_R
{
public:
	int64                                        __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        __verse_0x7D844C3C_Elem1;                          // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        __verse_0x932BF92E_Elem2;                          // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// VerseStruct Verse.Verse_locale
struct FVerse_locale
{
public:
	uint8                                        Pad_887F[0x1];                                     // Fixing Size Of Struct..
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
