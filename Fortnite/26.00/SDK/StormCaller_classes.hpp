#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0xC0 - 0xA0)
// Class StormCaller.StormCallerComponent
class UStormCallerComponent : public UActorComponent
{
public:
	uint8                                        Pad_3DAC[0x20];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UStormCallerComponent* GetDefaultObj();

	void UpdatePoiSavedOptions(TArray<class FString>& InOutPoiSavedOptionKeys, TArray<class FText>& InOutPoiSavedOptionNames, class UPlaylistUserOptions* UserOptions, struct FGameplayTag& GameplayTagForPOI);
	void SpawnInitialSafeZone();
	TArray<struct FVector4> GetSafeZoneLocationBlockList();
	class UFortPoiVolume* GetRandomPoiVolume();
	class UFortPoiVolume* GetPoiVolumeFromOptionIndex(int32 OptionIndex);
	void ApplySavedPoiOptions(TArray<class FString>& PoiSavedOptionKeys, TArray<class FText>& PoiSavedOptionName, class UFortActorOptionsComponent* ToyOptionsComponent);
	void ApplyPOINamesToDataRegistry(class UPlaylistUserOptions* UserOptions, struct FGameplayTag& GameplayTagForPOI, class FText& MapCenterText, class FText& RandomText, class FText& BeaconText);
};

}


