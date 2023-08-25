#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Fauna_Jump_AnimInterface.Fauna_Jump_AnimInterface_C
// (None)

class UClass* UFauna_Jump_AnimInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Fauna_Jump_AnimInterface_C");

	return Clss;
}


// Fauna_Jump_AnimInterface_C Fauna_Jump_AnimInterface.Default__Fauna_Jump_AnimInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFauna_Jump_AnimInterface_C* UFauna_Jump_AnimInterface_C::GetDefaultObj()
{
	static class UFauna_Jump_AnimInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFauna_Jump_AnimInterface_C*>(UFauna_Jump_AnimInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Fauna_Jump_AnimInterface.Fauna_Jump_AnimInterface_C.Fauna Jump
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   Fauna_Jump                                                       (Parm, OutParm, NoDestructor)

void UFauna_Jump_AnimInterface_C::Fauna_Jump(struct FPoseLink* Fauna_Jump)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fauna_Jump_AnimInterface_C", "Fauna Jump");

	Params::UFauna_Jump_AnimInterface_C_Fauna_Jump_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Fauna_Jump != nullptr)
		*Fauna_Jump = Parms.Fauna_Jump;

}

}


