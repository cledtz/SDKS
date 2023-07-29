#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class BlueprintFileUtils.BlueprintFileUtilsBPLibrary
class UBlueprintFileUtilsBPLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BlueprintFileUtilsBPLibrary");
		return Clss;
	}

	bool MoveFile(const class FString& DestFilename, const class FString& SrcFilename, bool bReplace, bool bEvenIfReadOnly);
	bool MakeDirectory(const class FString& Path, bool bCreateTree);
	class FString GetUserDirectory();
	bool FindRecursive(const class FString& StartDirectory, TArray<class FString>* FoundPaths, const class FString& Wildcard, bool bFindFiles, bool bFindDirectories);
	bool FindFiles(const class FString& Directory, TArray<class FString>* FoundFiles, const class FString& FileExtension);
	bool FileExists(const class FString& Filename);
	bool DirectoryExists(const class FString& Directory);
	bool DeleteFile(const class FString& Filename, bool bMustExist, bool bEvenIfReadOnly);
	bool DeleteDirectory(const class FString& Directory, bool bMustExist, bool bDeleteRecursively);
	bool CopyFile(const class FString& DestFilename, const class FString& SrcFilename, bool bReplace, bool bEvenIfReadOnly);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
