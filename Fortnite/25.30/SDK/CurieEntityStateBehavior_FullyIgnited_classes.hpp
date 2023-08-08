#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xE0 - 0xE0)
// BlueprintGeneratedClass CurieEntityStateBehavior_FullyIgnited.CurieEntityStateBehavior_FullyIgnited_C
class UCurieEntityStateBehavior_FullyIgnited_C : public UFortCurieEntityStateBehavior_Burning
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CurieEntityStateBehavior_FullyIgnited_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
