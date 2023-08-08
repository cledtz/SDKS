#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1EE0 (0x2430 - 0x550)
// AnimBlueprintGeneratedClass Player_DBNOCarried_AnimBP.Player_DBNOCarried_AnimBP_C
class UPlayer_DBNOCarried_AnimBP_C : public UFortPlayerDBNOCarriedAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x550(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0x558(0x4A)(HasGetValueTypeHash)
	uint8                                        Pad_3379[0x6];                                     // Fixing Size After Last Property
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x5A8(0x8)()
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x5B0(0x8)()
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x5B8(0x20)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x5D8(0x20)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x5F8(0x128)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x720(0x128)()
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_8;                 // 0x848(0x40)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_13;                   // 0x888(0x48)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_6;                     // 0x8D0(0xC8)()
	uint8                                        Pad_337B[0x8];                                     // Fixing Size After Last Property
	struct FAnimNode_TwoBoneIK                   AnimGraphNode_TwoBoneIK;                           // 0x9A0(0x260)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0xC00(0x20)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_8;                  // 0xC20(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_7;                  // 0xC48(0x28)()
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_7;                 // 0xC70(0x40)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_7;                       // 0xCB0(0x20)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_2;                  // 0xCD0(0x70)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_5;                     // 0xD40(0xC8)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_4;                     // 0xE08(0xC8)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_1;                  // 0xED0(0x70)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_6;                  // 0xF40(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5;                  // 0xF68(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4;                  // 0xF90(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0xFB8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0xFE0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x1008(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x1030(0x28)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_12;                   // 0x1058(0x48)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_3;                     // 0x10A0(0xC8)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_11;                   // 0x1168(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_6;                       // 0x11B0(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_10;                   // 0x11D0(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_12;                  // 0x1218(0x48)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0x1260(0x70)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_2;                     // 0x12D0(0xC8)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_9;                    // 0x1398(0x48)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_1;                     // 0x13E0(0xC8)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_8;                    // 0x14A8(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_5;                       // 0x14F0(0x20)()
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_6;                 // 0x1510(0x40)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_7;                    // 0x1550(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_11;                  // 0x1598(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_10;                  // 0x15E0(0x48)()
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_5;                 // 0x1628(0x40)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_9;                   // 0x1668(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6;                    // 0x16B0(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_4;                       // 0x16F8(0x20)()
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_4;                 // 0x1718(0x40)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0x1758(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_8;                   // 0x17A0(0x48)()
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_3;                 // 0x17E8(0x40)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_7;                   // 0x1828(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x1870(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_6;                   // 0x18B8(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_5;                   // 0x1900(0x48)()
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_2;                 // 0x1948(0x40)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_4;                   // 0x1988(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_3;                   // 0x19D0(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x1A18(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0x1A60(0x48)()
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_1;                 // 0x1AA8(0x40)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x1AE8(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0x1B30(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x1B50(0x48)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive;                       // 0x1B98(0xC8)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x1C60(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x1CA8(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_1;                      // 0x1CC8(0xC8)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x1D90(0x20)()
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator;                   // 0x1DB0(0x40)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x1DF0(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x1E10(0xC8)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x1ED8(0x20)()
	uint8                                        Pad_337F[0x8];                                     // Fixing Size After Last Property
	struct FAnimNode_Trail                       AnimGraphNode_Trail;                               // 0x1F00(0x2A0)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x21A0(0x48)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x21E8(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x2230(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x2278(0x48)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x22C0(0x100)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x23C0(0x28)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x23E8(0x28)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x2410(0x20)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Player_DBNOCarried_AnimBP_C");
		return Clss;
	}

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Player_DBNOCarried_AnimBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
