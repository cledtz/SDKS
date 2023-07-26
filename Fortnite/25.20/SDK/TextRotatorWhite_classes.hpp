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

// 0x10 (0x14E0 - 0x14D0)
// WidgetBlueprintGeneratedClass TextRotatorWhite.TextRotatorWhite_C
class UTextRotatorWhite_C : public UCommonRotator
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x14D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonBorder*                         MainBorder;                                        // 0x14D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TextRotatorWhite_C");
		return Clss;
	}

	void Construct();
	void ExecuteUbergraph_TextRotatorWhite(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
