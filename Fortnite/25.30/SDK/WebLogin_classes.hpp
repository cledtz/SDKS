#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x550 - 0x538)
// WidgetBlueprintGeneratedClass WebLogin.WebLogin_C
class UWebLogin_C : public UFortWebLoginWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x538(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCircularThrobber*                     Throbber;                                          // 0x540(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               WebContent;                                        // 0x548(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WebLogin_C");
		return Clss;
	}

	void DisplayWidget(class UWidget* WebWidget);
	void DismissWidget();
	void ExecuteUbergraph_WebLogin(int32 EntryPoint, class UWidget* K2Node_Event_WebWidget, class UPanelSlot* CallFunc_AddChild_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
