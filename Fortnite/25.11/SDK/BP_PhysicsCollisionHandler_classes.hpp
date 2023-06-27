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

// 0x0 (0xA8 - 0xA8)
// BlueprintGeneratedClass BP_PhysicsCollisionHandler.BP_PhysicsCollisionHandler_C
class UBP_PhysicsCollisionHandler_C : public UFortPhysicsCollisionHandler
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_PhysicsCollisionHandler_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
