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

// 0x20 (0x418 - 0x3F8)
// Class UEKittUI.UEKittUIPanelWidget
class UUEKittUIPanelWidget : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_859C[0x8];                                     // Fixing Size After Last Property..
	class UFortUEKittWidget*                     KittWidget;                                        // 0x400(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_859D[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UEKittUIPanelWidget");
		return Clss;
	}

	void SetupInput(bool bSetup);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
