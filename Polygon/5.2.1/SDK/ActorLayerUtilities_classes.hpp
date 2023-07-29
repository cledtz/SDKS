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
// Class ActorLayerUtilities.LayersBlueprintLibrary
class ULayersBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LayersBlueprintLibrary");
		return Clss;
	}

	void RemoveActorFromLayer(class UActor* InActor, struct FActorLayer& Layer);
	TArray<class UActor*> GetActors(class UObject* WorldContextObject, struct FActorLayer& ActorLayer);
	void AddActorToLayer(class UActor* InActor, struct FActorLayer& Layer);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
