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

// 0x0 (0x98 - 0x98)
// BlueprintGeneratedClass B_CreatureAnimSoundLibraryContext.B_CreatureAnimSoundLibraryContext_C
class UB_CreatureAnimSoundLibraryContext_C : public USoundLibraryAnimContext
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_CreatureAnimSoundLibraryContext_C");
		return Clss;
	}

	bool Play(class USoundBase* Sound, class UActor* Owner, struct FSoundLibraryPlayResult& OutResults, bool CallFunc_MatchesTag_ReturnValue, bool CallFunc_InEditor_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double Temp_real_Variable, double Temp_real_Variable_1, enum class EFortTeamAffiliation Temp_byte_Variable, class UNPC_Pawn_Wildlife_Parent_C* K2Node_DynamicCast_AsNPC_Pawn_Wildlife_Parent, bool K2Node_DynamicCast_bSuccess, enum class EFortTeamAffiliation CallFunc_GetTeamAffiliationForActorToLocalPlayer_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortPlayerPawn* CallFunc_GetConverterPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsLocallyControlled_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, double K2Node_Select_Default, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, FInterfaceProperty_ CallFunc_SetBoolParameter_self_CastInput, FInterfaceProperty_ CallFunc_SetFloatParameter_self_CastInput, FInterfaceProperty_ CallFunc_SetBoolParameter_self_CastInput_1, int32 CallFunc_Array_Add_ReturnValue, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue, double CallFunc_VSize2D_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, FInterfaceProperty_ CallFunc_SetFloatParameter_self_CastInput_1, float CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast, float CallFunc_SetFloatParameter_InFloat_ImplicitCast, float CallFunc_SetFloatParameter_InFloat_ImplicitCast_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
