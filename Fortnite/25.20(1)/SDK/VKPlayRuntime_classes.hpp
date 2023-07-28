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
// Class VKPlayRuntime.FortVKPlayGameFeatureAction_RegisterContentErrorHandler
class UFortVKPlayGameFeatureAction_RegisterContentErrorHandler : public UGameFeatureAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortVKPlayGameFeatureAction_RegisterContentErrorHandler");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
