#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x318 (0x340 - 0x28)
// Class ControlRig.RigHierarchy
class URigHierarchy : public UObject
{
public:
	uint8                                        Pad_2BDC[0x60];                                    // Fixing Size After Last Property
	uint16                                       TopologyVersion;                                   // 0x88(0x2)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint16                                       MetadataVersion;                                   // 0x8A(0x2)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint16                                       MetadataTagVersion;                                // 0x8C(0x2)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bEnableDirtyPropagation;                           // 0x8E(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2BDD[0x99];                                    // Fixing Size After Last Property
	int32                                        TransformStackIndex;                               // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2BDE[0x6C];                                    // Fixing Size After Last Property
	class URigHierarchyController*               HierarchyController;                               // 0x198(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2BDF[0x58];                                    // Fixing Size After Last Property
	TMap<struct FRigElementKey, struct FRigElementKey> PreviousNameMap;                                   // 0x1F8(0x50)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_2BE0[0x80];                                    // Fixing Size After Last Property
	class URigHierarchy*                         HierarchyForCacheValidation;                       // 0x2C8(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2BE1[0x70];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RigHierarchy");
		return Clss;
	}

	void UnsetCurveValueByIndex(int32 InElementIndex, bool bSetupUndo);
	void UnsetCurveValue(const struct FRigElementKey& InKey, bool bSetupUndo);
	bool SwitchToWorldSpace(const struct FRigElementKey& InChild, bool bInitial, bool bAffectChildren);
	bool SwitchToParent(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, bool bInitial, bool bAffectChildren);
	bool SwitchToDefaultParent(const struct FRigElementKey& InChild, bool bInitial, bool bAffectChildren);
	TArray<struct FRigElementKey> SortKeys(TArray<struct FRigElementKey>& InKeys);
	bool SetVectorMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FVector& InValue);
	bool SetVectorArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<struct FVector>& InValue);
	bool SetTransformMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FTransform& InValue);
	bool SetTransformArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<struct FTransform>& InValue);
	bool SetTag(const struct FRigElementKey& InItem, class FName InTag);
	bool SetRotatorMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FRotator& InValue);
	bool SetRotatorArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<struct FRotator>& InValue);
	bool SetRigElementKeyMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FRigElementKey& InValue);
	bool SetRigElementKeyArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<struct FRigElementKey>& InValue);
	bool SetQuatMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FQuat& InValue);
	bool SetQuatArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<struct FQuat>& InValue);
	void SetPose_ForBlueprint(const struct FRigPose& InPose);
	bool SetParentWeightArray(const struct FRigElementKey& InChild, const TArray<struct FRigElementWeight>& InWeights, bool bInitial, bool bAffectChildren);
	bool SetParentWeight(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, const struct FRigElementWeight& InWeight, bool bInitial, bool bAffectChildren);
	bool SetNameMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, class FName InValue);
	bool SetNameArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<class FName>& InValue);
	void SetLocalTransformByIndex(int32 InElementIndex, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands);
	void SetLocalTransform(const struct FRigElementKey& InKey, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands);
	bool SetLinearColorMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FLinearColor& InValue);
	bool SetLinearColorArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<struct FLinearColor>& InValue);
	bool SetInt32Metadata(const struct FRigElementKey& InItem, class FName InMetadataName, int32 InValue);
	bool SetInt32ArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<int32>& InValue);
	void SetGlobalTransformByIndex(int32 InElementIndex, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommand);
	void SetGlobalTransform(const struct FRigElementKey& InKey, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommand);
	bool SetFloatMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, float InValue);
	bool SetFloatArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<float>& InValue);
	void SetCurveValueByIndex(int32 InElementIndex, float InValue, bool bSetupUndo);
	void SetCurveValue(const struct FRigElementKey& InKey, float InValue, bool bSetupUndo);
	void SetControlVisibilityByIndex(int32 InElementIndex, bool bVisibility);
	void SetControlVisibility(const struct FRigElementKey& InKey, bool bVisibility);
	void SetControlValueByIndex(int32 InElementIndex, const struct FRigControlValue& InValue, enum class ERigControlValueType InValueType, bool bSetupUndo, bool bPrintPythonCommands);
	void SetControlValue(const struct FRigElementKey& InKey, const struct FRigControlValue& InValue, enum class ERigControlValueType InValueType, bool bSetupUndo, bool bPrintPythonCommands);
	void SetControlShapeTransformByIndex(int32 InElementIndex, const struct FTransform& InTransform, bool bInitial, bool bSetupUndo);
	void SetControlShapeTransform(const struct FRigElementKey& InKey, const struct FTransform& InTransform, bool bInitial, bool bSetupUndo);
	void SetControlSettingsByIndex(int32 InElementIndex, const struct FRigControlSettings& InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands);
	void SetControlSettings(const struct FRigElementKey& InKey, const struct FRigControlSettings& InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands);
	void SetControlPreferredRotatorByIndex(int32 InElementIndex, struct FRotator& InRotator, bool bInitial, bool bFixEulerFlips);
	void SetControlPreferredRotator(const struct FRigElementKey& InKey, struct FRotator& InRotator, bool bInitial, bool bFixEulerFlips);
	void SetControlPreferredRotationOrderByIndex(int32 InElementIndex, enum class EEulerRotationOrder InRotationOrder);
	void SetControlPreferredRotationOrder(const struct FRigElementKey& InKey, enum class EEulerRotationOrder InRotationOrder);
	void SetControlPreferredEulerAnglesByIndex(int32 InElementIndex, struct FVector& InEulerAngles, enum class EEulerRotationOrder InRotationOrder, bool bInitial, bool bFixEulerFlips);
	void SetControlPreferredEulerAngles(const struct FRigElementKey& InKey, struct FVector& InEulerAngles, enum class EEulerRotationOrder InRotationOrder, bool bInitial, bool bFixEulerFlips);
	void SetControlOffsetTransformByIndex(int32 InElementIndex, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands);
	void SetControlOffsetTransform(const struct FRigElementKey& InKey, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands);
	bool SetBoolMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, bool InValue);
	bool SetBoolArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<bool>& InValue);
	void SendAutoKeyEvent(const struct FRigElementKey& InElement, float InOffsetInSeconds, bool bAsynchronous);
	void ResetToDefault();
	void ResetPoseToInitial(enum class ERigElementType InTypeFilter);
	void ResetCurveValues();
	void Reset();
	bool RemoveMetadata(const struct FRigElementKey& InItem, class FName InMetadataName);
	bool RemoveAllMetadata(const struct FRigElementKey& InItem);
	int32 Num();
	struct FRigControlValue MakeControlValueFromVector2D(const struct FVector2D& InValue);
	struct FRigControlValue MakeControlValueFromVector(const struct FVector& InValue);
	struct FRigControlValue MakeControlValueFromTransformNoScale(const struct FTransformNoScale& InValue);
	struct FRigControlValue MakeControlValueFromTransform(const struct FTransform& InValue);
	struct FRigControlValue MakeControlValueFromRotator(const struct FRotator& InValue);
	struct FRigControlValue MakeControlValueFromInt(int32 InValue);
	struct FRigControlValue MakeControlValueFromFloat(float InValue);
	struct FRigControlValue MakeControlValueFromEulerTransform(const struct FEulerTransform& InValue);
	struct FRigControlValue MakeControlValueFromBool(bool InValue);
	bool IsValidIndex(int32 InElementIndex);
	bool IsSelectedByIndex(int32 InIndex);
	bool IsSelected(const struct FRigElementKey& InKey);
	bool IsProcedural(struct FRigElementKey& InKey);
	bool IsParentedTo(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent);
	bool IsCurveValueSetByIndex(int32 InElementIndex);
	bool IsCurveValueSet(const struct FRigElementKey& InKey);
	bool IsControllerAvailable();
	bool HasTag(const struct FRigElementKey& InItem, class FName InTag);
	struct FVector GetVectorMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FVector& DefaultValue);
	struct FVector GetVectorFromControlValue(const struct FRigControlValue& InValue);
	TArray<struct FVector> GetVectorArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName);
	struct FVector2D GetVector2DFromControlValue(const struct FRigControlValue& InValue);
	struct FTransformNoScale GetTransformNoScaleFromControlValue(const struct FRigControlValue& InValue);
	struct FTransform GetTransformMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FTransform& DefaultValue);
	struct FTransform GetTransformFromControlValue(const struct FRigControlValue& InValue);
	TArray<struct FTransform> GetTransformArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName);
	TArray<class FName> GetTags(const struct FRigElementKey& InItem);
	TArray<struct FRigElementKey> GetSelectedKeys(enum class ERigElementType InTypeFilter);
	struct FRotator GetRotatorMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FRotator& DefaultValue);
	struct FRotator GetRotatorFromControlValue(const struct FRigControlValue& InValue);
	TArray<struct FRotator> GetRotatorArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName);
	TArray<struct FRigElementKey> GetRootElementKeys();
	TArray<struct FRigElementKey> GetRigidBodyKeys(bool bTraverse);
	struct FRigElementKey GetRigElementKeyMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FRigElementKey& DefaultValue);
	TArray<struct FRigElementKey> GetRigElementKeyArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName);
	TArray<struct FRigElementKey> GetReferenceKeys(bool bTraverse);
	struct FQuat GetQuatMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FQuat& DefaultValue);
	TArray<struct FQuat> GetQuatArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName);
	struct FRigElementKey GetPreviousParent(struct FRigElementKey& InKey);
	class FName GetPreviousName(struct FRigElementKey& InKey);
	struct FRigPose GetPose(bool bInitial);
	TArray<struct FRigElementWeight> GetParentWeightArray(const struct FRigElementKey& InChild, bool bInitial);
	struct FRigElementWeight GetParentWeight(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, bool bInitial);
	struct FTransform GetParentTransformByIndex(int32 InElementIndex, bool bInitial);
	struct FTransform GetParentTransform(const struct FRigElementKey& InKey, bool bInitial);
	TArray<struct FRigElementKey> GetParents(const struct FRigElementKey& InKey, bool bRecursive);
	int32 GetNumberOfParents(const struct FRigElementKey& InKey);
	TArray<struct FRigElementKey> GetNullKeys(bool bTraverse);
	class FName GetNameMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, class FName DefaultValue);
	TArray<class FName> GetNameArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName);
	enum class ERigMetadataType GetMetadataType(const struct FRigElementKey& InItem, class FName InMetadataName);
	TArray<class FName> GetMetadataNames(const struct FRigElementKey& InItem);
	struct FTransform GetLocalTransformByIndex(int32 InElementIndex, bool bInitial);
	struct FTransform GetLocalTransform(const struct FRigElementKey& InKey, bool bInitial);
	int32 GetLocalIndex_ForBlueprint(const struct FRigElementKey& InKey);
	struct FTransform GetLocalControlShapeTransformByIndex(int32 InElementIndex, bool bInitial);
	struct FTransform GetLocalControlShapeTransform(const struct FRigElementKey& InKey, bool bInitial);
	struct FLinearColor GetLinearColorMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FLinearColor& DefaultValue);
	TArray<struct FLinearColor> GetLinearColorArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName);
	TArray<struct FRigElementKey> GetKeys(const TArray<int32>& InElementIndices);
	struct FRigElementKey GetKey(int32 InElementIndex);
	int32 GetIntFromControlValue(const struct FRigControlValue& InValue);
	int32 GetInt32Metadata(const struct FRigElementKey& InItem, class FName InMetadataName, int32 DefaultValue);
	TArray<int32> GetInt32ArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName);
	int32 GetIndex_ForBlueprint(const struct FRigElementKey& InKey);
	struct FTransform GetGlobalTransformByIndex(int32 InElementIndex, bool bInitial);
	struct FTransform GetGlobalTransform(const struct FRigElementKey& InKey, bool bInitial);
	struct FTransform GetGlobalControlShapeTransformByIndex(int32 InElementIndex, bool bInitial);
	struct FTransform GetGlobalControlShapeTransform(const struct FRigElementKey& InKey, bool bInitial);
	struct FTransform GetGlobalControlOffsetTransformByIndex(int32 InElementIndex, bool bInitial);
	struct FTransform GetGlobalControlOffsetTransform(const struct FRigElementKey& InKey, bool bInitial);
	float GetFloatMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, float DefaultValue);
	float GetFloatFromControlValue(const struct FRigControlValue& InValue);
	TArray<float> GetFloatArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName);
	struct FRigElementKey GetFirstParent(const struct FRigElementKey& InKey);
	struct FEulerTransform GetEulerTransformFromControlValue(const struct FRigControlValue& InValue);
	struct FRigElementKey GetDefaultParent(const struct FRigElementKey& InKey);
	float GetCurveValueByIndex(int32 InElementIndex);
	float GetCurveValue(const struct FRigElementKey& InKey);
	TArray<struct FRigElementKey> GetCurveKeys();
	struct FRigControlValue GetControlValueByIndex(int32 InElementIndex, enum class ERigControlValueType InValueType);
	struct FRigControlValue GetControlValue(const struct FRigElementKey& InKey, enum class ERigControlValueType InValueType);
	struct FRotator GetControlPreferredRotatorByIndex(int32 InElementIndex, bool bInitial);
	struct FRotator GetControlPreferredRotator(const struct FRigElementKey& InKey, bool bInitial);
	enum class EEulerRotationOrder GetControlPreferredEulerRotationOrderByIndex(int32 InElementIndex, bool bFromSettings);
	enum class EEulerRotationOrder GetControlPreferredEulerRotationOrder(const struct FRigElementKey& InKey, bool bFromSettings);
	struct FVector GetControlPreferredEulerAnglesByIndex(int32 InElementIndex, enum class EEulerRotationOrder InRotationOrder, bool bInitial);
	struct FVector GetControlPreferredEulerAngles(const struct FRigElementKey& InKey, enum class EEulerRotationOrder InRotationOrder, bool bInitial);
	class URigHierarchyController* GetController(bool bCreateIfNeeded);
	TArray<struct FRigElementKey> GetControlKeys(bool bTraverse);
	TArray<struct FRigElementKey> GetChildren(const struct FRigElementKey& InKey, bool bRecursive);
	bool GetBoolMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, bool DefaultValue);
	TArray<bool> GetBoolArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName);
	TArray<struct FRigElementKey> GetBoneKeys(bool bTraverse);
	TArray<struct FRigElementKey> GetAllKeys_ForBlueprint(bool bTraverse);
	struct FRigNullElement FindNull_ForBlueprintOnly(struct FRigElementKey& InKey);
	struct FRigControlElement FindControl_ForBlueprintOnly(struct FRigElementKey& InKey);
	struct FRigBoneElement FindBone_ForBlueprintOnly(struct FRigElementKey& InKey);
	void CopyPose(class URigHierarchy* InHierarchy, bool bCurrent, bool bInitial, bool bWeights, bool bMatchPoseInGlobalIfNeeded);
	void CopyHierarchy(class URigHierarchy* InHierarchy);
	bool Contains_ForBlueprint(const struct FRigElementKey& InKey);
};

