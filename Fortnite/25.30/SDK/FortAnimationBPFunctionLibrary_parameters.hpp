#pragma once

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

// 0x67 (0x67 - 0x0)
// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Vehicle Dynamics Scaler Function
struct UFortAnimationBPFunctionLibrary_C_Vehicle_Dynamics_Scaler_Function_Params
{
public:
	class UCustomCharacterPartAnimInstance*      CharacterPartAnimInstance;                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Debug;                                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4284[0x7];                                     // Fixing Size After Last Property
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       InVehicleHeadScaleAlpha;                           // 0x18(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       InVehicleHeadSimAlpha;                             // 0x20(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       InVehicleSkirtScaleAlpha;                          // 0x28(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       InVehicleSkirtSimAlpha;                            // 0x30(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       InVehicleSkirtSimAlphaLocal;                       // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       InVehicleSkirtScaleAlphaLocal;                     // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       InVehicleHeadSimAlphaLocal;                        // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       InVehicleHeadScaleAlphaLocal;                      // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0x5A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_3;                  // 0x5B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_4;                  // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_5;                  // 0x5D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_6;                  // 0x5E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_7;                  // 0x5F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_8;                  // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_9;                  // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_10;                 // 0x62(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_11;                 // 0x63(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_12;                 // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_13;                 // 0x65(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x66(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x594 (0x594 - 0x0)
// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Cloth Controller Function Nativization Wrapper
struct UFortAnimationBPFunctionLibrary_C_Cloth_Controller_Function_Nativization_Wrapper_Params
{
public:
	class UCustomCharacterPartAnimInstance*      CharacterPartAnimInstance;                         // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                ClothingAssetName;                                 // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	struct FClothControllerClothParameterMap     Cloth_Paramaters;                                  // 0x18(0x50)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FClothCoreSettings                    Cloth_Core_Settings;                               // 0x68(0x80)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FVector                               ClothUpAxis;                                       // 0xE8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       OnGround_Moving_Speed_Limit;                       // 0x100(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       OnGround_Moving_AngularVel_Max;                    // 0x108(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       OnGround_Moving_FictitiousVel_Max;                 // 0x110(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LinVelScale_FwdBwd_Clamp;                          // 0x118(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LinVelScale_UpDwn_Clamp;                           // 0x120(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DeltaTime;                                         // 0x128(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GameTimeInSeconds;                                 // 0x12C(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FClothControllerWindParameterMap      WindGustsParams;                                   // 0x130(0x50)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FWindGustSettings                     WindGustLocalSettings;                             // 0x180(0x14)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_42AA[0x4];                                     // Fixing Size After Last Property
	class UObject*                               __WorldContext;                                    // 0x198(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  CharacterStateOut;                                 // 0x1A0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42AB[0x4];                                     // Fixing Size After Last Property
	struct FClothParameters                      Cloth_Settings_Out;                                // 0x1A8(0x60)(Parm, OutParm, NoDestructor)
	struct FWindGustSettings                     WindGustLocalSettings_Out;                         // 0x208(0x14)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_42AC[0x4];                                     // Fixing Size After Last Property
	struct FVector                               GustStrength___WindVelocityOut;                    // 0x220(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LinearVelVector_DELETE_LATER;                      // 0x238(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Character_State;                                   // 0x250(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42AD[0x4];                                     // Fixing Size After Last Property
	struct FWindGustParameters                   Wind_Params;                                       // 0x258(0x78)(Edit, BlueprintVisible, NoDestructor)
	struct FClothParameters                      Cloth_Params;                                      // 0x2D0(0x60)(Edit, BlueprintVisible, NoDestructor)
	struct FClothControllerPropertiesMap         CallFunc_ClothControllerFindCharacterProperties_OutPropertiesMap; // 0x330(0x50)()
	class FName                                  CallFunc_ClothControllerStaticFindCharacterState_OutCharacterStateName; // 0x380(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42AF[0x4];                                     // Fixing Size After Last Property
	struct FClothParameters                      CallFunc_ClothControllerFindParameters_OutClothSettings; // 0x388(0x60)(NoDestructor)
	struct FWindGustParameters                   CallFunc_ClothControllerFindParameters_OutWindSettings; // 0x3E8(0x78)(NoDestructor)
	struct FVector                               CallFunc_ClothControllerDynamicParameterAdjustment_OutLinearVelocityScale; // 0x460(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FClothParameters                      CallFunc_ClothControllerDynamicParameterAdjustment_OutClothSettings; // 0x478(0x60)(NoDestructor)
	struct FVector                               CallFunc_ClothControllerWindGustControl_OutWindGustVector; // 0x4D8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustSettings                     CallFunc_ClothControllerWindGustControl_OutWindGustLocalSettings; // 0x4F0(0x14)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_42B0[0x4];                                     // Fixing Size After Last Property
	struct FClothParameters                      CallFunc_ClothControllerWriteToSimulation_OutWorldSpaceClothSettings; // 0x508(0x60)(NoDestructor)
	struct FVector                               CallFunc_ClothControllerWriteToSimulation_OutWorldSpaceWindVelocity; // 0x568(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_ClothControllerFindCharacterProperties_HighRotationRateThreshold_ImplicitCast; // 0x580(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_ClothControllerDynamicParameterAdjustment_OnGroundMovingAngularVelMax_ImplicitCast; // 0x584(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_ClothControllerDynamicParameterAdjustment_OnGroundMovingFictitiousVelMax_ImplicitCast; // 0x588(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_ClothControllerDynamicParameterAdjustment_LinVelScaleFwdBwdClamp_ImplicitCast; // 0x58C(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_ClothControllerDynamicParameterAdjustment_LinVelScaleUpDwnClamp_ImplicitCast; // 0x590(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2540 (0x2540 - 0x0)
// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Cloth Controller Convert To Nativized Parameters
struct UFortAnimationBPFunctionLibrary_C_Cloth_Controller_Convert_To_Nativized_Parameters_Params
{
public:
	struct FClothParamsStruct                    ClothParametersStruct;                             // 0x0(0x780)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustParamsStruct                 WindParametersStruct;                              // 0x780(0x960)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FClothCoreSettingStruct               Cloth_Core_Settings;                               // 0x10E0(0x80)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustLocalSettingStruct           Wind_Gust_Settings;                                // 0x1160(0x14)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Character_State_Name;                              // 0x1174(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x1178(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FClothParameters                      Cloth_Parameters_Nativized;                        // 0x1180(0x60)(Parm, OutParm, NoDestructor)
	struct FWindGustParameters                   Wind_Parameters_Nativized;                         // 0x11E0(0x78)(Parm, OutParm, NoDestructor)
	struct FClothCoreSettings                    ClothCoreSettings;                                 // 0x1258(0x80)(Parm, OutParm, NoDestructor)
	struct FWindGustSettings                     Wind_Settings_Nativized;                           // 0x12D8(0x14)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_42CF[0x4];                                     // Fixing Size After Last Property
	struct FWindGustParameters                   Nativized_Wind_Parameters;                         // 0x12F0(0x78)(Edit, BlueprintVisible, NoDestructor)
	struct FClothParameters                      Nativized_Cloth_Parameters;                        // 0x1368(0x60)(Edit, BlueprintVisible, NoDestructor)
	bool                                         K2Node_SwitchName_CmpSuccess;                      // 0x13C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42D1[0x3];                                     // Fixing Size After Last Property
	struct FWindGustSettings                     K2Node_MakeStruct_WindGustSettings;                // 0x13CC(0x14)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FClothCoreSettings                    K2Node_MakeStruct_ClothCoreSettings;               // 0x13E0(0x80)(NoDestructor)
	struct FWindGustParameters                   CallFunc_ConvertToNativizedWindParameters_WindGustParameters; // 0x1460(0x78)(NoDestructor)
	struct FClothParameters                      CallFunc_ConvertToNativizedClothParameters_ClothParameters; // 0x14D8(0x60)(NoDestructor)
	struct FClothParameters                      CallFunc_ConvertToNativizedClothParameters_ClothParameters_1; // 0x1538(0x60)(NoDestructor)
	struct FClothParameters                      CallFunc_ConvertToNativizedClothParameters_ClothParameters_2; // 0x1598(0x60)(NoDestructor)
	struct FClothParameters                      CallFunc_ConvertToNativizedClothParameters_ClothParameters_3; // 0x15F8(0x60)(NoDestructor)
	struct FClothParameters                      CallFunc_ConvertToNativizedClothParameters_ClothParameters_4; // 0x1658(0x60)(NoDestructor)
	struct FClothParameters                      CallFunc_ConvertToNativizedClothParameters_ClothParameters_5; // 0x16B8(0x60)(NoDestructor)
	struct FClothParameters                      CallFunc_ConvertToNativizedClothParameters_ClothParameters_6; // 0x1718(0x60)(NoDestructor)
	struct FClothParameters                      CallFunc_ConvertToNativizedClothParameters_ClothParameters_7; // 0x1778(0x60)(NoDestructor)
	struct FClothParameters                      CallFunc_ConvertToNativizedClothParameters_ClothParameters_8; // 0x17D8(0x60)(NoDestructor)
	struct FClothParameters                      CallFunc_ConvertToNativizedClothParameters_ClothParameters_9; // 0x1838(0x60)(NoDestructor)
	struct FClothParameters                      CallFunc_ConvertToNativizedClothParameters_ClothParameters_10; // 0x1898(0x60)(NoDestructor)
	struct FClothParameters                      CallFunc_ConvertToNativizedClothParameters_ClothParameters_11; // 0x18F8(0x60)(NoDestructor)
	struct FClothParameters                      CallFunc_ConvertToNativizedClothParameters_ClothParameters_12; // 0x1958(0x60)(NoDestructor)
	struct FClothParameters                      CallFunc_ConvertToNativizedClothParameters_ClothParameters_13; // 0x19B8(0x60)(NoDestructor)
	struct FClothParameters                      CallFunc_ConvertToNativizedClothParameters_ClothParameters_14; // 0x1A18(0x60)(NoDestructor)
	struct FClothParameters                      CallFunc_ConvertToNativizedClothParameters_ClothParameters_15; // 0x1A78(0x60)(NoDestructor)
	struct FClothParameters                      CallFunc_ConvertToNativizedClothParameters_ClothParameters_16; // 0x1AD8(0x60)(NoDestructor)
	struct FClothParameters                      CallFunc_ConvertToNativizedClothParameters_ClothParameters_17; // 0x1B38(0x60)(NoDestructor)
	struct FClothParameters                      CallFunc_ConvertToNativizedClothParameters_ClothParameters_18; // 0x1B98(0x60)(NoDestructor)
	struct FClothParameters                      CallFunc_ConvertToNativizedClothParameters_ClothParameters_19; // 0x1BF8(0x60)(NoDestructor)
	struct FWindGustParameters                   CallFunc_ConvertToNativizedWindParameters_WindGustParameters_1; // 0x1C58(0x78)(NoDestructor)
	struct FWindGustParameters                   CallFunc_ConvertToNativizedWindParameters_WindGustParameters_2; // 0x1CD0(0x78)(NoDestructor)
	struct FWindGustParameters                   CallFunc_ConvertToNativizedWindParameters_WindGustParameters_3; // 0x1D48(0x78)(NoDestructor)
	struct FWindGustParameters                   CallFunc_ConvertToNativizedWindParameters_WindGustParameters_4; // 0x1DC0(0x78)(NoDestructor)
	struct FWindGustParameters                   CallFunc_ConvertToNativizedWindParameters_WindGustParameters_5; // 0x1E38(0x78)(NoDestructor)
	struct FWindGustParameters                   CallFunc_ConvertToNativizedWindParameters_WindGustParameters_6; // 0x1EB0(0x78)(NoDestructor)
	struct FWindGustParameters                   CallFunc_ConvertToNativizedWindParameters_WindGustParameters_7; // 0x1F28(0x78)(NoDestructor)
	struct FWindGustParameters                   CallFunc_ConvertToNativizedWindParameters_WindGustParameters_8; // 0x1FA0(0x78)(NoDestructor)
	struct FWindGustParameters                   CallFunc_ConvertToNativizedWindParameters_WindGustParameters_9; // 0x2018(0x78)(NoDestructor)
	struct FWindGustParameters                   CallFunc_ConvertToNativizedWindParameters_WindGustParameters_10; // 0x2090(0x78)(NoDestructor)
	struct FWindGustParameters                   CallFunc_ConvertToNativizedWindParameters_WindGustParameters_11; // 0x2108(0x78)(NoDestructor)
	struct FWindGustParameters                   CallFunc_ConvertToNativizedWindParameters_WindGustParameters_12; // 0x2180(0x78)(NoDestructor)
	struct FWindGustParameters                   CallFunc_ConvertToNativizedWindParameters_WindGustParameters_13; // 0x21F8(0x78)(NoDestructor)
	struct FWindGustParameters                   CallFunc_ConvertToNativizedWindParameters_WindGustParameters_14; // 0x2270(0x78)(NoDestructor)
	struct FWindGustParameters                   CallFunc_ConvertToNativizedWindParameters_WindGustParameters_15; // 0x22E8(0x78)(NoDestructor)
	struct FWindGustParameters                   CallFunc_ConvertToNativizedWindParameters_WindGustParameters_16; // 0x2360(0x78)(NoDestructor)
	struct FWindGustParameters                   CallFunc_ConvertToNativizedWindParameters_WindGustParameters_17; // 0x23D8(0x78)(NoDestructor)
	struct FWindGustParameters                   CallFunc_ConvertToNativizedWindParameters_WindGustParameters_18; // 0x2450(0x78)(NoDestructor)
	struct FWindGustParameters                   CallFunc_ConvertToNativizedWindParameters_WindGustParameters_19; // 0x24C8(0x78)(NoDestructor)
};

// 0x170 (0x170 - 0x0)
// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.ConvertToNativizedWindParameters
struct UFortAnimationBPFunctionLibrary_C_ConvertToNativizedWindParameters_Params
{
public:
	struct FWindGustSettingStruct                WindGustSettingStruct;                             // 0x0(0x78)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x78(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FWindGustParameters                   WindGustParameters;                                // 0x80(0x78)(Parm, OutParm, NoDestructor)
	struct FWindGustParameters                   K2Node_MakeStruct_WindGustParameters;              // 0xF8(0x78)(NoDestructor)
};

// 0x128 (0x128 - 0x0)
// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.ConvertToNativizedClothParameters
struct UFortAnimationBPFunctionLibrary_C_ConvertToNativizedClothParameters_Params
{
public:
	struct FClothSettingStruct                   ClothSettingStruct;                                // 0x0(0x5C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42DD[0x4];                                     // Fixing Size After Last Property
	class UObject*                               __WorldContext;                                    // 0x60(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FClothParameters                      ClothParameters;                                   // 0x68(0x60)(Parm, OutParm, NoDestructor)
	struct FClothParameters                      K2Node_MakeStruct_ClothParameters;                 // 0xC8(0x60)(NoDestructor)
};

// 0xA8 (0xA8 - 0x0)
// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Get Joint Location Relative to Bone
struct UFortAnimationBPFunctionLibrary_C_Get_Joint_Location_Relative_to_Bone_Params
{
public:
	class FName                                  Target_Joint;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Relative_Joint;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Offset;                                            // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMeshComponent*                        SkelMeshComponent;                                 // 0x20(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         Debug_Draw;                                        // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42E5[0x7];                                     // Fixing Size After Last Property
	class UObject*                               __WorldContext;                                    // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Joint_Location_Vector;                             // 0x38(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          K2Node_MakeArray_Array;                            // 0x50(0x10)(ReferenceParm)
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue;            // 0x60(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_AlignVectorWithJoint_ReturnValue;         // 0x78(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x90(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x134 (0x134 - 0x0)
// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Cape Spine05 Pelvis Rotation Function
struct UFortAnimationBPFunctionLibrary_C_Cape_Spine05_Pelvis_Rotation_Function_Params
{
public:
	class USkinnedMeshComponent*                 SkeletalMeshComponent;                             // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              Rotate_Z_Output;                                   // 0x10(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              RotateZ_output;                                    // 0x28(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_GetDeltaTransformFromRefPose_ReturnValue; // 0x40(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetAlphaFromReferenceTransformDelta_AlphaOutput; // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetAlphaFromReferenceTransformDelta_RawOutput; // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0xA8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0xC0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0xD8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42EE[0x3];                                     // Fixing Size After Last Property
	float                                        CallFunc_BreakRotator_Roll;                        // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0xFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_MapRangeClamped_ReturnValue;              // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x108(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_MapRangeClamped_Value_ImplicitCast;       // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MakeRotator_Roll_ImplicitCast;            // 0x130(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2860 (0x2860 - 0x0)
// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Separated Cloth Control Function
struct UFortAnimationBPFunctionLibrary_C_Separated_Cloth_Control_Function_Params
{
public:
	class UCustomCharacterPartAnimInstance*      CharacterPartAnimInstance;                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                ClothingAssetName;                                 // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FClothParamsStruct                    Cloth_Paramaters;                                  // 0x18(0x780)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FClothCoreSettingStruct               Cloth_Core_Settings;                               // 0x798(0x80)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ClothUpAxis;                                       // 0x818(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       OnGround_Moving_SpeedLimit;                        // 0x830(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       OnGround_Moving_AngularVel_Max;                    // 0x838(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       OnGround_Moving_FictitiousVel_Max;                 // 0x840(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LinVelScale_FwdBwd_Clamp;                          // 0x848(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LinVelScale_UpDwn_Clamp;                           // 0x850(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DeltaTime;                                         // 0x858(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       GameTimeInSeconds;                                 // 0x860(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustParamsStruct                 WindGustsParams;                                   // 0x868(0x960)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustLocalSettingStruct           WindGustLocalSettings;                             // 0x11C8(0x14)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4304[0x4];                                     // Fixing Size After Last Property
	class UObject*                               __WorldContext;                                    // 0x11E0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CurrentStateOut;                                   // 0x11E8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	struct FClothCoreSettingStruct               Cloth_Core_Settings_Out;                           // 0x11F8(0x80)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FClothSettingStruct                   Cloth_Settings_Out;                                // 0x1278(0x5C)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4305[0x4];                                     // Fixing Size After Last Property
	struct FWindGustSettingStruct                WindGustSettings_Out;                              // 0x12D8(0x78)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustLocalSettingStruct           WindGustLocalSettings_Out;                         // 0x1350(0x14)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4307[0x4];                                     // Fixing Size After Last Property
	struct FVector                               GustStrength___WindVelocityOut;                    // 0x1368(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LinearVelVector_DELETE_LATER;                      // 0x1380(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             OnGroundMoving_LiftCoefficientLocal;               // 0x1398(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             OnGroundMoving_DragCoefficientLocal;               // 0x13A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CurrentState;                                      // 0x13B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FWindGustSettingStruct                WindGustSettingsLocal;                             // 0x13C8(0x78)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustParamsStruct                 WindGustsParamsLocal;                              // 0x1440(0x960)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               MovementLinearVelVector_Local;                     // 0x1DA0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ClothUpAxis_Local;                                 // 0x1DB8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               GustStrength___WindVelocityLocal;                  // 0x1DD0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustLocalSettingStruct           WindGustLocalSettings_Local;                       // 0x1DE8(0x14)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4309[0x4];                                     // Fixing Size After Last Property
	double                                       GameTimeInSecondsLocal;                            // 0x1E00(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DeltaTimeLocal;                                    // 0x1E08(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       OnGround_Moving_FictitiousVel;                     // 0x1E10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       OnGround_Moving_AngularVel;                        // 0x1E18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FClothCoreSettingStruct               Cloth_Core_Settings_Local;                         // 0x1E20(0x80)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FClothSettingStruct                   Cloth_Settings_Local;                              // 0x1EA0(0x5C)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_430A[0x4];                                     // Fixing Size After Last Property
	struct FClothParamsStruct                    Cloth_Params_Local;                                // 0x1F00(0x780)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                ClothingAssetName_Local;                           // 0x2680(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	double                                       Player_Forward_Vector_scaled_for_jump_Local;       // 0x2690(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Player_Forward_Vector_Local;                       // 0x2698(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UChaosClothingInteractor*              ChaosClothingInteractor;                           // 0x26A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCustomCharacterPartAnimInstance*      CharacterPartAnimInstanceLocal;                    // 0x26A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Separated_Cloth_Control_Calculate_Parameters_OutCurrentState; // 0x26B0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FClothCoreSettingStruct               CallFunc_Separated_Cloth_Control_Calculate_Parameters_OutClothCoreSettings; // 0x26C0(0x80)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FClothSettingStruct                   CallFunc_Separated_Cloth_Control_Calculate_Parameters_OutClothSettings; // 0x2740(0x5C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_430E[0x4];                                     // Fixing Size After Last Property
	struct FWindGustSettingStruct                CallFunc_Separated_Cloth_Control_Calculate_Parameters_OutWindGustSettings; // 0x27A0(0x78)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustLocalSettingStruct           CallFunc_Separated_Cloth_Control_Calculate_Parameters_OutWindGustLocalSettings; // 0x2818(0x14)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_430F[0x4];                                     // Fixing Size After Last Property
	struct FVector                               CallFunc_Separated_Cloth_Control_Calculate_Parameters_OutGustStrength; // 0x2830(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Separated_Cloth_Control_Calculate_Parameters_LinearVelVector_DELETE_LATER; // 0x2848(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x261 (0x261 - 0x0)
// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Separated Cloth Control Write To Instance
struct UFortAnimationBPFunctionLibrary_C_Separated_Cloth_Control_Write_To_Instance_Params
{
public:
	class UCustomCharacterPartAnimInstance*      Character_Part_Anim_Instance;                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                Clothing_Asset_Name;                               // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FClothCoreSettingStruct               Cloth_Core_Settings;                               // 0x18(0x80)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FClothSettingStruct                   Cloth_Settings;                                    // 0x98(0x5C)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4319[0x4];                                     // Fixing Size After Last Property
	struct FVector                               Gust_Strength___Wind_Velocity;                     // 0xF8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Joint_Name;                                        // 0x110(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_431B[0x4];                                     // Fixing Size After Last Property
	class UObject*                               __WorldContext;                                    // 0x118(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FClothSettingStruct                   Cloth_Settings_Local;                              // 0x120(0x5C)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_431C[0x4];                                     // Fixing Size After Last Property
	struct FClothCoreSettingStruct               Cloth_Core_Settings_Local;                         // 0x180(0x80)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_AlignVectorWithJoint_ReturnValue;         // 0x200(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue; // 0x218(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                CallFunc_GetOwningComponent_ReturnValue;           // 0x220(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UClothingSimulationInteractor*         CallFunc_GetClothingSimulationInteractor_ReturnValue; // 0x228(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x230(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_431D[0x7];                                     // Fixing Size After Last Property
	struct FVector                               CallFunc_AlignVectorWithJoint_ReturnValue_1;       // 0x238(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClothingInteractor*                   CallFunc_GetClothingInteractor_ReturnValue;        // 0x250(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UChaosClothingInteractor*              K2Node_DynamicCast_AsChaos_Clothing_Interactor;    // 0x258(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x260(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2B70 (0x2B70 - 0x0)
// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Separated Cloth Control Calculate Parameters
struct UFortAnimationBPFunctionLibrary_C_Separated_Cloth_Control_Calculate_Parameters_Params
{
public:
	class UCustomCharacterPartAnimInstance*      InCharacterPartAnimInstance;                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FClothParamsStruct                    Cloth_Paramaters;                                  // 0x8(0x780)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FClothCoreSettingStruct               Cloth_Core_Settings;                               // 0x788(0x80)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ClothUpAxis;                                       // 0x808(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       OnGround_Moving_SpeedLimit;                        // 0x820(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       OnGround_Moving_AngularVel_Max;                    // 0x828(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       OnGround_Moving_FictitiousVel_Max;                 // 0x830(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LinVelScale_FwdBwd_Clamp;                          // 0x838(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LinVelScale_UpDwn_Clamp;                           // 0x840(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DeltaTime;                                         // 0x848(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       GameTimeInSeconds;                                 // 0x850(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustParamsStruct                 InWindGustParams;                                  // 0x858(0x960)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustLocalSettingStruct           InWindGustLocalSettings;                           // 0x11B8(0x14)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4347[0x4];                                     // Fixing Size After Last Property
	class UObject*                               __WorldContext;                                    // 0x11D0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                OutCurrentState;                                   // 0x11D8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	struct FClothCoreSettingStruct               OutClothCoreSettings;                              // 0x11E8(0x80)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FClothSettingStruct                   OutClothSettings;                                  // 0x1268(0x5C)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4348[0x4];                                     // Fixing Size After Last Property
	struct FWindGustSettingStruct                OutWindGustSettings;                               // 0x12C8(0x78)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustLocalSettingStruct           OutWindGustLocalSettings;                          // 0x1340(0x14)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4349[0x4];                                     // Fixing Size After Last Property
	struct FVector                               OutGustStrength;                                   // 0x1358(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LinearVelVector_DELETE_LATER;                      // 0x1370(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             OnGroundMoving_LiftCoefficientLocal;               // 0x1388(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             OnGroundMoving_DragCoefficientLocal;               // 0x1398(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CurrentState;                                      // 0x13A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FWindGustSettingStruct                WindGustSettingsLocal;                             // 0x13B8(0x78)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustParamsStruct                 WindGustsParamsLocal;                              // 0x1430(0x960)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               MovementLinearVelVector_Local;                     // 0x1D90(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ClothUpAxis_Local;                                 // 0x1DA8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               GustStrength___WindVelocityLocal;                  // 0x1DC0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustLocalSettingStruct           WindGustLocalSettings_Local;                       // 0x1DD8(0x14)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_434B[0x4];                                     // Fixing Size After Last Property
	double                                       GameTimeInSeconds;                                 // 0x1DF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DeltaTimeLocal;                                    // 0x1DF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       OnGround_Moving_FictitiousVel;                     // 0x1E00(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       OnGround_Moving_AngularVel;                        // 0x1E08(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FClothCoreSettingStruct               Cloth_Core_Settings_Local;                         // 0x1E10(0x80)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FClothSettingStruct                   Cloth_Settings_Local;                              // 0x1E90(0x5C)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_434C[0x4];                                     // Fixing Size After Last Property
	struct FClothParamsStruct                    Cloth_Params_Local;                                // 0x1EF0(0x780)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                ClothingAssetName_Local;                           // 0x2670(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	double                                       Player_Forward_Vector_scaled_for_jump_Local;       // 0x2680(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Player_Forward_Vector_Local;                       // 0x2688(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCustomCharacterPartAnimInstance*      CharacterPartAnimInstance;                         // 0x2690(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out; // 0x2698(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustLocalSettingStruct           CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut; // 0x26B0(0x14)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_434D[0x4];                                     // Fixing Size After Last Property
	struct FVector                               CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_1; // 0x26C8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustLocalSettingStruct           CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_1; // 0x26E0(0x14)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_434E[0x4];                                     // Fixing Size After Last Property
	class UFortPlayerAnimInstance*               CallFunc_GetOwnerFortPlayerAnimInstance_ReturnValue; // 0x26F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortPlayerAnimInstance*               CallFunc_GetOwnerFortPlayerAnimInstance_ReturnValue_1; // 0x2700(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x2708(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x2709(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_434F[0x6];                                     // Fixing Size After Last Property
	double                                       CallFunc_BreakVector_X;                            // 0x2710(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Y;                            // 0x2718(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Z;                            // 0x2720(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortPlayerAnimationInterface*         CallFunc_GetOwnerAnimationInterface_ReturnValue;   // 0x2728(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FFortAnimInput_Zipline                CallFunc_GetZiplineInput_ReturnValue;              // 0x2730(0x38)(ConstParm, NoDestructor)
	double                                       CallFunc_VSize_ReturnValue;                        // 0x2768(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x2770(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x2771(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x2772(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4350[0x1];                                     // Fixing Size After Last Property
	float                                        CallFunc_BreakRotator_Roll;                        // 0x2774(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0x2778(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0x277C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Abs_ReturnValue;                          // 0x2780(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_2;       // 0x2788(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4351[0x3];                                     // Fixing Size After Last Property
	float                                        CallFunc_PlayerMovement_XMovement;                 // 0x278C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_PlayerMovement_YMovement;                 // 0x2790(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_PlayerMovement_ZMovement;                 // 0x2794(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_2; // 0x2798(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustLocalSettingStruct           CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_2; // 0x27B0(0x14)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_3;       // 0x27C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4355[0x3];                                     // Fixing Size After Last Property
	struct FVector                               CallFunc_Cloth_Controller_Helper_Scale_For_Player_Movement_LinearVelVectorOut; // 0x27C8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_3; // 0x27E0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustLocalSettingStruct           CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_3; // 0x27F8(0x14)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4356[0x4];                                     // Fixing Size After Last Property
	struct FVector                               CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_4; // 0x2810(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustLocalSettingStruct           CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_4; // 0x2828(0x14)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4357[0x4];                                     // Fixing Size After Last Property
	struct FVector                               CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_5; // 0x2840(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustLocalSettingStruct           CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_5; // 0x2858(0x14)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4358[0x4];                                     // Fixing Size After Last Property
	struct FVector                               CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_6; // 0x2870(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustLocalSettingStruct           CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_6; // 0x2888(0x14)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_4;       // 0x289C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4359[0x3];                                     // Fixing Size After Last Property
	struct FVector                               CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_7; // 0x28A0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustLocalSettingStruct           CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_7; // 0x28B8(0x14)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_435A[0x4];                                     // Fixing Size After Last Property
	struct FVector                               CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_8; // 0x28D0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustLocalSettingStruct           CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_8; // 0x28E8(0x14)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_435B[0x4];                                     // Fixing Size After Last Property
	struct FVector                               CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_9; // 0x2900(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustLocalSettingStruct           CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_9; // 0x2918(0x14)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_435C[0x4];                                     // Fixing Size After Last Property
	struct FVector                               CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_10; // 0x2930(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustLocalSettingStruct           CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_10; // 0x2948(0x14)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_435D[0x4];                                     // Fixing Size After Last Property
	struct FVector                               CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_11; // 0x2960(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustLocalSettingStruct           CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_11; // 0x2978(0x14)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_435E[0x4];                                     // Fixing Size After Last Property
	struct FVector                               CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_12; // 0x2990(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustLocalSettingStruct           CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_12; // 0x29A8(0x14)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4360[0x4];                                     // Fixing Size After Last Property
	struct FVector                               CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_13; // 0x29C0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustLocalSettingStruct           CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_13; // 0x29D8(0x14)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4361[0x4];                                     // Fixing Size After Last Property
	struct FVector                               CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_14; // 0x29F0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustLocalSettingStruct           CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_14; // 0x2A08(0x14)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4362[0x4];                                     // Fixing Size After Last Property
	struct FVector                               CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_15; // 0x2A20(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustLocalSettingStruct           CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_15; // 0x2A38(0x14)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4363[0x4];                                     // Fixing Size After Last Property
	struct FVector                               CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_16; // 0x2A50(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustLocalSettingStruct           CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_16; // 0x2A68(0x14)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4364[0x4];                                     // Fixing Size After Last Property
	struct FVector                               CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_17; // 0x2A80(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustLocalSettingStruct           CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_17; // 0x2A98(0x14)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4366[0x4];                                     // Fixing Size After Last Property
	double                                       CallFunc_MapRangeClamped_ReturnValue;              // 0x2AB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_MapRangeClamped_ReturnValue_1;            // 0x2AB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FClothSettingStruct                   K2Node_MakeStruct_ClothSettingStruct;              // 0x2AC0(0x5C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4367[0x4];                                     // Fixing Size After Last Property
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2B20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4368[0x7];                                     // Fixing Size After Last Property
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x2B28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Abs_A_ImplicitCast;                       // 0x2B30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast_1;    // 0x2B38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_MapRangeClamped_Value_ImplicitCast;       // 0x2B40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_MapRangeClamped_Value_ImplicitCast_1;     // 0x2B48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast_2;    // 0x2B50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_VariableSet_OnGround_Moving_AngularVel_ImplicitCast; // 0x2B58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_VariableSet_OnGround_Moving_FictitiousVel_ImplicitCast; // 0x2B60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_MakeStruct_FictitiousAngularScale_10_C5F4D16F48D0BEDC3F0FA38B2648511B_ImplicitCast; // 0x2B68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_MakeStruct_AngularVelocityScale_6_6A3DFE4A481AD4D7CB18D79F95CC88E8_ImplicitCast; // 0x2B6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C4 (0x1C4 - 0x0)
// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Separated Cloth Control Wind Gust Function
struct UFortAnimationBPFunctionLibrary_C_Separated_Cloth_Control_Wind_Gust_Function_Params
{
public:
	double                                       DeltaTime;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       GameTimeInSeconds;                                 // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  JointName;                                         // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4371[0x4];                                     // Fixing Size After Last Property
	struct FWindGustSettingStruct                WindGustSettings;                                  // 0x18(0x78)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustLocalSettingStruct           WindGustLocalSettings;                             // 0x90(0x14)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4372[0x4];                                     // Fixing Size After Last Property
	class UObject*                               __WorldContext;                                    // 0xA8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               GustStrengthWindVelocity_Out;                      // 0xB0(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustLocalSettingStruct           WindGustLocalSettingsOut;                          // 0xC8(0x14)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4374[0x4];                                     // Fixing Size After Last Property
	struct FVector                               GustStrength___WindVelocityLocal;                  // 0xE0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustSettingStruct                K2Node_MakeStruct_WindGustSettingStruct;           // 0xF8(0x78)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetRandomWindVector_ReturnValue;          // 0x170(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_WindGustGeneratorFunction_GustStrength___WindVelocity; // 0x188(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustLocalSettingStruct           CallFunc_WindGustGeneratorFunction_ClothGustLocalSettingsOut; // 0x190(0x14)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4375[0x4];                                     // Fixing Size After Last Property
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x1A8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetRandomWindVector_GameTime_ImplicitCast; // 0x1C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x388 (0x388 - 0x0)
// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Set WPO Regional Function
struct UFortAnimationBPFunctionLibrary_C_Set_WPO_Regional_Function_Params
{
public:
	class UMaterialInstanceDynamic*              Material;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Overlay_Material;                                  // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Skeletal_Mesh;                                     // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                  Velocity_Transform;                                // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4381[0x4];                                     // Fixing Size After Last Property
	double                                       Velocity_Interp_Speed;                             // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Collision_Transform;                               // 0x28(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAxis                             Collision_Transform_Axis;                          // 0x2C(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Invert_Collision_Transform_Axis;                   // 0x2D(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4382[0x2];                                     // Fixing Size After Last Property
	double                                       Delta_Time_X;                                      // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Previous_Velocity_Transform_Location;              // 0x38(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Previous_Velocity_Transform_Velocity;              // 0x50(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Region;                                            // 0x68(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4383[0x4];                                     // Fixing Size After Last Property
	class UObject*                               __WorldContext;                                    // 0x70(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EAxis                             CollisionTransformAxisToUse;                       // 0x78(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4385[0x7];                                     // Fixing Size After Last Property
	class UMaterialInstanceDynamic*              LoverlayMID;                                       // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              LMID;                                              // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                LSkelMesh;                                         // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                  LMatBoneVectorParamName;                           // 0x98(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  LMatBonePositionParamName;                         // 0x9C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  LMatVelocityParamName;                             // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Get_WPO_Regional_Param_Names_Function_Velocity; // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Get_WPO_Regional_Param_Names_Function_Bone_Position; // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Get_WPO_Regional_Param_Names_Function_Bone_Vector; // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FMax_ReturnValue;                         // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Conv_DoubleToVector_ReturnValue;          // 0xB8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4389[0x7];                                     // Fixing Size After Last Property
	double                                       CallFunc_FMax_ReturnValue_1;                       // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable;                                // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_1;                              // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAxis                             Temp_byte_Variable;                                // 0xF1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_438A[0x6];                                     // Fixing Size After Last Property
	double                                       K2Node_Select_Default;                             // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_438B[0x7];                                     // Fixing Size After Last Property
	struct FVector                               CallFunc_Conv_DoubleToVector_ReturnValue_1;        // 0x108(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAxis                             K2Node_Select_Default_1;                           // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_438C[0xF];                                     // Fixing Size After Last Property
	struct FTransform                            CallFunc_GetSocketTransform_ReturnValue;           // 0x130(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x190(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x1A8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x1C0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_438D[0x8];                                     // Fixing Size After Last Property
	struct FMatrix                               CallFunc_Conv_TransformToMatrix_ReturnValue;       // 0x1E0(0x80)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                          CallFunc_Conv_VectorToLinearColor_ReturnValue;     // 0x260(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Matrix_GetUnitAxis_ReturnValue;           // 0x270(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue;        // 0x288(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Get__Motion_Vector_For_Transform_Function_Transform_Motion_Vector; // 0x2A0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Get__Motion_Vector_For_Transform_Function_Transform_Location; // 0x2B8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_Get__Motion_Vector_For_Transform_Function_Transform; // 0x2D0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Conv_VectorToLinearColor_ReturnValue_1;   // 0x330(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Divide_VectorVector_ReturnValue;          // 0x340(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_VInterpTo_ReturnValue;                    // 0x358(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Conv_VectorToLinearColor_ReturnValue_2;   // 0x370(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_VInterpTo_DeltaTime_ImplicitCast;         // 0x380(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_VInterpTo_InterpSpeed_ImplicitCast;       // 0x384(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x7C (0x7C - 0x0)
// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Get WPO Regional Param Names Function
struct UFortAnimationBPFunctionLibrary_C_Get_WPO_Regional_Param_Names_Function_Params
{
public:
	int32                                        Region;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4392[0x4];                                     // Fixing Size After Last Property
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  Velocity;                                          // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Bone_Position;                                     // 0x14(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Bone_Vector;                                       // 0x18(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4395[0x4];                                     // Fixing Size After Last Property
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue_1;          // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue_2;          // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x280 (0x280 - 0x0)
// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Set WPO Globals Function
struct UFortAnimationBPFunctionLibrary_C_Set_WPO_Globals_Function_Params
{
public:
	class UMaterialInstanceDynamic*              Material;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Overlay_Material;                                  // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Skeletal_Mesh;                                     // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                  Local_Noise_Reference_Transform;                   // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43A9[0x4];                                     // Fixing Size After Last Property
	double                                       Local_Noise_Offset_Multiplier;                     // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Local_Noise_Transform__Location;                   // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Local_Noise_Offset;                                // 0x40(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Local_Turbulence_Vector_Transform;                 // 0x58(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAxis                             Local_Turbulence_Vector_Transform_Axis;            // 0x5C(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43AB[0x3];                                     // Fixing Size After Last Property
	class UObject*                               __WorldContext;                                    // 0x60(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EAxis                             Temp_byte_Variable;                                // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43AD[0x7];                                     // Fixing Size After Last Property
	struct FVector                               CallFunc_Get__Motion_Vector_For_Transform_Function_Transform_Motion_Vector; // 0x70(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Get__Motion_Vector_For_Transform_Function_Transform_Location; // 0x88(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_Get__Motion_Vector_For_Transform_Function_Transform; // 0xA0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43AF[0xF];                                     // Fixing Size After Last Property
	struct FTransform                            CallFunc_GetSocketTransform_ReturnValue;           // 0x110(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x170(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43B0[0x8];                                     // Fixing Size After Last Property
	struct FMatrix                               CallFunc_Conv_TransformToMatrix_ReturnValue;       // 0x190(0x80)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue;        // 0x210(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x228(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x240(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43B1[0x3];                                     // Fixing Size After Last Property
	struct FLinearColor                          CallFunc_Conv_VectorToLinearColor_ReturnValue;     // 0x244(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAxis                             K2Node_Select_Default;                             // 0x254(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43B3[0x3];                                     // Fixing Size After Last Property
	struct FVector                               CallFunc_Matrix_GetUnitAxis_ReturnValue;           // 0x258(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Conv_VectorToLinearColor_ReturnValue_1;   // 0x270(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x180 (0x180 - 0x0)
// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Get  Motion Vector For Transform Function
struct UFortAnimationBPFunctionLibrary_C_Get__Motion_Vector_For_Transform_Function_Params
{
public:
	class USceneComponent*                       Skeletal_Mesh;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                  Transform_Name;                                    // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43B9[0x4];                                     // Fixing Size After Last Property
	struct FVector                               Previous_Transform_Location;                       // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Transform_Motion_Vector;                           // 0x30(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Transform_Location;                                // 0x48(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            Transform;                                         // 0x60(0x60)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_GetSocketTransform_ReturnValue;           // 0xC0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x120(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x138(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x150(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x168(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC8 (0xC8 - 0x0)
// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Debug Cloth Teleport Threshold Function
struct UFortAnimationBPFunctionLibrary_C_Debug_Cloth_Teleport_Threshold_Function_Params
{
public:
	double                                       MinDistance;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MinRotation;                                       // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       SkelMeshComponent;                                 // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         PrintToScreen;                                     // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43C3[0x3];                                     // Fixing Size After Last Property
	class FName                                  BoneName;                                          // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               InVector;                                          // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              PawnDeltaRotation;                                 // 0x38(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                       PrintToScreenDuration;                             // 0x50(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x58(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       Distance;                                          // 0x60(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Rotation;                                          // 0x68(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       RotationLocal;                                     // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DistanceLocal;                                     // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x82(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43C5[0x5];                                     // Fixing Size After Last Property
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue;            // 0x88(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Roll;                        // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43C6[0x4];                                     // Fixing Size After Last Property
	double                                       CallFunc_Vector_Distance_ReturnValue;              // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Abs_ReturnValue;                          // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Abs_A_ImplicitCast;                       // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE8 (0xE8 - 0x0)
// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Cloth Controller Helper Scale For Player Movement
struct UFortAnimationBPFunctionLibrary_C_Cloth_Controller_Helper_Scale_For_Player_Movement_Params
{
public:
	struct FVector                               LinearVelScale;                                    // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       PlayerFwdVector;                                   // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       PlayerFwdVectorJump;                               // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ClothUpX;                                          // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ClothUpZ;                                          // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LinearVelVectorOut;                                // 0x40(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_X;                            // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Y;                            // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Z;                            // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43D2[0x7];                                     // Fixing Size After Last Property
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43D3[0x7];                                     // Fixing Size After Last Property
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x90(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_X_1;                          // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Y_1;                          // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Z_1;                          // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_3;      // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue_1;                 // 0xD0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x194 (0x194 - 0x0)
// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Scale Joint Rotation Function
struct UFortAnimationBPFunctionLibrary_C_Scale_Joint_Rotation_Function_Params
{
public:
	struct FRotator                              Scale;                                             // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class FName                                  TargetBone;                                        // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ReferenceBone;                                     // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkinnedMeshComponent*                 SkelMeshComponent;                                 // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              FinalRotation;                                     // 0x30(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              OriginalRotation;                                  // 0x48(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_BreakRotator_Roll;                        // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43E4[0x4];                                     // Fixing Size After Last Property
	struct FTransform                            CallFunc_GetDeltaTransformFromRefPose_ReturnValue; // 0x70(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0xD0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0xE8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x100(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Roll_1;                      // 0x118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch_1;                     // 0x11C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw_1;                       // 0x120(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43E7[0x4];                                     // Fixing Size After Last Property
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x140(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                       CallFunc_Multiply_DoubleDouble_B_ImplicitCast;     // 0x158(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_B_ImplicitCast_1;   // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_B_ImplicitCast_2;   // 0x168(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x170(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;   // 0x178(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2;   // 0x180(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MakeRotator_Roll_ImplicitCast;            // 0x188(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MakeRotator_Yaw_ImplicitCast;             // 0x18C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MakeRotator_Pitch_ImplicitCast;           // 0x190(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x90 (0x90 - 0x0)
// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Adjust Emote Vehicle Wheel Rotation
struct UFortAnimationBPFunctionLibrary_C_Adjust_Emote_Vehicle_Wheel_Rotation_Params
{
public:
	class UActor*                                Owning_Actor;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CurrentWheelRotation;                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DeltaTime;                                         // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CurrentActorRotation;                              // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       NewActorRotation;                                  // 0x28(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       NewWheelRotation;                                  // 0x30(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_K2_GetActorRotation_ReturnValue;          // 0x38(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_BreakRotator_Roll;                        // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43F4[0x4];                                     // Fixing Size After Last Property
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FClamp_ReturnValue;                       // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FInterpTo_ReturnValue;                    // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_FunctionResult_NewActorRotation_ImplicitCast; // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_A_ImplicitCast;     // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1D0 (0x1D0 - 0x0)
// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Gravity Override Setter Function
struct UFortAnimationBPFunctionLibrary_C_Gravity_Override_Setter_Function_Params
{
public:
	class UCustomCharacterPartAnimInstance*      CharacterPartAnimInstance;                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMeshComponent*                        SkelMeshComponent;                                 // 0x8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FGravityOverrideSettingStruct         GravityOverride_Settings;                          // 0x10(0x64)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43FA[0x4];                                     // Fixing Size After Last Property
	double                                       GameTimeInSeconds;                                 // 0x78(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x80(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGravityOverrideSettingStruct         GravityOverride_Settings_Out;                      // 0x88(0x64)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43FC[0x4];                                     // Fixing Size After Last Property
	struct FVector                               GravityOverride_Out;                               // 0xF0(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGravityOverrideSettingStruct         GravityOverrideSettings_Local;                     // 0x108(0x64)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43FD[0x4];                                     // Fixing Size After Last Property
	struct FVector                               Gravity_Override_Local;                            // 0x170(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_AlignVectorWithJoint_ReturnValue;         // 0x188(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Random_Vector_Function_VectorOut;         // 0x1A0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x1B8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1660 (0x1660 - 0x0)
// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Gravity Override State Function
struct UFortAnimationBPFunctionLibrary_C_Gravity_Override_State_Function_Params
{
public:
	class UCustomCharacterPartAnimInstance*      CharacterPartAnimInstance;                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       GameTimeInSeconds;                                 // 0x8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGravityOverrideParamsStruct          GravityOverrideParams;                             // 0x10(0x7B8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRBANParamsStruct                     RBAN_Params;                                       // 0x7C8(0xB40)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DebugDraw;                                         // 0x1308(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4412[0x3];                                     // Fixing Size After Last Property
	class FName                                  DebugJointName;                                    // 0x130C(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x1310(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               GravityOverride;                                   // 0x1318(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CurrentStateOut;                                   // 0x1330(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	struct FGravityOverrideSettingStruct         GravityOverrideSettingsOut;                        // 0x1340(0x64)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4413[0x4];                                     // Fixing Size After Last Property
	struct FRBANSettingStruct                    RBAN_SettingsOut;                                  // 0x13A8(0x90)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                OwnerSkelMeshComp;                                 // 0x1438(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FRBANSettingStruct                    RBAN_SettingsLocal;                                // 0x1440(0x90)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               GravityOverrideLocal;                              // 0x14D0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGravityOverrideSettingStruct         GravityOverrideSettingsLocal;                      // 0x14E8(0x64)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4415[0x4];                                     // Fixing Size After Last Property
	class FString                                CurrentState;                                      // 0x1550(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x1560(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4416[0x7];                                     // Fixing Size After Last Property
	class UFortPlayerAnimInstance*               CallFunc_GetOwnerFortPlayerAnimInstance_ReturnValue; // 0x1568(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1570(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1571(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4418[0x6];                                     // Fixing Size After Last Property
	class USkeletalMeshComponent*                CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue; // 0x1578(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UFortPlayerAnimationInterface*         CallFunc_GetOwnerAnimationInterface_ReturnValue;   // 0x1580(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1588(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_441A[0x7];                                     // Fixing Size After Last Property
	struct FFortAnimInput_Zipline                CallFunc_GetZiplineInput_ReturnValue;              // 0x1590(0x38)(ConstParm, NoDestructor)
	double                                       CallFunc_VSize_ReturnValue;                        // 0x15C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x15D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x15D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_2;       // 0x15D2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_441B[0x5];                                     // Fixing Size After Last Property
	struct FVector                               CallFunc_AlignVectorWithJoint_ReturnValue;         // 0x15D8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Random_Vector_Function_VectorOut;         // 0x15F0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x1608(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                CallFunc_GetPartSkeletalMeshComponent_ReturnValue; // 0x1620(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_3;       // 0x1628(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_441D[0x7];                                     // Fixing Size After Last Property
	TArray<class FName>                          K2Node_MakeArray_Array;                            // 0x1630(0x10)(ReferenceParm)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x1640(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_441F[0x7];                                     // Fixing Size After Last Property
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x1648(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast_1;    // 0x1650(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast_2;    // 0x1658(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB9 (0xB9 - 0x0)
// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.FN_PSDPoseReaderFNC
struct UFortAnimationBPFunctionLibrary_C_FN_PSDPoseReaderFNC_Params
{
public:
	class FString                                StartJnt;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                EndJnt;                                            // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                PoseJnt;                                           // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	double                                       Angle;                                             // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Debug;                                             // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4423[0x7];                                     // Fixing Size After Last Property
	class USkeletalMeshComponent*                SkeletalMeshComponent;                             // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x48(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       Pose_output;                                       // 0x50(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Psd_alpha;                                         // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue_1;          // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue_2;          // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue_3;          // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_DirectionBetweenSockets_ReturnValue;   // 0x70(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_DirectionBetweenSockets_ReturnValue_1; // 0x88(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetAngleBetweenTwoVectors_Angle__Degrees_; // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1D8 (0x1D8 - 0x0)
// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Wind Gust Control Function
struct UFortAnimationBPFunctionLibrary_C_Wind_Gust_Control_Function_Params
{
public:
	class UCustomCharacterPartAnimInstance*      CharacterPartAnimInstance;                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       DeltaTime;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       GameTimeInSeconds;                                 // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  JointName;                                         // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4429[0x4];                                     // Fixing Size After Last Property
	struct FWindGustSettingStruct                WindGustSettings;                                  // 0x20(0x78)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustLocalSettingStruct           WindGustLocalSettings;                             // 0x98(0x14)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_442A[0x4];                                     // Fixing Size After Last Property
	class UObject*                               __WorldContext;                                    // 0xB0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               GustStrengthWindVelocity_Out;                      // 0xB8(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustLocalSettingStruct           WindGustLocalSettingsOut;                          // 0xD0(0x14)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_442B[0x4];                                     // Fixing Size After Last Property
	struct FVector                               GustStrength___WindVelocityLocal;                  // 0xE8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue; // 0x100(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FWindGustSettingStruct                K2Node_MakeStruct_WindGustSettingStruct;           // 0x108(0x78)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_442C[0x7];                                     // Fixing Size After Last Property
	double                                       CallFunc_WindGustGeneratorFunction_GustStrength___WindVelocity; // 0x188(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustLocalSettingStruct           CallFunc_WindGustGeneratorFunction_ClothGustLocalSettingsOut; // 0x190(0x14)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_442D[0x4];                                     // Fixing Size After Last Property
	struct FVector                               CallFunc_Random_Vector_Function_VectorOut;         // 0x1A8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x1C0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2A4 (0x2A4 - 0x0)
// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.WindGustGeneratorFunction
struct UFortAnimationBPFunctionLibrary_C_WindGustGeneratorFunction_Params
{
public:
	double                                       DeltaTime;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustSettingStruct                GustSettings;                                      // 0x8(0x78)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustLocalSettingStruct           ClothGustLocalSettings;                            // 0x80(0x14)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4438[0x4];                                     // Fixing Size After Last Property
	class UObject*                               __WorldContext;                                    // 0x98(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       GustStrength___WindVelocity;                       // 0xA0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustLocalSettingStruct           ClothGustLocalSettingsOut;                         // 0xA8(0x14)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4439[0x4];                                     // Fixing Size After Last Property
	double                                       ActualTime;                                        // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               GustDirectionWeightLocal;                          // 0xC8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ElapsedTimeLocal;                                  // 0xE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       FinalGustStrengthLocal;                            // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       GustDurationLocal;                                 // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       GustStrengthLocal;                                 // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       TimeBetweenGustsLocal;                             // 0x100(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DeltaTimeLocal;                                    // 0x108(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_PerlinNoise1D_ReturnValue;                // 0x118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_443A[0x4];                                     // Fixing Size After Last Property
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_PerlinNoise1D_ReturnValue_1;              // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_443B[0x4];                                     // Fixing Size After Last Property
	double                                       CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_RandomFloatInRange_ReturnValue;           // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x140(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustLocalSettingStruct           K2Node_MakeStruct_WindGustLocalSettingStruct;      // 0x148(0x14)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_443D[0x4];                                     // Fixing Size After Last Property
	double                                       CallFunc_Add_DoubleDouble_ReturnValue_2;           // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x168(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue_3;           // 0x170(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x178(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_443F[0x7];                                     // Fixing Size After Last Property
	double                                       CallFunc_FClamp_ReturnValue;                       // 0x188(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_RandomFloat_ReturnValue;                  // 0x190(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_UnclampedLerp_Return_Value;               // 0x198(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x1A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FInterpTo_ReturnValue;                    // 0x1A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FInterpTo_ReturnValue_1;                  // 0x1B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_RandomFloat_ReturnValue_1;                // 0x1B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FInterpTo_ReturnValue_2;                  // 0x1C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_UnclampedLerp_Return_Value_1;             // 0x1C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FInterpTo_ReturnValue_3;                  // 0x1D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1;  // 0x1D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4440[0x7];                                     // Fixing Size After Last Property
	double                                       CallFunc_RandomFloat_ReturnValue_2;                // 0x1E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_UnclampedLerp_Return_Value_2;             // 0x1E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_PerlinNoise1D_Value_ImplicitCast;         // 0x1F0(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_PerlinNoise1D_Value_ImplicitCast_1;       // 0x1F4(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_VariableSet_ElapsedTimeLocal_ImplicitCast;  // 0x1F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_VariableSet_TimeBetweenGustsLocal_ImplicitCast; // 0x200(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_VariableSet_GustStrengthLocal_ImplicitCast; // 0x208(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_VariableSet_GustDurationLocal_ImplicitCast; // 0x210(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_VariableSet_FinalGustStrengthLocal_ImplicitCast; // 0x218(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_A_ImplicitCast_1;        // 0x228(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_UnclampedLerp_A_ImplicitCast;             // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_UnclampedLerp_B_ImplicitCast;             // 0x238(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_UnclampedLerp_A_ImplicitCast_1;           // 0x240(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_UnclampedLerp_B_ImplicitCast_1;           // 0x248(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_UnclampedLerp_A_ImplicitCast_2;           // 0x250(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_UnclampedLerp_B_ImplicitCast_2;           // 0x258(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_B_ImplicitCast;     // 0x260(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_B_ImplicitCast_1;   // 0x268(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_RandomFloatInRange_Min_ImplicitCast;      // 0x270(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_RandomFloatInRange_Max_ImplicitCast;      // 0x278(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_RandomFloatInRange_Min_ImplicitCast_1;    // 0x280(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_RandomFloatInRange_Max_ImplicitCast_1;    // 0x288(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_MakeStruct_ElapsedTime_48_9A24DA0842E21D5736699499F1DE1171_ImplicitCast; // 0x290(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_MakeStruct_TimeBetweenGusts_54_E1D59EA94088FB83508636942434066D_ImplicitCast; // 0x294(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_MakeStruct_GustStrength_55_7788D1D04920E9BC2F96FCBDDCA7C33A_ImplicitCast; // 0x298(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_MakeStruct_GustDuration_56_E42A0C8341E10ACAC2016FA7F726B406_ImplicitCast; // 0x29C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_MakeStruct_FinalGustStrengthLocal_57_BD76FBFF47687A7C38D40EAD653D5618_ImplicitCast; // 0x2A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x25 (0x25 - 0x0)
// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Play Transformation Montage
struct UFortAnimationBPFunctionLibrary_C_Play_Transformation_Montage_Params
{
public:
	class UFortPlayerPawn*                       FortPlayerPawn;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_444A[0x6];                                     // Fixing Size After Last Property
	class UAnimInstance*                         CallFunc_GetAnimInstance_ReturnValue;              // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Montage_Play_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Clear Transformation Montage
struct UFortAnimationBPFunctionLibrary_C_Clear_Transformation_Montage_Params
{
public:
	class UFortPlayerPawn*                       FortPlayerPawn;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Set Transformation Montage
struct UFortAnimationBPFunctionLibrary_C_Set_Transformation_Montage_Params
{
public:
	class UFortPlayerPawn*                       FortPlayerPawn;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          Montage;                                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       StartTime;                                         // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_444D[0x3];                                     // Fixing Size After Last Property
	float                                        K2Node_VariableSet_TransformationMontageStartTime_ImplicitCast; // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1D0 (0x1D0 - 0x0)
// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Cloth Controller Setter Function
struct UFortAnimationBPFunctionLibrary_C_Cloth_Controller_Setter_Function_Params
{
public:
	class UCustomCharacterPartAnimInstance*      CharacterPartAnimInstance;                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FClothSettingStruct                   Cloth_Settings;                                    // 0x8(0x5C)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_445C[0x4];                                     // Fixing Size After Last Property
	class UObject*                               __WorldContext;                                    // 0x68(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FClothSettingStruct                   Cloth_Settings_Out;                                // 0x70(0x5C)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_445D[0x4];                                     // Fixing Size After Last Property
	struct FVector2D                             Lift_Coefficient_Local;                            // 0xD0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Drag_Coefficient_Local;                            // 0xE0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Gravity_Override_Local;                            // 0xF0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Fictitious_Angular_Scale_Local;                    // 0x108(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Angular_Velocity_Scale_Local;                      // 0x110(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Linear_Velocity_Scale_Local;                       // 0x118(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue; // 0x130(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4460[0x7];                                     // Fixing Size After Last Property
	struct FVector                               CallFunc_AlignVectorWithJoint_ReturnValue;         // 0x140(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FClothSettingStruct                   K2Node_MakeStruct_ClothSettingStruct;              // 0x158(0x5C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4462[0x4];                                     // Fixing Size After Last Property
	double                                       K2Node_VariableSet_Angular_Velocity_Scale_Local_ImplicitCast; // 0x1B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_VariableSet_Fictitious_Angular_Scale_Local_ImplicitCast; // 0x1C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_MakeStruct_FictitiousAngularScale_10_C5F4D16F48D0BEDC3F0FA38B2648511B_ImplicitCast; // 0x1C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_MakeStruct_AngularVelocityScale_6_6A3DFE4A481AD4D7CB18D79F95CC88E8_ImplicitCast; // 0x1CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3694 (0x3694 - 0x0)
// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Cloth Controller Function
struct UFortAnimationBPFunctionLibrary_C_Cloth_Controller_Function_Params
{
public:
	class UCustomCharacterPartAnimInstance*      CharacterPartAnimInstance;                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                ClothingAssetName;                                 // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FClothParamsStruct                    Cloth_Paramaters;                                  // 0x18(0x780)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FClothCoreSettingStruct               Cloth_Core_Settings;                               // 0x798(0x80)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ClothUpAxis;                                       // 0x818(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       OnGround_Moving_SpeedLimit;                        // 0x830(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       OnGround_Moving_AngularVel_Max;                    // 0x838(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       OnGround_Moving_FictitiousVel_Max;                 // 0x840(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LinVelScale_FwdBwd_Clamp;                          // 0x848(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LinVelScale_UpDwn_Clamp;                           // 0x850(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DeltaTime;                                         // 0x858(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       GameTimeInSeconds;                                 // 0x860(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustParamsStruct                 WindGustsParams;                                   // 0x868(0x960)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustLocalSettingStruct           WindGustLocalSettings;                             // 0x11C8(0x14)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44DD[0x4];                                     // Fixing Size After Last Property
	class UObject*                               __WorldContext;                                    // 0x11E0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CurrentStateOut;                                   // 0x11E8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	struct FClothSettingStruct                   Cloth_Settings_Out;                                // 0x11F8(0x5C)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44DE[0x4];                                     // Fixing Size After Last Property
	struct FClothCoreSettingStruct               Cloth_Core_Settings_Out;                           // 0x1258(0x80)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustSettingStruct                WindGustSettings_Out;                              // 0x12D8(0x78)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustLocalSettingStruct           WindGustLocalSettings_Out;                         // 0x1350(0x14)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44E0[0x4];                                     // Fixing Size After Last Property
	struct FVector                               GustStrength___WindVelocityOut;                    // 0x1368(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LinearVelVector_DELETE_LATER;                      // 0x1380(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             OnGroundMoving_LiftCoefficientLocal;               // 0x1398(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             OnGroundMoving_DragCoefficientLocal;               // 0x13A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CurrentState;                                      // 0x13B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FWindGustSettingStruct                WindGustSettingsLocal;                             // 0x13C8(0x78)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustParamsStruct                 WindGustsParamsLocal;                              // 0x1440(0x960)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               MovementLinearVelVector_Local;                     // 0x1DA0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ClothUpAxis_Local;                                 // 0x1DB8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               GustStrength___WindVelocityLocal;                  // 0x1DD0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustLocalSettingStruct           WindGustLocalSettings_Local;                       // 0x1DE8(0x14)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44E4[0x4];                                     // Fixing Size After Last Property
	double                                       GameTimeInSecondsLocal;                            // 0x1E00(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DeltaTimeLocal;                                    // 0x1E08(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       OnGround_Moving_FictitiousVel;                     // 0x1E10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       OnGround_Moving_AngularVel;                        // 0x1E18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FClothCoreSettingStruct               Cloth_Core_Settings_Local;                         // 0x1E20(0x80)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FClothSettingStruct                   Cloth_Settings_Local;                              // 0x1EA0(0x5C)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44E7[0x4];                                     // Fixing Size After Last Property
	struct FClothParamsStruct                    Cloth_Params_Local;                                // 0x1F00(0x780)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                ClothingAssetName_Local;                           // 0x2680(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	double                                       Player_Forward_Vector_scaled_for_jump_Local;       // 0x2690(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Player_Forward_Vector_Local;                       // 0x2698(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UChaosClothingInteractor*              ChaosClothingInteractor;                           // 0x26A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCustomCharacterPartAnimInstance*      CharacterPartAnimInstanceLocal;                    // 0x26A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x26B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44EB[0x7];                                     // Fixing Size After Last Property
	struct FClothSettingStruct                   CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out; // 0x26B8(0x5C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44EC[0x4];                                     // Fixing Size After Last Property
	struct FVector                               CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out; // 0x2718(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustLocalSettingStruct           CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut; // 0x2730(0x14)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44EE[0x4];                                     // Fixing Size After Last Property
	struct FClothSettingStruct                   CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_1; // 0x2748(0x5C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44EF[0x4];                                     // Fixing Size After Last Property
	struct FVector                               CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_1; // 0x27A8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustLocalSettingStruct           CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_1; // 0x27C0(0x14)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44F1[0x4];                                     // Fixing Size After Last Property
	struct FVector                               CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_2; // 0x27D8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustLocalSettingStruct           CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_2; // 0x27F0(0x14)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44F4[0x4];                                     // Fixing Size After Last Property
	struct FClothSettingStruct                   CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_2; // 0x2808(0x5C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44F6[0x4];                                     // Fixing Size After Last Property
	class UFortPlayerAnimInstance*               CallFunc_GetOwnerFortPlayerAnimInstance_ReturnValue; // 0x2868(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortPlayerAnimInstance*               CallFunc_GetOwnerFortPlayerAnimInstance_ReturnValue_1; // 0x2870(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x2878(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x2879(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44F7[0x6];                                     // Fixing Size After Last Property
	double                                       CallFunc_BreakVector_X;                            // 0x2880(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Y;                            // 0x2888(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Z;                            // 0x2890(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortPlayerAnimationInterface*         CallFunc_GetOwnerAnimationInterface_ReturnValue;   // 0x2898(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x28A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44F9[0x7];                                     // Fixing Size After Last Property
	double                                       CallFunc_VSize_ReturnValue;                        // 0x28A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x28B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44FC[0x7];                                     // Fixing Size After Last Property
	struct FFortAnimInput_Zipline                CallFunc_GetZiplineInput_ReturnValue;              // 0x28B8(0x38)(ConstParm, NoDestructor)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_2;       // 0x28F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x28F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44FD[0x2];                                     // Fixing Size After Last Property
	float                                        CallFunc_BreakRotator_Roll;                        // 0x28F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0x28F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0x28FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Abs_ReturnValue;                          // 0x2900(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_3;       // 0x2908(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44FE[0x7];                                     // Fixing Size After Last Property
	double                                       CallFunc_Player_Movement_Function_X_Movement;      // 0x2910(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Player_Movement_Function_Y_Movement;      // 0x2918(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Player_Movement_Function_Z_Movement;      // 0x2920(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_MapRangeClamped_ReturnValue;              // 0x2928(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_MapRangeClamped_ReturnValue_1;            // 0x2930(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                CallFunc_GetOwningComponent_ReturnValue;           // 0x2938(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UClothingSimulationInteractor*         CallFunc_GetClothingSimulationInteractor_ReturnValue; // 0x2940(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x2948(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44FF[0x7];                                     // Fixing Size After Last Property
	class UClothingInteractor*                   CallFunc_GetClothingInteractor_ReturnValue;        // 0x2950(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UChaosClothingInteractor*              K2Node_DynamicCast_AsChaos_Clothing_Interactor;    // 0x2958(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x2960(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4501[0x7];                                     // Fixing Size After Last Property
	struct FVector                               CallFunc_Cloth_Controller_Helper_Scale_For_Player_Movement_LinearVelVectorOut; // 0x2968(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FClothSettingStruct                   CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_3; // 0x2980(0x5C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4502[0x4];                                     // Fixing Size After Last Property
	struct FClothSettingStruct                   CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_4; // 0x29E0(0x5C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4503[0x4];                                     // Fixing Size After Last Property
	struct FClothSettingStruct                   CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_5; // 0x2A40(0x5C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4504[0x4];                                     // Fixing Size After Last Property
	struct FClothSettingStruct                   CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_6; // 0x2AA0(0x5C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4506[0x4];                                     // Fixing Size After Last Property
	struct FClothSettingStruct                   CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_7; // 0x2B00(0x5C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4507[0x4];                                     // Fixing Size After Last Property
	struct FVector                               CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_3; // 0x2B60(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustLocalSettingStruct           CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_3; // 0x2B78(0x14)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4508[0x4];                                     // Fixing Size After Last Property
	struct FVector                               CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_4; // 0x2B90(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustLocalSettingStruct           CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_4; // 0x2BA8(0x14)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_450B[0x4];                                     // Fixing Size After Last Property
	struct FVector                               CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_5; // 0x2BC0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustLocalSettingStruct           CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_5; // 0x2BD8(0x14)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_450D[0x4];                                     // Fixing Size After Last Property
	struct FClothSettingStruct                   CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_8; // 0x2BF0(0x5C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_450E[0x4];                                     // Fixing Size After Last Property
	struct FClothSettingStruct                   CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_9; // 0x2C50(0x5C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_450F[0x4];                                     // Fixing Size After Last Property
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_4;       // 0x2CB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4510[0x7];                                     // Fixing Size After Last Property
	struct FVector                               CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_6; // 0x2CB8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustLocalSettingStruct           CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_6; // 0x2CD0(0x14)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4512[0x4];                                     // Fixing Size After Last Property
	struct FVector                               CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_7; // 0x2CE8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustLocalSettingStruct           CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_7; // 0x2D00(0x14)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4513[0x4];                                     // Fixing Size After Last Property
	struct FVector                               CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_8; // 0x2D18(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustLocalSettingStruct           CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_8; // 0x2D30(0x14)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4515[0x4];                                     // Fixing Size After Last Property
	struct FVector                               CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_9; // 0x2D48(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustLocalSettingStruct           CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_9; // 0x2D60(0x14)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4517[0x4];                                     // Fixing Size After Last Property
	struct FClothControllerPropertiesMap         CallFunc_ClothControllerFindCharacterProperties_OutPropertiesMap; // 0x2D78(0x50)()
	class FName                                  CallFunc_ClothControllerStaticFindCharacterState_OutCharacterStateName; // 0x2DC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4518[0x4];                                     // Fixing Size After Last Property
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x2DD0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FClothParameters                      CallFunc_Cloth_Controller_Convert_To_Nativized_Parameters_Cloth_Parameters_Nativized; // 0x2DE0(0x60)(NoDestructor)
	struct FWindGustParameters                   CallFunc_Cloth_Controller_Convert_To_Nativized_Parameters_Wind_Parameters_Nativized; // 0x2E40(0x78)(NoDestructor)
	struct FClothCoreSettings                    CallFunc_Cloth_Controller_Convert_To_Nativized_Parameters_ClothCoreSettings; // 0x2EB8(0x80)(NoDestructor)
	struct FWindGustSettings                     CallFunc_Cloth_Controller_Convert_To_Nativized_Parameters_Wind_Settings_Nativized; // 0x2F38(0x14)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_451B[0x4];                                     // Fixing Size After Last Property
	struct FVector                               CallFunc_ClothControllerDynamicParameterAdjustment_OutLinearVelocityScale; // 0x2F50(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FClothParameters                      CallFunc_ClothControllerDynamicParameterAdjustment_OutClothSettings; // 0x2F68(0x60)(NoDestructor)
	struct FClothSettingStruct                   CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_10; // 0x2FC8(0x5C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_451C[0x4];                                     // Fixing Size After Last Property
	struct FClothSettingStruct                   CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_11; // 0x3028(0x5C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_451D[0x4];                                     // Fixing Size After Last Property
	struct FVector                               CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_10; // 0x3088(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustLocalSettingStruct           CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_10; // 0x30A0(0x14)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_451F[0x4];                                     // Fixing Size After Last Property
	struct FVector                               CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_11; // 0x30B8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustLocalSettingStruct           CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_11; // 0x30D0(0x14)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4520[0x4];                                     // Fixing Size After Last Property
	struct FClothSettingStruct                   CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_12; // 0x30E8(0x5C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4521[0x4];                                     // Fixing Size After Last Property
	struct FVector                               CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_12; // 0x3148(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustLocalSettingStruct           CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_12; // 0x3160(0x14)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4522[0x4];                                     // Fixing Size After Last Property
	struct FClothSettingStruct                   CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_13; // 0x3178(0x5C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4523[0x4];                                     // Fixing Size After Last Property
	struct FClothSettingStruct                   CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_14; // 0x31D8(0x5C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4524[0x4];                                     // Fixing Size After Last Property
	struct FVector                               CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_13; // 0x3238(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustLocalSettingStruct           CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_13; // 0x3250(0x14)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4525[0x4];                                     // Fixing Size After Last Property
	struct FClothSettingStruct                   CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_15; // 0x3268(0x5C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4526[0x4];                                     // Fixing Size After Last Property
	struct FVector                               CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_14; // 0x32C8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustLocalSettingStruct           CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_14; // 0x32E0(0x14)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4529[0x4];                                     // Fixing Size After Last Property
	struct FVector                               CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_15; // 0x32F8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustLocalSettingStruct           CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_15; // 0x3310(0x14)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_452A[0x4];                                     // Fixing Size After Last Property
	struct FClothSettingStruct                   K2Node_MakeStruct_ClothSettingStruct;              // 0x3328(0x5C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_452B[0x4];                                     // Fixing Size After Last Property
	struct FClothSettingStruct                   CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_16; // 0x3388(0x5C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_452D[0x4];                                     // Fixing Size After Last Property
	struct FVector                               CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_16; // 0x33E8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustLocalSettingStruct           CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_16; // 0x3400(0x14)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_452E[0x4];                                     // Fixing Size After Last Property
	struct FVector                               CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_17; // 0x3418(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustLocalSettingStruct           CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_17; // 0x3430(0x14)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_452F[0x4];                                     // Fixing Size After Last Property
	struct FClothSettingStruct                   CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_17; // 0x3448(0x5C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4530[0x4];                                     // Fixing Size After Last Property
	struct FClothSettingStruct                   CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_18; // 0x34A8(0x5C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4531[0x4];                                     // Fixing Size After Last Property
	struct FVector                               CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_18; // 0x3508(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustLocalSettingStruct           CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_18; // 0x3520(0x14)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4533[0x4];                                     // Fixing Size After Last Property
	struct FVector                               CallFunc_ClothControllerWindGustControl_OutWindGustVector; // 0x3538(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWindGustSettings                     CallFunc_ClothControllerWindGustControl_OutWindGustLocalSettings; // 0x3550(0x14)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FWindGustLocalSettingStruct           K2Node_MakeStruct_WindGustLocalSettingStruct;      // 0x3564(0x14)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FClothParameters                      CallFunc_ClothControllerWriteToSimulation_OutWorldSpaceClothSettings; // 0x3578(0x60)(NoDestructor)
	struct FVector                               CallFunc_ClothControllerWriteToSimulation_OutWorldSpaceWindVelocity; // 0x35D8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FClothSettingStruct                   K2Node_MakeStruct_ClothSettingStruct_1;            // 0x35F0(0x5C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4535[0x4];                                     // Fixing Size After Last Property
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x3650(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast_1;    // 0x3658(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Abs_A_ImplicitCast;                       // 0x3660(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast_2;    // 0x3668(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_VariableSet_OnGround_Moving_AngularVel_ImplicitCast; // 0x3670(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_VariableSet_OnGround_Moving_FictitiousVel_ImplicitCast; // 0x3678(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_ClothControllerFindCharacterProperties_HighRotationRateThreshold_ImplicitCast; // 0x3680(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_MakeStruct_FictitiousAngularScale_10_C5F4D16F48D0BEDC3F0FA38B2648511B_ImplicitCast; // 0x3684(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_MakeStruct_AngularVelocityScale_6_6A3DFE4A481AD4D7CB18D79F95CC88E8_ImplicitCast; // 0x3688(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_ClothControllerWindGustControl_DeltaTime_ImplicitCast; // 0x368C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_ClothControllerWindGustControl_GameTime_ImplicitCast; // 0x3690(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC4 (0xC4 - 0x0)
// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.RandomRotatorFunction
struct UFortAnimationBPFunctionLibrary_C_RandomRotatorFunction_Params
{
public:
	double                                       GameTimeInSeconds;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       PerlinScale;                                       // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              Frequency;                                         // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              Amplitude;                                         // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              Offset;                                            // 0x40(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                       TimeOffset;                                        // 0x58(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x60(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              RandomRotator;                                     // 0x68(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                       PerlinScaleLocal;                                  // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              HairRotator_01;                                    // 0x88(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_GetRandomWindRotator_ReturnValue;         // 0xA0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_GetRandomWindRotator_GameTime_ImplicitCast; // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetRandomWindRotator_PerlinScale_ImplicitCast; // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetRandomWindRotator_TimeOffset_ImplicitCast; // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x98 (0x98 - 0x0)
// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Player Movement Function
struct UFortAnimationBPFunctionLibrary_C_Player_Movement_Function_Params
{
public:
	class UCustomCharacterPartAnimInstance*      CharacterPartAnimInstance;                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       X_Dot_Product;                                     // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Y_Dot_Product;                                     // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Z_Dot_Product;                                     // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DrawDebug;                                         // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4556[0x7];                                     // Fixing Size After Last Property
	double                                       Debug_Scalar;                                      // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       X_Movement;                                        // 0x38(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Y_Movement;                                        // 0x40(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Z_Movement;                                        // 0x48(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DebugDrawLocal;                                    // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4557[0x7];                                     // Fixing Size After Last Property
	class UFortPlayerPawn*                       Pawn;                                              // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_PlayerMovement_XMovement;                 // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_PlayerMovement_YMovement;                 // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_PlayerMovement_ZMovement;                 // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_PlayerMovement_XDotProductCoefficient_ImplicitCast; // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_PlayerMovement_YDotProductCoefficient_ImplicitCast; // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_PlayerMovement_ZDotProductCoefficient_ImplicitCast; // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_PlayerMovement_DebugScalar_ImplicitCast;  // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4559[0x4];                                     // Fixing Size After Last Property
	double                                       K2Node_FunctionResult_X_Movement_ImplicitCast;     // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_FunctionResult_Y_Movement_ImplicitCast;     // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_FunctionResult_Z_Movement_ImplicitCast;     // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x144 (0x144 - 0x0)
// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Random Vector Function
struct UFortAnimationBPFunctionLibrary_C_Random_Vector_Function_Params
{
public:
	class UCustomCharacterPartAnimInstance*      CharacterPartAnimInstance;                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMeshComponent*                        SkelMeshComponent;                                 // 0x8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                  JointName;                                         // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_456A[0x4];                                     // Fixing Size After Last Property
	double                                       GameTimeInSeconds;                                 // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       TimeOffset;                                        // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       PerlinScale;                                       // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Frequency;                                         // 0x30(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Amplitude;                                         // 0x48(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Offset;                                            // 0x60(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x78(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               VectorOut;                                         // 0x80(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               VectorOut_Code;                                    // 0x98(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       PerlinScaleLocal;                                  // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               UpVectorLocal;                                     // 0xB8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RightVectorLocal;                                  // 0xD0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ForwardVectorLocal;                                // 0xE8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  JointNameLocal;                                    // 0x100(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_456C[0x4];                                     // Fixing Size After Last Property
	struct FVector                               CallFunc_GetRandomWindVector_ReturnValue;          // 0x108(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_AlignVectorWithJoint_ReturnValue;         // 0x120(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetRandomWindVector_GameTime_ImplicitCast; // 0x138(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetRandomWindVector_TimeOffset_ImplicitCast; // 0x13C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetRandomWindVector_PerlinScale_ImplicitCast; // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x61 (0x61 - 0x0)
// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.DrawVectorFromJointFunction
struct UFortAnimationBPFunctionLibrary_C_DrawVectorFromJointFunction_Params
{
public:
	class USceneComponent*                       SkelMeshComponent;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                  JointName;                                         // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4570[0x4];                                     // Fixing Size After Last Property
	struct FVector                               LineEnd;                                           // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               JointOffset;                                       // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          LineColor;                                         // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Thickness;                                         // 0x50(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x58(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.DrawJointDebugFunction
struct UFortAnimationBPFunctionLibrary_C_DrawJointDebugFunction_Params
{
public:
	class USceneComponent*                       SkelMeshComponent;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                               JointOffset;                                       // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          JointName;                                         // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	double                                       Scale;                                             // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Duration;                                          // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Thickness;                                         // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DebugDraw;                                         // 0x48(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_457D[0x7];                                     // Fixing Size After Last Property
	class UObject*                               __WorldContext;                                    // 0x50(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCustomCharacterPartAnimInstance*      CharacterPartAnimInstanceLocal;                    // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_457F[0x3];                                     // Fixing Size After Last Property
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4580[0x3];                                     // Fixing Size After Last Property
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x118 (0x118 - 0x0)
// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.ComplexSimSpaceFunction
struct UFortAnimationBPFunctionLibrary_C_ComplexSimSpaceFunction_Params
{
public:
	class UCustomCharacterPartAnimInstance*      CharacterPartAnimInstance;                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       InterpSpeedMax;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       PawnSpeedMax;                                      // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       RInterpErrorTolerance;                             // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DeltaTime;                                         // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DebugDraw;                                         // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4599[0x7];                                     // Fixing Size After Last Property
	struct FRotator                              Sim_space_rotation_in;                             // 0x30(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         InComponentSpaceIn;                                // 0x48(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InComponentSpaceLastFrameIn;                       // 0x49(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LockedOnSimSpaceIn;                                // 0x4A(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_459A[0x5];                                     // Fixing Size After Last Property
	double                                       InterpSpeedIn;                                     // 0x50(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x58(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              Sim_space_rotation;                                // 0x60(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         InComponentSpaceOut;                               // 0x78(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InComponentSpaceLastFrameOut;                      // 0x79(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LockedOnSimSpaceOut;                               // 0x7A(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_459D[0x5];                                     // Fixing Size After Last Property
	double                                       InterpSpeedOut;                                    // 0x80(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RootLocation;                                      // 0x88(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Interpolating_Out;                                 // 0xA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UsingComponentSpace_Out;                           // 0xA1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_459E[0x6];                                     // Fixing Size After Last Property
	struct FRotator                              SimSpaceRotation_Out;                              // 0xA8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0xC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_459F[0x6];                                     // Fixing Size After Last Property
	class USkeletalMeshComponent*                CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue; // 0xC8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue;            // 0xD0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_45A2[0x7];                                     // Fixing Size After Last Property
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0xF0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SelectSimSpaceRotation_InterpTolerance_ImplicitCast; // 0x108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SelectSimSpaceRotation_InterpSpeed_ImplicitCast; // 0x10C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SelectSimSpaceRotation_DeltaTime_ImplicitCast; // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SelectSimSpaceRotation_PawnSpeedMax_ImplicitCast; // 0x114(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x690 (0x690 - 0x0)
// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Gravity Override Function
struct UFortAnimationBPFunctionLibrary_C_Gravity_Override_Function_Params
{
public:
	class UCustomCharacterPartAnimInstance*      CharacterPartAnimInstance;                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       GameTimeInSeconds;                                 // 0x8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               WindFreq;                                          // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               WindAmp;                                           // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               WindOffset;                                        // 0x40(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               GoingUpGravityOverride;                            // 0x58(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ComingDownGravityOverride;                         // 0x70(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               DivingDownGravityOverride;                         // 0x88(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ParachuteOpenedGravityOverride;                    // 0xA0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               GroundWindFreq;                                    // 0xB8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               GroundWindAmp;                                     // 0xD0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               GroundWindOffset;                                  // 0xE8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               OnGroundGravityOverride;                           // 0x100(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               SwimmingGravityOverride;                           // 0x118(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  JointName;                                         // 0x130(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_45BD[0x4];                                     // Fixing Size After Last Property
	class UObject*                               __WorldContext;                                    // 0x138(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               GravityOverride;                                   // 0x140(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               DivingDownGravityOverrideLocal;                    // 0x158(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               SwimmingGravityOverrideLocal;                      // 0x170(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               OnGroundGravityOverrideLocal;                      // 0x188(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ParachuteOpenedGravityOverrideLocal;               // 0x1A0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ComingDownGravityOverrideLocal;                    // 0x1B8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               GoingUpGravOverrideLocal;                          // 0x1D0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCustomCharacterPartAnimInstance*      CharacterPartAnimInstanceLocal;                    // 0x1E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_X;                            // 0x1F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Y;                            // 0x1F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Z;                            // 0x200(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_X_1;                          // 0x208(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Y_1;                          // 0x210(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Z_1;                          // 0x218(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_X_2;                          // 0x220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Y_2;                          // 0x228(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Z_2;                          // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_X_3;                          // 0x238(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Y_3;                          // 0x240(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Z_3;                          // 0x248(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_X_4;                          // 0x250(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Y_4;                          // 0x258(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Z_4;                          // 0x260(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_X_5;                          // 0x268(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Y_5;                          // 0x270(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Z_5;                          // 0x278(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x280(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_45BF[0x7];                                     // Fixing Size After Last Property
	class USkeletalMeshComponent*                CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue; // 0x288(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_GetSocketRotation_ReturnValue;            // 0x290(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_45C0[0x7];                                     // Fixing Size After Last Property
	struct FVector                               CallFunc_GetUpVector_ReturnValue;                  // 0x2B0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x2C8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x2E0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_2;       // 0x2F8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_3;       // 0x310(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_4;       // 0x328(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_5;       // 0x340(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetRightVector_ReturnValue;               // 0x358(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetForwardVector_ReturnValue;             // 0x370(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_6;       // 0x388(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_7;       // 0x3A0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_8;       // 0x3B8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x3D0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_9;       // 0x3E8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_1;           // 0x400(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_10;      // 0x418(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_11;      // 0x430(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_12;      // 0x448(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_13;      // 0x460(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_14;      // 0x478(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_2;           // 0x490(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_3;           // 0x4A8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_4;           // 0x4C0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_5;           // 0x4D8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_15;      // 0x4F0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_16;      // 0x508(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_6;           // 0x520(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_7;           // 0x538(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_8;           // 0x550(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_9;           // 0x568(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_17;      // 0x580(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Random_Vector_Function_VectorOut;         // 0x598(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_10;          // 0x5B0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Random_Vector_Function_VectorOut_1;       // 0x5C8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_11;          // 0x5E0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_12;          // 0x5F8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_13;          // 0x610(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_14;          // 0x628(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_15;          // 0x640(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_16;          // 0x658(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_17;          // 0x670(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x688(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
