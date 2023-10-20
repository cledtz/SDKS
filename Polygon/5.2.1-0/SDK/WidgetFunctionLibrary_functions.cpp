#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class WidgetFunctionLibrary.WidgetFunctionLibrary
// (None)

class UClass* UWidgetFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WidgetFunctionLibrary");

	return Clss;
}


// WidgetFunctionLibrary WidgetFunctionLibrary.Default__WidgetFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UWidgetFunctionLibrary* UWidgetFunctionLibrary::GetDefaultObj()
{
	static class UWidgetFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UWidgetFunctionLibrary*>(UWidgetFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function WidgetFunctionLibrary.WidgetFunctionLibrary.GetSlotContent
// (Final, BlueprintCosmetic, Native, Static, Private, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPanelSlot*                  Slot                                                             (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UWidgetFunctionLibrary::GetSlotContent(class UPanelSlot* Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetFunctionLibrary", "GetSlotContent");

	Params::UWidgetFunctionLibrary_GetSlotContent_Params Parms{};

	Parms.Slot = Slot;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function WidgetFunctionLibrary.WidgetFunctionLibrary.GetRootWidget
// (Final, Native, Static, Private, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUserWidget*                 Widget                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UWidgetFunctionLibrary::GetRootWidget(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetFunctionLibrary", "GetRootWidget");

	Params::UWidgetFunctionLibrary_GetRootWidget_Params Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function WidgetFunctionLibrary.WidgetFunctionLibrary.GetAllWidgetsInTree
// (Final, BlueprintCosmetic, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UUserWidget*                 Widget                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UWidget*>             ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

TArray<class UWidget*> UWidgetFunctionLibrary::GetAllWidgetsInTree(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetFunctionLibrary", "GetAllWidgetsInTree");

	Params::UWidgetFunctionLibrary_GetAllWidgetsInTree_Params Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function WidgetFunctionLibrary.WidgetFunctionLibrary.DrawLineUnder
// (Final, Native, Static, Private, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPaintContext               Context                                                          (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector2D                   PositionA                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   PositionB                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                Tint                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAntiAlias                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Thickness                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetFunctionLibrary::DrawLineUnder(struct FPaintContext& Context, const struct FVector2D& PositionA, const struct FVector2D& PositionB, const struct FLinearColor& Tint, bool bAntiAlias, float Thickness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetFunctionLibrary", "DrawLineUnder");

	Params::UWidgetFunctionLibrary_DrawLineUnder_Params Parms{};

	Parms.Context = Context;
	Parms.PositionA = PositionA;
	Parms.PositionB = PositionB;
	Parms.Tint = Tint;
	Parms.bAntiAlias = bAntiAlias;
	Parms.Thickness = Thickness;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function WidgetFunctionLibrary.WidgetFunctionLibrary.CheckWidgetIsActive
// (Final, Native, Static, Private, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWidgetFunctionLibrary::CheckWidgetIsActive(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetFunctionLibrary", "CheckWidgetIsActive");

	Params::UWidgetFunctionLibrary_CheckWidgetIsActive_Params Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


