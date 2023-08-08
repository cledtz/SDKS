#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x508 - 0x4C0)
// AnimBlueprintGeneratedClass Player_PropertiesDebug_AnimBP.Player_PropertiesDebug_AnimBP_C
class UPlayer_PropertiesDebug_AnimBP_C : public UFortPlayerDebugAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x4C8(0x8)()
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x4D0(0x8)()
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x4D8(0x20)()
	struct FAnimNode_RefPose                     AnimGraphNode_IdentityPose;                        // 0x4F8(0x10)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Player_PropertiesDebug_AnimBP_C");
		return Clss;
	}

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Player_PropertiesDebug_AnimBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
