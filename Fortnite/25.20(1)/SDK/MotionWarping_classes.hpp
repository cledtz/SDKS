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

// 0x8 (0x38 - 0x30)
// Class MotionWarping.AnimNotifyState_MotionWarping
class UAnimNotifyState_MotionWarping : public UAnimNotifyState
{
public:
	class URootMotionModifier*                   RootMotionModifier;                                // 0x30(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AnimNotifyState_MotionWarping");
		return Clss;
	}

	void OnWarpUpdate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);
	void OnWarpEnd(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);
	void OnWarpBegin(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);
	void OnRootMotionModifierUpdate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);
	void OnRootMotionModifierDeactivate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);
	void OnRootMotionModifierActivate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);
	class URootMotionModifier* AddRootMotionModifier(class UMotionWarpingComponent* MotionWarpingComp, class UAnimSequenceBase* Animation, float StartTime, float EndTime);
};

// 0x0 (0x28 - 0x28)
// Class MotionWarping.MotionWarpingUtilities
class UMotionWarpingUtilities : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MotionWarpingUtilities");
		return Clss;
	}

	void GetMotionWarpingWindowsFromAnimation(class UAnimSequenceBase* Animation, TArray<struct FMotionWarpingWindowData>* OutWindows);
	void GetMotionWarpingWindowsForWarpTargetFromAnimation(class UAnimSequenceBase* Animation, class FName WarpTargetName, TArray<struct FMotionWarpingWindowData>* OutWindows);
	struct FTransform ExtractRootMotionFromAnimation(class UAnimSequenceBase* Animation, float StartTime, float EndTime);
};

// 0x40 (0xE0 - 0xA0)
// Class MotionWarping.MotionWarpingComponent
class UMotionWarpingComponent : public UActorComponent
{
public:
	bool                                         bSearchForWindowsInAnimsWithinMontages;            // 0xA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_46B2[0x7];                                     // Fixing Size After Last Property..
	FMulticastInlineDelegateProperty_            OnPreUpdate;                                       // 0xA8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UCharacter>             CharacterOwner;                                    // 0xB8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class URootMotionModifier*>           Modifiers;                                         // 0xC0(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<struct FMotionWarpingTarget>          WarpTargets;                                       // 0xD0(0x10)(Net, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MotionWarpingComponent");
		return Clss;
	}

	int32 RemoveWarpTarget(class FName WarpTargetName);
	void DisableAllRootMotionModifiers();
	void AddOrUpdateWarpTargetFromTransform(class FName WarpTargetName, const struct FTransform& TargetTransform);
	void AddOrUpdateWarpTargetFromLocationAndRotation(class FName WarpTargetName, const struct FVector& TargetLocation, const struct FRotator& TargetRotation);
	void AddOrUpdateWarpTargetFromLocation(class FName WarpTargetName, const struct FVector& TargetLocation);
	void AddOrUpdateWarpTargetFromComponent(class FName WarpTargetName, class USceneComponent* Component, class FName BoneName, bool bFollowComponent);
	void AddOrUpdateWarpTarget(struct FMotionWarpingTarget& WarpTarget);
};

// 0xB8 (0xE0 - 0x28)
// Class MotionWarping.RootMotionModifier
class URootMotionModifier : public UObject
{
public:
	TWeakObjectPtr<class UAnimSequenceBase>      Animation;                                         // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartTime;                                         // 0x30(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EndTime;                                           // 0x34(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PreviousPosition;                                  // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentPosition;                                   // 0x3C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x40(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_46B3[0xC];                                     // Fixing Size After Last Property..
	struct FTransform                            StartTransform;                                    // 0x50(0x60)(BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ActualStartTime;                                   // 0xB0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnActivateDelegate;                                // 0xB4(0xC)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnUpdateDelegate;                                  // 0xC0(0xC)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnDeactivateDelegate;                              // 0xCC(0xC)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERootMotionModifierState          State;                                             // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_46B4[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RootMotionModifier");
		return Clss;
	}

};