// 0x30 (0x88 - 0x58)
// Class ControlRig.TransformableControlHandle
class UTransformableControlHandle : public UTransformableHandle
{
public:
	TSoftObjectPtr<class UControlRig>            ControlRig;                                        // 0x58(0x28)(BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ControlName;                                       // 0x80(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BEC[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TransformableControlHandle");
		return Clss;
	}

};

// 0x2D8 (0x458 - 0x180)
// Class ControlRig.ControlRig
class UControlRig : public URigVMHost
{
public:
	uint8                                        Pad_2BF2[0x8];                                     // Fixing Size After Last Property
	enum class ERigExecutionType                 ExecutionType;                                     // 0x188(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BF3[0x3];                                     // Fixing Size After Last Property
	struct FRigHierarchySettings                 HierarchySettings;                                 // 0x18C(0x4)(NoDestructor, NativeAccessSpecifierPublic)
	TMap<struct FRigElementKey, struct FRigControlElementCustomization> ControlCustomizations;                             // 0x190(0x50)(Protected, NativeAccessSpecifierProtected)
	class URigHierarchy*                         DynamicHierarchy;                                  // 0x1E0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<TSoftObjectPtr<class UControlRigShapeLibrary>> ShapeLibraries;                                    // 0x1E8(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TMap<class FString, class FString>           ShapeLibraryNameMap;                               // 0x1F8(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_2BF4[0x18];                                    // Fixing Size After Last Property
	class UAnimationDataSourceRegistry*          DataSourceRegistry;                                // 0x260(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2BF5[0x90];                                    // Fixing Size After Last Property
	struct FRigInfluenceMapPerEvent              Influences;                                        // 0x2F8(0x60)(NativeAccessSpecifierPrivate)
	class UControlRig*                           InteractionRig;                                    // 0x358(0x8)(BlueprintVisible, ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UControlRig>               InteractionRigClass;                               // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2BF6[0xD0];                                    // Fixing Size After Last Property
	FMulticastSparseDelegateProperty_            OnControlSelected_BP;                              // 0x438(0x1)(InstancedReference, BlueprintAssignable, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_2BF7[0x1F];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlRig");
		return Clss;
	}

	void SetInteractionRigClass(TSubclassOf<class UControlRig> InInteractionRigClass);
	void SetInteractionRig(class UControlRig* InInteractionRig);
	void SelectControl(class FName& InControlName, bool bSelect);
	void RequestConstruction();
	void OnControlSelectedBP__DelegateSignature(class UControlRig* Rig, struct FRigControlElement& Control, bool bSelected);
	bool IsControlSelected(class FName& InControlName);
	TSubclassOf<class UControlRig> GetInteractionRigClass();
	class UControlRig* GetInteractionRig();
	class UActor* GetHostingActor();
	class URigHierarchy* GetHierarchy();
	TArray<class UControlRig*> FindControlRigs(class UObject* Outer, TSubclassOf<class UControlRig> OptionalClass);
	TArray<class FName> CurrentControlSelection();
	class UTransformableControlHandle* CreateTransformableControlHandle(class UObject* Outer, class FName& ControlName);
	bool ClearControlSelection();
};

