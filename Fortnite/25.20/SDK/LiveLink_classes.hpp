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

// 0x18 (0x40 - 0x28)
// Class LiveLink.LiveLinkBasicFrameInterpolationProcessor
class ULiveLinkBasicFrameInterpolationProcessor : public ULiveLinkFrameInterpolationProcessor
{
public:
	bool                                         bInterpolatePropertyValues;                        // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8646[0x17];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkBasicFrameInterpolationProcessor");
		return Clss;
	}

};

// 0x10 (0x50 - 0x40)
// Class LiveLink.LiveLinkAnimationFrameInterpolationProcessor
class ULiveLinkAnimationFrameInterpolationProcessor : public ULiveLinkBasicFrameInterpolationProcessor
{
public:
	uint8                                        Pad_8647[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkAnimationFrameInterpolationProcessor");
		return Clss;
	}

};

// 0x8 (0x160 - 0x158)
// Class LiveLink.LiveLinkAnimationVirtualSubject
class ULiveLinkAnimationVirtualSubject : public ULiveLinkVirtualSubject
{
public:
	uint8                                        Pad_8648[0x1];                                     // Fixing Size After Last Property..
	bool                                         bAppendSubjectNameToBones;                         // 0x159(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8649[0x6];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkAnimationVirtualSubject");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class LiveLink.LiveLinkBlueprintLibrary
class ULiveLinkBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkBlueprintLibrary");
		return Clss;
	}

	void TransformNames(struct FSubjectFrameHandle& SubjectFrameHandle, TArray<class FName>* TransformNames);
	void TransformName(struct FLiveLinkTransform& LiveLinkTransform, class FName* Name);
	void SetLiveLinkSubjectEnabled(const struct FLiveLinkSubjectKey& SubjectKey, bool bEnabled);
	bool RemoveSource(struct FLiveLinkSourceHandle& SourceHandle);
	void ParentBoneSpaceTransform(struct FLiveLinkTransform& LiveLinkTransform, struct FTransform* Transform);
	int32 NumberOfTransforms(struct FSubjectFrameHandle& SubjectFrameHandle);
	bool IsSpecificLiveLinkSubjectEnabled(const struct FLiveLinkSubjectKey& SubjectKey, bool bForThisFrame);
	bool IsSourceStillValid(struct FLiveLinkSourceHandle& SourceHandle);
	bool IsLiveLinkSubjectEnabled(const struct FLiveLinkSubjectName& SubjectName);
	bool HasParent(struct FLiveLinkTransform& LiveLinkTransform);
	void GetTransformByName(struct FSubjectFrameHandle& SubjectFrameHandle, class FName TransformName, struct FLiveLinkTransform* LiveLinkTransform);
	void GetTransformByIndex(struct FSubjectFrameHandle& SubjectFrameHandle, int32 TransformIndex, struct FLiveLinkTransform* LiveLinkTransform);
	TSubclassOf<class ULiveLinkRole> GetSpecificLiveLinkSubjectRole(const struct FLiveLinkSubjectKey& SubjectKey);
	class FText GetSourceTypeFromGuid(const struct FGuid& SourceGuid);
	class FText GetSourceType(struct FLiveLinkSourceHandle& SourceHandle);
	class FText GetSourceStatus(struct FLiveLinkSourceHandle& SourceHandle);
	class FText GetSourceMachineName(struct FLiveLinkSourceHandle& SourceHandle);
	void GetRootTransform(struct FSubjectFrameHandle& SubjectFrameHandle, struct FLiveLinkTransform* LiveLinkTransform);
	bool GetPropertyValue(struct FLiveLinkBasicBlueprintData& BasicData, class FName PropertyName, float* Value);
	void GetParent(struct FLiveLinkTransform& LiveLinkTransform, struct FLiveLinkTransform* Parent);
	void GetMetadata(struct FSubjectFrameHandle& SubjectFrameHandle, struct FSubjectMetadata* MetaData);
	TArray<struct FLiveLinkSubjectKey> GetLiveLinkSubjects(bool bIncludeDisabledSubject, bool bIncludeVirtualSubject);
	TSubclassOf<class ULiveLinkRole> GetLiveLinkSubjectRole(const struct FLiveLinkSubjectName& SubjectName);
	TArray<struct FLiveLinkSubjectName> GetLiveLinkEnabledSubjectNames(bool bIncludeVirtualSubject);
	void GetCurves(struct FSubjectFrameHandle& SubjectFrameHandle, TMap<class FName, float>* Curves);
	void GetChildren(struct FLiveLinkTransform& LiveLinkTransform, TArray<struct FLiveLinkTransform>* Children);
	void GetBasicData(struct FSubjectFrameHandle& SubjectFrameHandle, struct FLiveLinkBasicBlueprintData* BasicBlueprintData);
	bool GetAnimationStaticData(struct FSubjectFrameHandle& SubjectFrameHandle, struct FLiveLinkSkeletonStaticData* AnimationStaticData);
	bool GetAnimationFrameData(struct FSubjectFrameHandle& SubjectFrameHandle, struct FLiveLinkAnimationFrameData* AnimationFrameData);
	bool EvaluateLiveLinkFrameWithSpecificRole(const struct FLiveLinkSubjectName& SubjectName, TSubclassOf<class ULiveLinkRole> Role, struct FLiveLinkBaseBlueprintData* OutBlueprintData);
	bool EvaluateLiveLinkFrameAtWorldTimeOffset(const struct FLiveLinkSubjectName& SubjectName, TSubclassOf<class ULiveLinkRole> Role, float WorldTimeOffset, struct FLiveLinkBaseBlueprintData* OutBlueprintData);
	bool EvaluateLiveLinkFrameAtSceneTime(const struct FLiveLinkSubjectName& SubjectName, TSubclassOf<class ULiveLinkRole> Role, const struct FTimecode& SceneTime, struct FLiveLinkBaseBlueprintData* OutBlueprintData);
	bool EvaluateLiveLinkFrame(const struct FLiveLinkSubjectRepresentation& SubjectRepresentation, struct FLiveLinkBaseBlueprintData* OutBlueprintData);
	void ComponentSpaceTransform(struct FLiveLinkTransform& LiveLinkTransform, struct FTransform* Transform);
	int32 ChildCount(struct FLiveLinkTransform& LiveLinkTransform);
};

