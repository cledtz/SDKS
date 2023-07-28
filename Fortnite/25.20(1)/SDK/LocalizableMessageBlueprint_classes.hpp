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
// Class LocalizableMessageBlueprint.LocalizableMessageLibrary
class ULocalizableMessageLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LocalizableMessageLibrary");
		return Clss;
	}

	void Reset_LocalizableMessage(struct FLocalizableMessage& Message);
	bool IsEmpty_LocalizableMessage(struct FLocalizableMessage& Message);
	class FText Conv_LocalizableMessageToText(class UObject* WorldContextObject, struct FLocalizableMessage& Message);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
