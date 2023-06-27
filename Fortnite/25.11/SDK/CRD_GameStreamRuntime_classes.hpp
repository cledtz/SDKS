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

// 0x10 (0xB0 - 0xA0)
// Class CRD_GameStreamRuntime.CreativeGameStreamDeviceComponent
class UCreativeGameStreamDeviceComponent : public UActorComponent
{
public:
	FMulticastSparseDelegateProperty_            OnTriggered;                                       // 0xA0(0x1)(InstancedReference, BlueprintAssignable, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D94[0x3];                                     // Fixing Size After Last Property..
	TWeakObjectPtr<class UFortMinigameLogicComponent> MinigameLogicComponent;                            // 0xA4(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1D95[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CreativeGameStreamDeviceComponent");
		return Clss;
	}

	void RemoveFromEndGameQueue();
	void OnMinigameStateChanged(class AFortMinigame* Minigame, enum class EFortMinigameState NewMinigameState);
	bool IsWithinPublishedPlayspace();
	void Init(class UFortMinigameLogicComponent* InMinigameLogicComponent);
	void CreativeGameStreamDeviceComponentSignature__DelegateSignature(class UCreativeGameStreamDeviceComponent* CreativeGameStreamDeviceComponent);
	void AddToEndGameQueue();
};

// 0x18 (0xB8 - 0xA0)
// Class CRD_GameStreamRuntime.CreativeGameStreamDeviceCoordinatorComponent
class UCreativeGameStreamDeviceCoordinatorComponent : public UPlayspaceComponent
{
public:
	TArray<TWeakObjectPtr<class UCreativeGameStreamDeviceComponent>> EndGameCreativeGameStreamDeviceComponentQueue;     // 0xA0(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class AFortMinigame>          Minigame;                                          // 0xB0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CreativeGameStreamDeviceCoordinatorComponent");
		return Clss;
	}

	void OnMinigameStateChanged(class AFortMinigame* InMinigame, enum class EFortMinigameState NewMinigameState);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
