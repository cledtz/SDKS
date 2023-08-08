#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x970 - 0x968)
// BlueprintGeneratedClass GCNL_Athena_HidingProp_PropTeleporting.GCNL_Athena_HidingProp_PropTeleporting_C
class UGCNL_Athena_HidingProp_PropTeleporting_C : public UFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x968(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCNL_Athena_HidingProp_PropTeleporting_C");
		return Clss;
	}

	void ReceiveBeginPlay();
	void ExecuteUbergraph_GCNL_Athena_HidingProp_PropTeleporting(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
