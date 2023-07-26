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

// 0x8 (0x388 - 0x380)
// BlueprintGeneratedClass B_CameraLens_Shadow_Bomb_End.B_CameraLens_Shadow_Bomb_End_C
class AB_CameraLens_Shadow_Bomb_End_C : public AEmitterCameraLensEffectBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x380(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_CameraLens_Shadow_Bomb_End_C");
		return Clss;
	}

	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_CameraLens_Shadow_Bomb_End(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
