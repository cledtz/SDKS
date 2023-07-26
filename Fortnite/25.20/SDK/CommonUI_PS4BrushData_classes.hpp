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

// 0x0 (0xF8 - 0xF8)
// BlueprintGeneratedClass CommonUI_PS4BrushData.CommonUI_PS4BrushData_C
class UCommonUI_PS4BrushData_C : public UFortInputControllerData
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonUI_PS4BrushData_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
