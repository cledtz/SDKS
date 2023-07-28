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

// 0x0 (0x28 - 0x28)
// Class jg_test.jg_testBPLibrary
class UJg_testBPLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("jg_testBPLibrary");
		return Clss;
	}

	float Jg_testSampleFunction(float Param);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
