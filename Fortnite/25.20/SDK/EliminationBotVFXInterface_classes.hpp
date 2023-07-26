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
// BlueprintGeneratedClass EliminationBotVFXInterface.EliminationBotVFXInterface_C
class UEliminationBotVFXInterface_C : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EliminationBotVFXInterface_C");
		return Clss;
	}

	void EndVFX();
	void TriggerVFX();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
