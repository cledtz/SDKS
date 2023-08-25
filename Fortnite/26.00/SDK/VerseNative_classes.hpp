#pragma once

// Dumped with Dumper-7!


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

	static class UClass* StaticClass();
	static class UVerseClassBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class VerseNative.VersePersistentVarWeakMapKey
class UVersePersistentVarWeakMapKey : public UObject
{
public:

	static class UClass* StaticClass();
	static class UVersePersistentVarWeakMapKey* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class VerseNative.VerseAsset
class UVerseAsset : public UObject
{
public:
	TSubclassOf<class UObject>                   AssetClass;                                        // 0x28(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UVerseAsset* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class VerseNative.VerseStmLibrary
class UVerseStmLibrary : public UObject
{
public:

	static class UClass* StaticClass();
	static class UVerseStmLibrary* GetDefaultObj();

	void StmSave(struct FAkeType& Property);
	void StmRollback();
	void StmLeaveFrame();
	void StmEnterFrame();
	void StmEnabled();
	void StmCommit();
	void StmBegin();
};

}


