#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MPItemShop_VaultWorld.MPItemShop_VaultWorld_C
// (Actor)

class UClass* UMPItemShop_VaultWorld_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MPItemShop_VaultWorld_C");

	return Clss;
}


// MPItemShop_VaultWorld_C MPItemShop_VaultWorld.Default__MPItemShop_VaultWorld_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMPItemShop_VaultWorld_C* UMPItemShop_VaultWorld_C::GetDefaultObj()
{
	static class UMPItemShop_VaultWorld_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMPItemShop_VaultWorld_C*>(UMPItemShop_VaultWorld_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MPItemShop_VaultWorld.MPItemShop_VaultWorld_C.StopTransitions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMPItemShop_VaultWorld_C::StopTransitions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MPItemShop_VaultWorld_C", "StopTransitions");

	Params::UMPItemShop_VaultWorld_C_StopTransitions_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function MPItemShop_VaultWorld.MPItemShop_VaultWorld_C.HandleMaterialBackground
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*          MaterialBackground                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UMPItemShop_VaultWorld_C::HandleMaterialBackground(class UMaterialInterface* MaterialBackground, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MPItemShop_VaultWorld_C", "HandleMaterialBackground");

	Params::UMPItemShop_VaultWorld_C_HandleMaterialBackground_Params Parms{};

	Parms.MaterialBackground = MaterialBackground;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MPItemShop_VaultWorld.MPItemShop_VaultWorld_C.HandleTextureBackground
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  TextureBackground                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UMPItemShop_VaultWorld_C::HandleTextureBackground(class UTexture2D*& TextureBackground)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MPItemShop_VaultWorld_C", "HandleTextureBackground");

	Params::UMPItemShop_VaultWorld_C_HandleTextureBackground_Params Parms{};

	Parms.TextureBackground = TextureBackground;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MPItemShop_VaultWorld.MPItemShop_VaultWorld_C.GetBackground
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortStaticMeshActor*        K2Node_DynamicCast_AsFort_Static_Mesh_Actor                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMPItemShop_VaultWorld_C::GetBackground(class UFortStaticMeshActor* K2Node_DynamicCast_AsFort_Static_Mesh_Actor, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MPItemShop_VaultWorld_C", "GetBackground");

	Params::UMPItemShop_VaultWorld_C_GetBackground_Params Parms{};

	Parms.K2Node_DynamicCast_AsFort_Static_Mesh_Actor = K2Node_DynamicCast_AsFort_Static_Mesh_Actor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MPItemShop_VaultWorld.MPItemShop_VaultWorld_C.AssignBackgroundMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*          SourceMaterial                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UMPItemShop_VaultWorld_C::AssignBackgroundMaterial(class UMaterialInterface* SourceMaterial, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MPItemShop_VaultWorld_C", "AssignBackgroundMaterial");

	Params::UMPItemShop_VaultWorld_C_AssignBackgroundMaterial_Params Parms{};

	Parms.SourceMaterial = SourceMaterial;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MPItemShop_VaultWorld.MPItemShop_VaultWorld_C.AssignFloorMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*          SourceMaterial                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UMPItemShop_VaultWorld_C::AssignFloorMaterial(class UMaterialInterface* SourceMaterial, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MPItemShop_VaultWorld_C", "AssignFloorMaterial");

	Params::UMPItemShop_VaultWorld_C_AssignFloorMaterial_Params Parms{};

	Parms.SourceMaterial = SourceMaterial;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MPItemShop_VaultWorld.MPItemShop_VaultWorld_C.TransitionBackgroundBackward
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Backward                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             FXTransitionFade                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    Mid                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMPItemShop_VaultWorld_C::TransitionBackgroundBackward(double Backward, double FXTransitionFade, class UMaterialInstanceDynamic* Mid, double CallFunc_Lerp_ReturnValue, double CallFunc_Lerp_ReturnValue_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MPItemShop_VaultWorld_C", "TransitionBackgroundBackward");

	Params::UMPItemShop_VaultWorld_C_TransitionBackgroundBackward_Params Parms{};

	Parms.Backward = Backward;
	Parms.FXTransitionFade = FXTransitionFade;
	Parms.Mid = Mid;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast = CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_1 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MPItemShop_VaultWorld.MPItemShop_VaultWorld_C.TransitionBackgroundForward
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Forward                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             FXTransitionFade                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    Mid                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMPItemShop_VaultWorld_C::TransitionBackgroundForward(double Forward, double FXTransitionFade, class UMaterialInstanceDynamic* Mid, double CallFunc_Lerp_ReturnValue, double CallFunc_Lerp_ReturnValue_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MPItemShop_VaultWorld_C", "TransitionBackgroundForward");

	Params::UMPItemShop_VaultWorld_C_TransitionBackgroundForward_Params Parms{};

	Parms.Forward = Forward;
	Parms.FXTransitionFade = FXTransitionFade;
	Parms.Mid = Mid;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast = CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_1 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MPItemShop_VaultWorld.MPItemShop_VaultWorld_C.SetupBackgroundMaterial
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  TextureBackground                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    Mid                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsFloor                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FirstTimeSetup                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMPItemShop_VaultWorld_C::SetupBackgroundMaterial(class UTexture2D*& TextureBackground, class UMaterialInstanceDynamic* Mid, bool IsFloor, bool FirstTimeSetup, bool Temp_bool_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, bool Temp_bool_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, bool Temp_bool_Variable_2, class FName Temp_name_Variable_4, class FName Temp_name_Variable_5, bool Temp_bool_Variable_3, float Temp_real_Variable, float Temp_real_Variable_1, class FName Temp_name_Variable_6, float K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue, class FName K2Node_Select_Default_1, bool CallFunc_IsValid_ReturnValue, class FName Temp_name_Variable_7, class FName K2Node_Select_Default_2, class FName K2Node_Select_Default_3, bool Temp_bool_Variable_4, class FName K2Node_Select_Default_4, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MPItemShop_VaultWorld_C", "SetupBackgroundMaterial");

	Params::UMPItemShop_VaultWorld_C_SetupBackgroundMaterial_Params Parms{};

	Parms.TextureBackground = TextureBackground;
	Parms.Mid = Mid;
	Parms.IsFloor = IsFloor;
	Parms.FirstTimeSetup = FirstTimeSetup;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.Temp_name_Variable_3 = Temp_name_Variable_3;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_name_Variable_4 = Temp_name_Variable_4;
	Parms.Temp_name_Variable_5 = Temp_name_Variable_5;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.Temp_name_Variable_6 = Temp_name_Variable_6;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_name_Variable_7 = Temp_name_Variable_7;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MPItemShop_VaultWorld.MPItemShop_VaultWorld_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMPItemShop_VaultWorld_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MPItemShop_VaultWorld_C", "UserConstructionScript");

	Params::UMPItemShop_VaultWorld_C_UserConstructionScript_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function MPItemShop_VaultWorld.MPItemShop_VaultWorld_C.TransitionForward__FinishedFunc
// (BlueprintEvent)
// Parameters:

void UMPItemShop_VaultWorld_C::TransitionForward__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MPItemShop_VaultWorld_C", "TransitionForward__FinishedFunc");

	Params::UMPItemShop_VaultWorld_C_TransitionForward__FinishedFunc_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function MPItemShop_VaultWorld.MPItemShop_VaultWorld_C.TransitionForward__UpdateFunc
// (BlueprintEvent)
// Parameters:

void UMPItemShop_VaultWorld_C::TransitionForward__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MPItemShop_VaultWorld_C", "TransitionForward__UpdateFunc");

	Params::UMPItemShop_VaultWorld_C_TransitionForward__UpdateFunc_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function MPItemShop_VaultWorld.MPItemShop_VaultWorld_C.FloorVisibility__FinishedFunc
// (BlueprintEvent)
// Parameters:

void UMPItemShop_VaultWorld_C::FloorVisibility__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MPItemShop_VaultWorld_C", "FloorVisibility__FinishedFunc");

	Params::UMPItemShop_VaultWorld_C_FloorVisibility__FinishedFunc_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function MPItemShop_VaultWorld.MPItemShop_VaultWorld_C.FloorVisibility__UpdateFunc
// (BlueprintEvent)
// Parameters:

void UMPItemShop_VaultWorld_C::FloorVisibility__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MPItemShop_VaultWorld_C", "FloorVisibility__UpdateFunc");

	Params::UMPItemShop_VaultWorld_C_FloorVisibility__UpdateFunc_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function MPItemShop_VaultWorld.MPItemShop_VaultWorld_C.OnTransitionBackground
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bPlayForward                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBackgroundIntensityLevelIntensityTransition                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMPItemShop_VaultWorld_C::OnTransitionBackground(bool bPlayForward, enum class EBackgroundIntensityLevel IntensityTransition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MPItemShop_VaultWorld_C", "OnTransitionBackground");

	Params::UMPItemShop_VaultWorld_C_OnTransitionBackground_Params Parms{};

	Parms.bPlayForward = bPlayForward;
	Parms.IntensityTransition = IntensityTransition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MPItemShop_VaultWorld.MPItemShop_VaultWorld_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMPItemShop_VaultWorld_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MPItemShop_VaultWorld_C", "ReceiveBeginPlay");

	Params::UMPItemShop_VaultWorld_C_ReceiveBeginPlay_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function MPItemShop_VaultWorld.MPItemShop_VaultWorld_C.OnInitialBackgroundTransition
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMPItemShop_VaultWorld_C::OnInitialBackgroundTransition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MPItemShop_VaultWorld_C", "OnInitialBackgroundTransition");

	Params::UMPItemShop_VaultWorld_C_OnInitialBackgroundTransition_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function MPItemShop_VaultWorld.MPItemShop_VaultWorld_C.OnSetupTextureBackground
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class UTexture2D*                  LoadedBackgroundTexture                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVaultWorldBackgroundData   BackgroundInfo                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMPItemShop_VaultWorld_C::OnSetupTextureBackground(class UTexture2D* LoadedBackgroundTexture, struct FVaultWorldBackgroundData& BackgroundInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MPItemShop_VaultWorld_C", "OnSetupTextureBackground");

	Params::UMPItemShop_VaultWorld_C_OnSetupTextureBackground_Params Parms{};

	Parms.LoadedBackgroundTexture = LoadedBackgroundTexture;
	Parms.BackgroundInfo = BackgroundInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MPItemShop_VaultWorld.MPItemShop_VaultWorld_C.OnSetupMaterialBackground
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class UMaterialInterface*          LoadedBackgroundMaterial                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVaultWorldBackgroundData   BackgroundInfo                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMPItemShop_VaultWorld_C::OnSetupMaterialBackground(class UMaterialInterface* LoadedBackgroundMaterial, struct FVaultWorldBackgroundData& BackgroundInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MPItemShop_VaultWorld_C", "OnSetupMaterialBackground");

	Params::UMPItemShop_VaultWorld_C_OnSetupMaterialBackground_Params Parms{};

	Parms.LoadedBackgroundMaterial = LoadedBackgroundMaterial;
	Parms.BackgroundInfo = BackgroundInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MPItemShop_VaultWorld.MPItemShop_VaultWorld_C.OnUpdateDisplay
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bShowFloor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bShowEffects                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMPItemShop_VaultWorld_C::OnUpdateDisplay(bool bShowFloor, bool bShowEffects)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MPItemShop_VaultWorld_C", "OnUpdateDisplay");

	Params::UMPItemShop_VaultWorld_C_OnUpdateDisplay_Params Parms{};

	Parms.bShowFloor = bShowFloor;
	Parms.bShowEffects = bShowEffects;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MPItemShop_VaultWorld.MPItemShop_VaultWorld_C.ExecuteUbergraph_MPItemShop_VaultWorld
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bPlayForward                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBackgroundIntensityLevelK2Node_Event_IntensityTransition                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Event_LoadedBackgroundTexture                             (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVaultWorldBackgroundData   K2Node_Event_BackgroundInfo_1                                    (ConstParm)
// class UMaterialInterface*          K2Node_Event_LoadedBackgroundMaterial                            (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVaultWorldBackgroundData   K2Node_Event_BackgroundInfo                                      (ConstParm)
// bool                               K2Node_Event_bShowFloor                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bShowEffects                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_TransitionBackgroundForward_FXTransitionFade_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_TransitionBackgroundForward_FXTransitionFade_ImplicitCast_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_TransitionBackgroundForward_Forward_ImplicitCast        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_TransitionBackgroundForward_Forward_ImplicitCast_1      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMPItemShop_VaultWorld_C::ExecuteUbergraph_MPItemShop_VaultWorld(int32 EntryPoint, double CallFunc_Lerp_ReturnValue, bool K2Node_Event_bPlayForward, enum class EBackgroundIntensityLevel K2Node_Event_IntensityTransition, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class UTexture2D* K2Node_Event_LoadedBackgroundTexture, const struct FVaultWorldBackgroundData& K2Node_Event_BackgroundInfo_1, class UMaterialInterface* K2Node_Event_LoadedBackgroundMaterial, const struct FVaultWorldBackgroundData& K2Node_Event_BackgroundInfo, bool K2Node_Event_bShowFloor, bool K2Node_Event_bShowEffects, double CallFunc_TransitionBackgroundForward_FXTransitionFade_ImplicitCast, double CallFunc_TransitionBackgroundForward_FXTransitionFade_ImplicitCast_1, double CallFunc_TransitionBackgroundForward_Forward_ImplicitCast, double CallFunc_TransitionBackgroundForward_Forward_ImplicitCast_1, double CallFunc_Lerp_Alpha_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MPItemShop_VaultWorld_C", "ExecuteUbergraph_MPItemShop_VaultWorld");

	Params::UMPItemShop_VaultWorld_C_ExecuteUbergraph_MPItemShop_VaultWorld_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.K2Node_Event_bPlayForward = K2Node_Event_bPlayForward;
	Parms.K2Node_Event_IntensityTransition = K2Node_Event_IntensityTransition;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.K2Node_Event_LoadedBackgroundTexture = K2Node_Event_LoadedBackgroundTexture;
	Parms.K2Node_Event_BackgroundInfo_1 = K2Node_Event_BackgroundInfo_1;
	Parms.K2Node_Event_LoadedBackgroundMaterial = K2Node_Event_LoadedBackgroundMaterial;
	Parms.K2Node_Event_BackgroundInfo = K2Node_Event_BackgroundInfo;
	Parms.K2Node_Event_bShowFloor = K2Node_Event_bShowFloor;
	Parms.K2Node_Event_bShowEffects = K2Node_Event_bShowEffects;
	Parms.CallFunc_TransitionBackgroundForward_FXTransitionFade_ImplicitCast = CallFunc_TransitionBackgroundForward_FXTransitionFade_ImplicitCast;
	Parms.CallFunc_TransitionBackgroundForward_FXTransitionFade_ImplicitCast_1 = CallFunc_TransitionBackgroundForward_FXTransitionFade_ImplicitCast_1;
	Parms.CallFunc_TransitionBackgroundForward_Forward_ImplicitCast = CallFunc_TransitionBackgroundForward_Forward_ImplicitCast;
	Parms.CallFunc_TransitionBackgroundForward_Forward_ImplicitCast_1 = CallFunc_TransitionBackgroundForward_Forward_ImplicitCast_1;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast = CallFunc_Lerp_Alpha_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast = CallFunc_SetScalarParameterValue_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


