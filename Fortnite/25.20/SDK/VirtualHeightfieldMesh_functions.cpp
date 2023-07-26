#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function VirtualHeightfieldMesh.VirtualHeightfieldMeshComponent.GatherHideFlags
// (Final, Native, Protected, HasOutParams, Const)
// Parameters:
// bool                               InOutHidePrimitivesInEditor                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               InOutHidePrimitivesInGame                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVirtualHeightfieldMeshComponent::GatherHideFlags(bool* InOutHidePrimitivesInEditor, bool* InOutHidePrimitivesInGame)
{
	static auto Func = Class->GetFunction("VirtualHeightfieldMeshComponent", "GatherHideFlags");

	Params::UVirtualHeightfieldMeshComponent_GatherHideFlags_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InOutHidePrimitivesInEditor != nullptr)
		*InOutHidePrimitivesInEditor = Parms.InOutHidePrimitivesInEditor;

	if (InOutHidePrimitivesInGame != nullptr)
		*InOutHidePrimitivesInGame = Parms.InOutHidePrimitivesInGame;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
