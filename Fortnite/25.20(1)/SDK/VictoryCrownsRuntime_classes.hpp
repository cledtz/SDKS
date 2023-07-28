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

// 0x10 (0x78 - 0x68)
// Class VictoryCrownsRuntime.FortVictoryCrownViewModel
class UFortVictoryCrownViewModel : public UMVVMViewModelBase
{
public:
	int32                                        BestowedCount;                                     // 0x68(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bHasWonCrownInMatch;                               // 0x6C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bHasWonRoyalRoyale;                                // 0x6D(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8502[0x2];                                     // Fixing Size After Last Property..
	TWeakObjectPtr<class UFortControllerComponent_VictoryCrowns> BoundVictoryCrownsComponent;                       // 0x70(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortVictoryCrownViewModel");
		return Clss;
	}

	void HandleOnHasWonRoyalRoyale();
	void HandleOnHasWonCrownInMatch();
};

// 0x1D0 (0x278 - 0xA8)
// Class VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns
class UFortControllerComponent_VictoryCrowns : public UFortControllerComponent
{
public:
	FMulticastInlineDelegateProperty_            OnVictoryCrownStatusChanged;                       // 0xA8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnHasWonCrownInMatch;                              // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnHasWonRoyalRoyale;                               // 0xC8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_8508[0x30];                                    // Fixing Size After Last Property..
	TSoftObjectPtr<class UFortWorldItemDefinition> CrownInventoryItemClass;                           // 0x108(0x28)(Edit, DisableEditOnInstance, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bWonCrownInMatch;                                  // 0x130(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bWonRoyalRoyale;                                   // 0x131(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8509[0x6];                                     // Fixing Size After Last Property..
	class UFortVictoryCrownAccountItemDefinition* VictoryCrownAccountItemDefinition;                 // 0x138(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UFortMontageItemDefinitionBase> RoyalRoyaleEmoteItemDefinition;                    // 0x140(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDataTable*                            VictoryCrownPlaylistData;                          // 0x168(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                 SourceTagsForRoyalRoyale;                          // 0x170(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FVictoryCrownAccountData              VictoryCrownAccountData;                           // 0x190(0x10)(Net, Transient, RepNotify, NoDestructor, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        InitialGrantDelay;                                 // 0x1A0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	uint8                                        Pad_850A[0xA8];                                    // Fixing Size After Last Property..
	bool                                         bKillFeedBroadcastReady;                           // 0x270(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_850B[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortControllerComponent_VictoryCrowns");
		return Clss;
	}

	void OnRep_WonRoyalRoyale();
	void OnRep_WonCrownInMatch();
	void OnRep_VictoryCrownAccountData();
	void OnAthenaProfileInitialized();
	bool IsCrownInPlayerInventory();
	bool HasWonRoyalRoyale();
	bool HasWonCrownInMatch();
	void HandlePawnChanged(class UPawn* OldPawn, class UPawn* NewPawn);
	void HandleExitAircraft(class UController* ExitingController);
	void HandleEnterAircraft();
	int32 GetVictoryCrownsBestowedCount();
	int32 GetRoyalRoyaleAchievedCount();
	class UFortWorldItem* GetCrownInPlayerInventory();
	void DebugForceSetRoyalRoyaleAchievedCount(int32 NewRoyalRoyaleCount);
	void CacheAccountItemData();
	bool AuthoritySquadHasSeenCrownItem(class UFortItem* CrownItem, bool bDropped);
	bool AuthorityHasSquadHeldCrownItem(class UFortItem* CrownItem);
	bool AuthorityHasSquadDroppedCrownItem(class UFortItem* CrownItem);
	bool AuthorityHasHeldCrownItem(class UFortItem* CrownItem);
	bool AuthorityHasDroppedCrownItem(class UFortItem* CrownItem);
};

// 0x8 (0x90 - 0x88)
// Class VictoryCrownsRuntime.FortCosmeticStatObject_HasCrown
class UFortCosmeticStatObject_HasCrown : public UFortCosmeticStatObject
{
public:
	class UFortVictoryCrownAccountItemDefinition* VictoryCrownAccountItemDefinition;                 // 0x88(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCosmeticStatObject_HasCrown");
		return Clss;
	}

};

// 0x18 (0xA0 - 0x88)
// Class VictoryCrownsRuntime.FortCosmeticStatObject_TotalRoyalRoyales
class UFortCosmeticStatObject_TotalRoyalRoyales : public UFortCosmeticStatObject
{
public:
	class UFortVictoryCrownAccountItemDefinition* VictoryCrownAccountItemDefinition;                 // 0x88(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UFortControllerComponent_VictoryCrowns*> CachedCrownComponents;                             // 0x90(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCosmeticStatObject_TotalRoyalRoyales");
		return Clss;
	}

};

// 0x8 (0x90 - 0x88)
// Class VictoryCrownsRuntime.FortCosmeticStatObject_TotalVictoryCrowns
class UFortCosmeticStatObject_TotalVictoryCrowns : public UFortCosmeticStatObject
{
public:
	class UFortVictoryCrownAccountItemDefinition* VictoryCrownAccountItemDefinition;                 // 0x88(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCosmeticStatObject_TotalVictoryCrowns");
		return Clss;
	}

};

// 0x58 (0xF8 - 0xA0)
// Class VictoryCrownsRuntime.FortGameStateComponent_VictoryCrowns
class UFortGameStateComponent_VictoryCrowns : public UFortGameStateComponent
{
public:
	TArray<class UFortPlayerStateAthena*>        CrownBearerPlayerStates;                           // 0xA0(0x10)(Net, ZeroConstructor, Transient, RepNotify, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	class FText                                  KillFeedFormat_Dropped;                            // 0xB0(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class FText                                  KillFeedFormat_PickedUp;                           // 0xC8(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_850E[0x18];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortGameStateComponent_VictoryCrowns");
		return Clss;
	}

	void OnRep_CrownBearerPlayerStates();
	bool IsCrownBearer(class UFortPlayerStateAthena* FortPSA);
	void HandleCrownStatusChanged(class UFortPlayerControllerAthena* FortPlayerControllerAthena, class UFortItem* CrownItem);
	void ClientKillFeedMessage(class UFortPlayerStateAthena* FortPSA, bool bAdded);
};

// 0x18 (0xC0 - 0xA8)
// Class VictoryCrownsRuntime.FortPawnComponent_VictoryCrownsFrontEnd
class UFortPawnComponent_VictoryCrownsFrontEnd : public UFortPawnComponent
{
public:
	class UDataTable*                            VictoryCrownPlaylistData;                          // 0xA8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bInitializeSuccess;                                // 0xB0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSelectedPlaylistSupportCrown;                     // 0xB1(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_850F[0x6];                                     // Fixing Size After Last Property..
	class UFortSocialParty*                      PersistentParty;                                   // 0xB8(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortPawnComponent_VictoryCrownsFrontEnd");
		return Clss;
	}

	void PlaylistChanged();
};

// 0x8 (0xA8 - 0xA0)
// Class VictoryCrownsRuntime.FortPlayerStateComponent_VictoryCrowns
class UFortPlayerStateComponent_VictoryCrowns : public UFortPlayerStateComponent
{
public:
	bool                                         bHasWonRoyalRoyale;                                // 0xA0(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8510[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortPlayerStateComponent_VictoryCrowns");
		return Clss;
	}

	bool GetWonRoyalRoyale();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
