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

// 0x8 (0x50 - 0x48)
// BlueprintGeneratedClass HidingProp_CameraModifier.HidingProp_CameraModifier_C
class UHidingProp_CameraModifier_C : public UCameraModifier
{
public:
	class AFortPlayerPawn*                       Pawn;                                              // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HidingProp_CameraModifier_C");
		return Clss;
	}

	void BlueprintModifyCamera(float DeltaTime, const struct FVector& ViewLocation, const struct FRotator& ViewRotation, float FOV, struct FVector* NewViewLocation, struct FRotator* NewViewRotation, float* NewFOV, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
