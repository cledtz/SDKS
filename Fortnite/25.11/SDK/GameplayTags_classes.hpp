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
// Class GameplayTags.BlueprintGameplayTagLibrary
class UBlueprintGameplayTagLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BlueprintGameplayTagLibrary");
		return Clss;
	}

	bool RemoveGameplayTag(struct FGameplayTagContainer& TagContainer, const struct FGameplayTag& Tag);
	bool NotEqual_TagTag(const struct FGameplayTag& A, const class FString& B);
	bool NotEqual_TagContainerTagContainer(const struct FGameplayTagContainer& A, const class FString& B);
	bool NotEqual_GameplayTagContainer(struct FGameplayTagContainer& A, struct FGameplayTagContainer& B);
	bool NotEqual_GameplayTag(const struct FGameplayTag& A, const struct FGameplayTag& B);
	bool MatchesTag(const struct FGameplayTag& TagOne, const struct FGameplayTag& TagTwo, bool bExactMatch);
	bool MatchesAnyTags(const struct FGameplayTag& TagOne, struct FGameplayTagContainer& OtherContainer, bool bExactMatch);
	struct FGameplayTagContainer MakeLiteralGameplayTagContainer(const struct FGameplayTagContainer& Value);
	struct FGameplayTag MakeLiteralGameplayTag(const struct FGameplayTag& Value);
	struct FGameplayTagQuery MakeGameplayTagQuery_MatchNoTags(struct FGameplayTagContainer& InTags);
	struct FGameplayTagQuery MakeGameplayTagQuery_MatchAnyTags(struct FGameplayTagContainer& InTags);
	struct FGameplayTagQuery MakeGameplayTagQuery_MatchAllTags(struct FGameplayTagContainer& InTags);
	struct FGameplayTagQuery MakeGameplayTagQuery(const struct FGameplayTagQuery& TagQuery);
	struct FGameplayTagContainer MakeGameplayTagContainerFromTag(const struct FGameplayTag& SingleTag);
	struct FGameplayTagContainer MakeGameplayTagContainerFromArray(TArray<struct FGameplayTag>& GameplayTags);
	bool IsTagQueryEmpty(struct FGameplayTagQuery& TagQuery);
	bool IsGameplayTagValid(const struct FGameplayTag& GameplayTag);
	bool HasTag(struct FGameplayTagContainer& TagContainer, const struct FGameplayTag& Tag, bool bExactMatch);
	bool HasAnyTags(struct FGameplayTagContainer& TagContainer, struct FGameplayTagContainer& OtherContainer, bool bExactMatch);
	bool HasAllTags(struct FGameplayTagContainer& TagContainer, struct FGameplayTagContainer& OtherContainer, bool bExactMatch);
	bool HasAllMatchingGameplayTags(FInterfaceProperty_ TagContainerInterface, struct FGameplayTagContainer& OtherContainer);
	class FName GetTagName(struct FGameplayTag& GameplayTag);
	int32 GetNumGameplayTagsInContainer(struct FGameplayTagContainer& TagContainer);
	class FString GetDebugStringFromGameplayTagContainer(struct FGameplayTagContainer& TagContainer);
	class FString GetDebugStringFromGameplayTag(const struct FGameplayTag& GameplayTag);
	void GetAllActorsOfClassMatchingTagQuery(class UObject* WorldContextObject, TSubclassOf<class AActor> ActorClass, struct FGameplayTagQuery& GameplayTagQuery, TArray<class AActor*>* OutActors);
	bool EqualEqual_GameplayTagContainer(struct FGameplayTagContainer& A, struct FGameplayTagContainer& B);
	bool EqualEqual_GameplayTag(const struct FGameplayTag& A, const struct FGameplayTag& B);
	bool DoesTagAssetInterfaceHaveTag(FInterfaceProperty_ TagContainerInterface, const struct FGameplayTag& Tag);
	bool DoesContainerMatchTagQuery(struct FGameplayTagContainer& TagContainer, struct FGameplayTagQuery& TagQuery);
	void BreakGameplayTagContainer(struct FGameplayTagContainer& GameplayTagContainer, TArray<struct FGameplayTag>* GameplayTags);
	void AppendGameplayTagContainers(struct FGameplayTagContainer& InOutTagContainer, struct FGameplayTagContainer& InTagContainer);
	void AddGameplayTag(struct FGameplayTagContainer& TagContainer, const struct FGameplayTag& Tag);
};

// 0x0 (0x28 - 0x28)
// Class GameplayTags.GameplayTagAssetInterface
class UGameplayTagAssetInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayTagAssetInterface");
		return Clss;
	}

	bool HasMatchingGameplayTag(const struct FGameplayTag& TagToCheck);
	bool HasAnyMatchingGameplayTags(struct FGameplayTagContainer& TagContainer);
	bool HasAllMatchingGameplayTags(struct FGameplayTagContainer& TagContainer);
	void GetOwnedGameplayTags(struct FGameplayTagContainer* TagContainer);
};

