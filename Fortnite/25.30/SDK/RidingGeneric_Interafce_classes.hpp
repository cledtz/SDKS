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
// BlueprintGeneratedClass RidingGeneric_Interafce.RidingGeneric_Interafce_C
class URidingGeneric_Interafce_C : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RidingGeneric_Interafce_C");
		return Clss;
	}

	void ToggleRidingAlternative();
	void GetRidingInfoFromTarget(double* JumpAttachGroundHeightMin, double* JumpAttachGroundHeightBuffer, bool* UsesAltRidingMessage);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
