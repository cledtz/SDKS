#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class DynamicUI.DynamicUITransitionableWidgetInterface
// (None)

class UClass* UDynamicUITransitionableWidgetInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicUITransitionableWidgetInterface");

	return Clss;
}


// DynamicUITransitionableWidgetInterface DynamicUI.Default__DynamicUITransitionableWidgetInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UDynamicUITransitionableWidgetInterface* UDynamicUITransitionableWidgetInterface::GetDefaultObj()
{
	static class UDynamicUITransitionableWidgetInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicUITransitionableWidgetInterface*>(UDynamicUITransitionableWidgetInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function DynamicUI.DynamicUITransitionableWidgetInterface.BroadcastTransitionCompleted
// (Native, Protected, BlueprintCallable)
// Parameters:

void UDynamicUITransitionableWidgetInterface::BroadcastTransitionCompleted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicUITransitionableWidgetInterface", "BroadcastTransitionCompleted");

	Params::UDynamicUITransitionableWidgetInterface_BroadcastTransitionCompleted_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class DynamicUI.DynamicUIDirectorBase
// (Actor)

class UClass* UDynamicUIDirectorBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicUIDirectorBase");

	return Clss;
}


// DynamicUIDirectorBase DynamicUI.Default__DynamicUIDirectorBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UDynamicUIDirectorBase* UDynamicUIDirectorBase::GetDefaultObj()
{
	static class UDynamicUIDirectorBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicUIDirectorBase*>(UDynamicUIDirectorBase::StaticClass()->DefaultObject);

	return Default;
}


// Function DynamicUI.DynamicUIDirectorBase.RemoveScene
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDynamicUIScene*             Scene                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDynamicUIDirectorBase::RemoveScene(class UDynamicUIScene* Scene)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicUIDirectorBase", "RemoveScene");

	Params::UDynamicUIDirectorBase_RemoveScene_Params Parms{};

	Parms.Scene = Scene;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DynamicUI.DynamicUIDirectorBase.GetOwningLocalPlayerController
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPlayerController*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPlayerController* UDynamicUIDirectorBase::GetOwningLocalPlayerController()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicUIDirectorBase", "GetOwningLocalPlayerController");

	Params::UDynamicUIDirectorBase_GetOwningLocalPlayerController_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DynamicUI.DynamicUIDirectorBase.GetOwningLocalPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULocalPlayer*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULocalPlayer* UDynamicUIDirectorBase::GetOwningLocalPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicUIDirectorBase", "GetOwningLocalPlayer");

	Params::UDynamicUIDirectorBase_GetOwningLocalPlayer_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DynamicUI.DynamicUIDirectorBase.AddScene
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDynamicUIScene*             Scene                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDynamicUIDirectorBase::AddScene(class UDynamicUIScene* Scene)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicUIDirectorBase", "AddScene");

	Params::UDynamicUIDirectorBase_AddScene_Params Parms{};

	Parms.Scene = Scene;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class DynamicUI.DynamicUIConstraintBase
// (None)

class UClass* UDynamicUIConstraintBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicUIConstraintBase");

	return Clss;
}


// DynamicUIConstraintBase DynamicUI.Default__DynamicUIConstraintBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UDynamicUIConstraintBase* UDynamicUIConstraintBase::GetDefaultObj()
{
	static class UDynamicUIConstraintBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicUIConstraintBase*>(UDynamicUIConstraintBase::StaticClass()->DefaultObject);

	return Default;
}


// Class DynamicUI.DynamicUIConstraintPosition
// (None)

class UClass* UDynamicUIConstraintPosition::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicUIConstraintPosition");

	return Clss;
}


// DynamicUIConstraintPosition DynamicUI.Default__DynamicUIConstraintPosition
// (Public, ClassDefaultObject, ArchetypeObject)

class UDynamicUIConstraintPosition* UDynamicUIConstraintPosition::GetDefaultObj()
{
	static class UDynamicUIConstraintPosition* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicUIConstraintPosition*>(UDynamicUIConstraintPosition::StaticClass()->DefaultObject);

	return Default;
}


// Class DynamicUI.DynamicUIConstraintAlignment
// (None)

