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

// 0x48 (0x3D8 - 0x390)
// BlueprintGeneratedClass BP_ZipLine_Athena_Harness_Yellow.BP_ZipLine_Athena_Harness_Yellow_C
class ABP_ZipLine_Athena_Harness_Yellow_C : public ABP_ZipLine_Athena_Harness_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x390(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     NS_Zipline_Pulley_SpeedLines_Converted;            // 0x398(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     NS_Zipline_Speedline;                              // 0x3A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Alpha_NewTrack_0_AF34CA1D47D28FE19CCA3C98688125DE; // 0x3A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Alpha__Direction_AF34CA1D47D28FE19CCA3C98688125DE; // 0x3AC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9542[0x3];                                     // Fixing Size After Last Property..
	class UTimelineComponent*                    Alpha;                                             // 0x3B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        Spark_NewTrack_0_A812B2F04CB78DDF352B84A578861501; // 0x3B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Spark__Direction_A812B2F04CB78DDF352B84A578861501; // 0x3BC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9543[0x3];                                     // Fixing Size After Last Property..
	class UTimelineComponent*                    Spark;                                             // 0x3C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       BeginLocation_z;                                   // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Location;                                          // 0x3D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_ZipLine_Athena_Harness_Yellow_C");
		return Clss;
	}

	void Spark__FinishedFunc();
	void Spark__UpdateFunc();
	void Alpha__FinishedFunc();
	void Alpha__UpdateFunc();
	void ReceiveBeginPlay();
	void UpdateZiplineFX();
	void Update_Begin_Z();
	void ResetBlue();
	void ExecuteUbergraph_BP_ZipLine_Athena_Harness_Yellow(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_IsClosed_Variable_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