// 0x0 (0x350 - 0x350)
// Class ControlRig.ControlRigAnimInstance
class UControlRigAnimInstance : public UAnimInstance
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlRigAnimInstance");
		return Clss;
	}

};

// 0xD8 (0x100 - 0x28)
// Class ControlRig.NameSpacedUserData
class UNameSpacedUserData : public UAssetUserData
{
public:
	class FString                                Namespace;                                         // 0x28(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BF8[0xC8];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NameSpacedUserData");
		return Clss;
	}

};

// 0x8 (0x108 - 0x100)
// Class ControlRig.DataAssetLink
class UDataAssetLink : public UNameSpacedUserData
{
public:
	class UDataAsset*                            DataAsset;                                         // 0x100(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DataAssetLink");
		return Clss;
	}

	void SetDataAsset(class UDataAsset* InDataAsset);
	class UDataAsset* GetDataAsset();
};

// 0x18 (0x118 - 0x100)
// Class ControlRig.ControlRigShapeLibraryLink
class UControlRigShapeLibraryLink : public UNameSpacedUserData
{
public:
	class UControlRigShapeLibrary*               ShapeLibrary;                                      // 0x100(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          ShapeNames;                                        // 0x108(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlRigShapeLibraryLink");
		return Clss;
	}

	void SetShapeLibrary(class UControlRigShapeLibrary* InShapeLibrary);
	class UControlRigShapeLibrary* GetShapeLibrary();
};

