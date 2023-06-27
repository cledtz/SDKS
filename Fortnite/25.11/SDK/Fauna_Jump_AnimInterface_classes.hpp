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
// AnimBlueprintGeneratedClass Fauna_Jump_AnimInterface.Fauna_Jump_AnimInterface_C
class UFauna_Jump_AnimInterface_C : public UAnimLayerInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Fauna_Jump_AnimInterface_C");
		return Clss;
	}

	void Fauna_Jump(struct FPoseLink* Fauna_Jump);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
