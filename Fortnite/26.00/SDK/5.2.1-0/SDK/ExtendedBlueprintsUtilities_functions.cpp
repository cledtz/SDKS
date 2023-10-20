#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ExtendedBlueprintsUtilities.ExtendedBlueprintsUtilitiesBPLibrary
// (None)

class UClass* UExtendedBlueprintsUtilitiesBPLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ExtendedBlueprintsUtilitiesBPLibrary");

	return Clss;
}


// ExtendedBlueprintsUtilitiesBPLibrary ExtendedBlueprintsUtilities.Default__ExtendedBlueprintsUtilitiesBPLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UExtendedBlueprintsUtilitiesBPLibrary* UExtendedBlueprintsUtilitiesBPLibrary::GetDefaultObj()
{
	static class UExtendedBlueprintsUtilitiesBPLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UExtendedBlueprintsUtilitiesBPLibrary*>(UExtendedBlueprintsUtilitiesBPLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function ExtendedBlueprintsUtilities.ExtendedBlueprintsUtilitiesBPLibrary.SpawnActorFromTemplate
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      TemplateActor                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  SpawnTransform                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      Owner                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UActor* UExtendedBlueprintsUtilitiesBPLibrary::SpawnActorFromTemplate(class UObject* WorldContextObject, class UActor* TemplateActor, struct FTransform& SpawnTransform, class UActor* Owner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExtendedBlueprintsUtilitiesBPLibrary", "SpawnActorFromTemplate");

	Params::UExtendedBlueprintsUtilitiesBPLibrary_SpawnActorFromTemplate_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.TemplateActor = TemplateActor;
	Parms.SpawnTransform = SpawnTransform;
	Parms.Owner = Owner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ExtendedBlueprintsUtilities.ExtendedBlueprintsUtilitiesBPLibrary.GetDefaultComponentsByClass
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                      ActorClass                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                      ComponentClass                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UActorComponent*>     OutArray                                                         (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UExtendedBlueprintsUtilitiesBPLibrary::GetDefaultComponentsByClass(class UClass* ActorClass, class UClass* ComponentClass, TArray<class UActorComponent*>* OutArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExtendedBlueprintsUtilitiesBPLibrary", "GetDefaultComponentsByClass");

	Params::UExtendedBlueprintsUtilitiesBPLibrary_GetDefaultComponentsByClass_Params Parms{};

	Parms.ActorClass = ActorClass;
	Parms.ComponentClass = ComponentClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutArray != nullptr)
		*OutArray = Parms.OutArray;

}


// Function ExtendedBlueprintsUtilities.ExtendedBlueprintsUtilitiesBPLibrary.ClassDefaultObject
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                      ObjectClass                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UActor* UExtendedBlueprintsUtilitiesBPLibrary::ClassDefaultObject(class UClass* ObjectClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExtendedBlueprintsUtilitiesBPLibrary", "ClassDefaultObject");

	Params::UExtendedBlueprintsUtilitiesBPLibrary_ClassDefaultObject_Params Parms{};

	Parms.ObjectClass = ObjectClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


