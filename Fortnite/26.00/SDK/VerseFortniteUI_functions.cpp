#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class VerseFortniteUI.VerseFortnitePlayspaceHUDController
// (None)

class UClass* UVerseFortnitePlayspaceHUDController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseFortnitePlayspaceHUDController");

	return Clss;
}


// VerseFortnitePlayspaceHUDController VerseFortniteUI.Default__VerseFortnitePlayspaceHUDController
// (Public, ClassDefaultObject, ArchetypeObject)

class UVerseFortnitePlayspaceHUDController* UVerseFortnitePlayspaceHUDController::GetDefaultObj()
{
	static class UVerseFortnitePlayspaceHUDController* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseFortnitePlayspaceHUDController*>(UVerseFortnitePlayspaceHUDController::StaticClass()->DefaultObject);

	return Default;
}


// Class VerseFortniteUI.VerseFortniteUIOverlaySlot
// (None)

class UClass* UVerseFortniteUIOverlaySlot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseFortniteUIOverlaySlot");

	return Clss;
}


// VerseFortniteUIOverlaySlot VerseFortniteUI.Default__VerseFortniteUIOverlaySlot
// (Public, ClassDefaultObject, ArchetypeObject)

class UVerseFortniteUIOverlaySlot* UVerseFortniteUIOverlaySlot::GetDefaultObj()
{
	static class UVerseFortniteUIOverlaySlot* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseFortniteUIOverlaySlot*>(UVerseFortniteUIOverlaySlot::StaticClass()->DefaultObject);

	return Default;
}


// Class VerseFortniteUI.VerseFortniteUIOverlay
// (None)

class UClass* UVerseFortniteUIOverlay::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseFortniteUIOverlay");

	return Clss;
}


// VerseFortniteUIOverlay VerseFortniteUI.Default__VerseFortniteUIOverlay
// (Public, ClassDefaultObject, ArchetypeObject)

class UVerseFortniteUIOverlay* UVerseFortniteUIOverlay::GetDefaultObj()
{
	static class UVerseFortniteUIOverlay* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseFortniteUIOverlay*>(UVerseFortniteUIOverlay::StaticClass()->DefaultObject);

	return Default;
}


// Class VerseFortniteUI.VerseFortniteUINamedSlot
// (None)

class UClass* UVerseFortniteUINamedSlot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseFortniteUINamedSlot");

	return Clss;
}


// VerseFortniteUINamedSlot VerseFortniteUI.Default__VerseFortniteUINamedSlot
// (Public, ClassDefaultObject, ArchetypeObject)

class UVerseFortniteUINamedSlot* UVerseFortniteUINamedSlot::GetDefaultObj()
{
	static class UVerseFortniteUINamedSlot* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseFortniteUINamedSlot*>(UVerseFortniteUINamedSlot::StaticClass()->DefaultObject);

	return Default;
}


// Class VerseFortniteUI.VerseFortniteUIActivableWidgetBase
// (None)

class UClass* UVerseFortniteUIActivableWidgetBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseFortniteUIActivableWidgetBase");

	return Clss;
}


// VerseFortniteUIActivableWidgetBase VerseFortniteUI.Default__VerseFortniteUIActivableWidgetBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UVerseFortniteUIActivableWidgetBase* UVerseFortniteUIActivableWidgetBase::GetDefaultObj()
{
	static class UVerseFortniteUIActivableWidgetBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseFortniteUIActivableWidgetBase*>(UVerseFortniteUIActivableWidgetBase::StaticClass()->DefaultObject);

	return Default;
}


// Class VerseFortniteUI.VerseFortniteUIPresenter
// (None)

class UClass* UVerseFortniteUIPresenter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseFortniteUIPresenter");

	return Clss;
}


// VerseFortniteUIPresenter VerseFortniteUI.Default__VerseFortniteUIPresenter
// (Public, ClassDefaultObject, ArchetypeObject)

class UVerseFortniteUIPresenter* UVerseFortniteUIPresenter::GetDefaultObj()
{
	static class UVerseFortniteUIPresenter* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseFortniteUIPresenter*>(UVerseFortniteUIPresenter::StaticClass()->DefaultObject);

	return Default;
}


// Class VerseFortniteUI.VerseFortniteUIFrameworkButton_Base
// (None)

class UClass* UVerseFortniteUIFrameworkButton_Base::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseFortniteUIFrameworkButton_Base");

	return Clss;
}


// VerseFortniteUIFrameworkButton_Base VerseFortniteUI.Default__VerseFortniteUIFrameworkButton_Base
// (Public, ClassDefaultObject, ArchetypeObject)