// 0x160 (0x240 - 0xE0)
// Class MotionWarping.RootMotionModifier_Warp
class URootMotionModifier_Warp : public URootMotionModifier
{
public:
	class FName                                  WarpTargetName;                                    // 0xE0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWarpPointAnimProvider            WarpPointAnimProvider;                             // 0xE4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_46B5[0xB];                                     // Fixing Size After Last Property..
	struct FTransform                            WarpPointAnimTransform;                            // 0xF0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  WarpPointAnimBoneName;                             // 0x150(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWarpTranslation;                                  // 0x154(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreZAxis;                                      // 0x155(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAlphaBlendOption                 AddTranslationEasingFunc;                          // 0x156(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_46B6[0x1];                                     // Fixing Size After Last Property..
	class UCurveFloat*                           AddTranslationEasingCurve;                         // 0x158(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWarpRotation;                                     // 0x160(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMotionWarpRotationType           RotationType;                                      // 0x161(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMotionWarpRotationMethod         RotationMethod;                                    // 0x162(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_46B7[0x1];                                     // Fixing Size After Last Property..
	float                                        WarpRotationTimeMultiplier;                        // 0x164(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WarpMaxRotationRate;                               // 0x168(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_46B8[0x4];                                     // Fixing Size After Last Property..
	struct FTransform                            CachedTargetTransform;                             // 0x170(0x60)(IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_46B9[0x70];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RootMotionModifier_Warp");
		return Clss;
	}

};

// 0x0 (0x240 - 0x240)
// Class MotionWarping.RootMotionModifier_SimpleWarp
class URootMotionModifier_SimpleWarp : public URootMotionModifier_Warp
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RootMotionModifier_SimpleWarp");
		return Clss;
	}

};

// 0x20 (0x100 - 0xE0)
// Class MotionWarping.RootMotionModifier_Scale
class URootMotionModifier_Scale : public URootMotionModifier
{
public:
	struct FVector                               Scale;                                             // 0xE0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_46BA[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RootMotionModifier_Scale");
		return Clss;
	}

	class URootMotionModifier_Scale* AddRootMotionModifierScale(class UMotionWarpingComponent* InMotionWarpingComp, class UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, const struct FVector& InScale);
};

// 0x160 (0x3A0 - 0x240)
// Class MotionWarping.RootMotionModifier_AdjustmentBlendWarp
class URootMotionModifier_AdjustmentBlendWarp : public URootMotionModifier_Warp
{
public:
	bool                                         bWarpIKBones;                                      // 0x240(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_46BB[0x7];                                     // Fixing Size After Last Property..
	TArray<class FName>                          IKBones;                                           // 0x248(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_46BC[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            CachedMeshTransform;                               // 0x260(0x60)(IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FTransform                            CachedMeshRelativeTransform;                       // 0x2C0(0x60)(IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FTransform                            CachedRootMotion;                                  // 0x320(0x60)(IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FAnimSequenceTrackContainer           Result;                                            // 0x380(0x20)(Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RootMotionModifier_AdjustmentBlendWarp");
		return Clss;
	}

};

// 0x0 (0x240 - 0x240)
// Class MotionWarping.RootMotionModifier_SkewWarp
class URootMotionModifier_SkewWarp : public URootMotionModifier_Warp
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RootMotionModifier_SkewWarp");
		return Clss;
	}

	class URootMotionModifier_SkewWarp* AddRootMotionModifierSkewWarp(class UMotionWarpingComponent* InMotionWarpingComp, class UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, class FName InWarpTargetName, enum class EWarpPointAnimProvider InWarpPointAnimProvider, const struct FTransform& InWarpPointAnimTransform, class FName InWarpPointAnimBoneName, bool bInWarpTranslation, bool bInIgnoreZAxis, bool bInWarpRotation, enum class EMotionWarpRotationType InRotationType, enum class EMotionWarpRotationMethod InRotationMethod, float InWarpRotationTimeMultiplier, float InWarpMaxRotationRate);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
