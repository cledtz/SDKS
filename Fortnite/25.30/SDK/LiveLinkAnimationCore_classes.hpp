#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x350 - 0x350)
// Class LiveLinkAnimationCore.LiveLinkInstance
class ULiveLinkInstance : public UAnimInstance
{
public:
	class ULiveLinkRetargetAsset*                CurrentRetargetAsset;                              // 0x348(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkInstance");
		return Clss;
	}

	void SetSubject(const struct FLiveLinkSubjectName& SubjectName);
	void SetRetargetAsset(TSubclassOf<class ULiveLinkRetargetAsset> RetargetAsset);
};

// 0x0 (0x28 - 0x28)
// Class LiveLinkAnimationCore.LiveLinkRetargetAsset
class ULiveLinkRetargetAsset : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkRetargetAsset");
		return Clss;
	}

};

// 0xA0 (0xC8 - 0x28)
// Class LiveLinkAnimationCore.LiveLinkRemapAsset
class ULiveLinkRemapAsset : public ULiveLinkRetargetAsset
{
public:
	uint8                                        Pad_1380[0xA0];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkRemapAsset");
		return Clss;
	}

	void RemapCurveElements(TMap<class FName, float>& CurveItems);
	class FName GetRemappedCurveName(class FName CurveName);
	class FName GetRemappedBoneName(class FName BoneName);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
