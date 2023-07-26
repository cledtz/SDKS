#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// VerseClass UnrealEngineExperimental.$SolarisSignatureFunctionOuter
class U_SolarisSignatureFunctionOuter : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("$SolarisSignatureFunctionOuter");
		return Clss;
	}

};

// 0x10 (0xC8 - 0xB8)
// VerseClass UnrealEngineExperimental.Curves_editable_curve
class UCurves_editable_curve : public UCurveFloat
{
public:
	FVerseFunctionProperty_                      __verse_0xF015AD4E__L_2fUnrealEngine_2ecom_2fTemporary_2fCurves_2feditable__curve_N_REvaluate_L_Nfloat_R; // 0xB8(0x10)(InstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Curves_editable_curve");
		return Clss;
	}

	double _L_2fUnrealEngine_2ecom_2fTemporary_2fCurves_2feditable__curve_N_REvaluate_L_Nfloat_R(double __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x38 (0x60 - 0x28)
// VerseClass UnrealEngineExperimental.Diagnostics
class UDiagnostics : public UObject
{
public:
	struct FColors_color                         __verse_0x57D963B0_DefaultDebugDrawColor;          // 0x28(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	enum class EDiagnostics_debug_draw_duration_policy __verse_0xBB769F64_DefaultDebugDrawDurationPolicy; // 0x40(0x1)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_17C0[0x7];                                     // Fixing Size After Last Property..
	double                                       __verse_0x455A65A8_DefaultDebugDrawDuration;       // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __verse_0xD30692C9_DefaultDebugDrawSize;           // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __verse_0xA45DC86B_DefaultDebugDrawThickness;      // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Diagnostics");
		return Clss;
	}

	void _InitCDO();
};

