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


// Function ActorLayerUtilities.LayersBlueprintLibrary.RemoveActorFromLayer
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UActor*                      InActor                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FActorLayer                 Layer                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void ULayersBlueprintLibrary::RemoveActorFromLayer(class UActor* InActor, struct FActorLayer& Layer)
{
	static auto Func = Class->GetFunction("LayersBlueprintLibrary", "RemoveActorFromLayer");

	Params::ULayersBlueprintLibrary_RemoveActorFromLayer_Params Parms;

	Parms.InActor = InActor;
	Parms.Layer = Layer;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ActorLayerUtilities.LayersBlueprintLibrary.GetActors
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FActorLayer                 ActorLayer                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<class UActor*>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UActor*> ULayersBlueprintLibrary::GetActors(class UObject* WorldContextObject, struct FActorLayer& ActorLayer)
{
	static auto Func = Class->GetFunction("LayersBlueprintLibrary", "GetActors");

	Params::ULayersBlueprintLibrary_GetActors_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.ActorLayer = ActorLayer;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ActorLayerUtilities.LayersBlueprintLibrary.AddActorToLayer
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UActor*                      InActor                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FActorLayer                 Layer                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void ULayersBlueprintLibrary::AddActorToLayer(class UActor* InActor, struct FActorLayer& Layer)
{
	static auto Func = Class->GetFunction("LayersBlueprintLibrary", "AddActorToLayer");

	Params::ULayersBlueprintLibrary_AddActorToLayer_Params Parms;

	Parms.InActor = InActor;
	Parms.Layer = Layer;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
