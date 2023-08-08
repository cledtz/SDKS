#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

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

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameFeatureAction_AddAttributeDefaults");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
