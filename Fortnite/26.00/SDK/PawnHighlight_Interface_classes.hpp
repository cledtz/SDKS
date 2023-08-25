#pragma once

// Dumped with Dumper-7!


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

	static class UClass* StaticClass();
	static class UPawnHighlight_Interface_C* GetDefaultObj();

	void RemoveHighlightFromSource(class UObject* Source);
	void AddHighlightFromSource(class UObject* Source, const struct FPawnHighlight& Highlight, bool OnlyUpdateIfCurrent);
};

}


