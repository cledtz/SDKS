#pragma once

// Dumped with Dumper-7!


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

	static class UClass* StaticClass();
	static class UCRDPlayerTrackerUIComponent* GetDefaultObj();

};

// 0x10 (0x320 - 0x310)
// Class CRDPlayerTrackerUI.CRDPlayerTrackerWidget
class UCRDPlayerTrackerWidget : public UFortHUDElementWidget
{
public:
	uint8                                        Pad_420E[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UCRDPlayerTrackerWidget* GetDefaultObj();

};

}


