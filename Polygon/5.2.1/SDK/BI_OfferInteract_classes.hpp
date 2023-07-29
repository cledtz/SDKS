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
// BlueprintGeneratedClass BI_OfferInteract.BI_OfferInteract_C
class UBI_OfferInteract_C : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BI_OfferInteract_C");
		return Clss;
	}

	void RemoveOffer();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
