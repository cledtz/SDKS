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

// 0x10 (0x338 - 0x328)
// WidgetBlueprintGeneratedClass ToastDisplayArea.ToastDisplayArea_C
class UToastDisplayArea_C : public UFortToastDisplayArea
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x328(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USafeZone*                             SafeZone_0;                                        // 0x330(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ToastDisplayArea_C");
		return Clss;
	}

	void TestFrontendToast();
	void ExecuteUbergraph_ToastDisplayArea(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
