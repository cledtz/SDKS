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
	static auto Func = Class->GetFunction("ExtendedBlueprintsUtilitiesBPLibrary", "SpawnActorFromTemplate");

	Params::UExtendedBlueprintsUtilitiesBPLibrary_SpawnActorFromTemplate_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.TemplateActor = TemplateActor;
	Parms.SpawnTransform = SpawnTransform;
	Parms.Owner = Owner;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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
	static auto Func = Class->GetFunction("ExtendedBlueprintsUtilitiesBPLibrary", "GetDefaultComponentsByClass");

	Params::UExtendedBlueprintsUtilitiesBPLibrary_GetDefaultComponentsByClass_Params Parms;

	Parms.ActorClass = ActorClass;
	Parms.ComponentClass = ComponentClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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
	static auto Func = Class->GetFunction("ExtendedBlueprintsUtilitiesBPLibrary", "ClassDefaultObject");

	Params::UExtendedBlueprintsUtilitiesBPLibrary_ClassDefaultObject_Params Parms;

	Parms.ObjectClass = ObjectClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