class UVerseFortniteUIFrameworkButton_Base* UVerseFortniteUIFrameworkButton_Base::GetDefaultObj()
{
	static class UVerseFortniteUIFrameworkButton_Base* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseFortniteUIFrameworkButton_Base*>(UVerseFortniteUIFrameworkButton_Base::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteUI.VerseFortniteUIFrameworkButton_Base.ServerClick
// (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:
// class UPlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseFortniteUIFrameworkButton_Base::ServerClick(class UPlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseFortniteUIFrameworkButton_Base", "ServerClick");

	Params::UVerseFortniteUIFrameworkButton_Base_ServerClick_Params Parms{};

	Parms.PlayerController = PlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteUI.VerseFortniteUIFrameworkButton_Base.OnRep_Message
// (Final, Native, Private)
// Parameters:

void UVerseFortniteUIFrameworkButton_Base::OnRep_Message()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseFortniteUIFrameworkButton_Base", "OnRep_Message");

	Params::UVerseFortniteUIFrameworkButton_Base_OnRep_Message_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteUI.VerseFortniteUIFrameworkButton_Base.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UVerseFortniteUIFrameworkButton_Base::GetText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseFortniteUIFrameworkButton_Base", "GetText");

	Params::UVerseFortniteUIFrameworkButton_Base_GetText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class VerseFortniteUI.VerseFortniteUIFrameworkButton_Loud
// (None)

class UClass* UVerseFortniteUIFrameworkButton_Loud::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseFortniteUIFrameworkButton_Loud");

	return Clss;
}


// VerseFortniteUIFrameworkButton_Loud VerseFortniteUI.Default__VerseFortniteUIFrameworkButton_Loud
// (Public, ClassDefaultObject, ArchetypeObject)

class UVerseFortniteUIFrameworkButton_Loud* UVerseFortniteUIFrameworkButton_Loud::GetDefaultObj()
{
	static class UVerseFortniteUIFrameworkButton_Loud* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseFortniteUIFrameworkButton_Loud*>(UVerseFortniteUIFrameworkButton_Loud::StaticClass()->DefaultObject);

	return Default;
}


// Class VerseFortniteUI.VerseFortniteUIFrameworkButton_Regular
// (None)

class UClass* UVerseFortniteUIFrameworkButton_Regular::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseFortniteUIFrameworkButton_Regular");

	return Clss;
}


// VerseFortniteUIFrameworkButton_Regular VerseFortniteUI.Default__VerseFortniteUIFrameworkButton_Regular
// (Public, ClassDefaultObject, ArchetypeObject)

class UVerseFortniteUIFrameworkButton_Regular* UVerseFortniteUIFrameworkButton_Regular::GetDefaultObj()
{
	static class UVerseFortniteUIFrameworkButton_Regular* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseFortniteUIFrameworkButton_Regular*>(UVerseFortniteUIFrameworkButton_Regular::StaticClass()->DefaultObject);

	return Default;
}


// Class VerseFortniteUI.VerseFortniteUIFrameworkButton_Quiet
// (None)

class UClass* UVerseFortniteUIFrameworkButton_Quiet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseFortniteUIFrameworkButton_Quiet");

	return Clss;
}


// VerseFortniteUIFrameworkButton_Quiet VerseFortniteUI.Default__VerseFortniteUIFrameworkButton_Quiet
// (Public, ClassDefaultObject, ArchetypeObject)

class UVerseFortniteUIFrameworkButton_Quiet* UVerseFortniteUIFrameworkButton_Quiet::GetDefaultObj()
{
	static class UVerseFortniteUIFrameworkButton_Quiet* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseFortniteUIFrameworkButton_Quiet*>(UVerseFortniteUIFrameworkButton_Quiet::StaticClass()->DefaultObject);

	return Default;
}


// Class VerseFortniteUI.VerseFortniteUIFrameworkText_Base
// (None)

class UClass* UVerseFortniteUIFrameworkText_Base::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseFortniteUIFrameworkText_Base");

	return Clss;
}


// VerseFortniteUIFrameworkText_Base VerseFortniteUI.Default__VerseFortniteUIFrameworkText_Base
// (Public, ClassDefaultObject, ArchetypeObject)

