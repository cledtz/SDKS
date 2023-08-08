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
// BlueprintGeneratedClass Campfire_Interface.Campfire_Interface_C
class UCampfire_Interface_C : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Campfire_Interface_C");
		return Clss;
	}

	void GetWoodComponent(class UStaticMeshComponent** WoodComponent);
	void IsStoked(bool* IsStoked);
	void GetLocationToSpawnFireVFX(struct FVector* WorldLocation);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
