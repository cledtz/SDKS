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

// 0x0 (0xA0 - 0xA0)
// Class CRDPlayerTracker.CRDPlayerTrackerComponent
class UCRDPlayerTrackerComponent : public UActorComponent
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CRDPlayerTrackerComponent");
		return Clss;
	}

};

// 0x10 (0x2A0 - 0x290)
// Class CRDPlayerTracker.CRDPlayerTrackerMarker
class ACRDPlayerTrackerMarker : public AActor
{
public:
	TSubclassOf<class UUserWidget>               WidgetClass;                                       // 0x290(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActorComponent*                       PlayerTrackerUIActorComponent;                     // 0x298(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CRDPlayerTrackerMarker");
		return Clss;
	}

	bool DestroyPlayerTrackerWidget(class AFortPlayerControllerGameplay* InFortPlayerControllerGameplay);
	class UUserWidget* CreatePlayerTrackerWidget(class AFortPlayerControllerGameplay* InFortPlayerControllerGameplay, class AFortPlayerStateAthena* AssociatedPSA);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
