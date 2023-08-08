#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x280 - 0x280)
// BlueprintGeneratedClass FMMEL_TacSprint.FMMEL_TacSprint_C
class UFMMEL_TacSprint_C : public UFortMovementMode_ELTacSprint
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FMMEL_TacSprint_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
