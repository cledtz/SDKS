#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPFL_General.BPFL_General_C
// (None)

class UClass* UBPFL_General_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPFL_General_C");

	return Clss;
}


// BPFL_General_C BPFL_General.Default__BPFL_General_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPFL_General_C* UBPFL_General_C::GetDefaultObj()
{
	static class UBPFL_General_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPFL_General_C*>(UBPFL_General_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPFL_General.BPFL_General_C.GetRareColor
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EItemRareType           Rare                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                NewParam                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemRareType           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_6                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_General_C::GetRareColor(enum class EItemRareType Rare, class UObject* __WorldContext, struct FLinearColor* NewParam, enum class EItemRareType Temp_byte_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, const struct FLinearColor& Temp_struct_Variable_4, const struct FLinearColor& Temp_struct_Variable_5, const struct FLinearColor& Temp_struct_Variable_6, const struct FLinearColor& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_General_C", "GetRareColor");

	Params::UBPFL_General_C_GetRareColor_Params Parms{};

	Parms.Rare = Rare;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.Temp_struct_Variable_5 = Temp_struct_Variable_5;
	Parms.Temp_struct_Variable_6 = Temp_struct_Variable_6;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;

}


// Function BPFL_General.BPFL_General_C.GetDefaultModuleClassByType
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EGunModuleType          ModuleType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      DefaultModuleClass                                               (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EGunModuleType          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable_1                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable_2                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable_3                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable_4                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable_5                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable_6                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable_7                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBPFL_General_C::GetDefaultModuleClassByType(enum class EGunModuleType ModuleType, class UObject* __WorldContext, class UClass** DefaultModuleClass, enum class EGunModuleType Temp_byte_Variable, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable_1, class UClass* Temp_class_Variable_2, class UClass* Temp_class_Variable_3, class UClass* Temp_class_Variable_4, class UClass* Temp_class_Variable_5, class UClass* Temp_class_Variable_6, class UClass* Temp_class_Variable_7, class UClass* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_General_C", "GetDefaultModuleClassByType");

	Params::UBPFL_General_C_GetDefaultModuleClassByType_Params Parms{};

	Parms.ModuleType = ModuleType;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.Temp_class_Variable_1 = Temp_class_Variable_1;
	Parms.Temp_class_Variable_2 = Temp_class_Variable_2;
	Parms.Temp_class_Variable_3 = Temp_class_Variable_3;
	Parms.Temp_class_Variable_4 = Temp_class_Variable_4;
	Parms.Temp_class_Variable_5 = Temp_class_Variable_5;
	Parms.Temp_class_Variable_6 = Temp_class_Variable_6;
	Parms.Temp_class_Variable_7 = Temp_class_Variable_7;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (DefaultModuleClass != nullptr)
		*DefaultModuleClass = Parms.DefaultModuleClass;

}


// Function BPFL_General.BPFL_General_C.GetActorRelativeLocation
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UActor*                      ParentActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      ChildActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_LessLess_VectorRotator_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector UBPFL_General_C::GetActorRelativeLocation(class UActor* ParentActor, class UActor* ChildActor, class UObject* __WorldContext, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_LessLess_VectorRotator_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_General_C", "GetActorRelativeLocation");

	Params::UBPFL_General_C_GetActorRelativeLocation_Params Parms{};

	Parms.ParentActor = ParentActor;
	Parms.ChildActor = ChildActor;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_LessLess_VectorRotator_ReturnValue = CallFunc_LessLess_VectorRotator_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPFL_General.BPFL_General_C.GetGameInstance
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_GameInstance_C*       MyGameIntance                                                    (Parm, OutParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_GameInstance_C*       K2Node_DynamicCast_AsBP_PG_Game_Instance                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_General_C::GetGameInstance(class UObject* __WorldContext, class UBP_PG_GameInstance_C** MyGameIntance, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_PG_GameInstance_C* K2Node_DynamicCast_AsBP_PG_Game_Instance, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_General_C", "GetGameInstance");

	Params::UBPFL_General_C_GetGameInstance_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_PG_Game_Instance = K2Node_DynamicCast_AsBP_PG_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (MyGameIntance != nullptr)
		*MyGameIntance = Parms.MyGameIntance;

}


// Function BPFL_General.BPFL_General_C.GetGameModeBP_Game
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_GameMode_Game_C*      MyGameMode                                                       (Parm, OutParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_GameMode_Game_C*      K2Node_DynamicCast_AsBP_PG_Game_Mode_Game                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_General_C::GetGameModeBP_Game(class UObject* __WorldContext, class UBP_PG_GameMode_Game_C** MyGameMode, class UGameModeBase* CallFunc_GetGameMode_ReturnValue, class UBP_PG_GameMode_Game_C* K2Node_DynamicCast_AsBP_PG_Game_Mode_Game, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_General_C", "GetGameModeBP_Game");

	Params::UBPFL_General_C_GetGameModeBP_Game_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_PG_Game_Mode_Game = K2Node_DynamicCast_AsBP_PG_Game_Mode_Game;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (MyGameMode != nullptr)
		*MyGameMode = Parms.MyGameMode;

}


// Function BPFL_General.BPFL_General_C.GetGameStateBP
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_GameState_Game_C*     MyGameState                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_GameState_Game_C*     K2Node_DynamicCast_AsBP_PG_Game_State_Game                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_General_C::GetGameStateBP(class UObject* __WorldContext, class UBP_PG_GameState_Game_C** MyGameState, class UGameStateBase* CallFunc_GetGameState_ReturnValue, class UBP_PG_GameState_Game_C* K2Node_DynamicCast_AsBP_PG_Game_State_Game, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_General_C", "GetGameStateBP");

	Params::UBPFL_General_C_GetGameStateBP_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_PG_Game_State_Game = K2Node_DynamicCast_AsBP_PG_Game_State_Game;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (MyGameState != nullptr)
		*MyGameState = Parms.MyGameState;

}

}


