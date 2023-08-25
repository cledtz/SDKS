#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0xF8 - 0xA8)
// Class DynamicCapsuleCodeRuntime.DynamicCapsuleComponent
class UDynamicCapsuleComponent : public UFortPawnComponent
{
public:
	TArray<struct FDynamicCapsuleEntry>          DynamicCapsuleEntryStack;                          // 0xA8(0x10)(Net, ZeroConstructor, Transient, RepNotify, NativeAccessSpecifierPrivate)
	struct FDynamicCapsuleState                  ReplicatedCapsuleState;                            // 0xB8(0x10)(Net, Transient, RepNotify, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_40CD[0x30];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UDynamicCapsuleComponent* GetDefaultObj();

	void ServerRemoveDynamicCapsule(struct FGameplayTag& Tag);
	void ServerApplyDynamicCapsule(struct FGameplayTag& Tag, float CapsuleRadius, float CapsuleHalfHeight, double NewRelativeMeshHeight);
	bool RemoveDynamicCapsule(struct FGameplayTag& Tag);
	void OnRep_ReplicatedCapsuleState();
	void OnRep_DynamicCapsuleEntryStack();
	bool ApplyDynamicCapsuleWithLocationAdjust(struct FGameplayTag& Tag, float CapsuleRadius, float CapsuleHalfHeight, double NewRelativeMeshHeight);
	bool ApplyDynamicCapsule(struct FGameplayTag& Tag, float CapsuleRadius, float CapsuleHalfHeight);
};

// 0x18 (0x48 - 0x30)
// Class DynamicCapsuleCodeRuntime.AnimNotifyState_SetCapsuleSize
class UAnimNotifyState_SetCapsuleSize : public UAnimNotifyState
{
public:
	float                                        TargetCapsuleRadius;                               // 0x30(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetCapsuleHalfHeight;                           // 0x34(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAdjustRelativeMeshHeight;                         // 0x38(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40D1[0x3];                                     // Fixing Size After Last Property 
	float                                        TargetRelativeMeshHeight;                          // 0x3C(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          CapsuleSizeTag;                                    // 0x40(0x4)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40D2[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAnimNotifyState_SetCapsuleSize* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class DynamicCapsuleCodeRuntime.JumpSlideComponent
class UJumpSlideComponent : public UFortPawnComponent
{
public:
	uint8                                        Pad_40D9[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UJumpSlideComponent* GetDefaultObj();

	void OnMovementModeChange(class UCharacter* Character, enum class EMovementMode PrevMovementMode, uint8 PreviousCustomMode);
	void OnJumpSlideStart();
	void OnJumpSlideEnd();
};

}


