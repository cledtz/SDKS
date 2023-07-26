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


// Function UnrealEngineExperimental.ControllerComponentDebugDraw.SetDebugDrawEnabled
// (RequiredAPI, Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// bool                               bEnabled                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint32                             ChannelId                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControllerComponentDebugDraw::SetDebugDrawEnabled(bool bEnabled, uint32 ChannelId)
{
	static auto Func = Class->GetFunction("ControllerComponentDebugDraw", "SetDebugDrawEnabled");

	Params::UControllerComponentDebugDraw_SetDebugDrawEnabled_Params Parms;

	Parms.bEnabled = bEnabled;
	Parms.ChannelId = ChannelId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UnrealEngineExperimental.ControllerComponentDebugDraw.Reset
// (RequiredAPI, Net, NetReliable, Native, Event, Public, NetClient, Const)
// Parameters:
// uint32                             ChannelId                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControllerComponentDebugDraw::Reset(uint32 ChannelId)
{
	static auto Func = Class->GetFunction("ControllerComponentDebugDraw", "Reset");

	Params::UControllerComponentDebugDraw_Reset_Params Parms;

	Parms.ChannelId = ChannelId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UnrealEngineExperimental.ControllerComponentDebugDraw.DrawDebugSphereInternal
// (Net, NetReliable, Native, Event, Protected, HasDefaults, NetClient)
// Parameters:
// struct FVector                     Center                                                           (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Radius                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Segments                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FColor                      Color                                                            (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPersistentLines                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              LifeTime                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Thickness                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint32                             ChannelId                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint32                             InstanceID                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControllerComponentDebugDraw::DrawDebugSphereInternal(struct FVector& Center, float Radius, int32 Segments, struct FColor& Color, bool bPersistentLines, float LifeTime, float Thickness, uint32 ChannelId, uint32 InstanceID)
{
	static auto Func = Class->GetFunction("ControllerComponentDebugDraw", "DrawDebugSphereInternal");

	Params::UControllerComponentDebugDraw_DrawDebugSphereInternal_Params Parms;

	Parms.Center = Center;
	Parms.Radius = Radius;
	Parms.Segments = Segments;
	Parms.Color = Color;
	Parms.bPersistentLines = bPersistentLines;
	Parms.LifeTime = LifeTime;
	Parms.Thickness = Thickness;
	Parms.ChannelId = ChannelId;
	Parms.InstanceID = InstanceID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UnrealEngineExperimental.ControllerComponentDebugDraw.DrawDebugPointInternal
// (Net, NetReliable, Native, Event, Protected, HasDefaults, NetClient)
// Parameters:
// struct FVector                     Position                                                         (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Size                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FColor                      Color                                                            (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPersistentLines                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              LifeTime                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint32                             ChannelId                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint32                             InstanceID                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControllerComponentDebugDraw::DrawDebugPointInternal(struct FVector& Position, float Size, struct FColor& Color, bool bPersistentLines, float LifeTime, uint32 ChannelId, uint32 InstanceID)
{
	static auto Func = Class->GetFunction("ControllerComponentDebugDraw", "DrawDebugPointInternal");

	Params::UControllerComponentDebugDraw_DrawDebugPointInternal_Params Parms;

	Parms.Position = Position;
	Parms.Size = Size;
	Parms.Color = Color;
	Parms.bPersistentLines = bPersistentLines;
	Parms.LifeTime = LifeTime;
	Parms.ChannelId = ChannelId;
	Parms.InstanceID = InstanceID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UnrealEngineExperimental.ControllerComponentDebugDraw.DrawDebugLineInternal
// (Net, NetReliable, Native, Event, Protected, HasDefaults, NetClient)
// Parameters:
// struct FVector                     LineStart                                                        (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     LineEnd                                                          (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FColor                      Color                                                            (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPersistentLines                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              LifeTime                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Thickness                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint32                             ChannelId                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint32                             InstanceID                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControllerComponentDebugDraw::DrawDebugLineInternal(struct FVector& LineStart, struct FVector& LineEnd, struct FColor& Color, bool bPersistentLines, float LifeTime, float Thickness, uint32 ChannelId, uint32 InstanceID)
{
	static auto Func = Class->GetFunction("ControllerComponentDebugDraw", "DrawDebugLineInternal");

	Params::UControllerComponentDebugDraw_DrawDebugLineInternal_Params Parms;

	Parms.LineStart = LineStart;
	Parms.LineEnd = LineEnd;
	Parms.Color = Color;
	Parms.bPersistentLines = bPersistentLines;
	Parms.LifeTime = LifeTime;
	Parms.Thickness = Thickness;
	Parms.ChannelId = ChannelId;
	Parms.InstanceID = InstanceID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UnrealEngineExperimental.ControllerComponentDebugDraw.DrawDebugDirectionalArrowInternal
// (Net, NetReliable, Native, Event, Protected, HasDefaults, NetClient)
// Parameters:
// struct FVector                     LineStart                                                        (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     LineEnd                                                          (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ArrowSize                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FColor                      Color                                                            (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPersistentLines                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              LifeTime                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Thickness                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint32                             ChannelId                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint32                             InstanceID                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControllerComponentDebugDraw::DrawDebugDirectionalArrowInternal(struct FVector& LineStart, struct FVector& LineEnd, float ArrowSize, struct FColor& Color, bool bPersistentLines, float LifeTime, float Thickness, uint32 ChannelId, uint32 InstanceID)
{
	static auto Func = Class->GetFunction("ControllerComponentDebugDraw", "DrawDebugDirectionalArrowInternal");

	Params::UControllerComponentDebugDraw_DrawDebugDirectionalArrowInternal_Params Parms;

	Parms.LineStart = LineStart;
	Parms.LineEnd = LineEnd;
	Parms.ArrowSize = ArrowSize;
	Parms.Color = Color;
	Parms.bPersistentLines = bPersistentLines;
	Parms.LifeTime = LifeTime;
	Parms.Thickness = Thickness;
	Parms.ChannelId = ChannelId;
	Parms.InstanceID = InstanceID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UnrealEngineExperimental.ControllerComponentDebugDraw.DrawDebugCylinderInternal
// (Net, NetReliable, Native, Event, Protected, HasDefaults, NetClient)
// Parameters:
// struct FVector                     Start                                                            (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     End                                                              (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Radius                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Segments                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FColor                      Color                                                            (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPersistentLines                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              LifeTime                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Thickness                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint32                             ChannelId                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint32                             InstanceID                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControllerComponentDebugDraw::DrawDebugCylinderInternal(struct FVector& Start, struct FVector& End, float Radius, int32 Segments, struct FColor& Color, bool bPersistentLines, float LifeTime, float Thickness, uint32 ChannelId, uint32 InstanceID)
{
	static auto Func = Class->GetFunction("ControllerComponentDebugDraw", "DrawDebugCylinderInternal");

	Params::UControllerComponentDebugDraw_DrawDebugCylinderInternal_Params Parms;

	Parms.Start = Start;
	Parms.End = End;
	Parms.Radius = Radius;
	Parms.Segments = Segments;
	Parms.Color = Color;
	Parms.bPersistentLines = bPersistentLines;
	Parms.LifeTime = LifeTime;
	Parms.Thickness = Thickness;
	Parms.ChannelId = ChannelId;
	Parms.InstanceID = InstanceID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UnrealEngineExperimental.ControllerComponentDebugDraw.DrawDebugConeInternal
// (Net, NetReliable, Native, Event, Protected, HasDefaults, NetClient)
// Parameters:
// struct FVector                     Origin                                                           (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Direction                                                        (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Length                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              AngleWidth                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              AngleHeight                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumSides                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FColor                      Color                                                            (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPersistentLines                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              LifeTime                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Thickness                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint32                             ChannelId                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint32                             InstanceID                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControllerComponentDebugDraw::DrawDebugConeInternal(struct FVector& Origin, struct FVector& Direction, float Length, float AngleWidth, float AngleHeight, int32 NumSides, struct FColor& Color, bool bPersistentLines, float LifeTime, float Thickness, uint32 ChannelId, uint32 InstanceID)
{
	static auto Func = Class->GetFunction("ControllerComponentDebugDraw", "DrawDebugConeInternal");

	Params::UControllerComponentDebugDraw_DrawDebugConeInternal_Params Parms;

	Parms.Origin = Origin;
	Parms.Direction = Direction;
	Parms.Length = Length;
	Parms.AngleWidth = AngleWidth;
	Parms.AngleHeight = AngleHeight;
	Parms.NumSides = NumSides;
	Parms.Color = Color;
	Parms.bPersistentLines = bPersistentLines;
	Parms.LifeTime = LifeTime;
	Parms.Thickness = Thickness;
	Parms.ChannelId = ChannelId;
	Parms.InstanceID = InstanceID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UnrealEngineExperimental.ControllerComponentDebugDraw.DrawDebugCapsuleInternal
// (Net, NetReliable, Native, Event, Protected, HasDefaults, NetClient)
// Parameters:
// struct FVector                     Center                                                           (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              HalfHeight                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Radius                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FQuat                       Rotation                                                         (ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FColor                      Color                                                            (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPersistentLines                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              LifeTime                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Thickness                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint32                             ChannelId                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint32                             InstanceID                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControllerComponentDebugDraw::DrawDebugCapsuleInternal(struct FVector& Center, float HalfHeight, float Radius, struct FQuat& Rotation, struct FColor& Color, bool bPersistentLines, float LifeTime, float Thickness, uint32 ChannelId, uint32 InstanceID)
{
	static auto Func = Class->GetFunction("ControllerComponentDebugDraw", "DrawDebugCapsuleInternal");

	Params::UControllerComponentDebugDraw_DrawDebugCapsuleInternal_Params Parms;

	Parms.Center = Center;
	Parms.HalfHeight = HalfHeight;
	Parms.Radius = Radius;
	Parms.Rotation = Rotation;
	Parms.Color = Color;
	Parms.bPersistentLines = bPersistentLines;
	Parms.LifeTime = LifeTime;
	Parms.Thickness = Thickness;
	Parms.ChannelId = ChannelId;
	Parms.InstanceID = InstanceID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UnrealEngineExperimental.ControllerComponentDebugDraw.DrawDebugBoxInternal
// (Net, NetReliable, Native, Event, Protected, HasDefaults, NetClient)
// Parameters:
// struct FVector                     Center                                                           (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Extent                                                           (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FQuat                       Rotation                                                         (ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FColor                      Color                                                            (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPersistentLines                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              LifeTime                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Thickness                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint32                             ChannelId                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint32                             InstanceID                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControllerComponentDebugDraw::DrawDebugBoxInternal(struct FVector& Center, struct FVector& Extent, struct FQuat& Rotation, struct FColor& Color, bool bPersistentLines, float LifeTime, float Thickness, uint32 ChannelId, uint32 InstanceID)
{
	static auto Func = Class->GetFunction("ControllerComponentDebugDraw", "DrawDebugBoxInternal");

	Params::UControllerComponentDebugDraw_DrawDebugBoxInternal_Params Parms;

	Parms.Center = Center;
	Parms.Extent = Extent;
	Parms.Rotation = Rotation;
	Parms.Color = Color;
	Parms.bPersistentLines = bPersistentLines;
	Parms.LifeTime = LifeTime;
	Parms.Thickness = Thickness;
	Parms.ChannelId = ChannelId;
	Parms.InstanceID = InstanceID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UnrealEngineExperimental.ControllerComponentDebugDraw.ClearChannel
// (RequiredAPI, Net, NetReliable, Native, Event, Public, NetClient, Const)
// Parameters:
// uint32                             ChannelId                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControllerComponentDebugDraw::ClearChannel(uint32 ChannelId)
{
	static auto Func = Class->GetFunction("ControllerComponentDebugDraw", "ClearChannel");

	Params::UControllerComponentDebugDraw_ClearChannel_Params Parms;

	Parms.ChannelId = ChannelId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UnrealEngineExperimental.ControllerComponentDebugDraw.Clear
// (RequiredAPI, Net, NetReliable, Native, Event, Public, NetClient, Const)
// Parameters:
// uint32                             ChannelId                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint32                             InstanceID                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControllerComponentDebugDraw::Clear(uint32 ChannelId, uint32 InstanceID)
{
	static auto Func = Class->GetFunction("ControllerComponentDebugDraw", "Clear");

	Params::UControllerComponentDebugDraw_Clear_Params Parms;

	Parms.ChannelId = ChannelId;
	Parms.InstanceID = InstanceID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
