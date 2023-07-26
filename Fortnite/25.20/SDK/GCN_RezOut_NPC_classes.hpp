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

// 0x10 (0x730 - 0x720)
// BlueprintGeneratedClass GCN_RezOut_NPC.GCN_RezOut_NPC_C
class AGCN_RezOut_NPC_C : public AGCN_RezOut_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x720(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USoundBase*                            SoundOnNPCDeath;                                   // 0x728(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCN_RezOut_NPC_C");
		return Clss;
	}

	void Pre_Sequence_Change();
	void ExecuteUbergraph_GCN_RezOut_NPC(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
