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
// AnimBlueprintGeneratedClass Fauna_Idle_AnimInterface.Fauna_Idle_AnimInterface_C
class UFauna_Idle_AnimInterface_C : public UAnimLayerInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Fauna_Idle_AnimInterface_C");
		return Clss;
	}

	void Fauna_IdleTurn(const struct FPoseLink& InPose_IdleTurn, struct FPoseLink* Fauna_IdleTurn);
	void Fauna_Idle(const struct FPoseLink& InPose_Idle, struct FPoseLink* Fauna_Idle);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