class UClass* UDynamicUIConstraintAlignment::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicUIConstraintAlignment");

	return Clss;
}


// DynamicUIConstraintAlignment DynamicUI.Default__DynamicUIConstraintAlignment
// (Public, ClassDefaultObject, ArchetypeObject)

class UDynamicUIConstraintAlignment* UDynamicUIConstraintAlignment::GetDefaultObj()
{
	static class UDynamicUIConstraintAlignment* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicUIConstraintAlignment*>(UDynamicUIConstraintAlignment::StaticClass()->DefaultObject);

	return Default;
}


// Class DynamicUI.DynamicUIConstraintWidget
// (None)

class UClass* UDynamicUIConstraintWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicUIConstraintWidget");

	return Clss;
}


// DynamicUIConstraintWidget DynamicUI.Default__DynamicUIConstraintWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UDynamicUIConstraintWidget* UDynamicUIConstraintWidget::GetDefaultObj()
{
	static class UDynamicUIConstraintWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicUIConstraintWidget*>(UDynamicUIConstraintWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class DynamicUI.DynamicUIConstraintContainer
// (None)

class UClass* UDynamicUIConstraintContainer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicUIConstraintContainer");

	return Clss;
}


// DynamicUIConstraintContainer DynamicUI.Default__DynamicUIConstraintContainer
// (Public, ClassDefaultObject, ArchetypeObject)

class UDynamicUIConstraintContainer* UDynamicUIConstraintContainer::GetDefaultObj()
{
	static class UDynamicUIConstraintContainer* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicUIConstraintContainer*>(UDynamicUIConstraintContainer::StaticClass()->DefaultObject);

	return Default;
}


// Class DynamicUI.DynamicUIConstraintReplace
// (None)

class UClass* UDynamicUIConstraintReplace::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicUIConstraintReplace");

	return Clss;
}


// DynamicUIConstraintReplace DynamicUI.Default__DynamicUIConstraintReplace
// (Public, ClassDefaultObject, ArchetypeObject)

class UDynamicUIConstraintReplace* UDynamicUIConstraintReplace::GetDefaultObj()
{
	static class UDynamicUIConstraintReplace* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicUIConstraintReplace*>(UDynamicUIConstraintReplace::StaticClass()->DefaultObject);

	return Default;
}


// Class DynamicUI.DynamicUIConstraintOverrideBase
// (None)

class UClass* UDynamicUIConstraintOverrideBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicUIConstraintOverrideBase");

	return Clss;
}


// DynamicUIConstraintOverrideBase DynamicUI.Default__DynamicUIConstraintOverrideBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UDynamicUIConstraintOverrideBase* UDynamicUIConstraintOverrideBase::GetDefaultObj()
{
	static class UDynamicUIConstraintOverrideBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicUIConstraintOverrideBase*>(UDynamicUIConstraintOverrideBase::StaticClass()->DefaultObject);

	return Default;
}


// Class DynamicUI.DynamicUIConstraintPlatformOverride
// (None)

class UClass* UDynamicUIConstraintPlatformOverride::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicUIConstraintPlatformOverride");

	return Clss;
}


// DynamicUIConstraintPlatformOverride DynamicUI.Default__DynamicUIConstraintPlatformOverride
// (Public, ClassDefaultObject, ArchetypeObject)

class UDynamicUIConstraintPlatformOverride* UDynamicUIConstraintPlatformOverride::GetDefaultObj()
{
	static class UDynamicUIConstraintPlatformOverride* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicUIConstraintPlatformOverride*>(UDynamicUIConstraintPlatformOverride::StaticClass()->DefaultObject);

	return Default;
}


// Class DynamicUI.DynamicUIManager
// (None)

class UClass* UDynamicUIManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicUIManager");

	return Clss;
}


// DynamicUIManager DynamicUI.Default__DynamicUIManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UDynamicUIManager* UDynamicUIManager::GetDefaultObj()
{
	static class UDynamicUIManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicUIManager*>(UDynamicUIManager::StaticClass()->DefaultObject);

	return Default;
}


