#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x2B8 - 0x2A8)
// WidgetBlueprintGeneratedClass CurrencyListView.CurrencyListView_C
class UCurrencyListView_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonListView*                       DataListView;                                      // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCurrencyListView_C* GetDefaultObj();

	void AddDataToList(const struct FCurrencyData& CurrencyData, class UCurrencyListObject_C* CallFunc_SpawnObject_ReturnValue);
	void RunClearListView();
	void ExecuteUbergraph_CurrencyListView(int32 EntryPoint);
};

}


