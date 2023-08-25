#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CRD_ModalDialogUI.CreativeModalDialogAllowedConversionFunction
// (None)

class UClass* UCreativeModalDialogAllowedConversionFunction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CreativeModalDialogAllowedConversionFunction");

	return Clss;
}


// CreativeModalDialogAllowedConversionFunction CRD_ModalDialogUI.Default__CreativeModalDialogAllowedConversionFunction
// (Public, ClassDefaultObject, ArchetypeObject)

class UCreativeModalDialogAllowedConversionFunction* UCreativeModalDialogAllowedConversionFunction::GetDefaultObj()
{
	static class UCreativeModalDialogAllowedConversionFunction* Default = nullptr;

	if (!Default)
		Default = static_cast<UCreativeModalDialogAllowedConversionFunction*>(UCreativeModalDialogAllowedConversionFunction::StaticClass()->DefaultObject);

	return Default;
}


// Function CRD_ModalDialogUI.CreativeModalDialogAllowedConversionFunction.GetResponseNone
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FWidgetEventField           Field                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// enum class ECreativeModalDialogViewmodelResponseReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ECreativeModalDialogViewmodelResponse UCreativeModalDialogAllowedConversionFunction::GetResponseNone(const struct FWidgetEventField& Field)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeModalDialogAllowedConversionFunction", "GetResponseNone");

	Params::UCreativeModalDialogAllowedConversionFunction_GetResponseNone_Params Parms{};

	Parms.Field = Field;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CRD_ModalDialogUI.CreativeModalDialogAllowedConversionFunction.GetResponseButton6
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FWidgetEventField           Field                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// enum class ECreativeModalDialogViewmodelResponseReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ECreativeModalDialogViewmodelResponse UCreativeModalDialogAllowedConversionFunction::GetResponseButton6(const struct FWidgetEventField& Field)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeModalDialogAllowedConversionFunction", "GetResponseButton6");

	Params::UCreativeModalDialogAllowedConversionFunction_GetResponseButton6_Params Parms{};

	Parms.Field = Field;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CRD_ModalDialogUI.CreativeModalDialogAllowedConversionFunction.GetResponseButton5
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FWidgetEventField           Field                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// enum class ECreativeModalDialogViewmodelResponseReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ECreativeModalDialogViewmodelResponse UCreativeModalDialogAllowedConversionFunction::GetResponseButton5(const struct FWidgetEventField& Field)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeModalDialogAllowedConversionFunction", "GetResponseButton5");

	Params::UCreativeModalDialogAllowedConversionFunction_GetResponseButton5_Params Parms{};

	Parms.Field = Field;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CRD_ModalDialogUI.CreativeModalDialogAllowedConversionFunction.GetResponseButton4
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FWidgetEventField           Field                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// enum class ECreativeModalDialogViewmodelResponseReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ECreativeModalDialogViewmodelResponse UCreativeModalDialogAllowedConversionFunction::GetResponseButton4(const struct FWidgetEventField& Field)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeModalDialogAllowedConversionFunction", "GetResponseButton4");

	Params::UCreativeModalDialogAllowedConversionFunction_GetResponseButton4_Params Parms{};

	Parms.Field = Field;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CRD_ModalDialogUI.CreativeModalDialogAllowedConversionFunction.GetResponseButton3
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FWidgetEventField           Field                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// enum class ECreativeModalDialogViewmodelResponseReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ECreativeModalDialogViewmodelResponse UCreativeModalDialogAllowedConversionFunction::GetResponseButton3(const struct FWidgetEventField& Field)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeModalDialogAllowedConversionFunction", "GetResponseButton3");

	Params::UCreativeModalDialogAllowedConversionFunction_GetResponseButton3_Params Parms{};

	Parms.Field = Field;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CRD_ModalDialogUI.CreativeModalDialogAllowedConversionFunction.GetResponseButton2
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FWidgetEventField           Field                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// enum class ECreativeModalDialogViewmodelResponseReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ECreativeModalDialogViewmodelResponse UCreativeModalDialogAllowedConversionFunction::GetResponseButton2(const struct FWidgetEventField& Field)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeModalDialogAllowedConversionFunction", "GetResponseButton2");

	Params::UCreativeModalDialogAllowedConversionFunction_GetResponseButton2_Params Parms{};

	Parms.Field = Field;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CRD_ModalDialogUI.CreativeModalDialogAllowedConversionFunction.GetResponseButton1
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FWidgetEventField           Field                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// enum class ECreativeModalDialogViewmodelResponseReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ECreativeModalDialogViewmodelResponse UCreativeModalDialogAllowedConversionFunction::GetResponseButton1(const struct FWidgetEventField& Field)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeModalDialogAllowedConversionFunction", "GetResponseButton1");

	Params::UCreativeModalDialogAllowedConversionFunction_GetResponseButton1_Params Parms{};

	Parms.Field = Field;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CRD_ModalDialogUI.CreativeModalDialogConversionFunction
