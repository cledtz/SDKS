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
// Class FortniteConversationRuntime.FortConversationMarkerInterface
class UFortConversationMarkerInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortConversationMarkerInterface");
		return Clss;
	}

};

// 0x0 (0x1A0 - 0x1A0)
// Class FortniteConversationRuntime.FortConversationParticipantComponent
class UFortConversationParticipantComponent : public UConversationParticipantComponent
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortConversationParticipantComponent");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class FortniteConversationRuntime.FortConversationContextCondition
class UFortConversationContextCondition : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortConversationContextCondition");
		return Clss;
	}

	bool DoesContextPass(struct FConversationContext& Context);
};

// 0x18 (0x40 - 0x28)
// Class FortniteConversationRuntime.FortConversationContextCondition_ParticipantHasCID
class UFortConversationContextCondition_ParticipantHasCID : public UFortConversationContextCondition
{
public:
	struct FGameplayTag                          ParticipantID;                                     // 0x28(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7DE7[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FSoftObjectPath>               AllowedCIDs;                                       // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortConversationContextCondition_ParticipantHasCID");
		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class FortniteConversationRuntime.FortConversationContextCondition_ParticipantHasMetaTag
class UFortConversationContextCondition_ParticipantHasMetaTag : public UFortConversationContextCondition
{
public:
	struct FGameplayTag                          ParticipantID;                                     // 0x28(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGameplayTag                          MetaTag;                                           // 0x2C(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortConversationContextCondition_ParticipantHasMetaTag");
		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class FortniteConversationRuntime.FortConversationContextCondition_ParticipantHasOwnedTag
class UFortConversationContextCondition_ParticipantHasOwnedTag : public UFortConversationContextCondition
{
public:
	struct FGameplayTag                          ParticipantID;                                     // 0x28(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGameplayTag                          OwnedTag;                                          // 0x2C(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortConversationContextCondition_ParticipantHasOwnedTag");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class FortniteConversationRuntime.FortConversationContextCondition_ParticipantControllerMeetsRequirement
class UFortConversationContextCondition_ParticipantControllerMeetsRequirement : public UFortConversationContextCondition
{
public:
	struct FGameplayTag                          ParticipantID;                                     // 0x28(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7DE8[0x4];                                     // Fixing Size After Last Property..
	class UFortControllerRequirement*            Requirement;                                       // 0x30(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortConversationContextCondition_ParticipantControllerMeetsRequirement");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class FortniteConversationRuntime.FortConversationContextConditionHelpers
class UFortConversationContextConditionHelpers : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortConversationContextConditionHelpers");
		return Clss;
	}

	bool GetMessageForContext(struct FFortConversationNodeConditionalMessages& Messages, struct FConversationContext& Context, class FText* OutText);
};

// 0x0 (0x28 - 0x28)
// Class FortniteConversationRuntime.FortConversationParamLibrary
class UFortConversationParamLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortConversationParamLibrary");
		return Clss;
	}

	bool ExtractConversationParameterValue(TArray<struct FConversationNodeParameterPair>& ConversationParameters, const class FString& DesiredParameterName, class FString* ParameterValueOut);
};

// 0x0 (0x28 - 0x28)
// Class FortniteConversationRuntime.FortniteConversationGlobals
class UFortniteConversationGlobals : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortniteConversationGlobals");
		return Clss;
	}

};

// 0x128 (0x2C8 - 0x1A0)
// Class FortniteConversationRuntime.FortPlayerConversationComponent
class UFortPlayerConversationComponent : public UFortConversationParticipantComponent
{
public:
	TArray<class UFortNonPlayerConversationParticipantComponent*> ConversationParticipantsInRange;                   // 0x1A0(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	float                                        GreetSphereRadius;                                 // 0x1B0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        IconVisibilityRadius;                              // 0x1B4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        AbortConversationRange;                            // 0x1B8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7DEC[0x3C];                                    // Fixing Size After Last Property..
	TSet<class UFortNonPlayerConversationParticipantComponent*> IndicatedNPCConversationComponents;                // 0x1F8(0x50)(ExportObject, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7DED[0x8];                                     // Fixing Size After Last Property..
	bool                                         bMoveShouldAbortConversation;                      // 0x250(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7DEE[0x77];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortPlayerConversationComponent");
		return Clss;
	}

	void RequestServerAbortConversationWithParticipant(class UFortNonPlayerConversationParticipantComponent* Participant);
	void RequestServerAbortConversation();
	void HandleWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);
	void HandleViewTargetChanged();
	void HandleFollowedPlayerChanged(class AFortPlayerControllerSpectating* SpectatingPC, class AFortPlayerState* FollowedPlayerState);
	void HandleDBNOChanged(class AFortPawn* Pawn, bool bIsDBNO);
	void ClientSpectatorOpenUI();
	void ClientSpectatorCloseUI();
	void ClientReceiveConversationGiftUINotification(struct FGiftUINotificationInfo& ConversationGiftUINotification);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
