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


// Function BelongTreatyEventVaultWorld.BelongTreatyEventVaultWorld_C.TransitionBackgroundBackward
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Backward                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             PreTransitionOffset                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             FXTransitionFade                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    Mid                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_5                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_6                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_7                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_2            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_3            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_4            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_5            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_6            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_7            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_8            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_9            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBelongTreatyEventVaultWorld_C::TransitionBackgroundBackward(double Backward, double PreTransitionOffset, double FXTransitionFade, class UMaterialInstanceDynamic* Mid, double CallFunc_Lerp_ReturnValue, double CallFunc_Lerp_ReturnValue_1, double CallFunc_Lerp_ReturnValue_2, double CallFunc_Lerp_ReturnValue_3, double CallFunc_Lerp_ReturnValue_4, double CallFunc_Lerp_ReturnValue_5, double CallFunc_Lerp_ReturnValue_6, double CallFunc_Lerp_ReturnValue_7, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_2, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_3, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_4, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_5, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_6, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_7, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_8, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_9)
{
	static auto Func = Class->GetFunction("BelongTreatyEventVaultWorld_C", "TransitionBackgroundBackward");

	Params::UBelongTreatyEventVaultWorld_C_TransitionBackgroundBackward_Params Parms;

	Parms.Backward = Backward;
	Parms.PreTransitionOffset = PreTransitionOffset;
	Parms.FXTransitionFade = FXTransitionFade;
	Parms.Mid = Mid;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue_2 = CallFunc_Lerp_ReturnValue_2;
	Parms.CallFunc_Lerp_ReturnValue_3 = CallFunc_Lerp_ReturnValue_3;
	Parms.CallFunc_Lerp_ReturnValue_4 = CallFunc_Lerp_ReturnValue_4;
	Parms.CallFunc_Lerp_ReturnValue_5 = CallFunc_Lerp_ReturnValue_5;
	Parms.CallFunc_Lerp_ReturnValue_6 = CallFunc_Lerp_ReturnValue_6;
	Parms.CallFunc_Lerp_ReturnValue_7 = CallFunc_Lerp_ReturnValue_7;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast = CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_1 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_1;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_2 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_2;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_3 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_3;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_4 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_4;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_5 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_5;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_6 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_6;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_7 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_7;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_8 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_8;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_9 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_9;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BelongTreatyEventVaultWorld.BelongTreatyEventVaultWorld_C.TransitionBackgroundForward
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Forward                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             PreTransitionOffset                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             FXTransitionFade                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    Mid                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_5                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_6                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_7                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_2            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_3            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_4            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_5            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_6            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_7            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_8            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_9            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBelongTreatyEventVaultWorld_C::TransitionBackgroundForward(double Forward, double PreTransitionOffset, double FXTransitionFade, class UMaterialInstanceDynamic* Mid, double CallFunc_Lerp_ReturnValue, double CallFunc_Lerp_ReturnValue_1, double CallFunc_Lerp_ReturnValue_2, double CallFunc_Lerp_ReturnValue_3, double CallFunc_Lerp_ReturnValue_4, double CallFunc_Lerp_ReturnValue_5, double CallFunc_Lerp_ReturnValue_6, double CallFunc_Lerp_ReturnValue_7, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_2, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_3, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_4, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_5, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_6, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_7, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_8, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_9)
{
	static auto Func = Class->GetFunction("BelongTreatyEventVaultWorld_C", "TransitionBackgroundForward");

	Params::UBelongTreatyEventVaultWorld_C_TransitionBackgroundForward_Params Parms;

	Parms.Forward = Forward;
	Parms.PreTransitionOffset = PreTransitionOffset;
	Parms.FXTransitionFade = FXTransitionFade;
	Parms.Mid = Mid;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue_2 = CallFunc_Lerp_ReturnValue_2;
	Parms.CallFunc_Lerp_ReturnValue_3 = CallFunc_Lerp_ReturnValue_3;
	Parms.CallFunc_Lerp_ReturnValue_4 = CallFunc_Lerp_ReturnValue_4;
	Parms.CallFunc_Lerp_ReturnValue_5 = CallFunc_Lerp_ReturnValue_5;
	Parms.CallFunc_Lerp_ReturnValue_6 = CallFunc_Lerp_ReturnValue_6;
	Parms.CallFunc_Lerp_ReturnValue_7 = CallFunc_Lerp_ReturnValue_7;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast = CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_1 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_1;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_2 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_2;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_3 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_3;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_4 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_4;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_5 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_5;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_6 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_6;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_7 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_7;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_8 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_8;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_9 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_9;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BelongTreatyEventVaultWorld.BelongTreatyEventVaultWorld_C.SetupBackgroundMaterial
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  TextureBackground                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// struct FVaultWorldBackgroundData   BackgroundInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UMaterialInstanceDynamic*    Mid                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBelongTreatyEventVaultWorld_C::SetupBackgroundMaterial(class UTexture2D*& TextureBackground, struct FVaultWorldBackgroundData& BackgroundInfo, class UMaterialInstanceDynamic* Mid, class FName Temp_name_Variable, bool CallFunc_IsValid_ReturnValue, class FName Temp_name_Variable_1, bool Temp_bool_Variable, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, bool Temp_bool_Variable_1, class FName K2Node_Select_Default, class FName K2Node_Select_Default_1, class FName Temp_name_Variable_4, class FName Temp_name_Variable_5, bool Temp_bool_Variable_2, class FName K2Node_Select_Default_2)
{
	static auto Func = Class->GetFunction("BelongTreatyEventVaultWorld_C", "SetupBackgroundMaterial");

	Params::UBelongTreatyEventVaultWorld_C_SetupBackgroundMaterial_Params Parms;

	Parms.TextureBackground = TextureBackground;
	Parms.BackgroundInfo = BackgroundInfo;
	Parms.Mid = Mid;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.Temp_name_Variable_3 = Temp_name_Variable_3;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_name_Variable_4 = Temp_name_Variable_4;
	Parms.Temp_name_Variable_5 = Temp_name_Variable_5;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BelongTreatyEventVaultWorld.BelongTreatyEventVaultWorld_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortStaticMeshActor*        K2Node_DynamicCast_AsFort_Static_Mesh_Actor                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBelongTreatyEventVaultWorld_C::UserConstructionScript(class UFortStaticMeshActor* K2Node_DynamicCast_AsFort_Static_Mesh_Actor, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("BelongTreatyEventVaultWorld_C", "UserConstructionScript");

	Params::UBelongTreatyEventVaultWorld_C_UserConstructionScript_Params Parms;

	Parms.K2Node_DynamicCast_AsFort_Static_Mesh_Actor = K2Node_DynamicCast_AsFort_Static_Mesh_Actor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BelongTreatyEventVaultWorld.BelongTreatyEventVaultWorld_C.TransitionForward__FinishedFunc
// (BlueprintEvent)
// Parameters:

void UBelongTreatyEventVaultWorld_C::TransitionForward__FinishedFunc()
{
	static auto Func = Class->GetFunction("BelongTreatyEventVaultWorld_C", "TransitionForward__FinishedFunc");

	Params::UBelongTreatyEventVaultWorld_C_TransitionForward__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BelongTreatyEventVaultWorld.BelongTreatyEventVaultWorld_C.TransitionForward__UpdateFunc
// (BlueprintEvent)
// Parameters:

void UBelongTreatyEventVaultWorld_C::TransitionForward__UpdateFunc()
{
	static auto Func = Class->GetFunction("BelongTreatyEventVaultWorld_C", "TransitionForward__UpdateFunc");

	Params::UBelongTreatyEventVaultWorld_C_TransitionForward__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BelongTreatyEventVaultWorld.BelongTreatyEventVaultWorld_C.TransitionBackward__FinishedFunc
// (BlueprintEvent)
// Parameters:

void UBelongTreatyEventVaultWorld_C::TransitionBackward__FinishedFunc()
{
	static auto Func = Class->GetFunction("BelongTreatyEventVaultWorld_C", "TransitionBackward__FinishedFunc");

	Params::UBelongTreatyEventVaultWorld_C_TransitionBackward__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BelongTreatyEventVaultWorld.BelongTreatyEventVaultWorld_C.TransitionBackward__UpdateFunc
// (BlueprintEvent)
// Parameters:

void UBelongTreatyEventVaultWorld_C::TransitionBackward__UpdateFunc()
{
	static auto Func = Class->GetFunction("BelongTreatyEventVaultWorld_C", "TransitionBackward__UpdateFunc");

	Params::UBelongTreatyEventVaultWorld_C_TransitionBackward__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BelongTreatyEventVaultWorld.BelongTreatyEventVaultWorld_C.Background-Effects__FinishedFunc
// (BlueprintEvent)
// Parameters:

void UBelongTreatyEventVaultWorld_C::Background_Effects__FinishedFunc()
{
	static auto Func = Class->GetFunction("BelongTreatyEventVaultWorld_C", "Background-Effects__FinishedFunc");

	Params::UBelongTreatyEventVaultWorld_C_Background_Effects__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BelongTreatyEventVaultWorld.BelongTreatyEventVaultWorld_C.Background-Effects__UpdateFunc
// (BlueprintEvent)
// Parameters:

void UBelongTreatyEventVaultWorld_C::Background_Effects__UpdateFunc()
{
	static auto Func = Class->GetFunction("BelongTreatyEventVaultWorld_C", "Background-Effects__UpdateFunc");

	Params::UBelongTreatyEventVaultWorld_C_Background_Effects__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BelongTreatyEventVaultWorld.BelongTreatyEventVaultWorld_C.Floor-Visibility__FinishedFunc
// (BlueprintEvent)
// Parameters:

void UBelongTreatyEventVaultWorld_C::Floor_Visibility__FinishedFunc()
{
	static auto Func = Class->GetFunction("BelongTreatyEventVaultWorld_C", "Floor-Visibility__FinishedFunc");

	Params::UBelongTreatyEventVaultWorld_C_Floor_Visibility__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BelongTreatyEventVaultWorld.BelongTreatyEventVaultWorld_C.Floor-Visibility__UpdateFunc
// (BlueprintEvent)
// Parameters:

void UBelongTreatyEventVaultWorld_C::Floor_Visibility__UpdateFunc()
{
	static auto Func = Class->GetFunction("BelongTreatyEventVaultWorld_C", "Floor-Visibility__UpdateFunc");

	Params::UBelongTreatyEventVaultWorld_C_Floor_Visibility__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BelongTreatyEventVaultWorld.BelongTreatyEventVaultWorld_C.ItemDetails__FinishedFunc
// (BlueprintEvent)
// Parameters:

void UBelongTreatyEventVaultWorld_C::ItemDetails__FinishedFunc()
{
	static auto Func = Class->GetFunction("BelongTreatyEventVaultWorld_C", "ItemDetails__FinishedFunc");

	Params::UBelongTreatyEventVaultWorld_C_ItemDetails__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BelongTreatyEventVaultWorld.BelongTreatyEventVaultWorld_C.ItemDetails__UpdateFunc
// (BlueprintEvent)
// Parameters:

void UBelongTreatyEventVaultWorld_C::ItemDetails__UpdateFunc()
{
	static auto Func = Class->GetFunction("BelongTreatyEventVaultWorld_C", "ItemDetails__UpdateFunc");

	Params::UBelongTreatyEventVaultWorld_C_ItemDetails__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BelongTreatyEventVaultWorld.BelongTreatyEventVaultWorld_C.OnTransitionBackground
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bPlayForward                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBackgroundIntensityLevelIntensityTransition                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBelongTreatyEventVaultWorld_C::OnTransitionBackground(bool bPlayForward, enum class EBackgroundIntensityLevel IntensityTransition)
{
	static auto Func = Class->GetFunction("BelongTreatyEventVaultWorld_C", "OnTransitionBackground");

	Params::UBelongTreatyEventVaultWorld_C_OnTransitionBackground_Params Parms;

	Parms.bPlayForward = bPlayForward;
	Parms.IntensityTransition = IntensityTransition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BelongTreatyEventVaultWorld.BelongTreatyEventVaultWorld_C.OnSetupBackground
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class UTexture2D*                  LoadedBackgroundTexture                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVaultWorldBackgroundData   BackgroundInfo                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBelongTreatyEventVaultWorld_C::OnSetupBackground(class UTexture2D* LoadedBackgroundTexture, struct FVaultWorldBackgroundData& BackgroundInfo)
{
	static auto Func = Class->GetFunction("BelongTreatyEventVaultWorld_C", "OnSetupBackground");

	Params::UBelongTreatyEventVaultWorld_C_OnSetupBackground_Params Parms;

	Parms.LoadedBackgroundTexture = LoadedBackgroundTexture;
	Parms.BackgroundInfo = BackgroundInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BelongTreatyEventVaultWorld.BelongTreatyEventVaultWorld_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBelongTreatyEventVaultWorld_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("BelongTreatyEventVaultWorld_C", "ReceiveBeginPlay");

	Params::UBelongTreatyEventVaultWorld_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BelongTreatyEventVaultWorld.BelongTreatyEventVaultWorld_C.OnUpdateDisplay
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bShowFloor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bShowEffects                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBelongTreatyEventVaultWorld_C::OnUpdateDisplay(bool bShowFloor, bool bShowEffects)
{
	static auto Func = Class->GetFunction("BelongTreatyEventVaultWorld_C", "OnUpdateDisplay");

	Params::UBelongTreatyEventVaultWorld_C_OnUpdateDisplay_Params Parms;

	Parms.bShowFloor = bShowFloor;
	Parms.bShowEffects = bShowEffects;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BelongTreatyEventVaultWorld.BelongTreatyEventVaultWorld_C.OnInitialBackgroundTransition
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBelongTreatyEventVaultWorld_C::OnInitialBackgroundTransition()
{
	static auto Func = Class->GetFunction("BelongTreatyEventVaultWorld_C", "OnInitialBackgroundTransition");

	Params::UBelongTreatyEventVaultWorld_C_OnInitialBackgroundTransition_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BelongTreatyEventVaultWorld.BelongTreatyEventVaultWorld_C.OnTransitionItemDetails
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bShowItemDetails                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBelongTreatyEventVaultWorld_C::OnTransitionItemDetails(bool bShowItemDetails)
{
	static auto Func = Class->GetFunction("BelongTreatyEventVaultWorld_C", "OnTransitionItemDetails");

	Params::UBelongTreatyEventVaultWorld_C_OnTransitionItemDetails_Params Parms;

	Parms.bShowItemDetails = bShowItemDetails;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BelongTreatyEventVaultWorld.BelongTreatyEventVaultWorld_C.OnUpdateMaterialIndex
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              MaterialIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBelongTreatyEventVaultWorld_C::OnUpdateMaterialIndex(int32 MaterialIndex)
{
	static auto Func = Class->GetFunction("BelongTreatyEventVaultWorld_C", "OnUpdateMaterialIndex");

	Params::UBelongTreatyEventVaultWorld_C_OnUpdateMaterialIndex_Params Parms;

	Parms.MaterialIndex = MaterialIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BelongTreatyEventVaultWorld.BelongTreatyEventVaultWorld_C.ExecuteUbergraph_BelongTreatyEventVaultWorld
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bPlayForward                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBackgroundIntensityLevelK2Node_Event_IntensityTransition                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Event_LoadedBackgroundTexture                             (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVaultWorldBackgroundData   K2Node_Event_BackgroundInfo                                      (ConstParm)
// bool                               K2Node_Event_bShowFloor                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bShowEffects                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bShowItemDetails                                    (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_MaterialIndex                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_TransitionBackgroundForward_FXTransitionFade_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_TransitionBackgroundForward_FXTransitionFade_ImplicitCast_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_TransitionBackgroundForward_PreTransitionOffset_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_TransitionBackgroundForward_PreTransitionOffset_ImplicitCast_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_TransitionBackgroundForward_Forward_ImplicitCast        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_TransitionBackgroundForward_Forward_ImplicitCast_1      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_TransitionBackgroundBackward_FXTransitionFade_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_TransitionBackgroundBackward_FXTransitionFade_ImplicitCast_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_TransitionBackgroundBackward_PreTransitionOffset_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_TransitionBackgroundBackward_PreTransitionOffset_ImplicitCast_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_TransitionBackgroundBackward_Backward_ImplicitCast      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_TransitionBackgroundBackward_Backward_ImplicitCast_1    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBelongTreatyEventVaultWorld_C::ExecuteUbergraph_BelongTreatyEventVaultWorld(int32 EntryPoint, bool K2Node_Event_bPlayForward, enum class EBackgroundIntensityLevel K2Node_Event_IntensityTransition, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class UTexture2D* K2Node_Event_LoadedBackgroundTexture, const struct FVaultWorldBackgroundData& K2Node_Event_BackgroundInfo, bool K2Node_Event_bShowFloor, bool K2Node_Event_bShowEffects, bool K2Node_Event_bShowItemDetails, bool CallFunc_Not_PreBool_ReturnValue_2, int32 K2Node_Event_MaterialIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_TransitionBackgroundForward_FXTransitionFade_ImplicitCast, double CallFunc_TransitionBackgroundForward_FXTransitionFade_ImplicitCast_1, double CallFunc_TransitionBackgroundForward_PreTransitionOffset_ImplicitCast, double CallFunc_TransitionBackgroundForward_PreTransitionOffset_ImplicitCast_1, double CallFunc_TransitionBackgroundForward_Forward_ImplicitCast, double CallFunc_TransitionBackgroundForward_Forward_ImplicitCast_1, double CallFunc_TransitionBackgroundBackward_FXTransitionFade_ImplicitCast, double CallFunc_TransitionBackgroundBackward_FXTransitionFade_ImplicitCast_1, double CallFunc_TransitionBackgroundBackward_PreTransitionOffset_ImplicitCast, double CallFunc_TransitionBackgroundBackward_PreTransitionOffset_ImplicitCast_1, double CallFunc_TransitionBackgroundBackward_Backward_ImplicitCast, double CallFunc_TransitionBackgroundBackward_Backward_ImplicitCast_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1)
{
	static auto Func = Class->GetFunction("BelongTreatyEventVaultWorld_C", "ExecuteUbergraph_BelongTreatyEventVaultWorld");

	Params::UBelongTreatyEventVaultWorld_C_ExecuteUbergraph_BelongTreatyEventVaultWorld_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bPlayForward = K2Node_Event_bPlayForward;
	Parms.K2Node_Event_IntensityTransition = K2Node_Event_IntensityTransition;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.K2Node_Event_LoadedBackgroundTexture = K2Node_Event_LoadedBackgroundTexture;
	Parms.K2Node_Event_BackgroundInfo = K2Node_Event_BackgroundInfo;
	Parms.K2Node_Event_bShowFloor = K2Node_Event_bShowFloor;
	Parms.K2Node_Event_bShowEffects = K2Node_Event_bShowEffects;
	Parms.K2Node_Event_bShowItemDetails = K2Node_Event_bShowItemDetails;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.K2Node_Event_MaterialIndex = K2Node_Event_MaterialIndex;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_TransitionBackgroundForward_FXTransitionFade_ImplicitCast = CallFunc_TransitionBackgroundForward_FXTransitionFade_ImplicitCast;
	Parms.CallFunc_TransitionBackgroundForward_FXTransitionFade_ImplicitCast_1 = CallFunc_TransitionBackgroundForward_FXTransitionFade_ImplicitCast_1;
	Parms.CallFunc_TransitionBackgroundForward_PreTransitionOffset_ImplicitCast = CallFunc_TransitionBackgroundForward_PreTransitionOffset_ImplicitCast;
	Parms.CallFunc_TransitionBackgroundForward_PreTransitionOffset_ImplicitCast_1 = CallFunc_TransitionBackgroundForward_PreTransitionOffset_ImplicitCast_1;
	Parms.CallFunc_TransitionBackgroundForward_Forward_ImplicitCast = CallFunc_TransitionBackgroundForward_Forward_ImplicitCast;
	Parms.CallFunc_TransitionBackgroundForward_Forward_ImplicitCast_1 = CallFunc_TransitionBackgroundForward_Forward_ImplicitCast_1;
	Parms.CallFunc_TransitionBackgroundBackward_FXTransitionFade_ImplicitCast = CallFunc_TransitionBackgroundBackward_FXTransitionFade_ImplicitCast;
	Parms.CallFunc_TransitionBackgroundBackward_FXTransitionFade_ImplicitCast_1 = CallFunc_TransitionBackgroundBackward_FXTransitionFade_ImplicitCast_1;
	Parms.CallFunc_TransitionBackgroundBackward_PreTransitionOffset_ImplicitCast = CallFunc_TransitionBackgroundBackward_PreTransitionOffset_ImplicitCast;
	Parms.CallFunc_TransitionBackgroundBackward_PreTransitionOffset_ImplicitCast_1 = CallFunc_TransitionBackgroundBackward_PreTransitionOffset_ImplicitCast_1;
	Parms.CallFunc_TransitionBackgroundBackward_Backward_ImplicitCast = CallFunc_TransitionBackgroundBackward_Backward_ImplicitCast;
	Parms.CallFunc_TransitionBackgroundBackward_Backward_ImplicitCast_1 = CallFunc_TransitionBackgroundBackward_Backward_ImplicitCast_1;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast = CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_1 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
