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


// Function BP_SurfaceTypeSoundComponent.BP_SurfaceTypeSoundComponent_C.ActuallyPlaySound
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                  CallFunc_Map_Find_Value                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SurfaceTypeSoundComponent_C::ActuallyPlaySound(class USoundBase* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_SurfaceTypeSoundComponent_C", "ActuallyPlaySound");

	Params::UBP_SurfaceTypeSoundComponent_C_ActuallyPlaySound_Params Parms;

	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SurfaceTypeSoundComponent.BP_SurfaceTypeSoundComponent_C.SetSurfaceType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPhysicalSurface        SurfaceType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPhysicalSurface        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBuildingSMActor*            K2Node_DynamicCast_AsBuilding_Static_Mesh                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPhysicalSurface        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPhysicalSurface        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPhysicalSurface        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPhysicalSurface        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPhysicalSurface        Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortResourceType       Temp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPhysicalSurface        Temp_byte_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPhysicalSurface        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SurfaceTypeSoundComponent_C::SetSurfaceType(enum class EPhysicalSurface SurfaceType, class UActor* Actor, enum class EPhysicalSurface Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue, class UBuildingSMActor* K2Node_DynamicCast_AsBuilding_Static_Mesh, bool K2Node_DynamicCast_bSuccess, enum class EPhysicalSurface Temp_byte_Variable_1, enum class EPhysicalSurface Temp_byte_Variable_2, enum class EPhysicalSurface Temp_byte_Variable_3, enum class EPhysicalSurface Temp_byte_Variable_4, enum class EPhysicalSurface Temp_byte_Variable_5, enum class EFortResourceType Temp_byte_Variable_6, enum class EPhysicalSurface Temp_byte_Variable_7, enum class EPhysicalSurface K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("BP_SurfaceTypeSoundComponent_C", "SetSurfaceType");

	Params::UBP_SurfaceTypeSoundComponent_C_SetSurfaceType_Params Parms;

	Parms.SurfaceType = SurfaceType;
	Parms.Actor = Actor;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBuilding_Static_Mesh = K2Node_DynamicCast_AsBuilding_Static_Mesh;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SurfaceTypeSoundComponent.BP_SurfaceTypeSoundComponent_C.PlaySound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  CallFunc_Map_Find_Value                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SurfaceTypeSoundComponent_C::PlaySound(const struct FVector& Location, class USoundBase* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_SurfaceTypeSoundComponent_C", "PlaySound");

	Params::UBP_SurfaceTypeSoundComponent_C_PlaySound_Params Parms;

	Parms.Location = Location;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SurfaceTypeSoundComponent.BP_SurfaceTypeSoundComponent_C.Test Delay
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SurfaceTypeSoundComponent_C::Test_Delay()
{
	static auto Func = Class->GetFunction("BP_SurfaceTypeSoundComponent_C", "Test Delay");

	Params::UBP_SurfaceTypeSoundComponent_C_Test_Delay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SurfaceTypeSoundComponent.BP_SurfaceTypeSoundComponent_C.ExecuteUbergraph_BP_SurfaceTypeSoundComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SurfaceTypeSoundComponent_C::ExecuteUbergraph_BP_SurfaceTypeSoundComponent(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("BP_SurfaceTypeSoundComponent_C", "ExecuteUbergraph_BP_SurfaceTypeSoundComponent");

	Params::UBP_SurfaceTypeSoundComponent_C_ExecuteUbergraph_BP_SurfaceTypeSoundComponent_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
