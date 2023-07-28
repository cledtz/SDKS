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

// 0x0 (0xB0 - 0xB0)
// BlueprintGeneratedClass B_CreatureSoundLibraryContext.B_CreatureSoundLibraryContext_C
class UB_CreatureSoundLibraryContext_C : public USoundLibrarySimpleContext
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_CreatureSoundLibraryContext_C");
		return Clss;
	}

	bool Play(class USoundBase* Sound, class UActor* Owner, struct FSoundLibraryPlayResult& OutResults, double Temp_real_Variable, bool CallFunc_MatchesTag_ReturnValue, double Temp_real_Variable_1, double CallFunc_SelectFloat_ReturnValue, enum class EFortTeamAffiliation Temp_byte_Variable, class UNPC_Pawn_Wildlife_Parent_C* K2Node_DynamicCast_AsNPC_Pawn_Wildlife_Parent, bool K2Node_DynamicCast_bSuccess, enum class EFortTeamAffiliation CallFunc_GetTeamAffiliationForActorToLocalPlayer_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, double K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, FInterfaceProperty_ CallFunc_SetBoolParameter_self_CastInput, int32 CallFunc_Array_Add_ReturnValue, class UFortPlayerPawn* CallFunc_GetConverterPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, FInterfaceProperty_ CallFunc_SetFloatParameter_self_CastInput, bool CallFunc_IsLocallyControlled_ReturnValue, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, FInterfaceProperty_ CallFunc_SetBoolParameter_self_CastInput_1, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue, double CallFunc_VSize2D_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, FInterfaceProperty_ CallFunc_SetFloatParameter_self_CastInput_1, float CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast, float CallFunc_SetFloatParameter_InFloat_ImplicitCast, float CallFunc_SetFloatParameter_InFloat_ImplicitCast_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
