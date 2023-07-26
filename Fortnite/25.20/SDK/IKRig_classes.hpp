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

// 0x0 (0x28 - 0x28)
// Class IKRig.IKGoalCreatorInterface
class UIKGoalCreatorInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("IKGoalCreatorInterface");
		return Clss;
	}

	void AddIKGoals(TMap<class FName, struct FIKRigGoal>* OutGoals);
};

// 0x18 (0xB8 - 0xA0)
// Class IKRig.IKRigComponent
class UIKRigComponent : public UActorComponent
{
public:
	uint8                                        Pad_4463[0x18];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("IKRigComponent");
		return Clss;
	}

	void SetIKRigGoalTransform(class FName GoalName, const struct FTransform& Transform, float PositionAlpha, float RotationAlpha);
	void SetIKRigGoalPositionAndRotation(class FName GoalName, const struct FVector& Position, const struct FQuat& Rotation, float PositionAlpha, float RotationAlpha);
	void SetIKRigGoal(struct FIKRigGoal& Goal);
	void ClearAllGoals();
};

// 0xD8 (0x100 - 0x28)
// Class IKRig.IKRigEffectorGoal
class UIKRigEffectorGoal : public UObject
{
public:
	class FName                                  GoalName;                                          // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PositionAlpha;                                     // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotationAlpha;                                     // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4464[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            CurrentTransform;                                  // 0x40(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            InitialTransform;                                  // 0xA0(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("IKRigEffectorGoal");
		return Clss;
	}

};

// 0xD8 (0x100 - 0x28)
// Class IKRig.IKRigDefinition
class UIKRigDefinition : public UObject
{
public:
	uint8                                        Pad_4465[0x8];                                     // Fixing Size After Last Property..
	TSoftObjectPtr<class USkeletalMesh>          PreviewSkeletalMesh;                               // 0x30(0x28)(Edit, AssetRegistrySearchable, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIKRigSkeleton                        Skeleton;                                          // 0x58(0x70)(NativeAccessSpecifierPrivate)
	TArray<class UIKRigEffectorGoal*>            Goals;                                             // 0xC8(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UIKRigSolver*>                  Solvers;                                           // 0xD8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FRetargetDefinition                   RetargetDefinition;                                // 0xE8(0x18)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("IKRigDefinition");
		return Clss;
	}

};

// 0x120 (0x148 - 0x28)
// Class IKRig.IKRigProcessor
class UIKRigProcessor : public UObject
{
public:
	uint8                                        Pad_4466[0x38];                                    // Fixing Size After Last Property..
	TArray<class UIKRigSolver*>                  Solvers;                                           // 0x60(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4467[0xD8];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("IKRigProcessor");
		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class IKRig.IKRigSolver
class UIKRigSolver : public UObject
{
public:
	bool                                         bIsEnabled;                                        // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4468[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("IKRigSolver");
		return Clss;
	}

};

// 0xB0 (0xD8 - 0x28)
// Class IKRig.RetargetChainSettings
class URetargetChainSettings : public UObject
{
public:
	class FName                                  SourceChain;                                       // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TargetChain;                                       // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTargetChainSettings                  Settings;                                          // 0x30(0xA8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RetargetChainSettings");
		return Clss;
	}

};

// 0x68 (0x90 - 0x28)
// Class IKRig.RetargetRootSettings
class URetargetRootSettings : public UObject
{
public:
	struct FTargetRootSettings                   Settings;                                          // 0x28(0x68)(Edit, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RetargetRootSettings");
		return Clss;
	}

};

// 0x20 (0x48 - 0x28)
// Class IKRig.IKRetargetGlobalSettings
class UIKRetargetGlobalSettings : public UObject
{
public:
	struct FRetargetGlobalSettings               Settings;                                          // 0x28(0x1C)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_4469[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("IKRetargetGlobalSettings");
		return Clss;
	}

};