// 0x0 (0x390 - 0x390)
// Class ControlRig.ControlRigBlueprintGeneratedClass
class UControlRigBlueprintGeneratedClass : public URigVMBlueprintGeneratedClass
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlRigBlueprintGeneratedClass");
		return Clss;
	}

};

// 0x168 (0x6D0 - 0x568)
// Class ControlRig.ControlRigComponent
class UControlRigComponent : public UPrimitiveComponent
{
public:
	TSubclassOf<class UControlRig>               ControlRigClass;                                   // 0x568(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPreInitializeDelegate;                           // 0x570(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPostInitializeDelegate;                          // 0x580(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPreConstructionDelegate;                         // 0x590(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPostConstructionDelegate;                        // 0x5A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPreForwardsSolveDelegate;                        // 0x5B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPostForwardsSolveDelegate;                       // 0x5C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct FControlRigComponentMappedElement> UserDefinedElements;                               // 0x5D0(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FControlRigComponentMappedElement> MappedElements;                                    // 0x5E0(0x10)(Edit, ZeroConstructor, EditConst, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bEnableLazyEvaluation;                             // 0x5F0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CBD[0x3];                                     // Fixing Size After Last Property
	float                                        LazyEvaluationPositionThreshold;                   // 0x5F4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LazyEvaluationRotationThreshold;                   // 0x5F8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LazyEvaluationScaleThreshold;                      // 0x5FC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bResetTransformBeforeTick;                         // 0x600(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bResetInitialsBeforeConstruction;                  // 0x601(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUpdateRigOnTick;                                  // 0x602(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUpdateInEditor;                                   // 0x603(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawBones;                                        // 0x604(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowDebugDrawing;                                 // 0x605(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CC0[0x2];                                     // Fixing Size After Last Property
	class UControlRig*                           ControlRig;                                        // 0x608(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2CC1[0xC0];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlRigComponent");
		return Clss;
	}

	void Update(float DeltaTime);
	void SetObjectBinding(class UObject* InObjectToBind);
	void SetMappedElements(const TArray<struct FControlRigComponentMappedElement>& NewMappedElements);
	void SetInitialSpaceTransform(class FName SpaceName, const struct FTransform& InitialTransform, enum class EControlRigComponentSpace Space);
	void SetInitialBoneTransform(class FName BoneName, const struct FTransform& InitialTransform, enum class EControlRigComponentSpace Space, bool bPropagateToChildren);
	void SetControlVector2D(class FName ControlName, const struct FVector2D& Value);
	void SetControlTransform(class FName ControlName, const struct FTransform& Value, enum class EControlRigComponentSpace Space);
	void SetControlScale(class FName ControlName, const struct FVector& Value, enum class EControlRigComponentSpace Space);
	void SetControlRotator(class FName ControlName, const struct FRotator& Value, enum class EControlRigComponentSpace Space);
	void SetControlRigClass(TSubclassOf<class UControlRig> InControlRigClass);
	void SetControlPosition(class FName ControlName, const struct FVector& Value, enum class EControlRigComponentSpace Space);
	void SetControlOffset(class FName ControlName, const struct FTransform& OffsetTransform, enum class EControlRigComponentSpace Space);
	void SetControlInt(class FName ControlName, int32 Value);
	void SetControlFloat(class FName ControlName, float Value);
	void SetControlBool(class FName ControlName, bool Value);
	void SetBoneTransform(class FName BoneName, const struct FTransform& Transform, enum class EControlRigComponentSpace Space, float Weight, bool bPropagateToChildren);
	void SetBoneInitialTransformsFromSkeletalMesh(class USkeletalMesh* InSkeletalMesh);
	void OnPreInitialize(class UControlRigComponent* Component);
	void OnPreForwardsSolve(class UControlRigComponent* Component);
	void OnPreConstruction(class UControlRigComponent* Component);
	void OnPostInitialize(class UControlRigComponent* Component);
	void OnPostForwardsSolve(class UControlRigComponent* Component);
	void OnPostConstruction(class UControlRigComponent* Component);
	void Initialize();
	struct FTransform GetSpaceTransform(class FName SpaceName, enum class EControlRigComponentSpace Space);
	struct FTransform GetInitialSpaceTransform(class FName SpaceName, enum class EControlRigComponentSpace Space);
	struct FTransform GetInitialBoneTransform(class FName BoneName, enum class EControlRigComponentSpace Space);
	TArray<class FName> GetElementNames(enum class ERigElementType ElementType);
	struct FVector2D GetControlVector2D(class FName ControlName);
	struct FTransform GetControlTransform(class FName ControlName, enum class EControlRigComponentSpace Space);
	struct FVector GetControlScale(class FName ControlName, enum class EControlRigComponentSpace Space);
	struct FRotator GetControlRotator(class FName ControlName, enum class EControlRigComponentSpace Space);
	class UControlRig* GetControlRig();
	struct FVector GetControlPosition(class FName ControlName, enum class EControlRigComponentSpace Space);
	struct FTransform GetControlOffset(class FName ControlName, enum class EControlRigComponentSpace Space);
	int32 GetControlInt(class FName ControlName);
	float GetControlFloat(class FName ControlName);
	bool GetControlBool(class FName ControlName);
	struct FTransform GetBoneTransform(class FName BoneName, enum class EControlRigComponentSpace Space);
	float GetAbsoluteTime();
	bool DoesElementExist(class FName Name, enum class ERigElementType ElementType);
	void ClearMappedElements();
	bool CanExecute();
	void AddMappedSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent, const TArray<struct FControlRigComponentMappedBone>& Bones, const TArray<struct FControlRigComponentMappedCurve>& Curves);
	void AddMappedElements(const TArray<struct FControlRigComponentMappedElement>& NewMappedElements);
	void AddMappedComponents(const TArray<struct FControlRigComponentMappedComponent>& Components);
	void AddMappedCompleteSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent);
};

