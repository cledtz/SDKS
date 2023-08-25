#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x38 - 0x30)
// Class StateTreeModule.StateTreeSettings
class UStateTreeSettings : public UDeveloperSettings
{
public:
	bool                                         bAutoStartDebuggerTracesOnNonEditorTargets;        // 0x30(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13AE[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UStateTreeSettings* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class StateTreeModule.StateTreeNodeBlueprintBase
class UStateTreeNodeBlueprintBase : public UObject
{
public:
	uint8                                        Pad_13BF[0x10];                                    // Fixing Size After Last Property 
	class UObject*                               CachedOwner;                                       // 0x38(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UStateTreeNodeBlueprintBase* GetDefaultObj();

	void SendEvent(struct FStateTreeEvent& Event);
	void RequestTransition(struct FStateTreeStateLink& TargetState, enum class EStateTreeTransitionPriority Priority);
};

// 0x8 (0x48 - 0x40)
// Class StateTreeModule.StateTreeConditionBlueprintBase
class UStateTreeConditionBlueprintBase : public UStateTreeNodeBlueprintBase
{
public:
	uint8                                        Pad_13C3[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UStateTreeConditionBlueprintBase* GetDefaultObj();

	bool ReceiveTestCondition();
};

// 0x8 (0x48 - 0x40)
// Class StateTreeModule.StateTreeEvaluatorBlueprintBase
class UStateTreeEvaluatorBlueprintBase : public UStateTreeNodeBlueprintBase
{
public:
	uint8                                        Pad_13D0[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UStateTreeEvaluatorBlueprintBase* GetDefaultObj();

	void ReceiveTreeStop();
	void ReceiveTreeStart();
	void ReceiveTick(float DeltaTime);
};

// 0x8 (0x48 - 0x40)
// Class StateTreeModule.StateTreeTaskBlueprintBase
class UStateTreeTaskBlueprintBase : public UStateTreeNodeBlueprintBase
{
public:
	uint8                                        Pad_13F0[0x1];                                     // Fixing Size After Last Property 
	uint8                                        bShouldStateChangeOnReselect : 1;                  // Mask: 0x1, PropSize: 0x10x41(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_B7 : 1;                                     // Fixing Bit-Field Size 
	uint8                                        bShouldCallTickOnlyOnEvents : 1;                   // Mask: 0x4, PropSize: 0x10x41(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bShouldCopyBoundPropertiesOnTick : 1;              // Mask: 0x8, PropSize: 0x10x41(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bShouldCopyBoundPropertiesOnExitState : 1;         // Mask: 0x10, PropSize: 0x10x41(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_13F2[0x6];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UStateTreeTaskBlueprintBase* GetDefaultObj();

	enum class EStateTreeRunStatus ReceiveTick(float DeltaTime);
	void ReceiveStateCompleted(enum class EStateTreeRunStatus CompletionStatus, const struct FStateTreeActiveStates& CompletedActiveStates);
	void ReceiveLatentTick(float DeltaTime);
	void ReceiveLatentEnterState(struct FStateTreeTransitionResult& TRANSITION);
	void ReceiveExitState(struct FStateTreeTransitionResult& TRANSITION);
	enum class EStateTreeRunStatus ReceiveEnterState(struct FStateTreeTransitionResult& TRANSITION);
	void FinishTask(bool bSucceeded);
};

// 0x150 (0x180 - 0x30)
// Class StateTreeModule.StateTree
class UStateTree : public UDataAsset
{
public:
	uint32                                       LastCompiledEditorDataHash;                        // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13F3[0x4];                                     // Fixing Size After Last Property 
	class UStateTreeSchema*                      Schema;                                            // 0x38(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FCompactStateTreeState>        States;                                            // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FCompactStateTransition>       Transitions;                                       // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FInstancedStructContainer             Nodes;                                             // 0x60(0x10)(NativeAccessSpecifierPrivate)
	struct FStateTreeInstanceData                DefaultInstanceData;                               // 0x70(0x10)(NativeAccessSpecifierPrivate)
	struct FStateTreeInstanceData                SharedInstanceData;                                // 0x80(0x10)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_13F6[0x18];                                    // Fixing Size After Last Property 
	TArray<struct FStateTreeExternalDataDesc>    ContextDataDescs;                                  // 0xA8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FStateTreePropertyBindings            PropertyBindings;                                  // 0xB8(0x58)(NativeAccessSpecifierPrivate)
	TArray<struct FStateTreeStateIdToHandle>     IDToStateMappings;                                 // 0x110(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FStateTreeNodeIdToIndex>       IDToNodeMappings;                                  // 0x120(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FStateTreeTransitionIdToIndex> IDToTransitionMappings;                            // 0x130(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FInstancedPropertyBag                 Parameters;                                        // 0x140(0x10)(NativeAccessSpecifierPrivate)
	struct FStateTreeIndex8                      ParametersDataViewIndex;                           // 0x150(0x1)(NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_13F9[0x1];                                     // Fixing Size After Last Property 
	uint16                                       EvaluatorsBegin;                                   // 0x152(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint16                                       EvaluatorsNum;                                     // 0x154(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint16                                       GlobalTasksBegin;                                  // 0x156(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint16                                       GlobalTasksNum;                                    // 0x158(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bHasGlobalTransitionTasks;                         // 0x15A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_13FC[0x5];                                     // Fixing Size After Last Property 
	TArray<struct FStateTreeExternalDataDesc>    ExternalDataDescs;                                 // 0x160(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	int32                                        ExternalDataBaseIndex;                             // 0x170(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        NumDataViews;                                      // 0x174(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_13FD[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UStateTree* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class StateTreeModule.StateTreeSchema
class UStateTreeSchema : public UObject
{
public:

	static class UClass* StaticClass();
	static class UStateTreeSchema* GetDefaultObj();

};

}