// 0x1D8 (0x200 - 0x28)
// Class IKRig.IKRetargeter
class UIKRetargeter : public UObject
{
public:
	TSoftObjectPtr<class UIKRigDefinition>       SourceIKRigAsset;                                  // 0x28(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UIKRigDefinition>       TargetIKRigAsset;                                  // 0x50(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FRetargetChainMap>             ChainMapping;                                      // 0x78(0x10)(ZeroConstructor, Deprecated, NativeAccessSpecifierPrivate)
	TArray<class URetargetChainSettings*>        ChainSettings;                                     // 0x88(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	class URetargetRootSettings*                 RootSettings;                                      // 0x98(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UIKRetargetGlobalSettings*             GlobalSettings;                                    // 0xA0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class FName, struct FRetargetProfile>   Profiles;                                          // 0xA8(0x50)(NativeAccessSpecifierPrivate)
	class FName                                  CurrentProfile;                                    // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4472[0x4];                                     // Fixing Size After Last Property..
	TMap<class FName, struct FIKRetargetPose>    SourceRetargetPoses;                               // 0x100(0x50)(NativeAccessSpecifierPrivate)
	TMap<class FName, struct FIKRetargetPose>    TargetRetargetPoses;                               // 0x150(0x50)(NativeAccessSpecifierPrivate)
	class FName                                  CurrentSourceRetargetPose;                         // 0x1A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  CurrentTargetRetargetPose;                         // 0x1A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class FName, struct FIKRetargetPose>    RetargetPoses;                                     // 0x1A8(0x50)(Deprecated, NativeAccessSpecifierPrivate)
	class FName                                  CurrentRetargetPose;                               // 0x1F8(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4473[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("IKRetargeter");
		return Clss;
	}

	void SetRootSettingsInRetargetProfile(struct FRetargetProfile& RetargetProfile, struct FTargetRootSettings& RootSettings);
	void SetGlobalSettingsInRetargetProfile(struct FRetargetProfile& RetargetProfile, struct FRetargetGlobalSettings& GlobalSettings);
	void SetChainSpeedPlantSettingsInRetargetProfile(struct FRetargetProfile& RetargetProfile, struct FTargetChainSpeedPlantSettings& SpeedPlantSettings, class FName TargetChainName);
	void SetChainSettingsInRetargetProfile(struct FRetargetProfile& RetargetProfile, struct FTargetChainSettings& ChainSettings, class FName TargetChainName);
	void SetChainIKSettingsInRetargetProfile(struct FRetargetProfile& RetargetProfile, struct FTargetChainIKSettings& IKSettings, class FName TargetChainName);
	void SetChainFKSettingsInRetargetProfile(struct FRetargetProfile& RetargetProfile, struct FTargetChainFKSettings& FKSettings, class FName TargetChainName);
	struct FTargetRootSettings GetRootSettingsFromRetargetProfile(struct FRetargetProfile& RetargetProfile);
	void GetRootSettingsFromRetargetAsset(class UIKRetargeter* RetargetAsset, class FName OptionalProfileName, struct FTargetRootSettings* OutSettings);
	struct FRetargetGlobalSettings GetGlobalSettingsFromRetargetProfile(struct FRetargetProfile& RetargetProfile);
	void GetGlobalSettingsFromRetargetAsset(class UIKRetargeter* RetargetAsset, class FName OptionalProfileName, struct FRetargetGlobalSettings* OutSettings);
	struct FTargetChainSettings GetChainUsingGoalFromRetargetAsset(class UIKRetargeter* RetargetAsset, class FName IKGoalName);
	struct FTargetChainSettings GetChainSettingsFromRetargetProfile(struct FRetargetProfile& RetargetProfile, class FName TargetChainName);
	struct FTargetChainSettings GetChainSettingsFromRetargetAsset(class UIKRetargeter* RetargetAsset, class FName TargetChainName, class FName OptionalProfileName);
};

// 0x338 (0x360 - 0x28)
// Class IKRig.IKRetargetProcessor
class UIKRetargetProcessor : public UObject
{
public:
	uint8                                        Pad_4474[0x148];                                   // Fixing Size After Last Property..
	class UIKRigProcessor*                       IKRigProcessor;                                    // 0x170(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4475[0x1E8];                                   // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("IKRetargetProcessor");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class IKRig.IKRig_BodyMoverEffector
class UIKRig_BodyMoverEffector : public UObject
{
public:
	class FName                                  GoalName;                                          // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InfluenceMultiplier;                               // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4476[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("IKRig_BodyMoverEffector");
		return Clss;
	}

};

// 0x48 (0x78 - 0x30)
// Class IKRig.IKRig_BodyMover
class UIKRig_BodyMover : public UIKRigSolver
{
public:
	class FName                                  RootBone;                                          // 0x30(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PositionAlpha;                                     // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PositionPositiveX;                                 // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PositionNegativeX;                                 // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PositionPositiveY;                                 // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PositionNegativeY;                                 // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PositionPositiveZ;                                 // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PositionNegativeZ;                                 // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotationAlpha;                                     // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotateXAlpha;                                      // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotateYAlpha;                                      // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotateZAlpha;                                      // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UIKRig_BodyMoverEffector*>      Effectors;                                         // 0x60(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_4477[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("IKRig_BodyMover");
		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class IKRig.IKRig_LimbEffector
class UIKRig_LimbEffector : public UObject
{
public:
	class FName                                  GoalName;                                          // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("IKRig_LimbEffector");
		return Clss;
	}

};

