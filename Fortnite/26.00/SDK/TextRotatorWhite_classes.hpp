#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x14E0 - 0x14C8)
// WidgetBlueprintGeneratedClass TextRotatorWhite.TextRotatorWhite_C
class UTextRotatorWhite_C : public UCommonRotator
{
public:
	uint8                                        Pad_8941[0x8];                                     // Fixing Size After Last Property 
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x14D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonBorder*                         MainBorder;                                        // 0x14D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTextRotatorWhite_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_TextRotatorWhite(int32 EntryPoint);
};

}


