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

enum class EVerseExperimental_day_of_week : uint8
{
	Monday                         = 0,
	Tuesday                        = 1,
	Wednesday                      = 2,
	Thursday                       = 3,
	Friday                         = 4,
	Saturday                       = 5,
	Sunday                         = 6,
	VerseExperimental_day_of_MAX   = 7,
};

enum class EVerseExperimental_month_of_year : uint8
{
	January                        = 0,
	February                       = 1,
	March                          = 2,
	April                          = 3,
	May                            = 4,
	June                           = 5,
	July                           = 6,
	August                         = 7,
	September                      = 8,
	October                        = 9,
	November                       = 10,
	December                       = 11,
	VerseExperimental_month_of_MAX = 12,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// VerseStruct VerseExperimental.tuple_L_R
struct FTuple_L_R
{
public:
	uint8                                        _StructPaddingDummy;                               // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// VerseStruct VerseExperimental.VerseExperimental_date_time
struct FVerseExperimental_date_time
{
public:
	int64                                        __verse_0xD9F5FBDB_Ticks;                          // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// VerseStruct VerseExperimental.tuple_Ldate__time_Mdate__time_R
struct FTuple_Ldate__time_Mdate__time_R
{
public:
	struct FVerseExperimental_date_time          __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FVerseExperimental_date_time          __verse_0x7D844C3C_Elem1;                          // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// VerseStruct VerseExperimental.VerseExperimental_time_span
struct FVerseExperimental_time_span
{
public:
	int64                                        __verse_0xD9F5FBDB_Ticks;                          // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_386E[0x8];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// VerseStruct VerseExperimental.tuple_Ldate__time_Mtime__span_R
struct FTuple_Ldate__time_Mtime__span_R
{
public:
	struct FVerseExperimental_date_time          __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FVerseExperimental_time_span          __verse_0x7D844C3C_Elem1;                          // 0x8(0x10)(InstancedReference, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// VerseStruct VerseExperimental.tuple_Lfloat_Mtime__span_R
struct FTuple_Lfloat_Mtime__span_R
{
public:
	double                                       __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVerseExperimental_time_span          __verse_0x7D844C3C_Elem1;                          // 0x8(0x10)(InstancedReference, NoDestructor)
};

// 0x38 (0x38 - 0x0)
// VerseStruct VerseExperimental.tuple_Lint_Mint_Mint_Mint_Mint_Mint_Mint_R
struct FTuple_Lint_Mint_Mint_Mint_Mint_Mint_Mint_R
{
public:
	int64                                        __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        __verse_0x7D844C3C_Elem1;                          // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        __verse_0x932BF92E_Elem2;                          // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        __verse_0xF64C4596_Elem3;                          // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        __verse_0x4F74920B_Elem4;                          // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        __verse_0x2A132EB3_Elem5;                          // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        __verse_0xC4BC9BA1_Elem6;                          // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// VerseStruct VerseExperimental.tuple_Lint_Mint_Mint_Mint_Mint_R
struct FTuple_Lint_Mint_Mint_Mint_Mint_R
{
public:
	int64                                        __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        __verse_0x7D844C3C_Elem1;                          // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        __verse_0x932BF92E_Elem2;                          // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        __verse_0xF64C4596_Elem3;                          // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        __verse_0x4F74920B_Elem4;                          // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// VerseStruct VerseExperimental.tuple_Lint_Mint_R
struct FTuple_Lint_Mint_R
{
public:
	int64                                        __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        __verse_0x7D844C3C_Elem1;                          // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// VerseStruct VerseExperimental.tuple_Ltime__span_Mfloat_R
struct FTuple_Ltime__span_Mfloat_R
{
public:
	struct FVerseExperimental_time_span          __verse_0x18E3F084_Elem0;                          // 0x0(0x10)(InstancedReference, NoDestructor)
	double                                       __verse_0x7D844C3C_Elem1;                          // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// VerseStruct VerseExperimental.tuple_Ltime__span_Mtime__span_R
struct FTuple_Ltime__span_Mtime__span_R
{
public:
	struct FVerseExperimental_time_span          __verse_0x18E3F084_Elem0;                          // 0x0(0x10)(InstancedReference, NoDestructor)
	struct FVerseExperimental_time_span          __verse_0x7D844C3C_Elem1;                          // 0x10(0x10)(InstancedReference, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// VerseStruct VerseExperimental.VerseExperimental_date_parts
struct FVerseExperimental_date_parts
{
public:
	int64                                        __verse_0xC55E1F94_Year;                           // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        __verse_0x1B283C2C_Month;                          // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        __verse_0xD305C642_Day;                            // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// VerseStruct VerseExperimental.VerseExperimental_time_of_day_parts
struct FVerseExperimental_time_of_day_parts
{
public:
	int64                                        __verse_0xEF684B3B_Hours;                          // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        __verse_0x2D42EE39_Minutes;                        // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        __verse_0xA650E91F_Seconds;                        // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        __verse_0x59EF8267_Milliseconds;                   // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        __verse_0x40AEA2F6_Microseconds;                   // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        __verse_0x0E58C5A9_Nanoseconds;                    // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
