#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x48 - 0x10)
// ScriptStruct LiveLinkAnimationCore.AnimNode_LiveLinkPose
struct FAnimNode_LiveLinkPose : public FAnimNode_Base
{
public:
	struct FPoseLink                             InputPose;                                         // 0x10(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FLiveLinkSubjectName                  LiveLinkSubjectName;                               // 0x20(0x4)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21A6[0x4];                                     // Fixing Size After Last Property..
	TSubclassOf<class ULiveLinkRetargetAsset>    RetargetAsset;                                     // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoClear, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULiveLinkRetargetAsset*                CurrentRetargetAsset;                              // 0x30(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21A7[0x10];                                    // Fixing Size Of Struct..
};

// 0x48 (0x740 - 0x6F8)
// ScriptStruct LiveLinkAnimationCore.LiveLinkInstanceProxy
struct FLiveLinkInstanceProxy : public FAnimInstanceProxy
{
public:
	struct FAnimNode_LiveLinkPose                PoseNode;                                          // 0x6F8(0x48)(Edit, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