// Function DynamicUI.DynamicUIManager.RemoveScenes
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UDynamicUIScene*>     Scenes                                                           (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UPlayerController*           Player                                                           (Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDynamicUIManager::RemoveScenes(const TArray<class UDynamicUIScene*>& Scenes, class UPlayerController*& Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicUIManager", "RemoveScenes");

	Params::UDynamicUIManager_RemoveScenes_Params Parms{};

	Parms.Scenes = Scenes;
	Parms.Player = Player;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DynamicUI.DynamicUIManager.RemoveSceneFromFirstLocalPlayer
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UDynamicUIScene*             Scene                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDynamicUIManager::RemoveSceneFromFirstLocalPlayer(class UDynamicUIScene* Scene)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicUIManager", "RemoveSceneFromFirstLocalPlayer");

	Params::UDynamicUIManager_RemoveSceneFromFirstLocalPlayer_Params Parms{};

	Parms.Scene = Scene;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DynamicUI.DynamicUIManager.RemoveScene
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicUIScene*             Scene                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPlayerController*           Player                                                           (Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDynamicUIManager::RemoveScene(class UDynamicUIScene* Scene, class UPlayerController*& Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicUIManager", "RemoveScene");

	Params::UDynamicUIManager_RemoveScene_Params Parms{};

	Parms.Scene = Scene;
	Parms.Player = Player;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DynamicUI.DynamicUIManager.AddSceneToFirstLocalPlayer
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UDynamicUIScene*             Scene                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDynamicUIManager::AddSceneToFirstLocalPlayer(class UDynamicUIScene* Scene)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicUIManager", "AddSceneToFirstLocalPlayer");

	Params::UDynamicUIManager_AddSceneToFirstLocalPlayer_Params Parms{};

	Parms.Scene = Scene;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DynamicUI.DynamicUIManager.AddScenes
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UDynamicUIScene*>     Scenes                                                           (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UPlayerController*           Player                                                           (Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDynamicUIManager::AddScenes(const TArray<class UDynamicUIScene*>& Scenes, class UPlayerController*& Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicUIManager", "AddScenes");

	Params::UDynamicUIManager_AddScenes_Params Parms{};

	Parms.Scenes = Scenes;
	Parms.Player = Player;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DynamicUI.DynamicUIManager.AddScene
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicUIScene*             Scene                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPlayerController*           Player                                                           (Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDynamicUIManager::AddScene(class UDynamicUIScene* Scene, class UPlayerController*& Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicUIManager", "AddScene");

	Params::UDynamicUIManager_AddScene_Params Parms{};

	Parms.Scene = Scene;
	Parms.Player = Player;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class DynamicUI.DynamicUIScene
// (None)

class UClass* UDynamicUIScene::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicUIScene");

	return Clss;
}


// DynamicUIScene DynamicUI.Default__DynamicUIScene
// (Public, ClassDefaultObject, ArchetypeObject)

class UDynamicUIScene* UDynamicUIScene::GetDefaultObj()
{
	static class UDynamicUIScene* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicUIScene*>(UDynamicUIScene::StaticClass()->DefaultObject);

	return Default;
}


// Class DynamicUI.DynamicUISizeBase
// (None)

class UClass* UDynamicUISizeBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicUISizeBase");

	return Clss;
}


// DynamicUISizeBase DynamicUI.Default__DynamicUISizeBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UDynamicUISizeBase* UDynamicUISizeBase::GetDefaultObj()
{
	static class UDynamicUISizeBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicUISizeBase*>(UDynamicUISizeBase::StaticClass()->DefaultObject);

	return Default;
}


// Class DynamicUI.DynamicUISizeFixed
// (None)

class UClass* UDynamicUISizeFixed::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicUISizeFixed");

	return Clss;
}


// DynamicUISizeFixed DynamicUI.Default__DynamicUISizeFixed
// (Public, ClassDefaultObject, ArchetypeObject)

class UDynamicUISizeFixed* UDynamicUISizeFixed::GetDefaultObj()
{
	static class UDynamicUISizeFixed* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicUISizeFixed*>(UDynamicUISizeFixed::StaticClass()->DefaultObject);

	return Default;
}


// Class DynamicUI.DynamicUISizeScale
// (None)

class UClass* UDynamicUISizeScale::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicUISizeScale");

	return Clss;
}


// DynamicUISizeScale DynamicUI.Default__DynamicUISizeScale
// (Public, ClassDefaultObject, ArchetypeObject)

class UDynamicUISizeScale* UDynamicUISizeScale::GetDefaultObj()
{
	static class UDynamicUISizeScale* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicUISizeScale*>(UDynamicUISizeScale::StaticClass()->DefaultObject);

	return Default;
}


// Class DynamicUI.DynamicUISizeMatchWidget
// (None)

class UClass* UDynamicUISizeMatchWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicUISizeMatchWidget");

	return Clss;
}


// DynamicUISizeMatchWidget DynamicUI.Default__DynamicUISizeMatchWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UDynamicUISizeMatchWidget* UDynamicUISizeMatchWidget::GetDefaultObj()
{
	static class UDynamicUISizeMatchWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicUISizeMatchWidget*>(UDynamicUISizeMatchWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class DynamicUI.DynamicUISizeOverrideBase
// (None)

class UClass* UDynamicUISizeOverrideBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicUISizeOverrideBase");

	return Clss;
}


// DynamicUISizeOverrideBase DynamicUI.Default__DynamicUISizeOverrideBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UDynamicUISizeOverrideBase* UDynamicUISizeOverrideBase::GetDefaultObj()
{
	static class UDynamicUISizeOverrideBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicUISizeOverrideBase*>(UDynamicUISizeOverrideBase::StaticClass()->DefaultObject);

	return Default;
}


// Class DynamicUI.DynamicUISizeOverridePlatform
// (None)

class UClass* UDynamicUISizeOverridePlatform::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicUISizeOverridePlatform");

	return Clss;
}


// DynamicUISizeOverridePlatform DynamicUI.Default__DynamicUISizeOverridePlatform
// (Public, ClassDefaultObject, ArchetypeObject)

class UDynamicUISizeOverridePlatform* UDynamicUISizeOverridePlatform::GetDefaultObj()
{
	static class UDynamicUISizeOverridePlatform* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicUISizeOverridePlatform*>(UDynamicUISizeOverridePlatform::StaticClass()->DefaultObject);

	return Default;
}


// Class DynamicUI.DynamicUIUnallowBase
// (None)

class UClass* UDynamicUIUnallowBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicUIUnallowBase");

	return Clss;
}


// DynamicUIUnallowBase DynamicUI.Default__DynamicUIUnallowBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UDynamicUIUnallowBase* UDynamicUIUnallowBase::GetDefaultObj()
{
	static class UDynamicUIUnallowBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicUIUnallowBase*>(UDynamicUIUnallowBase::StaticClass()->DefaultObject);

	return Default;
}


// Class DynamicUI.DynamicUIUnallowWidget
// (None)

class UClass* UDynamicUIUnallowWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicUIUnallowWidget");

	return Clss;
}


// DynamicUIUnallowWidget DynamicUI.Default__DynamicUIUnallowWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UDynamicUIUnallowWidget* UDynamicUIUnallowWidget::GetDefaultObj()
{
	static class UDynamicUIUnallowWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicUIUnallowWidget*>(UDynamicUIUnallowWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class DynamicUI.DynamicUIUnallowLayer
// (None)

class UClass* UDynamicUIUnallowLayer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicUIUnallowLayer");

	return Clss;
}


// DynamicUIUnallowLayer DynamicUI.Default__DynamicUIUnallowLayer
// (Public, ClassDefaultObject, ArchetypeObject)

class UDynamicUIUnallowLayer* UDynamicUIUnallowLayer::GetDefaultObj()
{
	static class UDynamicUIUnallowLayer* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicUIUnallowLayer*>(UDynamicUIUnallowLayer::StaticClass()->DefaultObject);

	return Default;
}


// Class DynamicUI.DynamicUIVisualizerWidget
// (None)

class UClass* UDynamicUIVisualizerWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicUIVisualizerWidget");

	return Clss;
}


// DynamicUIVisualizerWidget DynamicUI.Default__DynamicUIVisualizerWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UDynamicUIVisualizerWidget* UDynamicUIVisualizerWidget::GetDefaultObj()
{
	static class UDynamicUIVisualizerWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicUIVisualizerWidget*>(UDynamicUIVisualizerWidget::StaticClass()->DefaultObject);

	return Default;
}

}


