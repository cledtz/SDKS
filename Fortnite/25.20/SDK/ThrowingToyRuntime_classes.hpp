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

// 0x120 (0x1C0 - 0xA0)
// Class ThrowingToyRuntime.ThrowingToyTrackerComponent
class UThrowingToyTrackerComponent : public UActorComponent
{
public:
	struct FThrowingToyDataArray                 ThrowingToysData;                                  // 0xA0(0x118)(Net, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_80CE[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ThrowingToyTrackerComponent");
		return Clss;
	}

	void SetRecentThrowingToyItemRemovedReason(enum class EThrowingToyItemRemovedReason RemovedReason);
	class AActor* GetThrowingToy(struct FGuid& WorldItemGuid);
	enum class EThrowingToyItemRemovedReason GetRecentThrowingToyItemRemovedReason();
	class AActor* GetAndReleaseThrowingToy(struct FGuid& WorldItemGuid);
	void AddThrowingToy(class AActor* ThrowingToyActor, struct FGuid& WorldItemGuid);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
