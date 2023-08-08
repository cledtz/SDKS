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


// Function EntityActor.EntityActorComponent.OnRep_ActorComponent
// (Final, Native, Private)
// Parameters:

void UEntityActorComponent::OnRep_ActorComponent()
{
	static auto Func = Class->GetFunction("EntityActorComponent", "OnRep_ActorComponent");

	Params::UEntityActorComponent_OnRep_ActorComponent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EntityActor.EntityDynamicActivationComponent.OnRep_TransitionTarget
// (Final, Native, Private)
// Parameters:

void UEntityDynamicActivationComponent::OnRep_TransitionTarget()
{
	static auto Func = Class->GetFunction("EntityDynamicActivationComponent", "OnRep_TransitionTarget");

	Params::UEntityDynamicActivationComponent_OnRep_TransitionTarget_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EntityActor.EntityDynamicActivationComponent.OnEnabledChanged
// (Final, Native, Public)
// Parameters:
// bool                               bIsEnabled                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEntityDynamicActivationComponent::OnEnabledChanged(bool bIsEnabled)
{
	static auto Func = Class->GetFunction("EntityDynamicActivationComponent", "OnEnabledChanged");

	Params::UEntityDynamicActivationComponent_OnEnabledChanged_Params Parms;

	Parms.bIsEnabled = bIsEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EntityActor.EntityActorCollisionComponent.OnRep_PrimitiveComponent
// (Final, Native, Private)
// Parameters:

void UEntityActorCollisionComponent::OnRep_PrimitiveComponent()
{
	static auto Func = Class->GetFunction("EntityActorCollisionComponent", "OnRep_PrimitiveComponent");

	Params::UEntityActorCollisionComponent_OnRep_PrimitiveComponent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EntityActor.EntityActorCollisionComponent.OnRep_CollisionProfileName
// (Final, Native, Private)
// Parameters:

void UEntityActorCollisionComponent::OnRep_CollisionProfileName()
{
	static auto Func = Class->GetFunction("EntityActorCollisionComponent", "OnRep_CollisionProfileName");

	Params::UEntityActorCollisionComponent_OnRep_CollisionProfileName_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EntityActor.EntityActorCollisionComponent.OnNativeComponentHit
// (Final, Native, Private, HasOutParams, HasDefaults)
// Parameters:
// class UPrimitiveComponent*         HitComponent                                                     (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      OtherActor                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     NormalImpulse                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  Hit                                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UEntityActorCollisionComponent::OnNativeComponentHit(class UPrimitiveComponent* HitComponent, class UActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit)
{
	static auto Func = Class->GetFunction("EntityActorCollisionComponent", "OnNativeComponentHit");

	Params::UEntityActorCollisionComponent_OnNativeComponentHit_Params Parms;

	Parms.HitComponent = HitComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = NormalImpulse;
	Parms.Hit = Hit;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EntityActor.EntityActorCollisionComponent.OnNativeComponentEndOverlap
// (Final, Native, Private)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      OtherActor                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEntityActorCollisionComponent::OnNativeComponentEndOverlap(class UPrimitiveComponent* OverlappedComponent, class UActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static auto Func = Class->GetFunction("EntityActorCollisionComponent", "OnNativeComponentEndOverlap");

	Params::UEntityActorCollisionComponent_OnNativeComponentEndOverlap_Params Parms;

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EntityActor.EntityActorCollisionComponent.OnNativeComponentBeginOverlap
// (Final, Native, Private, HasOutParams)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      OtherActor                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFromSweep                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  SweepResult                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UEntityActorCollisionComponent::OnNativeComponentBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class UActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static auto Func = Class->GetFunction("EntityActorCollisionComponent", "OnNativeComponentBeginOverlap");

	Params::UEntityActorCollisionComponent_OnNativeComponentBeginOverlap_Params Parms;

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EntityActor.EntityActorCollisionComponent.OnEnabledChanged
// (Final, Native, Private)
// Parameters:
// bool                               bIsEnabled                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEntityActorCollisionComponent::OnEnabledChanged(bool bIsEnabled)
{
	static auto Func = Class->GetFunction("EntityActorCollisionComponent", "OnEnabledChanged");

	Params::UEntityActorCollisionComponent_OnEnabledChanged_Params Parms;

	Parms.bIsEnabled = bIsEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EntityActor.EntityActorPlayerComponent.OnRep_PlayerId
// (Native, Protected)
// Parameters:

void UEntityActorPlayerComponent::OnRep_PlayerId()
{
	static auto Func = Class->GetFunction("EntityActorPlayerComponent", "OnRep_PlayerId");

	Params::UEntityActorPlayerComponent_OnRep_PlayerId_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EntityActor.EntityActorStaticMeshRenderComponent.OnRep_MeshMaterials
// (Final, Native, Private)
// Parameters:

void UEntityActorStaticMeshRenderComponent::OnRep_MeshMaterials()
{
	static auto Func = Class->GetFunction("EntityActorStaticMeshRenderComponent", "OnRep_MeshMaterials");

	Params::UEntityActorStaticMeshRenderComponent_OnRep_MeshMaterials_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EntityActor.EntityActorStaticMeshRenderComponent.OnRep_MaxDrawDistance
// (Final, Native, Private)
// Parameters:

void UEntityActorStaticMeshRenderComponent::OnRep_MaxDrawDistance()
{
	static auto Func = Class->GetFunction("EntityActorStaticMeshRenderComponent", "OnRep_MaxDrawDistance");

	Params::UEntityActorStaticMeshRenderComponent_OnRep_MaxDrawDistance_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EntityActor.EntityActorStaticMeshRenderComponent.OnRep_EnableCollision
// (Final, Native, Private)
// Parameters:

void UEntityActorStaticMeshRenderComponent::OnRep_EnableCollision()
{
	static auto Func = Class->GetFunction("EntityActorStaticMeshRenderComponent", "OnRep_EnableCollision");

	Params::UEntityActorStaticMeshRenderComponent_OnRep_EnableCollision_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EntityActor.EntityActorTextDisplayComponent.SetWorldSize
// (Final, Native, Public)
// Parameters:
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEntityActorTextDisplayComponent::SetWorldSize(float Value)
{
	static auto Func = Class->GetFunction("EntityActorTextDisplayComponent", "SetWorldSize");

	Params::UEntityActorTextDisplayComponent_SetWorldSize_Params Parms;

	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EntityActor.EntityActorTextDisplayComponent.SetVerticalAlignment
// (Final, Native, Public)
// Parameters:
// enum class EVerticalTextAligment   Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEntityActorTextDisplayComponent::SetVerticalAlignment(enum class EVerticalTextAligment Value)
{
	static auto Func = Class->GetFunction("EntityActorTextDisplayComponent", "SetVerticalAlignment");

	Params::UEntityActorTextDisplayComponent_SetVerticalAlignment_Params Parms;

	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EntityActor.EntityActorTextDisplayComponent.SetTextRenderColor
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FColor                      Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEntityActorTextDisplayComponent::SetTextRenderColor(const struct FColor& Value)
{
	static auto Func = Class->GetFunction("EntityActorTextDisplayComponent", "SetTextRenderColor");

	Params::UEntityActorTextDisplayComponent_SetTextRenderColor_Params Parms;

	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EntityActor.EntityActorTextDisplayComponent.SetText
// (Final, Native, Public)
// Parameters:
// class FText                        Text                                                             (Parm, NativeAccessSpecifierPublic)

void UEntityActorTextDisplayComponent::SetText(class FText Text)
{
	static auto Func = Class->GetFunction("EntityActorTextDisplayComponent", "SetText");

	Params::UEntityActorTextDisplayComponent_SetText_Params Parms;

	Parms.Text = Text;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EntityActor.EntityActorTextDisplayComponent.SetRelativeScale
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FVector                     RelativeScale                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEntityActorTextDisplayComponent::SetRelativeScale(const struct FVector& RelativeScale)
{
	static auto Func = Class->GetFunction("EntityActorTextDisplayComponent", "SetRelativeScale");

	Params::UEntityActorTextDisplayComponent_SetRelativeScale_Params Parms;

	Parms.RelativeScale = RelativeScale;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EntityActor.EntityActorTextDisplayComponent.SetRelativeRotation
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FRotator                    RelativeRotation                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UEntityActorTextDisplayComponent::SetRelativeRotation(const struct FRotator& RelativeRotation)
{
	static auto Func = Class->GetFunction("EntityActorTextDisplayComponent", "SetRelativeRotation");

	Params::UEntityActorTextDisplayComponent_SetRelativeRotation_Params Parms;

	Parms.RelativeRotation = RelativeRotation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EntityActor.EntityActorTextDisplayComponent.SetRelativeLocation
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FVector                     RelativeLocation                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEntityActorTextDisplayComponent::SetRelativeLocation(const struct FVector& RelativeLocation)
{
	static auto Func = Class->GetFunction("EntityActorTextDisplayComponent", "SetRelativeLocation");

	Params::UEntityActorTextDisplayComponent_SetRelativeLocation_Params Parms;

	Parms.RelativeLocation = RelativeLocation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EntityActor.EntityActorTextDisplayComponent.SetHorizontalAlignment
// (Final, Native, Public)
// Parameters:
// enum class EHorizTextAligment      Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEntityActorTextDisplayComponent::SetHorizontalAlignment(enum class EHorizTextAligment Value)
{
	static auto Func = Class->GetFunction("EntityActorTextDisplayComponent", "SetHorizontalAlignment");

	Params::UEntityActorTextDisplayComponent_SetHorizontalAlignment_Params Parms;

	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EntityActor.EntityActorTextDisplayComponent.OnRep_WorldSize
// (Final, Native, Private)
// Parameters:

void UEntityActorTextDisplayComponent::OnRep_WorldSize()
{
	static auto Func = Class->GetFunction("EntityActorTextDisplayComponent", "OnRep_WorldSize");

	Params::UEntityActorTextDisplayComponent_OnRep_WorldSize_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EntityActor.EntityActorTextDisplayComponent.OnRep_TextRenderColor
// (Final, Native, Private)
// Parameters:

void UEntityActorTextDisplayComponent::OnRep_TextRenderColor()
{
	static auto Func = Class->GetFunction("EntityActorTextDisplayComponent", "OnRep_TextRenderColor");

	Params::UEntityActorTextDisplayComponent_OnRep_TextRenderColor_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EntityActor.EntityActorTextDisplayComponent.OnRep_DisplayText
// (Final, Native, Private)
// Parameters:

void UEntityActorTextDisplayComponent::OnRep_DisplayText()
{
	static auto Func = Class->GetFunction("EntityActorTextDisplayComponent", "OnRep_DisplayText");

	Params::UEntityActorTextDisplayComponent_OnRep_DisplayText_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EntityActor.EntityActorTextDisplayComponent.GetWorldSize
// (Final, Native, Public, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UEntityActorTextDisplayComponent::GetWorldSize()
{
	static auto Func = Class->GetFunction("EntityActorTextDisplayComponent", "GetWorldSize");

	Params::UEntityActorTextDisplayComponent_GetWorldSize_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EntityActor.EntityActorTextDisplayComponent.GetVerticalAlignment
// (Final, Native, Public)
// Parameters:
// enum class EVerticalTextAligment   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EVerticalTextAligment UEntityActorTextDisplayComponent::GetVerticalAlignment()
{
	static auto Func = Class->GetFunction("EntityActorTextDisplayComponent", "GetVerticalAlignment");

	Params::UEntityActorTextDisplayComponent_GetVerticalAlignment_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EntityActor.EntityActorTextDisplayComponent.GetTextRenderColor
// (Final, Native, Public, HasDefaults, Const)
// Parameters:
// struct FColor                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FColor UEntityActorTextDisplayComponent::GetTextRenderColor()
{
	static auto Func = Class->GetFunction("EntityActorTextDisplayComponent", "GetTextRenderColor");

	Params::UEntityActorTextDisplayComponent_GetTextRenderColor_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EntityActor.EntityActorTextDisplayComponent.GetText
// (Final, Native, Public, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UEntityActorTextDisplayComponent::GetText()
{
	static auto Func = Class->GetFunction("EntityActorTextDisplayComponent", "GetText");

	Params::UEntityActorTextDisplayComponent_GetText_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EntityActor.EntityActorTextDisplayComponent.GetRelativeLocation
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UEntityActorTextDisplayComponent::GetRelativeLocation()
{
	static auto Func = Class->GetFunction("EntityActorTextDisplayComponent", "GetRelativeLocation");

	Params::UEntityActorTextDisplayComponent_GetRelativeLocation_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EntityActor.EntityActorTextDisplayComponent.GetHorizontalAlignment
// (Final, Native, Public)
// Parameters:
// enum class EHorizTextAligment      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EHorizTextAligment UEntityActorTextDisplayComponent::GetHorizontalAlignment()
{
	static auto Func = Class->GetFunction("EntityActorTextDisplayComponent", "GetHorizontalAlignment");

	Params::UEntityActorTextDisplayComponent_GetHorizontalAlignment_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EntityActor.EntityActorPositionComponent.OnRootComponentChanged
// (Final, Native, Private)
// Parameters:
// class USceneComponent*             InRootComponent                                                  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsRootComponent                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEntityActorPositionComponent::OnRootComponentChanged(class USceneComponent* InRootComponent, bool bIsRootComponent)
{
	static auto Func = Class->GetFunction("EntityActorPositionComponent", "OnRootComponentChanged");

	Params::UEntityActorPositionComponent_OnRootComponentChanged_Params Parms;

	Parms.InRootComponent = InRootComponent;
	Parms.bIsRootComponent = bIsRootComponent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EntityActor.EntityActorRotationComponent.OnRootComponentChanged
// (Final, Native, Private)
// Parameters:
// class USceneComponent*             InRootComponent                                                  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsRootComponent                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEntityActorRotationComponent::OnRootComponentChanged(class USceneComponent* InRootComponent, bool bIsRootComponent)
{
	static auto Func = Class->GetFunction("EntityActorRotationComponent", "OnRootComponentChanged");

	Params::UEntityActorRotationComponent_OnRootComponentChanged_Params Parms;

	Parms.InRootComponent = InRootComponent;
	Parms.bIsRootComponent = bIsRootComponent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EntityActor.EntityActorScaleComponent.OnRootComponentChanged
// (Final, Native, Private)
// Parameters:
// class USceneComponent*             InRootComponent                                                  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsRootComponent                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEntityActorScaleComponent::OnRootComponentChanged(class USceneComponent* InRootComponent, bool bIsRootComponent)
{
	static auto Func = Class->GetFunction("EntityActorScaleComponent", "OnRootComponentChanged");

	Params::UEntityActorScaleComponent_OnRootComponentChanged_Params Parms;

	Parms.InRootComponent = InRootComponent;
	Parms.bIsRootComponent = bIsRootComponent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
