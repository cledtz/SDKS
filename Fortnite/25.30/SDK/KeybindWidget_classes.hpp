#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xB90 - 0xB80)
// WidgetBlueprintGeneratedClass KeybindWidget.KeybindWidget_C
class UKeybindWidget_C : public UFortKeybindWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB80(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_Preview;                                     // 0xB88(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("KeybindWidget_C");
		return Clss;
	}

	void Construct();
	void ExecuteUbergraph_KeybindWidget(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
