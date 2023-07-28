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
// Class SkeletalMerging.SkeletalMergingLibrary
class USkeletalMergingLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SkeletalMergingLibrary");
		return Clss;
	}

	class USkeleton* MergeSkeletons(struct FSkeletonMergeParams& Params);
	class USkeletalMesh* MergeMeshes(struct FSkeletalMeshMergeParams& Params);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
