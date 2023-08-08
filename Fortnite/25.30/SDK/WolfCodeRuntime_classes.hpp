#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class WolfCodeRuntime.FortCheatManager_Wolf
class UFortCheatManager_Wolf : public UChildCheatManager
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCheatManager_Wolf");
		return Clss;
	}

	void WolfEnable(bool bEnable);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
