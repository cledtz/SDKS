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

// 0x8 (0x378 - 0x370)
// BlueprintGeneratedClass B_CameraLens_SpookyMist_Loop.B_CameraLens_SpookyMist_Loop_C
class AB_CameraLens_SpookyMist_Loop_C : public AEmitterCameraLensEffectBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x370(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_CameraLens_SpookyMist_Loop_C");
		return Clss;
	}

	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_CameraLens_SpookyMist_Loop(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
