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

// 0x1550 (0x1C50 - 0x700)
// AnimBlueprintGeneratedClass HighTower_Tapas_Axe_AnimBP.HighTower_Tapas_Axe_AnimBP_C
class UHighTower_Tapas_Axe_AnimBP_C : public UCustomCharacterPartAnimInstance_HightowerTapasAxe
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x700(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0x708(0x2)(HasGetValueTypeHash)
	uint8                                        Pad_8F06[0x6];                                     // Fixing Size After Last Property..
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x710(0x8)()
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x718(0x8)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2;             // 0x720(0x20)()
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh;                    // 0x740(0x1D0)(ContainsInstancedReference)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x910(0x20)()
	struct FAnimNode_Trail                       AnimGraphNode_Trail;                               // 0x930(0x2A0)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0xBD0(0x128)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0xCF8(0x48)()
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody;                           // 0xD40(0x9A0)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;             // 0x16E0(0x20)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x1700(0x20)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_1;                    // 0x1720(0x100)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_3;                     // 0x1820(0x28)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x1848(0x20)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2;                     // 0x1868(0x28)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x1890(0x28)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x18B8(0x128)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x19E0(0x20)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x1A00(0x20)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x1A20(0x48)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x1A68(0x100)()
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend;                         // 0x1B68(0xC0)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x1C28(0x28)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HighTower_Tapas_Axe_AnimBP_C");
		return Clss;
	}

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_HighTower_Tapas_Axe_AnimBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
