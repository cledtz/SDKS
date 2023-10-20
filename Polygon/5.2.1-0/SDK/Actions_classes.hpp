#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0xA8 - 0x28)
// Class Actions.Action
class UAction : public UObject
{
public:
	bool                                         bWantsToTick;                                      // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10E2[0x3];                                     // Fixing Size After Last Property 
	float                                        TickRate;                                          // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EActionState                      State;                                             // 0x30(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_10E4[0x7];                                     // Fixing Size After Last Property 
	TSet<class UAction*>                         ChildrenActions;                                   // 0x38(0x50)(SaveGame, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnActivationDelegate;                              // 0x88(0x10)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFinishedDelegate;                                // 0x98(0x10)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAction* GetDefaultObj();

	bool Succeeded();
	void Succeed();
	void ReceiveTick(float DeltaTime);
	void ReceiveFinished(enum class EActionState Reason);
	bool ReceiveCanActivate();
	void ReceiveActivate();
	bool IsRunning();
	float GetTickRate();
	enum class EActionState GetState();
	class UAction* GetParentAction();
	class UObject* GetParent();
	class UActorComponent* GetOwnerComponent();
	class UActor* GetOwnerActor();
	class UObject* GetOwner();
	bool Failed();
	void Fail(class FName Error);
	void Activate();
};

// 0x0 (0x28 - 0x28)
// Class Actions.ActionLibrary
class UActionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UActionLibrary* GetDefaultObj();

	class UAction* CreateAction(class UObject* Owner, TSubclassOf<class UAction> Type, bool bAutoActivate);
};

// 0x68 (0x98 - 0x30)
// Class Actions.ActionsSubsystem
class UActionsSubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_1103[0x8];                                     // Fixing Size After Last Property 
	TSet<struct FRootAction>                     RootActions;                                       // 0x38(0x50)(SaveGame, NativeAccessSpecifierPrivate)
	TArray<struct FActionsTickGroup>             TickGroups;                                        // 0x88(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UActionsSubsystem* GetDefaultObj();

	void CancelAllByOwner(class UObject* Object);
	void CancelAllByClass(class UClass* ActionClass, const TArray<class UAction*>& IgnoreActions);
};

// 0x18 (0x88 - 0x70)
// Class Actions.BTT_RunAction
class UBTT_RunAction : public UBTTaskNode
{
public:
	class UAction*                               ActionType;                                        // 0x70(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAction*                               Action;                                            // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBehaviorTreeComponent*                OwnerComp;                                         // 0x80(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UBTT_RunAction* GetDefaultObj();

	void OnRunActionFinished(enum class EActionState Reason);
};

}


