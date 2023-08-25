#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass InterfacePlayerPawn.InterfacePlayerPawn_C
class UInterfacePlayerPawn_C : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UInterfacePlayerPawn_C* GetDefaultObj();

	void MeleeSwingLeft_End();
	void MeleeSwingRight_End();
	void FootStepRight();
	void FootStepLeft();
	void Melee_Effect_Color(struct FVector* Melee_Color_Set);
	void MeleeSwingLeft(bool First_Left);
	void MeleeSwingRight(bool First_Right);
};

}


