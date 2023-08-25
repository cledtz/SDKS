#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x5C0 - 0x5B0)
// WidgetBlueprintGeneratedClass JoinServer.JoinServer_C
class UJoinServer_C : public UFortUIStateWidget_JoinServer
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBuildWatermark_C*                     BuildWatermark;                                    // 0x5B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UJoinServer_C* GetDefaultObj();

	void OnEnterState(enum class EFortUIState PreviousUIState);
	void OnShowTutorialDialog();
	void ExecuteUbergraph_JoinServer(int32 EntryPoint, enum class EFortUIState K2Node_Event_PreviousUIState);
};

}


