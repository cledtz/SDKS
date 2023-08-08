#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x90 - 0x90)
// BlueprintGeneratedClass VoxelFireAttachHandler.VoxelFireAttachHandler_C
class UVoxelFireAttachHandler_C : public UFortCurieElementAttachHandlerVoxelFire
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VoxelFireAttachHandler_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
