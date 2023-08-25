#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NPC_Pawn_Parent.NPC_Pawn_Parent_C
// (Actor, Pawn)

class UClass* UNPC_Pawn_Parent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NPC_Pawn_Parent_C");

	return Clss;
}


// NPC_Pawn_Parent_C NPC_Pawn_Parent.Default__NPC_Pawn_Parent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNPC_Pawn_Parent_C* UNPC_Pawn_Parent_C::GetDefaultObj()
{
	static class UNPC_Pawn_Parent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNPC_Pawn_Parent_C*>(UNPC_Pawn_Parent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.Orphaned
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsOrphaned                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPawn*                   AttachedPawn                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::Orphaned(bool* IsOrphaned, class UFortPawn** AttachedPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "Orphaned");

	Params::UNPC_Pawn_Parent_C_Orphaned_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsOrphaned != nullptr)
		*IsOrphaned = Parms.IsOrphaned;

	if (AttachedPawn != nullptr)
		*AttachedPawn = Parms.AttachedPawn;

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.RemoveLibraryCollection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundLibrarySubsystem*      CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumGameplayTagsInContainer_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::RemoveLibraryCollection(class USoundLibrarySubsystem* CallFunc_GetWorldSubsystem_ReturnValue, int32 CallFunc_GetNumGameplayTagsInContainer_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "RemoveLibraryCollection");

	Params::UNPC_Pawn_Parent_C_RemoveLibraryCollection_Params Parms{};

	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_GetNumGameplayTagsInContainer_ReturnValue = CallFunc_GetNumGameplayTagsInContainer_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.Check Tag
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer       Tag_Container                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ShouldDefault                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumGameplayTagsInContainer_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::Check_Tag(const struct FGameplayTagContainer& Tag_Container, bool* ShouldDefault, int32 CallFunc_GetNumGameplayTagsInContainer_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "Check Tag");

	Params::UNPC_Pawn_Parent_C_Check_Tag_Params Parms{};

	Parms.Tag_Container = Tag_Container;
	Parms.CallFunc_GetNumGameplayTagsInContainer_ReturnValue = CallFunc_GetNumGameplayTagsInContainer_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ShouldDefault != nullptr)
		*ShouldDefault = Parms.ShouldDefault;

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.UpdateSoundLibraryCollection
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AddLibraries                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ValidLibraries                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayTagContainer_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Check_Tag_ShouldDefault                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Check_Tag_ShouldDefault_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayTagContainer_ReturnValue_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayTagContainer_ReturnValue_2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumGameplayTagsInContainer_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundLibrarySubsystem*      CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_NPC_AlertLevel     CallFunc_NPC_GetAlertLevelInfo_AlertLevel                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_NPC_GetAlertLevelInfo_AlertLevelTag                     (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NPC_GetAlertLevelInfo_ValidDataFound                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::UpdateSoundLibraryCollection(bool AddLibraries, bool* ValidLibraries, bool CallFunc_EqualEqual_GameplayTagContainer_ReturnValue, bool CallFunc_Check_Tag_ShouldDefault, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Check_Tag_ShouldDefault_1, bool CallFunc_EqualEqual_GameplayTagContainer_ReturnValue_1, bool CallFunc_EqualEqual_GameplayTagContainer_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_1, int32 CallFunc_GetNumGameplayTagsInContainer_ReturnValue, class USoundLibrarySubsystem* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, enum class Enum_NPC_AlertLevel CallFunc_NPC_GetAlertLevelInfo_AlertLevel, const struct FGameplayTag& CallFunc_NPC_GetAlertLevelInfo_AlertLevelTag, bool CallFunc_NPC_GetAlertLevelInfo_ValidDataFound, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "UpdateSoundLibraryCollection");

	Params::UNPC_Pawn_Parent_C_UpdateSoundLibraryCollection_Params Parms{};

	Parms.AddLibraries = AddLibraries;
	Parms.CallFunc_EqualEqual_GameplayTagContainer_ReturnValue = CallFunc_EqualEqual_GameplayTagContainer_ReturnValue;
	Parms.CallFunc_Check_Tag_ShouldDefault = CallFunc_Check_Tag_ShouldDefault;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Check_Tag_ShouldDefault_1 = CallFunc_Check_Tag_ShouldDefault_1;
	Parms.CallFunc_EqualEqual_GameplayTagContainer_ReturnValue_1 = CallFunc_EqualEqual_GameplayTagContainer_ReturnValue_1;
	Parms.CallFunc_EqualEqual_GameplayTagContainer_ReturnValue_2 = CallFunc_EqualEqual_GameplayTagContainer_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_GetNumGameplayTagsInContainer_ReturnValue = CallFunc_GetNumGameplayTagsInContainer_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_NPC_GetAlertLevelInfo_AlertLevel = CallFunc_NPC_GetAlertLevelInfo_AlertLevel;
	Parms.CallFunc_NPC_GetAlertLevelInfo_AlertLevelTag = CallFunc_NPC_GetAlertLevelInfo_AlertLevelTag;
	Parms.CallFunc_NPC_GetAlertLevelInfo_ValidDataFound = CallFunc_NPC_GetAlertLevelInfo_ValidDataFound;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (ValidLibraries != nullptr)
		*ValidLibraries = Parms.ValidLibraries;

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.TryShowHealthBar
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNPCStatusWidget_C*          K2Node_DynamicCast_AsNPCStatus_Widget                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortPlayerController*>CallFunc_GetLocalFortPlayerControllers_ReturnValue               (ReferenceParm)
// bool                               CallFunc_NPC_GetScalableFloatHotfixValue_AsBool                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerController*       CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetDistanceBetweenActors_Distance                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxHealth_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetHealth_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_B_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::TryShowHealthBar(bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UNPCStatusWidget_C* K2Node_DynamicCast_AsNPCStatus_Widget, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue, bool CallFunc_NPC_GetScalableFloatHotfixValue_AsBool, int32 CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded, double CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat, class UFortPlayerController* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UPawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, double CallFunc_GetDistanceBetweenActors_Distance, float CallFunc_GetMaxHealth_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, float CallFunc_GetHealth_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "TryShowHealthBar");

	Params::UNPC_Pawn_Parent_C_TryShowHealthBar_Params Parms{};

	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue = CallFunc_GetUserWidgetObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsNPCStatus_Widget = K2Node_DynamicCast_AsNPCStatus_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetLocalFortPlayerControllers_ReturnValue = CallFunc_GetLocalFortPlayerControllers_ReturnValue;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsBool = CallFunc_NPC_GetScalableFloatHotfixValue_AsBool;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded = CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat = CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_GetDistanceBetweenActors_Distance = CallFunc_GetDistanceBetweenActors_Distance;
	Parms.CallFunc_GetMaxHealth_ReturnValue = CallFunc_GetMaxHealth_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetHealth_ReturnValue = CallFunc_GetHealth_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_Divide_DoubleDouble_B_ImplicitCast = CallFunc_Divide_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast = CallFunc_Divide_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnRep_NPC Death Time
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::OnRep_NPC_Death_Time(bool CallFunc_IsDedicatedServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "OnRep_NPC Death Time");

	Params::UNPC_Pawn_Parent_C_OnRep_NPC_Death_Time_Params Parms{};

	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.PlayStateChangeAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_NPC_AlertLevel     Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::PlayStateChangeAudio(enum class Enum_NPC_AlertLevel Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "PlayStateChangeAudio");

	Params::UNPC_Pawn_Parent_C_PlayStateChangeAudio_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.IsConverted
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsConverted                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPawnComponent_Convert*  CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             CallFunc_GetConverterPawn_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::IsConverted(bool* IsConverted, class UFortPawnComponent_Convert* CallFunc_GetComponentByClass_ReturnValue, class UFortPlayerPawn* CallFunc_GetConverterPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "IsConverted");

	Params::UNPC_Pawn_Parent_C_IsConverted_Params Parms{};

	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetConverterPawn_ReturnValue = CallFunc_GetConverterPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (IsConverted != nullptr)
		*IsConverted = Parms.IsConverted;

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC GhostCollisionSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NoCollisionForRanged                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               NoCollisionForMelee                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               NoCollisionForProjectiles                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               OnlyOverlapCollisionForPawns                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::NPC_GhostCollisionSettings(bool NoCollisionForRanged, bool NoCollisionForMelee, bool NoCollisionForProjectiles, bool OnlyOverlapCollisionForPawns, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_9)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC GhostCollisionSettings");

	Params::UNPC_Pawn_Parent_C_NPC_GhostCollisionSettings_Params Parms{};

	Parms.NoCollisionForRanged = NoCollisionForRanged;
	Parms.NoCollisionForMelee = NoCollisionForMelee;
	Parms.NoCollisionForProjectiles = NoCollisionForProjectiles;
	Parms.OnlyOverlapCollisionForPawns = OnlyOverlapCollisionForPawns;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.CanUpdateSoundLib
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class USoundLibrary*>       TargetArray                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundLibrary*               CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundLibrary*               CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UNPC_Pawn_Parent_C::CanUpdateSoundLib(TArray<class USoundLibrary*>& TargetArray, class USoundLibrary* CallFunc_Array_Get_Item, class USoundLibrary* CallFunc_Array_Get_Item_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1, bool CallFunc_Array_IsNotEmpty_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "CanUpdateSoundLib");

	Params::UNPC_Pawn_Parent_C_CanUpdateSoundLib_Params Parms{};

	Parms.TargetArray = TargetArray;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue_1 = CallFunc_NotEqual_ObjectObject_ReturnValue_1;
	Parms.CallFunc_Array_IsNotEmpty_ReturnValue = CallFunc_Array_IsNotEmpty_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.PlayAdditiveHitReacts
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Hit_Direction                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Anim_Montage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::PlayAdditiveHitReacts(struct FVector& Hit_Direction, class UAnimMontage* Anim_Montage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "PlayAdditiveHitReacts");

	Params::UNPC_Pawn_Parent_C_PlayAdditiveHitReacts_Params Parms{};

	Parms.Hit_Direction = Hit_Direction;
	Parms.Anim_Montage = Anim_Montage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC DamageRemovesIdlePhaseTagGE
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPC_Pawn_Parent_C::NPC_DamageRemovesIdlePhaseTagGE()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC DamageRemovesIdlePhaseTagGE");

	Params::UNPC_Pawn_Parent_C_NPC_DamageRemovesIdlePhaseTagGE_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.GetSoundFoleyLibrary
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundLibrary*               CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundLibrary*               CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundLibrarySubsystem*      CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundLibrarySubsystem*      CallFunc_GetWorldSubsystem_ReturnValue_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundLibrary*               CallFunc_Array_Get_Item_2                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundLibrarySubsystem*      CallFunc_GetWorldSubsystem_ReturnValue_2                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundLibrary*               CallFunc_Array_Get_Item_3                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::GetSoundFoleyLibrary(class USoundLibrary* CallFunc_Array_Get_Item, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class USoundLibrary* CallFunc_Array_Get_Item_1, class USoundLibrarySubsystem* CallFunc_GetWorldSubsystem_ReturnValue, class USoundLibrarySubsystem* CallFunc_GetWorldSubsystem_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class USoundLibrary* CallFunc_Array_Get_Item_2, class USoundLibrarySubsystem* CallFunc_GetWorldSubsystem_ReturnValue_2, class USoundLibrary* CallFunc_Array_Get_Item_3, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "GetSoundFoleyLibrary");

	Params::UNPC_Pawn_Parent_C_GetSoundFoleyLibrary_Params Parms{};

	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_1 = CallFunc_GetWorldSubsystem_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_2 = CallFunc_GetWorldSubsystem_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue_1 = CallFunc_NotEqual_ObjectObject_ReturnValue_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC CanBeInteractedWith
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanInteract                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::NPC_CanBeInteractedWith(bool* CanInteract)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC CanBeInteractedWith");

	Params::UNPC_Pawn_Parent_C_NPC_CanBeInteractedWith_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CanInteract != nullptr)
		*CanInteract = Parms.CanInteract;

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC CheckForDespawnIfStaleToPlayers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPlayerPawn*             ClosestFortPlayerPawn                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NPC_GetScalableFloatHotfixValue_AsBool                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetDistanceBetweenActors_Distance                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::NPC_CheckForDespawnIfStaleToPlayers(class UFortPlayerPawn* ClosestFortPlayerPawn, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NPC_GetScalableFloatHotfixValue_AsBool, int32 CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded, double CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_1, int32 CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_1, double CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_1, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_3, double CallFunc_GetDistanceBetweenActors_Distance, bool CallFunc_Greater_DoubleDouble_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC CheckForDespawnIfStaleToPlayers");

	Params::UNPC_Pawn_Parent_C_NPC_CheckForDespawnIfStaleToPlayers_Params Parms{};

	Parms.ClosestFortPlayerPawn = ClosestFortPlayerPawn;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsBool = CallFunc_NPC_GetScalableFloatHotfixValue_AsBool;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded = CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat = CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_1 = CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_1;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_1 = CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_1;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_1 = CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_2 = CallFunc_Greater_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue_1 = CallFunc_GetGameTimeInSeconds_ReturnValue_1;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_3 = CallFunc_Greater_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_GetDistanceBetweenActors_Distance = CallFunc_GetDistanceBetweenActors_Distance;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_4 = CallFunc_Greater_DoubleDouble_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC SetCanDropLoot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanDropLoot                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::NPC_SetCanDropLoot(bool CanDropLoot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC SetCanDropLoot");

	Params::UNPC_Pawn_Parent_C_NPC_SetCanDropLoot_Params Parms{};

	Parms.CanDropLoot = CanDropLoot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC GetSafeZonePhase
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SafeZonePhase                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAthena_GameState_C*         K2Node_DynamicCast_AsAthena_Game_State                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSafeZonePhase_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::NPC_GetSafeZonePhase(int32* SafeZonePhase, class UGameStateBase* CallFunc_GetGameState_ReturnValue, class UAthena_GameState_C* K2Node_DynamicCast_AsAthena_Game_State, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetSafeZonePhase_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC GetSafeZonePhase");

	Params::UNPC_Pawn_Parent_C_NPC_GetSafeZonePhase_Params Parms{};

	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsAthena_Game_State = K2Node_DynamicCast_AsAthena_Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSafeZonePhase_ReturnValue = CallFunc_GetSafeZonePhase_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SafeZonePhase != nullptr)
		*SafeZonePhase = Parms.SafeZonePhase;

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnRep_NPC Leader
// (HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsGameplayTagValid_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      CallFunc_MakeGameplayCueParameters_ReturnValue                   (ContainsInstancedReference)
// float                              CallFunc_MakeGameplayCueParameters_RawMagnitude_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::OnRep_NPC_Leader(bool CallFunc_IsGameplayTagValid_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, float CallFunc_MakeGameplayCueParameters_RawMagnitude_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "OnRep_NPC Leader");

	Params::UNPC_Pawn_Parent_C_OnRep_NPC_Leader_Params Parms{};

	Parms.CallFunc_IsGameplayTagValid_ReturnValue = CallFunc_IsGameplayTagValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_MakeGameplayCueParameters_ReturnValue = CallFunc_MakeGameplayCueParameters_ReturnValue;
	Parms.CallFunc_MakeGameplayCueParameters_RawMagnitude_ImplicitCast = CallFunc_MakeGameplayCueParameters_RawMagnitude_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.Play Water Splash at Water Surface
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortWaterBodyActor*         Water_Body                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Enter_Water                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWaterSurfaceInfo           CallFunc_GetWaterSurfaceInfoStruct_OutWaterSurfaceInfo           (NoDestructor)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      CallFunc_MakeGameplayCueParameters_ReturnValue                   (ContainsInstancedReference)
// struct FGameplayTag                K2Node_Select_Default                                            (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeGameplayCueParameters_NormalizedMagnitude_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::Play_Water_Splash_at_Water_Surface(class UFortWaterBodyActor* Water_Body, bool Enter_Water, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool Temp_bool_Variable, const struct FWaterSurfaceInfo& CallFunc_GetWaterSurfaceInfoStruct_OutWaterSurfaceInfo, double CallFunc_Conv_IntToDouble_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, const struct FGameplayTag& K2Node_Select_Default, float CallFunc_MakeGameplayCueParameters_NormalizedMagnitude_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "Play Water Splash at Water Surface");

	Params::UNPC_Pawn_Parent_C_Play_Water_Splash_at_Water_Surface_Params Parms{};

	Parms.Water_Body = Water_Body;
	Parms.Enter_Water = Enter_Water;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetWaterSurfaceInfoStruct_OutWaterSurfaceInfo = CallFunc_GetWaterSurfaceInfoStruct_OutWaterSurfaceInfo;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_MakeGameplayCueParameters_ReturnValue = CallFunc_MakeGameplayCueParameters_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_MakeGameplayCueParameters_NormalizedMagnitude_ImplicitCast = CallFunc_MakeGameplayCueParameters_NormalizedMagnitude_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.ResetMaterialFromDeath
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  CallFunc_GetMaterials_ReturnValue                                (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::ResetMaterialFromDeath(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UMaterialInterface* CallFunc_Array_Get_Item, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "ResetMaterialFromDeath");

	Params::UNPC_Pawn_Parent_C_ResetMaterialFromDeath_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetMaterials_ReturnValue = CallFunc_GetMaterials_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnRep_SelectedPrimitiveDataFloat
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPC_Pawn_Parent_C::OnRep_SelectedPrimitiveDataFloat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "OnRep_SelectedPrimitiveDataFloat");

	Params::UNPC_Pawn_Parent_C_OnRep_SelectedPrimitiveDataFloat_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.CheckSoundLibraryRemoved
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USoundLibrary*>       Libraries                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundLibrarySubsystem*      CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::CheckSoundLibraryRemoved(TArray<class USoundLibrary*>& Libraries, bool CallFunc_Array_IsNotEmpty_ReturnValue, class USoundLibrarySubsystem* CallFunc_GetWorldSubsystem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "CheckSoundLibraryRemoved");

	Params::UNPC_Pawn_Parent_C_CheckSoundLibraryRemoved_Params Parms{};

	Parms.Libraries = Libraries;
	Parms.CallFunc_Array_IsNotEmpty_ReturnValue = CallFunc_Array_IsNotEmpty_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.CheckSoundLibraryAdded
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USoundLibrary*>       Libraries                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class USoundLibrarySubsystem*      CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundLibrary*               CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::CheckSoundLibraryAdded(TArray<class USoundLibrary*>& Libraries, class USoundLibrarySubsystem* CallFunc_GetWorldSubsystem_ReturnValue, class USoundLibrary* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "CheckSoundLibraryAdded");

	Params::UNPC_Pawn_Parent_C_CheckSoundLibraryAdded_Params Parms{};

	Parms.Libraries = Libraries;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.UpdateSoundLibrary
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_NPC_AlertLevel     Alert_Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUpdateSoundLib_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUpdateSoundLib_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUpdateSoundLib_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundLibrarySubsystem*      CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::UpdateSoundLibrary(enum class Enum_NPC_AlertLevel Alert_Level, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_CanUpdateSoundLib_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_CanUpdateSoundLib_ReturnValue_1, bool CallFunc_CanUpdateSoundLib_ReturnValue_2, class USoundLibrarySubsystem* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "UpdateSoundLibrary");

	Params::UNPC_Pawn_Parent_C_UpdateSoundLibrary_Params Parms{};

	Parms.Alert_Level = Alert_Level;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_CanUpdateSoundLib_ReturnValue = CallFunc_CanUpdateSoundLib_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CanUpdateSoundLib_ReturnValue_1 = CallFunc_CanUpdateSoundLib_ReturnValue_1;
	Parms.CallFunc_CanUpdateSoundLib_ReturnValue_2 = CallFunc_CanUpdateSoundLib_ReturnValue_2;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC ClearOutTargetSlots
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       CallFunc_MakeLiteralGameplayTagContainer_ReturnValue             (None)
// TScriptInterface<class UGameplayTagAssetInterface>CallFunc_GetOwnedGameplayTags_self_CastInput                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetOwnedGameplayTags_TagContainer                       (None)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyTags_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::NPC_ClearOutTargetSlots(const struct FGameplayTagContainer& CallFunc_MakeLiteralGameplayTagContainer_ReturnValue, TScriptInterface<class UGameplayTagAssetInterface> CallFunc_GetOwnedGameplayTags_self_CastInput, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, bool CallFunc_HasTag_ReturnValue, bool CallFunc_HasTag_ReturnValue_1, bool CallFunc_HasAnyTags_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC ClearOutTargetSlots");

	Params::UNPC_Pawn_Parent_C_NPC_ClearOutTargetSlots_Params Parms{};

	Parms.CallFunc_MakeLiteralGameplayTagContainer_ReturnValue = CallFunc_MakeLiteralGameplayTagContainer_ReturnValue;
	Parms.CallFunc_GetOwnedGameplayTags_self_CastInput = CallFunc_GetOwnedGameplayTags_self_CastInput;
	Parms.CallFunc_GetOwnedGameplayTags_TagContainer = CallFunc_GetOwnedGameplayTags_TagContainer;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;
	Parms.CallFunc_HasTag_ReturnValue_1 = CallFunc_HasTag_ReturnValue_1;
	Parms.CallFunc_HasAnyTags_ReturnValue = CallFunc_HasAnyTags_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC UpdateInteract
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanInteract                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               EnabledInteract                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               WasInteractEnabled                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NPC_GetScalableFloatHotfixValue_AsBool                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NPC_HasLeader__HasLeader_                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_NPC_HasLeader__Leader                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::NPC_UpdateInteract(bool CanInteract, bool* EnabledInteract, bool WasInteractEnabled, bool CallFunc_NPC_GetScalableFloatHotfixValue_AsBool, int32 CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded, double CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat, bool CallFunc_NPC_HasLeader__HasLeader_, class UActor* CallFunc_NPC_HasLeader__Leader, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC UpdateInteract");

	Params::UNPC_Pawn_Parent_C_NPC_UpdateInteract_Params Parms{};

	Parms.CanInteract = CanInteract;
	Parms.WasInteractEnabled = WasInteractEnabled;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsBool = CallFunc_NPC_GetScalableFloatHotfixValue_AsBool;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded = CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat = CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat;
	Parms.CallFunc_NPC_HasLeader__HasLeader_ = CallFunc_NPC_HasLeader__HasLeader_;
	Parms.CallFunc_NPC_HasLeader__Leader = CallFunc_NPC_HasLeader__Leader;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (EnabledInteract != nullptr)
		*EnabledInteract = Parms.EnabledInteract;

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC HasLeader?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               HasLeader_                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      Leader                                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::NPC_HasLeader_(bool* HasLeader_, class UActor** Leader, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC HasLeader?");

	Params::UNPC_Pawn_Parent_C_NPC_HasLeader__Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HasLeader_ != nullptr)
		*HasLeader_ = Parms.HasLeader_;

	if (Leader != nullptr)
		*Leader = Parms.Leader;

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC SetLeader
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActor*                      Leader                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success_                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      LeaderSet                                                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NPC_HasLeader__HasLeader_                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_NPC_HasLeader__Leader                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::NPC_SetLeader(class UActor* Leader, bool* Success_, class UActor** LeaderSet, bool CallFunc_NPC_HasLeader__HasLeader_, class UActor* CallFunc_NPC_HasLeader__Leader, class FName CallFunc_MakeLiteralName_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC SetLeader");

	Params::UNPC_Pawn_Parent_C_NPC_SetLeader_Params Parms{};

	Parms.Leader = Leader;
	Parms.CallFunc_NPC_HasLeader__HasLeader_ = CallFunc_NPC_HasLeader__HasLeader_;
	Parms.CallFunc_NPC_HasLeader__Leader = CallFunc_NPC_HasLeader__Leader;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Success_ != nullptr)
		*Success_ = Parms.Success_;

	if (LeaderSet != nullptr)
		*LeaderSet = Parms.LeaderSet;

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC AttemptToSetLeader
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActor*                      PossibleLeader                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EUnconvertReason        UnconvertReason                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NPC_SetLeader_Success_                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_NPC_SetLeader_LeaderSet                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::NPC_AttemptToSetLeader(class UActor* PossibleLeader, enum class EUnconvertReason UnconvertReason, bool CallFunc_NPC_SetLeader_Success_, class UActor* CallFunc_NPC_SetLeader_LeaderSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC AttemptToSetLeader");

	Params::UNPC_Pawn_Parent_C_NPC_AttemptToSetLeader_Params Parms{};

	Parms.PossibleLeader = PossibleLeader;
	Parms.UnconvertReason = UnconvertReason;
	Parms.CallFunc_NPC_SetLeader_Success_ = CallFunc_NPC_SetLeader_Success_;
	Parms.CallFunc_NPC_SetLeader_LeaderSet = CallFunc_NPC_SetLeader_LeaderSet;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.SetPrimitiveDataFloat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_NPC_GetScalableFloatHotfixValue_AsBool                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetCustomPrimitiveDataFloat_Value_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::SetPrimitiveDataFloat(bool CallFunc_NPC_GetScalableFloatHotfixValue_AsBool, int32 CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded, double CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat, float CallFunc_SetCustomPrimitiveDataFloat_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "SetPrimitiveDataFloat");

	Params::UNPC_Pawn_Parent_C_SetPrimitiveDataFloat_Params Parms{};

	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsBool = CallFunc_NPC_GetScalableFloatHotfixValue_AsBool;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded = CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat = CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat;
	Parms.CallFunc_SetCustomPrimitiveDataFloat_Value_ImplicitCast = CallFunc_SetCustomPrimitiveDataFloat_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.SelectPrimitiveDataFloat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_NPC_GetScalableFloatHotfixValue_AsBool                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_2          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::SelectPrimitiveDataFloat(bool CallFunc_NPC_GetScalableFloatHotfixValue_AsBool, int32 CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded, double CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat, bool CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_1, int32 CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_1, double CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_1, bool CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_2, int32 CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_2, double CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_2, double CallFunc_RandomFloatInRange_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "SelectPrimitiveDataFloat");

	Params::UNPC_Pawn_Parent_C_SelectPrimitiveDataFloat_Params Parms{};

	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsBool = CallFunc_NPC_GetScalableFloatHotfixValue_AsBool;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded = CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat = CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_1 = CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_1;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_1 = CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_1;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_1 = CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_1;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_2 = CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_2;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_2 = CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_2;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_2 = CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_2;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.StoreOriginalGravityAndRotation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             K2Node_VariableSet_NPC_OriginalGravityScale_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::StoreOriginalGravityAndRotation(double K2Node_VariableSet_NPC_OriginalGravityScale_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "StoreOriginalGravityAndRotation");

	Params::UNPC_Pawn_Parent_C_StoreOriginalGravityAndRotation_Params Parms{};

	Parms.K2Node_VariableSet_NPC_OriginalGravityScale_ImplicitCast = K2Node_VariableSet_NPC_OriginalGravityScale_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC DisableIntroPhaseBehavior
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue              (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RemoveActiveEffectsWithAppliedTags_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::NPC_DisableIntroPhaseBehavior(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, int32 CallFunc_RemoveActiveEffectsWithAppliedTags_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC DisableIntroPhaseBehavior");

	Params::UNPC_Pawn_Parent_C_NPC_DisableIntroPhaseBehavior_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue = CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue;
	Parms.CallFunc_RemoveActiveEffectsWithAppliedTags_ReturnValue = CallFunc_RemoveActiveEffectsWithAppliedTags_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC DamageAttemptDisableIntroPhaseBehavior
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       DamageTags                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesContainerMatchTagQuery_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsTagQueryEmpty_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::NPC_DamageAttemptDisableIntroPhaseBehavior(const struct FGameplayTagContainer& DamageTags, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_DoesContainerMatchTagQuery_ReturnValue, bool CallFunc_IsTagQueryEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC DamageAttemptDisableIntroPhaseBehavior");

	Params::UNPC_Pawn_Parent_C_NPC_DamageAttemptDisableIntroPhaseBehavior_Params Parms{};

	Parms.DamageTags = DamageTags;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_DoesContainerMatchTagQuery_ReturnValue = CallFunc_DoesContainerMatchTagQuery_ReturnValue;
	Parms.CallFunc_IsTagQueryEmpty_ReturnValue = CallFunc_IsTagQueryEmpty_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC TargetSlotIsUsingOverride
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_NPC_TargetSlots    TargetSlotType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      TargetWeWantToSlotOnto                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Override                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      NPC_TargetSlotOverrideGE                                         (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NPC_TargetSlotInfo_TargetSlotCount                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NPC_TargetSlotInfo_TargetSlotMax                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NPC_TargetSlotInfo_NPC_TargetSlotsRequired              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NPC_TargetSlotInfo_TargetSlotsMaxOrMore                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NPC_TargetSlotInfo_TargetSlotCountIsExactlyMax          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NPC_TargetSlotInfo_NPC_IsTargetSlotOwner                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NPC_TargetSlotInfo_NPC_HasSpaceToSlotOnTarget           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_NPC_TargetSlots    CallFunc_NPC_TargetSlotInfo_TargetSlotTypeOut                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_NPC_TargetSlotInfo_TargetSlotCountingGE                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FScalableFloat              CallFunc_NPC_TargetSlotInfo_AI_TargetSlotSizeHF                  (None)
// struct FScalableFloat              CallFunc_NPC_TargetSlotInfo_AI_TargetSlotDurationHF              (None)
// class UClass*                      CallFunc_NPC_TargetSlotInfo_TargetSlotOverrideGE                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_NPC_TargetSlotInfo_TargetSlotOwnerGE                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_NPC_TargetSlotInfo_TargetSlotCountingMaxedGE            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UClass*>              K2Node_MakeArray_Array                                           (ReferenceParm)
// int32                              CallFunc_GetTotalGameplayEffectCount_FinalEffectCount            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::NPC_TargetSlotIsUsingOverride(enum class Enum_NPC_TargetSlots TargetSlotType, class UActor* TargetWeWantToSlotOnto, bool* Override, class UClass* NPC_TargetSlotOverrideGE, int32 CallFunc_NPC_TargetSlotInfo_TargetSlotCount, int32 CallFunc_NPC_TargetSlotInfo_TargetSlotMax, int32 CallFunc_NPC_TargetSlotInfo_NPC_TargetSlotsRequired, bool CallFunc_NPC_TargetSlotInfo_TargetSlotsMaxOrMore, bool CallFunc_NPC_TargetSlotInfo_TargetSlotCountIsExactlyMax, bool CallFunc_NPC_TargetSlotInfo_NPC_IsTargetSlotOwner, bool CallFunc_NPC_TargetSlotInfo_NPC_HasSpaceToSlotOnTarget, enum class Enum_NPC_TargetSlots CallFunc_NPC_TargetSlotInfo_TargetSlotTypeOut, class UClass* CallFunc_NPC_TargetSlotInfo_TargetSlotCountingGE, const struct FScalableFloat& CallFunc_NPC_TargetSlotInfo_AI_TargetSlotSizeHF, const struct FScalableFloat& CallFunc_NPC_TargetSlotInfo_AI_TargetSlotDurationHF, class UClass* CallFunc_NPC_TargetSlotInfo_TargetSlotOverrideGE, class UClass* CallFunc_NPC_TargetSlotInfo_TargetSlotOwnerGE, class UClass* CallFunc_NPC_TargetSlotInfo_TargetSlotCountingMaxedGE, bool CallFunc_IsValidClass_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class UClass*>& K2Node_MakeArray_Array, int32 CallFunc_GetTotalGameplayEffectCount_FinalEffectCount, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC TargetSlotIsUsingOverride");

	Params::UNPC_Pawn_Parent_C_NPC_TargetSlotIsUsingOverride_Params Parms{};

	Parms.TargetSlotType = TargetSlotType;
	Parms.TargetWeWantToSlotOnto = TargetWeWantToSlotOnto;
	Parms.NPC_TargetSlotOverrideGE = NPC_TargetSlotOverrideGE;
	Parms.CallFunc_NPC_TargetSlotInfo_TargetSlotCount = CallFunc_NPC_TargetSlotInfo_TargetSlotCount;
	Parms.CallFunc_NPC_TargetSlotInfo_TargetSlotMax = CallFunc_NPC_TargetSlotInfo_TargetSlotMax;
	Parms.CallFunc_NPC_TargetSlotInfo_NPC_TargetSlotsRequired = CallFunc_NPC_TargetSlotInfo_NPC_TargetSlotsRequired;
	Parms.CallFunc_NPC_TargetSlotInfo_TargetSlotsMaxOrMore = CallFunc_NPC_TargetSlotInfo_TargetSlotsMaxOrMore;
	Parms.CallFunc_NPC_TargetSlotInfo_TargetSlotCountIsExactlyMax = CallFunc_NPC_TargetSlotInfo_TargetSlotCountIsExactlyMax;
	Parms.CallFunc_NPC_TargetSlotInfo_NPC_IsTargetSlotOwner = CallFunc_NPC_TargetSlotInfo_NPC_IsTargetSlotOwner;
	Parms.CallFunc_NPC_TargetSlotInfo_NPC_HasSpaceToSlotOnTarget = CallFunc_NPC_TargetSlotInfo_NPC_HasSpaceToSlotOnTarget;
	Parms.CallFunc_NPC_TargetSlotInfo_TargetSlotTypeOut = CallFunc_NPC_TargetSlotInfo_TargetSlotTypeOut;
	Parms.CallFunc_NPC_TargetSlotInfo_TargetSlotCountingGE = CallFunc_NPC_TargetSlotInfo_TargetSlotCountingGE;
	Parms.CallFunc_NPC_TargetSlotInfo_AI_TargetSlotSizeHF = CallFunc_NPC_TargetSlotInfo_AI_TargetSlotSizeHF;
	Parms.CallFunc_NPC_TargetSlotInfo_AI_TargetSlotDurationHF = CallFunc_NPC_TargetSlotInfo_AI_TargetSlotDurationHF;
	Parms.CallFunc_NPC_TargetSlotInfo_TargetSlotOverrideGE = CallFunc_NPC_TargetSlotInfo_TargetSlotOverrideGE;
	Parms.CallFunc_NPC_TargetSlotInfo_TargetSlotOwnerGE = CallFunc_NPC_TargetSlotInfo_TargetSlotOwnerGE;
	Parms.CallFunc_NPC_TargetSlotInfo_TargetSlotCountingMaxedGE = CallFunc_NPC_TargetSlotInfo_TargetSlotCountingMaxedGE;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetTotalGameplayEffectCount_FinalEffectCount = CallFunc_GetTotalGameplayEffectCount_FinalEffectCount;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Override != nullptr)
		*Override = Parms.Override;

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC TargetSlotInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class Enum_NPC_TargetSlots    TargetSlotType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      TargetWeWantToSlotOnto                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              TargetSlotCount                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TargetSlotMax                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NPC_TargetSlotsRequired                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               TargetSlotsMaxOrMore                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               TargetSlotCountIsExactlyMax                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               NPC_IsTargetSlotOwner                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               NPC_HasSpaceToSlotOnTarget                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_NPC_TargetSlots    TargetSlotTypeOut                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      TargetSlotCountingGE                                             (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FScalableFloat              AI_TargetSlotSizeHF                                              (Parm, OutParm)
// struct FScalableFloat              AI_TargetSlotDurationHF                                          (Parm, OutParm)
// class UClass*                      TargetSlotOverrideGE                                             (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      TargetSlotOwnerGE                                                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      TargetSlotCountingMaxedGE                                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      NPC_TargetSlotCountingMaxedGE                                    (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      NPC_TargetSlotOwnerGE                                            (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      NPC_TargetSlotOverrideGE                                         (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FScalableFloat              NPC_AI_TargetSlotDurationHF                                      (Edit, BlueprintVisible)
// struct FScalableFloat              NPC_AI_TargetSlotSizeHF                                          (Edit, BlueprintVisible)
// class UClass*                      NPC_TargetSlotCountingGE                                         (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UClass*>              K2Node_MakeArray_Array                                           (ReferenceParm)
// int32                              CallFunc_GetTotalGameplayEffectCount_FinalEffectCount            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NPC_GetScalableFloatHotfixValue_AsBool                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UClass*>              K2Node_MakeArray_Array_1                                         (ReferenceParm)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTotalGameplayEffectCount_FinalEffectCount_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_NPC_TargetSlots     CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::NPC_TargetSlotInfo(enum class Enum_NPC_TargetSlots TargetSlotType, class UActor* TargetWeWantToSlotOnto, int32* TargetSlotCount, int32* TargetSlotMax, int32* NPC_TargetSlotsRequired, bool* TargetSlotsMaxOrMore, bool* TargetSlotCountIsExactlyMax, bool* NPC_IsTargetSlotOwner, bool* NPC_HasSpaceToSlotOnTarget, enum class Enum_NPC_TargetSlots* TargetSlotTypeOut, class UClass** TargetSlotCountingGE, struct FScalableFloat* AI_TargetSlotSizeHF, struct FScalableFloat* AI_TargetSlotDurationHF, class UClass** TargetSlotOverrideGE, class UClass** TargetSlotOwnerGE, class UClass** TargetSlotCountingMaxedGE, class UClass* NPC_TargetSlotCountingMaxedGE, class UClass* NPC_TargetSlotOwnerGE, class UClass* NPC_TargetSlotOverrideGE, const struct FScalableFloat& NPC_AI_TargetSlotDurationHF, const struct FScalableFloat& NPC_AI_TargetSlotSizeHF, class UClass* NPC_TargetSlotCountingGE, bool Temp_bool_True_if_break_was_hit_Variable, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, TArray<class UClass*>& K2Node_MakeArray_Array, int32 CallFunc_GetTotalGameplayEffectCount_FinalEffectCount, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_NPC_GetScalableFloatHotfixValue_AsBool, int32 CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded, double CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat, TArray<class UClass*>& K2Node_MakeArray_Array_1, bool CallFunc_IsValidClass_ReturnValue, int32 CallFunc_GetTotalGameplayEffectCount_FinalEffectCount_1, int32 Temp_int_Loop_Counter_Variable, const struct FStruct_NPC_TargetSlots& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC TargetSlotInfo");

	Params::UNPC_Pawn_Parent_C_NPC_TargetSlotInfo_Params Parms{};

	Parms.TargetSlotType = TargetSlotType;
	Parms.TargetWeWantToSlotOnto = TargetWeWantToSlotOnto;
	Parms.NPC_TargetSlotCountingMaxedGE = NPC_TargetSlotCountingMaxedGE;
	Parms.NPC_TargetSlotOwnerGE = NPC_TargetSlotOwnerGE;
	Parms.NPC_TargetSlotOverrideGE = NPC_TargetSlotOverrideGE;
	Parms.NPC_AI_TargetSlotDurationHF = NPC_AI_TargetSlotDurationHF;
	Parms.NPC_AI_TargetSlotSizeHF = NPC_AI_TargetSlotSizeHF;
	Parms.NPC_TargetSlotCountingGE = NPC_TargetSlotCountingGE;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetTotalGameplayEffectCount_FinalEffectCount = CallFunc_GetTotalGameplayEffectCount_FinalEffectCount;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsBool = CallFunc_NPC_GetScalableFloatHotfixValue_AsBool;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded = CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat = CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_GetTotalGameplayEffectCount_FinalEffectCount_1 = CallFunc_GetTotalGameplayEffectCount_FinalEffectCount_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (TargetSlotCount != nullptr)
		*TargetSlotCount = Parms.TargetSlotCount;

	if (TargetSlotMax != nullptr)
		*TargetSlotMax = Parms.TargetSlotMax;

	if (NPC_TargetSlotsRequired != nullptr)
		*NPC_TargetSlotsRequired = Parms.NPC_TargetSlotsRequired;

	if (TargetSlotsMaxOrMore != nullptr)
		*TargetSlotsMaxOrMore = Parms.TargetSlotsMaxOrMore;

	if (TargetSlotCountIsExactlyMax != nullptr)
		*TargetSlotCountIsExactlyMax = Parms.TargetSlotCountIsExactlyMax;

	if (NPC_IsTargetSlotOwner != nullptr)
		*NPC_IsTargetSlotOwner = Parms.NPC_IsTargetSlotOwner;

	if (NPC_HasSpaceToSlotOnTarget != nullptr)
		*NPC_HasSpaceToSlotOnTarget = Parms.NPC_HasSpaceToSlotOnTarget;

	if (TargetSlotTypeOut != nullptr)
		*TargetSlotTypeOut = Parms.TargetSlotTypeOut;

	if (TargetSlotCountingGE != nullptr)
		*TargetSlotCountingGE = Parms.TargetSlotCountingGE;

	if (AI_TargetSlotSizeHF != nullptr)
		*AI_TargetSlotSizeHF = Parms.AI_TargetSlotSizeHF;

	if (AI_TargetSlotDurationHF != nullptr)
		*AI_TargetSlotDurationHF = Parms.AI_TargetSlotDurationHF;

	if (TargetSlotOverrideGE != nullptr)
		*TargetSlotOverrideGE = Parms.TargetSlotOverrideGE;

	if (TargetSlotOwnerGE != nullptr)
		*TargetSlotOwnerGE = Parms.TargetSlotOwnerGE;

	if (TargetSlotCountingMaxedGE != nullptr)
		*TargetSlotCountingMaxedGE = Parms.TargetSlotCountingMaxedGE;

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC CheckIsInSafeZone
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               TestSucceeded                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsInSafeZone                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAthena_GameState_C*         K2Node_DynamicCast_AsAthena_Game_State                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSafeZoneIndicator*      CallFunc_GetSafeZoneIndicator_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSafeZoneCenter_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Vector_Distance2DSquared_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetSafeZoneRadius_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Square_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Square_A_ImplicitCast                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::NPC_CheckIsInSafeZone(bool* TestSucceeded, bool* IsInSafeZone, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UGameStateBase* CallFunc_GetGameState_ReturnValue, class UAthena_GameState_C* K2Node_DynamicCast_AsAthena_Game_State, bool K2Node_DynamicCast_bSuccess, class UFortSafeZoneIndicator* CallFunc_GetSafeZoneIndicator_ReturnValue, const struct FVector& CallFunc_GetSafeZoneCenter_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_Vector_Distance2DSquared_ReturnValue, float CallFunc_GetSafeZoneRadius_ReturnValue, double CallFunc_Square_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_Square_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC CheckIsInSafeZone");

	Params::UNPC_Pawn_Parent_C_NPC_CheckIsInSafeZone_Params Parms{};

	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsAthena_Game_State = K2Node_DynamicCast_AsAthena_Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSafeZoneIndicator_ReturnValue = CallFunc_GetSafeZoneIndicator_ReturnValue;
	Parms.CallFunc_GetSafeZoneCenter_ReturnValue = CallFunc_GetSafeZoneCenter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Vector_Distance2DSquared_ReturnValue = CallFunc_Vector_Distance2DSquared_ReturnValue;
	Parms.CallFunc_GetSafeZoneRadius_ReturnValue = CallFunc_GetSafeZoneRadius_ReturnValue;
	Parms.CallFunc_Square_ReturnValue = CallFunc_Square_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Square_A_ImplicitCast = CallFunc_Square_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (TestSucceeded != nullptr)
		*TestSucceeded = Parms.TestSucceeded;

	if (IsInSafeZone != nullptr)
		*IsInSafeZone = Parms.IsInSafeZone;

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC HandleAlertLevelVoice
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_NPC_AlertLevel     Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_1                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_2                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PlayVoiceLine_Success                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PlayVoiceLine_Success_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Select_Default                                            (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PlayVoiceLine_Success_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::NPC_HandleAlertLevelVoice(enum class Enum_NPC_AlertLevel Temp_byte_Variable, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable_1, const struct FGameplayTag& Temp_struct_Variable_2, bool CallFunc_PlayVoiceLine_Success, bool CallFunc_PlayVoiceLine_Success_1, bool K2Node_SwitchEnum_CmpSuccess, const struct FGameplayTag& K2Node_Select_Default, bool CallFunc_PlayVoiceLine_Success_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC HandleAlertLevelVoice");

	Params::UNPC_Pawn_Parent_C_NPC_HandleAlertLevelVoice_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.CallFunc_PlayVoiceLine_Success = CallFunc_PlayVoiceLine_Success;
	Parms.CallFunc_PlayVoiceLine_Success_1 = CallFunc_PlayVoiceLine_Success_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PlayVoiceLine_Success_2 = CallFunc_PlayVoiceLine_Success_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC TryToDropLootOnDeath
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       DamageTags                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               CanDropLoot                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CanDropLootBool                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInAthena_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLootLevel_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFortItemEntry>      CallFunc_PickLootDrops_OutLootToDrop                             (ReferenceParm)
// bool                               CallFunc_PickLootDrops_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortItemEntry              CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class UFortInventoryOwnerInterface>CallFunc_GiveItemEntryToInventoryOwner_InventoryOwner_CastInput  (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GiveItemEntryToInventoryOwner_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_MakeLiteralGameplayTagContainer_ReturnValue             (None)
// bool                               CallFunc_EqualEqual_GameplayTagContainer_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayTagContainer_ReturnValue_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_GameplayTagContainer_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyTags_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_GameplayTagContainer_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyTags_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::NPC_TryToDropLootOnDeath(const struct FGameplayTagContainer& DamageTags, bool* CanDropLoot, bool CanDropLootBool, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsInAthena_ReturnValue, int32 CallFunc_GetLootLevel_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, TArray<struct FFortItemEntry>& CallFunc_PickLootDrops_OutLootToDrop, bool CallFunc_PickLootDrops_ReturnValue, const struct FFortItemEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TScriptInterface<class UFortInventoryOwnerInterface> CallFunc_GiveItemEntryToInventoryOwner_InventoryOwner_CastInput, bool CallFunc_GiveItemEntryToInventoryOwner_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeLiteralGameplayTagContainer_ReturnValue, bool CallFunc_EqualEqual_GameplayTagContainer_ReturnValue, bool CallFunc_EqualEqual_GameplayTagContainer_ReturnValue_1, bool CallFunc_NotEqual_GameplayTagContainer_ReturnValue, bool CallFunc_HasAnyTags_ReturnValue, bool CallFunc_NotEqual_GameplayTagContainer_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_HasAnyTags_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC TryToDropLootOnDeath");

	Params::UNPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath_Params Parms{};

	Parms.DamageTags = DamageTags;
	Parms.CanDropLootBool = CanDropLootBool;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsInAthena_ReturnValue = CallFunc_IsInAthena_ReturnValue;
	Parms.CallFunc_GetLootLevel_ReturnValue = CallFunc_GetLootLevel_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_PickLootDrops_OutLootToDrop = CallFunc_PickLootDrops_OutLootToDrop;
	Parms.CallFunc_PickLootDrops_ReturnValue = CallFunc_PickLootDrops_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GiveItemEntryToInventoryOwner_InventoryOwner_CastInput = CallFunc_GiveItemEntryToInventoryOwner_InventoryOwner_CastInput;
	Parms.CallFunc_GiveItemEntryToInventoryOwner_ReturnValue = CallFunc_GiveItemEntryToInventoryOwner_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_MakeLiteralGameplayTagContainer_ReturnValue = CallFunc_MakeLiteralGameplayTagContainer_ReturnValue;
	Parms.CallFunc_EqualEqual_GameplayTagContainer_ReturnValue = CallFunc_EqualEqual_GameplayTagContainer_ReturnValue;
	Parms.CallFunc_EqualEqual_GameplayTagContainer_ReturnValue_1 = CallFunc_EqualEqual_GameplayTagContainer_ReturnValue_1;
	Parms.CallFunc_NotEqual_GameplayTagContainer_ReturnValue = CallFunc_NotEqual_GameplayTagContainer_ReturnValue;
	Parms.CallFunc_HasAnyTags_ReturnValue = CallFunc_HasAnyTags_ReturnValue;
	Parms.CallFunc_NotEqual_GameplayTagContainer_ReturnValue_1 = CallFunc_NotEqual_GameplayTagContainer_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_HasAnyTags_ReturnValue_1 = CallFunc_HasAnyTags_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

	if (CanDropLoot != nullptr)
		*CanDropLoot = Parms.CanDropLoot;

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC ApplyGameplayEffectWithMMRScaling
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      GE_Class                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      ApplyGeToThisActor                                               (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Option_B___If_false__use_Option_A_Variable             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::NPC_ApplyGameplayEffectWithMMRScaling(class UActor* Actor, class UClass* GE_Class, class UActor* ApplyGeToThisActor, bool Temp_bool_Option_B___If_false__use_Option_A_Variable, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, class UActor* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC ApplyGameplayEffectWithMMRScaling");

	Params::UNPC_Pawn_Parent_C_NPC_ApplyGameplayEffectWithMMRScaling_Params Parms{};

	Parms.Actor = Actor;
	Parms.GE_Class = GE_Class;
	Parms.ApplyGeToThisActor = ApplyGeToThisActor;
	Parms.Temp_bool_Option_B___If_false__use_Option_A_Variable = Temp_bool_Option_B___If_false__use_Option_A_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC SetLootCollectionPhaseCompleteToBlackboard
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               LootCollectionPhaseComplete                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetValueAsBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::NPC_SetLootCollectionPhaseCompleteToBlackboard(bool LootCollectionPhaseComplete, class FName CallFunc_MakeLiteralName_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_GetValueAsBool_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC SetLootCollectionPhaseCompleteToBlackboard");

	Params::UNPC_Pawn_Parent_C_NPC_SetLootCollectionPhaseCompleteToBlackboard_Params Parms{};

	Parms.LootCollectionPhaseComplete = LootCollectionPhaseComplete;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_GetValueAsBool_ReturnValue = CallFunc_GetValueAsBool_ReturnValue;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC ResetOriginalRotationRate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPC_Pawn_Parent_C::NPC_ResetOriginalRotationRate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC ResetOriginalRotationRate");

	Params::UNPC_Pawn_Parent_C_NPC_ResetOriginalRotationRate_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC ResetOriginalGravityScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              K2Node_VariableSet_GravityScale_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::NPC_ResetOriginalGravityScale(float K2Node_VariableSet_GravityScale_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC ResetOriginalGravityScale");

	Params::UNPC_Pawn_Parent_C_NPC_ResetOriginalGravityScale_Params Parms{};

	Parms.K2Node_VariableSet_GravityScale_ImplicitCast = K2Node_VariableSet_GravityScale_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC SetReturnGatheredLootToBlackboard
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NPC_GetInventoryInformation_HasItemInInventory          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NPC_GetInventoryInformation_TotalNumberOfInventoryItems (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NPC_GetInventoryInformation_LastInventoryItemIndex      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NPC_GetInventoryInformation_HasEnoughItemsToDeliver     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NPC_GetInventoryInformation_ConsumedEnoughItemsToBeConsideredFull(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetValueAsBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::NPC_SetReturnGatheredLootToBlackboard(class FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_NPC_GetInventoryInformation_HasItemInInventory, int32 CallFunc_NPC_GetInventoryInformation_TotalNumberOfInventoryItems, int32 CallFunc_NPC_GetInventoryInformation_LastInventoryItemIndex, bool CallFunc_NPC_GetInventoryInformation_HasEnoughItemsToDeliver, bool CallFunc_NPC_GetInventoryInformation_ConsumedEnoughItemsToBeConsideredFull, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_GetValueAsBool_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC SetReturnGatheredLootToBlackboard");

	Params::UNPC_Pawn_Parent_C_NPC_SetReturnGatheredLootToBlackboard_Params Parms{};

	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_NPC_GetInventoryInformation_HasItemInInventory = CallFunc_NPC_GetInventoryInformation_HasItemInInventory;
	Parms.CallFunc_NPC_GetInventoryInformation_TotalNumberOfInventoryItems = CallFunc_NPC_GetInventoryInformation_TotalNumberOfInventoryItems;
	Parms.CallFunc_NPC_GetInventoryInformation_LastInventoryItemIndex = CallFunc_NPC_GetInventoryInformation_LastInventoryItemIndex;
	Parms.CallFunc_NPC_GetInventoryInformation_HasEnoughItemsToDeliver = CallFunc_NPC_GetInventoryInformation_HasEnoughItemsToDeliver;
	Parms.CallFunc_NPC_GetInventoryInformation_ConsumedEnoughItemsToBeConsideredFull = CallFunc_NPC_GetInventoryInformation_ConsumedEnoughItemsToBeConsideredFull;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_GetValueAsBool_ReturnValue = CallFunc_GetValueAsBool_ReturnValue;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue_1 = CallFunc_NotEqual_BoolBool_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC GetScalableFloatHotfixValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScalableFloat              ScalableFloatHotfix                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// double                             AtLevel                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AsBool                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AsIntRounded                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             AsFloat                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NPC_ScalableFloatIsValid_Valid                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_Level_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_AsFloat_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_AsFloat_ImplicitCast_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Round_A_ImplicitCast                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Round_A_ImplicitCast_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::NPC_GetScalableFloatHotfixValue(struct FScalableFloat& ScalableFloatHotfix, double AtLevel, bool* AsBool, int32* AsIntRounded, double* AsFloat, float CallFunc_GetValueAtLevel_ReturnValue, int32 CallFunc_Round_ReturnValue, int32 CallFunc_Round_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_NPC_ScalableFloatIsValid_Valid, float CallFunc_GetValueAtLevel_Level_ImplicitCast, double K2Node_FunctionResult_AsFloat_ImplicitCast, double K2Node_FunctionResult_AsFloat_ImplicitCast_1, double CallFunc_Round_A_ImplicitCast, double CallFunc_Round_A_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC GetScalableFloatHotfixValue");

	Params::UNPC_Pawn_Parent_C_NPC_GetScalableFloatHotfixValue_Params Parms{};

	Parms.ScalableFloatHotfix = ScalableFloatHotfix;
	Parms.AtLevel = AtLevel;
	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Round_ReturnValue_1 = CallFunc_Round_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_NPC_ScalableFloatIsValid_Valid = CallFunc_NPC_ScalableFloatIsValid_Valid;
	Parms.CallFunc_GetValueAtLevel_Level_ImplicitCast = CallFunc_GetValueAtLevel_Level_ImplicitCast;
	Parms.K2Node_FunctionResult_AsFloat_ImplicitCast = K2Node_FunctionResult_AsFloat_ImplicitCast;
	Parms.K2Node_FunctionResult_AsFloat_ImplicitCast_1 = K2Node_FunctionResult_AsFloat_ImplicitCast_1;
	Parms.CallFunc_Round_A_ImplicitCast = CallFunc_Round_A_ImplicitCast;
	Parms.CallFunc_Round_A_ImplicitCast_1 = CallFunc_Round_A_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (AsBool != nullptr)
		*AsBool = Parms.AsBool;

	if (AsIntRounded != nullptr)
		*AsIntRounded = Parms.AsIntRounded;

	if (AsFloat != nullptr)
		*AsFloat = Parms.AsFloat;

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC ScalableFloatIsValid
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FScalableFloat              ScalableFloat                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               Valid                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::NPC_ScalableFloatIsValid(struct FScalableFloat& ScalableFloat, bool* Valid, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC ScalableFloatIsValid");

	Params::UNPC_Pawn_Parent_C_NPC_ScalableFloatIsValid_Params Parms{};

	Parms.ScalableFloat = ScalableFloat;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Valid != nullptr)
		*Valid = Parms.Valid;

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC PickupDropped
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPickup*                 FortPickupDropped                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::NPC_PickupDropped(class UFortPickup* FortPickupDropped)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC PickupDropped");

	Params::UNPC_Pawn_Parent_C_NPC_PickupDropped_Params Parms{};

	Parms.FortPickupDropped = FortPickupDropped;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC PickupGrabbed_Destroyed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActor*                      ActorGrabbed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::NPC_PickupGrabbed_Destroyed(class UActor* ActorGrabbed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC PickupGrabbed_Destroyed");

	Params::UNPC_Pawn_Parent_C_NPC_PickupGrabbed_Destroyed_Params Parms{};

	Parms.ActorGrabbed = ActorGrabbed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC PickupGrabbed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPickup*                 FortPickupGrabbed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::NPC_PickupGrabbed(class UFortPickup* FortPickupGrabbed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC PickupGrabbed");

	Params::UNPC_Pawn_Parent_C_NPC_PickupGrabbed_Params Parms{};

	Parms.FortPickupGrabbed = FortPickupGrabbed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnRep_NPC BestLootRarityInInventory
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::OnRep_NPC_BestLootRarityInInventory(bool CallFunc_IsDedicatedServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "OnRep_NPC BestLootRarityInInventory");

	Params::UNPC_Pawn_Parent_C_OnRep_NPC_BestLootRarityInInventory_Params Parms{};

	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC SendGameplayCuePickupGrabbed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      CallFunc_MakeGameplayCueParameters_ReturnValue                   (ContainsInstancedReference)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue                      (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::NPC_SendGameplayCuePickupGrabbed(bool CallFunc_IsDedicatedServer_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, bool CallFunc_IsGameplayTagValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC SendGameplayCuePickupGrabbed");

	Params::UNPC_Pawn_Parent_C_NPC_SendGameplayCuePickupGrabbed_Params Parms{};

	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_MakeGameplayCueParameters_ReturnValue = CallFunc_MakeGameplayCueParameters_ReturnValue;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue = CallFunc_MakeLiteralGameplayTag_ReturnValue;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue = CallFunc_IsGameplayTagValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC PawnDebugMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      String                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               OnlyWhenDebug                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::NPC_PawnDebugMessage(const class FString& String, bool OnlyWhenDebug, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC PawnDebugMessage");

	Params::UNPC_Pawn_Parent_C_NPC_PawnDebugMessage_Params Parms{};

	Parms.String = String;
	Parms.OnlyWhenDebug = OnlyWhenDebug;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC GetInventoryInformation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HasItemInInventory                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TotalNumberOfInventoryItems                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LastInventoryItemIndex                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HasEnoughItemsToDeliver                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ConsumedEnoughItemsToBeConsideredFull                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NPC_GetScalableFloatHotfixValue_AsBool                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_BuildString_Bool_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// TScriptInterface<class UFortInventoryOwnerInterface>CallFunc_GetItemsFromInventoryOwner_InventoryOwner_CastInput     (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TArray<class UFortWorldItem*>      CallFunc_GetItemsFromInventoryOwner_Items                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_BuildString_Bool_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_BuildString_Bool_ReturnValue_2                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_BuildString_Bool_ReturnValue_3                          (ZeroConstructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::NPC_GetInventoryInformation(bool* HasItemInInventory, int32* TotalNumberOfInventoryItems, int32* LastInventoryItemIndex, bool* HasEnoughItemsToDeliver, bool* ConsumedEnoughItemsToBeConsideredFull, bool CallFunc_NPC_GetScalableFloatHotfixValue_AsBool, int32 CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded, double CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat, bool CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_1, int32 CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_1, double CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_1, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_BuildString_Bool_ReturnValue, TScriptInterface<class UFortInventoryOwnerInterface> CallFunc_GetItemsFromInventoryOwner_InventoryOwner_CastInput, TArray<class UFortWorldItem*>& CallFunc_GetItemsFromInventoryOwner_Items, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_BuildString_Bool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, const class FString& CallFunc_BuildString_Bool_ReturnValue_2, const class FString& CallFunc_BuildString_Bool_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC GetInventoryInformation");

	Params::UNPC_Pawn_Parent_C_NPC_GetInventoryInformation_Params Parms{};

	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsBool = CallFunc_NPC_GetScalableFloatHotfixValue_AsBool;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded = CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat = CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_1 = CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_1;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_1 = CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_1;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_1 = CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BuildString_Bool_ReturnValue = CallFunc_BuildString_Bool_ReturnValue;
	Parms.CallFunc_GetItemsFromInventoryOwner_InventoryOwner_CastInput = CallFunc_GetItemsFromInventoryOwner_InventoryOwner_CastInput;
	Parms.CallFunc_GetItemsFromInventoryOwner_Items = CallFunc_GetItemsFromInventoryOwner_Items;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1 = CallFunc_GreaterEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BuildString_Bool_ReturnValue_1 = CallFunc_BuildString_Bool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BuildString_Bool_ReturnValue_2 = CallFunc_BuildString_Bool_ReturnValue_2;
	Parms.CallFunc_BuildString_Bool_ReturnValue_3 = CallFunc_BuildString_Bool_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (HasItemInInventory != nullptr)
		*HasItemInInventory = Parms.HasItemInInventory;

	if (TotalNumberOfInventoryItems != nullptr)
		*TotalNumberOfInventoryItems = Parms.TotalNumberOfInventoryItems;

	if (LastInventoryItemIndex != nullptr)
		*LastInventoryItemIndex = Parms.LastInventoryItemIndex;

	if (HasEnoughItemsToDeliver != nullptr)
		*HasEnoughItemsToDeliver = Parms.HasEnoughItemsToDeliver;

	if (ConsumedEnoughItemsToBeConsideredFull != nullptr)
		*ConsumedEnoughItemsToBeConsideredFull = Parms.ConsumedEnoughItemsToBeConsideredFull;

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC SetBestLootRarityInInventory
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortRarity             NPC_BestLootRarityInInventory                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortRarity             NPC_BestLootRarityInventoryFound                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_ByteByte_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class UFortInventoryOwnerInterface>CallFunc_GetItemsFromInventoryOwner_InventoryOwner_CastInput     (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TArray<class UFortWorldItem*>      CallFunc_GetItemsFromInventoryOwner_Items                        (ReferenceParm)
// class FName                        CallFunc_GetEnumeratorName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWorldItem*              CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_BuildString_Name_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// enum class EFortRarity             CallFunc_GetRarity_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetEnumeratorName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_ByteByte_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::NPC_SetBestLootRarityInInventory(enum class EFortRarity* NPC_BestLootRarityInInventory, enum class EFortRarity NPC_BestLootRarityInventoryFound, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_Greater_ByteByte_ReturnValue, TScriptInterface<class UFortInventoryOwnerInterface> CallFunc_GetItemsFromInventoryOwner_InventoryOwner_CastInput, TArray<class UFortWorldItem*>& CallFunc_GetItemsFromInventoryOwner_Items, class FName CallFunc_GetEnumeratorName_ReturnValue, class UFortWorldItem* CallFunc_Array_Get_Item, const class FString& CallFunc_BuildString_Name_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, enum class EFortRarity CallFunc_GetRarity_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FName CallFunc_GetEnumeratorName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, bool CallFunc_Greater_ByteByte_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC SetBestLootRarityInInventory");

	Params::UNPC_Pawn_Parent_C_NPC_SetBestLootRarityInInventory_Params Parms{};

	Parms.NPC_BestLootRarityInventoryFound = NPC_BestLootRarityInventoryFound;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Greater_ByteByte_ReturnValue = CallFunc_Greater_ByteByte_ReturnValue;
	Parms.CallFunc_GetItemsFromInventoryOwner_InventoryOwner_CastInput = CallFunc_GetItemsFromInventoryOwner_InventoryOwner_CastInput;
	Parms.CallFunc_GetItemsFromInventoryOwner_Items = CallFunc_GetItemsFromInventoryOwner_Items;
	Parms.CallFunc_GetEnumeratorName_ReturnValue = CallFunc_GetEnumeratorName_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_BuildString_Name_ReturnValue = CallFunc_BuildString_Name_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetRarity_ReturnValue = CallFunc_GetRarity_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetEnumeratorName_ReturnValue_1 = CallFunc_GetEnumeratorName_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Greater_ByteByte_ReturnValue_1 = CallFunc_Greater_ByteByte_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NPC_BestLootRarityInInventory != nullptr)
		*NPC_BestLootRarityInInventory = Parms.NPC_BestLootRarityInInventory;

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnRep_NPC_AlertLevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::OnRep_NPC_AlertLevel(bool CallFunc_HasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "OnRep_NPC_AlertLevel");

	Params::UNPC_Pawn_Parent_C_OnRep_NPC_AlertLevel_Params Parms{};

	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC GetAlertLevelInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class Enum_NPC_AlertLevel     AlertLevel                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                AlertLevelTag                                                    (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// bool                               ValidDataFound                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_Map_Find_Value                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::NPC_GetAlertLevelInfo(enum class Enum_NPC_AlertLevel* AlertLevel, struct FGameplayTag* AlertLevelTag, bool* ValidDataFound, const struct FGameplayTag& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC GetAlertLevelInfo");

	Params::UNPC_Pawn_Parent_C_NPC_GetAlertLevelInfo_Params Parms{};

	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (AlertLevel != nullptr)
		*AlertLevel = Parms.AlertLevel;

	if (AlertLevelTag != nullptr)
		*AlertLevelTag = Parms.AlertLevelTag;

	if (ValidDataFound != nullptr)
		*ValidDataFound = Parms.ValidDataFound;

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC ApplyRecentlyDamagedTagGE
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      RecentlyDamagedOverride                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue              (NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue_1            (NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::NPC_ApplyRecentlyDamagedTagGE(class UClass* RecentlyDamagedOverride, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_IsValidClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC ApplyRecentlyDamagedTagGE");

	Params::UNPC_Pawn_Parent_C_NPC_ApplyRecentlyDamagedTagGE_Params Parms{};

	Parms.RecentlyDamagedOverride = RecentlyDamagedOverride;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue_1 = CallFunc_IsValidClass_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue = CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue_1 = CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.ShouldUpdateSkeletalMesh
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UNPC_Pawn_Parent_C::ShouldUpdateSkeletalMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "ShouldUpdateSkeletalMesh");

	Params::UNPC_Pawn_Parent_C_ShouldUpdateSkeletalMesh_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::UserConstructionScript(bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "UserConstructionScript");

	Params::UNPC_Pawn_Parent_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.Timeline_ScaleMeshInOrOut__FinishedFunc
// (BlueprintEvent)
// Parameters:

void UNPC_Pawn_Parent_C::Timeline_ScaleMeshInOrOut__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "Timeline_ScaleMeshInOrOut__FinishedFunc");

	Params::UNPC_Pawn_Parent_C_Timeline_ScaleMeshInOrOut__FinishedFunc_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.Timeline_ScaleMeshInOrOut__UpdateFunc
// (BlueprintEvent)
// Parameters:

void UNPC_Pawn_Parent_C::Timeline_ScaleMeshInOrOut__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "Timeline_ScaleMeshInOrOut__UpdateFunc");

	Params::UNPC_Pawn_Parent_C_Timeline_ScaleMeshInOrOut__UpdateFunc_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "ReceiveEndPlay");

	Params::UNPC_Pawn_Parent_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.WidgetVisibilityChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bVisible                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::WidgetVisibilityChanged(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "WidgetVisibilityChanged");

	Params::UNPC_Pawn_Parent_C_WidgetVisibilityChanged_Params Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC ParentLaunchVehicle
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActor*                      Vehicle                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Velocity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::NPC_ParentLaunchVehicle(class UActor* Vehicle, const struct FVector& Velocity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC ParentLaunchVehicle");

	Params::UNPC_Pawn_Parent_C_NPC_ParentLaunchVehicle_Params Parms{};

	Parms.Vehicle = Vehicle;
	Parms.Velocity = Velocity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.TestLoot
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPC_Pawn_Parent_C::TestLoot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "TestLoot");

	Params::UNPC_Pawn_Parent_C_TestLoot_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnDeathPlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       DamageTags                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                     Momentum                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitInfo                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UFortPawn*                   InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleEffectContext                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UNPC_Pawn_Parent_C::OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class UFortPawn* InstigatedBy, class UActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "OnDeathPlayEffects");

	Params::UNPC_Pawn_Parent_C_OnDeathPlayEffects_Params Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC UpdateHealthBarComponentVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPC_Pawn_Parent_C::NPC_UpdateHealthBarComponentVisibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC UpdateHealthBarComponentVisibility");

	Params::UNPC_Pawn_Parent_C_NPC_UpdateHealthBarComponentVisibility_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.ReceivePossessed
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class UController*                 NewController                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::ReceivePossessed(class UController* NewController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "ReceivePossessed");

	Params::UNPC_Pawn_Parent_C_ReceivePossessed_Params Parms{};

	Parms.NewController = NewController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.RequestUpdateNPCAlertLevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_NPC_AlertLevel     NPC_AlertLevel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::RequestUpdateNPCAlertLevel(enum class Enum_NPC_AlertLevel NPC_AlertLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "RequestUpdateNPCAlertLevel");

	Params::UNPC_Pawn_Parent_C_RequestUpdateNPCAlertLevel_Params Parms{};

	Parms.NPC_AlertLevel = NPC_AlertLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPCAlertLevelChangedClient
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_NPC_AlertLevel     NPC_AlertLevel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::NPCAlertLevelChangedClient(enum class Enum_NPC_AlertLevel NPC_AlertLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPCAlertLevelChangedClient");

	Params::UNPC_Pawn_Parent_C_NPCAlertLevelChangedClient_Params Parms{};

	Parms.NPC_AlertLevel = NPC_AlertLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC InitializeIdleVO
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPC_Pawn_Parent_C::NPC_InitializeIdleVO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC InitializeIdleVO");

	Params::UNPC_Pawn_Parent_C_NPC_InitializeIdleVO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.TriggerIdleVO
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPC_Pawn_Parent_C::TriggerIdleVO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "TriggerIdleVO");

	Params::UNPC_Pawn_Parent_C_TriggerIdleVO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnDeathServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       DamageTags                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                     Momentum                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitInfo                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UController*                 InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleEffectContext                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UNPC_Pawn_Parent_C::OnDeathServer(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class UController* InstigatedBy, class UActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "OnDeathServer");

	Params::UNPC_Pawn_Parent_C_OnDeathServer_Params Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPCEnableHealthBars
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPC_Pawn_Parent_C::NPCEnableHealthBars()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPCEnableHealthBars");

	Params::UNPC_Pawn_Parent_C_NPCEnableHealthBars_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPCDisableHealthBars
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPC_Pawn_Parent_C::NPCDisableHealthBars()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPCDisableHealthBars");

	Params::UNPC_Pawn_Parent_C_NPCDisableHealthBars_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.Debug_AlertLevel_ForceLevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_NPC_AlertLevel     NewNPC_AlertLevel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::Debug_AlertLevel_ForceLevel(enum class Enum_NPC_AlertLevel NewNPC_AlertLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "Debug_AlertLevel_ForceLevel");

	Params::UNPC_Pawn_Parent_C_Debug_AlertLevel_ForceLevel_Params Parms{};

	Parms.NewNPC_AlertLevel = NewNPC_AlertLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.Debug_AlertLevel_ClearDebug
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPC_Pawn_Parent_C::Debug_AlertLevel_ClearDebug()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "Debug_AlertLevel_ClearDebug");

	Params::UNPC_Pawn_Parent_C_Debug_AlertLevel_ClearDebug_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.Debug_ForceAlertLevel_Invalid
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPC_Pawn_Parent_C::Debug_ForceAlertLevel_Invalid()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "Debug_ForceAlertLevel_Invalid");

	Params::UNPC_Pawn_Parent_C_Debug_ForceAlertLevel_Invalid_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.Debug_ForceAlertLevel_Unaware
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPC_Pawn_Parent_C::Debug_ForceAlertLevel_Unaware()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "Debug_ForceAlertLevel_Unaware");

	Params::UNPC_Pawn_Parent_C_Debug_ForceAlertLevel_Unaware_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.Debug_ForceAlertLevel_NA
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPC_Pawn_Parent_C::Debug_ForceAlertLevel_NA()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "Debug_ForceAlertLevel_NA");

	Params::UNPC_Pawn_Parent_C_Debug_ForceAlertLevel_NA_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.Debug_ForceAlertLevel_Alerted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPC_Pawn_Parent_C::Debug_ForceAlertLevel_Alerted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "Debug_ForceAlertLevel_Alerted");

	Params::UNPC_Pawn_Parent_C_Debug_ForceAlertLevel_Alerted_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.Debug_ForceAlertLevel_Aggressive
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPC_Pawn_Parent_C::Debug_ForceAlertLevel_Aggressive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "Debug_ForceAlertLevel_Aggressive");

	Params::UNPC_Pawn_Parent_C_Debug_ForceAlertLevel_Aggressive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.HandleInteracts
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPC_Pawn_Parent_C::HandleInteracts()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "HandleInteracts");

	Params::UNPC_Pawn_Parent_C_HandleInteracts_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC Pawn Interact
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAIPawn*                 AI                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerController*       InteractingPlayerController                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EInteractionBeingAttemptedInteractionBeingAttempted                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::NPC_Pawn_Interact(class UFortAIPawn* AI, class UFortPlayerController* InteractingPlayerController, enum class EInteractionBeingAttempted InteractionBeingAttempted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC Pawn Interact");

	Params::UNPC_Pawn_Parent_C_NPC_Pawn_Interact_Params Parms{};

	Parms.AI = AI;
	Parms.InteractingPlayerController = InteractingPlayerController;
	Parms.InteractionBeingAttempted = InteractionBeingAttempted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.On NPC PawnInteractedWith
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActor*                      AIPawn                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             InteractingPlayerPawn                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::On_NPC_PawnInteractedWith(class UActor* AIPawn, class UFortPlayerPawn* InteractingPlayerPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "On NPC PawnInteractedWith");

	Params::UNPC_Pawn_Parent_C_On_NPC_PawnInteractedWith_Params Parms{};

	Parms.AIPawn = AIPawn;
	Parms.InteractingPlayerPawn = InteractingPlayerPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnBeginDeepWaterInteraction
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FVector                     WaterSurfaceLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              WaterDepth                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::OnBeginDeepWaterInteraction(const struct FVector& WaterSurfaceLocation, float WaterDepth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "OnBeginDeepWaterInteraction");

	Params::UNPC_Pawn_Parent_C_OnBeginDeepWaterInteraction_Params Parms{};

	Parms.WaterSurfaceLocation = WaterSurfaceLocation;
	Parms.WaterDepth = WaterDepth;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC LeaderSet
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success_                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      Leader                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EUnconvertReason        UnconvertReason                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::NPC_LeaderSet(bool Success_, class UActor* Leader, enum class EUnconvertReason UnconvertReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC LeaderSet");

	Params::UNPC_Pawn_Parent_C_NPC_LeaderSet_Params Parms{};

	Parms.Success_ = Success_;
	Parms.Leader = Leader;
	Parms.UnconvertReason = UnconvertReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.GrantStartingItems
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPC_Pawn_Parent_C::GrantStartingItems()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "GrantStartingItems");

	Params::UNPC_Pawn_Parent_C_GrantStartingItems_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.TestIsInSafeZone
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPC_Pawn_Parent_C::TestIsInSafeZone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "TestIsInSafeZone");

	Params::UNPC_Pawn_Parent_C_TestIsInSafeZone_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void UNPC_Pawn_Parent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "ReceiveBeginPlay");

	Params::UNPC_Pawn_Parent_C_ReceiveBeginPlay_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.TryToDespawnDueToStorm
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Reset_Timer                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::TryToDespawnDueToStorm(bool Reset_Timer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "TryToDespawnDueToStorm");

	Params::UNPC_Pawn_Parent_C_TryToDespawnDueToStorm_Params Parms{};

	Parms.Reset_Timer = Reset_Timer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.InitializeTestInSafeZone
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPC_Pawn_Parent_C::InitializeTestInSafeZone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "InitializeTestInSafeZone");

	Params::UNPC_Pawn_Parent_C_InitializeTestInSafeZone_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnDamageServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       DamageTags                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                     Momentum                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitInfo                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UController*                 InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleEffectContext                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UNPC_Pawn_Parent_C::OnDamageServer(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class UController* InstigatedBy, class UActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "OnDamageServer");

	Params::UNPC_Pawn_Parent_C_OnDamageServer_Params Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.DespawnDueToStorm
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPC_Pawn_Parent_C::DespawnDueToStorm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "DespawnDueToStorm");

	Params::UNPC_Pawn_Parent_C_DespawnDueToStorm_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.TriggerDeathFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPC_Pawn_Parent_C::TriggerDeathFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "TriggerDeathFX");

	Params::UNPC_Pawn_Parent_C_TriggerDeathFX_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnEndDance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPC_Pawn_Parent_C::OnEndDance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "OnEndDance");

	Params::UNPC_Pawn_Parent_C_OnEndDance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnBeginDance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPC_Pawn_Parent_C::OnBeginDance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "OnBeginDance");

	Params::UNPC_Pawn_Parent_C_OnBeginDance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.End Music Tracker
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPC_Pawn_Parent_C::End_Music_Tracker()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "End Music Tracker");

	Params::UNPC_Pawn_Parent_C_End_Music_Tracker_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.BeginMusicTracker
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPC_Pawn_Parent_C::BeginMusicTracker()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "BeginMusicTracker");

	Params::UNPC_Pawn_Parent_C_BeginMusicTracker_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.StopUpdatingHealthBarWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPC_Pawn_Parent_C::StopUpdatingHealthBarWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "StopUpdatingHealthBarWidget");

	Params::UNPC_Pawn_Parent_C_StopUpdatingHealthBarWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.RemoveSoundSystemLibraries
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPC_Pawn_Parent_C::RemoveSoundSystemLibraries()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "RemoveSoundSystemLibraries");

	Params::UNPC_Pawn_Parent_C_RemoveSoundSystemLibraries_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.AddSoundSystemLibraries
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPC_Pawn_Parent_C::AddSoundSystemLibraries()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "AddSoundSystemLibraries");

	Params::UNPC_Pawn_Parent_C_AddSoundSystemLibraries_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.InitializeInventory
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPC_Pawn_Parent_C::InitializeInventory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "InitializeInventory");

	Params::UNPC_Pawn_Parent_C_InitializeInventory_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.StartUpdatingHleathBarWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPC_Pawn_Parent_C::StartUpdatingHleathBarWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "StartUpdatingHleathBarWidget");

	Params::UNPC_Pawn_Parent_C_StartUpdatingHleathBarWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC AlertLevelChangedServer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_NPC_AlertLevel     NPCAlertLevel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::NPC_AlertLevelChangedServer(enum class Enum_NPC_AlertLevel NPCAlertLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC AlertLevelChangedServer");

	Params::UNPC_Pawn_Parent_C_NPC_AlertLevelChangedServer_Params Parms{};

	Parms.NPCAlertLevel = NPCAlertLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnPawnHealthChanged_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPC_Pawn_Parent_C::OnPawnHealthChanged_Event_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "OnPawnHealthChanged_Event_0");

	Params::UNPC_Pawn_Parent_C_OnPawnHealthChanged_Event_0_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnEnteredWaterBody
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortWaterBodyActor*         WaterBody                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bIsFirstBody                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::OnEnteredWaterBody(class UFortWaterBodyActor* WaterBody, bool bIsFirstBody)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "OnEnteredWaterBody");

	Params::UNPC_Pawn_Parent_C_OnEnteredWaterBody_Params Parms{};

	Parms.WaterBody = WaterBody;
	Parms.bIsFirstBody = bIsFirstBody;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnExitedWaterBody
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortWaterBodyActor*         WaterBody                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bIsLastBody                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::OnExitedWaterBody(class UFortWaterBodyActor* WaterBody, bool bIsLastBody)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "OnExitedWaterBody");

	Params::UNPC_Pawn_Parent_C_OnExitedWaterBody_Params Parms{};

	Parms.WaterBody = WaterBody;
	Parms.bIsLastBody = bIsLastBody;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.LuredOnServer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_NPC_AlertLevel     AlertLevel                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::LuredOnServer(enum class Enum_NPC_AlertLevel AlertLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "LuredOnServer");

	Params::UNPC_Pawn_Parent_C_LuredOnServer_Params Parms{};

	Parms.AlertLevel = AlertLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.LuredInterest
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPC_Pawn_Parent_C::LuredInterest()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "LuredInterest");

	Params::UNPC_Pawn_Parent_C_LuredInterest_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.PlayEnterWaterSplash
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortWaterBodyActor*         Water_Body                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::PlayEnterWaterSplash(class UFortWaterBodyActor* Water_Body)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "PlayEnterWaterSplash");

	Params::UNPC_Pawn_Parent_C_PlayEnterWaterSplash_Params Parms{};

	Parms.Water_Body = Water_Body;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.PlayExitWaterSplash
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortWaterBodyActor*         Water_Body                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::PlayExitWaterSplash(class UFortWaterBodyActor* Water_Body)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "PlayExitWaterSplash");

	Params::UNPC_Pawn_Parent_C_PlayExitWaterSplash_Params Parms{};

	Parms.Water_Body = Water_Body;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.TryWaterInteractionDrown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPC_Pawn_Parent_C::TryWaterInteractionDrown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "TryWaterInteractionDrown");

	Params::UNPC_Pawn_Parent_C_TryWaterInteractionDrown_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.StopTestingIsInSafeZone
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPC_Pawn_Parent_C::StopTestingIsInSafeZone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "StopTestingIsInSafeZone");

	Params::UNPC_Pawn_Parent_C_StopTestingIsInSafeZone_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPCScaleMeshIn
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPC_Pawn_Parent_C::NPCScaleMeshIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPCScaleMeshIn");

	Params::UNPC_Pawn_Parent_C_NPCScaleMeshIn_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPCScaleMeshOut
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPC_Pawn_Parent_C::NPCScaleMeshOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPCScaleMeshOut");

	Params::UNPC_Pawn_Parent_C_NPCScaleMeshOut_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.TriggerDespawnAbility
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPC_Pawn_Parent_C::TriggerDespawnAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "TriggerDespawnAbility");

	Params::UNPC_Pawn_Parent_C_TriggerDespawnAbility_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC MulticastGameplayCueDeath
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPC_Pawn_Parent_C::NPC_MulticastGameplayCueDeath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC MulticastGameplayCueDeath");

	Params::UNPC_Pawn_Parent_C_NPC_MulticastGameplayCueDeath_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.UpdateSoundLibFoley
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPC_Pawn_Parent_C::UpdateSoundLibFoley()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "UpdateSoundLibFoley");

	Params::UNPC_Pawn_Parent_C_UpdateSoundLibFoley_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnDamagePlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       DamageTags                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                     Momentum                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitInfo                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UFortPawn*                   InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleEffectContext                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UNPC_Pawn_Parent_C::OnDamagePlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class UFortPawn* InstigatedBy, class UActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "OnDamagePlayEffects");

	Params::UNPC_Pawn_Parent_C_OnDamagePlayEffects_Params Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.AdditiveHitReactDelay
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPC_Pawn_Parent_C::AdditiveHitReactDelay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "AdditiveHitReactDelay");

	Params::UNPC_Pawn_Parent_C_AdditiveHitReactDelay_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.UpdateCustomDepth
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPC_Pawn_Parent_C::UpdateCustomDepth()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "UpdateCustomDepth");

	Params::UNPC_Pawn_Parent_C_UpdateCustomDepth_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.ExecuteUbergraph_NPC_Pawn_Parent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UpdateSoundLibraryCollection_ValidLibraries             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundLibrarySubsystem*      CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      K2Node_CustomEvent_Vehicle                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Velocity                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortRarity             CallFunc_NPC_SetBestLootRarityInInventory_NPC_BestLootRarityInInventory(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Damage_3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_Event_DamageTags_3                                        (ConstParm)
// struct FVector                     K2Node_Event_Momentum_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_HitInfo_3                                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UFortPawn*                   K2Node_Event_InstigatedBy_3                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      K2Node_Event_DamageCauser_3                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleK2Node_Event_EffectContext_3                                     (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UController*                 K2Node_Event_NewController                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_MakeLiteralGameplayTagContainer_ReturnValue             (None)
// bool                               CallFunc_NotEqual_GameplayTagContainer_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGameplayDataTrackerComponentManager*CallFunc_GetCurrent_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_NPC_AlertLevel     K2Node_CustomEvent_NPC_AlertLevel_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_NPC_AlertLevel     K2Node_CustomEvent_NPC_AlertLevel                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Damage_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_Event_DamageTags_2                                        (ConstParm)
// struct FVector                     K2Node_Event_Momentum_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_HitInfo_2                                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UController*                 K2Node_Event_InstigatedBy_2                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      K2Node_Event_DamageCauser_2                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleK2Node_Event_EffectContext_2                                     (None)
// bool                               CallFunc_NPC_TryToDropLootOnDeath_CanDropLoot                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NPC_GetScalableFloatHotfixValue_AsBool                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNPCStatusWidget_C*          K2Node_DynamicCast_AsNPCStatus_Widget                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_NPC_AlertLevel     K2Node_CustomEvent_NewNPC_AlertLevel                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAIPawn*                 K2Node_CustomEvent_AI                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerController*       K2Node_CustomEvent_InteractingPlayerController                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EInteractionBeingAttemptedK2Node_CustomEvent_InteractionBeingAttempted                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      K2Node_CustomEvent_AIPawn                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             K2Node_CustomEvent_InteractingPlayerPawn                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bVisible                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_WaterSurfaceLocation                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_WaterDepth                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Success_                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      K2Node_CustomEvent_Leader                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EUnconvertReason        K2Node_CustomEvent_UnconvertReason                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NPC_UpdateInteract_EnabledInteract                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NPC_UpdateInteract_EnabledInteract_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      CallFunc_MakeGameplayCueParameters_ReturnValue                   (ContainsInstancedReference)
// bool                               CallFunc_NPC_CheckIsInSafeZone_TestSucceeded                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NPC_CheckIsInSafeZone_isInSafeZone                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Reset_Timer                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Damage_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_Event_DamageTags_1                                        (ConstParm)
// struct FVector                     K2Node_Event_Momentum_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_HitInfo_1                                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UController*                 K2Node_Event_InstigatedBy_1                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      K2Node_Event_DamageCauser_1                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleK2Node_Event_EffectContext_1                                     (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_2          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_3          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_3               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Select_Default                                            (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PlayVoiceLine_Success                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_NPC_AlertLevel     CallFunc_NPC_GetAlertLevelInfo_AlertLevel                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_NPC_GetAlertLevelInfo_AlertLevelTag                     (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NPC_GetAlertLevelInfo_ValidDataFound                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_2                       (NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_NPC_AlertLevel     K2Node_CustomEvent_NPCAlertLevel                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_MakeStruct_GameplayEventData                              (None)
// struct FGameplayEventData          K2Node_MakeStruct_GameplayEventData_1                            (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWaterBodyActor*         K2Node_Event_WaterBody_1                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsFirstBody                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWaterBodyActor*         K2Node_Event_WaterBody                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsLastBody                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGameplayDataTrackerComponentManager*CallFunc_GetCurrent_ReturnValue_1                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_NPC_AlertLevel     K2Node_CustomEvent_AlertLevel                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetValueAsObject_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortProjectileBase*         K2Node_DynamicCast_AsFort_Projectile_Base                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      CallFunc_MakeGameplayCueParameters_ReturnValue_1                 (ContainsInstancedReference)
// class UFortPickup*                 K2Node_DynamicCast_AsFort_Pickup                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundLibrarySubsystem*      CallFunc_GetWorldSubsystem_ReturnValue_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundLibrarySubsystem*      CallFunc_GetWorldSubsystem_ReturnValue_2                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue                (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveActiveGameplayEffect_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWaterBodyActor*         K2Node_CustomEvent_Water_Body_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortWaterBodyActor*         K2Node_CustomEvent_Water_Body                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_1           (None)
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_4                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_4          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_4               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_5                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_5          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_5               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_6                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_6          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_6               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_7                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_7          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_7               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_8                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_8          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_8               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1              (NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_2              (NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_3              (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NPC_GetSafeZonePhase_SafeZonePhase                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNPCStatusWidget_C*          K2Node_DynamicCast_AsNPCStatus_Widget_1                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryActivateAbilitiesByTag_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_2           (None)
// struct FGameplayTagContainer       CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_3           (None)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_GameplayTagContainer_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NPC_CanBeInteractedWith_CanInteract                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NPC_CanBeInteractedWith_CanInteract_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NPC_UpdateInteract_EnabledInteract_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NPC_UpdateInteract_EnabledInteract_3                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue_2                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNPCStatusWidget_C*          K2Node_DynamicCast_AsNPCStatus_Widget_2                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      CallFunc_MakeGameplayCueParameters_ReturnValue_2                 (ContainsInstancedReference)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue                      (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_GameplayTag_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_NPC_AlertLevel     CallFunc_NPC_GetAlertLevelInfo_AlertLevel_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_NPC_GetAlertLevelInfo_AlertLevelTag_1                   (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NPC_GetAlertLevelInfo_ValidDataFound_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGameplayDataTrackerComponentManager*CallFunc_GetCurrent_ReturnValue_2                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_4              (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class UAudioParameterControllerInterface>CallFunc_SetIntParameter_self_CastInput                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_13                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Damage                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_Event_DamageTags                                          (ConstParm)
// struct FVector                     K2Node_Event_Momentum                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_HitInfo                                             (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UFortPawn*                   K2Node_Event_InstigatedBy                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      K2Node_Event_DamageCauser                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleK2Node_Event_EffectContext                                       (None)
// class UFortProjectileBase*         K2Node_DynamicCast_AsFort_Projectile_Base_1                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWeapon*                 K2Node_DynamicCast_AsFort_Weapon                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDamageZone         CallFunc_GetDamageZone_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_WeaponDataHasAnyMatchingGameplayTags_ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_14                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_15                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_16                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue_3                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_1                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNPCStatusWidget_C*          K2Node_DynamicCast_AsNPCStatus_Widget_3                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_17                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsConverted_IsConverted                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRenderCustomDepthEnabled_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_3                       (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_18                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_19                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveActiveGameplayEffect_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanActivateAbilityWithMatchingTag_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryActivateAbilitiesByTag_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_9                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_9          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_9               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_10               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_10         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_10              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VLerp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_20                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryActivateAbilitiesByTag_ReturnValue_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_21                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_WasRecentlyRendered_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyMatchingGameplayTags_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_8                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_9                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UpdateSoundLibraryCollection_ValidLibraries_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_10                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UpdateSoundLibraryCollection_ValidLibraries_2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryActivateAbilitiesByTag_ReturnValue_3                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_22                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_Min_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_Max_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeGameplayCueParameters_RawMagnitude_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeGameplayCueParameters_RawMagnitude_ImplicitCast_1   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimer_Time_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_3                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Update_DeltaTime_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::ExecuteUbergraph_NPC_Pawn_Parent(int32 EntryPoint, bool CallFunc_UpdateSoundLibraryCollection_ValidLibraries, class USoundLibrarySubsystem* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class UActor* K2Node_CustomEvent_Vehicle, const struct FVector& K2Node_CustomEvent_Velocity, bool CallFunc_IsDedicatedServer_ReturnValue, enum class EFortRarity CallFunc_NPC_SetBestLootRarityInInventory_NPC_BestLootRarityInInventory, float K2Node_Event_Damage_3, const struct FGameplayTagContainer& K2Node_Event_DamageTags_3, const struct FVector& K2Node_Event_Momentum_3, const struct FHitResult& K2Node_Event_HitInfo_3, class UFortPawn* K2Node_Event_InstigatedBy_3, class UActor* K2Node_Event_DamageCauser_3, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext_3, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class UController* K2Node_Event_NewController, const struct FGameplayTagContainer& CallFunc_MakeLiteralGameplayTagContainer_ReturnValue, bool CallFunc_NotEqual_GameplayTagContainer_ReturnValue, class UFortGameplayDataTrackerComponentManager* CallFunc_GetCurrent_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue_1, enum class Enum_NPC_AlertLevel K2Node_CustomEvent_NPC_AlertLevel_1, enum class Enum_NPC_AlertLevel K2Node_CustomEvent_NPC_AlertLevel, bool CallFunc_NotEqual_ByteByte_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, double CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float K2Node_Event_Damage_2, const struct FGameplayTagContainer& K2Node_Event_DamageTags_2, const struct FVector& K2Node_Event_Momentum_2, const struct FHitResult& K2Node_Event_HitInfo_2, class UController* K2Node_Event_InstigatedBy_2, class UActor* K2Node_Event_DamageCauser_2, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext_2, bool CallFunc_NPC_TryToDropLootOnDeath_CanDropLoot, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_NPC_GetScalableFloatHotfixValue_AsBool, int32 CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded, double CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat, bool CallFunc_Greater_DoubleDouble_ReturnValue, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UNPCStatusWidget_C* K2Node_DynamicCast_AsNPCStatus_Widget, bool K2Node_DynamicCast_bSuccess, enum class Enum_NPC_AlertLevel K2Node_CustomEvent_NewNPC_AlertLevel, class UFortAIPawn* K2Node_CustomEvent_AI, class UFortPlayerController* K2Node_CustomEvent_InteractingPlayerController, enum class EInteractionBeingAttempted K2Node_CustomEvent_InteractionBeingAttempted, class UActor* K2Node_CustomEvent_AIPawn, class UFortPlayerPawn* K2Node_CustomEvent_InteractingPlayerPawn, class UFortPlayerPawn* CallFunc_GetPlayerPawn_ReturnValue, bool K2Node_CustomEvent_bVisible, const struct FVector& K2Node_Event_WaterSurfaceLocation, float K2Node_Event_WaterDepth, bool K2Node_CustomEvent_Success_, class UActor* K2Node_CustomEvent_Leader, enum class EUnconvertReason K2Node_CustomEvent_UnconvertReason, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_NPC_UpdateInteract_EnabledInteract, bool CallFunc_NPC_UpdateInteract_EnabledInteract_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, bool CallFunc_NPC_CheckIsInSafeZone_TestSucceeded, bool CallFunc_NPC_CheckIsInSafeZone_isInSafeZone, bool CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_1, int32 CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_1, double CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, double CallFunc_RandomFloatInRange_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool K2Node_CustomEvent_Reset_Timer, float K2Node_Event_Damage_1, const struct FGameplayTagContainer& K2Node_Event_DamageTags_1, const struct FVector& K2Node_Event_Momentum_1, const struct FHitResult& K2Node_Event_HitInfo_1, class UController* K2Node_Event_InstigatedBy_1, class UActor* K2Node_Event_DamageCauser_1, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_2, int32 CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_2, double CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_2, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_3, bool CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_3, int32 CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_3, double CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_3, bool Temp_bool_Variable, bool CallFunc_BooleanAND_ReturnValue_1, const struct FGameplayTag& K2Node_Select_Default, bool CallFunc_PlayVoiceLine_Success, enum class Enum_NPC_AlertLevel CallFunc_NPC_GetAlertLevelInfo_AlertLevel, const struct FGameplayTag& CallFunc_NPC_GetAlertLevelInfo_AlertLevelTag, bool CallFunc_NPC_GetAlertLevelInfo_ValidDataFound, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_HasAuthority_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_2, bool Temp_bool_Has_Been_Initd_Variable, enum class Enum_NPC_AlertLevel K2Node_CustomEvent_NPCAlertLevel, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool Temp_bool_IsClosed_Variable, class UFortWaterBodyActor* K2Node_Event_WaterBody_1, bool K2Node_Event_bIsFirstBody, class UFortWaterBodyActor* K2Node_Event_WaterBody, bool K2Node_Event_bIsLastBody, class UFortGameplayDataTrackerComponentManager* CallFunc_GetCurrent_ReturnValue_1, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, enum class Enum_NPC_AlertLevel K2Node_CustomEvent_AlertLevel, bool K2Node_SwitchEnum_CmpSuccess_2, class UObject* CallFunc_GetValueAsObject_ReturnValue, class UFortProjectileBase* K2Node_DynamicCast_AsFort_Projectile_Base, bool K2Node_DynamicCast_bSuccess_1, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue_1, class UFortPickup* K2Node_DynamicCast_AsFort_Pickup, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsGameplayTagValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class USoundLibrarySubsystem* CallFunc_GetWorldSubsystem_ReturnValue_1, class USoundLibrarySubsystem* CallFunc_GetWorldSubsystem_ReturnValue_2, bool CallFunc_IsValidClass_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, bool CallFunc_IsValidClass_ReturnValue_1, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue, class UFortWaterBodyActor* K2Node_CustomEvent_Water_Body_1, class UFortWaterBodyActor* K2Node_CustomEvent_Water_Body, const struct FGameplayTagContainer& CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_1, bool CallFunc_K2_IsValidTimerHandle_ReturnValue_1, bool CallFunc_K2_IsValidTimerHandle_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_4, int32 CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_4, double CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_4, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_5, int32 CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_5, double CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_5, bool CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_6, int32 CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_6, double CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_6, bool CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_7, int32 CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_7, double CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_7, bool CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_8, int32 CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_8, double CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_8, bool CallFunc_IsGameplayTagValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_2, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_3, int32 CallFunc_NPC_GetSafeZonePhase_SafeZonePhase, bool CallFunc_IsValid_ReturnValue_8, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_1, class UNPCStatusWidget_C* K2Node_DynamicCast_AsNPCStatus_Widget_1, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_TryActivateAbilitiesByTag_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_2, const struct FGameplayTagContainer& CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_9, bool CallFunc_NotEqual_GameplayTagContainer_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_10, bool CallFunc_NPC_CanBeInteractedWith_CanInteract, bool CallFunc_NPC_CanBeInteractedWith_CanInteract_1, bool CallFunc_NPC_UpdateInteract_EnabledInteract_2, bool CallFunc_NPC_UpdateInteract_EnabledInteract_3, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_11, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_2, class UNPCStatusWidget_C* K2Node_DynamicCast_AsNPCStatus_Widget_2, bool K2Node_DynamicCast_bSuccess_4, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue_2, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, bool CallFunc_NotEqual_GameplayTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4, enum class Enum_NPC_AlertLevel CallFunc_NPC_GetAlertLevelInfo_AlertLevel_1, const struct FGameplayTag& CallFunc_NPC_GetAlertLevelInfo_AlertLevelTag_1, bool CallFunc_NPC_GetAlertLevelInfo_ValidDataFound_1, class UFortGameplayDataTrackerComponentManager* CallFunc_GetCurrent_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_12, bool CallFunc_IsValidClass_ReturnValue_2, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, int32 CallFunc_Conv_BoolToInt_ReturnValue, TScriptInterface<class UAudioParameterControllerInterface> CallFunc_SetIntParameter_self_CastInput, bool CallFunc_IsDedicatedServer_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_IsValid_ReturnValue_13, float K2Node_Event_Damage, const struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, const struct FHitResult& K2Node_Event_HitInfo, class UFortPawn* K2Node_Event_InstigatedBy, class UActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, class UFortProjectileBase* K2Node_DynamicCast_AsFort_Projectile_Base_1, bool K2Node_DynamicCast_bSuccess_5, class UFortWeapon* K2Node_DynamicCast_AsFort_Weapon, bool K2Node_DynamicCast_bSuccess_6, enum class EFortDamageZone CallFunc_GetDamageZone_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_3, bool CallFunc_WeaponDataHasAnyMatchingGameplayTags_ReturnValue, bool CallFunc_IsValid_ReturnValue_14, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_15, bool CallFunc_IsValid_ReturnValue_16, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_3, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, class UNPCStatusWidget_C* K2Node_DynamicCast_AsNPCStatus_Widget_3, bool K2Node_DynamicCast_bSuccess_7, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_17, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue_1, bool CallFunc_IsConverted_IsConverted, bool CallFunc_IsRenderCustomDepthEnabled_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_3, bool CallFunc_IsGameplayTagValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_18, bool CallFunc_IsValid_ReturnValue_19, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue_1, bool CallFunc_CanActivateAbilityWithMatchingTag_ReturnValue, bool CallFunc_TryActivateAbilitiesByTag_ReturnValue_1, bool CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_9, int32 CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_9, double CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_9, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_6, bool CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_10, int32 CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_10, double CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_10, bool CallFunc_BooleanAND_ReturnValue_6, bool K2Node_SwitchEnum_CmpSuccess_4, bool K2Node_SwitchEnum_CmpSuccess_5, const struct FVector& CallFunc_VLerp_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_20, bool CallFunc_TryActivateAbilitiesByTag_ReturnValue_2, double CallFunc_GetGameTimeInSeconds_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_21, bool CallFunc_WasRecentlyRendered_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_7, bool CallFunc_BooleanAND_ReturnValue_7, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_8, bool CallFunc_BooleanAND_ReturnValue_8, bool CallFunc_HasTag_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_9, bool CallFunc_UpdateSoundLibraryCollection_ValidLibraries_1, bool CallFunc_BooleanAND_ReturnValue_10, bool CallFunc_UpdateSoundLibraryCollection_ValidLibraries_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool CallFunc_TryActivateAbilitiesByTag_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_22, float CallFunc_Delay_Duration_ImplicitCast, double CallFunc_RandomFloatInRange_Min_ImplicitCast, double CallFunc_RandomFloatInRange_Max_ImplicitCast, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast_1, float CallFunc_MakeGameplayCueParameters_RawMagnitude_ImplicitCast, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_2, float CallFunc_MakeGameplayCueParameters_RawMagnitude_ImplicitCast_1, float CallFunc_K2_SetTimer_Time_ImplicitCast, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_3, float CallFunc_Update_DeltaTime_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "ExecuteUbergraph_NPC_Pawn_Parent");

	Params::UNPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_UpdateSoundLibraryCollection_ValidLibraries = CallFunc_UpdateSoundLibraryCollection_ValidLibraries;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_CustomEvent_Vehicle = K2Node_CustomEvent_Vehicle;
	Parms.K2Node_CustomEvent_Velocity = K2Node_CustomEvent_Velocity;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_NPC_SetBestLootRarityInInventory_NPC_BestLootRarityInInventory = CallFunc_NPC_SetBestLootRarityInInventory_NPC_BestLootRarityInInventory;
	Parms.K2Node_Event_Damage_3 = K2Node_Event_Damage_3;
	Parms.K2Node_Event_DamageTags_3 = K2Node_Event_DamageTags_3;
	Parms.K2Node_Event_Momentum_3 = K2Node_Event_Momentum_3;
	Parms.K2Node_Event_HitInfo_3 = K2Node_Event_HitInfo_3;
	Parms.K2Node_Event_InstigatedBy_3 = K2Node_Event_InstigatedBy_3;
	Parms.K2Node_Event_DamageCauser_3 = K2Node_Event_DamageCauser_3;
	Parms.K2Node_Event_EffectContext_3 = K2Node_Event_EffectContext_3;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.K2Node_Event_NewController = K2Node_Event_NewController;
	Parms.CallFunc_MakeLiteralGameplayTagContainer_ReturnValue = CallFunc_MakeLiteralGameplayTagContainer_ReturnValue;
	Parms.CallFunc_NotEqual_GameplayTagContainer_ReturnValue = CallFunc_NotEqual_GameplayTagContainer_ReturnValue;
	Parms.CallFunc_GetCurrent_ReturnValue = CallFunc_GetCurrent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.K2Node_CustomEvent_NPC_AlertLevel_1 = K2Node_CustomEvent_NPC_AlertLevel_1;
	Parms.K2Node_CustomEvent_NPC_AlertLevel = K2Node_CustomEvent_NPC_AlertLevel;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_1 = CallFunc_GetValueAtLevel_ReturnValue_1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Event_Damage_2 = K2Node_Event_Damage_2;
	Parms.K2Node_Event_DamageTags_2 = K2Node_Event_DamageTags_2;
	Parms.K2Node_Event_Momentum_2 = K2Node_Event_Momentum_2;
	Parms.K2Node_Event_HitInfo_2 = K2Node_Event_HitInfo_2;
	Parms.K2Node_Event_InstigatedBy_2 = K2Node_Event_InstigatedBy_2;
	Parms.K2Node_Event_DamageCauser_2 = K2Node_Event_DamageCauser_2;
	Parms.K2Node_Event_EffectContext_2 = K2Node_Event_EffectContext_2;
	Parms.CallFunc_NPC_TryToDropLootOnDeath_CanDropLoot = CallFunc_NPC_TryToDropLootOnDeath_CanDropLoot;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsBool = CallFunc_NPC_GetScalableFloatHotfixValue_AsBool;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded = CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat = CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue = CallFunc_GetUserWidgetObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsNPCStatus_Widget = K2Node_DynamicCast_AsNPCStatus_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_NewNPC_AlertLevel = K2Node_CustomEvent_NewNPC_AlertLevel;
	Parms.K2Node_CustomEvent_AI = K2Node_CustomEvent_AI;
	Parms.K2Node_CustomEvent_InteractingPlayerController = K2Node_CustomEvent_InteractingPlayerController;
	Parms.K2Node_CustomEvent_InteractionBeingAttempted = K2Node_CustomEvent_InteractionBeingAttempted;
	Parms.K2Node_CustomEvent_AIPawn = K2Node_CustomEvent_AIPawn;
	Parms.K2Node_CustomEvent_InteractingPlayerPawn = K2Node_CustomEvent_InteractingPlayerPawn;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.K2Node_CustomEvent_bVisible = K2Node_CustomEvent_bVisible;
	Parms.K2Node_Event_WaterSurfaceLocation = K2Node_Event_WaterSurfaceLocation;
	Parms.K2Node_Event_WaterDepth = K2Node_Event_WaterDepth;
	Parms.K2Node_CustomEvent_Success_ = K2Node_CustomEvent_Success_;
	Parms.K2Node_CustomEvent_Leader = K2Node_CustomEvent_Leader;
	Parms.K2Node_CustomEvent_UnconvertReason = K2Node_CustomEvent_UnconvertReason;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_NPC_UpdateInteract_EnabledInteract = CallFunc_NPC_UpdateInteract_EnabledInteract;
	Parms.CallFunc_NPC_UpdateInteract_EnabledInteract_1 = CallFunc_NPC_UpdateInteract_EnabledInteract_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_MakeGameplayCueParameters_ReturnValue = CallFunc_MakeGameplayCueParameters_ReturnValue;
	Parms.CallFunc_NPC_CheckIsInSafeZone_TestSucceeded = CallFunc_NPC_CheckIsInSafeZone_TestSucceeded;
	Parms.CallFunc_NPC_CheckIsInSafeZone_isInSafeZone = CallFunc_NPC_CheckIsInSafeZone_isInSafeZone;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_1 = CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_1;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_1 = CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_1;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_1 = CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_HasAuthority_ReturnValue_2 = CallFunc_HasAuthority_ReturnValue_2;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CustomEvent_Reset_Timer = K2Node_CustomEvent_Reset_Timer;
	Parms.K2Node_Event_Damage_1 = K2Node_Event_Damage_1;
	Parms.K2Node_Event_DamageTags_1 = K2Node_Event_DamageTags_1;
	Parms.K2Node_Event_Momentum_1 = K2Node_Event_Momentum_1;
	Parms.K2Node_Event_HitInfo_1 = K2Node_Event_HitInfo_1;
	Parms.K2Node_Event_InstigatedBy_1 = K2Node_Event_InstigatedBy_1;
	Parms.K2Node_Event_DamageCauser_1 = K2Node_Event_DamageCauser_1;
	Parms.K2Node_Event_EffectContext_1 = K2Node_Event_EffectContext_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_2 = CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_2;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_2 = CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_2;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_2 = CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_2;
	Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue = CallFunc_K2_IsValidTimerHandle_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue_3 = CallFunc_HasAuthority_ReturnValue_3;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_3 = CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_3;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_3 = CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_3;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_3 = CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_3;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PlayVoiceLine_Success = CallFunc_PlayVoiceLine_Success;
	Parms.CallFunc_NPC_GetAlertLevelInfo_AlertLevel = CallFunc_NPC_GetAlertLevelInfo_AlertLevel;
	Parms.CallFunc_NPC_GetAlertLevelInfo_AlertLevelTag = CallFunc_NPC_GetAlertLevelInfo_AlertLevelTag;
	Parms.CallFunc_NPC_GetAlertLevelInfo_ValidDataFound = CallFunc_NPC_GetAlertLevelInfo_ValidDataFound;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_HasAuthority_ReturnValue_4 = CallFunc_HasAuthority_ReturnValue_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_2 = CallFunc_K2_SetTimerDelegate_ReturnValue_2;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_CustomEvent_NPCAlertLevel = K2Node_CustomEvent_NPCAlertLevel;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_MakeStruct_GameplayEventData = K2Node_MakeStruct_GameplayEventData;
	Parms.K2Node_MakeStruct_GameplayEventData_1 = K2Node_MakeStruct_GameplayEventData_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_Event_WaterBody_1 = K2Node_Event_WaterBody_1;
	Parms.K2Node_Event_bIsFirstBody = K2Node_Event_bIsFirstBody;
	Parms.K2Node_Event_WaterBody = K2Node_Event_WaterBody;
	Parms.K2Node_Event_bIsLastBody = K2Node_Event_bIsLastBody;
	Parms.CallFunc_GetCurrent_ReturnValue_1 = CallFunc_GetCurrent_ReturnValue_1;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_CustomEvent_AlertLevel = K2Node_CustomEvent_AlertLevel;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_GetValueAsObject_ReturnValue = CallFunc_GetValueAsObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Projectile_Base = K2Node_DynamicCast_AsFort_Projectile_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_MakeGameplayCueParameters_ReturnValue_1 = CallFunc_MakeGameplayCueParameters_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsFort_Pickup = K2Node_DynamicCast_AsFort_Pickup;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue = CallFunc_IsGameplayTagValid_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_1 = CallFunc_GetWorldSubsystem_ReturnValue_1;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_2 = CallFunc_GetWorldSubsystem_ReturnValue_2;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue_1 = CallFunc_IsValidClass_ReturnValue_1;
	Parms.CallFunc_RemoveActiveGameplayEffect_ReturnValue = CallFunc_RemoveActiveGameplayEffect_ReturnValue;
	Parms.K2Node_CustomEvent_Water_Body_1 = K2Node_CustomEvent_Water_Body_1;
	Parms.K2Node_CustomEvent_Water_Body = K2Node_CustomEvent_Water_Body;
	Parms.CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_1 = CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_1;
	Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue_1 = CallFunc_K2_IsValidTimerHandle_ReturnValue_1;
	Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue_2 = CallFunc_K2_IsValidTimerHandle_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_4 = CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_4;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_4 = CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_4;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_4 = CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_4;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_5 = CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_5;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_5 = CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_5;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_5 = CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_5;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_6 = CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_6;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_6 = CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_6;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_6 = CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_6;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_7 = CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_7;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_7 = CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_7;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_7 = CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_7;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_8 = CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_8;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_8 = CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_8;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_8 = CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_8;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue_1 = CallFunc_IsGameplayTagValid_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1 = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_2 = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_2;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_3 = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_3;
	Parms.CallFunc_NPC_GetSafeZonePhase_SafeZonePhase = CallFunc_NPC_GetSafeZonePhase_SafeZonePhase;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue_1 = CallFunc_GetUserWidgetObject_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsNPCStatus_Widget_1 = K2Node_DynamicCast_AsNPCStatus_Widget_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_TryActivateAbilitiesByTag_ReturnValue = CallFunc_TryActivateAbilitiesByTag_ReturnValue;
	Parms.CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_2 = CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_2;
	Parms.CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_3 = CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_NotEqual_GameplayTagContainer_ReturnValue_1 = CallFunc_NotEqual_GameplayTagContainer_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.CallFunc_NPC_CanBeInteractedWith_CanInteract = CallFunc_NPC_CanBeInteractedWith_CanInteract;
	Parms.CallFunc_NPC_CanBeInteractedWith_CanInteract_1 = CallFunc_NPC_CanBeInteractedWith_CanInteract_1;
	Parms.CallFunc_NPC_UpdateInteract_EnabledInteract_2 = CallFunc_NPC_UpdateInteract_EnabledInteract_2;
	Parms.CallFunc_NPC_UpdateInteract_EnabledInteract_3 = CallFunc_NPC_UpdateInteract_EnabledInteract_3;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue_2 = CallFunc_GetUserWidgetObject_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsNPCStatus_Widget_2 = K2Node_DynamicCast_AsNPCStatus_Widget_2;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_MakeGameplayCueParameters_ReturnValue_2 = CallFunc_MakeGameplayCueParameters_ReturnValue_2;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue = CallFunc_MakeLiteralGameplayTag_ReturnValue;
	Parms.CallFunc_NotEqual_GameplayTag_ReturnValue = CallFunc_NotEqual_GameplayTag_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.CallFunc_NPC_GetAlertLevelInfo_AlertLevel_1 = CallFunc_NPC_GetAlertLevelInfo_AlertLevel_1;
	Parms.CallFunc_NPC_GetAlertLevelInfo_AlertLevelTag_1 = CallFunc_NPC_GetAlertLevelInfo_AlertLevelTag_1;
	Parms.CallFunc_NPC_GetAlertLevelInfo_ValidDataFound_1 = CallFunc_NPC_GetAlertLevelInfo_ValidDataFound_1;
	Parms.CallFunc_GetCurrent_ReturnValue_2 = CallFunc_GetCurrent_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_12 = CallFunc_IsValid_ReturnValue_12;
	Parms.CallFunc_IsValidClass_ReturnValue_2 = CallFunc_IsValidClass_ReturnValue_2;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_4 = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_4;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;
	Parms.CallFunc_SetIntParameter_self_CastInput = CallFunc_SetIntParameter_self_CastInput;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_1 = CallFunc_IsDedicatedServer_ReturnValue_1;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_Not_PreBool_ReturnValue_5 = CallFunc_Not_PreBool_ReturnValue_5;
	Parms.CallFunc_BooleanAND_ReturnValue_5 = CallFunc_BooleanAND_ReturnValue_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_IsValid_ReturnValue_13 = CallFunc_IsValid_ReturnValue_13;
	Parms.K2Node_Event_Damage = K2Node_Event_Damage;
	Parms.K2Node_Event_DamageTags = K2Node_Event_DamageTags;
	Parms.K2Node_Event_Momentum = K2Node_Event_Momentum;
	Parms.K2Node_Event_HitInfo = K2Node_Event_HitInfo;
	Parms.K2Node_Event_InstigatedBy = K2Node_Event_InstigatedBy;
	Parms.K2Node_Event_DamageCauser = K2Node_Event_DamageCauser;
	Parms.K2Node_Event_EffectContext = K2Node_Event_EffectContext;
	Parms.K2Node_DynamicCast_AsFort_Projectile_Base_1 = K2Node_DynamicCast_AsFort_Projectile_Base_1;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_DynamicCast_AsFort_Weapon = K2Node_DynamicCast_AsFort_Weapon;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_GetDamageZone_ReturnValue = CallFunc_GetDamageZone_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.CallFunc_WeaponDataHasAnyMatchingGameplayTags_ReturnValue = CallFunc_WeaponDataHasAnyMatchingGameplayTags_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_14 = CallFunc_IsValid_ReturnValue_14;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue = CallFunc_K2_GetComponentRotation_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_15 = CallFunc_IsValid_ReturnValue_15;
	Parms.CallFunc_IsValid_ReturnValue_16 = CallFunc_IsValid_ReturnValue_16;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue_3 = CallFunc_GetUserWidgetObject_ReturnValue_3;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue_1 = CallFunc_SpawnSoundAttached_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsNPCStatus_Widget_3 = K2Node_DynamicCast_AsNPCStatus_Widget_3;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_17 = CallFunc_IsValid_ReturnValue_17;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_1 = CallFunc_Array_IsValidIndex_ReturnValue_1;
	Parms.CallFunc_IsConverted_IsConverted = CallFunc_IsConverted_IsConverted;
	Parms.CallFunc_IsRenderCustomDepthEnabled_ReturnValue = CallFunc_IsRenderCustomDepthEnabled_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_3 = CallFunc_K2_SetTimerDelegate_ReturnValue_3;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue_2 = CallFunc_IsGameplayTagValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_18 = CallFunc_IsValid_ReturnValue_18;
	Parms.CallFunc_IsValid_ReturnValue_19 = CallFunc_IsValid_ReturnValue_19;
	Parms.CallFunc_RemoveActiveGameplayEffect_ReturnValue_1 = CallFunc_RemoveActiveGameplayEffect_ReturnValue_1;
	Parms.CallFunc_CanActivateAbilityWithMatchingTag_ReturnValue = CallFunc_CanActivateAbilityWithMatchingTag_ReturnValue;
	Parms.CallFunc_TryActivateAbilitiesByTag_ReturnValue_1 = CallFunc_TryActivateAbilitiesByTag_ReturnValue_1;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_9 = CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_9;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_9 = CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_9;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_9 = CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_9;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_2 = CallFunc_Greater_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_6 = CallFunc_Not_PreBool_ReturnValue_6;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_10 = CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_10;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_10 = CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_10;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_10 = CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_10;
	Parms.CallFunc_BooleanAND_ReturnValue_6 = CallFunc_BooleanAND_ReturnValue_6;
	Parms.K2Node_SwitchEnum_CmpSuccess_4 = K2Node_SwitchEnum_CmpSuccess_4;
	Parms.K2Node_SwitchEnum_CmpSuccess_5 = K2Node_SwitchEnum_CmpSuccess_5;
	Parms.CallFunc_VLerp_ReturnValue = CallFunc_VLerp_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_3 = CallFunc_Greater_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_20 = CallFunc_IsValid_ReturnValue_20;
	Parms.CallFunc_TryActivateAbilitiesByTag_ReturnValue_2 = CallFunc_TryActivateAbilitiesByTag_ReturnValue_2;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue_1 = CallFunc_GetGameTimeInSeconds_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_4 = CallFunc_Greater_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_21 = CallFunc_IsValid_ReturnValue_21;
	Parms.CallFunc_WasRecentlyRendered_ReturnValue = CallFunc_WasRecentlyRendered_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_7 = CallFunc_Not_PreBool_ReturnValue_7;
	Parms.CallFunc_BooleanAND_ReturnValue_7 = CallFunc_BooleanAND_ReturnValue_7;
	Parms.CallFunc_HasAnyMatchingGameplayTags_ReturnValue = CallFunc_HasAnyMatchingGameplayTags_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_8 = CallFunc_Not_PreBool_ReturnValue_8;
	Parms.CallFunc_BooleanAND_ReturnValue_8 = CallFunc_BooleanAND_ReturnValue_8;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_9 = CallFunc_BooleanAND_ReturnValue_9;
	Parms.CallFunc_UpdateSoundLibraryCollection_ValidLibraries_1 = CallFunc_UpdateSoundLibraryCollection_ValidLibraries_1;
	Parms.CallFunc_BooleanAND_ReturnValue_10 = CallFunc_BooleanAND_ReturnValue_10;
	Parms.CallFunc_UpdateSoundLibraryCollection_ValidLibraries_2 = CallFunc_UpdateSoundLibraryCollection_ValidLibraries_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_TryActivateAbilitiesByTag_ReturnValue_3 = CallFunc_TryActivateAbilitiesByTag_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_22 = CallFunc_IsValid_ReturnValue_22;
	Parms.CallFunc_Delay_Duration_ImplicitCast = CallFunc_Delay_Duration_ImplicitCast;
	Parms.CallFunc_RandomFloatInRange_Min_ImplicitCast = CallFunc_RandomFloatInRange_Min_ImplicitCast;
	Parms.CallFunc_RandomFloatInRange_Max_ImplicitCast = CallFunc_RandomFloatInRange_Max_ImplicitCast;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;
	Parms.CallFunc_Delay_Duration_ImplicitCast_1 = CallFunc_Delay_Duration_ImplicitCast_1;
	Parms.CallFunc_MakeGameplayCueParameters_RawMagnitude_ImplicitCast = CallFunc_MakeGameplayCueParameters_RawMagnitude_ImplicitCast;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1 = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_2 = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_2;
	Parms.CallFunc_MakeGameplayCueParameters_RawMagnitude_ImplicitCast_1 = CallFunc_MakeGameplayCueParameters_RawMagnitude_ImplicitCast_1;
	Parms.CallFunc_K2_SetTimer_Time_ImplicitCast = CallFunc_K2_SetTimer_Time_ImplicitCast;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_3 = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_3;
	Parms.CallFunc_Update_DeltaTime_ImplicitCast = CallFunc_Update_DeltaTime_ImplicitCast;
	Parms.CallFunc_Delay_Duration_ImplicitCast_2 = CallFunc_Delay_Duration_ImplicitCast_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPCAlertLevelUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_NPC_AlertLevel     NPC_Alert_Level                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::NPCAlertLevelUpdated__DelegateSignature(enum class Enum_NPC_AlertLevel NPC_Alert_Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPCAlertLevelUpdated__DelegateSignature");

	Params::UNPC_Pawn_Parent_C_NPCAlertLevelUpdated__DelegateSignature_Params Parms{};

	Parms.NPC_Alert_Level = NPC_Alert_Level;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPCPawnInteractWithDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActor*                      AIPawn                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             InteractingPlayerPawn                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Parent_C::NPCPawnInteractWithDispatcher__DelegateSignature(class UActor* AIPawn, class UFortPlayerPawn* InteractingPlayerPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPCPawnInteractWithDispatcher__DelegateSignature");

	Params::UNPC_Pawn_Parent_C_NPCPawnInteractWithDispatcher__DelegateSignature_Params Parms{};

	Parms.AIPawn = AIPawn;
	Parms.InteractingPlayerPawn = InteractingPlayerPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPCScaleMeshOutCompleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPC_Pawn_Parent_C::NPCScaleMeshOutCompleted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPCScaleMeshOutCompleted__DelegateSignature");

	Params::UNPC_Pawn_Parent_C_NPCScaleMeshOutCompleted__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPCScaleMeshInCompleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPC_Pawn_Parent_C::NPCScaleMeshInCompleted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPCScaleMeshInCompleted__DelegateSignature");

	Params::UNPC_Pawn_Parent_C_NPCScaleMeshInCompleted__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}

}


