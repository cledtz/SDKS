#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// VerseClass VerseExperimental.$SolarisSignatureFunctionOuter
class U_SolarisSignatureFunctionOuter : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("$SolarisSignatureFunctionOuter");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// VerseClass VerseExperimental.VerseExperimental
class UVerseExperimental : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseExperimental");
		return Clss;
	}

	struct FVerseExperimental_time_span _L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2f_U_L_Ntime__span_M_Nfloat_R(const struct FTuple_Ltime__span_Mfloat_R& __verse_0xB2CDDD72_Argument, FVerseFunctionProperty_ _Callee_0, const struct FTuple_Ltime__span_Mfloat_R& _ExprResult_1);
	struct FVerseExperimental_time_span _L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2d_U_L_Ndate__time_M_Ndate__time_R(const struct FTuple_Ldate__time_Mdate__time_R& __verse_0xB2CDDD72_Argument, FVerseFunctionProperty_ _Callee_0, const struct FTuple_Ldate__time_Mdate__time_R& _ExprResult_1);
	struct FVerseExperimental_date_time _L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2d_U_L_Ndate__time_M_Ntime__span_R(const struct FTuple_Ldate__time_Mtime__span_R& __verse_0xB2CDDD72_Argument, FVerseFunctionProperty_ _Callee_0, const struct FTuple_Ldate__time_Mtime__span_R& _ExprResult_1);
	struct FVerseExperimental_time_span _L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2d_U_L_Ntime__span_R(const struct FVerseExperimental_time_span& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1);
	struct FVerseExperimental_time_span _L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2d_U_L_Ntime__span_M_Ntime__span_R(const struct FTuple_Ltime__span_Mtime__span_R& __verse_0xB2CDDD72_Argument, FVerseFunctionProperty_ _Callee_0, const struct FTuple_Ltime__span_Mtime__span_R& _ExprResult_1);
	struct FVerseExperimental_date_time _L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2b_U_L_Ndate__time_M_Ntime__span_R(const struct FTuple_Ldate__time_Mtime__span_R& __verse_0xB2CDDD72_Argument, FVerseFunctionProperty_ _Callee_0, const struct FTuple_Ldate__time_Mtime__span_R& _ExprResult_1);
	struct FVerseExperimental_time_span _L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2b_U_L_Ntime__span_M_Ntime__span_R(const struct FTuple_Ltime__span_Mtime__span_R& __verse_0xB2CDDD72_Argument, FVerseFunctionProperty_ _Callee_0, const struct FTuple_Ltime__span_Mtime__span_R& _ExprResult_1);
	struct FVerseExperimental_time_span _L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2a_U_L_Ntime__span_M_Nfloat_R(const struct FTuple_Ltime__span_Mfloat_R& __verse_0xB2CDDD72_Argument, FVerseFunctionProperty_ _Callee_0, const struct FTuple_Ltime__span_Mfloat_R& _ExprResult_1);
	struct FVerseExperimental_time_span _L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2a_U_L_Nfloat_M_Ntime__span_R(const struct FTuple_Lfloat_Mtime__span_R& __verse_0xB2CDDD72_Argument, FVerseFunctionProperty_ _Callee_0, const struct FTuple_Ltime__span_Mfloat_R& _ExprResult_1);
	uint8 _L_2fVerse_2eorg_2fVerseExperimental_N_RValidateDateTime_L_Nint_M_Nint_M_Nint_M_Nint_M_Nint_M_Nint_M_Nint_R(const struct FTuple_Lint_Mint_Mint_Mint_Mint_Mint_Mint_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fVerse_2eorg_2fVerseExperimental_N_RValidate_L_Ndate__time_R(const struct FVerseExperimental_date_time& __verse_0xB2CDDD72_Argument, uint8 _ExprResult_0, FOptionProperty_ _ExprResultStack_1, FVerseFunctionProperty_ _Callee_2, const struct FTuple_Ldate__time_Mdate__time_R& _ExprResult_3, const struct FVerseExperimental_date_time& _ExprResultStack_4, FVerseFunctionProperty_ _Callee_5, const struct FTuple_L_R& _ExprResult_6, FOptionProperty_ _ExprResultStack_7, FVerseFunctionProperty_ _Callee_8, const struct FTuple_Ldate__time_Mdate__time_R& _ExprResult_9, const struct FVerseExperimental_date_time& _ExprResultStack_10, FVerseFunctionProperty_ _Callee_11, const struct FTuple_L_R& _ExprResult_12);
	struct FVerseExperimental_date_time _L_2fVerse_2eorg_2fVerseExperimental_N_RUtcNow(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FVerseStringProperty_ _L_2fVerse_2eorg_2fVerseExperimental_N_RToString_L_Ntime__span_R(const struct FVerseExperimental_time_span& __verse_0xB2CDDD72_Argument);
	FVerseStringProperty_ _L_2fVerse_2eorg_2fVerseExperimental_N_RToString_L_Ndate__time_R(const struct FVerseExperimental_date_time& __verse_0xB2CDDD72_Argument);
	struct FVerseExperimental_time_span _L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeSubtract_L_Ntime__span_M_Ntime__span_R(const struct FTuple_Ltime__span_Mtime__span_R& __verse_0xB2CDDD72_Argument);
	struct FVerseExperimental_time_span _L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeSubtract_L_Ndate__time_M_Ndate__time_R(const struct FTuple_Ldate__time_Mdate__time_R& __verse_0xB2CDDD72_Argument);
	struct FVerseExperimental_date_time _L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeSubtract_L_Ndate__time_M_Ntime__span_R(const struct FTuple_Ldate__time_Mtime__span_R& __verse_0xB2CDDD72_Argument);
	struct FVerseExperimental_time_span _L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeNegate_L_Ntime__span_R(const struct FVerseExperimental_time_span& __verse_0xB2CDDD72_Argument);
	struct FVerseExperimental_time_span _L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeMultiply_L_Ntime__span_M_Nfloat_R(const struct FTuple_Ltime__span_Mfloat_R& __verse_0xB2CDDD72_Argument);
	struct FVerseExperimental_time_span _L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeDivide_L_Ntime__span_M_Nfloat_R(const struct FTuple_Ltime__span_Mfloat_R& __verse_0xB2CDDD72_Argument);
	struct FVerseExperimental_time_span _L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeAdd_L_Ntime__span_M_Ntime__span_R(const struct FTuple_Ltime__span_Mtime__span_R& __verse_0xB2CDDD72_Argument);
	struct FVerseExperimental_date_time _L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeAdd_L_Ndate__time_M_Ntime__span_R(const struct FTuple_Ldate__time_Mtime__span_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fVerse_2eorg_2fVerseExperimental_N_RLessEqual_L_Ndate__time_M_Ndate__time_R(const struct FTuple_Ldate__time_Mdate__time_R& __verse_0xB2CDDD72_Argument, const struct FVerseExperimental_date_time& _ExprResult_0, TMap<FVerseStringProperty_, uint8> _ExprResultStack_1, FVerseStringProperty_ _ExprResult_2, FOptionProperty_ _ExprResultStack_3);
	FOptionProperty_ _L_2fVerse_2eorg_2fVerseExperimental_N_RLessEqual_L_Ntime__span_M_Ntime__span_R(const struct FTuple_Ltime__span_Mtime__span_R& __verse_0xB2CDDD72_Argument, const struct FVerseExperimental_time_span& _ExprResult_0, TMap<FVerseStringProperty_, uint8> _ExprResultStack_1, FVerseStringProperty_ _ExprResult_2, FOptionProperty_ _ExprResultStack_3);
	FOptionProperty_ _L_2fVerse_2eorg_2fVerseExperimental_N_RLess_L_Ndate__time_M_Ndate__time_R(const struct FTuple_Ldate__time_Mdate__time_R& __verse_0xB2CDDD72_Argument, const struct FVerseExperimental_date_time& _ExprResult_0, TMap<FVerseStringProperty_, uint8> _ExprResultStack_1, FVerseStringProperty_ _ExprResult_2, FOptionProperty_ _ExprResultStack_3);
	FOptionProperty_ _L_2fVerse_2eorg_2fVerseExperimental_N_RLess_L_Ntime__span_M_Ntime__span_R(const struct FTuple_Ltime__span_Mtime__span_R& __verse_0xB2CDDD72_Argument, const struct FVerseExperimental_time_span& _ExprResult_0, TMap<FVerseStringProperty_, uint8> _ExprResultStack_1, FVerseStringProperty_ _ExprResult_2, FOptionProperty_ _ExprResultStack_3);
	FOptionProperty_ _L_2fVerse_2eorg_2fVerseExperimental_N_RGreaterEqual_L_Ndate__time_M_Ndate__time_R(const struct FTuple_Ldate__time_Mdate__time_R& __verse_0xB2CDDD72_Argument, const struct FVerseExperimental_date_time& _ExprResult_0, TMap<FVerseStringProperty_, uint8> _ExprResultStack_1, FVerseStringProperty_ _ExprResult_2, FOptionProperty_ _ExprResultStack_3);
	FOptionProperty_ _L_2fVerse_2eorg_2fVerseExperimental_N_RGreaterEqual_L_Ntime__span_M_Ntime__span_R(const struct FTuple_Ltime__span_Mtime__span_R& __verse_0xB2CDDD72_Argument, const struct FVerseExperimental_time_span& _ExprResult_0, TMap<FVerseStringProperty_, uint8> _ExprResultStack_1, FVerseStringProperty_ _ExprResult_2, FOptionProperty_ _ExprResultStack_3);
	FOptionProperty_ _L_2fVerse_2eorg_2fVerseExperimental_N_RGreater_L_Ntime__span_M_Ntime__span_R(const struct FTuple_Ltime__span_Mtime__span_R& __verse_0xB2CDDD72_Argument, const struct FVerseExperimental_time_span& _ExprResult_0, TMap<FVerseStringProperty_, uint8> _ExprResultStack_1, FVerseStringProperty_ _ExprResult_2, FOptionProperty_ _ExprResultStack_3);
	FOptionProperty_ _L_2fVerse_2eorg_2fVerseExperimental_N_RGreater_L_Ndate__time_M_Ndate__time_R(const struct FTuple_Ldate__time_Mdate__time_R& __verse_0xB2CDDD72_Argument, const struct FVerseExperimental_date_time& _ExprResult_0, TMap<FVerseStringProperty_, uint8> _ExprResultStack_1, FVerseStringProperty_ _ExprResult_2, FOptionProperty_ _ExprResultStack_3);
	int64 _L_2fVerse_2eorg_2fVerseExperimental_N_RGetYear_L_Ndate__time_R(const struct FVerseExperimental_date_time& __verse_0xB2CDDD72_Argument);
	int64 _L_2fVerse_2eorg_2fVerseExperimental_N_RGetTotalSeconds_L_Ntime__span_R(const struct FVerseExperimental_time_span& __verse_0xB2CDDD72_Argument);
	int64 _L_2fVerse_2eorg_2fVerseExperimental_N_RGetTotalMinutes_L_Ntime__span_R(const struct FVerseExperimental_time_span& __verse_0xB2CDDD72_Argument);
	int64 _L_2fVerse_2eorg_2fVerseExperimental_N_RGetTotalMilliseconds_L_Ntime__span_R(const struct FVerseExperimental_time_span& __verse_0xB2CDDD72_Argument);
	int64 _L_2fVerse_2eorg_2fVerseExperimental_N_RGetTotalMicroseconds_L_Ntime__span_R(const struct FVerseExperimental_time_span& __verse_0xB2CDDD72_Argument);
	int64 _L_2fVerse_2eorg_2fVerseExperimental_N_RGetTotalHours_L_Ntime__span_R(const struct FVerseExperimental_time_span& __verse_0xB2CDDD72_Argument);
	int64 _L_2fVerse_2eorg_2fVerseExperimental_N_RGetTotalDays_L_Ntime__span_R(const struct FVerseExperimental_time_span& __verse_0xB2CDDD72_Argument);
	struct FVerseExperimental_time_of_day_parts _L_2fVerse_2eorg_2fVerseExperimental_N_RGetTimeOfDay_L_Ndate__time_R(const struct FVerseExperimental_date_time& __verse_0xB2CDDD72_Argument);
	int64 _L_2fVerse_2eorg_2fVerseExperimental_N_RGetSeconds_L_Ntime__span_R(const struct FVerseExperimental_time_span& __verse_0xB2CDDD72_Argument);
	int64 _L_2fVerse_2eorg_2fVerseExperimental_N_RGetSeconds_L_Ndate__time_R(const struct FVerseExperimental_date_time& __verse_0xB2CDDD72_Argument);
	int64 _L_2fVerse_2eorg_2fVerseExperimental_N_RGetNanoseconds_L_Ndate__time_R(const struct FVerseExperimental_date_time& __verse_0xB2CDDD72_Argument);
	int64 _L_2fVerse_2eorg_2fVerseExperimental_N_RGetNanoseconds_L_Ntime__span_R(const struct FVerseExperimental_time_span& __verse_0xB2CDDD72_Argument);
	enum class EVerseExperimental_month_of_year _L_2fVerse_2eorg_2fVerseExperimental_N_RGetMonthOfYear_L_Ndate__time_R(const struct FVerseExperimental_date_time& __verse_0xB2CDDD72_Argument);
	int64 _L_2fVerse_2eorg_2fVerseExperimental_N_RGetMonth_L_Ndate__time_R(const struct FVerseExperimental_date_time& __verse_0xB2CDDD72_Argument);
	int64 _L_2fVerse_2eorg_2fVerseExperimental_N_RGetMinutes_L_Ntime__span_R(const struct FVerseExperimental_time_span& __verse_0xB2CDDD72_Argument);
	int64 _L_2fVerse_2eorg_2fVerseExperimental_N_RGetMinutes_L_Ndate__time_R(const struct FVerseExperimental_date_time& __verse_0xB2CDDD72_Argument);
	int64 _L_2fVerse_2eorg_2fVerseExperimental_N_RGetMilliseconds_L_Ntime__span_R(const struct FVerseExperimental_time_span& __verse_0xB2CDDD72_Argument);
	int64 _L_2fVerse_2eorg_2fVerseExperimental_N_RGetMilliseconds_L_Ndate__time_R(const struct FVerseExperimental_date_time& __verse_0xB2CDDD72_Argument);
	int64 _L_2fVerse_2eorg_2fVerseExperimental_N_RGetMicroseconds_L_Ntime__span_R(const struct FVerseExperimental_time_span& __verse_0xB2CDDD72_Argument);
	int64 _L_2fVerse_2eorg_2fVerseExperimental_N_RGetMicroseconds_L_Ndate__time_R(const struct FVerseExperimental_date_time& __verse_0xB2CDDD72_Argument);
	int64 _L_2fVerse_2eorg_2fVerseExperimental_N_RGetHours_L_Ntime__span_R(const struct FVerseExperimental_time_span& __verse_0xB2CDDD72_Argument);
	int64 _L_2fVerse_2eorg_2fVerseExperimental_N_RGetHours_L_Ndate__time_R(const struct FVerseExperimental_date_time& __verse_0xB2CDDD72_Argument);
	int64 _L_2fVerse_2eorg_2fVerseExperimental_N_RGetDays_L_Ntime__span_R(const struct FVerseExperimental_time_span& __verse_0xB2CDDD72_Argument);
	enum class EVerseExperimental_day_of_week _L_2fVerse_2eorg_2fVerseExperimental_N_RGetDayOfWeek_L_Ndate__time_R(const struct FVerseExperimental_date_time& __verse_0xB2CDDD72_Argument);
	int64 _L_2fVerse_2eorg_2fVerseExperimental_N_RGetDay_L_Ndate__time_R(const struct FVerseExperimental_date_time& __verse_0xB2CDDD72_Argument);
	struct FVerseExperimental_date_parts _L_2fVerse_2eorg_2fVerseExperimental_N_RGetDate_L_Ndate__time_R(const struct FVerseExperimental_date_time& __verse_0xB2CDDD72_Argument);
	int64 _L_2fVerse_2eorg_2fVerseExperimental_N_RDaysInYear_L_Nint_R(int64 __verse_0xB2CDDD72_Argument);
	int64 _L_2fVerse_2eorg_2fVerseExperimental_N_RDaysInMonth_L_Nint_M_Nint_R(const struct FTuple_Lint_Mint_R& __verse_0xB2CDDD72_Argument);
	struct FVerseExperimental_date_time _L_2fVerse_2eorg_2fVerseExperimental_N_RDateTimeMin(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1);
	struct FVerseExperimental_date_time _L_2fVerse_2eorg_2fVerseExperimental_N_RDateTimeMax(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1);
	struct FVerseExperimental_time_span _L_2fVerse_2eorg_2fVerseExperimental_N_RCreateTimeSpan_L_Nint_M_Nint_M_Nint_M_Nint_M_Nint_R(const struct FTuple_Lint_Mint_Mint_Mint_Mint_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fVerse_2eorg_2fVerseExperimental_N_RCreateDateTime_L_Nint_M_Nint_M_Nint_M_Nint_M_Nint_M_Nint_M_Nint_R(const struct FTuple_Lint_Mint_Mint_Mint_Mint_Mint_Mint_R& __verse_0xB2CDDD72_Argument);
	struct FVerseExperimental_time_span VerseExperimental_time_span_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap, FVerseStringProperty_ _ExprResultStack_0, FOptionProperty_ _ExprResult_1);
	struct FVerseExperimental_time_span VerseExperimental_time_span_Factory();
	struct FVerseExperimental_time_of_day_parts VerseExperimental_time_of_day_parts_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap);
	struct FVerseExperimental_time_of_day_parts VerseExperimental_time_of_day_parts_Factory();
	struct FVerseExperimental_date_parts VerseExperimental_date_parts_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap);
	struct FVerseExperimental_date_parts VerseExperimental_date_parts_Factory();
	struct FVerseExperimental_date_time VerseExperimental_date_time_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap, FVerseStringProperty_ _ExprResultStack_0, FOptionProperty_ _ExprResult_1);
	struct FVerseExperimental_date_time VerseExperimental_date_time_Factory();
	void _InitCDO();
};

// 0x48 (0x70 - 0x28)
// VerseClass VerseExperimental.VerseExperimental_date_time_ticks
class UVerseExperimental_date_time_ticks : public UObject
{
public:
	int64                                        __verse_0x8DE5F121_NanosecondsPerTick;             // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        __verse_0x358147B9_TicksPerDay;                    // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        __verse_0x5C0949D3_TicksPerHour;                   // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        __verse_0x59DFB831_TicksPerMicrosecond;            // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        __verse_0xD20E16AF_TicksPerMillisecond;            // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        __verse_0x4420B794_TicksPerMinute;                 // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        __verse_0x3E0178E0_TicksPerSecond;                 // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        __verse_0xA7911900_TicksPerWeek;                   // 0x60(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        __verse_0xE371C089_TicksPerYear;                   // 0x68(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseExperimental_date_time_ticks");
		return Clss;
	}

	void _InitCDO();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