// (None)

class UClass* UCreativeModalDialogConversionFunction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CreativeModalDialogConversionFunction");

	return Clss;
}


// CreativeModalDialogConversionFunction CRD_ModalDialogUI.Default__CreativeModalDialogConversionFunction
// (Public, ClassDefaultObject, ArchetypeObject)

class UCreativeModalDialogConversionFunction* UCreativeModalDialogConversionFunction::GetDefaultObj()
{
	static class UCreativeModalDialogConversionFunction* Default = nullptr;

	if (!Default)
		Default = static_cast<UCreativeModalDialogConversionFunction*>(UCreativeModalDialogConversionFunction::StaticClass()->DefaultObject);

	return Default;
}


// Function CRD_ModalDialogUI.CreativeModalDialogConversionFunction.TranslateResponse
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FWidgetEventField           Field                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// enum class ECreativeModalDialogViewmodelResponseResponse                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ECreativeModalDialogViewmodelResponseReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ECreativeModalDialogViewmodelResponse UCreativeModalDialogConversionFunction::TranslateResponse(const struct FWidgetEventField& Field, enum class ECreativeModalDialogViewmodelResponse Response)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeModalDialogConversionFunction", "TranslateResponse");

	Params::UCreativeModalDialogConversionFunction_TranslateResponse_Params Parms{};

	Parms.Field = Field;
	Parms.Response = Response;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CRD_ModalDialogUI.CreativeModalDialogConversionFunction.GetRowIndexForButtonFromContentAlignment
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class ECreativeModalDialogAlignmentOptionAlignmentOption                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ButtonIndex                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              WideMaxColumns                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TallMaxColumns                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              DefaultMaxColumns                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCreativeModalDialogConversionFunction::GetRowIndexForButtonFromContentAlignment(enum class ECreativeModalDialogAlignmentOption AlignmentOption, int32 ButtonIndex, int32 WideMaxColumns, int32 TallMaxColumns, int32 DefaultMaxColumns)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeModalDialogConversionFunction", "GetRowIndexForButtonFromContentAlignment");

	Params::UCreativeModalDialogConversionFunction_GetRowIndexForButtonFromContentAlignment_Params Parms{};

	Parms.AlignmentOption = AlignmentOption;
	Parms.ButtonIndex = ButtonIndex;
	Parms.WideMaxColumns = WideMaxColumns;
	Parms.TallMaxColumns = TallMaxColumns;
	Parms.DefaultMaxColumns = DefaultMaxColumns;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CRD_ModalDialogUI.CreativeModalDialogConversionFunction.GetMarginFromContentAlignment
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class ECreativeModalDialogAlignmentOptionAlignmentOption                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TallMarginAmount                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              WideMarginAmount                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              CenteredFullMarginAmount                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DefaultMarginAmount                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMargin                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FMargin UCreativeModalDialogConversionFunction::GetMarginFromContentAlignment(enum class ECreativeModalDialogAlignmentOption AlignmentOption, float TallMarginAmount, float WideMarginAmount, float CenteredFullMarginAmount, float DefaultMarginAmount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeModalDialogConversionFunction", "GetMarginFromContentAlignment");

	Params::UCreativeModalDialogConversionFunction_GetMarginFromContentAlignment_Params Parms{};

	Parms.AlignmentOption = AlignmentOption;
	Parms.TallMarginAmount = TallMarginAmount;
	Parms.WideMarginAmount = WideMarginAmount;
	Parms.CenteredFullMarginAmount = CenteredFullMarginAmount;
	Parms.DefaultMarginAmount = DefaultMarginAmount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CRD_ModalDialogUI.CreativeModalDialogConversionFunction.GetFloatingValueFromContentAlignment
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class ECreativeModalDialogAlignmentOptionAlignmentOption                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TallValue                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              WideValue                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              CenteredFullValue                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DefaultValue                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UCreativeModalDialogConversionFunction::GetFloatingValueFromContentAlignment(enum class ECreativeModalDialogAlignmentOption AlignmentOption, float TallValue, float WideValue, float CenteredFullValue, float DefaultValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeModalDialogConversionFunction", "GetFloatingValueFromContentAlignment");

	Params::UCreativeModalDialogConversionFunction_GetFloatingValueFromContentAlignment_Params Parms{};

	Parms.AlignmentOption = AlignmentOption;
	Parms.TallValue = TallValue;
	Parms.WideValue = WideValue;
	Parms.CenteredFullValue = CenteredFullValue;
	Parms.DefaultValue = DefaultValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CRD_ModalDialogUI.CreativeModalDialogConversionFunction.GetColumnIndexForButtonFromContentAlignment
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class ECreativeModalDialogAlignmentOptionAlignmentOption                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ButtonIndex                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              WideMaxColumns                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TallMaxColumns                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              DefaultMaxColumns                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCreativeModalDialogConversionFunction::GetColumnIndexForButtonFromContentAlignment(enum class ECreativeModalDialogAlignmentOption AlignmentOption, int32 ButtonIndex, int32 WideMaxColumns, int32 TallMaxColumns, int32 DefaultMaxColumns)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeModalDialogConversionFunction", "GetColumnIndexForButtonFromContentAlignment");

	Params::UCreativeModalDialogConversionFunction_GetColumnIndexForButtonFromContentAlignment_Params Parms{};

	Parms.AlignmentOption = AlignmentOption;
	Parms.ButtonIndex = ButtonIndex;
	Parms.WideMaxColumns = WideMaxColumns;
	Parms.TallMaxColumns = TallMaxColumns;
	Parms.DefaultMaxColumns = DefaultMaxColumns;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CRD_ModalDialogUI.CreativeModalDialogConversionFunction.AssignCreativeModalDialogViewmodelResponse
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FMVVMEventField             Field                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// enum class ECreativeModalDialogViewmodelResponseResponse                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ECreativeModalDialogViewmodelResponseReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ECreativeModalDialogViewmodelResponse UCreativeModalDialogConversionFunction::AssignCreativeModalDialogViewmodelResponse(const struct FMVVMEventField& Field, enum class ECreativeModalDialogViewmodelResponse Response)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeModalDialogConversionFunction", "AssignCreativeModalDialogViewmodelResponse");

	Params::UCreativeModalDialogConversionFunction_AssignCreativeModalDialogViewmodelResponse_Params Parms{};

	Parms.Field = Field;
	Parms.Response = Response;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CRD_ModalDialogUI.CreativeModalDialogViewmodel
// (None)

class UClass* UCreativeModalDialogViewmodel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CreativeModalDialogViewmodel");

	return Clss;
}


// CreativeModalDialogViewmodel CRD_ModalDialogUI.Default__CreativeModalDialogViewmodel
// (Public, ClassDefaultObject, ArchetypeObject)

class UCreativeModalDialogViewmodel* UCreativeModalDialogViewmodel::GetDefaultObj()
{
	static class UCreativeModalDialogViewmodel* Default = nullptr;

	if (!Default)
		Default = static_cast<UCreativeModalDialogViewmodel*>(UCreativeModalDialogViewmodel::StaticClass()->DefaultObject);

	return Default;
}


// Function CRD_ModalDialogUI.CreativeModalDialogViewmodel.ShouldButton6UseFallbackDefaultInputAction
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCreativeModalDialogViewmodel::ShouldButton6UseFallbackDefaultInputAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeModalDialogViewmodel", "ShouldButton6UseFallbackDefaultInputAction");

	Params::UCreativeModalDialogViewmodel_ShouldButton6UseFallbackDefaultInputAction_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CRD_ModalDialogUI.CreativeModalDialogViewmodel.ShouldButton5UseFallbackDefaultInputAction
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCreativeModalDialogViewmodel::ShouldButton5UseFallbackDefaultInputAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeModalDialogViewmodel", "ShouldButton5UseFallbackDefaultInputAction");

	Params::UCreativeModalDialogViewmodel_ShouldButton5UseFallbackDefaultInputAction_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CRD_ModalDialogUI.CreativeModalDialogViewmodel.ShouldButton4UseFallbackDefaultInputAction
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCreativeModalDialogViewmodel::ShouldButton4UseFallbackDefaultInputAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeModalDialogViewmodel", "ShouldButton4UseFallbackDefaultInputAction");

	Params::UCreativeModalDialogViewmodel_ShouldButton4UseFallbackDefaultInputAction_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CRD_ModalDialogUI.CreativeModalDialogViewmodel.ShouldButton3UseFallbackDefaultInputAction
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCreativeModalDialogViewmodel::ShouldButton3UseFallbackDefaultInputAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeModalDialogViewmodel", "ShouldButton3UseFallbackDefaultInputAction");

	Params::UCreativeModalDialogViewmodel_ShouldButton3UseFallbackDefaultInputAction_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CRD_ModalDialogUI.CreativeModalDialogViewmodel.ShouldButton2UseFallbackDefaultInputAction
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCreativeModalDialogViewmodel::ShouldButton2UseFallbackDefaultInputAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeModalDialogViewmodel", "ShouldButton2UseFallbackDefaultInputAction");

	Params::UCreativeModalDialogViewmodel_ShouldButton2UseFallbackDefaultInputAction_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CRD_ModalDialogUI.CreativeModalDialogViewmodel.ShouldButton1UseFallbackDefaultInputAction
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCreativeModalDialogViewmodel::ShouldButton1UseFallbackDefaultInputAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeModalDialogViewmodel", "ShouldButton1UseFallbackDefaultInputAction");

	Params::UCreativeModalDialogViewmodel_ShouldButton1UseFallbackDefaultInputAction_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CRD_ModalDialogUI.CreativeModalDialogViewmodel.IsTimerVisible
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCreativeModalDialogViewmodel::IsTimerVisible()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeModalDialogViewmodel", "IsTimerVisible");

	Params::UCreativeModalDialogViewmodel_IsTimerVisible_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CRD_ModalDialogUI.CreativeModalDialogViewmodel.IsButton6Visible
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCreativeModalDialogViewmodel::IsButton6Visible()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeModalDialogViewmodel", "IsButton6Visible");

	Params::UCreativeModalDialogViewmodel_IsButton6Visible_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CRD_ModalDialogUI.CreativeModalDialogViewmodel.IsButton5Visible
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCreativeModalDialogViewmodel::IsButton5Visible()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeModalDialogViewmodel", "IsButton5Visible");

	Params::UCreativeModalDialogViewmodel_IsButton5Visible_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CRD_ModalDialogUI.CreativeModalDialogViewmodel.IsButton4Visible
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCreativeModalDialogViewmodel::IsButton4Visible()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeModalDialogViewmodel", "IsButton4Visible");

	Params::UCreativeModalDialogViewmodel_IsButton4Visible_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CRD_ModalDialogUI.CreativeModalDialogViewmodel.IsButton3Visible
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCreativeModalDialogViewmodel::IsButton3Visible()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeModalDialogViewmodel", "IsButton3Visible");

	Params::UCreativeModalDialogViewmodel_IsButton3Visible_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CRD_ModalDialogUI.CreativeModalDialogViewmodel.IsButton2Visible
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCreativeModalDialogViewmodel::IsButton2Visible()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeModalDialogViewmodel", "IsButton2Visible");

	Params::UCreativeModalDialogViewmodel_IsButton2Visible_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CRD_ModalDialogUI.CreativeModalDialogViewmodel.IsButton1Visible
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCreativeModalDialogViewmodel::IsButton1Visible()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeModalDialogViewmodel", "IsButton1Visible");

	Params::UCreativeModalDialogViewmodel_IsButton1Visible_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetVerticalAlignment
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EVerticalAlignment      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EVerticalAlignment UCreativeModalDialogViewmodel::GetVerticalAlignment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeModalDialogViewmodel", "GetVerticalAlignment");

	Params::UCreativeModalDialogViewmodel_GetVerticalAlignment_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetTimerVisibility
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESlateVisibility UCreativeModalDialogViewmodel::GetTimerVisibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeModalDialogViewmodel", "GetTimerVisibility");

	Params::UCreativeModalDialogViewmodel_GetTimerVisibility_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetTimeoutProgress
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UCreativeModalDialogViewmodel::GetTimeoutProgress()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeModalDialogViewmodel", "GetTimeoutProgress");

	Params::UCreativeModalDialogViewmodel_GetTimeoutProgress_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EHorizontalAlignment    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EHorizontalAlignment UCreativeModalDialogViewmodel::GetHorizontalAlignment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeModalDialogViewmodel", "GetHorizontalAlignment");

	Params::UCreativeModalDialogViewmodel_GetHorizontalAlignment_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton6Visibility
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESlateVisibility UCreativeModalDialogViewmodel::GetButton6Visibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeModalDialogViewmodel", "GetButton6Visibility");

	Params::UCreativeModalDialogViewmodel_GetButton6Visibility_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton6TriggeringInputAction
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDataTableRowHandle         ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FDataTableRowHandle UCreativeModalDialogViewmodel::GetButton6TriggeringInputAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeModalDialogViewmodel", "GetButton6TriggeringInputAction");

	Params::UCreativeModalDialogViewmodel_GetButton6TriggeringInputAction_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton5Visibility
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESlateVisibility UCreativeModalDialogViewmodel::GetButton5Visibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeModalDialogViewmodel", "GetButton5Visibility");

	Params::UCreativeModalDialogViewmodel_GetButton5Visibility_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton5TriggeringInputAction
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDataTableRowHandle         ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FDataTableRowHandle UCreativeModalDialogViewmodel::GetButton5TriggeringInputAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeModalDialogViewmodel", "GetButton5TriggeringInputAction");

	Params::UCreativeModalDialogViewmodel_GetButton5TriggeringInputAction_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton4Visibility
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESlateVisibility UCreativeModalDialogViewmodel::GetButton4Visibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeModalDialogViewmodel", "GetButton4Visibility");

	Params::UCreativeModalDialogViewmodel_GetButton4Visibility_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton4TriggeringInputAction
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDataTableRowHandle         ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FDataTableRowHandle UCreativeModalDialogViewmodel::GetButton4TriggeringInputAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeModalDialogViewmodel", "GetButton4TriggeringInputAction");

	Params::UCreativeModalDialogViewmodel_GetButton4TriggeringInputAction_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton3Visibility
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESlateVisibility UCreativeModalDialogViewmodel::GetButton3Visibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeModalDialogViewmodel", "GetButton3Visibility");

	Params::UCreativeModalDialogViewmodel_GetButton3Visibility_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton3TriggeringInputAction
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDataTableRowHandle         ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FDataTableRowHandle UCreativeModalDialogViewmodel::GetButton3TriggeringInputAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeModalDialogViewmodel", "GetButton3TriggeringInputAction");

	Params::UCreativeModalDialogViewmodel_GetButton3TriggeringInputAction_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton2Visibility
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESlateVisibility UCreativeModalDialogViewmodel::GetButton2Visibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeModalDialogViewmodel", "GetButton2Visibility");

	Params::UCreativeModalDialogViewmodel_GetButton2Visibility_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton2TriggeringInputAction
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDataTableRowHandle         ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FDataTableRowHandle UCreativeModalDialogViewmodel::GetButton2TriggeringInputAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeModalDialogViewmodel", "GetButton2TriggeringInputAction");

	Params::UCreativeModalDialogViewmodel_GetButton2TriggeringInputAction_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton1Visibility
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESlateVisibility UCreativeModalDialogViewmodel::GetButton1Visibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeModalDialogViewmodel", "GetButton1Visibility");

	Params::UCreativeModalDialogViewmodel_GetButton1Visibility_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton1TriggeringInputAction
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDataTableRowHandle         ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FDataTableRowHandle UCreativeModalDialogViewmodel::GetButton1TriggeringInputAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeModalDialogViewmodel", "GetButton1TriggeringInputAction");

	Params::UCreativeModalDialogViewmodel_GetButton1TriggeringInputAction_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetBackgroundVisibility
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESlateVisibility UCreativeModalDialogViewmodel::GetBackgroundVisibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeModalDialogViewmodel", "GetBackgroundVisibility");

	Params::UCreativeModalDialogViewmodel_GetBackgroundVisibility_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CRD_ModalDialogUI.CreativeModalDialogWidget
// (None)

class UClass* UCreativeModalDialogWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CreativeModalDialogWidget");

	return Clss;
}


// CreativeModalDialogWidget CRD_ModalDialogUI.Default__CreativeModalDialogWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UCreativeModalDialogWidget* UCreativeModalDialogWidget::GetDefaultObj()
{
	static class UCreativeModalDialogWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UCreativeModalDialogWidget*>(UCreativeModalDialogWidget::StaticClass()->DefaultObject);

	return Default;
}

}


