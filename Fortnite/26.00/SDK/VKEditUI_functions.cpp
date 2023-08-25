#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class VKEditUI.VKConnectionIndicator
// (None)

class UClass* UVKConnectionIndicator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VKConnectionIndicator");

	return Clss;
}


// VKConnectionIndicator VKEditUI.Default__VKConnectionIndicator
// (Public, ClassDefaultObject, ArchetypeObject)

class UVKConnectionIndicator* UVKConnectionIndicator::GetDefaultObj()
{
	static class UVKConnectionIndicator* Default = nullptr;

	if (!Default)
		Default = static_cast<UVKConnectionIndicator*>(UVKConnectionIndicator::StaticClass()->DefaultObject);

	return Default;
}


// Function VKEditUI.VKConnectionIndicator.OnMinigameStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EFortMinigameState      MinigameState                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFortMinigameState      PreviousMinigameState                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVKConnectionIndicator::OnMinigameStateChanged(enum class EFortMinigameState MinigameState, enum class EFortMinigameState PreviousMinigameState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VKConnectionIndicator", "OnMinigameStateChanged");

	Params::UVKConnectionIndicator_OnMinigameStateChanged_Params Parms{};

	Parms.MinigameState = MinigameState;
	Parms.PreviousMinigameState = PreviousMinigameState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VKEditUI.VKConnectionIndicator.HandleMemorySamplerProgressUpdated
// (Final, Native, Private)
// Parameters:
// float                              Progress                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVKConnectionIndicator::HandleMemorySamplerProgressUpdated(float Progress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VKConnectionIndicator", "HandleMemorySamplerProgressUpdated");

	Params::UVKConnectionIndicator_HandleMemorySamplerProgressUpdated_Params Parms{};

	Parms.Progress = Progress;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class VKEditUI.VKDebugMessagesBase
// (None)

class UClass* UVKDebugMessagesBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VKDebugMessagesBase");

	return Clss;
}


// VKDebugMessagesBase VKEditUI.Default__VKDebugMessagesBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UVKDebugMessagesBase* UVKDebugMessagesBase::GetDefaultObj()
{
	static class UVKDebugMessagesBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UVKDebugMessagesBase*>(UVKDebugMessagesBase::StaticClass()->DefaultObject);

	return Default;
}


// Function VKEditUI.VKDebugMessagesBase.HandleGameStateInitialized
// (Final, Native, Protected)
// Parameters:
// class UFortGameState*              GameState                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVKDebugMessagesBase::HandleGameStateInitialized(class UFortGameState* GameState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VKDebugMessagesBase", "HandleGameStateInitialized");

	Params::UVKDebugMessagesBase_HandleGameStateInitialized_Params Parms{};

	Parms.GameState = GameState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VKEditUI.VKDebugMessagesBase.BP_OnGameStateInitialized
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortGameState*              GameState                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVKDebugMessagesBase::BP_OnGameStateInitialized(class UFortGameState* GameState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VKDebugMessagesBase", "BP_OnGameStateInitialized");

	Params::UVKDebugMessagesBase_BP_OnGameStateInitialized_Params Parms{};

	Parms.GameState = GameState;

	UObject::ProcessEvent(Func, &Parms);

}


// Class VKEditUI.VkEditDynamicUIDirector
// (Actor)

class UClass* UVkEditDynamicUIDirector::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VkEditDynamicUIDirector");

	return Clss;
}


// VkEditDynamicUIDirector VKEditUI.Default__VkEditDynamicUIDirector
// (Public, ClassDefaultObject, ArchetypeObject)

class UVkEditDynamicUIDirector* UVkEditDynamicUIDirector::GetDefaultObj()
{
	static class UVkEditDynamicUIDirector* Default = nullptr;

	if (!Default)
		Default = static_cast<UVkEditDynamicUIDirector*>(UVkEditDynamicUIDirector::StaticClass()->DefaultObject);

	return Default;
}


// Class VKEditUI.VkEditLogTab
// (None)

class UClass* UVkEditLogTab::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VkEditLogTab");

	return Clss;
}


// VkEditLogTab VKEditUI.Default__VkEditLogTab
// (Public, ClassDefaultObject, ArchetypeObject)

class UVkEditLogTab* UVkEditLogTab::GetDefaultObj()
{
	static class UVkEditLogTab* Default = nullptr;

	if (!Default)
		Default = static_cast<UVkEditLogTab*>(UVkEditLogTab::StaticClass()->DefaultObject);

	return Default;
}

}


