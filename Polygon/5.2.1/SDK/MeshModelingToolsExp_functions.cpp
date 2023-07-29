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


// Function MeshModelingToolsExp.BakeInputMeshProperties.GetTargetUVLayerNamesFunc
// (Final, Native, Public, Const)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<class FString> UBakeInputMeshProperties::GetTargetUVLayerNamesFunc()
{
	static auto Func = Class->GetFunction("BakeInputMeshProperties", "GetTargetUVLayerNamesFunc");

	Params::UBakeInputMeshProperties_GetTargetUVLayerNamesFunc_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MeshModelingToolsExp.BakeInputMeshProperties.GetSourceUVLayerNamesFunc
// (Final, Native, Public, Const)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<class FString> UBakeInputMeshProperties::GetSourceUVLayerNamesFunc()
{
	static auto Func = Class->GetFunction("BakeInputMeshProperties", "GetSourceUVLayerNamesFunc");

	Params::UBakeInputMeshProperties_GetSourceUVLayerNamesFunc_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MeshModelingToolsExp.BakeTexture2DProperties.GetUVLayerNamesFunc
// (Final, Native, Public, Const)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<class FString> UBakeTexture2DProperties::GetUVLayerNamesFunc()
{
	static auto Func = Class->GetFunction("BakeTexture2DProperties", "GetUVLayerNamesFunc");

	Params::UBakeTexture2DProperties_GetUVLayerNamesFunc_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MeshModelingToolsExp.BakeMultiTexture2DProperties.GetUVLayerNamesFunc
// (Final, Native, Public, Const)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<class FString> UBakeMultiTexture2DProperties::GetUVLayerNamesFunc()
{
	static auto Func = Class->GetFunction("BakeMultiTexture2DProperties", "GetUVLayerNamesFunc");

	Params::UBakeMultiTexture2DProperties_GetUVLayerNamesFunc_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MeshModelingToolsExp.BakeMeshAttributeMapsToolProperties.GetMapPreviewNamesFunc
// (Final, Native, Public)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<class FString> UBakeMeshAttributeMapsToolProperties::GetMapPreviewNamesFunc()
{
	static auto Func = Class->GetFunction("BakeMeshAttributeMapsToolProperties", "GetMapPreviewNamesFunc");

	Params::UBakeMeshAttributeMapsToolProperties_GetMapPreviewNamesFunc_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MeshModelingToolsExp.BakeMultiMeshAttributeMapsToolProperties.GetMapPreviewNamesFunc
// (Final, Native, Public)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<class FString> UBakeMultiMeshAttributeMapsToolProperties::GetMapPreviewNamesFunc()
{
	static auto Func = Class->GetFunction("BakeMultiMeshAttributeMapsToolProperties", "GetMapPreviewNamesFunc");

	Params::UBakeMultiMeshAttributeMapsToolProperties_GetMapPreviewNamesFunc_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MeshModelingToolsExp.BakeMultiMeshInputToolProperties.GetTargetUVLayerNamesFunc
// (Final, Native, Public, Const)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<class FString> UBakeMultiMeshInputToolProperties::GetTargetUVLayerNamesFunc()
{
	static auto Func = Class->GetFunction("BakeMultiMeshInputToolProperties", "GetTargetUVLayerNamesFunc");

	Params::UBakeMultiMeshInputToolProperties_GetTargetUVLayerNamesFunc_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MeshModelingToolsExp.BakeRenderCaptureToolProperties.GetMapPreviewNamesFunc
// (Final, Native, Public)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<class FString> UBakeRenderCaptureToolProperties::GetMapPreviewNamesFunc()
{
	static auto Func = Class->GetFunction("BakeRenderCaptureToolProperties", "GetMapPreviewNamesFunc");

	Params::UBakeRenderCaptureToolProperties_GetMapPreviewNamesFunc_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MeshModelingToolsExp.BakeRenderCaptureInputToolProperties.GetTargetUVLayerNamesFunc
// (Final, Native, Public, Const)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<class FString> UBakeRenderCaptureInputToolProperties::GetTargetUVLayerNamesFunc()
{
	static auto Func = Class->GetFunction("BakeRenderCaptureInputToolProperties", "GetTargetUVLayerNamesFunc");

	Params::UBakeRenderCaptureInputToolProperties_GetTargetUVLayerNamesFunc_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MeshModelingToolsExp.BakeRenderCaptureInputToolProperties.GetTargetUVLayerIndex
// (Final, Native, Public, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UBakeRenderCaptureInputToolProperties::GetTargetUVLayerIndex()
{
	static auto Func = Class->GetFunction("BakeRenderCaptureInputToolProperties", "GetTargetUVLayerIndex");

	Params::UBakeRenderCaptureInputToolProperties_GetTargetUVLayerIndex_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MeshModelingToolsExp.OutputPolygroupLayerProperties.GetGroupOptionsList
// (Final, Native, Public)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UOutputPolygroupLayerProperties::GetGroupOptionsList()
{
	static auto Func = Class->GetFunction("OutputPolygroupLayerProperties", "GetGroupOptionsList");

	Params::UOutputPolygroupLayerProperties_GetGroupOptionsList_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MeshModelingToolsExp.CubeGridToolActions.SlideForward
// (Final, Native, Public)
// Parameters:

void UCubeGridToolActions::SlideForward()
{
	static auto Func = Class->GetFunction("CubeGridToolActions", "SlideForward");

	Params::UCubeGridToolActions_SlideForward_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshModelingToolsExp.CubeGridToolActions.SlideBack
// (Final, Native, Public)
// Parameters:

void UCubeGridToolActions::SlideBack()
{
	static auto Func = Class->GetFunction("CubeGridToolActions", "SlideBack");

	Params::UCubeGridToolActions_SlideBack_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshModelingToolsExp.CubeGridToolActions.ResetGridFromActor
// (Final, Native, Public)
// Parameters:

void UCubeGridToolActions::ResetGridFromActor()
{
	static auto Func = Class->GetFunction("CubeGridToolActions", "ResetGridFromActor");

	Params::UCubeGridToolActions_ResetGridFromActor_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshModelingToolsExp.CubeGridToolActions.Push
// (Final, Native, Public)
// Parameters:

void UCubeGridToolActions::Push()
{
	static auto Func = Class->GetFunction("CubeGridToolActions", "Push");

	Params::UCubeGridToolActions_Push_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshModelingToolsExp.CubeGridToolActions.Pull
// (Final, Native, Public)
// Parameters:

void UCubeGridToolActions::Pull()
{
	static auto Func = Class->GetFunction("CubeGridToolActions", "Pull");

	Params::UCubeGridToolActions_Pull_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshModelingToolsExp.CubeGridToolActions.Flip
// (Final, Native, Public)
// Parameters:

void UCubeGridToolActions::Flip()
{
	static auto Func = Class->GetFunction("CubeGridToolActions", "Flip");

	Params::UCubeGridToolActions_Flip_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshModelingToolsExp.CubeGridToolActions.CornerMode
// (Final, Native, Public)
// Parameters:

void UCubeGridToolActions::CornerMode()
{
	static auto Func = Class->GetFunction("CubeGridToolActions", "CornerMode");

	Params::UCubeGridToolActions_CornerMode_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshModelingToolsExp.CubeGridDuringActivityActions.Done
// (Final, Native, Public)
// Parameters:

void UCubeGridDuringActivityActions::Done()
{
	static auto Func = Class->GetFunction("CubeGridDuringActivityActions", "Done");

	Params::UCubeGridDuringActivityActions_Done_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshModelingToolsExp.CubeGridDuringActivityActions.Cancel
// (Final, Native, Public)
// Parameters:

void UCubeGridDuringActivityActions::Cancel()
{
	static auto Func = Class->GetFunction("CubeGridDuringActivityActions", "Cancel");

	Params::UCubeGridDuringActivityActions_Cancel_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshModelingToolsExp.DisplaceMeshCommonProperties.GetWeightMapsFunc
// (Final, Native, Public)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UDisplaceMeshCommonProperties::GetWeightMapsFunc()
{
	static auto Func = Class->GetFunction("DisplaceMeshCommonProperties", "GetWeightMapsFunc");

	Params::UDisplaceMeshCommonProperties_GetWeightMapsFunc_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MeshModelingToolsExp.SelectiveTessellationProperties.GetMaterialIDsFunc
// (Final, Native, Public)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> USelectiveTessellationProperties::GetMaterialIDsFunc()
{
	static auto Func = Class->GetFunction("SelectiveTessellationProperties", "GetMaterialIDsFunc");

	Params::USelectiveTessellationProperties_GetMaterialIDsFunc_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MeshModelingToolsExp.DynamicSculptToolActions.DiscardAttributes
// (Final, Native, Public)
// Parameters:

void UDynamicSculptToolActions::DiscardAttributes()
{
	static auto Func = Class->GetFunction("DynamicSculptToolActions", "DiscardAttributes");

	Params::UDynamicSculptToolActions_DiscardAttributes_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshModelingToolsExp.EditPivotToolActionPropertySet.WorldOrigin
// (Final, Native, Public)
// Parameters:

void UEditPivotToolActionPropertySet::WorldOrigin()
{
	static auto Func = Class->GetFunction("EditPivotToolActionPropertySet", "WorldOrigin");

	Params::UEditPivotToolActionPropertySet_WorldOrigin_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshModelingToolsExp.EditPivotToolActionPropertySet.Top
// (Final, Native, Public)
// Parameters:

void UEditPivotToolActionPropertySet::Top()
{
	static auto Func = Class->GetFunction("EditPivotToolActionPropertySet", "Top");

	Params::UEditPivotToolActionPropertySet_Top_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshModelingToolsExp.EditPivotToolActionPropertySet.Right
// (Final, Native, Public)
// Parameters:

void UEditPivotToolActionPropertySet::Right()
{
	static auto Func = Class->GetFunction("EditPivotToolActionPropertySet", "Right");

	Params::UEditPivotToolActionPropertySet_Right_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshModelingToolsExp.EditPivotToolActionPropertySet.Left
// (Final, Native, Public)
// Parameters:

void UEditPivotToolActionPropertySet::Left()
{
	static auto Func = Class->GetFunction("EditPivotToolActionPropertySet", "Left");

	Params::UEditPivotToolActionPropertySet_Left_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshModelingToolsExp.EditPivotToolActionPropertySet.Front
// (Final, Native, Public)
// Parameters:

void UEditPivotToolActionPropertySet::Front()
{
	static auto Func = Class->GetFunction("EditPivotToolActionPropertySet", "Front");

	Params::UEditPivotToolActionPropertySet_Front_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshModelingToolsExp.EditPivotToolActionPropertySet.Center
// (Final, Native, Public)
// Parameters:

void UEditPivotToolActionPropertySet::Center()
{
	static auto Func = Class->GetFunction("EditPivotToolActionPropertySet", "Center");

	Params::UEditPivotToolActionPropertySet_Center_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshModelingToolsExp.EditPivotToolActionPropertySet.Bottom
// (Final, Native, Public)
// Parameters:

void UEditPivotToolActionPropertySet::Bottom()
{
	static auto Func = Class->GetFunction("EditPivotToolActionPropertySet", "Bottom");

	Params::UEditPivotToolActionPropertySet_Bottom_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshModelingToolsExp.EditPivotToolActionPropertySet.Back
// (Final, Native, Public)
// Parameters:

void UEditPivotToolActionPropertySet::Back()
{
	static auto Func = Class->GetFunction("EditPivotToolActionPropertySet", "Back");

	Params::UEditPivotToolActionPropertySet_Back_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshModelingToolsExp.HoleFillToolActions.SelectAll
// (Final, Native, Public)
// Parameters:

void UHoleFillToolActions::SelectAll()
{
	static auto Func = Class->GetFunction("HoleFillToolActions", "SelectAll");

	Params::UHoleFillToolActions_SelectAll_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshModelingToolsExp.HoleFillToolActions.Clear
// (Final, Native, Public)
// Parameters:

void UHoleFillToolActions::Clear()
{
	static auto Func = Class->GetFunction("HoleFillToolActions", "Clear");

	Params::UHoleFillToolActions_Clear_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshModelingToolsExp.LatticeDeformerToolProperties.Constrain
// (Final, Native, Public)
// Parameters:

void ULatticeDeformerToolProperties::Constrain()
{
	static auto Func = Class->GetFunction("LatticeDeformerToolProperties", "Constrain");

	Params::ULatticeDeformerToolProperties_Constrain_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshModelingToolsExp.LatticeDeformerToolProperties.ClearConstraints
// (Final, Native, Public)
// Parameters:

void ULatticeDeformerToolProperties::ClearConstraints()
{
	static auto Func = Class->GetFunction("LatticeDeformerToolProperties", "ClearConstraints");

	Params::ULatticeDeformerToolProperties_ClearConstraints_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshModelingToolsExp.MeshAttributePaintToolProperties.GetAttributeNames
// (Final, Native, Public)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<class FString> UMeshAttributePaintToolProperties::GetAttributeNames()
{
	static auto Func = Class->GetFunction("MeshAttributePaintToolProperties", "GetAttributeNames");

	Params::UMeshAttributePaintToolProperties_GetAttributeNames_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MeshModelingToolsExp.MeshGroupPaintToolFreezeActions.UnfreezeAll
// (Final, Native, Public)
// Parameters:

void UMeshGroupPaintToolFreezeActions::UnfreezeAll()
{
	static auto Func = Class->GetFunction("MeshGroupPaintToolFreezeActions", "UnfreezeAll");

	Params::UMeshGroupPaintToolFreezeActions_UnfreezeAll_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshModelingToolsExp.MeshGroupPaintToolFreezeActions.ShrinkCurrent
// (Final, Native, Public)
// Parameters:

void UMeshGroupPaintToolFreezeActions::ShrinkCurrent()
{
	static auto Func = Class->GetFunction("MeshGroupPaintToolFreezeActions", "ShrinkCurrent");

	Params::UMeshGroupPaintToolFreezeActions_ShrinkCurrent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshModelingToolsExp.MeshGroupPaintToolFreezeActions.GrowCurrent
// (Final, Native, Public)
// Parameters:

void UMeshGroupPaintToolFreezeActions::GrowCurrent()
{
	static auto Func = Class->GetFunction("MeshGroupPaintToolFreezeActions", "GrowCurrent");

	Params::UMeshGroupPaintToolFreezeActions_GrowCurrent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshModelingToolsExp.MeshGroupPaintToolFreezeActions.FreezeOthers
// (Final, Native, Public)
// Parameters:

void UMeshGroupPaintToolFreezeActions::FreezeOthers()
{
	static auto Func = Class->GetFunction("MeshGroupPaintToolFreezeActions", "FreezeOthers");

	Params::UMeshGroupPaintToolFreezeActions_FreezeOthers_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshModelingToolsExp.MeshGroupPaintToolFreezeActions.FreezeCurrent
// (Final, Native, Public)
// Parameters:

void UMeshGroupPaintToolFreezeActions::FreezeCurrent()
{
	static auto Func = Class->GetFunction("MeshGroupPaintToolFreezeActions", "FreezeCurrent");

	Params::UMeshGroupPaintToolFreezeActions_FreezeCurrent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshModelingToolsExp.MeshGroupPaintToolFreezeActions.FloodFillCurrent
// (Final, Native, Public)
// Parameters:

void UMeshGroupPaintToolFreezeActions::FloodFillCurrent()
{
	static auto Func = Class->GetFunction("MeshGroupPaintToolFreezeActions", "FloodFillCurrent");

	Params::UMeshGroupPaintToolFreezeActions_FloodFillCurrent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshModelingToolsExp.MeshGroupPaintToolFreezeActions.ClearCurrent
// (Final, Native, Public)
// Parameters:

void UMeshGroupPaintToolFreezeActions::ClearCurrent()
{
	static auto Func = Class->GetFunction("MeshGroupPaintToolFreezeActions", "ClearCurrent");

	Params::UMeshGroupPaintToolFreezeActions_ClearCurrent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshModelingToolsExp.MeshGroupPaintToolFreezeActions.ClearAll
// (Final, Native, Public)
// Parameters:

void UMeshGroupPaintToolFreezeActions::ClearAll()
{
	static auto Func = Class->GetFunction("MeshGroupPaintToolFreezeActions", "ClearAll");

	Params::UMeshGroupPaintToolFreezeActions_ClearAll_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshModelingToolsExp.MeshInspectorMaterialProperties.GetUVChannelNamesFunc
// (Final, Native, Public, Const)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<class FString> UMeshInspectorMaterialProperties::GetUVChannelNamesFunc()
{
	static auto Func = Class->GetFunction("MeshInspectorMaterialProperties", "GetUVChannelNamesFunc");

	Params::UMeshInspectorMaterialProperties_GetUVChannelNamesFunc_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MeshModelingToolsExp.MeshSelectionEditActions.Shrink
// (Final, Native, Public)
// Parameters:

void UMeshSelectionEditActions::Shrink()
{
	static auto Func = Class->GetFunction("MeshSelectionEditActions", "Shrink");

	Params::UMeshSelectionEditActions_Shrink_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshModelingToolsExp.MeshSelectionEditActions.SelectAll
// (Final, Native, Public)
// Parameters:

void UMeshSelectionEditActions::SelectAll()
{
	static auto Func = Class->GetFunction("MeshSelectionEditActions", "SelectAll");

	Params::UMeshSelectionEditActions_SelectAll_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshModelingToolsExp.MeshSelectionEditActions.OptimizeBorder
// (Final, Native, Public)
// Parameters:

void UMeshSelectionEditActions::OptimizeBorder()
{
	static auto Func = Class->GetFunction("MeshSelectionEditActions", "OptimizeBorder");

	Params::UMeshSelectionEditActions_OptimizeBorder_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshModelingToolsExp.MeshSelectionEditActions.LargestTriCountPart
// (Final, Native, Public)
// Parameters:

void UMeshSelectionEditActions::LargestTriCountPart()
{
	static auto Func = Class->GetFunction("MeshSelectionEditActions", "LargestTriCountPart");

	Params::UMeshSelectionEditActions_LargestTriCountPart_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshModelingToolsExp.MeshSelectionEditActions.LargestAreaPart
// (Final, Native, Public)
// Parameters:

void UMeshSelectionEditActions::LargestAreaPart()
{
	static auto Func = Class->GetFunction("MeshSelectionEditActions", "LargestAreaPart");

	Params::UMeshSelectionEditActions_LargestAreaPart_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshModelingToolsExp.MeshSelectionEditActions.Invert
// (Final, Native, Public)
// Parameters:

void UMeshSelectionEditActions::Invert()
{
	static auto Func = Class->GetFunction("MeshSelectionEditActions", "Invert");

	Params::UMeshSelectionEditActions_Invert_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshModelingToolsExp.MeshSelectionEditActions.Grow
// (Final, Native, Public)
// Parameters:

void UMeshSelectionEditActions::Grow()
{
	static auto Func = Class->GetFunction("MeshSelectionEditActions", "Grow");

	Params::UMeshSelectionEditActions_Grow_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshModelingToolsExp.MeshSelectionEditActions.FloodFill
// (Final, Native, Public)
// Parameters:

void UMeshSelectionEditActions::FloodFill()
{
	static auto Func = Class->GetFunction("MeshSelectionEditActions", "FloodFill");

	Params::UMeshSelectionEditActions_FloodFill_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshModelingToolsExp.MeshSelectionEditActions.ExpandToMaterials
// (Final, Native, Public)
// Parameters:

void UMeshSelectionEditActions::ExpandToMaterials()
{
	static auto Func = Class->GetFunction("MeshSelectionEditActions", "ExpandToMaterials");

	Params::UMeshSelectionEditActions_ExpandToMaterials_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshModelingToolsExp.MeshSelectionEditActions.Clear
// (Final, Native, Public)
// Parameters:

void UMeshSelectionEditActions::Clear()
{
	static auto Func = Class->GetFunction("MeshSelectionEditActions", "Clear");

	Params::UMeshSelectionEditActions_Clear_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshModelingToolsExp.MeshSelectionMeshEditActions.SmoothBorder
// (Final, Native, Public)
// Parameters:

void UMeshSelectionMeshEditActions::SmoothBorder()
{
	static auto Func = Class->GetFunction("MeshSelectionMeshEditActions", "SmoothBorder");

	Params::UMeshSelectionMeshEditActions_SmoothBorder_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshModelingToolsExp.MeshSelectionMeshEditActions.Separate
// (Final, Native, Public)
// Parameters:

void UMeshSelectionMeshEditActions::Separate()
{
	static auto Func = Class->GetFunction("MeshSelectionMeshEditActions", "Separate");

	Params::UMeshSelectionMeshEditActions_Separate_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshModelingToolsExp.MeshSelectionMeshEditActions.FlipNormals
// (Final, Native, Public)
// Parameters:

void UMeshSelectionMeshEditActions::FlipNormals()
{
	static auto Func = Class->GetFunction("MeshSelectionMeshEditActions", "FlipNormals");

	Params::UMeshSelectionMeshEditActions_FlipNormals_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshModelingToolsExp.MeshSelectionMeshEditActions.Duplicate
// (Final, Native, Public)
// Parameters:

void UMeshSelectionMeshEditActions::Duplicate()
{
	static auto Func = Class->GetFunction("MeshSelectionMeshEditActions", "Duplicate");

	Params::UMeshSelectionMeshEditActions_Duplicate_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshModelingToolsExp.MeshSelectionMeshEditActions.Disconnect
// (Final, Native, Public)
// Parameters:

void UMeshSelectionMeshEditActions::Disconnect()
{
	static auto Func = Class->GetFunction("MeshSelectionMeshEditActions", "Disconnect");

	Params::UMeshSelectionMeshEditActions_Disconnect_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshModelingToolsExp.MeshSelectionMeshEditActions.Delete
// (Final, Native, Public)
// Parameters:

void UMeshSelectionMeshEditActions::Delete()
{
	static auto Func = Class->GetFunction("MeshSelectionMeshEditActions", "Delete");

	Params::UMeshSelectionMeshEditActions_Delete_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshModelingToolsExp.MeshSelectionMeshEditActions.CreatePolygroup
// (Final, Native, Public)
// Parameters:

void UMeshSelectionMeshEditActions::CreatePolygroup()
{
	static auto Func = Class->GetFunction("MeshSelectionMeshEditActions", "CreatePolygroup");

	Params::UMeshSelectionMeshEditActions_CreatePolygroup_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshModelingToolsExp.MeshSpaceDeformerToolActionPropertySet.ShiftToCenter
// (Final, Native, Public)
// Parameters:

void UMeshSpaceDeformerToolActionPropertySet::ShiftToCenter()
{
	static auto Func = Class->GetFunction("MeshSpaceDeformerToolActionPropertySet", "ShiftToCenter");

	Params::UMeshSpaceDeformerToolActionPropertySet_ShiftToCenter_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshModelingToolsExp.MirrorToolActionPropertySet.Up
// (Final, Native, Public)
// Parameters:

void UMirrorToolActionPropertySet::Up()
{
	static auto Func = Class->GetFunction("MirrorToolActionPropertySet", "Up");

	Params::UMirrorToolActionPropertySet_Up_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshModelingToolsExp.MirrorToolActionPropertySet.ShiftToCenter
// (Final, Native, Public)
// Parameters:

void UMirrorToolActionPropertySet::ShiftToCenter()
{
	static auto Func = Class->GetFunction("MirrorToolActionPropertySet", "ShiftToCenter");

	Params::UMirrorToolActionPropertySet_ShiftToCenter_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshModelingToolsExp.MirrorToolActionPropertySet.Right
// (Final, Native, Public)
// Parameters:

void UMirrorToolActionPropertySet::Right()
{
	static auto Func = Class->GetFunction("MirrorToolActionPropertySet", "Right");

	Params::UMirrorToolActionPropertySet_Right_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshModelingToolsExp.MirrorToolActionPropertySet.Left
// (Final, Native, Public)
// Parameters:

void UMirrorToolActionPropertySet::Left()
{
	static auto Func = Class->GetFunction("MirrorToolActionPropertySet", "Left");

	Params::UMirrorToolActionPropertySet_Left_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshModelingToolsExp.MirrorToolActionPropertySet.Forward
// (Final, Native, Public)
// Parameters:

void UMirrorToolActionPropertySet::Forward()
{
	static auto Func = Class->GetFunction("MirrorToolActionPropertySet", "Forward");

	Params::UMirrorToolActionPropertySet_Forward_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshModelingToolsExp.MirrorToolActionPropertySet.Down
// (Final, Native, Public)
// Parameters:

void UMirrorToolActionPropertySet::Down()
{
	static auto Func = Class->GetFunction("MirrorToolActionPropertySet", "Down");

	Params::UMirrorToolActionPropertySet_Down_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshModelingToolsExp.MirrorToolActionPropertySet.Backward
// (Final, Native, Public)
// Parameters:

void UMirrorToolActionPropertySet::Backward()
{
	static auto Func = Class->GetFunction("MirrorToolActionPropertySet", "Backward");

	Params::UMirrorToolActionPropertySet_Backward_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshModelingToolsExp.PlaneCutTool.FlipPlane
// (Final, Native, Protected)
// Parameters:

void UPlaneCutTool::FlipPlane()
{
	static auto Func = Class->GetFunction("PlaneCutTool", "FlipPlane");

	Params::UPlaneCutTool_FlipPlane_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshModelingToolsExp.PlaneCutTool.Cut
// (Final, Native, Protected)
// Parameters:

void UPlaneCutTool::Cut()
{
	static auto Func = Class->GetFunction("PlaneCutTool", "Cut");

	Params::UPlaneCutTool_Cut_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshModelingToolsExp.TransferMeshToolProperties.GetTargetLODNamesFunc
// (Final, Native, Public, Const)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<class FString> UTransferMeshToolProperties::GetTargetLODNamesFunc()
{
	static auto Func = Class->GetFunction("TransferMeshToolProperties", "GetTargetLODNamesFunc");

	Params::UTransferMeshToolProperties_GetTargetLODNamesFunc_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MeshModelingToolsExp.TransferMeshToolProperties.GetSourceLODNamesFunc
// (Final, Native, Public, Const)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<class FString> UTransferMeshToolProperties::GetSourceLODNamesFunc()
{
	static auto Func = Class->GetFunction("TransferMeshToolProperties", "GetSourceLODNamesFunc");

	Params::UTransferMeshToolProperties_GetSourceLODNamesFunc_Params Parms;


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
