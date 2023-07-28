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

// 0x8 (0x5F8 - 0x5F0)
// Class CaretakerRuntime.FortAthenaCaretakerAIController
class UFortAthenaCaretakerAIController : public UAthenaAIController
{
public:
	uint8                                        Pad_7EBB[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaCaretakerAIController");
		return Clss;
	}

	void OnMovementModeChanged(class UCharacter* CharacterOwner, enum class EMovementMode PreviousMovementMode, uint8 PreviousCustomMode);
	void DebugUpdate(float UpdateInterval);
};

// 0x30 (0xE0 - 0xB0)
// Class CaretakerRuntime.FortBTTask_CaretakerMoveTo
class UFortBTTask_CaretakerMoveTo : public UBTTask_MoveTo
{
public:
	struct FBlackboardKeySelector                FocalPointWhileMoving;                             // 0xB0(0x28)(Edit, NativeAccessSpecifierPublic)
	enum class EPathObstacleAction               PathObstacleAction;                                // 0xD8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7EBC[0x3];                                     // Fixing Size After Last Property..
	uint8                                        bEnableSlowdownAtGoal : 1;                         // Mask: 0x1, PropSize: 0x10xDC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bMoveDirectlyTowards : 1;                          // Mask: 0x2, PropSize: 0x10xDC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bStopAtGoal : 1;                                   // Mask: 0x4, PropSize: 0x10xDC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bFinishMoveOnOverlap : 1;                          // Mask: 0x8, PropSize: 0x10xDC(0x1)(Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7EBD[0x3];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBTTask_CaretakerMoveTo");
		return Clss;
	}

};

// 0x18 (0x60 - 0x48)
// Class CaretakerRuntime.FortNavigationFilter_Caretaker
class UFortNavigationFilter_Caretaker : public UNavigationQueryFilter
{
public:
	float                                        EndPointAcceptableRadius;                          // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7EBE[0x4];                                     // Fixing Size After Last Property..
	TSubclassOf<class UNavigationQueryFilter>    EndPointFilterClass;                               // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEndPointReachTestIncludesAgentRadius : 1;         // Mask: 0x1, PropSize: 0x10x58(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEndPointReachTestIncludesGoalRadius : 1;          // Mask: 0x2, PropSize: 0x10x58(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7EBF[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortNavigationFilter_Caretaker");
		return Clss;
	}

};

// 0x0 (0x198 - 0x198)
// Class CaretakerRuntime.FortAITask_CaretakerMove
class UFortAITask_CaretakerMove : public UFortAbilityTask_MoveAI
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAITask_CaretakerMove");
		return Clss;
	}

};

// 0x58 (0x5D0 - 0x578)
// Class CaretakerRuntime.FortAIAnimInstance_Caretaker
class UFortAIAnimInstance_Caretaker : public UFortAIAnimInstance
{
public:
	bool                                         bIsMoving;                                         // 0x578(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7EC0[0x3];                                     // Fixing Size After Last Property..
	float                                        WalkPlayRate;                                      // 0x57C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AimOffsetCurve;                                    // 0x580(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFootPhase_StopLeftPlant;                          // 0x584(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFootPhase_StopLeftPass;                           // 0x585(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFootPhase_StopRightPlant;                         // 0x586(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFootPhase_StopRightPass;                          // 0x587(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BreathingCurve;                                    // 0x588(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MovingTreshold;                                    // 0x58C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CurveName_AimOffsetCurve;                          // 0x590(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CurveName_FootPhase;                               // 0x594(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CurveName_BreathingCurve;                          // 0x598(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SocketName_FX_Chest;                               // 0x59C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ParamName_ChestSocketLocation;                     // 0x5A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ParamName_ChestSocketVector;                       // 0x5A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FirstFootPhaseMin;                                 // 0x5A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SecondFootPhaseMin;                                // 0x5AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ThirdFootPhaseMin;                                 // 0x5B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FourthFootPhaseMin;                                // 0x5B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FootPhaseMax;                                      // 0x5B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7EC1[0x4];                                     // Fixing Size After Last Property..
	class UFortAnimWorldStriderComponent*        WorldStriderComponent;                             // 0x5C0(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, AdvancedDisplay, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7EC2[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAIAnimInstance_Caretaker");
		return Clss;
	}

	void SetDelayedMaterialParameters();
	class UFortAnimWorldStriderComponent* GetWorldStriderComponent();
	float GetWalkSpeedWarpingValue();
	float GetWalkPlayRateValue();
	float GetStartAnimPosition();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
