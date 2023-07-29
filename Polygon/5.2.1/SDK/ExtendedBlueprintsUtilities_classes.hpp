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
// Class ExtendedBlueprintsUtilities.ExtendedBlueprintsUtilitiesBPLibrary
class UExtendedBlueprintsUtilitiesBPLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ExtendedBlueprintsUtilitiesBPLibrary");
		return Clss;
	}

	class UActor* SpawnActorFromTemplate(class UObject* WorldContextObject, class UActor* TemplateActor, struct FTransform& SpawnTransform, class UActor* Owner);
	void GetDefaultComponentsByClass(class UClass* ActorClass, class UClass* ComponentClass, TArray<class UActorComponent*>* OutArray);
	class UActor* ClassDefaultObject(class UClass* ObjectClass);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
