#pragma once

// Dumped with Dumper-7!


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
	uint8                                        Pad_4024[0x3];                                     // Fixing Size After Last Property 
	TWeakObjectPtr<class UFortMinigameLogicComponent> MinigameLogicComponent;                            // 0xA4(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4025[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UCreativeGameStreamDeviceComponent* GetDefaultObj();

	void RemoveFromEndGameQueue();
	void OnMinigameStateChanged(class UFortMinigame* Minigame, enum class EFortMinigameState NewMinigameState);
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
	TWeakObjectPtr<class UFortMinigame>          Minigame;                                          // 0xB0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UCreativeGameStreamDeviceCoordinatorComponent* GetDefaultObj();

	void OnMinigameStateChanged(class UFortMinigame* InMinigame, enum class EFortMinigameState NewMinigameState);
};

}


