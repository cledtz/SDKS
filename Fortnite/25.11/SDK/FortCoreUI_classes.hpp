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

// 0x30 (0x98 - 0x68)
// Class FortCoreUI.FortCTAButtonViewModel
class UFortCTAButtonViewModel : public UMVVMViewModelBase
{
public:
	class FText                                  Text;                                              // 0x68(0x18)(BlueprintVisible, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	class FText                                  SecondaryText;                                     // 0x80(0x18)(BlueprintVisible, ExposeOnSpawn, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCTAButtonViewModel");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
