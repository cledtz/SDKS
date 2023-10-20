#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x390 - 0x388)
// BlueprintGeneratedClass BP_Item_Optic_OKP7_01.BP_Item_Optic_OKP7_01_C
class UBP_Item_Optic_OKP7_01_C : public UItem_Module_Optic
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x388(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_Item_Optic_OKP7_01_C* GetDefaultObj();

	void SetCorrectiveFovMaterial(bool UseFovMaterial);
	void ExecuteUbergraph_BP_Item_Optic_OKP7_01(int32 EntryPoint, bool Temp_bool_Variable, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, bool K2Node_Event_useFovMaterial, class UMaterialInterface* K2Node_Select_Default);
};

}