// 0xB0 (0x340 - 0x290)
// Class ControlRig.ControlRigControlActor
class UControlRigControlActor : public UActor
{
public:
	class UActor*                                ActorToTrack;                                      // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, Interp, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UControlRig>               ControlRigClass;                                   // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, Interp, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRefreshOnTick;                                    // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsSelectable;                                     // 0x2A1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CC9[0x6];                                     // Fixing Size After Last Property
	class UMaterialInterface*                    MaterialOverride;                                  // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, Interp, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ColorParameter;                                    // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, Interp, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCastShadows;                                      // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CCB[0x7];                                     // Fixing Size After Last Property
	class USceneComponent*                       ActorRootComponent;                                // 0x2C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UControlRig>            ControlRig;                                        // 0x2D0(0x28)(Transient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class FName>                          ControlNames;                                      // 0x2F8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<struct FTransform>                    ShapeTransforms;                                   // 0x308(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<class UStaticMeshComponent*>          Components;                                        // 0x318(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UMaterialInstanceDynamic*>      Materials;                                         // 0x328(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	class FName                                  ColorParameterName;                                // 0x338(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2CCC[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlRigControlActor");
		return Clss;
	}

	void ResetControlActor();
	void Refresh();
	void Clear();
};

// 0x40 (0x2D0 - 0x290)
// Class ControlRig.ControlRigShapeActor
class UControlRigShapeActor : public UActor
{
public:
	class USceneComponent*                       ActorRootComponent;                                // 0x290(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                  StaticMeshComponent;                               // 0x298(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       ControlRigIndex;                                   // 0x2A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UControlRig>            ControlRig;                                        // 0x2A4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ControlName;                                       // 0x2AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ShapeName;                                         // 0x2B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ColorParameterName;                                // 0x2B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CDA[0x10];                                    // Fixing Size After Last Property
	uint8                                        bSelected : 1;                                     // Mask: 0x1, PropSize: 0x10x2C8(0x1)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bHovered : 1;                                      // Mask: 0x2, PropSize: 0x10x2C8(0x1)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2CDB[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlRigShapeActor");
		return Clss;
	}

	void SetSelected(bool bInSelected);
	void SetSelectable(bool bInSelectable);
	void SetHovered(bool bInHovered);
	void SetGlobalTransform(struct FTransform& InTransform);
	void SetEnabled(bool bInEnabled);
	void OnTransformChanged(struct FTransform& NewTransform);
	void OnSelectionChanged(bool bIsSelected);
	void OnManipulatingChanged(bool bIsManipulating);
	void OnHoveredChanged(bool bIsSelected);
	void OnEnabledChanged(bool bIsEnabled);
	bool IsSelectedInEditor();
	bool IsHovered();
	bool IsEnabled();
	struct FTransform GetGlobalTransform();
};

