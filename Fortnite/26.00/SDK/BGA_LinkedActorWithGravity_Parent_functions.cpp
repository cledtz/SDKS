#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BGA_LinkedActorWithGravity_Parent.BGA_LinkedActorWithGravity_Parent_C
// (Actor)

class UClass* UBGA_LinkedActorWithGravity_Parent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BGA_LinkedActorWithGravity_Parent_C");

	return Clss;
}


// BGA_LinkedActorWithGravity_Parent_C BGA_LinkedActorWithGravity_Parent.Default__BGA_LinkedActorWithGravity_Parent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBGA_LinkedActorWithGravity_Parent_C* UBGA_LinkedActorWithGravity_Parent_C::GetDefaultObj()
{
	static class UBGA_LinkedActorWithGravity_Parent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBGA_LinkedActorWithGravity_Parent_C*>(UBGA_LinkedActorWithGravity_Parent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BGA_LinkedActorWithGravity_Parent.BGA_LinkedActorWithGravity_Parent_C.ShouldStopSimulationOnEnterWater
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWaterBody*                  WaterBody                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ShouldStop                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBGA_LinkedActorWithGravity_Parent_C::ShouldStopSimulationOnEnterWater(class UWaterBody* WaterBody, bool* ShouldStop)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_LinkedActorWithGravity_Parent_C", "ShouldStopSimulationOnEnterWater");

	Params::UBGA_LinkedActorWithGravity_Parent_C_ShouldStopSimulationOnEnterWater_Params Parms{};

	Parms.WaterBody = WaterBody;

	UObject::ProcessEvent(Func, &Parms);

	if (ShouldStop != nullptr)
		*ShouldStop = Parms.ShouldStop;

}


// Function BGA_LinkedActorWithGravity_Parent.BGA_LinkedActorWithGravity_Parent_C.ShouldStopSimulationOnHit
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  HitResult                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               ShouldStop                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBGA_LinkedActorWithGravity_Parent_C::ShouldStopSimulationOnHit(const struct FHitResult& HitResult, bool* ShouldStop)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_LinkedActorWithGravity_Parent_C", "ShouldStopSimulationOnHit");

	Params::UBGA_LinkedActorWithGravity_Parent_C_ShouldStopSimulationOnHit_Params Parms{};

	Parms.HitResult = HitResult;

	UObject::ProcessEvent(Func, &Parms);

	if (ShouldStop != nullptr)
		*ShouldStop = Parms.ShouldStop;

}