// 0x70 (0x98 - 0x28)
// Class GameplayTags.EditableGameplayTagQuery
class UEditableGameplayTagQuery : public UObject
{
public:
	class FString                                UserDescription;                                   // 0x28(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14DC[0x10];                                    // Fixing Size After Last Property..
	class UEditableGameplayTagQueryExpression*   RootExpression;                                    // 0x48(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                     TagQueryExportText_Helper;                         // 0x50(0x48)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EditableGameplayTagQuery");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class GameplayTags.EditableGameplayTagQueryExpression
class UEditableGameplayTagQueryExpression : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EditableGameplayTagQueryExpression");
		return Clss;
	}

};

// 0x20 (0x48 - 0x28)
// Class GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch
class UEditableGameplayTagQueryExpression_AnyTagsMatch : public UEditableGameplayTagQueryExpression
{
public:
	struct FGameplayTagContainer                 Tags;                                              // 0x28(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EditableGameplayTagQueryExpression_AnyTagsMatch");
		return Clss;
	}

};

// 0x20 (0x48 - 0x28)
// Class GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch
class UEditableGameplayTagQueryExpression_AllTagsMatch : public UEditableGameplayTagQueryExpression
{
public:
	struct FGameplayTagContainer                 Tags;                                              // 0x28(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EditableGameplayTagQueryExpression_AllTagsMatch");
		return Clss;
	}

};

// 0x20 (0x48 - 0x28)
// Class GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch
class UEditableGameplayTagQueryExpression_NoTagsMatch : public UEditableGameplayTagQueryExpression
{
public:
	struct FGameplayTagContainer                 Tags;                                              // 0x28(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EditableGameplayTagQueryExpression_NoTagsMatch");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch
class UEditableGameplayTagQueryExpression_AnyExprMatch : public UEditableGameplayTagQueryExpression
{
public:
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                       // 0x28(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EditableGameplayTagQueryExpression_AnyExprMatch");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch
class UEditableGameplayTagQueryExpression_AllExprMatch : public UEditableGameplayTagQueryExpression
{
public:
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                       // 0x28(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EditableGameplayTagQueryExpression_AllExprMatch");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch
class UEditableGameplayTagQueryExpression_NoExprMatch : public UEditableGameplayTagQueryExpression
{
public:
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                       // 0x28(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EditableGameplayTagQueryExpression_NoExprMatch");
		return Clss;
	}

};

// 0x220 (0x248 - 0x28)
// Class GameplayTags.GameplayTagsManager
class UGameplayTagsManager : public UObject
{
public:
	uint8                                        Pad_14DD[0x138];                                   // Fixing Size After Last Property..
	TMap<class FName, struct FGameplayTagSource> TagSources;                                        // 0x160(0x50)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_14DE[0x88];                                    // Fixing Size After Last Property..
	TArray<class UDataTable*>                    GameplayTagTables;                                 // 0x238(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayTagsManager");
		return Clss;
	}

};

// 0x20 (0x48 - 0x28)
// Class GameplayTags.GameplayTagsList
class UGameplayTagsList : public UObject
{
public:
	class FString                                ConfigFileName;                                    // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGameplayTagTableRow>          GameplayTagList;                                   // 0x38(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayTagsList");
		return Clss;
	}

};

// 0x20 (0x48 - 0x28)
// Class GameplayTags.RestrictedGameplayTagsList
class URestrictedGameplayTagsList : public UObject
{
public:
	class FString                                ConfigFileName;                                    // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRestrictedGameplayTagTableRow> RestrictedGameplayTagList;                         // 0x38(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RestrictedGameplayTagsList");
		return Clss;
	}

};

// 0x70 (0xB8 - 0x48)
// Class GameplayTags.GameplayTagsSettings
class UGameplayTagsSettings : public UGameplayTagsList
{
public:
	bool                                         ImportTagsFromConfig;                              // 0x48(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         WarnOnInvalidTags;                                 // 0x49(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ClearInvalidTags;                                  // 0x4A(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AllowEditorTagUnloading;                           // 0x4B(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AllowGameTagUnloading;                             // 0x4C(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         FastReplication;                                   // 0x4D(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14DF[0x2];                                     // Fixing Size After Last Property..
	class FString                                InvalidTagCharacters;                              // 0x50(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGameplayTagCategoryRemap>     CategoryRemapping;                                 // 0x60(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FSoftObjectPath>               GameplayTagTableList;                              // 0x70(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FGameplayTagRedirect>          GameplayTagRedirects;                              // 0x80(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<class FName>                          CommonlyReplicatedTags;                            // 0x90(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	int32                                        NumBitsForContainerSize;                           // 0xA0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NetIndexFirstBitSegment;                           // 0xA4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRestrictedConfigInfo>         RestrictedConfigFiles;                             // 0xA8(0x10)(Edit, ZeroConstructor, Config, AdvancedDisplay, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayTagsSettings");
		return Clss;
	}

};

// 0x18 (0x48 - 0x30)
// Class GameplayTags.GameplayTagsDeveloperSettings
class UGameplayTagsDeveloperSettings : public UDeveloperSettings
{
public:
	class FString                                DeveloperConfigName;                               // 0x30(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FavoriteTagSource;                                 // 0x40(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14E0[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayTagsDeveloperSettings");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
