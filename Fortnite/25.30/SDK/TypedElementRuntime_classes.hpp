#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class TypedElementRuntime.TypedElementSelectionSetLibrary
class UTypedElementSelectionSetLibrary : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TypedElementSelectionSetLibrary");
		return Clss;
	}

	bool SetSelectionFromList(class UTypedElementSelectionSet* SelectionSet, const struct FScriptTypedElementListProxy& ElementList, const struct FTypedElementSelectionOptions& SelectionOptions);
	bool SelectElementsFromList(class UTypedElementSelectionSet* SelectionSet, const struct FScriptTypedElementListProxy& ElementList, const struct FTypedElementSelectionOptions& SelectionOptions);
	struct FScriptTypedElementListProxy GetNormalizedSelection(class UTypedElementSelectionSet* SelectionSet, const struct FTypedElementSelectionNormalizationOptions& NormalizationOptions);
	struct FScriptTypedElementListProxy GetNormalizedElementList(class UTypedElementSelectionSet* SelectionSet, const struct FScriptTypedElementListProxy& ElementList, const struct FTypedElementSelectionNormalizationOptions& NormalizationOptions);
	bool DeselectElementsFromList(class UTypedElementSelectionSet* SelectionSet, const struct FScriptTypedElementListProxy& ElementList, const struct FTypedElementSelectionOptions& SelectionOptions);
};

// 0x870 (0x898 - 0x28)
// Class TypedElementRuntime.TypedElementSelectionSet
class UTypedElementSelectionSet : public UObject
{
public:
	uint8                                        Pad_D80[0x800];                                    // Fixing Size After Last Property
	FMulticastInlineDelegateProperty_            OnPreSelectionChange;                              // 0x828(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSelectionChange;                                 // 0x838(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_D81[0x50];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TypedElementSelectionSet");
		return Clss;
	}

	bool SetSelection(TArray<struct FScriptTypedElementHandle>& InElementHandles, const struct FTypedElementSelectionOptions& InSelectionOptions);
	bool SelectElements(TArray<struct FScriptTypedElementHandle>& InElementHandles, const struct FTypedElementSelectionOptions& InSelectionOptions);
	bool SelectElement(struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementSelectionOptions& InSelectionOptions);
	void RestoreSelectionState(struct FTypedElementSelectionSetState& InSelectionState);
	void OnPreChangeDynamic__DelegateSignature(class UTypedElementSelectionSet* SelectionSet);
	void OnChangeDynamic__DelegateSignature(class UTypedElementSelectionSet* SelectionSet);
	TArray<struct FScriptTypedElementHandle> K2_GetSelectedElementHandles(TSubclassOf<class UInterface> InBaseInterfaceType);
	bool IsElementSelected(struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementIsSelectedOptions& InSelectionOptions);
	bool HasSelectedObjects(class UClass* InRequiredClass);
	bool HasSelectedElements(TSubclassOf<class UInterface> InBaseInterfaceType);
	class UObject* GetTopSelectedObject(class UClass* InRequiredClass);
	struct FScriptTypedElementHandle GetSelectionElement(struct FScriptTypedElementHandle& InElementHandle, enum class ETypedElementSelectionMethod InSelectionMethod);
	TArray<class UObject*> GetSelectedObjects(class UClass* InRequiredClass);
	int32 GetNumSelectedElements();
	struct FTypedElementSelectionSetState GetCurrentSelectionState();
	class UObject* GetBottomSelectedObject(class UClass* InRequiredClass);
	bool DeselectElements(TArray<struct FScriptTypedElementHandle>& InElementHandles, const struct FTypedElementSelectionOptions& InSelectionOptions);
	bool DeselectElement(struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementSelectionOptions& InSelectionOptions);
	int32 CountSelectedObjects(class UClass* InRequiredClass);
	int32 CountSelectedElements(TSubclassOf<class UInterface> InBaseInterfaceType);
	bool ClearSelection(const struct FTypedElementSelectionOptions& InSelectionOptions);
	bool CanSelectElement(struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementSelectionOptions& InSelectionOptions);
	bool CanDeselectElement(struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementSelectionOptions& InSelectionOptions);
	bool AllowSelectionModifiers(struct FScriptTypedElementHandle& InElementHandle);
};

// 0x0 (0x28 - 0x28)
// Class TypedElementRuntime.TypedElementAssetDataInterface
class UTypedElementAssetDataInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TypedElementAssetDataInterface");
		return Clss;
	}

	struct FAssetData GetAssetData(struct FScriptTypedElementHandle& InElementHandle);
	TArray<struct FAssetData> GetAllReferencedAssetDatas(struct FScriptTypedElementHandle& InElementHandle);
};

// 0x0 (0x28 - 0x28)
// Class TypedElementRuntime.TypedElementHierarchyInterface
class UTypedElementHierarchyInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TypedElementHierarchyInterface");
		return Clss;
	}

	struct FScriptTypedElementHandle GetParentElement(struct FScriptTypedElementHandle& InElementHandle, bool bAllowCreate);
	void GetChildElements(struct FScriptTypedElementHandle& InElementHandle, TArray<struct FScriptTypedElementHandle>* OutElementHandles, bool bAllowCreate);
};

// 0x0 (0x28 - 0x28)
// Class TypedElementRuntime.TypedElementObjectInterface
class UTypedElementObjectInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TypedElementObjectInterface");
		return Clss;
	}

	class UClass* GetObjectClass(struct FScriptTypedElementHandle& InElementHandle);
	class UObject* GetObject(struct FScriptTypedElementHandle& InElementHandle);
};

// 0x0 (0x28 - 0x28)
// Class TypedElementRuntime.TypedElementSelectionInterface
class UTypedElementSelectionInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TypedElementSelectionInterface");
		return Clss;
	}

	bool SelectElement(struct FScriptTypedElementHandle& InElementHandle, const struct FScriptTypedElementListProxy& InSelectionSet, struct FTypedElementSelectionOptions& InSelectionOptions);
	bool IsElementSelected(struct FScriptTypedElementHandle& InElementHandle, const struct FScriptTypedElementListProxy& InSelectionSet, struct FTypedElementIsSelectedOptions& InSelectionOptions);
	struct FScriptTypedElementHandle GetSelectionElement(struct FScriptTypedElementHandle& InElementHandle, const struct FScriptTypedElementListProxy& InCurrentSelection, enum class ETypedElementSelectionMethod InSelectionMethod);
	bool DeselectElement(struct FScriptTypedElementHandle& InElementHandle, const struct FScriptTypedElementListProxy& InSelectionSet, struct FTypedElementSelectionOptions& InSelectionOptions);
	bool CanSelectElement(struct FScriptTypedElementHandle& InElementHandle, struct FTypedElementSelectionOptions& InSelectionOptions);
	bool CanDeselectElement(struct FScriptTypedElementHandle& InElementHandle, struct FTypedElementSelectionOptions& InSelectionOptions);
	bool AllowSelectionModifiers(struct FScriptTypedElementHandle& InElementHandle, const struct FScriptTypedElementListProxy& InSelectionSet);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
