#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x138 - 0xA8)
// Class VictoryCrownsUI.FortUIManagerComponent_VictoryCrowns
class UFortUIManagerComponent_VictoryCrowns : public UFortControllerComponent
{
public:
	TSubclassOf<class UVictoryCrownsIndicator>   VictoryCrownsIndicatorClass;                       // 0xA8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FUserWidgetPool                       IndicatorPool;                                     // 0xB0(0x88)(Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortUIManagerComponent_VictoryCrowns* GetDefaultObj();

	void RebuildBearerIndicators(TArray<class UFortPlayerStateAthena*>& CrownBearerList);
	void HandleGamePhaseStepChanged(TScriptInterface<class UFortSafeZoneInterface>& SafeZoneInterface, enum class EAthenaGamePhaseStep GamePhaseStep);
};

// 0x10 (0x2E0 - 0x2D0)
// Class VictoryCrownsUI.VictoryCrownsBearerInfoBase
class UVictoryCrownsBearerInfoBase : public UCommonUserWidget
{
public:
	TWeakObjectPtr<class UFortPlayerStateAthena> WeakPSA;                                           // 0x2D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      Text_PlayerName;                                   // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UVictoryCrownsBearerInfoBase* GetDefaultObj();

	void SetPlayerState(class UFortPlayerStateAthena* InPlayerState);
	void OnSetPlayerState(class UFortPlayerStateAthena* PSA);
};

// 0x28 (0x3E0 - 0x3B8)
// Class VictoryCrownsUI.VictoryCrownsIndicator
class UVictoryCrownsIndicator : public UFortActorIndicatorWidget
{
public:
	uint8                                        Pad_1836[0x28];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UVictoryCrownsIndicator* GetDefaultObj();

	void OnScreenClampChanged(bool bIsClamped);
	void OnDistanceChanged(int32 Distance);
	class UFortPlayerStateAthena* GetIndicatedPlayerStateAthena();
};

// 0x0 (0x330 - 0x330)
// Class VictoryCrownsUI.VictoryCrownsPlacementOverlay
class UVictoryCrownsPlacementOverlay : public UPostGamePlacementOverlay
{
public:

	static class UClass* StaticClass();
	static class UVictoryCrownsPlacementOverlay* GetDefaultObj();

};

// 0x10 (0x320 - 0x310)
// Class VictoryCrownsUI.VictoryCrownsPlayerInfoWidget
class UVictoryCrownsPlayerInfoWidget : public UFortHUDElementWidget
{
public:
	uint8                                        Pad_183A[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UVictoryCrownsPlayerInfoWidget* GetDefaultObj();

	void OnPlayerVictoryCrownStatusChanged(bool bHasCrown);
	void HandleCrownBearerListChanged(TArray<class UFortPlayerStateAthena*>& CrownBearerList);
};

// 0x38 (0x420 - 0x3E8)
// Class VictoryCrownsUI.VictoryCrownsPreGameWidget
class UVictoryCrownsPreGameWidget : public UCommonActivatableWidget
{
public:
	class UDynamicEntryBox*                      EntryBox_BearerList;                               // 0x3E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonActionWidget*                   TipActionWidget;                                   // 0x3F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                   CloseObjectInputAction;                            // 0x3F8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1855[0x18];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UVictoryCrownsPreGameWidget* GetDefaultObj();

	void UnregisterCloseButtonInput();
	void StartFadeOut();
	void RegisterCloseButtonInput();
	void RebuildBearerList(TArray<class UFortPlayerStateAthena*>& CrownBearerList);
	void OnInputMethodChanged(enum class ECommonInputType CurrentInput);
	void OnCloseActionsComplete();
	void OnButtonCloseProgress(float Progress);
	void OnButtonClose();
	void HandleGamePhaseStepChanged(TScriptInterface<class UFortSafeZoneInterface>& SafeZoneInterface, enum class EAthenaGamePhaseStep GamePhaseStep);
	void FadeOutTimerFinished();
};

}


