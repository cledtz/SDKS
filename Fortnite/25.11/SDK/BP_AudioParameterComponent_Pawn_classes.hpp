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

// 0x21 (0x111 - 0xF0)
// BlueprintGeneratedClass BP_AudioParameterComponent_Pawn.BP_AudioParameterComponent_Pawn_C
class UBP_AudioParameterComponent_Pawn_C : public UFortAudioParameterComponent_Pawn
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xF0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                LocalViewTarget;                                   // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<struct FAudioParameterQueryData>      QueryAudioParams;                                  // 0x100(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         bDebugEnabled;                                     // 0x110(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_AudioParameterComponent_Pawn_C");
		return Clss;
	}

	void PrintParameter(struct FAudioParameterQueryData& Parameter, bool Condition);
	void OnViewTargetSet(class AActor* Actor);
	void ExecuteUbergraph_BP_AudioParameterComponent_Pawn(int32 EntryPoint, class AActor* K2Node_Event_Actor);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