// 0x20 (0xC0 - 0xA0)
// Class LiveLink.LiveLinkComponent
class ULiveLinkComponent : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            OnLiveLinkUpdated;                                 // 0xA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_8668[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkComponent");
		return Clss;
	}

	void GetSubjectDataAtWorldTime(class FName SubjectName, float WorldTime, bool* bSuccess, struct FSubjectFrameHandle* SubjectFrameHandle);
	void GetSubjectDataAtSceneTime(class FName SubjectName, struct FTimecode& SceneTime, bool* bSuccess, struct FSubjectFrameHandle* SubjectFrameHandle);
	void GetSubjectData(class FName SubjectName, bool* bSuccess, struct FSubjectFrameHandle* SubjectFrameHandle);
	void GetAvailableSubjectNames(TArray<class FName>* SubjectNames);
};

// 0x10 (0xB0 - 0xA0)
// Class LiveLink.LiveLinkDrivenComponent
class ULiveLinkDrivenComponent : public UActorComponent
{
public:
	struct FLiveLinkSubjectName                  SubjectName;                                       // 0xA0(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ActorTransformBone;                                // 0xA4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bModifyActorTransform;                             // 0xA8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetRelativeLocation;                              // 0xA9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8669[0x6];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkDrivenComponent");
		return Clss;
	}

};

// 0x58 (0x80 - 0x28)
// Class LiveLink.LiveLinkMessageBusFinder
class ULiveLinkMessageBusFinder : public UObject
{
public:
	uint8                                        Pad_866B[0x58];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkMessageBusFinder");
		return Clss;
	}

	void GetAvailableProviders(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, float Duration, TArray<struct FProviderPollResult>* AvailableProviders);
	class ULiveLinkMessageBusFinder* ConstructMessageBusFinder();
	void ConnectToProvider(struct FProviderPollResult& Provider, struct FLiveLinkSourceHandle* SourceHandle);
};

// 0x0 (0x28 - 0x28)
// Class LiveLink.LiveLinkMessageBusSourceFactory
class ULiveLinkMessageBusSourceFactory : public ULiveLinkSourceFactory
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkMessageBusSourceFactory");
		return Clss;
	}

};

// 0x0 (0xA8 - 0xA8)
// Class LiveLink.LiveLinkMessageBusSourceSettings
class ULiveLinkMessageBusSourceSettings : public ULiveLinkSourceSettings
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkMessageBusSourceSettings");
		return Clss;
	}

};

// 0x28 (0x50 - 0x28)
// Class LiveLink.LiveLinkPreset
class ULiveLinkPreset : public UObject
{
public:
	TArray<struct FLiveLinkSourcePreset>         Sources;                                           // 0x28(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate)
	TArray<struct FLiveLinkSubjectPreset>        Subjects;                                          // 0x38(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate)
	uint8                                        Pad_866C[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkPreset");
		return Clss;
	}

	void BuildFromClient();
	void ApplyToClientLatent(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo);
	bool ApplyToClient();
	bool AddToClient(bool bRecreatePresets);
};

// 0x10 (0x38 - 0x28)
// Class LiveLink.LiveLinkUserSettings
class ULiveLinkUserSettings : public UObject
{
public:
	struct FDirectoryPath                        PresetSaveDir;                                     // 0x28(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkUserSettings");
		return Clss;
	}

};