// 0xD8 (0x100 - 0x28)
// VerseClass UnrealEngineExperimental.Diagnostics_debug_draw
class UDiagnostics_debug_draw : public UObject
{
public:
	FVerseFunctionProperty_                      __verse_0xBEAE59EB__L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RShowChannel; // 0x28(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xC194994E__L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RHideChannel; // 0x38(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xB0799D9E__L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RClearChannel; // 0x48(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x5D1CF82C__L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RClear; // 0x58(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x013080EF__L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RDrawSphere_L_Nvector3_M_N_QRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QColor_Ncolor_20_3d_20_2e_2e_2e_M_N_QNumSegments_Nint_20_3d_20_2e_2e_2e_M_N_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_N_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R; // 0x68(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x52836C70__L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RDrawBox_L_Nvector3_M_Nrotation_M_N_QExtent_Nvector3_20_3d_20_2e_2e_2e_M_N_QColor_Ncolor_20_3d_20_2e_2e_2e_M_N_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_N_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R; // 0x78(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x531BF33A__L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RDrawCapsule_L_Nvector3_M_Nrotation_M_N_QHeight_Nfloat_20_3d_20_2e_2e_2e_M_N_QRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QColor_Ncolor_20_3d_20_2e_2e_2e_M_N_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_N_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R; // 0x88(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xCD806368__L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RDrawCone_L_Nvector3_M_Nvector3_M_N_QHeight_Nfloat_20_3d_20_2e_2e_2e_M_N_QNumSides_Nint_20_3d_20_2e_2e_2e_M_N_QAngleWidthRadians_Nfloat_20_3d_20_2e_2e_2e_M_N_QAngleHeightRadians_Nfloat_20_3d_20_2e_2e_2e_M_N_QColor_Ncolor_20_3d_20_2e_2e_2e_M_N_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_N_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R; // 0x98(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x16A6A34C__L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RDrawCylinder_L_Nvector3_M_Nvector3_M_N_QNumSegments_Nint_20_3d_20_2e_2e_2e_M_N_QRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QColor_Ncolor_20_3d_20_2e_2e_2e_M_N_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_N_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R; // 0xA8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x68E8EB2B__L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RDrawLine_L_Nvector3_M_Nvector3_M_N_QColor_Ncolor_20_3d_20_2e_2e_2e_M_N_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_N_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R; // 0xB8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x95089018__L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RDrawPoint_L_Nvector3_M_N_QColor_Ncolor_20_3d_20_2e_2e_2e_M_N_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_N_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R; // 0xC8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xDFAD8D70__L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RDrawArrow_L_Nvector3_M_Nvector3_M_N_QArrowSize_Nfloat_20_3d_20_2e_2e_2e_M_N_QColor_Ncolor_20_3d_20_2e_2e_2e_M_N_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_N_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R; // 0xD8(0x10)(InstancedReference, HasGetValueTypeHash)
	class UClass*                                __verse_0xFAE6EE9E_Channel;                        // 0xE8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint8                                        Pad_17C3[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Diagnostics_debug_draw");
		return Clss;
	}

	void _L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RShowChannel(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RHideChannel(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RDrawSphere_L_Nvector3_M_N_QRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QColor_Ncolor_20_3d_20_2e_2e_2e_M_N_QNumSegments_Nint_20_3d_20_2e_2e_2e_M_N_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_N_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R(const struct FTuple_Lvector3_M_QRadius_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_M_QNumSegments_Nint_20_3d_20_2e_2e_2e_M_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_R& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RDrawPoint_L_Nvector3_M_N_QColor_Ncolor_20_3d_20_2e_2e_2e_M_N_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_N_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R(const struct FTuple_Lvector3_M_QColor_Ncolor_20_3d_20_2e_2e_2e_M_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_R& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RDrawLine_L_Nvector3_M_Nvector3_M_N_QColor_Ncolor_20_3d_20_2e_2e_2e_M_N_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_N_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R(const struct FTuple_Lvector3_Mvector3_M_QColor_Ncolor_20_3d_20_2e_2e_2e_M_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_R& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RDrawCylinder_L_Nvector3_M_Nvector3_M_N_QNumSegments_Nint_20_3d_20_2e_2e_2e_M_N_QRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QColor_Ncolor_20_3d_20_2e_2e_2e_M_N_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_N_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R(const struct FTuple_Lvector3_Mvector3_M_QNumSegments_Nint_20_3d_20_2e_2e_2e_M_QRadius_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_M_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_R& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RDrawCone_L_Nvector3_M_Nvector3_M_N_QHeight_Nfloat_20_3d_20_2e_2e_2e_M_N_QNumSides_Nint_20_3d_20_2e_2e_2e_M_N_QAngleWidthRadians_Nfloat_20_3d_20_2e_2e_2e_M_N_QAngleHeightRadians_Nfloat_20_3d_20_2e_2e_2e_M_N_QColor_Ncolor_20_3d_20_2e_2e_2e_M_N_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_N_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R(const struct FTuple_Lvector3_Mvector3_M_QHeight_Nfloat_20_3d_20_2e_2e_2e_M_QNumSides_Nint_20_3d_20_2e_2e_2e_M_QAngleWidthRadians_Nfloat_20_3d_20_2e_2e_2e_M_QAngleHeightRadians_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_M_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_R& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RDrawCapsule_L_Nvector3_M_Nrotation_M_N_QHeight_Nfloat_20_3d_20_2e_2e_2e_M_N_QRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QColor_Ncolor_20_3d_20_2e_2e_2e_M_N_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_N_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R(const struct FTuple_Lvector3_Mrotation_M_QHeight_Nfloat_20_3d_20_2e_2e_2e_M_QRadius_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_M_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_R& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RDrawBox_L_Nvector3_M_Nrotation_M_N_QExtent_Nvector3_20_3d_20_2e_2e_2e_M_N_QColor_Ncolor_20_3d_20_2e_2e_2e_M_N_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_N_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R(const struct FTuple_Lvector3_Mrotation_M_QExtent_Nvector3_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_M_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_R& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RDrawArrow_L_Nvector3_M_Nvector3_M_N_QArrowSize_Nfloat_20_3d_20_2e_2e_2e_M_N_QColor_Ncolor_20_3d_20_2e_2e_2e_M_N_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_N_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R(const struct FTuple_Lvector3_Mvector3_M_QArrowSize_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_M_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_R& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RClearChannel(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RClear(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass UnrealEngineExperimental.Diagnostics_debug_draw_channel
class UDiagnostics_debug_draw_channel : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Diagnostics_debug_draw_channel");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x30 (0x58 - 0x28)
// VerseClass UnrealEngineExperimental.Diagnostics_log
class UDiagnostics_log : public UObject
{
public:
	FVerseFunctionProperty_                      __verse_0x211E300E__L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2flog_N_RPrint_L_N_Kchar_M_N_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R; // 0x28(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x3C04BBBE__L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2flog_N_RPrintCallStack_L_N_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R; // 0x38(0x10)(InstancedReference, HasGetValueTypeHash)
	class UClass*                                __verse_0xFAE6EE9E_Channel;                        // 0x48(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EDiagnostics_log_level            __verse_0x540F3253_DefaultLevel;                   // 0x50(0x1)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_17C5[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Diagnostics_log");
		return Clss;
	}

	void _L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2flog_N_RPrintCallStack_L_N_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R(FOptionProperty_ __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2flog_N_RPrint_L_N_Kchar_M_N_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R(const struct FTuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass UnrealEngineExperimental.Diagnostics_log_channel
class UDiagnostics_log_channel : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Diagnostics_log_channel");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