// 0x128 (0x150 - 0x28)
// Class ControlRig.ControlRigShapeLibrary
class UControlRigShapeLibrary : public UObject
{
public:
	uint8                                        Pad_2CDD[0x8];                                     // Fixing Size After Last Property
	struct FControlRigShapeDefinition            DefaultShape;                                      // 0x30(0xA0)(Edit, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterial>              DefaultMaterial;                                   // 0xD0(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterial>              XRayMaterial;                                      // 0xF8(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  MaterialColorParameter;                            // 0x120(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CDE[0x4];                                     // Fixing Size After Last Property
	TArray<struct FControlRigShapeDefinition>    Shapes;                                            // 0x128(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CE0[0x18];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlRigShapeLibrary");
		return Clss;
	}

};

// 0x120 (0x148 - 0x28)
// Class ControlRig.ControlRigTestData
class UControlRigTestData : public UObject
{
public:
	struct FSoftObjectPath                       ControlRigObjectPath;                              // 0x28(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FControlRigTestDataFrame              Initial;                                           // 0x40(0x90)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FControlRigTestDataFrame>      InputFrames;                                       // 0xD0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FControlRigTestDataFrame>      OutputFrames;                                      // 0xE0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<int32>                                FramesToSkip;                                      // 0xF0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	double                                       Tolerance;                                         // 0x100(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D08[0x40];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlRigTestData");
		return Clss;
	}

	bool SetupReplay(class UControlRig* InControlRig, bool bGroundTruth);
	void ReleaseReplay();
	bool Record(class UControlRig* InControlRig, double InRecordingDuration);
	bool IsReplaying();
	bool IsRecording();
	struct FVector2D GetTimeRange(bool bInput);
	enum class EControlRigTestDataPlaybackMode GetPlaybackMode();
	int32 GetFrameIndexForTime(double InSeconds, bool bInput);
	class UControlRigTestData* CreateNewAsset(const class FString& InDesiredPackagePath, const class FString& InBlueprintPathName);
};

// 0x40 (0x68 - 0x28)
// Class ControlRig.ControlRigValidator
class UControlRigValidator : public UObject
{
public:
	TArray<class UControlRigValidationPass*>     Passes;                                            // 0x28(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2D0B[0x30];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlRigValidator");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class ControlRig.ControlRigValidationPass
class UControlRigValidationPass : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlRigValidationPass");
		return Clss;
	}

};

// 0x10 (0x468 - 0x458)
// Class ControlRig.AdditiveControlRig
class UAdditiveControlRig : public UControlRig
{
public:
	uint8                                        Pad_2D0D[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AdditiveControlRig");
		return Clss;
	}

};

// 0x40 (0x498 - 0x458)
// Class ControlRig.FKControlRig
class UFKControlRig : public UControlRig
{
public:
	TArray<bool>                                 IsControlActive;                                   // 0x458(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	enum class EControlRigFKRigExecuteMode       ApplyMode;                                         // 0x468(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2D0E[0x2F];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FKControlRig");
		return Clss;
	}

};

