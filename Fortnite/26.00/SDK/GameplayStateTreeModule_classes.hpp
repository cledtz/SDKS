#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x148 - 0xF8)
// Class GameplayStateTreeModule.StateTreeComponent
class UStateTreeComponent : public UBrainComponent
{
public:
	uint8                                        Pad_3E8A[0x8];                                     // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnStateTreeRunStatusChanged;                       // 0x100(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FStateTreeReference                   StateTreeRef;                                      // 0x110(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	bool                                         bStartLogicAutomatically;                          // 0x128(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3E8E[0x7];                                     // Fixing Size After Last Property 
	struct FStateTreeInstanceData                InstanceData;                                      // 0x130(0x10)(Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_3E8F[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UStateTreeComponent* GetDefaultObj();

	void SetStartLogicAutomatically(bool bInStartLogicAutomatically);
	void SendStateTreeEvent(struct FStateTreeEvent& Event);
	enum class EStateTreeRunStatus GetStateTreeRunStatus();
};

// 0x18 (0x40 - 0x28)
// Class GameplayStateTreeModule.StateTreeComponentSchema
class UStateTreeComponentSchema : public UStateTreeSchema
{
public:
	TSubclassOf<class UActor>                    ContextActorClass;                                 // 0x28(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FStateTreeExternalDataDesc            ContextActorDataDesc;                              // 0x30(0x10)(NoDestructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UStateTreeComponentSchema* GetDefaultObj();

};

}


