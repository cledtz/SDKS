#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// AnimBlueprintGeneratedClass Fauna_Idle_AnimInterface.Fauna_Idle_AnimInterface_C
class UFauna_Idle_AnimInterface_C : public UAnimLayerInterface
{
public:

	static class UClass* StaticClass();
	static class UFauna_Idle_AnimInterface_C* GetDefaultObj();

	void Fauna_IdleTurn(const struct FPoseLink& InPose_IdleTurn, struct FPoseLink* Fauna_IdleTurn);
	void Fauna_Idle(const struct FPoseLink& InPose_Idle, struct FPoseLink* Fauna_Idle);
};

}


