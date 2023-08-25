#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x2D0 - 0x2A0)
// BlueprintGeneratedClass CreativeTeamColors.CreativeTeamColors_C
class UCreativeTeamColors_C : public USceneComponent
{
public:
	TArray<struct FLinearColor>                  TeamLightColors;                                   // 0x2A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FLinearColor>                  TeamSelectorColors;                                // 0x2B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FLinearColor>                  TeamBoldColors;                                    // 0x2C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UCreativeTeamColors_C* GetDefaultObj();

};

}