// 0x98 (0xC0 - 0x28)
// Class LiveLink.LiveLinkSettings
class ULiveLinkSettings : public UObject
{
public:
	TArray<struct FLiveLinkRoleProjectSetting>   DefaultRoleSettings;                               // 0x28(0x10)(Edit, ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class ULiveLinkFrameInterpolationProcessor> FrameInterpolationProcessor;                       // 0x38(0x8)(ZeroConstructor, Config, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class ULiveLinkPreset>        DefaultLiveLinkPreset;                             // 0x40(0x28)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ClockOffsetCorrectionStep;                         // 0x68(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELiveLinkSourceMode               DefaultMessageBusSourceMode;                       // 0x6C(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_866D[0x3];                                     // Fixing Size After Last Property..
	double                                       MessageBusPingRequestFrequency;                    // 0x70(0x8)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       MessageBusHeartbeatFrequency;                      // 0x78(0x8)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       MessageBusHeartbeatTimeout;                        // 0x80(0x8)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       MessageBusTimeBeforeRemovingInactiveSource;        // 0x88(0x8)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       TimeWithoutFrameToBeConsiderAsInvalid;             // 0x90(0x8)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ValidColor;                                        // 0x98(0x10)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          InvalidColor;                                      // 0xA8(0x10)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        TextSizeSource;                                    // 0xB8(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        TextSizeSubject;                                   // 0xB9(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_866E[0x6];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkSettings");
		return Clss;
	}

};

// 0x90 (0xC0 - 0x30)
// Class LiveLink.LiveLinkTimecodeProvider
class ULiveLinkTimecodeProvider : public UTimecodeProvider
{
public:
	struct FLiveLinkSubjectKey                   SubjectKey;                                        // 0x30(0x14)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ELiveLinkTimecodeProviderEvaluationType Evaluation;                                        // 0x44(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bOverrideFrameRate;                                // 0x48(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_866F[0x3];                                     // Fixing Size After Last Property..
	struct FFrameRate                            OverrideFrameRate;                                 // 0x4C(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        BufferSize;                                        // 0x54(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8670[0x68];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkTimecodeProvider");
		return Clss;
	}

};

// 0x50 (0x80 - 0x30)
// Class LiveLink.LiveLinkTimeSynchronizationSource
class ULiveLinkTimeSynchronizationSource : public UTimeSynchronizationSource
{
public:
	struct FLiveLinkSubjectName                  SubjectName;                                       // 0x30(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8671[0x4C];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkTimeSynchronizationSource");
		return Clss;
	}

};

// 0x8 (0xB0 - 0xA8)
// Class LiveLink.LiveLinkVirtualSubjectSourceSettings
class ULiveLinkVirtualSubjectSourceSettings : public ULiveLinkSourceSettings
{
public:
	class FName                                  SourceName;                                        // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8672[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkVirtualSubjectSourceSettings");
		return Clss;
	}

};

// 0x48 (0x70 - 0x28)
// Class LiveLink.LiveLinkTransformAxisSwitchPreProcessor
class ULiveLinkTransformAxisSwitchPreProcessor : public ULiveLinkFramePreProcessor
{
public:
	enum class ELiveLinkAxis                     FrontAxis;                                         // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ELiveLinkAxis                     RightAxis;                                         // 0x29(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ELiveLinkAxis                     UpAxis;                                            // 0x2A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUseOffsetPosition;                                // 0x2B(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUseOffsetOrientation;                             // 0x2C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8673[0x3];                                     // Fixing Size After Last Property..
	struct FVector                               OffsetPosition;                                    // 0x30(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRotator                              OffsetOrientation;                                 // 0x48(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_8674[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkTransformAxisSwitchPreProcessor");
		return Clss;
	}

};

// 0x0 (0x70 - 0x70)
// Class LiveLink.LiveLinkAnimationAxisSwitchPreProcessor
class ULiveLinkAnimationAxisSwitchPreProcessor : public ULiveLinkTransformAxisSwitchPreProcessor
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkAnimationAxisSwitchPreProcessor");
		return Clss;
	}

};

// 0x18 (0x40 - 0x28)
// Class LiveLink.LiveLinkAnimationRoleToTransform
class ULiveLinkAnimationRoleToTransform : public ULiveLinkFrameTranslator
{
public:
	class FName                                  BoneName;                                          // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8675[0x14];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkAnimationRoleToTransform");
		return Clss;
	}

};

// 0x28 (0x180 - 0x158)
// Class LiveLink.LiveLinkBlueprintVirtualSubject
class ULiveLinkBlueprintVirtualSubject : public ULiveLinkVirtualSubject
{
public:
	uint8                                        Pad_8678[0x28];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkBlueprintVirtualSubject");
		return Clss;
	}

	bool UpdateVirtualSubjectStaticData_Internal(struct FLiveLinkBaseStaticData& InStruct);
	bool UpdateVirtualSubjectFrameData_Internal(struct FLiveLinkBaseFrameData& InStruct, bool bInShouldStampCurrentTime);
	void OnUpdate();
	void OnInitialize();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
