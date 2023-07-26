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
// Class DataDrivenGameplayEventRouter.GameplayEventLegacyBroadcast
class UGameplayEventLegacyBroadcast : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayEventLegacyBroadcast");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class DataDrivenGameplayEventRouter.GameplayEventDescriptorLibrary
class UGameplayEventDescriptorLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayEventDescriptorLibrary");
		return Clss;
	}

	bool BroadcastEvent(struct FGameplayEventDescriptor& EventDescriptor, class UObject* EventContext, int32& Event, class UClass* EventRouterScope, class AActor* RouterContextActor);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