class UVerseFortniteUIFrameworkText_Base* UVerseFortniteUIFrameworkText_Base::GetDefaultObj()
{
	static class UVerseFortniteUIFrameworkText_Base* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseFortniteUIFrameworkText_Base*>(UVerseFortniteUIFrameworkText_Base::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteUI.VerseFortniteUIFrameworkText_Base.ServerTextCommitted
// (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:
// class UPlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        NewText                                                          (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)

void UVerseFortniteUIFrameworkText_Base::ServerTextCommitted(class UPlayerController* PlayerController, class FText& NewText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseFortniteUIFrameworkText_Base", "ServerTextCommitted");

	Params::UVerseFortniteUIFrameworkText_Base_ServerTextCommitted_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.NewText = NewText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteUI.VerseFortniteUIFrameworkText_Base.ExecuteServerTextCommitted
// (Final, Native, Public, HasOutParams)
// Parameters:
// class FText                        InText                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// enum class ETextCommit             InCommitMethod                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseFortniteUIFrameworkText_Base::ExecuteServerTextCommitted(class FText& InText, enum class ETextCommit InCommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseFortniteUIFrameworkText_Base", "ExecuteServerTextCommitted");

	Params::UVerseFortniteUIFrameworkText_Base_ExecuteServerTextCommitted_Params Parms{};

	Parms.InText = InText;
	Parms.InCommitMethod = InCommitMethod;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class VerseFortniteUI.VerseFortniteUIFrameworkTextBlock
// (None)

class UClass* UVerseFortniteUIFrameworkTextBlock::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseFortniteUIFrameworkTextBlock");

	return Clss;
}


// VerseFortniteUIFrameworkTextBlock VerseFortniteUI.Default__VerseFortniteUIFrameworkTextBlock
// (Public, ClassDefaultObject, ArchetypeObject)

class UVerseFortniteUIFrameworkTextBlock* UVerseFortniteUIFrameworkTextBlock::GetDefaultObj()
{
	static class UVerseFortniteUIFrameworkTextBlock* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseFortniteUIFrameworkTextBlock*>(UVerseFortniteUIFrameworkTextBlock::StaticClass()->DefaultObject);

	return Default;
}


// Class VerseFortniteUI.VerseFortniteUIFrameworkEditableText
// (None)

class UClass* UVerseFortniteUIFrameworkEditableText::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseFortniteUIFrameworkEditableText");

	return Clss;
}


// VerseFortniteUIFrameworkEditableText VerseFortniteUI.Default__VerseFortniteUIFrameworkEditableText
// (Public, ClassDefaultObject, ArchetypeObject)

class UVerseFortniteUIFrameworkEditableText* UVerseFortniteUIFrameworkEditableText::GetDefaultObj()
{
	static class UVerseFortniteUIFrameworkEditableText* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseFortniteUIFrameworkEditableText*>(UVerseFortniteUIFrameworkEditableText::StaticClass()->DefaultObject);

	return Default;
}


// Class VerseFortniteUI.VerseFortniteUIFrameworkEditableTextBox
// (None)

class UClass* UVerseFortniteUIFrameworkEditableTextBox::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseFortniteUIFrameworkEditableTextBox");

	return Clss;
}


// VerseFortniteUIFrameworkEditableTextBox VerseFortniteUI.Default__VerseFortniteUIFrameworkEditableTextBox
// (Public, ClassDefaultObject, ArchetypeObject)

class UVerseFortniteUIFrameworkEditableTextBox* UVerseFortniteUIFrameworkEditableTextBox::GetDefaultObj()
{
	static class UVerseFortniteUIFrameworkEditableTextBox* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseFortniteUIFrameworkEditableTextBox*>(UVerseFortniteUIFrameworkEditableTextBox::StaticClass()->DefaultObject);

	return Default;
}


// Class VerseFortniteUI.VerseFortniteUIFrameworkSlider
// (None)

class UClass* UVerseFortniteUIFrameworkSlider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseFortniteUIFrameworkSlider");

	return Clss;
}


// VerseFortniteUIFrameworkSlider VerseFortniteUI.Default__VerseFortniteUIFrameworkSlider
// (Public, ClassDefaultObject, ArchetypeObject)

