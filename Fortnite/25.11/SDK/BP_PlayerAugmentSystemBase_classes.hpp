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

// 0x0 (0x1A8 - 0x1A8)
// BlueprintGeneratedClass BP_PlayerAugmentSystemBase.BP_PlayerAugmentSystemBase_C
class UBP_PlayerAugmentSystemBase_C : public UFortPlayerStateComponent_PlayerAugmentSystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_PlayerAugmentSystemBase_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
