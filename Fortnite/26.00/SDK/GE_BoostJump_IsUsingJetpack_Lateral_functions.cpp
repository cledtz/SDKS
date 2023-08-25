#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_BoostJump_IsUsingJetpack_Lateral.GE_BoostJump_IsUsingJetpack_Lateral_C
// (None)

class UClass* UGE_BoostJump_IsUsingJetpack_Lateral_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_BoostJump_IsUsingJetpack_Lateral_C");

	return Clss;
}


// GE_BoostJump_IsUsingJetpack_Lateral_C GE_BoostJump_IsUsingJetpack_Lateral.Default__GE_BoostJump_IsUsingJetpack_Lateral_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_BoostJump_IsUsingJetpack_Lateral_C* UGE_BoostJump_IsUsingJetpack_Lateral_C::GetDefaultObj()
{
	static class UGE_BoostJump_IsUsingJetpack_Lateral_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_BoostJump_IsUsingJetpack_Lateral_C*>(UGE_BoostJump_IsUsingJetpack_Lateral_C::StaticClass()->DefaultObject);

	return Default;
}

}


