#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GameplayBehaviorsModule.BTDecorator_GameplayTagQuery
// (None)

class UClass* UBTDecorator_GameplayTagQuery::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTDecorator_GameplayTagQuery");

	return Clss;
}


// BTDecorator_GameplayTagQuery GameplayBehaviorsModule.Default__BTDecorator_GameplayTagQuery
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTDecorator_GameplayTagQuery* UBTDecorator_GameplayTagQuery::GetDefaultObj()
{
	static class UBTDecorator_GameplayTagQuery* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTDecorator_GameplayTagQuery*>(UBTDecorator_GameplayTagQuery::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayBehaviorsModule.BTTask_StopGameplayBehavior
// (None)

class UClass* UBTTask_StopGameplayBehavior::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_StopGameplayBehavior");

	return Clss;
}


// BTTask_StopGameplayBehavior GameplayBehaviorsModule.Default__BTTask_StopGameplayBehavior
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTTask_StopGameplayBehavior* UBTTask_StopGameplayBehavior::GetDefaultObj()
{
	static class UBTTask_StopGameplayBehavior* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_StopGameplayBehavior*>(UBTTask_StopGameplayBehavior::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayBehaviorsModule.GameplayBehaviorConfig
// (None)

class UClass* UGameplayBehaviorConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayBehaviorConfig");

	return Clss;
}


// GameplayBehaviorConfig GameplayBehaviorsModule.Default__GameplayBehaviorConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayBehaviorConfig* UGameplayBehaviorConfig::GetDefaultObj()
{
	static class UGameplayBehaviorConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayBehaviorConfig*>(UGameplayBehaviorConfig::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayBehaviorsModule.GameplayBehaviorConfig_BehaviorTree
// (None)

class UClass* UGameplayBehaviorConfig_BehaviorTree::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayBehaviorConfig_BehaviorTree");

	return Clss;
}


// GameplayBehaviorConfig_BehaviorTree GameplayBehaviorsModule.Default__GameplayBehaviorConfig_BehaviorTree
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayBehaviorConfig_BehaviorTree* UGameplayBehaviorConfig_BehaviorTree::GetDefaultObj()
{
	static class UGameplayBehaviorConfig_BehaviorTree* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayBehaviorConfig_BehaviorTree*>(UGameplayBehaviorConfig_BehaviorTree::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayBehaviorsModule.GameplayBehavior
// (None)

class UClass* UGameplayBehavior::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayBehavior");

	return Clss;
}


// GameplayBehavior GameplayBehaviorsModule.Default__GameplayBehavior
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayBehavior* UGameplayBehavior::GetDefaultObj()
{
	static class UGameplayBehavior* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayBehavior*>(UGameplayBehavior::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayBehaviorsModule.GameplayBehavior.K2_TriggerBehavior
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      Avatar                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameplayBehaviorConfig*     Config                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      SmartObjectOwner                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayBehavior::K2_TriggerBehavior(class UActor* Avatar, class UGameplayBehaviorConfig* Config, class UActor* SmartObjectOwner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayBehavior", "K2_TriggerBehavior");

	Params::UGameplayBehavior_K2_TriggerBehavior_Params Parms{};

	Parms.Avatar = Avatar;
	Parms.Config = Config;
	Parms.SmartObjectOwner = SmartObjectOwner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayBehaviorsModule.GameplayBehavior.K2_OnTriggeredPawn
// (Event, Public, BlueprintEvent)
// Parameters:
// class UPawn*                       Avatar                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameplayBehaviorConfig*     Config                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      SmartObjectOwner                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayBehavior::K2_OnTriggeredPawn(class UPawn* Avatar, class UGameplayBehaviorConfig* Config, class UActor* SmartObjectOwner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayBehavior", "K2_OnTriggeredPawn");

	Params::UGameplayBehavior_K2_OnTriggeredPawn_Params Parms{};

	Parms.Avatar = Avatar;
	Parms.Config = Config;
	Parms.SmartObjectOwner = SmartObjectOwner;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayBehaviorsModule.GameplayBehavior.K2_OnTriggeredCharacter
// (Event, Public, BlueprintEvent)
// Parameters:
// class UCharacter*                  Avatar                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameplayBehaviorConfig*     Config                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      SmartObjectOwner                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayBehavior::K2_OnTriggeredCharacter(class UCharacter* Avatar, class UGameplayBehaviorConfig* Config, class UActor* SmartObjectOwner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayBehavior", "K2_OnTriggeredCharacter");

	Params::UGameplayBehavior_K2_OnTriggeredCharacter_Params Parms{};

	Parms.Avatar = Avatar;
	Parms.Config = Config;
	Parms.SmartObjectOwner = SmartObjectOwner;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayBehaviorsModule.GameplayBehavior.K2_OnTriggered
// (Event, Public, BlueprintEvent)
// Parameters:
// class UActor*                      Avatar                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameplayBehaviorConfig*     Config                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      SmartObjectOwner                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayBehavior::K2_OnTriggered(class UActor* Avatar, class UGameplayBehaviorConfig* Config, class UActor* SmartObjectOwner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayBehavior", "K2_OnTriggered");

	Params::UGameplayBehavior_K2_OnTriggered_Params Parms{};

	Parms.Avatar = Avatar;
	Parms.Config = Config;
	Parms.SmartObjectOwner = SmartObjectOwner;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayBehaviorsModule.GameplayBehavior.K2_OnFinishedPawn
// (Event, Public, BlueprintEvent)
// Parameters:
// class UPawn*                       Avatar                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWasInterrupted                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayBehavior::K2_OnFinishedPawn(class UPawn* Avatar, bool bWasInterrupted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayBehavior", "K2_OnFinishedPawn");

	Params::UGameplayBehavior_K2_OnFinishedPawn_Params Parms{};

	Parms.Avatar = Avatar;
	Parms.bWasInterrupted = bWasInterrupted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayBehaviorsModule.GameplayBehavior.K2_OnFinishedCharacter
// (Event, Public, BlueprintEvent)
// Parameters:
// class UCharacter*                  Avatar                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWasInterrupted                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayBehavior::K2_OnFinishedCharacter(class UCharacter* Avatar, bool bWasInterrupted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayBehavior", "K2_OnFinishedCharacter");

	Params::UGameplayBehavior_K2_OnFinishedCharacter_Params Parms{};

	Parms.Avatar = Avatar;
	Parms.bWasInterrupted = bWasInterrupted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayBehaviorsModule.GameplayBehavior.K2_OnFinished
// (Event, Public, BlueprintEvent)
// Parameters:
// class UActor*                      Avatar                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWasInterrupted                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayBehavior::K2_OnFinished(class UActor* Avatar, bool bWasInterrupted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayBehavior", "K2_OnFinished");

	Params::UGameplayBehavior_K2_OnFinished_Params Parms{};

	Parms.Avatar = Avatar;
	Parms.bWasInterrupted = bWasInterrupted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayBehaviorsModule.GameplayBehavior.K2_GetNextActorIndexInSequence
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              CurrentIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UGameplayBehavior::K2_GetNextActorIndexInSequence(int32 CurrentIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayBehavior", "K2_GetNextActorIndexInSequence");

	Params::UGameplayBehavior_K2_GetNextActorIndexInSequence_Params Parms{};

	Parms.CurrentIndex = CurrentIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayBehaviorsModule.GameplayBehavior.K2_EndBehavior
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      Avatar                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayBehavior::K2_EndBehavior(class UActor* Avatar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayBehavior", "K2_EndBehavior");

	Params::UGameplayBehavior_K2_EndBehavior_Params Parms{};

	Parms.Avatar = Avatar;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayBehaviorsModule.GameplayBehavior.K2_AbortBehavior
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      Avatar                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayBehavior::K2_AbortBehavior(class UActor* Avatar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayBehavior", "K2_AbortBehavior");

	Params::UGameplayBehavior_K2_AbortBehavior_Params Parms{};

	Parms.Avatar = Avatar;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GameplayBehaviorsModule.GameplayBehavior_BehaviorTree
// (None)

class UClass* UGameplayBehavior_BehaviorTree::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayBehavior_BehaviorTree");

	return Clss;
}


// GameplayBehavior_BehaviorTree GameplayBehaviorsModule.Default__GameplayBehavior_BehaviorTree
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayBehavior_BehaviorTree* UGameplayBehavior_BehaviorTree::GetDefaultObj()
{
	static class UGameplayBehavior_BehaviorTree* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayBehavior_BehaviorTree*>(UGameplayBehavior_BehaviorTree::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayBehaviorsModule.BlackboardKeyType_GameplayTag
// (None)

class UClass* UBlackboardKeyType_GameplayTag::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlackboardKeyType_GameplayTag");

	return Clss;
}


// BlackboardKeyType_GameplayTag GameplayBehaviorsModule.Default__BlackboardKeyType_GameplayTag
// (Public, ClassDefaultObject, ArchetypeObject)

class UBlackboardKeyType_GameplayTag* UBlackboardKeyType_GameplayTag::GetDefaultObj()
{
	static class UBlackboardKeyType_GameplayTag* Default = nullptr;

	if (!Default)
		Default = static_cast<UBlackboardKeyType_GameplayTag*>(UBlackboardKeyType_GameplayTag::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayBehaviorsModule.GameplayBehaviorConfig_Animation
// (None)

class UClass* UGameplayBehaviorConfig_Animation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayBehaviorConfig_Animation");

	return Clss;
}


// GameplayBehaviorConfig_Animation GameplayBehaviorsModule.Default__GameplayBehaviorConfig_Animation
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayBehaviorConfig_Animation* UGameplayBehaviorConfig_Animation::GetDefaultObj()
{
	static class UGameplayBehaviorConfig_Animation* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayBehaviorConfig_Animation*>(UGameplayBehaviorConfig_Animation::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayBehaviorsModule.GameplayBehaviorsBlueprintFunctionLibrary
// (None)

class UClass* UGameplayBehaviorsBlueprintFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayBehaviorsBlueprintFunctionLibrary");

	return Clss;
}


// GameplayBehaviorsBlueprintFunctionLibrary GameplayBehaviorsModule.Default__GameplayBehaviorsBlueprintFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayBehaviorsBlueprintFunctionLibrary* UGameplayBehaviorsBlueprintFunctionLibrary::GetDefaultObj()
{
	static class UGameplayBehaviorsBlueprintFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayBehaviorsBlueprintFunctionLibrary*>(UGameplayBehaviorsBlueprintFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayBehaviorsModule.GameplayBehaviorsBlueprintFunctionLibrary.SetValueAsGameplayTagForBlackboardComp
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UBlackboardComponent*        BlackboardComp                                                   (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       GameplayTagValue                                                 (Parm, NativeAccessSpecifierPublic)

void UGameplayBehaviorsBlueprintFunctionLibrary::SetValueAsGameplayTagForBlackboardComp(class UBlackboardComponent* BlackboardComp, class FName& KeyName, const struct FGameplayTagContainer& GameplayTagValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayBehaviorsBlueprintFunctionLibrary", "SetValueAsGameplayTagForBlackboardComp");

	Params::UGameplayBehaviorsBlueprintFunctionLibrary_SetValueAsGameplayTagForBlackboardComp_Params Parms{};

	Parms.BlackboardComp = BlackboardComp;
	Parms.KeyName = KeyName;
	Parms.GameplayTagValue = GameplayTagValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayBehaviorsModule.GameplayBehaviorsBlueprintFunctionLibrary.SetBlackboardValueAsGameplayTag
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       Value                                                            (Parm, NativeAccessSpecifierPublic)

void UGameplayBehaviorsBlueprintFunctionLibrary::SetBlackboardValueAsGameplayTag(class UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, const struct FGameplayTagContainer& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayBehaviorsBlueprintFunctionLibrary", "SetBlackboardValueAsGameplayTag");

	Params::UGameplayBehaviorsBlueprintFunctionLibrary_SetBlackboardValueAsGameplayTag_Params Parms{};

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayBehaviorsModule.GameplayBehaviorsBlueprintFunctionLibrary.GetBlackboardValueAsGameplayTagFromBlackboardComp
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UBlackboardComponent*        BlackboardComp                                                   (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayTagContainer UGameplayBehaviorsBlueprintFunctionLibrary::GetBlackboardValueAsGameplayTagFromBlackboardComp(class UBlackboardComponent* BlackboardComp, class FName& KeyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayBehaviorsBlueprintFunctionLibrary", "GetBlackboardValueAsGameplayTagFromBlackboardComp");

	Params::UGameplayBehaviorsBlueprintFunctionLibrary_GetBlackboardValueAsGameplayTagFromBlackboardComp_Params Parms{};

	Parms.BlackboardComp = BlackboardComp;
	Parms.KeyName = KeyName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayBehaviorsModule.GameplayBehaviorsBlueprintFunctionLibrary.GetBlackboardValueAsGameplayTag
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayTagContainer UGameplayBehaviorsBlueprintFunctionLibrary::GetBlackboardValueAsGameplayTag(class UBTNode* NodeOwner, struct FBlackboardKeySelector& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayBehaviorsBlueprintFunctionLibrary", "GetBlackboardValueAsGameplayTag");

	Params::UGameplayBehaviorsBlueprintFunctionLibrary_GetBlackboardValueAsGameplayTag_Params Parms{};

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayBehaviorsModule.GameplayBehaviorsBlueprintFunctionLibrary.AddGameplayTagFilterToBlackboardKeySelector
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FBlackboardKeySelector      InSelector                                                       (Parm, OutParm, NativeAccessSpecifierPublic)
// class UObject*                     Owner                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        PropertyName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayBehaviorsBlueprintFunctionLibrary::AddGameplayTagFilterToBlackboardKeySelector(struct FBlackboardKeySelector* InSelector, class UObject* Owner, class FName PropertyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayBehaviorsBlueprintFunctionLibrary", "AddGameplayTagFilterToBlackboardKeySelector");

	Params::UGameplayBehaviorsBlueprintFunctionLibrary_AddGameplayTagFilterToBlackboardKeySelector_Params Parms{};

	Parms.Owner = Owner;
	Parms.PropertyName = PropertyName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InSelector != nullptr)
		*InSelector = Parms.InSelector;

}


// Class GameplayBehaviorsModule.GameplayBehaviorSubsystem
// (None)

class UClass* UGameplayBehaviorSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayBehaviorSubsystem");

	return Clss;
}


// GameplayBehaviorSubsystem GameplayBehaviorsModule.Default__GameplayBehaviorSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayBehaviorSubsystem* UGameplayBehaviorSubsystem::GetDefaultObj()
{
	static class UGameplayBehaviorSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayBehaviorSubsystem*>(UGameplayBehaviorSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayBehaviorsModule.GameplayBehavior_AnimationBased
// (None)

class UClass* UGameplayBehavior_AnimationBased::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayBehavior_AnimationBased");

	return Clss;
}


// GameplayBehavior_AnimationBased GameplayBehaviorsModule.Default__GameplayBehavior_AnimationBased
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayBehavior_AnimationBased* UGameplayBehavior_AnimationBased::GetDefaultObj()
{
	static class UGameplayBehavior_AnimationBased* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayBehavior_AnimationBased*>(UGameplayBehavior_AnimationBased::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayBehaviorsModule.GameplayBehavior_AnimationBased.OnMontageFinished
// (Final, Native, Protected)
// Parameters:
// class UAnimMontage*                Montage                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInterrupted                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      InAvatar                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayBehavior_AnimationBased::OnMontageFinished(class UAnimMontage* Montage, bool bInterrupted, class UActor* InAvatar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayBehavior_AnimationBased", "OnMontageFinished");

	Params::UGameplayBehavior_AnimationBased_OnMontageFinished_Params Parms{};

	Parms.Montage = Montage;
	Parms.bInterrupted = bInterrupted;
	Parms.InAvatar = InAvatar;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