// 0x78 (0xA0 - 0x28)
// Class ControlRig.RigHierarchyController
class URigHierarchyController : public UObject
{
public:
	bool                                         bReportWarningsAndErrors;                          // 0x28(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DDD[0x3];                                     // Fixing Size After Last Property
	TWeakObjectPtr<class URigHierarchy>          Hierarchy;                                         // 0x2C(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2DDE[0x6C];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RigHierarchyController");
		return Clss;
	}

	bool SetSelection(TArray<struct FRigElementKey>& InKeys, bool bPrintPythonCommand);
	bool SetParent(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand);
	void SetHierarchy(class URigHierarchy* InHierarchy);
	class FName SetDisplayName(const struct FRigElementKey& InControl, class FName InDisplayName, bool bRenameElement, bool bSetupUndo, bool bPrintPythonCommand);
	bool SetControlSettings(const struct FRigElementKey& InKey, const struct FRigControlSettings& InSettings, bool bSetupUndo);
	bool SelectElement(const struct FRigElementKey& InKey, bool bSelect, bool bClearSelection);
	bool ReorderElement(const struct FRigElementKey& InElement, int32 InIndex, bool bSetupUndo, bool bPrintPythonCommand);
	struct FRigElementKey RenameElement(const struct FRigElementKey& InElement, class FName InName, bool bSetupUndo, bool bPrintPythonCommand, bool bClearSelection);
	bool RemoveParent(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand);
	bool RemoveElement(const struct FRigElementKey& InElement, bool bSetupUndo, bool bPrintPythonCommand);
	bool RemoveAllParents(const struct FRigElementKey& InChild, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand);
	TArray<struct FRigElementKey> MirrorElements(const TArray<struct FRigElementKey>& InKeys, const struct FRigVMMirrorSettings& InSettings, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands);
	TArray<struct FRigElementKey> ImportFromText(const class FString& InContent, bool bReplaceExistingElements, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands);
	TArray<struct FRigElementKey> ImportCurves(class USkeleton* InSkeleton, class FName InNameSpace, bool bSelectCurves, bool bSetupUndo, bool bPrintPythonCommand);
	TArray<struct FRigElementKey> ImportBones(class USkeleton* InSkeleton, class FName InNameSpace, bool bReplaceExistingBones, bool bRemoveObsoleteBones, bool bSelectBones, bool bSetupUndo, bool bPrintPythonCommand);
	class URigHierarchy* GetHierarchy();
	struct FRigControlSettings GetControlSettings(const struct FRigElementKey& InKey);
	class FString ExportToText(const TArray<struct FRigElementKey>& InKeys);
	class FString ExportSelectionToText();
	TArray<struct FRigElementKey> DuplicateElements(const TArray<struct FRigElementKey>& InKeys, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands);
	bool DeselectElement(const struct FRigElementKey& InKey);
	bool ClearSelection();
	struct FRigElementKey AddRigidBody(class FName InName, const struct FRigElementKey& InParent, const struct FRigRigidBodySettings& InSettings, const struct FTransform& InLocalTransform, bool bSetupUndo, bool bPrintPythonCommand);
	bool AddParent(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, float InWeight, bool bMaintainGlobalTransform, bool bSetupUndo);
	struct FRigElementKey AddNull(class FName InName, const struct FRigElementKey& InParent, const struct FTransform& InTransform, bool bTransformInGlobal, bool bSetupUndo, bool bPrintPythonCommand);
	struct FRigElementKey AddCurve(class FName InName, float InValue, bool bSetupUndo, bool bPrintPythonCommand);
	struct FRigElementKey AddControl_ForBlueprint(class FName InName, const struct FRigElementKey& InParent, const struct FRigControlSettings& InSettings, const struct FRigControlValue& InValue, bool bSetupUndo, bool bPrintPythonCommand);
	struct FRigElementKey AddBone(class FName InName, const struct FRigElementKey& InParent, const struct FTransform& InTransform, bool bTransformInGlobal, enum class ERigBoneType InBoneType, bool bSetupUndo, bool bPrintPythonCommand);
	struct FRigElementKey AddAnimationChannel_ForBlueprint(class FName InName, const struct FRigElementKey& InParentControl, const struct FRigControlSettings& InSettings, bool bSetupUndo, bool bPrintPythonCommand);
};

// 0x0 (0x350 - 0x350)
// Class ControlRig.ControlRigLayerInstance
class UControlRigLayerInstance : public UAnimInstance
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlRigLayerInstance");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class ControlRig.ControlRigObjectHolder
class UControlRigObjectHolder : public UObject
{
public:
	TArray<class UObject*>                       Objects;                                           // 0x28(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlRigObjectHolder");
		return Clss;
	}

};

// 0x58 (0x278 - 0x220)
// Class ControlRig.ControlRigSequence
class UControlRigSequence : public ULevelSequence
{
public:
	TSoftObjectPtr<class UAnimSequence>          LastExportedToAnimationSequence;                   // 0x220(0x28)(AssetRegistrySearchable, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USkeletalMesh>          LastExportedUsingSkeletalMesh;                     // 0x248(0x28)(AssetRegistrySearchable, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LastExportedFrameRate;                             // 0x270(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DE7[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlRigSequence");
		return Clss;
	}

};

