#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x90 - 0x28)
// BlueprintGeneratedClass BP_UserEntry.BP_UserEntry_C
class UBP_UserEntry_C : public UUserEntry
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x28(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FUniqueNetIdRepl                      UserId;                                            // 0x30(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnGetAvatar;                                       // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UTexture*                              UserAvatar;                                        // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	enum class EFOnlineUserPresenceStatusState   OnlineStatus;                                      // 0x78(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2934[0x7];                                     // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnPresenceUpdated;                                 // 0x80(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UBP_UserEntry_C* GetDefaultObj();

	void OnGetAvatarComplete_824A0C6B4C2DBA1D157208B3CDEF0AE0(bool bWasSuccessful, class UTexture* ResultTexture);
	void OnCallFailed_824A0C6B4C2DBA1D157208B3CDEF0AE0(bool bWasSuccessful, class UTexture* ResultTexture);
	void ParseUserInfo(const struct FUniqueNetIdRepl& UserId);
	void OnPresenceReceived_Event(const struct FUniqueNetIdRepl& UserId, const struct FOnlineUserPresenceData& Presence);
	void ExecuteUbergraph_BP_UserEntry(int32 EntryPoint, bool K2Node_CustomEvent_bWasSuccessful_1, class UTexture* K2Node_CustomEvent_ResultTexture_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_CustomEvent_bWasSuccessful, class UTexture* K2Node_CustomEvent_ResultTexture, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UTexture* Temp_object_Variable, bool Temp_bool_Variable, const struct FUniqueNetIdRepl& K2Node_CustomEvent_UserId_1, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UOnlinePresenceSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue_1, bool CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue, const struct FUniqueNetIdRepl& K2Node_CustomEvent_UserId, const struct FOnlineUserPresenceData& K2Node_CustomEvent_Presence, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue_1, class UOnlineAvatarSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool CallFunc_FUniqueNetIdIsValid_ReturnValue, class UOnlineAvatarSubsystemGetAvatar* CallFunc_GetAvatar_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnPresenceUpdated__DelegateSignature();
	void OnGetAvatar__DelegateSignature();
};

}


