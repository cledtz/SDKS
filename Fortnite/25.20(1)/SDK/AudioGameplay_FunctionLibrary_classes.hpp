#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass AudioGameplay_FunctionLibrary.AudioGameplay_FunctionLibrary_C
class UAudioGameplay_FunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioGameplay_FunctionLibrary_C");
		return Clss;
	}

	void GetAudioForPlayerEvent(class UActor* Target, class USoundBase* _1P_Sound, class USoundBase* _3P_Sound, class UObject* __WorldContext, class USoundBase** AudioAsset, bool CallFunc_IsActorLocal_ReturnValue);
	bool IsActorLocal(class UActor* Actor, class UObject* __WorldContext, class UActor* FinalActor, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortAthenaVehicle* K2Node_DynamicCast_AsFort_Athena_Vehicle, bool K2Node_DynamicCast_bSuccess, class UFortWeapon* K2Node_DynamicCast_AsFort_Weapon, bool K2Node_DynamicCast_bSuccess_1, FInterfaceProperty_ CallFunc_BP_GetAllPassengers_self_CastInput, TArray<class UFortPlayerPawn*>& CallFunc_BP_GetAllPassengers_ReturnValue, class UActor* CallFunc_GetOwner_ReturnValue, class UFortPlayerPawn* CallFunc_Array_Get_Item, bool CallFunc_IsLocallyViewed_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UFortPlayerState* K2Node_DynamicCast_AsFort_Player_State, bool K2Node_DynamicCast_bSuccess_2, class UPawn* CallFunc_GetPawn_ReturnValue, class UFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsLocallyViewed_ReturnValue_1);
	void GetAudioForDamageEvent(class UActor* Receiver, class UActor* Instigator, class USoundBase* ReceiverSound, class USoundBase* InstigatorSound, class USoundBase* ObserverSound, class UObject* __WorldContext, class USoundBase** AudioAsset, bool CallFunc_IsActorLocal_ReturnValue, bool CallFunc_IsActorLocal_ReturnValue_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
