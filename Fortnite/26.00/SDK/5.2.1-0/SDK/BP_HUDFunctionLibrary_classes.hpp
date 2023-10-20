#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_HUDFunctionLibrary.BP_HUDFunctionLibrary_C
class UBP_HUDFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBP_HUDFunctionLibrary_C* GetDefaultObj();

	void GetColorByID(class FName RowName, class UObject* __WorldContext, struct FLinearColor* Color, bool* Found, const struct FST_HUDColor& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
};

}


