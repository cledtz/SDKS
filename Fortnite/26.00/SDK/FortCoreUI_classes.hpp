#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x98 - 0x68)
// Class FortCoreUI.FortCTAButtonViewModel
class UFortCTAButtonViewModel : public UMVVMViewModelBase
{
public:
	class FText                                  Text;                                              // 0x68(0x18)(BlueprintVisible, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	class FText                                  SecondaryText;                                     // 0x80(0x18)(BlueprintVisible, ExposeOnSpawn, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortCTAButtonViewModel* GetDefaultObj();

};

}


