#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class FortniteGameFramework.FGF_Character
// (Actor, Pawn)

class UClass* UFGF_Character::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FGF_Character");

	return Clss;
}


// FGF_Character FortniteGameFramework.Default__FGF_Character
// (Public, ClassDefaultObject, ArchetypeObject)

class UFGF_Character* UFGF_Character::GetDefaultObj()
{
	static class UFGF_Character* Default = nullptr;

	if (!Default)
		Default = static_cast<UFGF_Character*>(UFGF_Character::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteGameFramework.FGF_GameMode
// (Actor)

class UClass* UFGF_GameMode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FGF_GameMode");

	return Clss;
}


// FGF_GameMode FortniteGameFramework.Default__FGF_GameMode
// (Public, ClassDefaultObject, ArchetypeObject)

class UFGF_GameMode* UFGF_GameMode::GetDefaultObj()
{
	static class UFGF_GameMode* Default = nullptr;

	if (!Default)
		Default = static_cast<UFGF_GameMode*>(UFGF_GameMode::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteGameFramework.FGF_GameState
// (Actor)

class UClass* UFGF_GameState::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FGF_GameState");

	return Clss;
}


// FGF_GameState FortniteGameFramework.Default__FGF_GameState
// (Public, ClassDefaultObject, ArchetypeObject)

class UFGF_GameState* UFGF_GameState::GetDefaultObj()
{
	static class UFGF_GameState* Default = nullptr;

	if (!Default)
		Default = static_cast<UFGF_GameState*>(UFGF_GameState::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteGameFramework.FGF_PlayerController
// (Actor, PlayerController)

class UClass* UFGF_PlayerController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FGF_PlayerController");

	return Clss;
}


// FGF_PlayerController FortniteGameFramework.Default__FGF_PlayerController
// (Public, ClassDefaultObject, ArchetypeObject)

class UFGF_PlayerController* UFGF_PlayerController::GetDefaultObj()
{
	static class UFGF_PlayerController* Default = nullptr;

	if (!Default)
		Default = static_cast<UFGF_PlayerController*>(UFGF_PlayerController::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteGameFramework.FGF_PlayerState
// (Actor)

class UClass* UFGF_PlayerState::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FGF_PlayerState");

	return Clss;
}


// FGF_PlayerState FortniteGameFramework.Default__FGF_PlayerState
// (Public, ClassDefaultObject, ArchetypeObject)

class UFGF_PlayerState* UFGF_PlayerState::GetDefaultObj()
{
	static class UFGF_PlayerState* Default = nullptr;

	if (!Default)
		Default = static_cast<UFGF_PlayerState*>(UFGF_PlayerState::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteGameFramework.ObjectBasedStateTreeSchema
// (None)

class UClass* UObjectBasedStateTreeSchema::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ObjectBasedStateTreeSchema");

	return Clss;
}


// ObjectBasedStateTreeSchema FortniteGameFramework.Default__ObjectBasedStateTreeSchema
// (Public, ClassDefaultObject, ArchetypeObject)

class UObjectBasedStateTreeSchema* UObjectBasedStateTreeSchema::GetDefaultObj()
{
	static class UObjectBasedStateTreeSchema* Default = nullptr;

	if (!Default)
		Default = static_cast<UObjectBasedStateTreeSchema*>(UObjectBasedStateTreeSchema::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteGameFramework.StateTreeManagerComponent
// (None)

class UClass* UStateTreeManagerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StateTreeManagerComponent");

	return Clss;
}


// StateTreeManagerComponent FortniteGameFramework.Default__StateTreeManagerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UStateTreeManagerComponent* UStateTreeManagerComponent::GetDefaultObj()
{
	static class UStateTreeManagerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UStateTreeManagerComponent*>(UStateTreeManagerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteGameFramework.StateTreeTaskObject
// (None)

class UClass* UStateTreeTaskObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StateTreeTaskObject");

	return Clss;
}


// StateTreeTaskObject FortniteGameFramework.Default__StateTreeTaskObject
// (Public, ClassDefaultObject, ArchetypeObject)

class UStateTreeTaskObject* UStateTreeTaskObject::GetDefaultObj()
{
	static class UStateTreeTaskObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UStateTreeTaskObject*>(UStateTreeTaskObject::StaticClass()->DefaultObject);

	return Default;
}

}


