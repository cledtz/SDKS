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

// 0x0 (0xC88 - 0xC88)
// BlueprintGeneratedClass BGA_Rift_Portal_VM.BGA_Rift_Portal_VM_C
class UBGA_Rift_Portal_VM_C : public UBGA_RiftPortal_Item_Athena_C
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BGA_Rift_Portal_VM_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
