#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x3E0 - 0x3D0)
// BlueprintGeneratedClass B_WilliePete_WaterBodyChild.B_WilliePete_WaterBodyChild_C
class UB_WilliePete_WaterBodyChild_C : public UFortWaterBodyActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                       Debug;                                             // 0x3D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_WilliePete_WaterBodyChild_C");
		return Clss;
	}

	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_WilliePete_WaterBodyChild(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const class FString& CallFunc_Conv_VectorToString_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
