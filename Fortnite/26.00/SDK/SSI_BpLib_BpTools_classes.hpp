#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass SSI_BpLib_BpTools.SSI_BpLib_BpTools_C
class USSI_BpLib_BpTools_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USSI_BpLib_BpTools_C* GetDefaultObj();

	void OnLocalPlayersTeam(class UActor* TargetActor, class UObject* __WorldContext, bool* Return_Value, bool TeamValid, TArray<class UFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class UFortPlayerController* CallFunc_Array_Get_Item, bool CallFunc_OnSameTeam_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
};

}


