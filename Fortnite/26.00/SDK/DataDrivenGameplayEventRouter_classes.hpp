#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class DataDrivenGameplayEventRouter.GameplayEventLegacyBroadcast
class UGameplayEventLegacyBroadcast : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UGameplayEventLegacyBroadcast* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class DataDrivenGameplayEventRouter.GameplayEventDescriptorLibrary
class UGameplayEventDescriptorLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGameplayEventDescriptorLibrary* GetDefaultObj();

	bool BroadcastEvent(struct FGameplayEventDescriptor& EventDescriptor, class UObject* EventContext, int32& Event, class UClass* EventRouterScope, class UActor* RouterContextActor);
};

}