class UVerseFortniteUIFrameworkSlider* UVerseFortniteUIFrameworkSlider::GetDefaultObj()
{
	static class UVerseFortniteUIFrameworkSlider* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseFortniteUIFrameworkSlider*>(UVerseFortniteUIFrameworkSlider::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteUI.VerseFortniteUIFrameworkSlider.SetValue
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVerseFortniteUIFrameworkSlider::SetValue(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseFortniteUIFrameworkSlider", "SetValue");

	Params::UVerseFortniteUIFrameworkSlider_SetValue_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortniteUI.VerseFortniteUIFrameworkSlider.SetStepSize
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMinValue                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseFortniteUIFrameworkSlider::SetStepSize(float InMinValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseFortniteUIFrameworkSlider", "SetStepSize");

	Params::UVerseFortniteUIFrameworkSlider_SetStepSize_Params Parms{};

	Parms.InMinValue = InMinValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteUI.VerseFortniteUIFrameworkSlider.SetMinValue
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMinValue                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseFortniteUIFrameworkSlider::SetMinValue(float InMinValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseFortniteUIFrameworkSlider", "SetMinValue");

	Params::UVerseFortniteUIFrameworkSlider_SetMinValue_Params Parms{};

	Parms.InMinValue = InMinValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteUI.VerseFortniteUIFrameworkSlider.SetMaxValue
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMaxValue                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseFortniteUIFrameworkSlider::SetMaxValue(float InMaxValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseFortniteUIFrameworkSlider", "SetMaxValue");

	Params::UVerseFortniteUIFrameworkSlider_SetMaxValue_Params Parms{};

	Parms.InMaxValue = InMaxValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteUI.VerseFortniteUIFrameworkSlider.ServerValueChanged
// (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:
// class UPlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InNewValue                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InClientID                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InServerID                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseFortniteUIFrameworkSlider::ServerValueChanged(class UPlayerController* PlayerController, float InNewValue, int32 InClientID, int32 InServerID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseFortniteUIFrameworkSlider", "ServerValueChanged");

	Params::UVerseFortniteUIFrameworkSlider_ServerValueChanged_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.InNewValue = InNewValue;
	Parms.InClientID = InClientID;
	Parms.InServerID = InServerID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteUI.VerseFortniteUIFrameworkSlider.OnRep_Value
// (Final, Native, Private)
// Parameters:

void UVerseFortniteUIFrameworkSlider::OnRep_Value()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseFortniteUIFrameworkSlider", "OnRep_Value");

	Params::UVerseFortniteUIFrameworkSlider_OnRep_Value_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteUI.VerseFortniteUIFrameworkSlider.OnRep_StepSize
// (Final, Native, Private)
// Parameters:

void UVerseFortniteUIFrameworkSlider::OnRep_StepSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseFortniteUIFrameworkSlider", "OnRep_StepSize");

	Params::UVerseFortniteUIFrameworkSlider_OnRep_StepSize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteUI.VerseFortniteUIFrameworkSlider.OnRep_MinValue
// (Final, Native, Private)
// Parameters:

void UVerseFortniteUIFrameworkSlider::OnRep_MinValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseFortniteUIFrameworkSlider", "OnRep_MinValue");

	Params::UVerseFortniteUIFrameworkSlider_OnRep_MinValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteUI.VerseFortniteUIFrameworkSlider.OnRep_MaxValue
// (Final, Native, Private)
// Parameters:

void UVerseFortniteUIFrameworkSlider::OnRep_MaxValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseFortniteUIFrameworkSlider", "OnRep_MaxValue");

	Params::UVerseFortniteUIFrameworkSlider_OnRep_MaxValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteUI.VerseFortniteUIFrameworkSlider.HandleValueChanged
// (Final, Native, Private)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseFortniteUIFrameworkSlider::HandleValueChanged(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseFortniteUIFrameworkSlider", "HandleValueChanged");

	Params::UVerseFortniteUIFrameworkSlider_HandleValueChanged_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteUI.VerseFortniteUIFrameworkSlider.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVerseFortniteUIFrameworkSlider::GetValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseFortniteUIFrameworkSlider", "GetValue");

	Params::UVerseFortniteUIFrameworkSlider_GetValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortniteUI.VerseFortniteUIFrameworkSlider.GetStepSize
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVerseFortniteUIFrameworkSlider::GetStepSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseFortniteUIFrameworkSlider", "GetStepSize");

	Params::UVerseFortniteUIFrameworkSlider_GetStepSize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortniteUI.VerseFortniteUIFrameworkSlider.GetMinValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVerseFortniteUIFrameworkSlider::GetMinValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseFortniteUIFrameworkSlider", "GetMinValue");

	Params::UVerseFortniteUIFrameworkSlider_GetMinValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortniteUI.VerseFortniteUIFrameworkSlider.GetMaxValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVerseFortniteUIFrameworkSlider::GetMaxValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseFortniteUIFrameworkSlider", "GetMaxValue");

	Params::UVerseFortniteUIFrameworkSlider_GetMaxValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortniteUI.VerseFortniteUIFrameworkSlider.ExecuteServerValueChanged
// (Final, Native, Public)
// Parameters:
// float                              InNewValue                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InClientID                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InServerID                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseFortniteUIFrameworkSlider::ExecuteServerValueChanged(float InNewValue, int32 InClientID, int32 InServerID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseFortniteUIFrameworkSlider", "ExecuteServerValueChanged");

	Params::UVerseFortniteUIFrameworkSlider_ExecuteServerValueChanged_Params Parms{};

	Parms.InNewValue = InNewValue;
	Parms.InClientID = InClientID;
	Parms.InServerID = InServerID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