// Function BGA_LinkedActorWithGravity_Parent.BGA_LinkedActorWithGravity_Parent_C.ReceiveHit
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         MyComp                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UActor*                      Other                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               bSelfMoved                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     HitLocation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     HitNormal                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     NormalImpulse                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UBGA_LinkedActorWithGravity_Parent_C::ReceiveHit(class UPrimitiveComponent* MyComp, class UActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_LinkedActorWithGravity_Parent_C", "ReceiveHit");

	Params::UBGA_LinkedActorWithGravity_Parent_C_ReceiveHit_Params Parms{};

	Parms.MyComp = MyComp;
	Parms.Other = Other;
	Parms.OtherComp = OtherComp;
	Parms.bSelfMoved = bSelfMoved;
	Parms.HitLocation = HitLocation;
	Parms.HitNormal = HitNormal;
	Parms.NormalImpulse = NormalImpulse;
	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_LinkedActorWithGravity_Parent.BGA_LinkedActorWithGravity_Parent_C.OnSimulationResumed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBGA_LinkedActorWithGravity_Parent_C::OnSimulationResumed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_LinkedActorWithGravity_Parent_C", "OnSimulationResumed");

	Params::UBGA_LinkedActorWithGravity_Parent_C_OnSimulationResumed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_LinkedActorWithGravity_Parent.BGA_LinkedActorWithGravity_Parent_C.BeginSimulation
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBGA_LinkedActorWithGravity_Parent_C::BeginSimulation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_LinkedActorWithGravity_Parent_C", "BeginSimulation");

	Params::UBGA_LinkedActorWithGravity_Parent_C_BeginSimulation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_LinkedActorWithGravity_Parent.BGA_LinkedActorWithGravity_Parent_C.BndEvt__BGA_LinkedActorWithGravity_FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBGA_LinkedActorWithGravity_Parent_C::BndEvt__BGA_LinkedActorWithGravity_FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature(class UActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_LinkedActorWithGravity_Parent_C", "BndEvt__BGA_LinkedActorWithGravity_FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature");

	Params::UBGA_LinkedActorWithGravity_Parent_C_BndEvt__BGA_LinkedActorWithGravity_FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature_Params Parms{};

	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_LinkedActorWithGravity_Parent.BGA_LinkedActorWithGravity_Parent_C.OnSimulationStopped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  StoppedHit                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UBGA_LinkedActorWithGravity_Parent_C::OnSimulationStopped(const struct FHitResult& StoppedHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_LinkedActorWithGravity_Parent_C", "OnSimulationStopped");

	Params::UBGA_LinkedActorWithGravity_Parent_C_OnSimulationStopped_Params Parms{};

	Parms.StoppedHit = StoppedHit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_LinkedActorWithGravity_Parent.BGA_LinkedActorWithGravity_Parent_C.PlayDeathGC
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBGA_LinkedActorWithGravity_Parent_C::PlayDeathGC()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_LinkedActorWithGravity_Parent_C", "PlayDeathGC");

	Params::UBGA_LinkedActorWithGravity_Parent_C_PlayDeathGC_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_LinkedActorWithGravity_Parent.BGA_LinkedActorWithGravity_Parent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBGA_LinkedActorWithGravity_Parent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_LinkedActorWithGravity_Parent_C", "ReceiveBeginPlay");

	Params::UBGA_LinkedActorWithGravity_Parent_C_ReceiveBeginPlay_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_LinkedActorWithGravity_Parent.BGA_LinkedActorWithGravity_Parent_C.OnDeathServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       DamageTags                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                     Momentum                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitInfo                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UController*                 InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleEffectContext                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UBGA_LinkedActorWithGravity_Parent_C::OnDeathServer(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class UController* InstigatedBy, class UActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_LinkedActorWithGravity_Parent_C", "OnDeathServer");

	Params::UBGA_LinkedActorWithGravity_Parent_C_OnDeathServer_Params Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_LinkedActorWithGravity_Parent.BGA_LinkedActorWithGravity_Parent_C.BndEvt__BGA_LinkedActorWithGravity_Parent_FortWaterInteraction_K2Node_ComponentBoundEvent_2_WaterInteractionOnEnterWater__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortWaterBodyActor*         WaterBody                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortWaterInteractionComponent*WaterInteractionComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               bIsFirstBody                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBGA_LinkedActorWithGravity_Parent_C::BndEvt__BGA_LinkedActorWithGravity_Parent_FortWaterInteraction_K2Node_ComponentBoundEvent_2_WaterInteractionOnEnterWater__DelegateSignature(class UFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_LinkedActorWithGravity_Parent_C", "BndEvt__BGA_LinkedActorWithGravity_Parent_FortWaterInteraction_K2Node_ComponentBoundEvent_2_WaterInteractionOnEnterWater__DelegateSignature");

	Params::UBGA_LinkedActorWithGravity_Parent_C_BndEvt__BGA_LinkedActorWithGravity_Parent_FortWaterInteraction_K2Node_ComponentBoundEvent_2_WaterInteractionOnEnterWater__DelegateSignature_Params Parms{};

	Parms.WaterBody = WaterBody;
	Parms.WaterInteractionComponent = WaterInteractionComponent;
	Parms.bIsFirstBody = bIsFirstBody;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_LinkedActorWithGravity_Parent.BGA_LinkedActorWithGravity_Parent_C.BndEvt__BGA_LinkedActorWithGravity_Parent_FortProjectileMovement_K2Node_ComponentBoundEvent_3_OnProjectileStopDelegate__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                  ImpactResult                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UBGA_LinkedActorWithGravity_Parent_C::BndEvt__BGA_LinkedActorWithGravity_Parent_FortProjectileMovement_K2Node_ComponentBoundEvent_3_OnProjectileStopDelegate__DelegateSignature(struct FHitResult& ImpactResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_LinkedActorWithGravity_Parent_C", "BndEvt__BGA_LinkedActorWithGravity_Parent_FortProjectileMovement_K2Node_ComponentBoundEvent_3_OnProjectileStopDelegate__DelegateSignature");

	Params::UBGA_LinkedActorWithGravity_Parent_C_BndEvt__BGA_LinkedActorWithGravity_Parent_FortProjectileMovement_K2Node_ComponentBoundEvent_3_OnProjectileStopDelegate__DelegateSignature_Params Parms{};

	Parms.ImpactResult = ImpactResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_LinkedActorWithGravity_Parent.BGA_LinkedActorWithGravity_Parent_C.BndEvt__BGA_LinkedActorWithGravity_Parent_FortLinkToActor_K2Node_ComponentBoundEvent_1_OnLinkedPhysicsObjectWake__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UActor*                      PhysicsObject                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBGA_LinkedActorWithGravity_Parent_C::BndEvt__BGA_LinkedActorWithGravity_Parent_FortLinkToActor_K2Node_ComponentBoundEvent_1_OnLinkedPhysicsObjectWake__DelegateSignature(class UActor* PhysicsObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_LinkedActorWithGravity_Parent_C", "BndEvt__BGA_LinkedActorWithGravity_Parent_FortLinkToActor_K2Node_ComponentBoundEvent_1_OnLinkedPhysicsObjectWake__DelegateSignature");

	Params::UBGA_LinkedActorWithGravity_Parent_C_BndEvt__BGA_LinkedActorWithGravity_Parent_FortLinkToActor_K2Node_ComponentBoundEvent_1_OnLinkedPhysicsObjectWake__DelegateSignature_Params Parms{};

	Parms.PhysicsObject = PhysicsObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_LinkedActorWithGravity_Parent.BGA_LinkedActorWithGravity_Parent_C.ExecuteUbergraph_BGA_LinkedActorWithGravity_Parent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      K2Node_ComponentBoundEvent_PhysicsObject                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      K2Node_ComponentBoundEvent_DamageCauser                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_CustomEvent_StoppedHit                                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              K2Node_Event_Damage                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_Event_DamageTags                                          (ConstParm)
// struct FVector                     K2Node_Event_Momentum                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_HitInfo                                             (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UController*                 K2Node_Event_InstigatedBy                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      K2Node_Event_DamageCauser                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleK2Node_Event_EffectContext                                       (None)
// class UFortWaterBodyActor*         K2Node_ComponentBoundEvent_WaterBody                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortWaterInteractionComponent*K2Node_ComponentBoundEvent_WaterInteractionComponent             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsFirstBody                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_MakeHitResult_ReturnValue                               (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldStopSimulationOnEnterWater_ShouldStop             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_Event_MyComp                                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UActor*                      K2Node_Event_Other                                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_Event_OtherComp                                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bSelfMoved                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_HitLocation                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_HitNormal                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_NormalImpulse                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_Hit                                                 (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_ShouldStopSimulationOnHit_ShouldStop                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_ComponentBoundEvent_ImpactResult                          (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UBGA_LinkedActorWithGravity_Parent_C::ExecuteUbergraph_BGA_LinkedActorWithGravity_Parent(int32 EntryPoint, class UActor* K2Node_ComponentBoundEvent_PhysicsObject, bool CallFunc_Not_PreBool_ReturnValue, class UActor* K2Node_ComponentBoundEvent_DamageCauser, const struct FHitResult& K2Node_CustomEvent_StoppedHit, float K2Node_Event_Damage, const struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, const struct FHitResult& K2Node_Event_HitInfo, class UController* K2Node_Event_InstigatedBy, class UActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, class UFortWaterBodyActor* K2Node_ComponentBoundEvent_WaterBody, class UFortWaterInteractionComponent* K2Node_ComponentBoundEvent_WaterInteractionComponent, bool K2Node_ComponentBoundEvent_bIsFirstBody, const struct FHitResult& CallFunc_MakeHitResult_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_ShouldStopSimulationOnEnterWater_ShouldStop, class UPrimitiveComponent* K2Node_Event_MyComp, class UActor* K2Node_Event_Other, class UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, const struct FVector& K2Node_Event_HitLocation, const struct FVector& K2Node_Event_HitNormal, const struct FVector& K2Node_Event_NormalImpulse, const struct FHitResult& K2Node_Event_Hit, bool CallFunc_ShouldStopSimulationOnHit_ShouldStop, const struct FHitResult& K2Node_ComponentBoundEvent_ImpactResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_LinkedActorWithGravity_Parent_C", "ExecuteUbergraph_BGA_LinkedActorWithGravity_Parent");

	Params::UBGA_LinkedActorWithGravity_Parent_C_ExecuteUbergraph_BGA_LinkedActorWithGravity_Parent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_PhysicsObject = K2Node_ComponentBoundEvent_PhysicsObject;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_DamageCauser = K2Node_ComponentBoundEvent_DamageCauser;
	Parms.K2Node_CustomEvent_StoppedHit = K2Node_CustomEvent_StoppedHit;
	Parms.K2Node_Event_Damage = K2Node_Event_Damage;
	Parms.K2Node_Event_DamageTags = K2Node_Event_DamageTags;
	Parms.K2Node_Event_Momentum = K2Node_Event_Momentum;
	Parms.K2Node_Event_HitInfo = K2Node_Event_HitInfo;
	Parms.K2Node_Event_InstigatedBy = K2Node_Event_InstigatedBy;
	Parms.K2Node_Event_DamageCauser = K2Node_Event_DamageCauser;
	Parms.K2Node_Event_EffectContext = K2Node_Event_EffectContext;
	Parms.K2Node_ComponentBoundEvent_WaterBody = K2Node_ComponentBoundEvent_WaterBody;
	Parms.K2Node_ComponentBoundEvent_WaterInteractionComponent = K2Node_ComponentBoundEvent_WaterInteractionComponent;
	Parms.K2Node_ComponentBoundEvent_bIsFirstBody = K2Node_ComponentBoundEvent_bIsFirstBody;
	Parms.CallFunc_MakeHitResult_ReturnValue = CallFunc_MakeHitResult_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_ShouldStopSimulationOnEnterWater_ShouldStop = CallFunc_ShouldStopSimulationOnEnterWater_ShouldStop;
	Parms.K2Node_Event_MyComp = K2Node_Event_MyComp;
	Parms.K2Node_Event_Other = K2Node_Event_Other;
	Parms.K2Node_Event_OtherComp = K2Node_Event_OtherComp;
	Parms.K2Node_Event_bSelfMoved = K2Node_Event_bSelfMoved;
	Parms.K2Node_Event_HitLocation = K2Node_Event_HitLocation;
	Parms.K2Node_Event_HitNormal = K2Node_Event_HitNormal;
	Parms.K2Node_Event_NormalImpulse = K2Node_Event_NormalImpulse;
	Parms.K2Node_Event_Hit = K2Node_Event_Hit;
	Parms.CallFunc_ShouldStopSimulationOnHit_ShouldStop = CallFunc_ShouldStopSimulationOnHit_ShouldStop;
	Parms.K2Node_ComponentBoundEvent_ImpactResult = K2Node_ComponentBoundEvent_ImpactResult;

	UObject::ProcessEvent(Func, &Parms);

}

}