// 0x278 (0x3D0 - 0x158)
// Class ControlRig.MovieSceneControlRigParameterSection
class UMovieSceneControlRigParameterSection : public UMovieSceneParameterSection
{
public:
	uint8                                        Pad_2DE9[0x48];                                    // Fixing Size After Last Property
	class UControlRig*                           ControlRig;                                        // 0x1A0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UControlRig>               ControlRigClass;                                   // 0x1A8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<bool>                                 ControlsMask;                                      // 0x1B0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FMovieSceneTransformMask              TransformMask;                                     // 0x1C0(0x4)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DEA[0x4];                                     // Fixing Size After Last Property
	struct FMovieSceneFloatChannel               Weight;                                            // 0x1C8(0x110)(NativeAccessSpecifierPublic)
	TMap<class FName, struct FChannelMapInfo>    ControlChannelMap;                                 // 0x2D8(0x50)(NativeAccessSpecifierPublic)
	TArray<struct FEnumParameterNameAndCurve>    EnumParameterNamesAndCurves;                       // 0x328(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FIntegerParameterNameAndCurve> IntegerParameterNamesAndCurves;                    // 0x338(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FSpaceControlNameAndChannel>   SpaceChannels;                                     // 0x348(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FConstraintAndActiveChannel>   ConstraintsChannels;                               // 0x358(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_2DEB[0x68];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneControlRigParameterSection");
		return Clss;
	}

};

// 0x68 (0x100 - 0x98)
// Class ControlRig.MovieSceneControlRigParameterTrack
class UMovieSceneControlRigParameterTrack : public UMovieSceneNameableTrack
{
public:
	uint8                                        Pad_2DEC[0x40];                                    // Fixing Size After Last Property
	class UControlRig*                           ControlRig;                                        // 0xD8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMovieSceneSection*                    SectionToKey;                                      // 0xE0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UMovieSceneSection*>            Sections;                                          // 0xE8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	class FName                                  TrackName;                                         // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2DEE[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneControlRigParameterTrack");
		return Clss;
	}

};

// 0x0 (0x30 - 0x30)
// Class ControlRig.ControlRigSettings
class UControlRigSettings : public UDeveloperSettings
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlRigSettings");
		return Clss;
	}

};

// 0x0 (0x30 - 0x30)
// Class ControlRig.ControlRigEditorSettings
class UControlRigEditorSettings : public UDeveloperSettings
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlRigEditorSettings");
		return Clss;
	}

};

// 0x60 (0x88 - 0x28)
// Class ControlRig.ControlRigPoseAsset
class UControlRigPoseAsset : public UObject
{
public:
	struct FControlRigControlPose                Pose;                                              // 0x28(0x60)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlRigPoseAsset");
		return Clss;
	}

	void SelectControls(class UControlRig* InControlRig, bool bDoMirror);
	void SavePose(class UControlRig* InControlRig, bool bUseAll);
	void ReplaceControlName(class FName& CurrentName, class FName& NewName);
	void PastePose(class UControlRig* InControlRig, bool bDoKey, bool bDoMirror);
	void GetCurrentPose(class UControlRig* InControlRig, struct FControlRigControlPose* OutPose);
	TArray<class FName> GetControlNames();
	bool DoesMirrorMatch(class UControlRig* ControlRig, class FName& ControlName);
};

// 0x28 (0x50 - 0x28)
// Class ControlRig.ControlRigPoseMirrorSettings
class UControlRigPoseMirrorSettings : public UObject
{
public:
	class FString                                RightSide;                                         // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LeftSide;                                          // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             MirrorAxis;                                        // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             AxisToFlip;                                        // 0x49(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E02[0x6];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlRigPoseMirrorSettings");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class ControlRig.ControlRigPoseProjectSettings
class UControlRigPoseProjectSettings : public UObject
{
public:
	TArray<struct FDirectoryPath>                RootSaveDirs;                                      // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlRigPoseProjectSettings");
		return Clss;
	}

};

// 0x18 (0xB0 - 0x98)
// Class ControlRig.ControlRigWorkflowOptions
class UControlRigWorkflowOptions : public URigVMUserWorkflowOptions
{
public:
	class URigHierarchy*                         Hierarchy;                                         // 0x98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRigElementKey>                Selection;                                         // 0xA0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlRigWorkflowOptions");
		return Clss;
	}

	bool EnsureAtLeastOneRigElementSelected();
};

// 0x8 (0xB8 - 0xB0)
// Class ControlRig.ControlRigTransformWorkflowOptions
class UControlRigTransformWorkflowOptions : public UControlRigWorkflowOptions
{
public:
	enum class ERigTransformType                 TransformType;                                     // 0xB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E04[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlRigTransformWorkflowOptions");
		return Clss;
	}

	TArray<struct FRigVMUserWorkflow> ProvideWorkflows(class UObject* InSubject);
};

// 0x90 (0xB8 - 0x28)
// Class ControlRig.ControlRigNumericalValidationPass
class UControlRigNumericalValidationPass : public UControlRigValidationPass
{
public:
	bool                                         bCheckControls;                                    // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCheckBones;                                       // 0x29(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCheckCurves;                                      // 0x2A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E06[0x1];                                     // Fixing Size After Last Property
	float                                        TranslationPrecision;                              // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotationPrecision;                                 // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScalePrecision;                                    // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurvePrecision;                                    // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EventNameA;                                        // 0x3C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  EventNameB;                                        // 0x40(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2E09[0x4];                                     // Fixing Size After Last Property
	struct FRigPose                              Pose;                                              // 0x48(0x70)(Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlRigNumericalValidationPass");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
