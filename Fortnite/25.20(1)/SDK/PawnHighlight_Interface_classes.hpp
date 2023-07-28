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
// BlueprintGeneratedClass PawnHighlight_Interface.PawnHighlight_Interface_C
class UPawnHighlight_Interface_C : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PawnHighlight_Interface_C");
		return Clss;
	}

	void RemoveHighlightFromSource(class UObject* Source);
	void AddHighlightFromSource(class UObject* Source, const struct FPawnHighlight& Highlight, bool OnlyUpdateIfCurrent);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