// 0x58 (0x88 - 0x30)
// Class IKRig.IKRig_LimbSolver
class UIKRig_LimbSolver : public UIKRigSolver
{
public:
	class FName                                  RootName;                                          // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReachPrecision;                                    // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             HingeRotationAxis;                                 // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4478[0x3];                                     // Fixing Size After Last Property..
	int32                                        MaxIterations;                                     // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableLimit;                                      // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4479[0x3];                                     // Fixing Size After Last Property..
	float                                        MinRotationAngle;                                  // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAveragePull;                                      // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_447A[0x3];                                     // Fixing Size After Last Property..
	float                                        PullDistribution;                                  // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReachStepAlpha;                                    // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableTwistCorrection;                            // 0x54(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             EndBoneForwardAxis;                                // 0x55(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_447B[0x2];                                     // Fixing Size After Last Property..
	class UIKRig_LimbEffector*                   Effector;                                          // 0x58(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_447C[0x28];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("IKRig_LimbSolver");
		return Clss;
	}

};

// 0x18 (0x40 - 0x28)
// Class IKRig.IKRig_FBIKEffector
class UIKRig_FBIKEffector : public UObject
{
public:
	class FName                                  GoalName;                                          // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StrengthAlpha;                                     // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PullChainAlpha;                                    // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PinRotation;                                       // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IndexInSolver;                                     // 0x3C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("IKRig_FBIKEffector");
		return Clss;
	}

};

// 0x50 (0x78 - 0x28)
// Class IKRig.IKRig_FBIKBoneSettings
class UIKRig_FBIKBoneSettings : public UObject
{
public:
	class FName                                  bone;                                              // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotationStiffness;                                 // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PositionStiffness;                                 // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPBIKLimitType                    X;                                                 // 0x34(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_447D[0x3];                                     // Fixing Size After Last Property..
	float                                        MinX;                                              // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxX;                                              // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPBIKLimitType                    Y;                                                 // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_447E[0x3];                                     // Fixing Size After Last Property..
	float                                        MinY;                                              // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxY;                                              // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPBIKLimitType                    Z;                                                 // 0x4C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_447F[0x3];                                     // Fixing Size After Last Property..
	float                                        MinZ;                                              // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxZ;                                              // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUsePreferredAngles;                               // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4480[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               PreferredAngles;                                   // 0x60(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("IKRig_FBIKBoneSettings");
		return Clss;
	}

};

// 0xC8 (0xF8 - 0x30)
// Class IKRig.IKRigFBIKSolver
class UIKRigFBIKSolver : public UIKRigSolver
{
public:
	class FName                                  RootBone;                                          // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Iterations;                                        // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MassMultiplier;                                    // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowStretch;                                     // 0x3C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPBIKRootBehavior                 RootBehavior;                                      // 0x3D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4481[0x2];                                     // Fixing Size After Last Property..
	struct FRootPrePullSettings                  PrePullRootSettings;                               // 0x40(0x20)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        PullChainAlpha;                                    // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxAngle;                                          // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OverRelaxation;                                    // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStartSolveFromInputPose;                          // 0x6C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4482[0x3];                                     // Fixing Size After Last Property..
	TArray<class UIKRig_FBIKEffector*>           Effectors;                                         // 0x70(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UIKRig_FBIKBoneSettings*>       BoneSettings;                                      // 0x80(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_4483[0x68];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("IKRigFBIKSolver");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class IKRig.IKRig_PoleSolverEffector
class UIKRig_PoleSolverEffector : public UObject
{
public:
	class FName                                  GoalName;                                          // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4484[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("IKRig_PoleSolverEffector");
		return Clss;
	}

};

// 0x30 (0x60 - 0x30)
// Class IKRig.IKRig_PoleSolver
class UIKRig_PoleSolver : public UIKRigSolver
{
public:
	class FName                                  RootName;                                          // 0x30(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EndName;                                           // 0x34(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UIKRig_PoleSolverEffector*             Effector;                                          // 0x38(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4485[0x20];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("IKRig_PoleSolver");
		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class IKRig.IKRig_SetTransformEffector
class UIKRig_SetTransformEffector : public UObject
{
public:
	bool                                         bEnablePosition;                                   // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableRotation;                                   // 0x29(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4486[0x2];                                     // Fixing Size After Last Property..
	float                                        Alpha;                                             // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("IKRig_SetTransformEffector");
		return Clss;
	}

};

// 0x18 (0x48 - 0x30)
// Class IKRig.IKRig_SetTransform
class UIKRig_SetTransform : public UIKRigSolver
{
public:
	class FName                                  Goal;                                              // 0x30(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RootBone;                                          // 0x34(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UIKRig_SetTransformEffector*           Effector;                                          // 0x38(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4487[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("IKRig_SetTransform");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
