#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x200 - 0x200)
// Class VerseNative.VerseClassBase
class UVerseClassBase : public UClass
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseClassBase");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class VerseNative.VersePersistentVarWeakMapKey
class UVersePersistentVarWeakMapKey : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VersePersistentVarWeakMapKey");
		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class VerseNative.VerseAsset
class UVerseAsset : public UObject
{
public:
	TSubclassOf<class UObject>                   AssetClass;                                        // 0x28(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseAsset");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class VerseNative.VerseStmLibrary
class UVerseStmLibrary : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseStmLibrary");
		return Clss;
	}

	void StmSave(struct FAkeType& Property);
	void StmRollback();
	void StmLeaveFrame();
	void StmEnterFrame();
	void StmCommit();
	void StmBegin();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
