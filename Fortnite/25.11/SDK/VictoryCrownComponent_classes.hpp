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

// 0x8 (0x280 - 0x278)
// BlueprintGeneratedClass VictoryCrownComponent.VictoryCrownComponent_C
class UVictoryCrownComponent_C : public UFortControllerComponent_VictoryCrowns
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VictoryCrownComponent_C");
		return Clss;
	}

	void ReceiveBeginPlay();
	void ExecuteUbergraph_VictoryCrownComponent(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
