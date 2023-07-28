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
// BlueprintGeneratedClass SSI_BpLib_BpTools.SSI_BpLib_BpTools_C
class USSI_BpLib_BpTools_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SSI_BpLib_BpTools_C");
		return Clss;
	}

	void OnLocalPlayersTeam(class UActor* TargetActor, class UObject* __WorldContext, bool* Return_Value, bool TeamValid, TArray<class UFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class UFortPlayerController* CallFunc_Array_Get_Item, bool CallFunc_OnSameTeam_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
