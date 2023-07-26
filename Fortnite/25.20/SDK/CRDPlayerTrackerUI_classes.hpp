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

// 0x8 (0xA8 - 0xA0)
// Class CRDPlayerTrackerUI.CRDPlayerTrackerUIComponent
class UCRDPlayerTrackerUIComponent : public UActorComponent
{
public:
	class UCRDPlayerTrackerWidget*               SpawnedWidget;                                     // 0xA0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CRDPlayerTrackerUIComponent");
		return Clss;
	}

};

// 0x10 (0x320 - 0x310)
// Class CRDPlayerTrackerUI.CRDPlayerTrackerWidget
class UCRDPlayerTrackerWidget : public UFortHUDElementWidget
{
public:
	uint8                                        Pad_2733[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CRDPlayerTrackerWidget");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
