#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x220 - 0x220)
// BlueprintGeneratedClass EventMode_Activator_Component.EventMode_Activator_Component_C
class UEventMode_Activator_Component_C : public UFortGameFrameworkComponent_EventMode
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EventMode_Activator_Component_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
