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


// Function VKEditGameplay.VKEditPlayspace.OnClientActivatedContent
// (Final, Native, Private, HasOutParams, Const)
// Parameters:
// struct FUniqueNetIdRepl            ClientNetId                                                      (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVKEditPlayspace::OnClientActivatedContent(struct FUniqueNetIdRepl& ClientNetId)
{
	static auto Func = Class->GetFunction("VKEditPlayspace", "OnClientActivatedContent");

	Params::UVKEditPlayspace_OnClientActivatedContent_Params Parms;

	Parms.ClientNetId = ClientNetId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VKEditGameplay.PlayspaceComponent_EditConnectionManager.OnRep_VkEditStatus
// (Final, Native, Protected, Const)
// Parameters:

void UPlayspaceComponent_EditConnectionManager::OnRep_VkEditStatus()
{
	static auto Func = Class->GetFunction("PlayspaceComponent_EditConnectionManager", "OnRep_VkEditStatus");

	Params::UPlayspaceComponent_EditConnectionManager_OnRep_VkEditStatus_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VKEditGameplay.PlayspaceComponent_EditConnectionManager.OnRep_EditConnections
// (Final, Native, Protected, Const)
// Parameters:

void UPlayspaceComponent_EditConnectionManager::OnRep_EditConnections()
{
	static auto Func = Class->GetFunction("PlayspaceComponent_EditConnectionManager", "OnRep_EditConnections");

	Params::UPlayspaceComponent_EditConnectionManager_OnRep_EditConnections_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
