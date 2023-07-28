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

// 0x140 (0x168 - 0x28)
// Class ACLPlugin.AnimationCompressionLibraryDatabase
class UAnimationCompressionLibraryDatabase : public UObject
{
public:
	TArray<uint8>                                CookedCompressedBytes;                             // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<uint64>                               CookedAnimSequenceMappings;                        // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8183[0x118];                                   // Fixing Size After Last Property..
	uint32                                       MaxStreamRequestSizeKB;                            // 0x160(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8184[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AnimationCompressionLibraryDatabase");
		return Clss;
	}

	void SetVisualFidelity(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UAnimationCompressionLibraryDatabase* DatabaseAsset, enum class EACLVisualFidelityChangeResult* Result, enum class EACLVisualFidelity VisualFidelity);
	enum class EACLVisualFidelity GetVisualFidelity(class UAnimationCompressionLibraryDatabase* DatabaseAsset);
};

// 0x0 (0x38 - 0x38)
// Class ACLPlugin.AnimBoneCompressionCodec_ACLBase
class UAnimBoneCompressionCodec_ACLBase : public UAnimBoneCompressionCodec
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AnimBoneCompressionCodec_ACLBase");
		return Clss;
	}

};

// 0x0 (0x38 - 0x38)
// Class ACLPlugin.AnimBoneCompressionCodec_ACL
class UAnimBoneCompressionCodec_ACL : public UAnimBoneCompressionCodec_ACLBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AnimBoneCompressionCodec_ACL");
		return Clss;
	}

};

// 0x0 (0x38 - 0x38)
// Class ACLPlugin.AnimBoneCompressionCodec_ACLCustom
class UAnimBoneCompressionCodec_ACLCustom : public UAnimBoneCompressionCodec_ACLBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AnimBoneCompressionCodec_ACLCustom");
		return Clss;
	}

};

// 0x8 (0x40 - 0x38)
// Class ACLPlugin.AnimBoneCompressionCodec_ACLDatabase
class UAnimBoneCompressionCodec_ACLDatabase : public UAnimBoneCompressionCodec_ACLBase
{
public:
	class UAnimationCompressionLibraryDatabase*  DatabaseAsset;                                     // 0x38(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AnimBoneCompressionCodec_ACLDatabase");
		return Clss;
	}

};

// 0x0 (0x38 - 0x38)
// Class ACLPlugin.AnimBoneCompressionCodec_ACLSafe
class UAnimBoneCompressionCodec_ACLSafe : public UAnimBoneCompressionCodec_ACLBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AnimBoneCompressionCodec_ACLSafe");
		return Clss;
	}

};

// 0x0 (0x38 - 0x38)
// Class ACLPlugin.AnimCurveCompressionCodec_ACL
class UAnimCurveCompressionCodec_ACL : public UAnimCurveCompressionCodec
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AnimCurveCompressionCodec_ACL");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
