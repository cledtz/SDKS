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
// Class TypedElementFramework.TypedElementDataStorageCompatibilityInterface
class UTypedElementDataStorageCompatibilityInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TypedElementDataStorageCompatibilityInterface");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class TypedElementFramework.TypedElementDataStorageInterface
class UTypedElementDataStorageInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TypedElementDataStorageInterface");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class TypedElementFramework.TypedElementDataStorageUiInterface
class UTypedElementDataStorageUiInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TypedElementDataStorageUiInterface");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class TypedElementFramework.TypedElementHandleLibrary
class UTypedElementHandleLibrary : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TypedElementHandleLibrary");
		return Clss;
	}

	void Release(struct FScriptTypedElementHandle& ElementHandle);
	bool NotEqual(struct FScriptTypedElementHandle& LHS, struct FScriptTypedElementHandle& RHS);
	bool IsSet(struct FScriptTypedElementHandle& ElementHandle);
	bool Equal(struct FScriptTypedElementHandle& LHS, struct FScriptTypedElementHandle& RHS);
};

// 0x0 (0x28 - 0x28)
// Class TypedElementFramework.TypedElementListLibrary
class UTypedElementListLibrary : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TypedElementListLibrary");
		return Clss;
	}

	void Shrink(const struct FScriptTypedElementListProxy& ElementList);
	void Reset(const struct FScriptTypedElementListProxy& ElementList);
	void Reserve(const struct FScriptTypedElementListProxy& ElementList, int32 Size);
	bool Remove(const struct FScriptTypedElementListProxy& ElementList, struct FScriptTypedElementHandle& ElementHandle);
	int32 Num(const struct FScriptTypedElementListProxy& ElementList);
	bool IsValidIndex(const struct FScriptTypedElementListProxy& ElementList, int32 Index);
	bool HasElementsOfType(const struct FScriptTypedElementListProxy& ElementList, class FName ElementTypeName);
	bool HasElements(const struct FScriptTypedElementListProxy& ElementList, TSubclassOf<class UInterface> BaseInterfaceType);
	class UObject* GetElementInterface(const struct FScriptTypedElementListProxy& ElementList, struct FScriptTypedElementHandle& ElementHandle, TSubclassOf<class UInterface> BaseInterfaceType);
	TArray<struct FScriptTypedElementHandle> GetElementHandles(const struct FScriptTypedElementListProxy& ElementList, TSubclassOf<class UInterface> BaseInterfaceType);
	struct FScriptTypedElementHandle GetElementHandleAt(const struct FScriptTypedElementListProxy& ElementList, int32 Index);
	void Empty(const struct FScriptTypedElementListProxy& ElementList, int32 Slack);
	struct FScriptTypedElementListProxy CreateScriptElementList(class UTypedElementRegistry* Registry);
	int32 CountElementsOfType(const struct FScriptTypedElementListProxy& ElementList, class FName ElementTypeName);
	int32 CountElements(const struct FScriptTypedElementListProxy& ElementList, TSubclassOf<class UInterface> BaseInterfaceType);
	bool Contains(const struct FScriptTypedElementListProxy& ElementList, struct FScriptTypedElementHandle& ElementHandle);
	struct FScriptTypedElementListProxy Clone(const struct FScriptTypedElementListProxy& ElementList);
	void AppendList(const struct FScriptTypedElementListProxy& ElementList, const struct FScriptTypedElementListProxy& OtherElementList);
	void Append(const struct FScriptTypedElementListProxy& ElementList, TArray<struct FScriptTypedElementHandle>& ElementHandles);
	bool Add(const struct FScriptTypedElementListProxy& ElementList, struct FScriptTypedElementHandle& ElementHandle);
};

// 0x0 (0x28 - 0x28)
// Class TypedElementFramework.TypedElementCounterInterface
class UTypedElementCounterInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TypedElementCounterInterface");
		return Clss;
	}

};

// 0x950 (0x978 - 0x28)
// Class TypedElementFramework.TypedElementRegistry
class UTypedElementRegistry : public UObject
{
public:
	uint8                                        Pad_15A9[0x950];                                   // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TypedElementRegistry");
		return Clss;
	}

	class UTypedElementRegistry* GetInstance();
	class UObject* GetElementInterface(struct FScriptTypedElementHandle& InElementHandle, TSubclassOf<class UInterface> InBaseInterfaceType);
};

// 0x0 (0x28 - 0x28)
// Class TypedElementFramework.TestTypedElementInterfaceA
class UTestTypedElementInterfaceA : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TestTypedElementInterfaceA");
		return Clss;
	}

	bool SetDisplayName(struct FScriptTypedElementHandle& InElementHandle, class FText InNewName, bool bNotify);
	class FText GetDisplayName(struct FScriptTypedElementHandle& InElementHandle);
};

// 0x0 (0x28 - 0x28)
// Class TypedElementFramework.TestTypedElementInterfaceB
class UTestTypedElementInterfaceB : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TestTypedElementInterfaceB");
		return Clss;
	}

	bool MarkAsTested(struct FScriptTypedElementHandle& InElementHandle);
};

// 0x0 (0x28 - 0x28)
// Class TypedElementFramework.TestTypedElementInterfaceC
class UTestTypedElementInterfaceC : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TestTypedElementInterfaceC");
		return Clss;
	}

	bool GetIsTested(struct FScriptTypedElementHandle& InElementHandle);
};

// 0x8 (0x30 - 0x28)
// Class TypedElementFramework.TestTypedElementInterfaceA_ImplTyped
class UTestTypedElementInterfaceA_ImplTyped : public UObject
{
public:
	uint8                                        Pad_15AD[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TestTypedElementInterfaceA_ImplTyped");
		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class TypedElementFramework.TestTypedElementInterfaceA_ImplUntyped
class UTestTypedElementInterfaceA_ImplUntyped : public UObject
{
public:
	uint8                                        Pad_15AE[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TestTypedElementInterfaceA_ImplUntyped");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class TypedElementFramework.TestTypedElementInterfaceBAndC_Typed
class UTestTypedElementInterfaceBAndC_Typed : public UObject
{
public:
	uint8                                        Pad_15AF[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TestTypedElementInterfaceBAndC_Typed");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
