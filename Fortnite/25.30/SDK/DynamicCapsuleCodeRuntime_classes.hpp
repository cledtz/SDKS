#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

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
	uint8                                        Pad_4EE7[0x30];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DynamicCapsuleComponent");
		return Clss;
	}

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
	uint8                                        Pad_4EEB[0x3];                                     // Fixing Size After Last Property
	float                                        TargetRelativeMeshHeight;                          // 0x3C(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          CapsuleSizeTag;                                    // 0x40(0x4)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4EEC[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AnimNotifyState_SetCapsuleSize");
		return Clss;
	}

};

// 0x8 (0xB0 - 0xA8)
// Class DynamicCapsuleCodeRuntime.JumpSlideComponent
class UJumpSlideComponent : public UFortPawnComponent
{
public:
	uint8                                        Pad_4EFC[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("JumpSlideComponent");
		return Clss;
	}

	void OnMovementModeChange(class UCharacter* Character, enum class EMovementMode PrevMovementMode, uint8 PreviousCustomMode);
	void OnJumpSlideStart();
	void OnJumpSlideEnd();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
