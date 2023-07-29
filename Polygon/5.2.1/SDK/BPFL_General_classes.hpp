#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_General.BPFL_General_C
class UBPFL_General_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BPFL_General_C");
		return Clss;
	}

	void GetRareColor(enum class EItemRareType Rare, class UObject* __WorldContext, struct FLinearColor* NewParam, enum class EItemRareType Temp_byte_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, const struct FLinearColor& Temp_struct_Variable_4, const struct FLinearColor& Temp_struct_Variable_5, const struct FLinearColor& Temp_struct_Variable_6, const struct FLinearColor& K2Node_Select_Default);
	void GetDefaultModuleClassByType(enum class EGunModuleType ModuleType, class UObject* __WorldContext, class UClass** DefaultModuleClass, enum class EGunModuleType Temp_byte_Variable, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable_1, class UClass* Temp_class_Variable_2, class UClass* Temp_class_Variable_3, class UClass* Temp_class_Variable_4, class UClass* Temp_class_Variable_5, class UClass* Temp_class_Variable_6, class UClass* Temp_class_Variable_7, class UClass* K2Node_Select_Default);
	struct FVector GetActorRelativeLocation(class UActor* ParentActor, class UActor* ChildActor, class UObject* __WorldContext, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_LessLess_VectorRotator_ReturnValue);
	void GetGameInstance(class UObject* __WorldContext, class UBP_PG_GameInstance_C** MyGameIntance, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_PG_GameInstance_C* K2Node_DynamicCast_AsBP_PG_Game_Instance, bool K2Node_DynamicCast_bSuccess);
	void GetGameModeBP_Game(class UObject* __WorldContext, class UBP_PG_GameMode_Game_C** MyGameMode, class UGameModeBase* CallFunc_GetGameMode_ReturnValue, class UBP_PG_GameMode_Game_C* K2Node_DynamicCast_AsBP_PG_Game_Mode_Game, bool K2Node_DynamicCast_bSuccess);
	void GetGameStateBP(class UObject* __WorldContext, class UBP_PG_GameState_Game_C** MyGameState, class UGameStateBase* CallFunc_GetGameState_ReturnValue, class UBP_PG_GameState_Game_C* K2Node_DynamicCast_AsBP_PG_Game_State_Game, bool K2Node_DynamicCast_bSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
