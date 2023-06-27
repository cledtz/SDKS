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

// 0x8 (0x108 - 0x100)
// BlueprintGeneratedClass CameraModifier_Athena_Sliding.CameraModifier_Athena_Sliding_C
class UCameraModifier_Athena_Sliding_C : public USlidingCameraModifier
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x100(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CameraModifier_Athena_Sliding_C");
		return Clss;
	}

	void BlendOut();
	void ExecuteUbergraph_CameraModifier_Athena_Sliding(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
