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
// VerseClass EpicGamesTemporary.$SolarisSignatureFunctionOuter
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
// VerseClass EpicGamesTemporary.SpatialMath
class USpatialMath : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SpatialMath");
		return Clss;
	}

	struct FSpatialMath_vector3 _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Rprefix_U_2d_U_L_Nvector3_R(const struct FSpatialMath_vector3& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResult_2, FVerseStringProperty_ _ExprResult_3);
	struct FSpatialMath_vector2 _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Rprefix_U_2d_U_L_Nvector2_R(const struct FSpatialMath_vector2& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResult_2);
	struct FSpatialMath_vector2i _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Rprefix_U_2d_U_L_Nvector2i_R(const struct FSpatialMath_vector2i& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResult_2);
	struct FSpatialMath_vector2 _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2f_U_L_Nvector2_M_Nfloat_R(const struct FTuple_Lvector2_Mfloat_R& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResult_2);
	struct FSpatialMath_vector3 _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2f_U_L_Nvector3_M_Nvector3_R(const struct FTuple_Lvector3_Mvector3_R& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResult_2, FVerseStringProperty_ _ExprResult_3);
	struct FSpatialMath_vector3 _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2f_U_L_Nvector3_M_Nfloat_R(const struct FTuple_Lvector3_Mfloat_R& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResult_2, FVerseStringProperty_ _ExprResult_3);
	struct FSpatialMath_vector2 _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2f_U_L_Nvector2_M_Nvector2_R(const struct FTuple_Lvector2_Mvector2_R& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResult_2);
	struct FSpatialMath_vector3 _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eUnrotateVector_U_L_Nrotation_M_Ntuple_L_R_M_Nvector3_R(const struct FTuple_Lrotation_Mtuple_L_R_Mvector3_R& __verse_0xB2CDDD72_Argument);
	struct FVerseRotation _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eUnrotateBy_U_L_Nrotation_M_Ntuple_L_R_M_Nrotation_R(const struct FTuple_Lrotation_Mtuple_L_R_Mrotation_R& __verse_0xB2CDDD72_Argument);
	struct FSpatialMath_vector3 _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eRotateVector_U_L_Nrotation_M_Ntuple_L_R_M_Nvector3_R(const struct FTuple_Lrotation_Mtuple_L_R_Mvector3_R& __verse_0xB2CDDD72_Argument);
	struct FVerseRotation _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eRotateBy_U_L_Nrotation_M_Ntuple_L_R_M_Nrotation_R(const struct FTuple_Lrotation_Mtuple_L_R_Mrotation_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eMakeUnitVector_U_L_Nvector3_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lvector3_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eMakeUnitVector_U_L_Nvector2_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lvector2_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument);
	double _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eLengthXY_U_L_Nvector3_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lvector3_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument, FVerseFunctionProperty_ _Callee_0, double _ExprResultStack_1, FVerseFunctionProperty_ _Callee_2, const struct FTuple_Lvector3_Mtuple_L_R_Mtuple_L_R_R& _ExprResult_3, const struct FTuple_L_R& _ExprResult_4, const struct FTuple_L_R& _ExprResult_5);
	double _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eLengthSquaredXY_U_L_Nvector3_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lvector3_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument);
	double _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eLengthSquared_U_L_Nvector3_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lvector3_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument);
	double _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eLengthSquared_U_L_Nvector2_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lvector2_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument, FVerseFunctionProperty_ _Callee_0, const struct FTuple_Lvector2_Mvector2_R& _ExprResult_1);
	double _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eLength_U_L_Nvector2_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lvector2_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument, FVerseFunctionProperty_ _Callee_0, double _ExprResultStack_1, FVerseFunctionProperty_ _Callee_2, const struct FTuple_Lvector2_Mtuple_L_R_Mtuple_L_R_R& _ExprResult_3, const struct FTuple_L_R& _ExprResult_4, const struct FTuple_L_R& _ExprResult_5);
	double _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eLength_U_L_Nvector3_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lvector3_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument, FVerseFunctionProperty_ _Callee_0, double _ExprResultStack_1, FVerseFunctionProperty_ _Callee_2, const struct FTuple_Lvector3_Mtuple_L_R_Mtuple_L_R_R& _ExprResult_3, const struct FTuple_L_R& _ExprResult_4, const struct FTuple_L_R& _ExprResult_5);
	FOptionProperty_ _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eIsFinite_U_L_Nvector2_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lvector2_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument, enum class EVerseFalse _ExprResult_0, const struct FSpatialMath_vector2& _ExprResult_1, TMap<FVerseStringProperty_, uint8> _ExprResultStack_2, FVerseStringProperty_ _ExprResult_3, FVerseStringProperty_ _ExprResult_4, FOptionProperty_ _ExprResultStack_5, FVerseFunctionProperty_ _Callee_6, const struct FTuple_Lfloat_Mtuple_L_R_Mtuple_L_R_R& _ExprResult_7, const struct FTuple_L_R& _ExprResult_8, const struct FTuple_L_R& _ExprResult_9, FOptionProperty_ _ExprResultStack_10, FVerseFunctionProperty_ _Callee_11, const struct FTuple_Lfloat_Mtuple_L_R_Mtuple_L_R_R& _ExprResult_12, const struct FTuple_L_R& _ExprResult_13, const struct FTuple_L_R& _ExprResult_14);
	FOptionProperty_ _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eIsFinite_U_L_Nvector3_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lvector3_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument, enum class EVerseFalse _ExprResult_0, const struct FSpatialMath_vector3& _ExprResult_1, TMap<FVerseStringProperty_, uint8> _ExprResultStack_2, FVerseStringProperty_ _ExprResult_3, FVerseStringProperty_ _ExprResult_4, FVerseStringProperty_ _ExprResult_5, FOptionProperty_ _ExprResultStack_6, FVerseFunctionProperty_ _Callee_7, const struct FTuple_Lfloat_Mtuple_L_R_Mtuple_L_R_R& _ExprResult_8, const struct FTuple_L_R& _ExprResult_9, const struct FTuple_L_R& _ExprResult_10, FOptionProperty_ _ExprResultStack_11, FVerseFunctionProperty_ _Callee_12, const struct FTuple_Lfloat_Mtuple_L_R_Mtuple_L_R_R& _ExprResult_13, const struct FTuple_L_R& _ExprResult_14, const struct FTuple_L_R& _ExprResult_15, FOptionProperty_ _ExprResultStack_16, FVerseFunctionProperty_ _Callee_17, const struct FTuple_Lfloat_Mtuple_L_R_Mtuple_L_R_R& _ExprResult_18, const struct FTuple_L_R& _ExprResult_19, const struct FTuple_L_R& _ExprResult_20);
	FOptionProperty_ _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eIsFinite_U_L_Nrotation_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eIsAlmostZero_U_L_Nvector2_M_Ntuple_L_R_M_Nfloat_R(const struct FTuple_Lvector2_Mtuple_L_R_Mfloat_R& __verse_0xB2CDDD72_Argument, uint8 _ExprResult_0, FOptionProperty_ _ExprResultStack_1, FOptionProperty_ _ExprResultStack_2);
	FOptionProperty_ _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eIsAlmostZero_U_L_Nvector3_M_Ntuple_L_R_M_Nfloat_R(const struct FTuple_Lvector3_Mtuple_L_R_Mfloat_R& __verse_0xB2CDDD72_Argument, uint8 _ExprResult_0, FOptionProperty_ _ExprResultStack_1, FOptionProperty_ _ExprResultStack_2, FOptionProperty_ _ExprResultStack_3);
	struct FVerseRotation _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eInvert_U_L_Nrotation_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument);
	TArray<double> _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eGetYawPitchRollDegrees_U_L_Nrotation_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument);
	struct FSpatialMath_vector3 _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eGetLocalUp_U_L_Nrotation_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument, FVerseFunctionProperty_ _Callee_0, const struct FTuple_Lrotation_Mtuple_L_R_Mvector3_R& _ExprResult_1, const struct FTuple_L_R& _ExprResult_2, const struct FSpatialMath_vector3& _ExprResult_3, TMap<FVerseStringProperty_, uint8> _ExprResultStack_4, FVerseStringProperty_ _ExprResult_5, FVerseStringProperty_ _ExprResult_6, FVerseStringProperty_ _ExprResult_7);
	struct FSpatialMath_vector3 _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eGetLocalRight_U_L_Nrotation_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument, FVerseFunctionProperty_ _Callee_0, const struct FTuple_Lrotation_Mtuple_L_R_Mvector3_R& _ExprResult_1, const struct FTuple_L_R& _ExprResult_2, const struct FSpatialMath_vector3& _ExprResult_3, TMap<FVerseStringProperty_, uint8> _ExprResultStack_4, FVerseStringProperty_ _ExprResult_5, FVerseStringProperty_ _ExprResult_6, FVerseStringProperty_ _ExprResult_7);
	struct FSpatialMath_vector3 _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eGetLocalForward_U_L_Nrotation_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument, FVerseFunctionProperty_ _Callee_0, const struct FTuple_Lrotation_Mtuple_L_R_Mvector3_R& _ExprResult_1, const struct FTuple_L_R& _ExprResult_2, const struct FSpatialMath_vector3& _ExprResult_3, TMap<FVerseStringProperty_, uint8> _ExprResultStack_4, FVerseStringProperty_ _ExprResult_5, FVerseStringProperty_ _ExprResult_6, FVerseStringProperty_ _ExprResult_7);
	struct FSpatialMath_vector3 _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eGetAxis_U_L_Nrotation_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument);
	double _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eGetAngle_U_L_Nrotation_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument);
	struct FVerseRotation _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eApplyYaw_U_L_Nrotation_M_Ntuple_L_R_M_Nfloat_R(const struct FTuple_Lrotation_Mtuple_L_R_Mfloat_R& __verse_0xB2CDDD72_Argument);
	struct FVerseRotation _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eApplyWorldRotationZ_U_L_Nrotation_M_Ntuple_L_R_M_Nfloat_R(const struct FTuple_Lrotation_Mtuple_L_R_Mfloat_R& __verse_0xB2CDDD72_Argument);
	struct FVerseRotation _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eApplyWorldRotationY_U_L_Nrotation_M_Ntuple_L_R_M_Nfloat_R(const struct FTuple_Lrotation_Mtuple_L_R_Mfloat_R& __verse_0xB2CDDD72_Argument);
	struct FVerseRotation _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eApplyWorldRotationX_U_L_Nrotation_M_Ntuple_L_R_M_Nfloat_R(const struct FTuple_Lrotation_Mtuple_L_R_Mfloat_R& __verse_0xB2CDDD72_Argument);
	struct FVerseRotation _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eApplyRoll_U_L_Nrotation_M_Ntuple_L_R_M_Nfloat_R(const struct FTuple_Lrotation_Mtuple_L_R_Mfloat_R& __verse_0xB2CDDD72_Argument);
	struct FVerseRotation _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eApplyPitch_U_L_Nrotation_M_Ntuple_L_R_M_Nfloat_R(const struct FTuple_Lrotation_Mtuple_L_R_Mfloat_R& __verse_0xB2CDDD72_Argument);
	struct FVerseRotation _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eApplyLocalRotationZ_U_L_Nrotation_M_Ntuple_L_R_M_Nfloat_R(const struct FTuple_Lrotation_Mtuple_L_R_Mfloat_R& __verse_0xB2CDDD72_Argument, FVerseFunctionProperty_ _Callee_0, const struct FTuple_Lrotation_Mtuple_L_R_Mrotation_R& _ExprResult_1, const struct FTuple_L_R& _ExprResult_2, const struct FVerseRotation& _ExprResultStack_3, FVerseFunctionProperty_ _Callee_4, const struct FTuple_Lvector3_Mfloat_R& _ExprResult_5, const struct FSpatialMath_vector3& _ExprResultStack_6, FVerseFunctionProperty_ _Callee_7, const struct FTuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R& _ExprResult_8, const struct FTuple_L_R& _ExprResult_9, const struct FTuple_L_R& _ExprResult_10);
	struct FVerseRotation _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eApplyLocalRotationY_U_L_Nrotation_M_Ntuple_L_R_M_Nfloat_R(const struct FTuple_Lrotation_Mtuple_L_R_Mfloat_R& __verse_0xB2CDDD72_Argument, FVerseFunctionProperty_ _Callee_0, const struct FTuple_Lrotation_Mtuple_L_R_Mrotation_R& _ExprResult_1, const struct FTuple_L_R& _ExprResult_2, const struct FVerseRotation& _ExprResultStack_3, FVerseFunctionProperty_ _Callee_4, const struct FTuple_Lvector3_Mfloat_R& _ExprResult_5, const struct FSpatialMath_vector3& _ExprResultStack_6, FVerseFunctionProperty_ _Callee_7, const struct FTuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R& _ExprResult_8, const struct FTuple_L_R& _ExprResult_9, const struct FTuple_L_R& _ExprResult_10);
	struct FVerseRotation _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eApplyLocalRotationX_U_L_Nrotation_M_Ntuple_L_R_M_Nfloat_R(const struct FTuple_Lrotation_Mtuple_L_R_Mfloat_R& __verse_0xB2CDDD72_Argument, FVerseFunctionProperty_ _Callee_0, const struct FTuple_Lrotation_Mtuple_L_R_Mrotation_R& _ExprResult_1, const struct FTuple_L_R& _ExprResult_2, const struct FVerseRotation& _ExprResultStack_3, FVerseFunctionProperty_ _Callee_4, const struct FTuple_Lvector3_Mfloat_R& _ExprResult_5, const struct FSpatialMath_vector3& _ExprResultStack_6, FVerseFunctionProperty_ _Callee_7, const struct FTuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R& _ExprResult_8, const struct FTuple_L_R& _ExprResult_9, const struct FTuple_L_R& _ExprResult_10);
	struct FSpatialMath_vector2i _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2d_U_L_Nvector2i_M_Nvector2i_R(const struct FTuple_Lvector2i_Mvector2i_R& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResult_2);
	struct FSpatialMath_vector3 _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2d_U_L_Nvector3_M_Nvector3_R(const struct FTuple_Lvector3_Mvector3_R& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResult_2, FVerseStringProperty_ _ExprResult_3);
	struct FSpatialMath_vector2 _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2d_U_L_Nvector2_M_Nvector2_R(const struct FTuple_Lvector2_Mvector2_R& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResult_2);
	struct FSpatialMath_vector2 _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2b_U_L_Nvector2_M_Nvector2_R(const struct FTuple_Lvector2_Mvector2_R& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResult_2);
	struct FSpatialMath_vector2i _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2b_U_L_Nvector2i_M_Nvector2i_R(const struct FTuple_Lvector2i_Mvector2i_R& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResult_2);
	struct FSpatialMath_vector3 _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2b_U_L_Nvector3_M_Nvector3_R(const struct FTuple_Lvector3_Mvector3_R& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResult_2, FVerseStringProperty_ _ExprResult_3);
	struct FSpatialMath_vector2i _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2a_U_L_Nvector2i_M_Nint_R(const struct FTuple_Lvector2i_Mint_R& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResult_2);
	struct FSpatialMath_vector3 _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2a_U_L_Nfloat_M_Nvector3_R(const struct FTuple_Lfloat_Mvector3_R& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResult_2, FVerseStringProperty_ _ExprResult_3);
	struct FSpatialMath_vector3 _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2a_U_L_Nvector3_M_Nfloat_R(const struct FTuple_Lvector3_Mfloat_R& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResult_2, FVerseStringProperty_ _ExprResult_3);
	struct FSpatialMath_vector3 _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2a_U_L_Nvector3_M_Nvector3_R(const struct FTuple_Lvector3_Mvector3_R& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResult_2, FVerseStringProperty_ _ExprResult_3);
	struct FSpatialMath_vector2 _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2a_U_L_Nvector2_M_Nfloat_R(const struct FTuple_Lvector2_Mfloat_R& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResult_2);
	struct FSpatialMath_vector2i _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2a_U_L_Nint_M_Nvector2i_R(const struct FTuple_Lint_Mvector2i_R& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResult_2);
	struct FSpatialMath_vector2 _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2a_U_L_Nfloat_M_Nvector2_R(const struct FTuple_Lfloat_Mvector2_R& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResult_2);
	struct FSpatialMath_vector3 _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RZero(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResult_2, FVerseStringProperty_ _ExprResult_3);
	struct FSpatialMath_vector3 _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RZAxis(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResult_2, FVerseStringProperty_ _ExprResult_3);
	struct FSpatialMath_vector3 _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RYAxis(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResult_2, FVerseStringProperty_ _ExprResult_3);
	struct FSpatialMath_vector3 _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RXAxis(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResult_2, FVerseStringProperty_ _ExprResult_3);
	struct FSpatialMath_vector3 _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RTransformVectorNoScale_L_Ntransform_M_Nvector3_R(const struct FTuple_Ltransform_Mvector3_R& __verse_0xB2CDDD72_Argument);
	struct FSpatialMath_vector3 _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RTransformVector_L_Ntransform_M_Nvector3_R(const struct FTuple_Ltransform_Mvector3_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RToVector2i_L_Nvector2_R(const struct FSpatialMath_vector2& __verse_0xB2CDDD72_Argument, const struct FSpatialMath_vector2i& _ExprResult_0, TMap<FVerseStringProperty_, uint8> _ExprResultStack_1, FVerseStringProperty_ _ExprResult_2, FVerseStringProperty_ _ExprResult_3, FOptionProperty_ _ExprResultStack_4, FVerseFunctionProperty_ _Callee_5, FOptionProperty_ _ExprResultStack_6, FVerseFunctionProperty_ _Callee_7);
	struct FSpatialMath_vector2 _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RToVector2_L_Nvector2i_R(const struct FSpatialMath_vector2i& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResult_2);
	FVerseStringProperty_ _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RToString_L_Nvector2i_R(const struct FSpatialMath_vector2i& __verse_0xB2CDDD72_Argument);
	FVerseStringProperty_ _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RToString_L_Nvector3_R(const struct FSpatialMath_vector3& __verse_0xB2CDDD72_Argument);
	FVerseStringProperty_ _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RToString_L_Nrotation_R(const struct FVerseRotation& __verse_0xB2CDDD72_Argument);
	FVerseStringProperty_ _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RToString_L_Nvector2_R(const struct FSpatialMath_vector2& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RSlerp_L_Nrotation_M_Nrotation_M_Nfloat_R(const struct FTuple_Lrotation_Mrotation_Mfloat_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RReflectVector_L_Nvector2_M_Nvector2_R(const struct FTuple_Lvector2_Mvector2_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RReflectVector_L_Nvector3_M_Nvector3_R(const struct FTuple_Lvector3_Mvector3_R& __verse_0xB2CDDD72_Argument);
	double _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RRadiansToDegrees_L_Nfloat_R(double __verse_0xB2CDDD72_Argument);
	struct FSpatialMath_vector3 _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_ROnes(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResult_2, FVerseStringProperty_ _ExprResult_3);
	struct FVerseRotation _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RMakeShortestRotationBetween_L_Nvector3_M_Nvector3_R(const struct FTuple_Lvector3_Mvector3_R& __verse_0xB2CDDD72_Argument);
	struct FVerseRotation _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RMakeShortestRotationBetween_L_Nrotation_M_Nrotation_R(const struct FTuple_Lrotation_Mrotation_R& __verse_0xB2CDDD72_Argument);
	struct FVerseRotation _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RMakeRotationFromYawPitchRollDegrees_L_Nfloat_M_Nfloat_M_Nfloat_R(const struct FTuple_Lfloat_Mfloat_Mfloat_R& __verse_0xB2CDDD72_Argument);
	struct FVerseRotation _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RMakeRotation_L_Nvector3_M_Nfloat_R(const struct FTuple_Lvector3_Mfloat_R& __verse_0xB2CDDD72_Argument);
	struct FSpatialMath_vector2 _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RLerp_L_Nvector2_M_Nvector2_M_Nfloat_R(const struct FTuple_Lvector2_Mvector2_Mfloat_R& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResult_2, double _ExprResultStack_3, FVerseFunctionProperty_ _Callee_4, const struct FTuple_Lfloat_Mfloat_Mfloat_R& _ExprResult_5, double _ExprResultStack_6, FVerseFunctionProperty_ _Callee_7, const struct FTuple_Lfloat_Mfloat_Mfloat_R& _ExprResult_8);
	struct FSpatialMath_vector3 _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RLerp_L_Nvector3_M_Nvector3_M_Nfloat_R(const struct FTuple_Lvector3_Mvector3_Mfloat_R& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResult_2, FVerseStringProperty_ _ExprResult_3, double _ExprResultStack_4, FVerseFunctionProperty_ _Callee_5, const struct FTuple_Lfloat_Mfloat_Mfloat_R& _ExprResult_6, double _ExprResultStack_7, FVerseFunctionProperty_ _Callee_8, const struct FTuple_Lfloat_Mfloat_Mfloat_R& _ExprResult_9, double _ExprResultStack_10, FVerseFunctionProperty_ _Callee_11, const struct FTuple_Lfloat_Mfloat_Mfloat_R& _ExprResult_12);
	FOptionProperty_ _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RIsAlmostEqual_L_Nvector2_M_Nvector2_M_Nfloat_R(const struct FTuple_Lvector2_Mvector2_Mfloat_R& __verse_0xB2CDDD72_Argument, uint8 _ExprResult_0, FOptionProperty_ _ExprResultStack_1, FOptionProperty_ _ExprResultStack_2);
	FOptionProperty_ _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RIsAlmostEqual_L_Nvector3_M_Nvector3_M_Nfloat_R(const struct FTuple_Lvector3_Mvector3_Mfloat_R& __verse_0xB2CDDD72_Argument, uint8 _ExprResult_0, FOptionProperty_ _ExprResultStack_1, FOptionProperty_ _ExprResultStack_2, FOptionProperty_ _ExprResultStack_3);
	struct FVerseRotation _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RIdentityRotation(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_REquals_L_Nvector2i_M_Nvector2i_R(const struct FTuple_Lvector2i_Mvector2i_R& __verse_0xB2CDDD72_Argument, enum class EVerseFalse _ExprResult_0, const struct FSpatialMath_vector2i& _ExprResult_1, TMap<FVerseStringProperty_, uint8> _ExprResultStack_2, FVerseStringProperty_ _ExprResult_3, FVerseStringProperty_ _ExprResult_4, int64 _ExprResult_5, FVerseDynamicProperty_ _ExprResultStack_6, FOptionProperty_ _ExprResultStack_7, FVerseDynamicProperty_ _ExprResult_8, FVerseDynamicProperty_ _ExprResult_9, int64 _ExprResult_10, FVerseDynamicProperty_ _ExprResultStack_11, FOptionProperty_ _ExprResultStack_12, FVerseDynamicProperty_ _ExprResult_13, FVerseDynamicProperty_ _ExprResult_14);
	int64 _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RDotProduct_L_Nvector2i_M_Nvector2i_R(const struct FTuple_Lvector2i_Mvector2i_R& __verse_0xB2CDDD72_Argument);
	double _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RDotProduct_L_Nvector2_M_Nvector2_R(const struct FTuple_Lvector2_Mvector2_R& __verse_0xB2CDDD72_Argument);
	double _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RDotProduct_L_Nvector3_M_Nvector3_R(const struct FTuple_Lvector3_Mvector3_R& __verse_0xB2CDDD72_Argument);
	double _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RDistanceXY_L_Nvector3_M_Nvector3_R(const struct FTuple_Lvector3_Mvector3_R& __verse_0xB2CDDD72_Argument);
	double _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RDistanceSquaredXY_L_Nvector3_M_Nvector3_R(const struct FTuple_Lvector3_Mvector3_R& __verse_0xB2CDDD72_Argument);
	double _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RDistanceSquared_L_Nvector3_M_Nvector3_R(const struct FTuple_Lvector3_Mvector3_R& __verse_0xB2CDDD72_Argument);
	double _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RDistanceSquared_L_Nvector2_M_Nvector2_R(const struct FTuple_Lvector2_Mvector2_R& __verse_0xB2CDDD72_Argument);
	double _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RDistance_L_Nvector2_M_Nvector2_R(const struct FTuple_Lvector2_Mvector2_R& __verse_0xB2CDDD72_Argument);
	double _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RDistance_L_Nrotation_M_Nrotation_R(const struct FTuple_Lrotation_Mrotation_R& __verse_0xB2CDDD72_Argument);
	double _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RDistance_L_Nvector3_M_Nvector3_R(const struct FTuple_Lvector3_Mvector3_R& __verse_0xB2CDDD72_Argument);
	double _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RDegreesToRadians_L_Nfloat_R(double __verse_0xB2CDDD72_Argument);
	struct FSpatialMath_vector3 _L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RCrossProduct_L_Nvector3_M_Nvector3_R(const struct FTuple_Lvector3_Mvector3_R& __verse_0xB2CDDD72_Argument);
	struct FSpatialMath_vector3 SpatialMath_vector3_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap, FVerseStringProperty_ _ExprResultStack_0, FOptionProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResultStack_2, FOptionProperty_ _ExprResult_3, FVerseStringProperty_ _ExprResultStack_4, FOptionProperty_ _ExprResult_5);
	struct FSpatialMath_vector3 SpatialMath_vector3_Factory();
	struct FSpatialMath_vector2i SpatialMath_vector2i_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap, FVerseStringProperty_ _ExprResultStack_0, FOptionProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResultStack_2, FOptionProperty_ _ExprResult_3);
	struct FSpatialMath_vector2i SpatialMath_vector2i_Factory();
	struct FSpatialMath_vector2 SpatialMath_vector2_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap, FVerseStringProperty_ _ExprResultStack_0, FOptionProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResultStack_2, FOptionProperty_ _ExprResult_3);
	struct FSpatialMath_vector2 SpatialMath_vector2_Factory();
	struct FSpatialMath_transform SpatialMath_transform_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap, FVerseStringProperty_ _ExprResultStack_0, FOptionProperty_ _ExprResult_1, const struct FSpatialMath_vector3& _ExprResult_2, TMap<FVerseStringProperty_, uint8> _ExprResultStack_3, FVerseStringProperty_ _ExprResult_4, FVerseStringProperty_ _ExprResult_5, FVerseStringProperty_ _ExprResult_6, FVerseStringProperty_ _ExprResultStack_7, FOptionProperty_ _ExprResult_8, const struct FVerseRotation& _ExprResultStack_9, FVerseFunctionProperty_ _Callee_10, const struct FTuple_L_R& _ExprResult_11, FVerseStringProperty_ _ExprResultStack_12, FOptionProperty_ _ExprResult_13, const struct FSpatialMath_vector3& _ExprResult_14, TMap<FVerseStringProperty_, uint8> _ExprResultStack_15, FVerseStringProperty_ _ExprResult_16, FVerseStringProperty_ _ExprResult_17, FVerseStringProperty_ _ExprResult_18);
	struct FSpatialMath_transform SpatialMath_transform_Factory(const struct FSpatialMath_vector3& _ExprResult_0, TMap<FVerseStringProperty_, uint8> _ExprResultStack_1, FVerseStringProperty_ _ExprResult_2, FVerseStringProperty_ _ExprResult_3, FVerseStringProperty_ _ExprResult_4, const struct FVerseRotation& _ExprResultStack_5, FVerseFunctionProperty_ _Callee_6, const struct FTuple_L_R& _ExprResult_7, const struct FSpatialMath_vector3& _ExprResult_8, TMap<FVerseStringProperty_, uint8> _ExprResultStack_9, FVerseStringProperty_ _ExprResult_10, FVerseStringProperty_ _ExprResult_11, FVerseStringProperty_ _ExprResult_12);
	void _InitCDO();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif