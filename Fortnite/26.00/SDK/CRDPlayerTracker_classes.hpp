#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xA0 - 0xA0)
// Class CRDPlayerTracker.CRDPlayerTrackerComponent
class UCRDPlayerTrackerComponent : public UActorComponent
{
public:

	static class UClass* StaticClass();
	static class UCRDPlayerTrackerComponent* GetDefaultObj();

};

// 0x10 (0x2A0 - 0x290)
// Class CRDPlayerTracker.CRDPlayerTrackerMarker
class UCRDPlayerTrackerMarker : public UActor
{
public:
	TSubclassOf<class UUserWidget>               WidgetClass;                                       // 0x290(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActorComponent*                       PlayerTrackerUIActorComponent;                     // 0x298(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UCRDPlayerTrackerMarker* GetDefaultObj();

	bool DestroyPlayerTrackerWidget(class UFortPlayerControllerGameplay* InFortPlayerControllerGameplay);
	class UUserWidget* CreatePlayerTrackerWidget(class UFortPlayerControllerGameplay* InFortPlayerControllerGameplay, class UFortPlayerStateAthena* AssociatedPSA);
};

}


