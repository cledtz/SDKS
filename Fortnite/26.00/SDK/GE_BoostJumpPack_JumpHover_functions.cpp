#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_BoostJumpPack_JumpHover.GE_BoostJumpPack_JumpHover_C
// (None)

class UClass* UGE_BoostJumpPack_JumpHover_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_BoostJumpPack_JumpHover_C");

	return Clss;
}


// GE_BoostJumpPack_JumpHover_C GE_BoostJumpPack_JumpHover.Default__GE_BoostJumpPack_JumpHover_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_BoostJumpPack_JumpHover_C* UGE_BoostJumpPack_JumpHover_C::GetDefaultObj()
{
	static class UGE_BoostJumpPack_JumpHover_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_BoostJumpPack_JumpHover_C*>(UGE_BoostJumpPack_JumpHover_C::StaticClass()->DefaultObject);

	return Default;
}

}


