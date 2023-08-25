#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MotherGameplayUI.AvocadoEaterHealthBarWidget
// (None)

class UClass* UAvocadoEaterHealthBarWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AvocadoEaterHealthBarWidget");

	return Clss;
}


// AvocadoEaterHealthBarWidget MotherGameplayUI.Default__AvocadoEaterHealthBarWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UAvocadoEaterHealthBarWidget* UAvocadoEaterHealthBarWidget::GetDefaultObj()
{
	static class UAvocadoEaterHealthBarWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UAvocadoEaterHealthBarWidget*>(UAvocadoEaterHealthBarWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function MotherGameplayUI.AvocadoEaterHealthBarWidget.OnTargetDamaged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAvocadoEaterHealthBarWidget::OnTargetDamaged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AvocadoEaterHealthBarWidget", "OnTargetDamaged");

	Params::UAvocadoEaterHealthBarWidget_OnTargetDamaged_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function MotherGameplayUI.AvocadoEaterHealthBarWidget.OnSetMarkerPosition
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              MarkerPosition                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAvocadoEaterHealthBarWidget::OnSetMarkerPosition(float MarkerPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AvocadoEaterHealthBarWidget", "OnSetMarkerPosition");

	Params::UAvocadoEaterHealthBarWidget_OnSetMarkerPosition_Params Parms{};

	Parms.MarkerPosition = MarkerPosition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MotherGameplayUI.AvocadoEaterHealthBarWidget.OnParasiteDetached
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAvocadoEaterHealthBarWidget::OnParasiteDetached()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AvocadoEaterHealthBarWidget", "OnParasiteDetached");

	Params::UAvocadoEaterHealthBarWidget_OnParasiteDetached_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function MotherGameplayUI.AvocadoEaterHealthBarWidget.OnParasiteAttached
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAvocadoEaterHealthBarWidget::OnParasiteAttached()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AvocadoEaterHealthBarWidget", "OnParasiteAttached");

	Params::UAvocadoEaterHealthBarWidget_OnParasiteAttached_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Class MotherGameplayUI.FortGravyGoblinReticleExtensionWidget
// (None)

class UClass* UFortGravyGoblinReticleExtensionWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortGravyGoblinReticleExtensionWidget");

	return Clss;
}


// FortGravyGoblinReticleExtensionWidget MotherGameplayUI.Default__FortGravyGoblinReticleExtensionWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortGravyGoblinReticleExtensionWidget* UFortGravyGoblinReticleExtensionWidget::GetDefaultObj()
{
	static class UFortGravyGoblinReticleExtensionWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortGravyGoblinReticleExtensionWidget*>(UFortGravyGoblinReticleExtensionWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function MotherGameplayUI.FortGravyGoblinReticleExtensionWidget.OnItemInactivatable
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortGravyGoblinReticleExtensionWidget::OnItemInactivatable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGravyGoblinReticleExtensionWidget", "OnItemInactivatable");

	Params::UFortGravyGoblinReticleExtensionWidget_OnItemInactivatable_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function MotherGameplayUI.FortGravyGoblinReticleExtensionWidget.OnItemActivatable
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortGravyGoblinReticleExtensionWidget::OnItemActivatable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGravyGoblinReticleExtensionWidget", "OnItemActivatable");

	Params::UFortGravyGoblinReticleExtensionWidget_OnItemActivatable_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Class MotherGameplayUI.FortLlamaRoasterReticleExtensionWidget
// (None)

class UClass* UFortLlamaRoasterReticleExtensionWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortLlamaRoasterReticleExtensionWidget");

	return Clss;
}


// FortLlamaRoasterReticleExtensionWidget MotherGameplayUI.Default__FortLlamaRoasterReticleExtensionWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortLlamaRoasterReticleExtensionWidget* UFortLlamaRoasterReticleExtensionWidget::GetDefaultObj()
{
	static class UFortLlamaRoasterReticleExtensionWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortLlamaRoasterReticleExtensionWidget*>(UFortLlamaRoasterReticleExtensionWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class MotherGameplayUI.FortPaddleGingerReticleExtensionWidget
// (None)

class UClass* UFortPaddleGingerReticleExtensionWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortPaddleGingerReticleExtensionWidget");

	return Clss;
}


// FortPaddleGingerReticleExtensionWidget MotherGameplayUI.Default__FortPaddleGingerReticleExtensionWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortPaddleGingerReticleExtensionWidget* UFortPaddleGingerReticleExtensionWidget::GetDefaultObj()
{
	static class UFortPaddleGingerReticleExtensionWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortPaddleGingerReticleExtensionWidget*>(UFortPaddleGingerReticleExtensionWidget::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPaddleGingerReticleExtensionWidget", "OnPropIndexChanged");

	Params::UFortPaddleGingerReticleExtensionWidget_OnPropIndexChanged_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPaddleGingerReticleExtensionWidget", "OnPropActivationChanged");

	Params::UFortPaddleGingerReticleExtensionWidget_OnPropActivationChanged_Params Parms{};

	Parms.Activated = Activated;

	UObject::ProcessEvent(Func, &Parms);

}


// Class MotherGameplayUI.FortReactorGradeReticleExtensionWidget
// (None)

class UClass* UFortReactorGradeReticleExtensionWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortReactorGradeReticleExtensionWidget");

	return Clss;
}


// FortReactorGradeReticleExtensionWidget MotherGameplayUI.Default__FortReactorGradeReticleExtensionWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortReactorGradeReticleExtensionWidget* UFortReactorGradeReticleExtensionWidget::GetDefaultObj()
{
	static class UFortReactorGradeReticleExtensionWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortReactorGradeReticleExtensionWidget*>(UFortReactorGradeReticleExtensionWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function MotherGameplayUI.FortReactorGradeReticleExtensionWidget.OnUpdateChargeToMin
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              ChargePercent                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortReactorGradeReticleExtensionWidget::OnUpdateChargeToMin(float ChargePercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortReactorGradeReticleExtensionWidget", "OnUpdateChargeToMin");

	Params::UFortReactorGradeReticleExtensionWidget_OnUpdateChargeToMin_Params Parms{};

	Parms.ChargePercent = ChargePercent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MotherGameplayUI.FortReactorGradeReticleExtensionWidget.OnUpdateChargeToAutoDischarge
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              ChargePercent                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortReactorGradeReticleExtensionWidget::OnUpdateChargeToAutoDischarge(float ChargePercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortReactorGradeReticleExtensionWidget", "OnUpdateChargeToAutoDischarge");

	Params::UFortReactorGradeReticleExtensionWidget_OnUpdateChargeToAutoDischarge_Params Parms{};

	Parms.ChargePercent = ChargePercent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MotherGameplayUI.FortReactorGradeReticleExtensionWidget.OnMinimumChargeReached
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortReactorGradeReticleExtensionWidget::OnMinimumChargeReached()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortReactorGradeReticleExtensionWidget", "OnMinimumChargeReached");

	Params::UFortReactorGradeReticleExtensionWidget_OnMinimumChargeReached_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Class MotherGameplayUI.FortMobileActionBBE_GravyGoblinRotate
// (None)

class UClass* UFortMobileActionBBE_GravyGoblinRotate::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortMobileActionBBE_GravyGoblinRotate");

	return Clss;
}


// FortMobileActionBBE_GravyGoblinRotate MotherGameplayUI.Default__FortMobileActionBBE_GravyGoblinRotate
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortMobileActionBBE_GravyGoblinRotate* UFortMobileActionBBE_GravyGoblinRotate::GetDefaultObj()
{
	static class UFortMobileActionBBE_GravyGoblinRotate* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortMobileActionBBE_GravyGoblinRotate*>(UFortMobileActionBBE_GravyGoblinRotate::StaticClass()->DefaultObject);

	return Default;
}

}


