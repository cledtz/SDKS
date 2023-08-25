#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x38 - 0x28)
// Class AbilitySystemGameFeatureActions.GameFeatureAction_AddAttributeDefaults
class UGameFeatureAction_AddAttributeDefaults : public UGameFeatureAction
{
public:
	TArray<struct FSoftObjectPath>               AttribDefaultTableNames;                           // 0x28(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGameFeatureAction_AddAttributeDefaults* GetDefaultObj();

};

}


