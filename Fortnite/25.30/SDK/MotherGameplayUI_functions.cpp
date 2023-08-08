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


// Function MotherGameplayUI.AvocadoEaterHealthBarWidget.OnTargetDamaged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAvocadoEaterHealthBarWidget::OnTargetDamaged()
{
	static auto Func = Class->GetFunction("AvocadoEaterHealthBarWidget", "OnTargetDamaged");

	Params::UAvocadoEaterHealthBarWidget_OnTargetDamaged_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MotherGameplayUI.AvocadoEaterHealthBarWidget.OnSetMarkerPosition
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              MarkerPosition                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAvocadoEaterHealthBarWidget::OnSetMarkerPosition(float MarkerPosition)
{
	static auto Func = Class->GetFunction("AvocadoEaterHealthBarWidget", "OnSetMarkerPosition");

	Params::UAvocadoEaterHealthBarWidget_OnSetMarkerPosition_Params Parms;

	Parms.MarkerPosition = MarkerPosition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MotherGameplayUI.AvocadoEaterHealthBarWidget.OnParasiteDetached
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAvocadoEaterHealthBarWidget::OnParasiteDetached()
{
	static auto Func = Class->GetFunction("AvocadoEaterHealthBarWidget", "OnParasiteDetached");

	Params::UAvocadoEaterHealthBarWidget_OnParasiteDetached_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MotherGameplayUI.AvocadoEaterHealthBarWidget.OnParasiteAttached
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAvocadoEaterHealthBarWidget::OnParasiteAttached()
{
	static auto Func = Class->GetFunction("AvocadoEaterHealthBarWidget", "OnParasiteAttached");

	Params::UAvocadoEaterHealthBarWidget_OnParasiteAttached_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MotherGameplayUI.FortGravyGoblinReticleExtensionWidget.OnItemInactivatable
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortGravyGoblinReticleExtensionWidget::OnItemInactivatable()
{
	static auto Func = Class->GetFunction("FortGravyGoblinReticleExtensionWidget", "OnItemInactivatable");

	Params::UFortGravyGoblinReticleExtensionWidget_OnItemInactivatable_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MotherGameplayUI.FortGravyGoblinReticleExtensionWidget.OnItemActivatable
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortGravyGoblinReticleExtensionWidget::OnItemActivatable()
{
	static auto Func = Class->GetFunction("FortGravyGoblinReticleExtensionWidget", "OnItemActivatable");

	Params::UFortGravyGoblinReticleExtensionWidget_OnItemActivatable_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MotherGameplayUI.FortPaddleGingerReticleExtensionWidget.OnPropIndexChanged
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        CategoryText                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              PropIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaxPropCount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              CategoryIndex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaxCategoryCount                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPaddleGingerReticleExtensionWidget::OnPropIndexChanged(class FText& CategoryText, int32 PropIndex, int32 MaxPropCount, int32 CategoryIndex, int32 MaxCategoryCount)
{
	static auto Func = Class->GetFunction("FortPaddleGingerReticleExtensionWidget", "OnPropIndexChanged");

	Params::UFortPaddleGingerReticleExtensionWidget_OnPropIndexChanged_Params Parms;

	Parms.CategoryText = CategoryText;
	Parms.PropIndex = PropIndex;
	Parms.MaxPropCount = MaxPropCount;
	Parms.CategoryIndex = CategoryIndex;
	Parms.MaxCategoryCount = MaxCategoryCount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MotherGameplayUI.FortPaddleGingerReticleExtensionWidget.OnPropActivationChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               Activated                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPaddleGingerReticleExtensionWidget::OnPropActivationChanged(bool Activated)
{
	static auto Func = Class->GetFunction("FortPaddleGingerReticleExtensionWidget", "OnPropActivationChanged");

	Params::UFortPaddleGingerReticleExtensionWidget_OnPropActivationChanged_Params Parms;

	Parms.Activated = Activated;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MotherGameplayUI.FortReactorGradeReticleExtensionWidget.OnUpdateChargeToMin
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              ChargePercent                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortReactorGradeReticleExtensionWidget::OnUpdateChargeToMin(float ChargePercent)
{
	static auto Func = Class->GetFunction("FortReactorGradeReticleExtensionWidget", "OnUpdateChargeToMin");

	Params::UFortReactorGradeReticleExtensionWidget_OnUpdateChargeToMin_Params Parms;

	Parms.ChargePercent = ChargePercent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MotherGameplayUI.FortReactorGradeReticleExtensionWidget.OnUpdateChargeToAutoDischarge
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              ChargePercent                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortReactorGradeReticleExtensionWidget::OnUpdateChargeToAutoDischarge(float ChargePercent)
{
	static auto Func = Class->GetFunction("FortReactorGradeReticleExtensionWidget", "OnUpdateChargeToAutoDischarge");

	Params::UFortReactorGradeReticleExtensionWidget_OnUpdateChargeToAutoDischarge_Params Parms;

	Parms.ChargePercent = ChargePercent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MotherGameplayUI.FortReactorGradeReticleExtensionWidget.OnMinimumChargeReached
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortReactorGradeReticleExtensionWidget::OnMinimumChargeReached()
{
	static auto Func = Class->GetFunction("FortReactorGradeReticleExtensionWidget", "OnMinimumChargeReached");

	Params::UFortReactorGradeReticleExtensionWidget_OnMinimumChargeReached_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
