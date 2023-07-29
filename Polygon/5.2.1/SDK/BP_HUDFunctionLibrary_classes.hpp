#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

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

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_HUDFunctionLibrary_C");
		return Clss;
	}

	void GetColorByID(class FName RowName, class UObject* __WorldContext, struct FLinearColor* Color, bool* Found, const struct FST_HUDColor& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
