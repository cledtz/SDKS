#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x120 (0x1C0 - 0xA0)
// Class ThrowingToyRuntime.ThrowingToyTrackerComponent
class UThrowingToyTrackerComponent : public UActorComponent
{
public:
	struct FThrowingToyDataArray                 ThrowingToysData;                                  // 0xA0(0x118)(Net, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_3E46[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UThrowingToyTrackerComponent* GetDefaultObj();

	void SetRecentThrowingToyItemRemovedReason(enum class EThrowingToyItemRemovedReason RemovedReason);
	class UActor* GetThrowingToy(struct FGuid& WorldItemGuid);
	enum class EThrowingToyItemRemovedReason GetRecentThrowingToyItemRemovedReason();
	class UActor* GetAndReleaseThrowingToy(struct FGuid& WorldItemGuid);
	void AddThrowingToy(class UActor* ThrowingToyActor, struct FGuid& WorldItemGuid);
};

}


