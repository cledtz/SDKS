#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x7F0 (0x820 - 0x30)
// Class PlayFab.PlayFabAdminAPI
class UPlayFabAdminAPI : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnPlayFabResponse;                                 // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FA6[0x778];                                   // Fixing Size After Last Property 
	class UPlayFabAuthenticationContext*         CallAuthenticationContext;                         // 0x7B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPlayFabJsonObject*                    RequestJsonObj;                                    // 0x7C0(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPlayFabJsonObject*                    ResponseJsonObj;                                   // 0x7C8(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1FA8[0x50];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UPlayFabAdminAPI* GetDefaultObj();

	class UPlayFabAdminAPI* UpdateUserTitleDisplayName(const struct FAdminUpdateUserTitleDisplayNameRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* UpdateUserReadOnlyData(const struct FAdminUpdateUserDataRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* UpdateUserPublisherReadOnlyData(const struct FAdminUpdateUserDataRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* UpdateUserPublisherInternalData(const struct FAdminUpdateUserInternalDataRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* UpdateUserPublisherData(const struct FAdminUpdateUserDataRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* UpdateUserInternalData(const struct FAdminUpdateUserInternalDataRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* UpdateUserData(const struct FAdminUpdateUserDataRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* UpdateTask(const struct FAdminUpdateTaskRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* UpdateStoreItems(const struct FAdminUpdateStoreItemsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* UpdateSegment(const struct FAdminUpdateSegmentRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* UpdateRandomResultTables(const struct FAdminUpdateRandomResultTablesRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* UpdatePolicy(const struct FAdminUpdatePolicyRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* UpdatePlayerStatisticDefinition(const struct FAdminUpdatePlayerStatisticDefinitionRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* UpdatePlayerSharedSecret(const struct FAdminUpdatePlayerSharedSecretRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* UpdateOpenIdConnection(const struct FAdminUpdateOpenIdConnectionRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* UpdateCloudScript(const struct FAdminUpdateCloudScriptRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* UpdateCatalogItems(const struct FAdminUpdateCatalogItemsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* UpdateBans(const struct FAdminUpdateBansRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* SubtractUserVirtualCurrency(const struct FAdminSubtractUserVirtualCurrencyRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* SetupPushNotification(const struct FAdminSetupPushNotificationRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* SetTitleInternalData(const struct FAdminSetTitleDataRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* SetTitleDataAndOverrides(const struct FAdminSetTitleDataAndOverridesRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* SetTitleData(const struct FAdminSetTitleDataRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* SetStoreItems(const struct FAdminUpdateStoreItemsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* SetPublisherData(const struct FAdminSetPublisherDataRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* SetPublishedRevision(const struct FAdminSetPublishedRevisionRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* SetPlayerSecret(const struct FAdminSetPlayerSecretRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* SetMembershipOverride(const struct FAdminSetMembershipOverrideRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* SetCatalogItems(const struct FAdminUpdateCatalogItemsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* SendAccountRecoveryEmail(const struct FAdminSendAccountRecoveryEmailRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* RunTask(const struct FAdminRunTaskRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* RevokeInventoryItems(const struct FAdminRevokeInventoryItemsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* RevokeInventoryItem(const struct FAdminRevokeInventoryItemRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* RevokeBans(const struct FAdminRevokeBansRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* RevokeAllBansForUser(const struct FAdminRevokeAllBansForUserRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* ResolvePurchaseDispute(const struct FAdminResolvePurchaseDisputeRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* ResetUserStatistics(const struct FAdminResetUserStatisticsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* ResetPassword(const struct FAdminResetPasswordRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* ResetCharacterStatistics(const struct FAdminResetCharacterStatisticsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* RemoveVirtualCurrencyTypes(const struct FAdminRemoveVirtualCurrencyTypesRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* RemovePlayerTag(const struct FAdminRemovePlayerTagRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* RefundPurchase(const struct FAdminRefundPurchaseRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* ModifyServerBuild(const struct FAdminModifyServerBuildRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* ListVirtualCurrencyTypes(const struct FAdminListVirtualCurrencyTypesRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* ListOpenIdConnection(const struct FAdminListOpenIdConnectionRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* IncrementPlayerStatisticVersion(const struct FAdminIncrementPlayerStatisticVersionRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* IncrementLimitedEditionItemAvailability(const struct FAdminIncrementLimitedEditionItemAvailabilityRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	void HelperUpdateUserTitleDisplayName(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUpdateUserReadOnlyData(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUpdateUserPublisherReadOnlyData(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUpdateUserPublisherInternalData(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUpdateUserPublisherData(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUpdateUserInternalData(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUpdateUserData(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUpdateTask(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUpdateStoreItems(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUpdateSegment(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUpdateRandomResultTables(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUpdatePolicy(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUpdatePlayerStatisticDefinition(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUpdatePlayerSharedSecret(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUpdateOpenIdConnection(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUpdateCloudScript(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUpdateCatalogItems(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUpdateBans(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperSubtractUserVirtualCurrency(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperSetupPushNotification(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperSetTitleInternalData(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperSetTitleDataAndOverrides(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperSetTitleData(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperSetStoreItems(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperSetPublisherData(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperSetPublishedRevision(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperSetPlayerSecret(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperSetMembershipOverride(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperSetCatalogItems(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperSendAccountRecoveryEmail(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperRunTask(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperRevokeInventoryItems(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperRevokeInventoryItem(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperRevokeBans(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperRevokeAllBansForUser(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperResolvePurchaseDispute(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperResetUserStatistics(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperResetPassword(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperResetCharacterStatistics(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperRemoveVirtualCurrencyTypes(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperRemovePlayerTag(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperRefundPurchase(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperModifyServerBuild(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperListVirtualCurrencyTypes(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperListOpenIdConnection(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperIncrementPlayerStatisticVersion(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperIncrementLimitedEditionItemAvailability(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGrantItemsToUsers(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetUserReadOnlyData(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetUserPublisherReadOnlyData(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetUserPublisherInternalData(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetUserPublisherData(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetUserInventory(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetUserInternalData(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetUserData(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetUserBans(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetUserAccountInfo(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetTitleInternalData(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetTitleData(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetTasks(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetTaskInstances(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetStoreItems(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetSegments(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetSegmentExport(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetRandomResultTables(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetPublisherData(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetPolicy(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetPlayerTags(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetPlayerStatisticVersions(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetPlayerStatisticDefinitions(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetPlayersInSegment(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetPlayerSharedSecrets(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetPlayerSegments(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetPlayerProfile(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetPlayerIdFromAuthToken(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetPlayedTitleList(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetMatchmakerGameModes(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetMatchmakerGameInfo(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetDataReport(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetContentUploadUrl(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetContentList(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetCloudScriptVersions(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetCloudScriptTaskInstance(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetCloudScriptRevision(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetCatalogItems(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetAllSegments(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetActionsOnPlayersInSegmentTaskInstance(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperExportPlayersInSegment(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperExportMasterPlayerData(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperDeleteTitleDataOverride(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperDeleteTitle(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperDeleteTask(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperDeleteStore(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperDeleteSegment(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperDeletePlayerSharedSecret(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperDeletePlayer(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperDeleteOpenIdConnection(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperDeleteMembershipSubscription(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperDeleteMasterPlayerAccount(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperDeleteContent(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperCreateSegment(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperCreatePlayerStatisticDefinition(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperCreatePlayerSharedSecret(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperCreateOpenIdConnection(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperCreateInsightsScheduledScalingTask(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperCreateCloudScriptTask(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperCreateActionsOnPlayersInSegmentTask(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperCheckLimitedEditionItemAvailability(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperBanUsers(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperAddVirtualCurrencyTypes(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperAddUserVirtualCurrency(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperAddPlayerTag(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperAddNews(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperAddLocalizedNews(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperAbortTaskInstance(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	class UPlayFabAdminAPI* GrantItemsToUsers(const struct FAdminGrantItemsToUsersRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* GetUserReadOnlyData(const struct FAdminGetUserDataRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* GetUserPublisherReadOnlyData(const struct FAdminGetUserDataRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* GetUserPublisherInternalData(const struct FAdminGetUserDataRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* GetUserPublisherData(const struct FAdminGetUserDataRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* GetUserInventory(const struct FAdminGetUserInventoryRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* GetUserInternalData(const struct FAdminGetUserDataRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* GetUserData(const struct FAdminGetUserDataRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* GetUserBans(const struct FAdminGetUserBansRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* GetUserAccountInfo(const struct FAdminLookupUserAccountInfoRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* GetTitleInternalData(const struct FAdminGetTitleDataRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* GetTitleData(const struct FAdminGetTitleDataRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* GetTasks(const struct FAdminGetTasksRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* GetTaskInstances(const struct FAdminGetTaskInstancesRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* GetStoreItems(const struct FAdminGetStoreItemsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* GetSegments(const struct FAdminGetSegmentsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* GetSegmentExport(const struct FAdminGetPlayersInSegmentExportRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* GetRandomResultTables(const struct FAdminGetRandomResultTablesRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* GetPublisherData(const struct FAdminGetPublisherDataRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* GetPolicy(const struct FAdminGetPolicyRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* GetPlayerTags(const struct FAdminGetPlayerTagsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* GetPlayerStatisticVersions(const struct FAdminGetPlayerStatisticVersionsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* GetPlayerStatisticDefinitions(const struct FAdminGetPlayerStatisticDefinitionsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* GetPlayersInSegment(const struct FAdminGetPlayersInSegmentRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* GetPlayerSharedSecrets(const struct FAdminGetPlayerSharedSecretsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* GetPlayerSegments(const struct FAdminGetPlayersSegmentsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* GetPlayerProfile(const struct FAdminGetPlayerProfileRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* GetPlayerIdFromAuthToken(const struct FAdminGetPlayerIdFromAuthTokenRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* GetPlayedTitleList(const struct FAdminGetPlayedTitleListRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* GetMatchmakerGameModes(const struct FAdminGetMatchmakerGameModesRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* GetMatchmakerGameInfo(const struct FAdminGetMatchmakerGameInfoRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* GetDataReport(const struct FAdminGetDataReportRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* GetContentUploadUrl(const struct FAdminGetContentUploadUrlRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* GetContentList(const struct FAdminGetContentListRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* GetCloudScriptVersions(const struct FAdminGetCloudScriptVersionsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* GetCloudScriptTaskInstance(const struct FAdminGetTaskInstanceRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* GetCloudScriptRevision(const struct FAdminGetCloudScriptRevisionRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* GetCatalogItems(const struct FAdminGetCatalogItemsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* GetAllSegments(const struct FAdminGetAllSegmentsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* GetActionsOnPlayersInSegmentTaskInstance(const struct FAdminGetTaskInstanceRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* ExportPlayersInSegment(const struct FAdminExportPlayersInSegmentRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* ExportMasterPlayerData(const struct FAdminExportMasterPlayerDataRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* DeleteTitleDataOverride(const struct FAdminDeleteTitleDataOverrideRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* DeleteTitle(const struct FAdminDeleteTitleRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* DeleteTask(const struct FAdminDeleteTaskRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* DeleteStore(const struct FAdminDeleteStoreRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* DeleteSegment(const struct FAdminDeleteSegmentRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* DeletePlayerSharedSecret(const struct FAdminDeletePlayerSharedSecretRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* DeletePlayer(const struct FAdminDeletePlayerRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* DeleteOpenIdConnection(const struct FAdminDeleteOpenIdConnectionRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* DeleteMembershipSubscription(const struct FAdminDeleteMembershipSubscriptionRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* DeleteMasterPlayerAccount(const struct FAdminDeleteMasterPlayerAccountRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* DeleteContent(const struct FAdminDeleteContentRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	void DelegateOnSuccessUpdateUserTitleDisplayName__DelegateSignature(const struct FAdminUpdateUserTitleDisplayNameResult& Result, class UObject* CustomData);
	void DelegateOnSuccessUpdateUserReadOnlyData__DelegateSignature(const struct FAdminUpdateUserDataResult& Result, class UObject* CustomData);
	void DelegateOnSuccessUpdateUserPublisherReadOnlyData__DelegateSignature(const struct FAdminUpdateUserDataResult& Result, class UObject* CustomData);
	void DelegateOnSuccessUpdateUserPublisherInternalData__DelegateSignature(const struct FAdminUpdateUserDataResult& Result, class UObject* CustomData);
	void DelegateOnSuccessUpdateUserPublisherData__DelegateSignature(const struct FAdminUpdateUserDataResult& Result, class UObject* CustomData);
	void DelegateOnSuccessUpdateUserInternalData__DelegateSignature(const struct FAdminUpdateUserDataResult& Result, class UObject* CustomData);
	void DelegateOnSuccessUpdateUserData__DelegateSignature(const struct FAdminUpdateUserDataResult& Result, class UObject* CustomData);
	void DelegateOnSuccessUpdateTask__DelegateSignature(const struct FAdminEmptyResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessUpdateStoreItems__DelegateSignature(const struct FAdminUpdateStoreItemsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessUpdateSegment__DelegateSignature(const struct FAdminUpdateSegmentResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessUpdateRandomResultTables__DelegateSignature(const struct FAdminUpdateRandomResultTablesResult& Result, class UObject* CustomData);
	void DelegateOnSuccessUpdatePolicy__DelegateSignature(const struct FAdminUpdatePolicyResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessUpdatePlayerStatisticDefinition__DelegateSignature(const struct FAdminUpdatePlayerStatisticDefinitionResult& Result, class UObject* CustomData);
	void DelegateOnSuccessUpdatePlayerSharedSecret__DelegateSignature(const struct FAdminUpdatePlayerSharedSecretResult& Result, class UObject* CustomData);
	void DelegateOnSuccessUpdateOpenIdConnection__DelegateSignature(const struct FAdminEmptyResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessUpdateCloudScript__DelegateSignature(const struct FAdminUpdateCloudScriptResult& Result, class UObject* CustomData);
	void DelegateOnSuccessUpdateCatalogItems__DelegateSignature(const struct FAdminUpdateCatalogItemsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessUpdateBans__DelegateSignature(const struct FAdminUpdateBansResult& Result, class UObject* CustomData);
	void DelegateOnSuccessSubtractUserVirtualCurrency__DelegateSignature(const struct FAdminModifyUserVirtualCurrencyResult& Result, class UObject* CustomData);
	void DelegateOnSuccessSetupPushNotification__DelegateSignature(const struct FAdminSetupPushNotificationResult& Result, class UObject* CustomData);
	void DelegateOnSuccessSetTitleInternalData__DelegateSignature(const struct FAdminSetTitleDataResult& Result, class UObject* CustomData);
	void DelegateOnSuccessSetTitleDataAndOverrides__DelegateSignature(const struct FAdminSetTitleDataAndOverridesResult& Result, class UObject* CustomData);
	void DelegateOnSuccessSetTitleData__DelegateSignature(const struct FAdminSetTitleDataResult& Result, class UObject* CustomData);
	void DelegateOnSuccessSetStoreItems__DelegateSignature(const struct FAdminUpdateStoreItemsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessSetPublisherData__DelegateSignature(const struct FAdminSetPublisherDataResult& Result, class UObject* CustomData);
	void DelegateOnSuccessSetPublishedRevision__DelegateSignature(const struct FAdminSetPublishedRevisionResult& Result, class UObject* CustomData);
	void DelegateOnSuccessSetPlayerSecret__DelegateSignature(const struct FAdminSetPlayerSecretResult& Result, class UObject* CustomData);
	void DelegateOnSuccessSetMembershipOverride__DelegateSignature(const struct FAdminSetMembershipOverrideResult& Result, class UObject* CustomData);
	void DelegateOnSuccessSetCatalogItems__DelegateSignature(const struct FAdminUpdateCatalogItemsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessSendAccountRecoveryEmail__DelegateSignature(const struct FAdminSendAccountRecoveryEmailResult& Result, class UObject* CustomData);
	void DelegateOnSuccessRunTask__DelegateSignature(const struct FAdminRunTaskResult& Result, class UObject* CustomData);
	void DelegateOnSuccessRevokeInventoryItems__DelegateSignature(const struct FAdminRevokeInventoryItemsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessRevokeInventoryItem__DelegateSignature(const struct FAdminRevokeInventoryResult& Result, class UObject* CustomData);
	void DelegateOnSuccessRevokeBans__DelegateSignature(const struct FAdminRevokeBansResult& Result, class UObject* CustomData);
	void DelegateOnSuccessRevokeAllBansForUser__DelegateSignature(const struct FAdminRevokeAllBansForUserResult& Result, class UObject* CustomData);
	void DelegateOnSuccessResolvePurchaseDispute__DelegateSignature(const struct FAdminResolvePurchaseDisputeResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessResetUserStatistics__DelegateSignature(const struct FAdminResetUserStatisticsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessResetPassword__DelegateSignature(const struct FAdminResetPasswordResult& Result, class UObject* CustomData);
	void DelegateOnSuccessResetCharacterStatistics__DelegateSignature(const struct FAdminResetCharacterStatisticsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessRemoveVirtualCurrencyTypes__DelegateSignature(const struct FAdminBlankResult& Result, class UObject* CustomData);
	void DelegateOnSuccessRemovePlayerTag__DelegateSignature(const struct FAdminRemovePlayerTagResult& Result, class UObject* CustomData);
	void DelegateOnSuccessRefundPurchase__DelegateSignature(const struct FAdminRefundPurchaseResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessModifyServerBuild__DelegateSignature(const struct FAdminModifyServerBuildResult& Result, class UObject* CustomData);
	void DelegateOnSuccessListVirtualCurrencyTypes__DelegateSignature(const struct FAdminListVirtualCurrencyTypesResult& Result, class UObject* CustomData);
	void DelegateOnSuccessListOpenIdConnection__DelegateSignature(const struct FAdminListOpenIdConnectionResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessIncrementPlayerStatisticVersion__DelegateSignature(const struct FAdminIncrementPlayerStatisticVersionResult& Result, class UObject* CustomData);
	void DelegateOnSuccessIncrementLimitedEditionItemAvailability__DelegateSignature(const struct FAdminIncrementLimitedEditionItemAvailabilityResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGrantItemsToUsers__DelegateSignature(const struct FAdminGrantItemsToUsersResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetUserReadOnlyData__DelegateSignature(const struct FAdminGetUserDataResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetUserPublisherReadOnlyData__DelegateSignature(const struct FAdminGetUserDataResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetUserPublisherInternalData__DelegateSignature(const struct FAdminGetUserDataResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetUserPublisherData__DelegateSignature(const struct FAdminGetUserDataResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetUserInventory__DelegateSignature(const struct FAdminGetUserInventoryResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetUserInternalData__DelegateSignature(const struct FAdminGetUserDataResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetUserData__DelegateSignature(const struct FAdminGetUserDataResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetUserBans__DelegateSignature(const struct FAdminGetUserBansResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetUserAccountInfo__DelegateSignature(const struct FAdminLookupUserAccountInfoResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetTitleInternalData__DelegateSignature(const struct FAdminGetTitleDataResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetTitleData__DelegateSignature(const struct FAdminGetTitleDataResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetTasks__DelegateSignature(const struct FAdminGetTasksResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetTaskInstances__DelegateSignature(const struct FAdminGetTaskInstancesResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetStoreItems__DelegateSignature(const struct FAdminGetStoreItemsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetSegments__DelegateSignature(const struct FAdminGetSegmentsResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessGetSegmentExport__DelegateSignature(const struct FAdminGetPlayersInSegmentExportResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessGetRandomResultTables__DelegateSignature(const struct FAdminGetRandomResultTablesResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetPublisherData__DelegateSignature(const struct FAdminGetPublisherDataResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetPolicy__DelegateSignature(const struct FAdminGetPolicyResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessGetPlayerTags__DelegateSignature(const struct FAdminGetPlayerTagsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetPlayerStatisticVersions__DelegateSignature(const struct FAdminGetPlayerStatisticVersionsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetPlayerStatisticDefinitions__DelegateSignature(const struct FAdminGetPlayerStatisticDefinitionsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetPlayersInSegment__DelegateSignature(const struct FAdminGetPlayersInSegmentResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetPlayerSharedSecrets__DelegateSignature(const struct FAdminGetPlayerSharedSecretsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetPlayerSegments__DelegateSignature(const struct FAdminGetPlayerSegmentsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetPlayerProfile__DelegateSignature(const struct FAdminGetPlayerProfileResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetPlayerIdFromAuthToken__DelegateSignature(const struct FAdminGetPlayerIdFromAuthTokenResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetPlayedTitleList__DelegateSignature(const struct FAdminGetPlayedTitleListResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetMatchmakerGameModes__DelegateSignature(const struct FAdminGetMatchmakerGameModesResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetMatchmakerGameInfo__DelegateSignature(const struct FAdminGetMatchmakerGameInfoResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetDataReport__DelegateSignature(const struct FAdminGetDataReportResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetContentUploadUrl__DelegateSignature(const struct FAdminGetContentUploadUrlResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetContentList__DelegateSignature(const struct FAdminGetContentListResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetCloudScriptVersions__DelegateSignature(const struct FAdminGetCloudScriptVersionsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetCloudScriptTaskInstance__DelegateSignature(const struct FAdminGetCloudScriptTaskInstanceResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetCloudScriptRevision__DelegateSignature(const struct FAdminGetCloudScriptRevisionResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetCatalogItems__DelegateSignature(const struct FAdminGetCatalogItemsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetAllSegments__DelegateSignature(const struct FAdminGetAllSegmentsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetActionsOnPlayersInSegmentTaskInstance__DelegateSignature(const struct FAdminGetActionsOnPlayersInSegmentTaskInstanceResult& Result, class UObject* CustomData);
	void DelegateOnSuccessExportPlayersInSegment__DelegateSignature(const struct FAdminExportPlayersInSegmentResult& Result, class UObject* CustomData);
	void DelegateOnSuccessExportMasterPlayerData__DelegateSignature(const struct FAdminExportMasterPlayerDataResult& Result, class UObject* CustomData);
	void DelegateOnSuccessDeleteTitleDataOverride__DelegateSignature(const struct FAdminDeleteTitleDataOverrideResult& Result, class UObject* CustomData);
	void DelegateOnSuccessDeleteTitle__DelegateSignature(const struct FAdminDeleteTitleResult& Result, class UObject* CustomData);
	void DelegateOnSuccessDeleteTask__DelegateSignature(const struct FAdminEmptyResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessDeleteStore__DelegateSignature(const struct FAdminDeleteStoreResult& Result, class UObject* CustomData);
	void DelegateOnSuccessDeleteSegment__DelegateSignature(const struct FAdminDeleteSegmentsResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessDeletePlayerSharedSecret__DelegateSignature(const struct FAdminDeletePlayerSharedSecretResult& Result, class UObject* CustomData);
	void DelegateOnSuccessDeletePlayer__DelegateSignature(const struct FAdminDeletePlayerResult& Result, class UObject* CustomData);
	void DelegateOnSuccessDeleteOpenIdConnection__DelegateSignature(const struct FAdminEmptyResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessDeleteMembershipSubscription__DelegateSignature(const struct FAdminDeleteMembershipSubscriptionResult& Result, class UObject* CustomData);
	void DelegateOnSuccessDeleteMasterPlayerAccount__DelegateSignature(const struct FAdminDeleteMasterPlayerAccountResult& Result, class UObject* CustomData);
	void DelegateOnSuccessDeleteContent__DelegateSignature(const struct FAdminBlankResult& Result, class UObject* CustomData);
	void DelegateOnSuccessCreateSegment__DelegateSignature(const struct FAdminCreateSegmentResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessCreatePlayerStatisticDefinition__DelegateSignature(const struct FAdminCreatePlayerStatisticDefinitionResult& Result, class UObject* CustomData);
	void DelegateOnSuccessCreatePlayerSharedSecret__DelegateSignature(const struct FAdminCreatePlayerSharedSecretResult& Result, class UObject* CustomData);
	void DelegateOnSuccessCreateOpenIdConnection__DelegateSignature(const struct FAdminEmptyResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessCreateInsightsScheduledScalingTask__DelegateSignature(const struct FAdminCreateTaskResult& Result, class UObject* CustomData);
	void DelegateOnSuccessCreateCloudScriptTask__DelegateSignature(const struct FAdminCreateTaskResult& Result, class UObject* CustomData);
	void DelegateOnSuccessCreateActionsOnPlayersInSegmentTask__DelegateSignature(const struct FAdminCreateTaskResult& Result, class UObject* CustomData);
	void DelegateOnSuccessCheckLimitedEditionItemAvailability__DelegateSignature(const struct FAdminCheckLimitedEditionItemAvailabilityResult& Result, class UObject* CustomData);
	void DelegateOnSuccessBanUsers__DelegateSignature(const struct FAdminBanUsersResult& Result, class UObject* CustomData);
	void DelegateOnSuccessAddVirtualCurrencyTypes__DelegateSignature(const struct FAdminBlankResult& Result, class UObject* CustomData);
	void DelegateOnSuccessAddUserVirtualCurrency__DelegateSignature(const struct FAdminModifyUserVirtualCurrencyResult& Result, class UObject* CustomData);
	void DelegateOnSuccessAddPlayerTag__DelegateSignature(const struct FAdminAddPlayerTagResult& Result, class UObject* CustomData);
	void DelegateOnSuccessAddNews__DelegateSignature(const struct FAdminAddNewsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessAddLocalizedNews__DelegateSignature(const struct FAdminAddLocalizedNewsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessAbortTaskInstance__DelegateSignature(const struct FAdminEmptyResponse& Result, class UObject* CustomData);
	void DelegateOnFailurePlayFabError__DelegateSignature(const struct FPlayFabError& Error, class UObject* CustomData);
	class UPlayFabAdminAPI* CreateSegment(const struct FAdminCreateSegmentRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* CreatePlayerStatisticDefinition(const struct FAdminCreatePlayerStatisticDefinitionRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* CreatePlayerSharedSecret(const struct FAdminCreatePlayerSharedSecretRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* CreateOpenIdConnection(const struct FAdminCreateOpenIdConnectionRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* CreateInsightsScheduledScalingTask(const struct FAdminCreateInsightsScheduledScalingTaskRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* CreateCloudScriptTask(const struct FAdminCreateCloudScriptTaskRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* CreateActionsOnPlayersInSegmentTask(const struct FAdminCreateActionsOnPlayerSegmentTaskRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* CheckLimitedEditionItemAvailability(const struct FAdminCheckLimitedEditionItemAvailabilityRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* BanUsers(const struct FAdminBanUsersRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* AddVirtualCurrencyTypes(const struct FAdminAddVirtualCurrencyTypesRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* AddUserVirtualCurrency(const struct FAdminAddUserVirtualCurrencyRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* AddPlayerTag(const struct FAdminAddPlayerTagRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* AddNews(const struct FAdminAddNewsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* AddLocalizedNews(const struct FAdminAddLocalizedNewsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAdminAPI* AbortTaskInstance(const struct FAdminAbortTaskInstanceRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
};

// 0x0 (0x28 - 0x28)
// Class PlayFab.PlayFabAdminModelDecoder
class UPlayFabAdminModelDecoder : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UPlayFabAdminModelDecoder* GetDefaultObj();

	struct FAdminUpdateUserTitleDisplayNameResult DecodeUpdateUserTitleDisplayNameResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminUpdateUserDataResult DecodeUpdateUserDataResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminUpdateStoreItemsResult DecodeUpdateStoreItemsResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminUpdateSegmentResponse DecodeUpdateSegmentResponseResponse(class UPlayFabJsonObject* Response);
	struct FAdminUpdateRandomResultTablesResult DecodeUpdateRandomResultTablesResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminUpdatePolicyResponse DecodeUpdatePolicyResponseResponse(class UPlayFabJsonObject* Response);
	struct FAdminUpdatePlayerStatisticDefinitionResult DecodeUpdatePlayerStatisticDefinitionResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminUpdatePlayerSharedSecretResult DecodeUpdatePlayerSharedSecretResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminUpdateCloudScriptResult DecodeUpdateCloudScriptResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminUpdateCatalogItemsResult DecodeUpdateCatalogItemsResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminUpdateBansResult DecodeUpdateBansResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminSetupPushNotificationResult DecodeSetupPushNotificationResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminSetTitleDataResult DecodeSetTitleDataResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminSetTitleDataAndOverridesResult DecodeSetTitleDataAndOverridesResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminSetPublisherDataResult DecodeSetPublisherDataResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminSetPublishedRevisionResult DecodeSetPublishedRevisionResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminSetPlayerSecretResult DecodeSetPlayerSecretResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminSetMembershipOverrideResult DecodeSetMembershipOverrideResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminSendAccountRecoveryEmailResult DecodeSendAccountRecoveryEmailResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminRunTaskResult DecodeRunTaskResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminRevokeInventoryResult DecodeRevokeInventoryResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminRevokeInventoryItemsResult DecodeRevokeInventoryItemsResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminRevokeBansResult DecodeRevokeBansResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminRevokeAllBansForUserResult DecodeRevokeAllBansForUserResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminResolvePurchaseDisputeResponse DecodeResolvePurchaseDisputeResponseResponse(class UPlayFabJsonObject* Response);
	struct FAdminResetUserStatisticsResult DecodeResetUserStatisticsResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminResetPasswordResult DecodeResetPasswordResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminResetCharacterStatisticsResult DecodeResetCharacterStatisticsResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminRemovePlayerTagResult DecodeRemovePlayerTagResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminRefundPurchaseResponse DecodeRefundPurchaseResponseResponse(class UPlayFabJsonObject* Response);
	struct FAdminModifyUserVirtualCurrencyResult DecodeModifyUserVirtualCurrencyResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminModifyServerBuildResult DecodeModifyServerBuildResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminLookupUserAccountInfoResult DecodeLookupUserAccountInfoResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminListVirtualCurrencyTypesResult DecodeListVirtualCurrencyTypesResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminListOpenIdConnectionResponse DecodeListOpenIdConnectionResponseResponse(class UPlayFabJsonObject* Response);
	struct FAdminIncrementPlayerStatisticVersionResult DecodeIncrementPlayerStatisticVersionResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminIncrementLimitedEditionItemAvailabilityResult DecodeIncrementLimitedEditionItemAvailabilityResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminGrantItemsToUsersResult DecodeGrantItemsToUsersResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminGetUserInventoryResult DecodeGetUserInventoryResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminGetUserDataResult DecodeGetUserDataResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminGetUserBansResult DecodeGetUserBansResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminGetTitleDataResult DecodeGetTitleDataResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminGetTasksResult DecodeGetTasksResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminGetTaskInstancesResult DecodeGetTaskInstancesResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminGetStoreItemsResult DecodeGetStoreItemsResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminGetSegmentsResponse DecodeGetSegmentsResponseResponse(class UPlayFabJsonObject* Response);
	struct FAdminGetRandomResultTablesResult DecodeGetRandomResultTablesResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminGetPublisherDataResult DecodeGetPublisherDataResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminGetPolicyResponse DecodeGetPolicyResponseResponse(class UPlayFabJsonObject* Response);
	struct FAdminGetPlayerTagsResult DecodeGetPlayerTagsResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminGetPlayerStatisticVersionsResult DecodeGetPlayerStatisticVersionsResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminGetPlayerStatisticDefinitionsResult DecodeGetPlayerStatisticDefinitionsResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminGetPlayersInSegmentResult DecodeGetPlayersInSegmentResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminGetPlayersInSegmentExportResponse DecodeGetPlayersInSegmentExportResponseResponse(class UPlayFabJsonObject* Response);
	struct FAdminGetPlayerSharedSecretsResult DecodeGetPlayerSharedSecretsResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminGetPlayerSegmentsResult DecodeGetPlayerSegmentsResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminGetPlayerProfileResult DecodeGetPlayerProfileResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminGetPlayerIdFromAuthTokenResult DecodeGetPlayerIdFromAuthTokenResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminGetPlayedTitleListResult DecodeGetPlayedTitleListResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminGetMatchmakerGameModesResult DecodeGetMatchmakerGameModesResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminGetMatchmakerGameInfoResult DecodeGetMatchmakerGameInfoResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminGetDataReportResult DecodeGetDataReportResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminGetContentUploadUrlResult DecodeGetContentUploadUrlResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminGetContentListResult DecodeGetContentListResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminGetCloudScriptVersionsResult DecodeGetCloudScriptVersionsResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminGetCloudScriptTaskInstanceResult DecodeGetCloudScriptTaskInstanceResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminGetCloudScriptRevisionResult DecodeGetCloudScriptRevisionResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminGetCatalogItemsResult DecodeGetCatalogItemsResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminGetAllSegmentsResult DecodeGetAllSegmentsResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminGetActionsOnPlayersInSegmentTaskInstanceResult DecodeGetActionsOnPlayersInSegmentTaskInstanceResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminExportPlayersInSegmentResult DecodeExportPlayersInSegmentResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminExportMasterPlayerDataResult DecodeExportMasterPlayerDataResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminEmptyResponse DecodeEmptyResponseResponse(class UPlayFabJsonObject* Response);
	struct FAdminDeleteTitleResult DecodeDeleteTitleResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminDeleteTitleDataOverrideResult DecodeDeleteTitleDataOverrideResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminDeleteStoreResult DecodeDeleteStoreResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminDeleteSegmentsResponse DecodeDeleteSegmentsResponseResponse(class UPlayFabJsonObject* Response);
	struct FAdminDeletePlayerSharedSecretResult DecodeDeletePlayerSharedSecretResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminDeletePlayerResult DecodeDeletePlayerResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminDeleteMembershipSubscriptionResult DecodeDeleteMembershipSubscriptionResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminDeleteMasterPlayerAccountResult DecodeDeleteMasterPlayerAccountResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminCreateTaskResult DecodeCreateTaskResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminCreateSegmentResponse DecodeCreateSegmentResponseResponse(class UPlayFabJsonObject* Response);
	struct FAdminCreatePlayerStatisticDefinitionResult DecodeCreatePlayerStatisticDefinitionResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminCreatePlayerSharedSecretResult DecodeCreatePlayerSharedSecretResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminCheckLimitedEditionItemAvailabilityResult DecodeCheckLimitedEditionItemAvailabilityResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminBlankResult DecodeBlankResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminBanUsersResult DecodeBanUsersResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminAddPlayerTagResult DecodeAddPlayerTagResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminAddNewsResult DecodeAddNewsResultResponse(class UPlayFabJsonObject* Response);
	struct FAdminAddLocalizedNewsResult DecodeAddLocalizedNewsResultResponse(class UPlayFabJsonObject* Response);
};

// 0x100 (0x130 - 0x30)
// Class PlayFab.PlayFabAuthenticationAPI
class UPlayFabAuthenticationAPI : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnPlayFabResponse;                                 // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_2329[0x88];                                    // Fixing Size After Last Property 
	class UPlayFabAuthenticationContext*         CallAuthenticationContext;                         // 0xC8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPlayFabJsonObject*                    RequestJsonObj;                                    // 0xD0(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPlayFabJsonObject*                    ResponseJsonObj;                                   // 0xD8(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_232A[0x50];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UPlayFabAuthenticationAPI* GetDefaultObj();

	class UPlayFabAuthenticationAPI* ValidateEntityToken(const struct FAuthenticationValidateEntityTokenRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	void HelperValidateEntityToken(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetEntityToken(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperDelete(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperAuthenticateGameServerWithCustomId(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	class UPlayFabAuthenticationAPI* GetEntityToken(const struct FAuthenticationGetEntityTokenRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabAuthenticationAPI* Delete(const struct FAuthenticationDeleteRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	void DelegateOnSuccessValidateEntityToken__DelegateSignature(const struct FAuthenticationValidateEntityTokenResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessGetEntityToken__DelegateSignature(const struct FAuthenticationGetEntityTokenResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessDelete__DelegateSignature(const struct FAuthenticationEmptyResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessAuthenticateGameServerWithCustomId__DelegateSignature(const struct FAuthenticationAuthenticateCustomIdResult& Result, class UObject* CustomData);
	void DelegateOnFailurePlayFabError__DelegateSignature(const struct FPlayFabError& Error, class UObject* CustomData);
	class UPlayFabAuthenticationAPI* AuthenticateGameServerWithCustomId(const struct FAuthenticationAuthenticateCustomIdRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
};

// 0x0 (0x28 - 0x28)
// Class PlayFab.PlayFabAuthenticationModelDecoder
class UPlayFabAuthenticationModelDecoder : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UPlayFabAuthenticationModelDecoder* GetDefaultObj();

	struct FAuthenticationValidateEntityTokenResponse DecodeValidateEntityTokenResponseResponse(class UPlayFabJsonObject* Response);
	struct FAuthenticationGetEntityTokenResponse DecodeGetEntityTokenResponseResponse(class UPlayFabJsonObject* Response);
	struct FAuthenticationEmptyResponse DecodeEmptyResponseResponse(class UPlayFabJsonObject* Response);
	struct FAuthenticationAuthenticateCustomIdResult DecodeAuthenticateCustomIdResultResponse(class UPlayFabJsonObject* Response);
};

// 0xB20 (0xB50 - 0x30)
// Class PlayFab.PlayFabClientAPI
class UPlayFabClientAPI : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnPlayFabResponse;                                 // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AA7[0xAA8];                                   // Fixing Size After Last Property 
	class UPlayFabAuthenticationContext*         CallAuthenticationContext;                         // 0xAE8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPlayFabJsonObject*                    RequestJsonObj;                                    // 0xAF0(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPlayFabJsonObject*                    ResponseJsonObj;                                   // 0xAF8(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2AA8[0x50];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UPlayFabClientAPI* GetDefaultObj();

	class UPlayFabClientAPI* WriteTitleEvent(const struct FClientWriteTitleEventRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* WritePlayerEvent(const struct FClientWriteClientPlayerEventRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* WriteCharacterEvent(const struct FClientWriteClientCharacterEventRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* ValidateWindowsStoreReceipt(const struct FClientValidateWindowsReceiptRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* ValidateIOSReceipt(const struct FClientValidateIOSReceiptRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* ValidateGooglePlayPurchase(const struct FClientValidateGooglePlayPurchaseRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* ValidateAmazonIAPReceipt(const struct FClientValidateAmazonReceiptRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* UpdateUserTitleDisplayName(const struct FClientUpdateUserTitleDisplayNameRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* UpdateUserPublisherData(const struct FClientUpdateUserDataRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* UpdateUserData(const struct FClientUpdateUserDataRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* UpdateSharedGroupData(const struct FClientUpdateSharedGroupDataRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* UpdatePlayerStatistics(const struct FClientUpdatePlayerStatisticsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* UpdateCharacterStatistics(const struct FClientUpdateCharacterStatisticsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* UpdateCharacterData(const struct FClientUpdateCharacterDataRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* UpdateAvatarUrl(const struct FClientUpdateAvatarUrlRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* UnlockContainerItem(const struct FClientUnlockContainerItemRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* UnlockContainerInstance(const struct FClientUnlockContainerInstanceRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* UnlinkXboxAccount(const struct FClientUnlinkXboxAccountRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* UnlinkTwitch(const struct FClientUnlinkTwitchAccountRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* UnlinkSteamAccount(const struct FClientUnlinkSteamAccountRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* UnlinkPSNAccount(const struct FClientUnlinkPSNAccountRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* UnlinkOpenIdConnect(const struct FClientUnlinkOpenIdConnectRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* UnlinkNintendoSwitchDeviceId(const struct FClientUnlinkNintendoSwitchDeviceIdRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* UnlinkNintendoServiceAccount(const struct FClientUnlinkNintendoServiceAccountRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* UnlinkKongregate(const struct FClientUnlinkKongregateAccountRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* UnlinkIOSDeviceID(const struct FClientUnlinkIOSDeviceIDRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* UnlinkGooglePlayGamesServicesAccount(const struct FClientUnlinkGooglePlayGamesServicesAccountRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* UnlinkGoogleAccount(const struct FClientUnlinkGoogleAccountRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* UnlinkGameCenterAccount(const struct FClientUnlinkGameCenterAccountRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* UnlinkFacebookInstantGamesId(const struct FClientUnlinkFacebookInstantGamesIdRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* UnlinkFacebookAccount(const struct FClientUnlinkFacebookAccountRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* UnlinkCustomID(const struct FClientUnlinkCustomIDRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* UnlinkApple(const struct FClientUnlinkAppleRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* UnlinkAndroidDeviceID(const struct FClientUnlinkAndroidDeviceIDRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* SubtractUserVirtualCurrency(const struct FClientSubtractUserVirtualCurrencyRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* StartPurchase(const struct FClientStartPurchaseRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* SetPlayerSecret(const struct FClientSetPlayerSecretRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* SetFriendTags(const struct FClientSetFriendTagsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* SendAccountRecoveryEmail(const struct FClientSendAccountRecoveryEmailRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* RewardAdActivity(const struct FClientRewardAdActivityRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* RestoreIOSPurchases(const struct FClientRestoreIOSPurchasesRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* ReportPlayer(const struct FClientReportPlayerClientRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* ReportDeviceInfo(const struct FClientDeviceInfoRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* ReportAdActivity(const struct FClientReportAdActivityRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* RemoveSharedGroupMembers(const struct FClientRemoveSharedGroupMembersRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* RemoveGenericID(const struct FClientRemoveGenericIDRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* RemoveFriend(const struct FClientRemoveFriendRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* RemoveContactEmail(const struct FClientRemoveContactEmailRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* RegisterPlayFabUser(const struct FClientRegisterPlayFabUserRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* RegisterForIOSPushNotification(const struct FClientRegisterForIOSPushNotificationRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* RefreshPSNAuthToken(const struct FClientRefreshPSNAuthTokenRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* RedeemCoupon(const struct FClientRedeemCouponRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* PurchaseItem(const struct FClientPurchaseItemRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* PayForPurchase(const struct FClientPayForPurchaseRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* OpenTrade(const struct FClientOpenTradeRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* Matchmake(const struct FClientMatchmakeRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* LoginWithXbox(const struct FClientLoginWithXboxRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* LoginWithTwitch(const struct FClientLoginWithTwitchRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* LoginWithSteam(const struct FClientLoginWithSteamRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* LoginWithPSN(const struct FClientLoginWithPSNRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* LoginWithPlayFab(const struct FClientLoginWithPlayFabRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* LoginWithOpenIdConnect(const struct FClientLoginWithOpenIdConnectRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* LoginWithNintendoSwitchDeviceId(const struct FClientLoginWithNintendoSwitchDeviceIdRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* LoginWithNintendoServiceAccount(const struct FClientLoginWithNintendoServiceAccountRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* LoginWithKongregate(const struct FClientLoginWithKongregateRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* LoginWithIOSDeviceID(const struct FClientLoginWithIOSDeviceIDRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* LoginWithGooglePlayGamesServices(const struct FClientLoginWithGooglePlayGamesServicesRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* LoginWithGoogleAccount(const struct FClientLoginWithGoogleAccountRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* LoginWithGameCenter(const struct FClientLoginWithGameCenterRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* LoginWithFacebookInstantGamesId(const struct FClientLoginWithFacebookInstantGamesIdRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* LoginWithFacebook(const struct FClientLoginWithFacebookRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* LoginWithEmailAddress(const struct FClientLoginWithEmailAddressRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* LoginWithCustomID(const struct FClientLoginWithCustomIDRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* LoginWithApple(const struct FClientLoginWithAppleRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* LoginWithAndroidDeviceID(const struct FClientLoginWithAndroidDeviceIDRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* LinkXboxAccount(const struct FClientLinkXboxAccountRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* LinkTwitch(const struct FClientLinkTwitchAccountRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* LinkSteamAccount(const struct FClientLinkSteamAccountRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* LinkPSNAccount(const struct FClientLinkPSNAccountRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* LinkOpenIdConnect(const struct FClientLinkOpenIdConnectRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* LinkNintendoSwitchDeviceId(const struct FClientLinkNintendoSwitchDeviceIdRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* LinkNintendoServiceAccount(const struct FClientLinkNintendoServiceAccountRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* LinkKongregate(const struct FClientLinkKongregateAccountRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* LinkIOSDeviceID(const struct FClientLinkIOSDeviceIDRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* LinkGooglePlayGamesServicesAccount(const struct FClientLinkGooglePlayGamesServicesAccountRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* LinkGoogleAccount(const struct FClientLinkGoogleAccountRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* LinkGameCenterAccount(const struct FClientLinkGameCenterAccountRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* LinkFacebookInstantGamesId(const struct FClientLinkFacebookInstantGamesIdRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* LinkFacebookAccount(const struct FClientLinkFacebookAccountRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* LinkCustomID(const struct FClientLinkCustomIDRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* LinkApple(const struct FClientLinkAppleRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* LinkAndroidDeviceID(const struct FClientLinkAndroidDeviceIDRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	void HelperWriteTitleEvent(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperWritePlayerEvent(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperWriteCharacterEvent(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperValidateWindowsStoreReceipt(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperValidateIOSReceipt(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperValidateGooglePlayPurchase(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperValidateAmazonIAPReceipt(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUpdateUserTitleDisplayName(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUpdateUserPublisherData(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUpdateUserData(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUpdateSharedGroupData(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUpdatePlayerStatistics(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUpdateCharacterStatistics(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUpdateCharacterData(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUpdateAvatarUrl(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUnlockContainerItem(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUnlockContainerInstance(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUnlinkXboxAccount(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUnlinkTwitch(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUnlinkSteamAccount(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUnlinkPSNAccount(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUnlinkOpenIdConnect(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUnlinkNintendoSwitchDeviceId(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUnlinkNintendoServiceAccount(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUnlinkKongregate(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUnlinkIOSDeviceID(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUnlinkGooglePlayGamesServicesAccount(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUnlinkGoogleAccount(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUnlinkGameCenterAccount(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUnlinkFacebookInstantGamesId(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUnlinkFacebookAccount(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUnlinkCustomID(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUnlinkApple(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUnlinkAndroidDeviceID(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperSubtractUserVirtualCurrency(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperStartPurchase(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperSetPlayerSecret(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperSetFriendTags(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperSendAccountRecoveryEmail(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperRewardAdActivity(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperRestoreIOSPurchases(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperReportPlayer(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperReportDeviceInfo(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperReportAdActivity(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperRemoveSharedGroupMembers(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperRemoveGenericID(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperRemoveFriend(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperRemoveContactEmail(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperRegisterPlayFabUser(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperRegisterForIOSPushNotification(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperRefreshPSNAuthToken(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperRedeemCoupon(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperPurchaseItem(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperPayForPurchase(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperOpenTrade(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperMatchmake(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperLoginWithXbox(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperLoginWithTwitch(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperLoginWithSteam(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperLoginWithPSN(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperLoginWithPlayFab(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperLoginWithOpenIdConnect(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperLoginWithNintendoSwitchDeviceId(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperLoginWithNintendoServiceAccount(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperLoginWithKongregate(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperLoginWithIOSDeviceID(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperLoginWithGooglePlayGamesServices(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperLoginWithGoogleAccount(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperLoginWithGameCenter(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperLoginWithFacebookInstantGamesId(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperLoginWithFacebook(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperLoginWithEmailAddress(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperLoginWithCustomID(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperLoginWithApple(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperLoginWithAndroidDeviceID(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperLinkXboxAccount(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperLinkTwitch(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperLinkSteamAccount(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperLinkPSNAccount(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperLinkOpenIdConnect(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperLinkNintendoSwitchDeviceId(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperLinkNintendoServiceAccount(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperLinkKongregate(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperLinkIOSDeviceID(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperLinkGooglePlayGamesServicesAccount(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperLinkGoogleAccount(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperLinkGameCenterAccount(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperLinkFacebookInstantGamesId(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperLinkFacebookAccount(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperLinkCustomID(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperLinkApple(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperLinkAndroidDeviceID(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGrantCharacterToUser(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetUserReadOnlyData(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetUserPublisherReadOnlyData(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetUserPublisherData(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetUserInventory(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetUserData(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetTradeStatus(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetTitlePublicKey(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetTitleNews(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetTitleData(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetTime(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetStoreItems(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetSharedGroupData(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetPurchase(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetPublisherData(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetPlayFabIDsFromXboxLiveIDs(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetPlayFabIDsFromTwitchIDs(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetPlayFabIDsFromSteamIDs(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetPlayFabIDsFromPSNAccountIDs(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetPlayFabIDsFromNintendoSwitchDeviceIds(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetPlayFabIDsFromNintendoServiceAccountIds(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetPlayFabIDsFromKongregateIDs(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetPlayFabIDsFromGooglePlayGamesPlayerIDs(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetPlayFabIDsFromGoogleIDs(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetPlayFabIDsFromGenericIDs(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetPlayFabIDsFromGameCenterIDs(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetPlayFabIDsFromFacebookInstantGamesIds(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetPlayFabIDsFromFacebookIDs(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetPlayerTrades(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetPlayerTags(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetPlayerStatisticVersions(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetPlayerStatistics(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetPlayerSegments(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetPlayerProfile(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetPlayerCombinedInfo(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetPhotonAuthenticationToken(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetPaymentToken(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetLeaderboardForUserCharacters(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetLeaderboardAroundPlayer(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetLeaderboardAroundCharacter(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetLeaderboard(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetGameServerRegions(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetFriendsList(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetFriendLeaderboardAroundPlayer(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetFriendLeaderboard(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetCurrentGames(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetContentDownloadUrl(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetCharacterStatistics(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetCharacterReadOnlyData(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetCharacterLeaderboard(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetCharacterInventory(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetCharacterData(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetCatalogItems(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetAllUsersCharacters(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetAdPlacements(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetAccountInfo(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperExecuteCloudScript(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperCreateSharedGroup(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperConsumeXboxEntitlements(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperConsumePSNEntitlements(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperConsumePS5Entitlements(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperConsumeMicrosoftStoreEntitlements(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperConsumeItem(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperConfirmPurchase(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperCancelTrade(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperAttributeInstall(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperAndroidDevicePushNotificationRegistration(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperAddUserVirtualCurrency(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperAddUsernamePassword(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperAddSharedGroupMembers(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperAddOrUpdateContactEmail(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperAddGenericID(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperAddFriend(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperAcceptTrade(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	class UPlayFabClientAPI* GrantCharacterToUser(const struct FClientGrantCharacterToUserRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* GetUserReadOnlyData(const struct FClientGetUserDataRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* GetUserPublisherReadOnlyData(const struct FClientGetUserDataRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* GetUserPublisherData(const struct FClientGetUserDataRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* GetUserInventory(const struct FClientGetUserInventoryRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* GetUserData(const struct FClientGetUserDataRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* GetTradeStatus(const struct FClientGetTradeStatusRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* GetTitlePublicKey(const struct FClientGetTitlePublicKeyRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* GetTitleNews(const struct FClientGetTitleNewsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* GetTitleData(const struct FClientGetTitleDataRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* GetTime(const struct FClientGetTimeRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* GetStoreItems(const struct FClientGetStoreItemsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* GetSharedGroupData(const struct FClientGetSharedGroupDataRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* GetPurchase(const struct FClientGetPurchaseRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* GetPublisherData(const struct FClientGetPublisherDataRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* GetPlayFabIDsFromXboxLiveIDs(const struct FClientGetPlayFabIDsFromXboxLiveIDsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* GetPlayFabIDsFromTwitchIDs(const struct FClientGetPlayFabIDsFromTwitchIDsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* GetPlayFabIDsFromSteamIDs(const struct FClientGetPlayFabIDsFromSteamIDsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* GetPlayFabIDsFromPSNAccountIDs(const struct FClientGetPlayFabIDsFromPSNAccountIDsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* GetPlayFabIDsFromNintendoSwitchDeviceIds(const struct FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* GetPlayFabIDsFromNintendoServiceAccountIds(const struct FClientGetPlayFabIDsFromNintendoServiceAccountIdsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* GetPlayFabIDsFromKongregateIDs(const struct FClientGetPlayFabIDsFromKongregateIDsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* GetPlayFabIDsFromGooglePlayGamesPlayerIDs(const struct FClientGetPlayFabIDsFromGooglePlayGamesPlayerIDsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* GetPlayFabIDsFromGoogleIDs(const struct FClientGetPlayFabIDsFromGoogleIDsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* GetPlayFabIDsFromGenericIDs(const struct FClientGetPlayFabIDsFromGenericIDsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* GetPlayFabIDsFromGameCenterIDs(const struct FClientGetPlayFabIDsFromGameCenterIDsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* GetPlayFabIDsFromFacebookInstantGamesIds(const struct FClientGetPlayFabIDsFromFacebookInstantGamesIdsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* GetPlayFabIDsFromFacebookIDs(const struct FClientGetPlayFabIDsFromFacebookIDsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* GetPlayerTrades(const struct FClientGetPlayerTradesRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* GetPlayerTags(const struct FClientGetPlayerTagsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* GetPlayerStatisticVersions(const struct FClientGetPlayerStatisticVersionsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* GetPlayerStatistics(const struct FClientGetPlayerStatisticsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* GetPlayerSegments(const struct FClientGetPlayerSegmentsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* GetPlayerProfile(const struct FClientGetPlayerProfileRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* GetPlayerCombinedInfo(const struct FClientGetPlayerCombinedInfoRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* GetPhotonAuthenticationToken(const struct FClientGetPhotonAuthenticationTokenRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* GetPaymentToken(const struct FClientGetPaymentTokenRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* GetLeaderboardForUserCharacters(const struct FClientGetLeaderboardForUsersCharactersRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* GetLeaderboardAroundPlayer(const struct FClientGetLeaderboardAroundPlayerRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* GetLeaderboardAroundCharacter(const struct FClientGetLeaderboardAroundCharacterRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* GetLeaderboard(const struct FClientGetLeaderboardRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* GetGameServerRegions(const struct FClientGameServerRegionsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* GetFriendsList(const struct FClientGetFriendsListRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* GetFriendLeaderboardAroundPlayer(const struct FClientGetFriendLeaderboardAroundPlayerRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* GetFriendLeaderboard(const struct FClientGetFriendLeaderboardRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* GetCurrentGames(const struct FClientCurrentGamesRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* GetContentDownloadUrl(const struct FClientGetContentDownloadUrlRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* GetCharacterStatistics(const struct FClientGetCharacterStatisticsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* GetCharacterReadOnlyData(const struct FClientGetCharacterDataRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* GetCharacterLeaderboard(const struct FClientGetCharacterLeaderboardRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* GetCharacterInventory(const struct FClientGetCharacterInventoryRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* GetCharacterData(const struct FClientGetCharacterDataRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* GetCatalogItems(const struct FClientGetCatalogItemsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* GetAllUsersCharacters(const struct FClientListUsersCharactersRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* GetAdPlacements(const struct FClientGetAdPlacementsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* GetAccountInfo(const struct FClientGetAccountInfoRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* ExecuteCloudScript(const struct FClientExecuteCloudScriptRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	void DelegateOnSuccessWriteTitleEvent__DelegateSignature(const struct FClientWriteEventResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessWritePlayerEvent__DelegateSignature(const struct FClientWriteEventResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessWriteCharacterEvent__DelegateSignature(const struct FClientWriteEventResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessValidateWindowsStoreReceipt__DelegateSignature(const struct FClientValidateWindowsReceiptResult& Result, class UObject* CustomData);
	void DelegateOnSuccessValidateIOSReceipt__DelegateSignature(const struct FClientValidateIOSReceiptResult& Result, class UObject* CustomData);
	void DelegateOnSuccessValidateGooglePlayPurchase__DelegateSignature(const struct FClientValidateGooglePlayPurchaseResult& Result, class UObject* CustomData);
	void DelegateOnSuccessValidateAmazonIAPReceipt__DelegateSignature(const struct FClientValidateAmazonReceiptResult& Result, class UObject* CustomData);
	void DelegateOnSuccessUpdateUserTitleDisplayName__DelegateSignature(const struct FClientUpdateUserTitleDisplayNameResult& Result, class UObject* CustomData);
	void DelegateOnSuccessUpdateUserPublisherData__DelegateSignature(const struct FClientUpdateUserDataResult& Result, class UObject* CustomData);
	void DelegateOnSuccessUpdateUserData__DelegateSignature(const struct FClientUpdateUserDataResult& Result, class UObject* CustomData);
	void DelegateOnSuccessUpdateSharedGroupData__DelegateSignature(const struct FClientUpdateSharedGroupDataResult& Result, class UObject* CustomData);
	void DelegateOnSuccessUpdatePlayerStatistics__DelegateSignature(const struct FClientUpdatePlayerStatisticsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessUpdateCharacterStatistics__DelegateSignature(const struct FClientUpdateCharacterStatisticsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessUpdateCharacterData__DelegateSignature(const struct FClientUpdateCharacterDataResult& Result, class UObject* CustomData);
	void DelegateOnSuccessUpdateAvatarUrl__DelegateSignature(const struct FClientEmptyResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessUnlockContainerItem__DelegateSignature(const struct FClientUnlockContainerItemResult& Result, class UObject* CustomData);
	void DelegateOnSuccessUnlockContainerInstance__DelegateSignature(const struct FClientUnlockContainerItemResult& Result, class UObject* CustomData);
	void DelegateOnSuccessUnlinkXboxAccount__DelegateSignature(const struct FClientUnlinkXboxAccountResult& Result, class UObject* CustomData);
	void DelegateOnSuccessUnlinkTwitch__DelegateSignature(const struct FClientUnlinkTwitchAccountResult& Result, class UObject* CustomData);
	void DelegateOnSuccessUnlinkSteamAccount__DelegateSignature(const struct FClientUnlinkSteamAccountResult& Result, class UObject* CustomData);
	void DelegateOnSuccessUnlinkPSNAccount__DelegateSignature(const struct FClientUnlinkPSNAccountResult& Result, class UObject* CustomData);
	void DelegateOnSuccessUnlinkOpenIdConnect__DelegateSignature(const struct FClientEmptyResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessUnlinkNintendoSwitchDeviceId__DelegateSignature(const struct FClientUnlinkNintendoSwitchDeviceIdResult& Result, class UObject* CustomData);
	void DelegateOnSuccessUnlinkNintendoServiceAccount__DelegateSignature(const struct FClientEmptyResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessUnlinkKongregate__DelegateSignature(const struct FClientUnlinkKongregateAccountResult& Result, class UObject* CustomData);
	void DelegateOnSuccessUnlinkIOSDeviceID__DelegateSignature(const struct FClientUnlinkIOSDeviceIDResult& Result, class UObject* CustomData);
	void DelegateOnSuccessUnlinkGooglePlayGamesServicesAccount__DelegateSignature(const struct FClientUnlinkGooglePlayGamesServicesAccountResult& Result, class UObject* CustomData);
	void DelegateOnSuccessUnlinkGoogleAccount__DelegateSignature(const struct FClientUnlinkGoogleAccountResult& Result, class UObject* CustomData);
	void DelegateOnSuccessUnlinkGameCenterAccount__DelegateSignature(const struct FClientUnlinkGameCenterAccountResult& Result, class UObject* CustomData);
	void DelegateOnSuccessUnlinkFacebookInstantGamesId__DelegateSignature(const struct FClientUnlinkFacebookInstantGamesIdResult& Result, class UObject* CustomData);
	void DelegateOnSuccessUnlinkFacebookAccount__DelegateSignature(const struct FClientUnlinkFacebookAccountResult& Result, class UObject* CustomData);
	void DelegateOnSuccessUnlinkCustomID__DelegateSignature(const struct FClientUnlinkCustomIDResult& Result, class UObject* CustomData);
	void DelegateOnSuccessUnlinkApple__DelegateSignature(const struct FClientEmptyResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessUnlinkAndroidDeviceID__DelegateSignature(const struct FClientUnlinkAndroidDeviceIDResult& Result, class UObject* CustomData);
	void DelegateOnSuccessSubtractUserVirtualCurrency__DelegateSignature(const struct FClientModifyUserVirtualCurrencyResult& Result, class UObject* CustomData);
	void DelegateOnSuccessStartPurchase__DelegateSignature(const struct FClientStartPurchaseResult& Result, class UObject* CustomData);
	void DelegateOnSuccessSetPlayerSecret__DelegateSignature(const struct FClientSetPlayerSecretResult& Result, class UObject* CustomData);
	void DelegateOnSuccessSetFriendTags__DelegateSignature(const struct FClientSetFriendTagsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessSendAccountRecoveryEmail__DelegateSignature(const struct FClientSendAccountRecoveryEmailResult& Result, class UObject* CustomData);
	void DelegateOnSuccessRewardAdActivity__DelegateSignature(const struct FClientRewardAdActivityResult& Result, class UObject* CustomData);
	void DelegateOnSuccessRestoreIOSPurchases__DelegateSignature(const struct FClientRestoreIOSPurchasesResult& Result, class UObject* CustomData);
	void DelegateOnSuccessReportPlayer__DelegateSignature(const struct FClientReportPlayerClientResult& Result, class UObject* CustomData);
	void DelegateOnSuccessReportDeviceInfo__DelegateSignature(const struct FClientEmptyResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessReportAdActivity__DelegateSignature(const struct FClientReportAdActivityResult& Result, class UObject* CustomData);
	void DelegateOnSuccessRemoveSharedGroupMembers__DelegateSignature(const struct FClientRemoveSharedGroupMembersResult& Result, class UObject* CustomData);
	void DelegateOnSuccessRemoveGenericID__DelegateSignature(const struct FClientRemoveGenericIDResult& Result, class UObject* CustomData);
	void DelegateOnSuccessRemoveFriend__DelegateSignature(const struct FClientRemoveFriendResult& Result, class UObject* CustomData);
	void DelegateOnSuccessRemoveContactEmail__DelegateSignature(const struct FClientRemoveContactEmailResult& Result, class UObject* CustomData);
	void DelegateOnSuccessRegisterPlayFabUser__DelegateSignature(const struct FClientRegisterPlayFabUserResult& Result, class UObject* CustomData);
	void DelegateOnSuccessRegisterForIOSPushNotification__DelegateSignature(const struct FClientRegisterForIOSPushNotificationResult& Result, class UObject* CustomData);
	void DelegateOnSuccessRefreshPSNAuthToken__DelegateSignature(const struct FClientEmptyResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessRedeemCoupon__DelegateSignature(const struct FClientRedeemCouponResult& Result, class UObject* CustomData);
	void DelegateOnSuccessPurchaseItem__DelegateSignature(const struct FClientPurchaseItemResult& Result, class UObject* CustomData);
	void DelegateOnSuccessPayForPurchase__DelegateSignature(const struct FClientPayForPurchaseResult& Result, class UObject* CustomData);
	void DelegateOnSuccessOpenTrade__DelegateSignature(const struct FClientOpenTradeResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessMatchmake__DelegateSignature(const struct FClientMatchmakeResult& Result, class UObject* CustomData);
	void DelegateOnSuccessLoginWithXbox__DelegateSignature(const struct FClientLoginResult& Result, class UObject* CustomData);
	void DelegateOnSuccessLoginWithTwitch__DelegateSignature(const struct FClientLoginResult& Result, class UObject* CustomData);
	void DelegateOnSuccessLoginWithSteam__DelegateSignature(const struct FClientLoginResult& Result, class UObject* CustomData);
	void DelegateOnSuccessLoginWithPSN__DelegateSignature(const struct FClientLoginResult& Result, class UObject* CustomData);
	void DelegateOnSuccessLoginWithPlayFab__DelegateSignature(const struct FClientLoginResult& Result, class UObject* CustomData);
	void DelegateOnSuccessLoginWithOpenIdConnect__DelegateSignature(const struct FClientLoginResult& Result, class UObject* CustomData);
	void DelegateOnSuccessLoginWithNintendoSwitchDeviceId__DelegateSignature(const struct FClientLoginResult& Result, class UObject* CustomData);
	void DelegateOnSuccessLoginWithNintendoServiceAccount__DelegateSignature(const struct FClientLoginResult& Result, class UObject* CustomData);
	void DelegateOnSuccessLoginWithKongregate__DelegateSignature(const struct FClientLoginResult& Result, class UObject* CustomData);
	void DelegateOnSuccessLoginWithIOSDeviceID__DelegateSignature(const struct FClientLoginResult& Result, class UObject* CustomData);
	void DelegateOnSuccessLoginWithGooglePlayGamesServices__DelegateSignature(const struct FClientLoginResult& Result, class UObject* CustomData);
	void DelegateOnSuccessLoginWithGoogleAccount__DelegateSignature(const struct FClientLoginResult& Result, class UObject* CustomData);
	void DelegateOnSuccessLoginWithGameCenter__DelegateSignature(const struct FClientLoginResult& Result, class UObject* CustomData);
	void DelegateOnSuccessLoginWithFacebookInstantGamesId__DelegateSignature(const struct FClientLoginResult& Result, class UObject* CustomData);
	void DelegateOnSuccessLoginWithFacebook__DelegateSignature(const struct FClientLoginResult& Result, class UObject* CustomData);
	void DelegateOnSuccessLoginWithEmailAddress__DelegateSignature(const struct FClientLoginResult& Result, class UObject* CustomData);
	void DelegateOnSuccessLoginWithCustomID__DelegateSignature(const struct FClientLoginResult& Result, class UObject* CustomData);
	void DelegateOnSuccessLoginWithApple__DelegateSignature(const struct FClientLoginResult& Result, class UObject* CustomData);
	void DelegateOnSuccessLoginWithAndroidDeviceID__DelegateSignature(const struct FClientLoginResult& Result, class UObject* CustomData);
	void DelegateOnSuccessLinkXboxAccount__DelegateSignature(const struct FClientLinkXboxAccountResult& Result, class UObject* CustomData);
	void DelegateOnSuccessLinkTwitch__DelegateSignature(const struct FClientLinkTwitchAccountResult& Result, class UObject* CustomData);
	void DelegateOnSuccessLinkSteamAccount__DelegateSignature(const struct FClientLinkSteamAccountResult& Result, class UObject* CustomData);
	void DelegateOnSuccessLinkPSNAccount__DelegateSignature(const struct FClientLinkPSNAccountResult& Result, class UObject* CustomData);
	void DelegateOnSuccessLinkOpenIdConnect__DelegateSignature(const struct FClientEmptyResult& Result, class UObject* CustomData);
	void DelegateOnSuccessLinkNintendoSwitchDeviceId__DelegateSignature(const struct FClientLinkNintendoSwitchDeviceIdResult& Result, class UObject* CustomData);
	void DelegateOnSuccessLinkNintendoServiceAccount__DelegateSignature(const struct FClientEmptyResult& Result, class UObject* CustomData);
	void DelegateOnSuccessLinkKongregate__DelegateSignature(const struct FClientLinkKongregateAccountResult& Result, class UObject* CustomData);
	void DelegateOnSuccessLinkIOSDeviceID__DelegateSignature(const struct FClientLinkIOSDeviceIDResult& Result, class UObject* CustomData);
	void DelegateOnSuccessLinkGooglePlayGamesServicesAccount__DelegateSignature(const struct FClientLinkGooglePlayGamesServicesAccountResult& Result, class UObject* CustomData);
	void DelegateOnSuccessLinkGoogleAccount__DelegateSignature(const struct FClientLinkGoogleAccountResult& Result, class UObject* CustomData);
	void DelegateOnSuccessLinkGameCenterAccount__DelegateSignature(const struct FClientLinkGameCenterAccountResult& Result, class UObject* CustomData);
	void DelegateOnSuccessLinkFacebookInstantGamesId__DelegateSignature(const struct FClientLinkFacebookInstantGamesIdResult& Result, class UObject* CustomData);
	void DelegateOnSuccessLinkFacebookAccount__DelegateSignature(const struct FClientLinkFacebookAccountResult& Result, class UObject* CustomData);
	void DelegateOnSuccessLinkCustomID__DelegateSignature(const struct FClientLinkCustomIDResult& Result, class UObject* CustomData);
	void DelegateOnSuccessLinkApple__DelegateSignature(const struct FClientEmptyResult& Result, class UObject* CustomData);
	void DelegateOnSuccessLinkAndroidDeviceID__DelegateSignature(const struct FClientLinkAndroidDeviceIDResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGrantCharacterToUser__DelegateSignature(const struct FClientGrantCharacterToUserResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetUserReadOnlyData__DelegateSignature(const struct FClientGetUserDataResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetUserPublisherReadOnlyData__DelegateSignature(const struct FClientGetUserDataResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetUserPublisherData__DelegateSignature(const struct FClientGetUserDataResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetUserInventory__DelegateSignature(const struct FClientGetUserInventoryResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetUserData__DelegateSignature(const struct FClientGetUserDataResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetTradeStatus__DelegateSignature(const struct FClientGetTradeStatusResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessGetTitlePublicKey__DelegateSignature(const struct FClientGetTitlePublicKeyResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetTitleNews__DelegateSignature(const struct FClientGetTitleNewsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetTitleData__DelegateSignature(const struct FClientGetTitleDataResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetTime__DelegateSignature(const struct FClientGetTimeResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetStoreItems__DelegateSignature(const struct FClientGetStoreItemsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetSharedGroupData__DelegateSignature(const struct FClientGetSharedGroupDataResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetPurchase__DelegateSignature(const struct FClientGetPurchaseResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetPublisherData__DelegateSignature(const struct FClientGetPublisherDataResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetPlayFabIDsFromXboxLiveIDs__DelegateSignature(const struct FClientGetPlayFabIDsFromXboxLiveIDsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetPlayFabIDsFromTwitchIDs__DelegateSignature(const struct FClientGetPlayFabIDsFromTwitchIDsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetPlayFabIDsFromSteamIDs__DelegateSignature(const struct FClientGetPlayFabIDsFromSteamIDsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetPlayFabIDsFromPSNAccountIDs__DelegateSignature(const struct FClientGetPlayFabIDsFromPSNAccountIDsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetPlayFabIDsFromNintendoSwitchDeviceIds__DelegateSignature(const struct FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetPlayFabIDsFromNintendoServiceAccountIds__DelegateSignature(const struct FClientGetPlayFabIDsFromNintendoServiceAccountIdsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetPlayFabIDsFromKongregateIDs__DelegateSignature(const struct FClientGetPlayFabIDsFromKongregateIDsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetPlayFabIDsFromGooglePlayGamesPlayerIDs__DelegateSignature(const struct FClientGetPlayFabIDsFromGooglePlayGamesPlayerIDsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetPlayFabIDsFromGoogleIDs__DelegateSignature(const struct FClientGetPlayFabIDsFromGoogleIDsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetPlayFabIDsFromGenericIDs__DelegateSignature(const struct FClientGetPlayFabIDsFromGenericIDsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetPlayFabIDsFromGameCenterIDs__DelegateSignature(const struct FClientGetPlayFabIDsFromGameCenterIDsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetPlayFabIDsFromFacebookInstantGamesIds__DelegateSignature(const struct FClientGetPlayFabIDsFromFacebookInstantGamesIdsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetPlayFabIDsFromFacebookIDs__DelegateSignature(const struct FClientGetPlayFabIDsFromFacebookIDsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetPlayerTrades__DelegateSignature(const struct FClientGetPlayerTradesResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessGetPlayerTags__DelegateSignature(const struct FClientGetPlayerTagsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetPlayerStatisticVersions__DelegateSignature(const struct FClientGetPlayerStatisticVersionsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetPlayerStatistics__DelegateSignature(const struct FClientGetPlayerStatisticsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetPlayerSegments__DelegateSignature(const struct FClientGetPlayerSegmentsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetPlayerProfile__DelegateSignature(const struct FClientGetPlayerProfileResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetPlayerCombinedInfo__DelegateSignature(const struct FClientGetPlayerCombinedInfoResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetPhotonAuthenticationToken__DelegateSignature(const struct FClientGetPhotonAuthenticationTokenResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetPaymentToken__DelegateSignature(const struct FClientGetPaymentTokenResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetLeaderboardForUserCharacters__DelegateSignature(const struct FClientGetLeaderboardForUsersCharactersResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetLeaderboardAroundPlayer__DelegateSignature(const struct FClientGetLeaderboardAroundPlayerResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetLeaderboardAroundCharacter__DelegateSignature(const struct FClientGetLeaderboardAroundCharacterResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetLeaderboard__DelegateSignature(const struct FClientGetLeaderboardResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetGameServerRegions__DelegateSignature(const struct FClientGameServerRegionsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetFriendsList__DelegateSignature(const struct FClientGetFriendsListResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetFriendLeaderboardAroundPlayer__DelegateSignature(const struct FClientGetFriendLeaderboardAroundPlayerResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetFriendLeaderboard__DelegateSignature(const struct FClientGetLeaderboardResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetCurrentGames__DelegateSignature(const struct FClientCurrentGamesResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetContentDownloadUrl__DelegateSignature(const struct FClientGetContentDownloadUrlResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetCharacterStatistics__DelegateSignature(const struct FClientGetCharacterStatisticsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetCharacterReadOnlyData__DelegateSignature(const struct FClientGetCharacterDataResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetCharacterLeaderboard__DelegateSignature(const struct FClientGetCharacterLeaderboardResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetCharacterInventory__DelegateSignature(const struct FClientGetCharacterInventoryResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetCharacterData__DelegateSignature(const struct FClientGetCharacterDataResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetCatalogItems__DelegateSignature(const struct FClientGetCatalogItemsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetAllUsersCharacters__DelegateSignature(const struct FClientListUsersCharactersResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetAdPlacements__DelegateSignature(const struct FClientGetAdPlacementsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetAccountInfo__DelegateSignature(const struct FClientGetAccountInfoResult& Result, class UObject* CustomData);
	void DelegateOnSuccessExecuteCloudScript__DelegateSignature(const struct FClientExecuteCloudScriptResult& Result, class UObject* CustomData);
	void DelegateOnSuccessCreateSharedGroup__DelegateSignature(const struct FClientCreateSharedGroupResult& Result, class UObject* CustomData);
	void DelegateOnSuccessConsumeXboxEntitlements__DelegateSignature(const struct FClientConsumeXboxEntitlementsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessConsumePSNEntitlements__DelegateSignature(const struct FClientConsumePSNEntitlementsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessConsumePS5Entitlements__DelegateSignature(const struct FClientConsumePS5EntitlementsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessConsumeMicrosoftStoreEntitlements__DelegateSignature(const struct FClientConsumeMicrosoftStoreEntitlementsResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessConsumeItem__DelegateSignature(const struct FClientConsumeItemResult& Result, class UObject* CustomData);
	void DelegateOnSuccessConfirmPurchase__DelegateSignature(const struct FClientConfirmPurchaseResult& Result, class UObject* CustomData);
	void DelegateOnSuccessCancelTrade__DelegateSignature(const struct FClientCancelTradeResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessAttributeInstall__DelegateSignature(const struct FClientAttributeInstallResult& Result, class UObject* CustomData);
	void DelegateOnSuccessAndroidDevicePushNotificationRegistration__DelegateSignature(const struct FClientAndroidDevicePushNotificationRegistrationResult& Result, class UObject* CustomData);
	void DelegateOnSuccessAddUserVirtualCurrency__DelegateSignature(const struct FClientModifyUserVirtualCurrencyResult& Result, class UObject* CustomData);
	void DelegateOnSuccessAddUsernamePassword__DelegateSignature(const struct FClientAddUsernamePasswordResult& Result, class UObject* CustomData);
	void DelegateOnSuccessAddSharedGroupMembers__DelegateSignature(const struct FClientAddSharedGroupMembersResult& Result, class UObject* CustomData);
	void DelegateOnSuccessAddOrUpdateContactEmail__DelegateSignature(const struct FClientAddOrUpdateContactEmailResult& Result, class UObject* CustomData);
	void DelegateOnSuccessAddGenericID__DelegateSignature(const struct FClientAddGenericIDResult& Result, class UObject* CustomData);
	void DelegateOnSuccessAddFriend__DelegateSignature(const struct FClientAddFriendResult& Result, class UObject* CustomData);
	void DelegateOnSuccessAcceptTrade__DelegateSignature(const struct FClientAcceptTradeResponse& Result, class UObject* CustomData);
	void DelegateOnFailurePlayFabError__DelegateSignature(const struct FPlayFabError& Error, class UObject* CustomData);
	class UPlayFabClientAPI* CreateSharedGroup(const struct FClientCreateSharedGroupRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* ConsumeXboxEntitlements(const struct FClientConsumeXboxEntitlementsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* ConsumePSNEntitlements(const struct FClientConsumePSNEntitlementsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* ConsumePS5Entitlements(const struct FClientConsumePS5EntitlementsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* ConsumeMicrosoftStoreEntitlements(const struct FClientConsumeMicrosoftStoreEntitlementsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* ConsumeItem(const struct FClientConsumeItemRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* ConfirmPurchase(const struct FClientConfirmPurchaseRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* CancelTrade(const struct FClientCancelTradeRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* AttributeInstall(const struct FClientAttributeInstallRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* AndroidDevicePushNotificationRegistration(const struct FClientAndroidDevicePushNotificationRegistrationRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* AddUserVirtualCurrency(const struct FClientAddUserVirtualCurrencyRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* AddUsernamePassword(const struct FClientAddUsernamePasswordRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* AddSharedGroupMembers(const struct FClientAddSharedGroupMembersRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* AddOrUpdateContactEmail(const struct FClientAddOrUpdateContactEmailRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* AddGenericID(const struct FClientAddGenericIDRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* AddFriend(const struct FClientAddFriendRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabClientAPI* AcceptTrade(const struct FClientAcceptTradeRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
};

// 0x0 (0x28 - 0x28)
// Class PlayFab.PlayFabClientModelDecoder
class UPlayFabClientModelDecoder : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UPlayFabClientModelDecoder* GetDefaultObj();

	struct FClientWriteEventResponse DecodeWriteEventResponseResponse(class UPlayFabJsonObject* Response);
	struct FClientValidateWindowsReceiptResult DecodeValidateWindowsReceiptResultResponse(class UPlayFabJsonObject* Response);
	struct FClientValidateIOSReceiptResult DecodeValidateIOSReceiptResultResponse(class UPlayFabJsonObject* Response);
	struct FClientValidateGooglePlayPurchaseResult DecodeValidateGooglePlayPurchaseResultResponse(class UPlayFabJsonObject* Response);
	struct FClientValidateAmazonReceiptResult DecodeValidateAmazonReceiptResultResponse(class UPlayFabJsonObject* Response);
	struct FClientUpdateUserTitleDisplayNameResult DecodeUpdateUserTitleDisplayNameResultResponse(class UPlayFabJsonObject* Response);
	struct FClientUpdateUserDataResult DecodeUpdateUserDataResultResponse(class UPlayFabJsonObject* Response);
	struct FClientUpdateSharedGroupDataResult DecodeUpdateSharedGroupDataResultResponse(class UPlayFabJsonObject* Response);
	struct FClientUpdatePlayerStatisticsResult DecodeUpdatePlayerStatisticsResultResponse(class UPlayFabJsonObject* Response);
	struct FClientUpdateCharacterStatisticsResult DecodeUpdateCharacterStatisticsResultResponse(class UPlayFabJsonObject* Response);
	struct FClientUpdateCharacterDataResult DecodeUpdateCharacterDataResultResponse(class UPlayFabJsonObject* Response);
	struct FClientUnlockContainerItemResult DecodeUnlockContainerItemResultResponse(class UPlayFabJsonObject* Response);
	struct FClientUnlinkXboxAccountResult DecodeUnlinkXboxAccountResultResponse(class UPlayFabJsonObject* Response);
	struct FClientUnlinkTwitchAccountResult DecodeUnlinkTwitchAccountResultResponse(class UPlayFabJsonObject* Response);
	struct FClientUnlinkSteamAccountResult DecodeUnlinkSteamAccountResultResponse(class UPlayFabJsonObject* Response);
	struct FClientUnlinkPSNAccountResult DecodeUnlinkPSNAccountResultResponse(class UPlayFabJsonObject* Response);
	struct FClientUnlinkNintendoSwitchDeviceIdResult DecodeUnlinkNintendoSwitchDeviceIdResultResponse(class UPlayFabJsonObject* Response);
	struct FClientUnlinkKongregateAccountResult DecodeUnlinkKongregateAccountResultResponse(class UPlayFabJsonObject* Response);
	struct FClientUnlinkIOSDeviceIDResult DecodeUnlinkIOSDeviceIDResultResponse(class UPlayFabJsonObject* Response);
	struct FClientUnlinkGooglePlayGamesServicesAccountResult DecodeUnlinkGooglePlayGamesServicesAccountResultResponse(class UPlayFabJsonObject* Response);
	struct FClientUnlinkGoogleAccountResult DecodeUnlinkGoogleAccountResultResponse(class UPlayFabJsonObject* Response);
	struct FClientUnlinkGameCenterAccountResult DecodeUnlinkGameCenterAccountResultResponse(class UPlayFabJsonObject* Response);
	struct FClientUnlinkFacebookInstantGamesIdResult DecodeUnlinkFacebookInstantGamesIdResultResponse(class UPlayFabJsonObject* Response);
	struct FClientUnlinkFacebookAccountResult DecodeUnlinkFacebookAccountResultResponse(class UPlayFabJsonObject* Response);
	struct FClientUnlinkCustomIDResult DecodeUnlinkCustomIDResultResponse(class UPlayFabJsonObject* Response);
	struct FClientUnlinkAndroidDeviceIDResult DecodeUnlinkAndroidDeviceIDResultResponse(class UPlayFabJsonObject* Response);
	struct FClientStartPurchaseResult DecodeStartPurchaseResultResponse(class UPlayFabJsonObject* Response);
	struct FClientSetPlayerSecretResult DecodeSetPlayerSecretResultResponse(class UPlayFabJsonObject* Response);
	struct FClientSetFriendTagsResult DecodeSetFriendTagsResultResponse(class UPlayFabJsonObject* Response);
	struct FClientSendAccountRecoveryEmailResult DecodeSendAccountRecoveryEmailResultResponse(class UPlayFabJsonObject* Response);
	struct FClientRewardAdActivityResult DecodeRewardAdActivityResultResponse(class UPlayFabJsonObject* Response);
	struct FClientRestoreIOSPurchasesResult DecodeRestoreIOSPurchasesResultResponse(class UPlayFabJsonObject* Response);
	struct FClientReportPlayerClientResult DecodeReportPlayerClientResultResponse(class UPlayFabJsonObject* Response);
	struct FClientReportAdActivityResult DecodeReportAdActivityResultResponse(class UPlayFabJsonObject* Response);
	struct FClientRemoveSharedGroupMembersResult DecodeRemoveSharedGroupMembersResultResponse(class UPlayFabJsonObject* Response);
	struct FClientRemoveGenericIDResult DecodeRemoveGenericIDResultResponse(class UPlayFabJsonObject* Response);
	struct FClientRemoveFriendResult DecodeRemoveFriendResultResponse(class UPlayFabJsonObject* Response);
	struct FClientRemoveContactEmailResult DecodeRemoveContactEmailResultResponse(class UPlayFabJsonObject* Response);
	struct FClientRegisterPlayFabUserResult DecodeRegisterPlayFabUserResultResponse(class UPlayFabJsonObject* Response);
	struct FClientRegisterForIOSPushNotificationResult DecodeRegisterForIOSPushNotificationResultResponse(class UPlayFabJsonObject* Response);
	struct FClientRedeemCouponResult DecodeRedeemCouponResultResponse(class UPlayFabJsonObject* Response);
	struct FClientPurchaseItemResult DecodePurchaseItemResultResponse(class UPlayFabJsonObject* Response);
	struct FClientPayForPurchaseResult DecodePayForPurchaseResultResponse(class UPlayFabJsonObject* Response);
	struct FClientOpenTradeResponse DecodeOpenTradeResponseResponse(class UPlayFabJsonObject* Response);
	struct FClientModifyUserVirtualCurrencyResult DecodeModifyUserVirtualCurrencyResultResponse(class UPlayFabJsonObject* Response);
	struct FClientMatchmakeResult DecodeMatchmakeResultResponse(class UPlayFabJsonObject* Response);
	struct FClientLoginResult DecodeLoginResultResponse(class UPlayFabJsonObject* Response);
	struct FClientListUsersCharactersResult DecodeListUsersCharactersResultResponse(class UPlayFabJsonObject* Response);
	struct FClientLinkXboxAccountResult DecodeLinkXboxAccountResultResponse(class UPlayFabJsonObject* Response);
	struct FClientLinkTwitchAccountResult DecodeLinkTwitchAccountResultResponse(class UPlayFabJsonObject* Response);
	struct FClientLinkSteamAccountResult DecodeLinkSteamAccountResultResponse(class UPlayFabJsonObject* Response);
	struct FClientLinkPSNAccountResult DecodeLinkPSNAccountResultResponse(class UPlayFabJsonObject* Response);
	struct FClientLinkNintendoSwitchDeviceIdResult DecodeLinkNintendoSwitchDeviceIdResultResponse(class UPlayFabJsonObject* Response);
	struct FClientLinkKongregateAccountResult DecodeLinkKongregateAccountResultResponse(class UPlayFabJsonObject* Response);
	struct FClientLinkIOSDeviceIDResult DecodeLinkIOSDeviceIDResultResponse(class UPlayFabJsonObject* Response);
	struct FClientLinkGooglePlayGamesServicesAccountResult DecodeLinkGooglePlayGamesServicesAccountResultResponse(class UPlayFabJsonObject* Response);
	struct FClientLinkGoogleAccountResult DecodeLinkGoogleAccountResultResponse(class UPlayFabJsonObject* Response);
	struct FClientLinkGameCenterAccountResult DecodeLinkGameCenterAccountResultResponse(class UPlayFabJsonObject* Response);
	struct FClientLinkFacebookInstantGamesIdResult DecodeLinkFacebookInstantGamesIdResultResponse(class UPlayFabJsonObject* Response);
	struct FClientLinkFacebookAccountResult DecodeLinkFacebookAccountResultResponse(class UPlayFabJsonObject* Response);
	struct FClientLinkCustomIDResult DecodeLinkCustomIDResultResponse(class UPlayFabJsonObject* Response);
	struct FClientLinkAndroidDeviceIDResult DecodeLinkAndroidDeviceIDResultResponse(class UPlayFabJsonObject* Response);
	struct FClientGrantCharacterToUserResult DecodeGrantCharacterToUserResultResponse(class UPlayFabJsonObject* Response);
	struct FClientGetUserInventoryResult DecodeGetUserInventoryResultResponse(class UPlayFabJsonObject* Response);
	struct FClientGetUserDataResult DecodeGetUserDataResultResponse(class UPlayFabJsonObject* Response);
	struct FClientGetTradeStatusResponse DecodeGetTradeStatusResponseResponse(class UPlayFabJsonObject* Response);
	struct FClientGetTitlePublicKeyResult DecodeGetTitlePublicKeyResultResponse(class UPlayFabJsonObject* Response);
	struct FClientGetTitleNewsResult DecodeGetTitleNewsResultResponse(class UPlayFabJsonObject* Response);
	struct FClientGetTitleDataResult DecodeGetTitleDataResultResponse(class UPlayFabJsonObject* Response);
	struct FClientGetTimeResult DecodeGetTimeResultResponse(class UPlayFabJsonObject* Response);
	struct FClientGetStoreItemsResult DecodeGetStoreItemsResultResponse(class UPlayFabJsonObject* Response);
	struct FClientGetSharedGroupDataResult DecodeGetSharedGroupDataResultResponse(class UPlayFabJsonObject* Response);
	struct FClientGetPurchaseResult DecodeGetPurchaseResultResponse(class UPlayFabJsonObject* Response);
	struct FClientGetPublisherDataResult DecodeGetPublisherDataResultResponse(class UPlayFabJsonObject* Response);
	struct FClientGetPlayFabIDsFromXboxLiveIDsResult DecodeGetPlayFabIDsFromXboxLiveIDsResultResponse(class UPlayFabJsonObject* Response);
	struct FClientGetPlayFabIDsFromTwitchIDsResult DecodeGetPlayFabIDsFromTwitchIDsResultResponse(class UPlayFabJsonObject* Response);
	struct FClientGetPlayFabIDsFromSteamIDsResult DecodeGetPlayFabIDsFromSteamIDsResultResponse(class UPlayFabJsonObject* Response);
	struct FClientGetPlayFabIDsFromPSNAccountIDsResult DecodeGetPlayFabIDsFromPSNAccountIDsResultResponse(class UPlayFabJsonObject* Response);
	struct FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult DecodeGetPlayFabIDsFromNintendoSwitchDeviceIdsResultResponse(class UPlayFabJsonObject* Response);
	struct FClientGetPlayFabIDsFromNintendoServiceAccountIdsResult DecodeGetPlayFabIDsFromNintendoServiceAccountIdsResultResponse(class UPlayFabJsonObject* Response);
	struct FClientGetPlayFabIDsFromKongregateIDsResult DecodeGetPlayFabIDsFromKongregateIDsResultResponse(class UPlayFabJsonObject* Response);
	struct FClientGetPlayFabIDsFromGooglePlayGamesPlayerIDsResult DecodeGetPlayFabIDsFromGooglePlayGamesPlayerIDsResultResponse(class UPlayFabJsonObject* Response);
	struct FClientGetPlayFabIDsFromGoogleIDsResult DecodeGetPlayFabIDsFromGoogleIDsResultResponse(class UPlayFabJsonObject* Response);
	struct FClientGetPlayFabIDsFromGenericIDsResult DecodeGetPlayFabIDsFromGenericIDsResultResponse(class UPlayFabJsonObject* Response);
	struct FClientGetPlayFabIDsFromGameCenterIDsResult DecodeGetPlayFabIDsFromGameCenterIDsResultResponse(class UPlayFabJsonObject* Response);
	struct FClientGetPlayFabIDsFromFacebookInstantGamesIdsResult DecodeGetPlayFabIDsFromFacebookInstantGamesIdsResultResponse(class UPlayFabJsonObject* Response);
	struct FClientGetPlayFabIDsFromFacebookIDsResult DecodeGetPlayFabIDsFromFacebookIDsResultResponse(class UPlayFabJsonObject* Response);
	struct FClientGetPlayerTradesResponse DecodeGetPlayerTradesResponseResponse(class UPlayFabJsonObject* Response);
	struct FClientGetPlayerTagsResult DecodeGetPlayerTagsResultResponse(class UPlayFabJsonObject* Response);
	struct FClientGetPlayerStatisticVersionsResult DecodeGetPlayerStatisticVersionsResultResponse(class UPlayFabJsonObject* Response);
	struct FClientGetPlayerStatisticsResult DecodeGetPlayerStatisticsResultResponse(class UPlayFabJsonObject* Response);
	struct FClientGetPlayerSegmentsResult DecodeGetPlayerSegmentsResultResponse(class UPlayFabJsonObject* Response);
	struct FClientGetPlayerProfileResult DecodeGetPlayerProfileResultResponse(class UPlayFabJsonObject* Response);
	struct FClientGetPlayerCombinedInfoResult DecodeGetPlayerCombinedInfoResultResponse(class UPlayFabJsonObject* Response);
	struct FClientGetPhotonAuthenticationTokenResult DecodeGetPhotonAuthenticationTokenResultResponse(class UPlayFabJsonObject* Response);
	struct FClientGetPaymentTokenResult DecodeGetPaymentTokenResultResponse(class UPlayFabJsonObject* Response);
	struct FClientGetLeaderboardResult DecodeGetLeaderboardResultResponse(class UPlayFabJsonObject* Response);
	struct FClientGetLeaderboardForUsersCharactersResult DecodeGetLeaderboardForUsersCharactersResultResponse(class UPlayFabJsonObject* Response);
	struct FClientGetLeaderboardAroundPlayerResult DecodeGetLeaderboardAroundPlayerResultResponse(class UPlayFabJsonObject* Response);
	struct FClientGetLeaderboardAroundCharacterResult DecodeGetLeaderboardAroundCharacterResultResponse(class UPlayFabJsonObject* Response);
	struct FClientGetFriendsListResult DecodeGetFriendsListResultResponse(class UPlayFabJsonObject* Response);
	struct FClientGetFriendLeaderboardAroundPlayerResult DecodeGetFriendLeaderboardAroundPlayerResultResponse(class UPlayFabJsonObject* Response);
	struct FClientGetContentDownloadUrlResult DecodeGetContentDownloadUrlResultResponse(class UPlayFabJsonObject* Response);
	struct FClientGetCharacterStatisticsResult DecodeGetCharacterStatisticsResultResponse(class UPlayFabJsonObject* Response);
	struct FClientGetCharacterLeaderboardResult DecodeGetCharacterLeaderboardResultResponse(class UPlayFabJsonObject* Response);
	struct FClientGetCharacterInventoryResult DecodeGetCharacterInventoryResultResponse(class UPlayFabJsonObject* Response);
	struct FClientGetCharacterDataResult DecodeGetCharacterDataResultResponse(class UPlayFabJsonObject* Response);
	struct FClientGetCatalogItemsResult DecodeGetCatalogItemsResultResponse(class UPlayFabJsonObject* Response);
	struct FClientGetAdPlacementsResult DecodeGetAdPlacementsResultResponse(class UPlayFabJsonObject* Response);
	struct FClientGetAccountInfoResult DecodeGetAccountInfoResultResponse(class UPlayFabJsonObject* Response);
	struct FClientGameServerRegionsResult DecodeGameServerRegionsResultResponse(class UPlayFabJsonObject* Response);
	struct FClientExecuteCloudScriptResult DecodeExecuteCloudScriptResultResponse(class UPlayFabJsonObject* Response);
	struct FClientEmptyResult DecodeEmptyResultResponse(class UPlayFabJsonObject* Response);
	struct FClientEmptyResponse DecodeEmptyResponseResponse(class UPlayFabJsonObject* Response);
	struct FClientCurrentGamesResult DecodeCurrentGamesResultResponse(class UPlayFabJsonObject* Response);
	struct FClientCreateSharedGroupResult DecodeCreateSharedGroupResultResponse(class UPlayFabJsonObject* Response);
	struct FClientConsumeXboxEntitlementsResult DecodeConsumeXboxEntitlementsResultResponse(class UPlayFabJsonObject* Response);
	struct FClientConsumePSNEntitlementsResult DecodeConsumePSNEntitlementsResultResponse(class UPlayFabJsonObject* Response);
	struct FClientConsumePS5EntitlementsResult DecodeConsumePS5EntitlementsResultResponse(class UPlayFabJsonObject* Response);
	struct FClientConsumeMicrosoftStoreEntitlementsResponse DecodeConsumeMicrosoftStoreEntitlementsResponseResponse(class UPlayFabJsonObject* Response);
	struct FClientConsumeItemResult DecodeConsumeItemResultResponse(class UPlayFabJsonObject* Response);
	struct FClientConfirmPurchaseResult DecodeConfirmPurchaseResultResponse(class UPlayFabJsonObject* Response);
	struct FClientCancelTradeResponse DecodeCancelTradeResponseResponse(class UPlayFabJsonObject* Response);
	struct FClientAttributeInstallResult DecodeAttributeInstallResultResponse(class UPlayFabJsonObject* Response);
	struct FClientAndroidDevicePushNotificationRegistrationResult DecodeAndroidDevicePushNotificationRegistrationResultResponse(class UPlayFabJsonObject* Response);
	struct FClientAddUsernamePasswordResult DecodeAddUsernamePasswordResultResponse(class UPlayFabJsonObject* Response);
	struct FClientAddSharedGroupMembersResult DecodeAddSharedGroupMembersResultResponse(class UPlayFabJsonObject* Response);
	struct FClientAddOrUpdateContactEmailResult DecodeAddOrUpdateContactEmailResultResponse(class UPlayFabJsonObject* Response);
	struct FClientAddGenericIDResult DecodeAddGenericIDResultResponse(class UPlayFabJsonObject* Response);
	struct FClientAddFriendResult DecodeAddFriendResultResponse(class UPlayFabJsonObject* Response);
	struct FClientAcceptTradeResponse DecodeAcceptTradeResponseResponse(class UPlayFabJsonObject* Response);
};

// 0x1A0 (0x1D0 - 0x30)
// Class PlayFab.PlayFabCloudScriptAPI
class UPlayFabCloudScriptAPI : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnPlayFabResponse;                                 // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D3C[0x128];                                   // Fixing Size After Last Property 
	class UPlayFabAuthenticationContext*         CallAuthenticationContext;                         // 0x168(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPlayFabJsonObject*                    RequestJsonObj;                                    // 0x170(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPlayFabJsonObject*                    ResponseJsonObj;                                   // 0x178(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2D3E[0x50];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UPlayFabCloudScriptAPI* GetDefaultObj();

	class UPlayFabCloudScriptAPI* UnregisterFunction(const struct FCloudScriptUnregisterFunctionRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabCloudScriptAPI* RegisterQueuedFunction(const struct FCloudScriptRegisterQueuedFunctionRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabCloudScriptAPI* RegisterHttpFunction(const struct FCloudScriptRegisterHttpFunctionRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabCloudScriptAPI* PostFunctionResultForScheduledTask(const struct FCloudScriptPostFunctionResultForScheduledTaskRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabCloudScriptAPI* PostFunctionResultForPlayerTriggeredAction(const struct FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabCloudScriptAPI* PostFunctionResultForFunctionExecution(const struct FCloudScriptPostFunctionResultForFunctionExecutionRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabCloudScriptAPI* PostFunctionResultForEntityTriggeredAction(const struct FCloudScriptPostFunctionResultForEntityTriggeredActionRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabCloudScriptAPI* ListQueuedFunctions(const struct FCloudScriptListFunctionsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabCloudScriptAPI* ListHttpFunctions(const struct FCloudScriptListFunctionsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabCloudScriptAPI* ListFunctions(const struct FCloudScriptListFunctionsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	void HelperUnregisterFunction(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperRegisterQueuedFunction(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperRegisterHttpFunction(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperPostFunctionResultForScheduledTask(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperPostFunctionResultForPlayerTriggeredAction(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperPostFunctionResultForFunctionExecution(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperPostFunctionResultForEntityTriggeredAction(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperListQueuedFunctions(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperListHttpFunctions(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperListFunctions(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetFunction(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperExecuteFunction(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperExecuteEntityCloudScript(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	class UPlayFabCloudScriptAPI* GetFunction(const struct FCloudScriptGetFunctionRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabCloudScriptAPI* ExecuteFunction(const struct FCloudScriptExecuteFunctionRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabCloudScriptAPI* ExecuteEntityCloudScript(const struct FCloudScriptExecuteEntityCloudScriptRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	void DelegateOnSuccessUnregisterFunction__DelegateSignature(const struct FCloudScriptEmptyResult& Result, class UObject* CustomData);
	void DelegateOnSuccessRegisterQueuedFunction__DelegateSignature(const struct FCloudScriptEmptyResult& Result, class UObject* CustomData);
	void DelegateOnSuccessRegisterHttpFunction__DelegateSignature(const struct FCloudScriptEmptyResult& Result, class UObject* CustomData);
	void DelegateOnSuccessPostFunctionResultForScheduledTask__DelegateSignature(const struct FCloudScriptEmptyResult& Result, class UObject* CustomData);
	void DelegateOnSuccessPostFunctionResultForPlayerTriggeredAction__DelegateSignature(const struct FCloudScriptEmptyResult& Result, class UObject* CustomData);
	void DelegateOnSuccessPostFunctionResultForFunctionExecution__DelegateSignature(const struct FCloudScriptEmptyResult& Result, class UObject* CustomData);
	void DelegateOnSuccessPostFunctionResultForEntityTriggeredAction__DelegateSignature(const struct FCloudScriptEmptyResult& Result, class UObject* CustomData);
	void DelegateOnSuccessListQueuedFunctions__DelegateSignature(const struct FCloudScriptListQueuedFunctionsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessListHttpFunctions__DelegateSignature(const struct FCloudScriptListHttpFunctionsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessListFunctions__DelegateSignature(const struct FCloudScriptListFunctionsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetFunction__DelegateSignature(const struct FCloudScriptGetFunctionResult& Result, class UObject* CustomData);
	void DelegateOnSuccessExecuteFunction__DelegateSignature(const struct FCloudScriptExecuteFunctionResult& Result, class UObject* CustomData);
	void DelegateOnSuccessExecuteEntityCloudScript__DelegateSignature(const struct FCloudScriptExecuteCloudScriptResult& Result, class UObject* CustomData);
	void DelegateOnFailurePlayFabError__DelegateSignature(const struct FPlayFabError& Error, class UObject* CustomData);
};

// 0x0 (0x28 - 0x28)
// Class PlayFab.PlayFabCloudScriptModelDecoder
class UPlayFabCloudScriptModelDecoder : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UPlayFabCloudScriptModelDecoder* GetDefaultObj();

	struct FCloudScriptListQueuedFunctionsResult DecodeListQueuedFunctionsResultResponse(class UPlayFabJsonObject* Response);
	struct FCloudScriptListHttpFunctionsResult DecodeListHttpFunctionsResultResponse(class UPlayFabJsonObject* Response);
	struct FCloudScriptListFunctionsResult DecodeListFunctionsResultResponse(class UPlayFabJsonObject* Response);
	struct FCloudScriptGetFunctionResult DecodeGetFunctionResultResponse(class UPlayFabJsonObject* Response);
	struct FCloudScriptExecuteFunctionResult DecodeExecuteFunctionResultResponse(class UPlayFabJsonObject* Response);
	struct FCloudScriptExecuteCloudScriptResult DecodeExecuteCloudScriptResultResponse(class UPlayFabJsonObject* Response);
	struct FCloudScriptEmptyResult DecodeEmptyResultResponse(class UPlayFabJsonObject* Response);
};

// 0x130 (0x160 - 0x30)
// Class PlayFab.PlayFabDataAPI
class UPlayFabDataAPI : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnPlayFabResponse;                                 // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D9D[0xB8];                                    // Fixing Size After Last Property 
	class UPlayFabAuthenticationContext*         CallAuthenticationContext;                         // 0xF8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPlayFabJsonObject*                    RequestJsonObj;                                    // 0x100(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPlayFabJsonObject*                    ResponseJsonObj;                                   // 0x108(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2D9E[0x50];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UPlayFabDataAPI* GetDefaultObj();

	class UPlayFabDataAPI* SetObjects(const struct FDataSetObjectsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabDataAPI* InitiateFileUploads(const struct FDataInitiateFileUploadsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	void HelperSetObjects(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperInitiateFileUploads(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetObjects(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetFiles(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperFinalizeFileUploads(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperDeleteFiles(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperAbortFileUploads(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	class UPlayFabDataAPI* GetObjects(const struct FDataGetObjectsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabDataAPI* GetFiles(const struct FDataGetFilesRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabDataAPI* FinalizeFileUploads(const struct FDataFinalizeFileUploadsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabDataAPI* DeleteFiles(const struct FDataDeleteFilesRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	void DelegateOnSuccessSetObjects__DelegateSignature(const struct FDataSetObjectsResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessInitiateFileUploads__DelegateSignature(const struct FDataInitiateFileUploadsResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessGetObjects__DelegateSignature(const struct FDataGetObjectsResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessGetFiles__DelegateSignature(const struct FDataGetFilesResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessFinalizeFileUploads__DelegateSignature(const struct FDataFinalizeFileUploadsResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessDeleteFiles__DelegateSignature(const struct FDataDeleteFilesResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessAbortFileUploads__DelegateSignature(const struct FDataAbortFileUploadsResponse& Result, class UObject* CustomData);
	void DelegateOnFailurePlayFabError__DelegateSignature(const struct FPlayFabError& Error, class UObject* CustomData);
	class UPlayFabDataAPI* AbortFileUploads(const struct FDataAbortFileUploadsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
};

// 0x0 (0x28 - 0x28)
// Class PlayFab.PlayFabDataModelDecoder
class UPlayFabDataModelDecoder : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UPlayFabDataModelDecoder* GetDefaultObj();

	struct FDataSetObjectsResponse DecodeSetObjectsResponseResponse(class UPlayFabJsonObject* Response);
	struct FDataInitiateFileUploadsResponse DecodeInitiateFileUploadsResponseResponse(class UPlayFabJsonObject* Response);
	struct FDataGetObjectsResponse DecodeGetObjectsResponseResponse(class UPlayFabJsonObject* Response);
	struct FDataGetFilesResponse DecodeGetFilesResponseResponse(class UPlayFabJsonObject* Response);
	struct FDataFinalizeFileUploadsResponse DecodeFinalizeFileUploadsResponseResponse(class UPlayFabJsonObject* Response);
	struct FDataDeleteFilesResponse DecodeDeleteFilesResponseResponse(class UPlayFabJsonObject* Response);
	struct FDataAbortFileUploadsResponse DecodeAbortFileUploadsResponseResponse(class UPlayFabJsonObject* Response);
};

// 0x380 (0x3B0 - 0x30)
// Class PlayFab.PlayFabEconomyAPI
class UPlayFabEconomyAPI : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnPlayFabResponse;                                 // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_2FA1[0x308];                                   // Fixing Size After Last Property 
	class UPlayFabAuthenticationContext*         CallAuthenticationContext;                         // 0x348(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPlayFabJsonObject*                    RequestJsonObj;                                    // 0x350(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPlayFabJsonObject*                    ResponseJsonObj;                                   // 0x358(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2FA3[0x50];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UPlayFabEconomyAPI* GetDefaultObj();

	class UPlayFabEconomyAPI* UpdateInventoryItems(const struct FEconomyUpdateInventoryItemsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabEconomyAPI* UpdateDraftItem(const struct FEconomyUpdateDraftItemRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabEconomyAPI* UpdateCatalogConfig(const struct FEconomyUpdateCatalogConfigRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabEconomyAPI* TransferInventoryItems(const struct FEconomyTransferInventoryItemsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabEconomyAPI* TakedownItemReviews(const struct FEconomyTakedownItemReviewsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabEconomyAPI* SubtractInventoryItems(const struct FEconomySubtractInventoryItemsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabEconomyAPI* SubmitItemReviewVote(const struct FEconomySubmitItemReviewVoteRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabEconomyAPI* SetItemModerationState(const struct FEconomySetItemModerationStateRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabEconomyAPI* SearchItems(const struct FEconomySearchItemsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabEconomyAPI* ReviewItem(const struct FEconomyReviewItemRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabEconomyAPI* ReportItemReview(const struct FEconomyReportItemReviewRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabEconomyAPI* ReportItem(const struct FEconomyReportItemRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabEconomyAPI* RedeemSteamInventoryItems(const struct FEconomyRedeemSteamInventoryItemsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabEconomyAPI* RedeemPlayStationStoreInventoryItems(const struct FEconomyRedeemPlayStationStoreInventoryItemsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabEconomyAPI* RedeemNintendoEShopInventoryItems(const struct FEconomyRedeemNintendoEShopInventoryItemsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabEconomyAPI* RedeemMicrosoftStoreInventoryItems(const struct FEconomyRedeemMicrosoftStoreInventoryItemsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabEconomyAPI* RedeemGooglePlayInventoryItems(const struct FEconomyRedeemGooglePlayInventoryItemsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabEconomyAPI* RedeemAppleAppStoreInventoryItems(const struct FEconomyRedeemAppleAppStoreInventoryItemsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabEconomyAPI* PurchaseInventoryItems(const struct FEconomyPurchaseInventoryItemsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabEconomyAPI* PublishDraftItem(const struct FEconomyPublishDraftItemRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	void HelperUpdateInventoryItems(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUpdateDraftItem(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUpdateCatalogConfig(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperTransferInventoryItems(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperTakedownItemReviews(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperSubtractInventoryItems(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperSubmitItemReviewVote(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperSetItemModerationState(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperSearchItems(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperReviewItem(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperReportItemReview(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperReportItem(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperRedeemSteamInventoryItems(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperRedeemPlayStationStoreInventoryItems(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperRedeemNintendoEShopInventoryItems(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperRedeemMicrosoftStoreInventoryItems(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperRedeemGooglePlayInventoryItems(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperRedeemAppleAppStoreInventoryItems(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperPurchaseInventoryItems(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperPublishDraftItem(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetTransactionHistory(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetMicrosoftStoreAccessTokens(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetItems(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetItemReviewSummary(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetItemReviews(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetItemPublishStatus(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetItemModerationState(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetItemContainers(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetItem(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetInventoryItems(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetInventoryCollectionIds(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetEntityItemReview(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetEntityDraftItems(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetDraftItems(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetDraftItem(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetCatalogConfig(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperExecuteInventoryOperations(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperDeleteItem(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperDeleteInventoryItems(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperDeleteInventoryCollection(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperDeleteEntityItemReviews(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperCreateUploadUrls(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperCreateDraftItem(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperAddInventoryItems(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	class UPlayFabEconomyAPI* GetTransactionHistory(const struct FEconomyGetTransactionHistoryRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabEconomyAPI* GetMicrosoftStoreAccessTokens(const struct FEconomyGetMicrosoftStoreAccessTokensRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabEconomyAPI* GetItems(const struct FEconomyGetItemsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabEconomyAPI* GetItemReviewSummary(const struct FEconomyGetItemReviewSummaryRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabEconomyAPI* GetItemReviews(const struct FEconomyGetItemReviewsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabEconomyAPI* GetItemPublishStatus(const struct FEconomyGetItemPublishStatusRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabEconomyAPI* GetItemModerationState(const struct FEconomyGetItemModerationStateRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabEconomyAPI* GetItemContainers(const struct FEconomyGetItemContainersRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabEconomyAPI* GetItem(const struct FEconomyGetItemRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabEconomyAPI* GetInventoryItems(const struct FEconomyGetInventoryItemsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabEconomyAPI* GetInventoryCollectionIds(const struct FEconomyGetInventoryCollectionIdsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabEconomyAPI* GetEntityItemReview(const struct FEconomyGetEntityItemReviewRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabEconomyAPI* GetEntityDraftItems(const struct FEconomyGetEntityDraftItemsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabEconomyAPI* GetDraftItems(const struct FEconomyGetDraftItemsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabEconomyAPI* GetDraftItem(const struct FEconomyGetDraftItemRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabEconomyAPI* GetCatalogConfig(const struct FEconomyGetCatalogConfigRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabEconomyAPI* ExecuteInventoryOperations(const struct FEconomyExecuteInventoryOperationsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabEconomyAPI* DeleteItem(const struct FEconomyDeleteItemRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabEconomyAPI* DeleteInventoryItems(const struct FEconomyDeleteInventoryItemsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabEconomyAPI* DeleteInventoryCollection(const struct FEconomyDeleteInventoryCollectionRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabEconomyAPI* DeleteEntityItemReviews(const struct FEconomyDeleteEntityItemReviewsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	void DelegateOnSuccessUpdateInventoryItems__DelegateSignature(const struct FEconomyUpdateInventoryItemsResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessUpdateDraftItem__DelegateSignature(const struct FEconomyUpdateDraftItemResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessUpdateCatalogConfig__DelegateSignature(const struct FEconomyUpdateCatalogConfigResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessTransferInventoryItems__DelegateSignature(const struct FEconomyTransferInventoryItemsResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessTakedownItemReviews__DelegateSignature(const struct FEconomyTakedownItemReviewsResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessSubtractInventoryItems__DelegateSignature(const struct FEconomySubtractInventoryItemsResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessSubmitItemReviewVote__DelegateSignature(const struct FEconomySubmitItemReviewVoteResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessSetItemModerationState__DelegateSignature(const struct FEconomySetItemModerationStateResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessSearchItems__DelegateSignature(const struct FEconomySearchItemsResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessReviewItem__DelegateSignature(const struct FEconomyReviewItemResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessReportItemReview__DelegateSignature(const struct FEconomyReportItemReviewResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessReportItem__DelegateSignature(const struct FEconomyReportItemResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessRedeemSteamInventoryItems__DelegateSignature(const struct FEconomyRedeemSteamInventoryItemsResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessRedeemPlayStationStoreInventoryItems__DelegateSignature(const struct FEconomyRedeemPlayStationStoreInventoryItemsResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessRedeemNintendoEShopInventoryItems__DelegateSignature(const struct FEconomyRedeemNintendoEShopInventoryItemsResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessRedeemMicrosoftStoreInventoryItems__DelegateSignature(const struct FEconomyRedeemMicrosoftStoreInventoryItemsResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessRedeemGooglePlayInventoryItems__DelegateSignature(const struct FEconomyRedeemGooglePlayInventoryItemsResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessRedeemAppleAppStoreInventoryItems__DelegateSignature(const struct FEconomyRedeemAppleAppStoreInventoryItemsResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessPurchaseInventoryItems__DelegateSignature(const struct FEconomyPurchaseInventoryItemsResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessPublishDraftItem__DelegateSignature(const struct FEconomyPublishDraftItemResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessGetTransactionHistory__DelegateSignature(const struct FEconomyGetTransactionHistoryResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessGetMicrosoftStoreAccessTokens__DelegateSignature(const struct FEconomyGetMicrosoftStoreAccessTokensResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessGetItems__DelegateSignature(const struct FEconomyGetItemsResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessGetItemReviewSummary__DelegateSignature(const struct FEconomyGetItemReviewSummaryResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessGetItemReviews__DelegateSignature(const struct FEconomyGetItemReviewsResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessGetItemPublishStatus__DelegateSignature(const struct FEconomyGetItemPublishStatusResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessGetItemModerationState__DelegateSignature(const struct FEconomyGetItemModerationStateResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessGetItemContainers__DelegateSignature(const struct FEconomyGetItemContainersResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessGetItem__DelegateSignature(const struct FEconomyGetItemResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessGetInventoryItems__DelegateSignature(const struct FEconomyGetInventoryItemsResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessGetInventoryCollectionIds__DelegateSignature(const struct FEconomyGetInventoryCollectionIdsResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessGetEntityItemReview__DelegateSignature(const struct FEconomyGetEntityItemReviewResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessGetEntityDraftItems__DelegateSignature(const struct FEconomyGetEntityDraftItemsResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessGetDraftItems__DelegateSignature(const struct FEconomyGetDraftItemsResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessGetDraftItem__DelegateSignature(const struct FEconomyGetDraftItemResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessGetCatalogConfig__DelegateSignature(const struct FEconomyGetCatalogConfigResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessExecuteInventoryOperations__DelegateSignature(const struct FEconomyExecuteInventoryOperationsResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessDeleteItem__DelegateSignature(const struct FEconomyDeleteItemResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessDeleteInventoryItems__DelegateSignature(const struct FEconomyDeleteInventoryItemsResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessDeleteInventoryCollection__DelegateSignature(const struct FEconomyDeleteInventoryCollectionResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessDeleteEntityItemReviews__DelegateSignature(const struct FEconomyDeleteEntityItemReviewsResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessCreateUploadUrls__DelegateSignature(const struct FEconomyCreateUploadUrlsResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessCreateDraftItem__DelegateSignature(const struct FEconomyCreateDraftItemResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessAddInventoryItems__DelegateSignature(const struct FEconomyAddInventoryItemsResponse& Result, class UObject* CustomData);
	void DelegateOnFailurePlayFabError__DelegateSignature(const struct FPlayFabError& Error, class UObject* CustomData);
	class UPlayFabEconomyAPI* CreateUploadUrls(const struct FEconomyCreateUploadUrlsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabEconomyAPI* CreateDraftItem(const struct FEconomyCreateDraftItemRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabEconomyAPI* AddInventoryItems(const struct FEconomyAddInventoryItemsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
};

// 0x0 (0x28 - 0x28)
// Class PlayFab.PlayFabEconomyModelDecoder
class UPlayFabEconomyModelDecoder : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UPlayFabEconomyModelDecoder* GetDefaultObj();

	struct FEconomyUpdateInventoryItemsResponse DecodeUpdateInventoryItemsResponseResponse(class UPlayFabJsonObject* Response);
	struct FEconomyUpdateDraftItemResponse DecodeUpdateDraftItemResponseResponse(class UPlayFabJsonObject* Response);
	struct FEconomyUpdateCatalogConfigResponse DecodeUpdateCatalogConfigResponseResponse(class UPlayFabJsonObject* Response);
	struct FEconomyTransferInventoryItemsResponse DecodeTransferInventoryItemsResponseResponse(class UPlayFabJsonObject* Response);
	struct FEconomyTakedownItemReviewsResponse DecodeTakedownItemReviewsResponseResponse(class UPlayFabJsonObject* Response);
	struct FEconomySubtractInventoryItemsResponse DecodeSubtractInventoryItemsResponseResponse(class UPlayFabJsonObject* Response);
	struct FEconomySubmitItemReviewVoteResponse DecodeSubmitItemReviewVoteResponseResponse(class UPlayFabJsonObject* Response);
	struct FEconomySetItemModerationStateResponse DecodeSetItemModerationStateResponseResponse(class UPlayFabJsonObject* Response);
	struct FEconomySearchItemsResponse DecodeSearchItemsResponseResponse(class UPlayFabJsonObject* Response);
	struct FEconomyReviewItemResponse DecodeReviewItemResponseResponse(class UPlayFabJsonObject* Response);
	struct FEconomyReportItemReviewResponse DecodeReportItemReviewResponseResponse(class UPlayFabJsonObject* Response);
	struct FEconomyReportItemResponse DecodeReportItemResponseResponse(class UPlayFabJsonObject* Response);
	struct FEconomyRedeemSteamInventoryItemsResponse DecodeRedeemSteamInventoryItemsResponseResponse(class UPlayFabJsonObject* Response);
	struct FEconomyRedeemPlayStationStoreInventoryItemsResponse DecodeRedeemPlayStationStoreInventoryItemsResponseResponse(class UPlayFabJsonObject* Response);
	struct FEconomyRedeemNintendoEShopInventoryItemsResponse DecodeRedeemNintendoEShopInventoryItemsResponseResponse(class UPlayFabJsonObject* Response);
	struct FEconomyRedeemMicrosoftStoreInventoryItemsResponse DecodeRedeemMicrosoftStoreInventoryItemsResponseResponse(class UPlayFabJsonObject* Response);
	struct FEconomyRedeemGooglePlayInventoryItemsResponse DecodeRedeemGooglePlayInventoryItemsResponseResponse(class UPlayFabJsonObject* Response);
	struct FEconomyRedeemAppleAppStoreInventoryItemsResponse DecodeRedeemAppleAppStoreInventoryItemsResponseResponse(class UPlayFabJsonObject* Response);
	struct FEconomyPurchaseInventoryItemsResponse DecodePurchaseInventoryItemsResponseResponse(class UPlayFabJsonObject* Response);
	struct FEconomyPublishDraftItemResponse DecodePublishDraftItemResponseResponse(class UPlayFabJsonObject* Response);
	struct FEconomyGetTransactionHistoryResponse DecodeGetTransactionHistoryResponseResponse(class UPlayFabJsonObject* Response);
	struct FEconomyGetMicrosoftStoreAccessTokensResponse DecodeGetMicrosoftStoreAccessTokensResponseResponse(class UPlayFabJsonObject* Response);
	struct FEconomyGetItemsResponse DecodeGetItemsResponseResponse(class UPlayFabJsonObject* Response);
	struct FEconomyGetItemReviewSummaryResponse DecodeGetItemReviewSummaryResponseResponse(class UPlayFabJsonObject* Response);
	struct FEconomyGetItemReviewsResponse DecodeGetItemReviewsResponseResponse(class UPlayFabJsonObject* Response);
	struct FEconomyGetItemResponse DecodeGetItemResponseResponse(class UPlayFabJsonObject* Response);
	struct FEconomyGetItemPublishStatusResponse DecodeGetItemPublishStatusResponseResponse(class UPlayFabJsonObject* Response);
	struct FEconomyGetItemModerationStateResponse DecodeGetItemModerationStateResponseResponse(class UPlayFabJsonObject* Response);
	struct FEconomyGetItemContainersResponse DecodeGetItemContainersResponseResponse(class UPlayFabJsonObject* Response);
	struct FEconomyGetInventoryItemsResponse DecodeGetInventoryItemsResponseResponse(class UPlayFabJsonObject* Response);
	struct FEconomyGetInventoryCollectionIdsResponse DecodeGetInventoryCollectionIdsResponseResponse(class UPlayFabJsonObject* Response);
	struct FEconomyGetEntityItemReviewResponse DecodeGetEntityItemReviewResponseResponse(class UPlayFabJsonObject* Response);
	struct FEconomyGetEntityDraftItemsResponse DecodeGetEntityDraftItemsResponseResponse(class UPlayFabJsonObject* Response);
	struct FEconomyGetDraftItemsResponse DecodeGetDraftItemsResponseResponse(class UPlayFabJsonObject* Response);
	struct FEconomyGetDraftItemResponse DecodeGetDraftItemResponseResponse(class UPlayFabJsonObject* Response);
	struct FEconomyGetCatalogConfigResponse DecodeGetCatalogConfigResponseResponse(class UPlayFabJsonObject* Response);
	struct FEconomyExecuteInventoryOperationsResponse DecodeExecuteInventoryOperationsResponseResponse(class UPlayFabJsonObject* Response);
	struct FEconomyDeleteItemResponse DecodeDeleteItemResponseResponse(class UPlayFabJsonObject* Response);
	struct FEconomyDeleteInventoryItemsResponse DecodeDeleteInventoryItemsResponseResponse(class UPlayFabJsonObject* Response);
	struct FEconomyDeleteInventoryCollectionResponse DecodeDeleteInventoryCollectionResponseResponse(class UPlayFabJsonObject* Response);
	struct FEconomyDeleteEntityItemReviewsResponse DecodeDeleteEntityItemReviewsResponseResponse(class UPlayFabJsonObject* Response);
	struct FEconomyCreateUploadUrlsResponse DecodeCreateUploadUrlsResponseResponse(class UPlayFabJsonObject* Response);
	struct FEconomyCreateDraftItemResponse DecodeCreateDraftItemResponseResponse(class UPlayFabJsonObject* Response);
	struct FEconomyAddInventoryItemsResponse DecodeAddInventoryItemsResponseResponse(class UPlayFabJsonObject* Response);
};

// 0xF0 (0x120 - 0x30)
// Class PlayFab.PlayFabEventsAPI
class UPlayFabEventsAPI : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnPlayFabResponse;                                 // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_3094[0x78];                                    // Fixing Size After Last Property 
	class UPlayFabAuthenticationContext*         CallAuthenticationContext;                         // 0xB8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPlayFabJsonObject*                    RequestJsonObj;                                    // 0xC0(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPlayFabJsonObject*                    ResponseJsonObj;                                   // 0xC8(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3095[0x50];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UPlayFabEventsAPI* GetDefaultObj();

	class UPlayFabEventsAPI* WriteTelemetryEventsWithTelemetryKey(const struct FEventsWriteEventsRequest& Request, const class FString& TelemetryKey, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabEventsAPI* WriteTelemetryEvents(const struct FEventsWriteEventsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabEventsAPI* WriteEvents(const struct FEventsWriteEventsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	void HelperWriteTelemetryEvents(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperWriteEvents(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void DelegateOnSuccessWriteTelemetryEvents__DelegateSignature(const struct FEventsWriteEventsResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessWriteEvents__DelegateSignature(const struct FEventsWriteEventsResponse& Result, class UObject* CustomData);
	void DelegateOnFailurePlayFabError__DelegateSignature(const struct FPlayFabError& Error, class UObject* CustomData);
};

// 0x0 (0x28 - 0x28)
// Class PlayFab.PlayFabEventsModelDecoder
class UPlayFabEventsModelDecoder : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UPlayFabEventsModelDecoder* GetDefaultObj();

	struct FEventsWriteEventsResponse DecodeWriteEventsResponseResponse(class UPlayFabJsonObject* Response);
};

// 0x190 (0x1C0 - 0x30)
// Class PlayFab.PlayFabExperimentationAPI
class UPlayFabExperimentationAPI : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnPlayFabResponse;                                 // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_31F2[0x118];                                   // Fixing Size After Last Property 
	class UPlayFabAuthenticationContext*         CallAuthenticationContext;                         // 0x158(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPlayFabJsonObject*                    RequestJsonObj;                                    // 0x160(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPlayFabJsonObject*                    ResponseJsonObj;                                   // 0x168(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_31F3[0x50];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UPlayFabExperimentationAPI* GetDefaultObj();

	class UPlayFabExperimentationAPI* UpdateExperiment(const struct FExperimentationUpdateExperimentRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabExperimentationAPI* UpdateExclusionGroup(const struct FExperimentationUpdateExclusionGroupRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabExperimentationAPI* StopExperiment(const struct FExperimentationStopExperimentRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabExperimentationAPI* StartExperiment(const struct FExperimentationStartExperimentRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	void HelperUpdateExperiment(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUpdateExclusionGroup(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperStopExperiment(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperStartExperiment(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetTreatmentAssignment(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetLatestScorecard(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetExperiments(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetExclusionGroupTraffic(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetExclusionGroups(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperDeleteExperiment(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperDeleteExclusionGroup(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperCreateExperiment(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperCreateExclusionGroup(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	class UPlayFabExperimentationAPI* GetTreatmentAssignment(const struct FExperimentationGetTreatmentAssignmentRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabExperimentationAPI* GetLatestScorecard(const struct FExperimentationGetLatestScorecardRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabExperimentationAPI* GetExperiments(const struct FExperimentationGetExperimentsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabExperimentationAPI* GetExclusionGroupTraffic(const struct FExperimentationGetExclusionGroupTrafficRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabExperimentationAPI* GetExclusionGroups(const struct FExperimentationGetExclusionGroupsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabExperimentationAPI* DeleteExperiment(const struct FExperimentationDeleteExperimentRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabExperimentationAPI* DeleteExclusionGroup(const struct FExperimentationDeleteExclusionGroupRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	void DelegateOnSuccessUpdateExperiment__DelegateSignature(const struct FExperimentationEmptyResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessUpdateExclusionGroup__DelegateSignature(const struct FExperimentationEmptyResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessStopExperiment__DelegateSignature(const struct FExperimentationEmptyResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessStartExperiment__DelegateSignature(const struct FExperimentationEmptyResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessGetTreatmentAssignment__DelegateSignature(const struct FExperimentationGetTreatmentAssignmentResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetLatestScorecard__DelegateSignature(const struct FExperimentationGetLatestScorecardResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetExperiments__DelegateSignature(const struct FExperimentationGetExperimentsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetExclusionGroupTraffic__DelegateSignature(const struct FExperimentationGetExclusionGroupTrafficResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetExclusionGroups__DelegateSignature(const struct FExperimentationGetExclusionGroupsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessDeleteExperiment__DelegateSignature(const struct FExperimentationEmptyResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessDeleteExclusionGroup__DelegateSignature(const struct FExperimentationEmptyResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessCreateExperiment__DelegateSignature(const struct FExperimentationCreateExperimentResult& Result, class UObject* CustomData);
	void DelegateOnSuccessCreateExclusionGroup__DelegateSignature(const struct FExperimentationCreateExclusionGroupResult& Result, class UObject* CustomData);
	void DelegateOnFailurePlayFabError__DelegateSignature(const struct FPlayFabError& Error, class UObject* CustomData);
	class UPlayFabExperimentationAPI* CreateExperiment(const struct FExperimentationCreateExperimentRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabExperimentationAPI* CreateExclusionGroup(const struct FExperimentationCreateExclusionGroupRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
};

// 0x0 (0x28 - 0x28)
// Class PlayFab.PlayFabExperimentationModelDecoder
class UPlayFabExperimentationModelDecoder : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UPlayFabExperimentationModelDecoder* GetDefaultObj();

	struct FExperimentationGetTreatmentAssignmentResult DecodeGetTreatmentAssignmentResultResponse(class UPlayFabJsonObject* Response);
	struct FExperimentationGetLatestScorecardResult DecodeGetLatestScorecardResultResponse(class UPlayFabJsonObject* Response);
	struct FExperimentationGetExperimentsResult DecodeGetExperimentsResultResponse(class UPlayFabJsonObject* Response);
	struct FExperimentationGetExclusionGroupTrafficResult DecodeGetExclusionGroupTrafficResultResponse(class UPlayFabJsonObject* Response);
	struct FExperimentationGetExclusionGroupsResult DecodeGetExclusionGroupsResultResponse(class UPlayFabJsonObject* Response);
	struct FExperimentationEmptyResponse DecodeEmptyResponseResponse(class UPlayFabJsonObject* Response);
	struct FExperimentationCreateExperimentResult DecodeCreateExperimentResultResponse(class UPlayFabJsonObject* Response);
	struct FExperimentationCreateExclusionGroupResult DecodeCreateExclusionGroupResultResponse(class UPlayFabJsonObject* Response);
};

// 0x250 (0x280 - 0x30)
// Class PlayFab.PlayFabGroupsAPI
class UPlayFabGroupsAPI : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnPlayFabResponse;                                 // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_32F8[0x1D8];                                   // Fixing Size After Last Property 
	class UPlayFabAuthenticationContext*         CallAuthenticationContext;                         // 0x218(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPlayFabJsonObject*                    RequestJsonObj;                                    // 0x220(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPlayFabJsonObject*                    ResponseJsonObj;                                   // 0x228(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_32F9[0x50];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UPlayFabGroupsAPI* GetDefaultObj();

	class UPlayFabGroupsAPI* UpdateRole(const struct FGroupsUpdateGroupRoleRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabGroupsAPI* UpdateGroup(const struct FGroupsUpdateGroupRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabGroupsAPI* UnblockEntity(const struct FGroupsUnblockEntityRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabGroupsAPI* RemoveMembers(const struct FGroupsRemoveMembersRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabGroupsAPI* RemoveGroupInvitation(const struct FGroupsRemoveGroupInvitationRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabGroupsAPI* RemoveGroupApplication(const struct FGroupsRemoveGroupApplicationRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabGroupsAPI* ListMembershipOpportunities(const struct FGroupsListMembershipOpportunitiesRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabGroupsAPI* ListMembership(const struct FGroupsListMembershipRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabGroupsAPI* ListGroupMembers(const struct FGroupsListGroupMembersRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabGroupsAPI* ListGroupInvitations(const struct FGroupsListGroupInvitationsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabGroupsAPI* ListGroupBlocks(const struct FGroupsListGroupBlocksRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabGroupsAPI* ListGroupApplications(const struct FGroupsListGroupApplicationsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabGroupsAPI* IsMember(const struct FGroupsIsMemberRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabGroupsAPI* InviteToGroup(const struct FGroupsInviteToGroupRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	void HelperUpdateRole(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUpdateGroup(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUnblockEntity(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperRemoveMembers(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperRemoveGroupInvitation(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperRemoveGroupApplication(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperListMembershipOpportunities(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperListMembership(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperListGroupMembers(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperListGroupInvitations(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperListGroupBlocks(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperListGroupApplications(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperIsMember(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperInviteToGroup(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetGroup(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperDeleteRole(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperDeleteGroup(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperCreateRole(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperCreateGroup(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperChangeMemberRole(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperBlockEntity(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperApplyToGroup(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperAddMembers(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperAcceptGroupInvitation(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperAcceptGroupApplication(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	class UPlayFabGroupsAPI* GetGroup(const struct FGroupsGetGroupRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabGroupsAPI* DeleteRole(const struct FGroupsDeleteRoleRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabGroupsAPI* DeleteGroup(const struct FGroupsDeleteGroupRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	void DelegateOnSuccessUpdateRole__DelegateSignature(const struct FGroupsUpdateGroupRoleResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessUpdateGroup__DelegateSignature(const struct FGroupsUpdateGroupResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessUnblockEntity__DelegateSignature(const struct FGroupsEmptyResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessRemoveMembers__DelegateSignature(const struct FGroupsEmptyResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessRemoveGroupInvitation__DelegateSignature(const struct FGroupsEmptyResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessRemoveGroupApplication__DelegateSignature(const struct FGroupsEmptyResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessListMembershipOpportunities__DelegateSignature(const struct FGroupsListMembershipOpportunitiesResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessListMembership__DelegateSignature(const struct FGroupsListMembershipResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessListGroupMembers__DelegateSignature(const struct FGroupsListGroupMembersResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessListGroupInvitations__DelegateSignature(const struct FGroupsListGroupInvitationsResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessListGroupBlocks__DelegateSignature(const struct FGroupsListGroupBlocksResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessListGroupApplications__DelegateSignature(const struct FGroupsListGroupApplicationsResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessIsMember__DelegateSignature(const struct FGroupsIsMemberResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessInviteToGroup__DelegateSignature(const struct FGroupsInviteToGroupResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessGetGroup__DelegateSignature(const struct FGroupsGetGroupResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessDeleteRole__DelegateSignature(const struct FGroupsEmptyResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessDeleteGroup__DelegateSignature(const struct FGroupsEmptyResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessCreateRole__DelegateSignature(const struct FGroupsCreateGroupRoleResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessCreateGroup__DelegateSignature(const struct FGroupsCreateGroupResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessChangeMemberRole__DelegateSignature(const struct FGroupsEmptyResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessBlockEntity__DelegateSignature(const struct FGroupsEmptyResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessApplyToGroup__DelegateSignature(const struct FGroupsApplyToGroupResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessAddMembers__DelegateSignature(const struct FGroupsEmptyResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessAcceptGroupInvitation__DelegateSignature(const struct FGroupsEmptyResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessAcceptGroupApplication__DelegateSignature(const struct FGroupsEmptyResponse& Result, class UObject* CustomData);
	void DelegateOnFailurePlayFabError__DelegateSignature(const struct FPlayFabError& Error, class UObject* CustomData);
	class UPlayFabGroupsAPI* CreateRole(const struct FGroupsCreateGroupRoleRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabGroupsAPI* CreateGroup(const struct FGroupsCreateGroupRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabGroupsAPI* ChangeMemberRole(const struct FGroupsChangeMemberRoleRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabGroupsAPI* BlockEntity(const struct FGroupsBlockEntityRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabGroupsAPI* ApplyToGroup(const struct FGroupsApplyToGroupRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabGroupsAPI* AddMembers(const struct FGroupsAddMembersRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabGroupsAPI* AcceptGroupInvitation(const struct FGroupsAcceptGroupInvitationRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabGroupsAPI* AcceptGroupApplication(const struct FGroupsAcceptGroupApplicationRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
};

// 0x0 (0x28 - 0x28)
// Class PlayFab.PlayFabGroupsModelDecoder
class UPlayFabGroupsModelDecoder : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UPlayFabGroupsModelDecoder* GetDefaultObj();

	struct FGroupsUpdateGroupRoleResponse DecodeUpdateGroupRoleResponseResponse(class UPlayFabJsonObject* Response);
	struct FGroupsUpdateGroupResponse DecodeUpdateGroupResponseResponse(class UPlayFabJsonObject* Response);
	struct FGroupsListMembershipResponse DecodeListMembershipResponseResponse(class UPlayFabJsonObject* Response);
	struct FGroupsListMembershipOpportunitiesResponse DecodeListMembershipOpportunitiesResponseResponse(class UPlayFabJsonObject* Response);
	struct FGroupsListGroupMembersResponse DecodeListGroupMembersResponseResponse(class UPlayFabJsonObject* Response);
	struct FGroupsListGroupInvitationsResponse DecodeListGroupInvitationsResponseResponse(class UPlayFabJsonObject* Response);
	struct FGroupsListGroupBlocksResponse DecodeListGroupBlocksResponseResponse(class UPlayFabJsonObject* Response);
	struct FGroupsListGroupApplicationsResponse DecodeListGroupApplicationsResponseResponse(class UPlayFabJsonObject* Response);
	struct FGroupsIsMemberResponse DecodeIsMemberResponseResponse(class UPlayFabJsonObject* Response);
	struct FGroupsInviteToGroupResponse DecodeInviteToGroupResponseResponse(class UPlayFabJsonObject* Response);
	struct FGroupsGetGroupResponse DecodeGetGroupResponseResponse(class UPlayFabJsonObject* Response);
	struct FGroupsEmptyResponse DecodeEmptyResponseResponse(class UPlayFabJsonObject* Response);
	struct FGroupsCreateGroupRoleResponse DecodeCreateGroupRoleResponseResponse(class UPlayFabJsonObject* Response);
	struct FGroupsCreateGroupResponse DecodeCreateGroupResponseResponse(class UPlayFabJsonObject* Response);
	struct FGroupsApplyToGroupResponse DecodeApplyToGroupResponseResponse(class UPlayFabJsonObject* Response);
};

// 0x120 (0x150 - 0x30)
// Class PlayFab.PlayFabInsightsAPI
class UPlayFabInsightsAPI : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnPlayFabResponse;                                 // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_3352[0xA8];                                    // Fixing Size After Last Property 
	class UPlayFabAuthenticationContext*         CallAuthenticationContext;                         // 0xE8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPlayFabJsonObject*                    RequestJsonObj;                                    // 0xF0(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPlayFabJsonObject*                    ResponseJsonObj;                                   // 0xF8(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3353[0x50];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UPlayFabInsightsAPI* GetDefaultObj();

	class UPlayFabInsightsAPI* SetStorageRetention(const struct FInsightsInsightsSetStorageRetentionRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabInsightsAPI* SetPerformance(const struct FInsightsInsightsSetPerformanceRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	void HelperSetStorageRetention(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperSetPerformance(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetPendingOperations(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetOperationStatus(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetLimits(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetDetails(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	class UPlayFabInsightsAPI* GetPendingOperations(const struct FInsightsInsightsGetPendingOperationsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabInsightsAPI* GetOperationStatus(const struct FInsightsInsightsGetOperationStatusRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabInsightsAPI* GetLimits(const struct FInsightsInsightsEmptyRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabInsightsAPI* GetDetails(const struct FInsightsInsightsEmptyRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	void DelegateOnSuccessSetStorageRetention__DelegateSignature(const struct FInsightsInsightsOperationResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessSetPerformance__DelegateSignature(const struct FInsightsInsightsOperationResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessGetPendingOperations__DelegateSignature(const struct FInsightsInsightsGetPendingOperationsResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessGetOperationStatus__DelegateSignature(const struct FInsightsInsightsGetOperationStatusResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessGetLimits__DelegateSignature(const struct FInsightsInsightsGetLimitsResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessGetDetails__DelegateSignature(const struct FInsightsInsightsGetDetailsResponse& Result, class UObject* CustomData);
	void DelegateOnFailurePlayFabError__DelegateSignature(const struct FPlayFabError& Error, class UObject* CustomData);
};

// 0x0 (0x28 - 0x28)
// Class PlayFab.PlayFabInsightsModelDecoder
class UPlayFabInsightsModelDecoder : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UPlayFabInsightsModelDecoder* GetDefaultObj();

	struct FInsightsInsightsOperationResponse DecodeInsightsOperationResponseResponse(class UPlayFabJsonObject* Response);
	struct FInsightsInsightsGetPendingOperationsResponse DecodeInsightsGetPendingOperationsResponseResponse(class UPlayFabJsonObject* Response);
	struct FInsightsInsightsGetOperationStatusResponse DecodeInsightsGetOperationStatusResponseResponse(class UPlayFabJsonObject* Response);
	struct FInsightsInsightsGetLimitsResponse DecodeInsightsGetLimitsResponseResponse(class UPlayFabJsonObject* Response);
	struct FInsightsInsightsGetDetailsResponse DecodeInsightsGetDetailsResponseResponse(class UPlayFabJsonObject* Response);
};

// 0x10 (0x38 - 0x28)
// Class PlayFab.PlayFabJsonObject
class UPlayFabJsonObject : public UObject
{
public:
	uint8                                        Pad_3374[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UPlayFabJsonObject* GetDefaultObj();

	void SetStringField(const class FString& FieldName, const class FString& StringValue);
	void SetStringArrayField(const class FString& FieldName, TArray<class FString>& StringArray);
	void SetObjectField(const class FString& FieldName, class UPlayFabJsonObject* JsonObject);
	void SetObjectArrayField(const class FString& FieldName, TArray<class UPlayFabJsonObject*>& ObjectArray);
	void SetNumberField(const class FString& FieldName, float Number);
	void SetNumberArrayField(const class FString& FieldName, TArray<float>& NumberArray);
	void SetFieldNull(const class FString& FieldName);
	void SetField(const class FString& FieldName, class UPlayFabJsonValue* JsonValue);
	void SetBoolField(const class FString& FieldName, bool InValue);
	void SetBoolArrayField(const class FString& FieldName, TArray<bool>& BoolArray);
	void SetArrayField(const class FString& FieldName, TArray<class UPlayFabJsonValue*>& InArray);
	void Reset();
	void RemoveField(const class FString& FieldName);
	void MergeJsonObject(class UPlayFabJsonObject* InJsonObject, bool Overwrite);
	bool HasField(const class FString& FieldName);
	class FString GetStringField(const class FString& FieldName);
	TArray<class FString> GetStringArrayField(const class FString& FieldName);
	class UPlayFabJsonObject* GetObjectField(const class FString& FieldName);
	TArray<class UPlayFabJsonObject*> GetObjectArrayField(const class FString& FieldName);
	float GetNumberField(const class FString& FieldName);
	TArray<float> GetNumberArrayField(const class FString& FieldName);
	TArray<class FString> GetFieldNames();
	class UPlayFabJsonValue* GetField(const class FString& FieldName);
	bool GetBoolField(const class FString& FieldName);
	TArray<bool> GetBoolArrayField(const class FString& FieldName);
	TArray<class UPlayFabJsonValue*> GetArrayField(const class FString& FieldName);
	class FString EncodeJson();
	bool DecodeJson(const class FString& JsonString);
	class UPlayFabJsonObject* ConstructJsonObject(class UObject* WorldContextObject);
};

// 0x10 (0x38 - 0x28)
// Class PlayFab.PlayFabJsonValue
class UPlayFabJsonValue : public UObject
{
public:
	uint8                                        Pad_3390[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UPlayFabJsonValue* GetDefaultObj();

	bool IsNull();
	class FString GetTypeString();
	enum class EPFJson GetType();
	class UPlayFabJsonValue* ConstructJsonValueString(class UObject* WorldContextObject, const class FString& StringValue);
	class UPlayFabJsonValue* ConstructJsonValueObject(class UObject* WorldContextObject, class UPlayFabJsonObject* JsonObject);
	class UPlayFabJsonValue* ConstructJsonValueNumber(class UObject* WorldContextObject, float Number);
	class UPlayFabJsonValue* ConstructJsonValueBool(class UObject* WorldContextObject, bool InValue);
	class UPlayFabJsonValue* ConstructJsonValueArray(class UObject* WorldContextObject, TArray<class UPlayFabJsonValue*>& InArray);
	class FString AsString();
	class UPlayFabJsonObject* AsObject();
	float AsNumber();
	bool AsBool();
	TArray<class UPlayFabJsonValue*> AsArray();
};

// 0xD0 (0x100 - 0x30)
// Class PlayFab.PlayFabLocalizationAPI
class UPlayFabLocalizationAPI : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnPlayFabResponse;                                 // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_339F[0x58];                                    // Fixing Size After Last Property 
	class UPlayFabAuthenticationContext*         CallAuthenticationContext;                         // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPlayFabJsonObject*                    RequestJsonObj;                                    // 0xA0(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPlayFabJsonObject*                    ResponseJsonObj;                                   // 0xA8(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_33A0[0x50];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UPlayFabLocalizationAPI* GetDefaultObj();

	void HelperGetLanguageList(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	class UPlayFabLocalizationAPI* GetLanguageList(const struct FLocalizationGetLanguageListRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	void DelegateOnSuccessGetLanguageList__DelegateSignature(const struct FLocalizationGetLanguageListResponse& Result, class UObject* CustomData);
	void DelegateOnFailurePlayFabError__DelegateSignature(const struct FPlayFabError& Error, class UObject* CustomData);
};

// 0x0 (0x28 - 0x28)
// Class PlayFab.PlayFabLocalizationModelDecoder
class UPlayFabLocalizationModelDecoder : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UPlayFabLocalizationModelDecoder* GetDefaultObj();

	struct FLocalizationGetLanguageListResponse DecodeGetLanguageListResponseResponse(class UPlayFabJsonObject* Response);
};

// 0x100 (0x130 - 0x30)
// Class PlayFab.PlayFabMatchmakerAPI
class UPlayFabMatchmakerAPI : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnPlayFabResponse;                                 // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_33B4[0x88];                                    // Fixing Size After Last Property 
	class UPlayFabAuthenticationContext*         CallAuthenticationContext;                         // 0xC8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPlayFabJsonObject*                    RequestJsonObj;                                    // 0xD0(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPlayFabJsonObject*                    ResponseJsonObj;                                   // 0xD8(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_33B5[0x50];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UPlayFabMatchmakerAPI* GetDefaultObj();

	class UPlayFabMatchmakerAPI* UserInfo(const struct FMatchmakerUserInfoRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMatchmakerAPI* PlayerLeft(const struct FMatchmakerPlayerLeftRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMatchmakerAPI* PlayerJoined(const struct FMatchmakerPlayerJoinedRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	void HelperUserInfo(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperPlayerLeft(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperPlayerJoined(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperAuthUser(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void DelegateOnSuccessUserInfo__DelegateSignature(const struct FMatchmakerUserInfoResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessPlayerLeft__DelegateSignature(const struct FMatchmakerPlayerLeftResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessPlayerJoined__DelegateSignature(const struct FMatchmakerPlayerJoinedResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessAuthUser__DelegateSignature(const struct FMatchmakerAuthUserResponse& Result, class UObject* CustomData);
	void DelegateOnFailurePlayFabError__DelegateSignature(const struct FPlayFabError& Error, class UObject* CustomData);
	class UPlayFabMatchmakerAPI* AuthUser(const struct FMatchmakerAuthUserRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
};

// 0x0 (0x28 - 0x28)
// Class PlayFab.PlayFabMatchmakerModelDecoder
class UPlayFabMatchmakerModelDecoder : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UPlayFabMatchmakerModelDecoder* GetDefaultObj();

	struct FMatchmakerUserInfoResponse DecodeUserInfoResponseResponse(class UPlayFabJsonObject* Response);
	struct FMatchmakerPlayerLeftResponse DecodePlayerLeftResponseResponse(class UPlayFabJsonObject* Response);
	struct FMatchmakerPlayerJoinedResponse DecodePlayerJoinedResponseResponse(class UPlayFabJsonObject* Response);
	struct FMatchmakerAuthUserResponse DecodeAuthUserResponseResponse(class UPlayFabJsonObject* Response);
};

// 0x560 (0x590 - 0x30)
// Class PlayFab.PlayFabMultiplayerAPI
class UPlayFabMultiplayerAPI : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnPlayFabResponse;                                 // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_34DC[0x4E8];                                   // Fixing Size After Last Property 
	class UPlayFabAuthenticationContext*         CallAuthenticationContext;                         // 0x528(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPlayFabJsonObject*                    RequestJsonObj;                                    // 0x530(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPlayFabJsonObject*                    ResponseJsonObj;                                   // 0x538(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_34DD[0x50];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UPlayFabMultiplayerAPI* GetDefaultObj();

	class UPlayFabMultiplayerAPI* UploadCertificate(const struct FMultiplayerUploadCertificateRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* UpdateLobby(const struct FMultiplayerUpdateLobbyRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* UpdateBuildRegions(const struct FMultiplayerUpdateBuildRegionsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* UpdateBuildRegion(const struct FMultiplayerUpdateBuildRegionRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* UpdateBuildName(const struct FMultiplayerUpdateBuildNameRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* UpdateBuildAlias(const struct FMultiplayerUpdateBuildAliasRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* UntagContainerImage(const struct FMultiplayerUntagContainerImageRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* UnsubscribeFromLobbyResource(const struct FMultiplayerUnsubscribeFromLobbyResourceRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* SubscribeToLobbyResource(const struct FMultiplayerSubscribeToLobbyResourceRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* ShutdownMultiplayerServer(const struct FMultiplayerShutdownMultiplayerServerRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* RolloverContainerRegistryCredentials(const struct FMultiplayerRolloverContainerRegistryCredentialsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* RequestMultiplayerServer(const struct FMultiplayerRequestMultiplayerServerRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* RemoveMember(const struct FMultiplayerRemoveMemberFromLobbyRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* ListVirtualMachineSummaries(const struct FMultiplayerListVirtualMachineSummariesRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* ListTitleMultiplayerServersQuotaChanges(const struct FMultiplayerListTitleMultiplayerServersQuotaChangesRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* ListServerBackfillTicketsForPlayer(const struct FMultiplayerListServerBackfillTicketsForPlayerRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* ListQosServersForTitle(const struct FMultiplayerListQosServersForTitleRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* ListPartyQosServers(const struct FMultiplayerListPartyQosServersRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* ListMultiplayerServers(const struct FMultiplayerListMultiplayerServersRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* ListMatchmakingTicketsForPlayer(const struct FMultiplayerListMatchmakingTicketsForPlayerRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* ListContainerImageTags(const struct FMultiplayerListContainerImageTagsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* ListContainerImages(const struct FMultiplayerListContainerImagesRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* ListCertificateSummaries(const struct FMultiplayerListCertificateSummariesRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* ListBuildSummariesV2(const struct FMultiplayerListBuildSummariesRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* ListBuildAliases(const struct FMultiplayerListBuildAliasesRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* ListAssetSummaries(const struct FMultiplayerListAssetSummariesRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* ListArchivedMultiplayerServers(const struct FMultiplayerListMultiplayerServersRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* LeaveLobby(const struct FMultiplayerLeaveLobbyRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* JoinMatchmakingTicket(const struct FMultiplayerJoinMatchmakingTicketRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* JoinLobby(const struct FMultiplayerJoinLobbyRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* JoinArrangedLobby(const struct FMultiplayerJoinArrangedLobbyRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* InviteToLobby(const struct FMultiplayerInviteToLobbyRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	void HelperUploadCertificate(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUpdateLobby(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUpdateBuildRegions(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUpdateBuildRegion(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUpdateBuildName(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUpdateBuildAlias(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUntagContainerImage(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUnsubscribeFromLobbyResource(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperSubscribeToLobbyResource(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperShutdownMultiplayerServer(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperRolloverContainerRegistryCredentials(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperRequestMultiplayerServer(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperRemoveMember(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperListVirtualMachineSummaries(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperListTitleMultiplayerServersQuotaChanges(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperListServerBackfillTicketsForPlayer(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperListQosServersForTitle(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperListPartyQosServers(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperListMultiplayerServers(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperListMatchmakingTicketsForPlayer(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperListContainerImageTags(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperListContainerImages(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperListCertificateSummaries(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperListBuildSummariesV2(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperListBuildAliases(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperListAssetSummaries(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperListArchivedMultiplayerServers(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperLeaveLobby(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperJoinMatchmakingTicket(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperJoinLobby(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperJoinArrangedLobby(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperInviteToLobby(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetTitleMultiplayerServersQuotas(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetTitleMultiplayerServersQuotaChange(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetTitleEnabledForMultiplayerServersStatus(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetServerBackfillTicket(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetRemoteLoginEndpoint(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetQueueStatistics(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetMultiplayerSessionLogsBySessionId(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetMultiplayerServerLogs(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetMultiplayerServerDetails(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetMatchmakingTicket(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetMatch(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetLobby(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetContainerRegistryCredentials(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetBuildAlias(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetBuild(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetAssetUploadUrl(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetAssetDownloadUrl(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperFindLobbies(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperFindFriendLobbies(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperEnableMultiplayerServersForTitle(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperDeleteRemoteUser(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperDeleteLobby(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperDeleteContainerImageRepository(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperDeleteCertificate(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperDeleteBuildRegion(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperDeleteBuildAlias(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperDeleteBuild(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperDeleteAsset(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperCreateTitleMultiplayerServersQuotaChange(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperCreateServerMatchmakingTicket(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperCreateServerBackfillTicket(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperCreateRemoteUser(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperCreateMatchmakingTicket(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperCreateLobby(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperCreateBuildWithProcessBasedServer(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperCreateBuildWithManagedContainer(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperCreateBuildWithCustomContainer(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperCreateBuildAlias(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperCancelServerBackfillTicket(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperCancelMatchmakingTicket(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperCancelAllServerBackfillTicketsForPlayer(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperCancelAllMatchmakingTicketsForPlayer(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	class UPlayFabMultiplayerAPI* GetTitleMultiplayerServersQuotas(const struct FMultiplayerGetTitleMultiplayerServersQuotasRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* GetTitleMultiplayerServersQuotaChange(const struct FMultiplayerGetTitleMultiplayerServersQuotaChangeRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* GetTitleEnabledForMultiplayerServersStatus(const struct FMultiplayerGetTitleEnabledForMultiplayerServersStatusRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* GetServerBackfillTicket(const struct FMultiplayerGetServerBackfillTicketRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* GetRemoteLoginEndpoint(const struct FMultiplayerGetRemoteLoginEndpointRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* GetQueueStatistics(const struct FMultiplayerGetQueueStatisticsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* GetMultiplayerSessionLogsBySessionId(const struct FMultiplayerGetMultiplayerSessionLogsBySessionIdRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* GetMultiplayerServerLogs(const struct FMultiplayerGetMultiplayerServerLogsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* GetMultiplayerServerDetails(const struct FMultiplayerGetMultiplayerServerDetailsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* GetMatchmakingTicket(const struct FMultiplayerGetMatchmakingTicketRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* GetMatch(const struct FMultiplayerGetMatchRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* GetLobby(const struct FMultiplayerGetLobbyRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* GetContainerRegistryCredentials(const struct FMultiplayerGetContainerRegistryCredentialsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* GetBuildAlias(const struct FMultiplayerGetBuildAliasRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* GetBuild(const struct FMultiplayerGetBuildRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* GetAssetUploadUrl(const struct FMultiplayerGetAssetUploadUrlRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* GetAssetDownloadUrl(const struct FMultiplayerGetAssetDownloadUrlRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* FindLobbies(const struct FMultiplayerFindLobbiesRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* FindFriendLobbies(const struct FMultiplayerFindFriendLobbiesRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* EnableMultiplayerServersForTitle(const struct FMultiplayerEnableMultiplayerServersForTitleRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* DeleteRemoteUser(const struct FMultiplayerDeleteRemoteUserRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* DeleteLobby(const struct FMultiplayerDeleteLobbyRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* DeleteContainerImageRepository(const struct FMultiplayerDeleteContainerImageRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* DeleteCertificate(const struct FMultiplayerDeleteCertificateRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* DeleteBuildRegion(const struct FMultiplayerDeleteBuildRegionRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* DeleteBuildAlias(const struct FMultiplayerDeleteBuildAliasRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* DeleteBuild(const struct FMultiplayerDeleteBuildRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* DeleteAsset(const struct FMultiplayerDeleteAssetRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	void DelegateOnSuccessUploadCertificate__DelegateSignature(const struct FMultiplayerEmptyResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessUpdateLobby__DelegateSignature(const struct FMultiplayerLobbyEmptyResult& Result, class UObject* CustomData);
	void DelegateOnSuccessUpdateBuildRegions__DelegateSignature(const struct FMultiplayerEmptyResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessUpdateBuildRegion__DelegateSignature(const struct FMultiplayerEmptyResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessUpdateBuildName__DelegateSignature(const struct FMultiplayerEmptyResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessUpdateBuildAlias__DelegateSignature(const struct FMultiplayerBuildAliasDetailsResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessUntagContainerImage__DelegateSignature(const struct FMultiplayerEmptyResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessUnsubscribeFromLobbyResource__DelegateSignature(const struct FMultiplayerLobbyEmptyResult& Result, class UObject* CustomData);
	void DelegateOnSuccessSubscribeToLobbyResource__DelegateSignature(const struct FMultiplayerSubscribeToLobbyResourceResult& Result, class UObject* CustomData);
	void DelegateOnSuccessShutdownMultiplayerServer__DelegateSignature(const struct FMultiplayerEmptyResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessRolloverContainerRegistryCredentials__DelegateSignature(const struct FMultiplayerRolloverContainerRegistryCredentialsResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessRequestMultiplayerServer__DelegateSignature(const struct FMultiplayerRequestMultiplayerServerResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessRemoveMember__DelegateSignature(const struct FMultiplayerLobbyEmptyResult& Result, class UObject* CustomData);
	void DelegateOnSuccessListVirtualMachineSummaries__DelegateSignature(const struct FMultiplayerListVirtualMachineSummariesResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessListTitleMultiplayerServersQuotaChanges__DelegateSignature(const struct FMultiplayerListTitleMultiplayerServersQuotaChangesResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessListServerBackfillTicketsForPlayer__DelegateSignature(const struct FMultiplayerListServerBackfillTicketsForPlayerResult& Result, class UObject* CustomData);
	void DelegateOnSuccessListQosServersForTitle__DelegateSignature(const struct FMultiplayerListQosServersForTitleResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessListPartyQosServers__DelegateSignature(const struct FMultiplayerListPartyQosServersResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessListMultiplayerServers__DelegateSignature(const struct FMultiplayerListMultiplayerServersResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessListMatchmakingTicketsForPlayer__DelegateSignature(const struct FMultiplayerListMatchmakingTicketsForPlayerResult& Result, class UObject* CustomData);
	void DelegateOnSuccessListContainerImageTags__DelegateSignature(const struct FMultiplayerListContainerImageTagsResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessListContainerImages__DelegateSignature(const struct FMultiplayerListContainerImagesResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessListCertificateSummaries__DelegateSignature(const struct FMultiplayerListCertificateSummariesResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessListBuildSummariesV2__DelegateSignature(const struct FMultiplayerListBuildSummariesResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessListBuildAliases__DelegateSignature(const struct FMultiplayerListBuildAliasesResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessListAssetSummaries__DelegateSignature(const struct FMultiplayerListAssetSummariesResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessListArchivedMultiplayerServers__DelegateSignature(const struct FMultiplayerListMultiplayerServersResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessLeaveLobby__DelegateSignature(const struct FMultiplayerLobbyEmptyResult& Result, class UObject* CustomData);
	void DelegateOnSuccessJoinMatchmakingTicket__DelegateSignature(const struct FMultiplayerJoinMatchmakingTicketResult& Result, class UObject* CustomData);
	void DelegateOnSuccessJoinLobby__DelegateSignature(const struct FMultiplayerJoinLobbyResult& Result, class UObject* CustomData);
	void DelegateOnSuccessJoinArrangedLobby__DelegateSignature(const struct FMultiplayerJoinLobbyResult& Result, class UObject* CustomData);
	void DelegateOnSuccessInviteToLobby__DelegateSignature(const struct FMultiplayerLobbyEmptyResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetTitleMultiplayerServersQuotas__DelegateSignature(const struct FMultiplayerGetTitleMultiplayerServersQuotasResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessGetTitleMultiplayerServersQuotaChange__DelegateSignature(const struct FMultiplayerGetTitleMultiplayerServersQuotaChangeResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessGetTitleEnabledForMultiplayerServersStatus__DelegateSignature(const struct FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessGetServerBackfillTicket__DelegateSignature(const struct FMultiplayerGetServerBackfillTicketResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetRemoteLoginEndpoint__DelegateSignature(const struct FMultiplayerGetRemoteLoginEndpointResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessGetQueueStatistics__DelegateSignature(const struct FMultiplayerGetQueueStatisticsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetMultiplayerSessionLogsBySessionId__DelegateSignature(const struct FMultiplayerGetMultiplayerServerLogsResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessGetMultiplayerServerLogs__DelegateSignature(const struct FMultiplayerGetMultiplayerServerLogsResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessGetMultiplayerServerDetails__DelegateSignature(const struct FMultiplayerGetMultiplayerServerDetailsResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessGetMatchmakingTicket__DelegateSignature(const struct FMultiplayerGetMatchmakingTicketResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetMatch__DelegateSignature(const struct FMultiplayerGetMatchResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetLobby__DelegateSignature(const struct FMultiplayerGetLobbyResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetContainerRegistryCredentials__DelegateSignature(const struct FMultiplayerGetContainerRegistryCredentialsResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessGetBuildAlias__DelegateSignature(const struct FMultiplayerBuildAliasDetailsResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessGetBuild__DelegateSignature(const struct FMultiplayerGetBuildResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessGetAssetUploadUrl__DelegateSignature(const struct FMultiplayerGetAssetUploadUrlResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessGetAssetDownloadUrl__DelegateSignature(const struct FMultiplayerGetAssetDownloadUrlResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessFindLobbies__DelegateSignature(const struct FMultiplayerFindLobbiesResult& Result, class UObject* CustomData);
	void DelegateOnSuccessFindFriendLobbies__DelegateSignature(const struct FMultiplayerFindFriendLobbiesResult& Result, class UObject* CustomData);
	void DelegateOnSuccessEnableMultiplayerServersForTitle__DelegateSignature(const struct FMultiplayerEnableMultiplayerServersForTitleResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessDeleteRemoteUser__DelegateSignature(const struct FMultiplayerEmptyResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessDeleteLobby__DelegateSignature(const struct FMultiplayerLobbyEmptyResult& Result, class UObject* CustomData);
	void DelegateOnSuccessDeleteContainerImageRepository__DelegateSignature(const struct FMultiplayerEmptyResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessDeleteCertificate__DelegateSignature(const struct FMultiplayerEmptyResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessDeleteBuildRegion__DelegateSignature(const struct FMultiplayerEmptyResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessDeleteBuildAlias__DelegateSignature(const struct FMultiplayerEmptyResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessDeleteBuild__DelegateSignature(const struct FMultiplayerEmptyResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessDeleteAsset__DelegateSignature(const struct FMultiplayerEmptyResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessCreateTitleMultiplayerServersQuotaChange__DelegateSignature(const struct FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessCreateServerMatchmakingTicket__DelegateSignature(const struct FMultiplayerCreateMatchmakingTicketResult& Result, class UObject* CustomData);
	void DelegateOnSuccessCreateServerBackfillTicket__DelegateSignature(const struct FMultiplayerCreateServerBackfillTicketResult& Result, class UObject* CustomData);
	void DelegateOnSuccessCreateRemoteUser__DelegateSignature(const struct FMultiplayerCreateRemoteUserResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessCreateMatchmakingTicket__DelegateSignature(const struct FMultiplayerCreateMatchmakingTicketResult& Result, class UObject* CustomData);
	void DelegateOnSuccessCreateLobby__DelegateSignature(const struct FMultiplayerCreateLobbyResult& Result, class UObject* CustomData);
	void DelegateOnSuccessCreateBuildWithProcessBasedServer__DelegateSignature(const struct FMultiplayerCreateBuildWithProcessBasedServerResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessCreateBuildWithManagedContainer__DelegateSignature(const struct FMultiplayerCreateBuildWithManagedContainerResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessCreateBuildWithCustomContainer__DelegateSignature(const struct FMultiplayerCreateBuildWithCustomContainerResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessCreateBuildAlias__DelegateSignature(const struct FMultiplayerBuildAliasDetailsResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessCancelServerBackfillTicket__DelegateSignature(const struct FMultiplayerCancelServerBackfillTicketResult& Result, class UObject* CustomData);
	void DelegateOnSuccessCancelMatchmakingTicket__DelegateSignature(const struct FMultiplayerCancelMatchmakingTicketResult& Result, class UObject* CustomData);
	void DelegateOnSuccessCancelAllServerBackfillTicketsForPlayer__DelegateSignature(const struct FMultiplayerCancelAllServerBackfillTicketsForPlayerResult& Result, class UObject* CustomData);
	void DelegateOnSuccessCancelAllMatchmakingTicketsForPlayer__DelegateSignature(const struct FMultiplayerCancelAllMatchmakingTicketsForPlayerResult& Result, class UObject* CustomData);
	void DelegateOnFailurePlayFabError__DelegateSignature(const struct FPlayFabError& Error, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* CreateTitleMultiplayerServersQuotaChange(const struct FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* CreateServerMatchmakingTicket(const struct FMultiplayerCreateServerMatchmakingTicketRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* CreateServerBackfillTicket(const struct FMultiplayerCreateServerBackfillTicketRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* CreateRemoteUser(const struct FMultiplayerCreateRemoteUserRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* CreateMatchmakingTicket(const struct FMultiplayerCreateMatchmakingTicketRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* CreateLobby(const struct FMultiplayerCreateLobbyRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* CreateBuildWithProcessBasedServer(const struct FMultiplayerCreateBuildWithProcessBasedServerRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* CreateBuildWithManagedContainer(const struct FMultiplayerCreateBuildWithManagedContainerRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* CreateBuildWithCustomContainer(const struct FMultiplayerCreateBuildWithCustomContainerRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* CreateBuildAlias(const struct FMultiplayerCreateBuildAliasRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* CancelServerBackfillTicket(const struct FMultiplayerCancelServerBackfillTicketRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* CancelMatchmakingTicket(const struct FMultiplayerCancelMatchmakingTicketRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* CancelAllServerBackfillTicketsForPlayer(const struct FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabMultiplayerAPI* CancelAllMatchmakingTicketsForPlayer(const struct FMultiplayerCancelAllMatchmakingTicketsForPlayerRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
};

// 0x0 (0x28 - 0x28)
// Class PlayFab.PlayFabMultiplayerModelDecoder
class UPlayFabMultiplayerModelDecoder : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UPlayFabMultiplayerModelDecoder* GetDefaultObj();

	struct FMultiplayerSubscribeToLobbyResourceResult DecodeSubscribeToLobbyResourceResultResponse(class UPlayFabJsonObject* Response);
	struct FMultiplayerRolloverContainerRegistryCredentialsResponse DecodeRolloverContainerRegistryCredentialsResponseResponse(class UPlayFabJsonObject* Response);
	struct FMultiplayerRequestMultiplayerServerResponse DecodeRequestMultiplayerServerResponseResponse(class UPlayFabJsonObject* Response);
	struct FMultiplayerLobbyEmptyResult DecodeLobbyEmptyResultResponse(class UPlayFabJsonObject* Response);
	struct FMultiplayerListVirtualMachineSummariesResponse DecodeListVirtualMachineSummariesResponseResponse(class UPlayFabJsonObject* Response);
	struct FMultiplayerListTitleMultiplayerServersQuotaChangesResponse DecodeListTitleMultiplayerServersQuotaChangesResponseResponse(class UPlayFabJsonObject* Response);
	struct FMultiplayerListServerBackfillTicketsForPlayerResult DecodeListServerBackfillTicketsForPlayerResultResponse(class UPlayFabJsonObject* Response);
	struct FMultiplayerListQosServersForTitleResponse DecodeListQosServersForTitleResponseResponse(class UPlayFabJsonObject* Response);
	struct FMultiplayerListPartyQosServersResponse DecodeListPartyQosServersResponseResponse(class UPlayFabJsonObject* Response);
	struct FMultiplayerListMultiplayerServersResponse DecodeListMultiplayerServersResponseResponse(class UPlayFabJsonObject* Response);
	struct FMultiplayerListMatchmakingTicketsForPlayerResult DecodeListMatchmakingTicketsForPlayerResultResponse(class UPlayFabJsonObject* Response);
	struct FMultiplayerListContainerImageTagsResponse DecodeListContainerImageTagsResponseResponse(class UPlayFabJsonObject* Response);
	struct FMultiplayerListContainerImagesResponse DecodeListContainerImagesResponseResponse(class UPlayFabJsonObject* Response);
	struct FMultiplayerListCertificateSummariesResponse DecodeListCertificateSummariesResponseResponse(class UPlayFabJsonObject* Response);
	struct FMultiplayerListBuildSummariesResponse DecodeListBuildSummariesResponseResponse(class UPlayFabJsonObject* Response);
	struct FMultiplayerListBuildAliasesResponse DecodeListBuildAliasesResponseResponse(class UPlayFabJsonObject* Response);
	struct FMultiplayerListAssetSummariesResponse DecodeListAssetSummariesResponseResponse(class UPlayFabJsonObject* Response);
	struct FMultiplayerJoinMatchmakingTicketResult DecodeJoinMatchmakingTicketResultResponse(class UPlayFabJsonObject* Response);
	struct FMultiplayerJoinLobbyResult DecodeJoinLobbyResultResponse(class UPlayFabJsonObject* Response);
	struct FMultiplayerGetTitleMultiplayerServersQuotasResponse DecodeGetTitleMultiplayerServersQuotasResponseResponse(class UPlayFabJsonObject* Response);
	struct FMultiplayerGetTitleMultiplayerServersQuotaChangeResponse DecodeGetTitleMultiplayerServersQuotaChangeResponseResponse(class UPlayFabJsonObject* Response);
	struct FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse DecodeGetTitleEnabledForMultiplayerServersStatusResponseResponse(class UPlayFabJsonObject* Response);
	struct FMultiplayerGetServerBackfillTicketResult DecodeGetServerBackfillTicketResultResponse(class UPlayFabJsonObject* Response);
	struct FMultiplayerGetRemoteLoginEndpointResponse DecodeGetRemoteLoginEndpointResponseResponse(class UPlayFabJsonObject* Response);
	struct FMultiplayerGetQueueStatisticsResult DecodeGetQueueStatisticsResultResponse(class UPlayFabJsonObject* Response);
	struct FMultiplayerGetMultiplayerServerLogsResponse DecodeGetMultiplayerServerLogsResponseResponse(class UPlayFabJsonObject* Response);
	struct FMultiplayerGetMultiplayerServerDetailsResponse DecodeGetMultiplayerServerDetailsResponseResponse(class UPlayFabJsonObject* Response);
	struct FMultiplayerGetMatchResult DecodeGetMatchResultResponse(class UPlayFabJsonObject* Response);
	struct FMultiplayerGetMatchmakingTicketResult DecodeGetMatchmakingTicketResultResponse(class UPlayFabJsonObject* Response);
	struct FMultiplayerGetLobbyResult DecodeGetLobbyResultResponse(class UPlayFabJsonObject* Response);
	struct FMultiplayerGetContainerRegistryCredentialsResponse DecodeGetContainerRegistryCredentialsResponseResponse(class UPlayFabJsonObject* Response);
	struct FMultiplayerGetBuildResponse DecodeGetBuildResponseResponse(class UPlayFabJsonObject* Response);
	struct FMultiplayerGetAssetUploadUrlResponse DecodeGetAssetUploadUrlResponseResponse(class UPlayFabJsonObject* Response);
	struct FMultiplayerGetAssetDownloadUrlResponse DecodeGetAssetDownloadUrlResponseResponse(class UPlayFabJsonObject* Response);
	struct FMultiplayerFindLobbiesResult DecodeFindLobbiesResultResponse(class UPlayFabJsonObject* Response);
	struct FMultiplayerFindFriendLobbiesResult DecodeFindFriendLobbiesResultResponse(class UPlayFabJsonObject* Response);
	struct FMultiplayerEnableMultiplayerServersForTitleResponse DecodeEnableMultiplayerServersForTitleResponseResponse(class UPlayFabJsonObject* Response);
	struct FMultiplayerEmptyResponse DecodeEmptyResponseResponse(class UPlayFabJsonObject* Response);
	struct FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse DecodeCreateTitleMultiplayerServersQuotaChangeResponseResponse(class UPlayFabJsonObject* Response);
	struct FMultiplayerCreateServerBackfillTicketResult DecodeCreateServerBackfillTicketResultResponse(class UPlayFabJsonObject* Response);
	struct FMultiplayerCreateRemoteUserResponse DecodeCreateRemoteUserResponseResponse(class UPlayFabJsonObject* Response);
	struct FMultiplayerCreateMatchmakingTicketResult DecodeCreateMatchmakingTicketResultResponse(class UPlayFabJsonObject* Response);
	struct FMultiplayerCreateLobbyResult DecodeCreateLobbyResultResponse(class UPlayFabJsonObject* Response);
	struct FMultiplayerCreateBuildWithProcessBasedServerResponse DecodeCreateBuildWithProcessBasedServerResponseResponse(class UPlayFabJsonObject* Response);
	struct FMultiplayerCreateBuildWithManagedContainerResponse DecodeCreateBuildWithManagedContainerResponseResponse(class UPlayFabJsonObject* Response);
	struct FMultiplayerCreateBuildWithCustomContainerResponse DecodeCreateBuildWithCustomContainerResponseResponse(class UPlayFabJsonObject* Response);
	struct FMultiplayerCancelServerBackfillTicketResult DecodeCancelServerBackfillTicketResultResponse(class UPlayFabJsonObject* Response);
	struct FMultiplayerCancelMatchmakingTicketResult DecodeCancelMatchmakingTicketResultResponse(class UPlayFabJsonObject* Response);
	struct FMultiplayerCancelAllServerBackfillTicketsForPlayerResult DecodeCancelAllServerBackfillTicketsForPlayerResultResponse(class UPlayFabJsonObject* Response);
	struct FMultiplayerCancelAllMatchmakingTicketsForPlayerResult DecodeCancelAllMatchmakingTicketsForPlayerResultResponse(class UPlayFabJsonObject* Response);
	struct FMultiplayerBuildAliasDetailsResponse DecodeBuildAliasDetailsResponseResponse(class UPlayFabJsonObject* Response);
};

// 0x140 (0x170 - 0x30)
// Class PlayFab.PlayFabProfilesAPI
class UPlayFabProfilesAPI : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnPlayFabResponse;                                 // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_3533[0xC8];                                    // Fixing Size After Last Property 
	class UPlayFabAuthenticationContext*         CallAuthenticationContext;                         // 0x108(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPlayFabJsonObject*                    RequestJsonObj;                                    // 0x110(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPlayFabJsonObject*                    ResponseJsonObj;                                   // 0x118(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3534[0x50];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UPlayFabProfilesAPI* GetDefaultObj();

	class UPlayFabProfilesAPI* SetProfilePolicy(const struct FProfilesSetEntityProfilePolicyRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabProfilesAPI* SetProfileLanguage(const struct FProfilesSetProfileLanguageRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabProfilesAPI* SetGlobalPolicy(const struct FProfilesSetGlobalPolicyRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	void HelperSetProfilePolicy(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperSetProfileLanguage(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperSetGlobalPolicy(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetTitlePlayersFromXboxLiveIDs(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetTitlePlayersFromMasterPlayerAccountIds(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetProfiles(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetProfile(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetGlobalPolicy(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	class UPlayFabProfilesAPI* GetTitlePlayersFromXboxLiveIDs(const struct FProfilesGetTitlePlayersFromXboxLiveIDsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabProfilesAPI* GetTitlePlayersFromMasterPlayerAccountIds(const struct FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabProfilesAPI* GetProfiles(const struct FProfilesGetEntityProfilesRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabProfilesAPI* GetProfile(const struct FProfilesGetEntityProfileRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabProfilesAPI* GetGlobalPolicy(const struct FProfilesGetGlobalPolicyRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	void DelegateOnSuccessSetProfilePolicy__DelegateSignature(const struct FProfilesSetEntityProfilePolicyResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessSetProfileLanguage__DelegateSignature(const struct FProfilesSetProfileLanguageResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessSetGlobalPolicy__DelegateSignature(const struct FProfilesSetGlobalPolicyResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessGetTitlePlayersFromXboxLiveIDs__DelegateSignature(const struct FProfilesGetTitlePlayersFromProviderIDsResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessGetTitlePlayersFromMasterPlayerAccountIds__DelegateSignature(const struct FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessGetProfiles__DelegateSignature(const struct FProfilesGetEntityProfilesResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessGetProfile__DelegateSignature(const struct FProfilesGetEntityProfileResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessGetGlobalPolicy__DelegateSignature(const struct FProfilesGetGlobalPolicyResponse& Result, class UObject* CustomData);
	void DelegateOnFailurePlayFabError__DelegateSignature(const struct FPlayFabError& Error, class UObject* CustomData);
};

// 0x0 (0x28 - 0x28)
// Class PlayFab.PlayFabProfilesModelDecoder
class UPlayFabProfilesModelDecoder : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UPlayFabProfilesModelDecoder* GetDefaultObj();

	struct FProfilesSetProfileLanguageResponse DecodeSetProfileLanguageResponseResponse(class UPlayFabJsonObject* Response);
	struct FProfilesSetGlobalPolicyResponse DecodeSetGlobalPolicyResponseResponse(class UPlayFabJsonObject* Response);
	struct FProfilesSetEntityProfilePolicyResponse DecodeSetEntityProfilePolicyResponseResponse(class UPlayFabJsonObject* Response);
	struct FProfilesGetTitlePlayersFromProviderIDsResponse DecodeGetTitlePlayersFromProviderIDsResponseResponse(class UPlayFabJsonObject* Response);
	struct FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse DecodeGetTitlePlayersFromMasterPlayerAccountIdsResponseResponse(class UPlayFabJsonObject* Response);
	struct FProfilesGetGlobalPolicyResponse DecodeGetGlobalPolicyResponseResponse(class UPlayFabJsonObject* Response);
	struct FProfilesGetEntityProfilesResponse DecodeGetEntityProfilesResponseResponse(class UPlayFabJsonObject* Response);
	struct FProfilesGetEntityProfileResponse DecodeGetEntityProfileResponseResponse(class UPlayFabJsonObject* Response);
};

// 0x990 (0x9C0 - 0x30)
// Class PlayFab.PlayFabServerAPI
class UPlayFabServerAPI : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnPlayFabResponse;                                 // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_3761[0x918];                                   // Fixing Size After Last Property 
	class UPlayFabAuthenticationContext*         CallAuthenticationContext;                         // 0x958(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPlayFabJsonObject*                    RequestJsonObj;                                    // 0x960(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPlayFabJsonObject*                    ResponseJsonObj;                                   // 0x968(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3762[0x50];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UPlayFabServerAPI* GetDefaultObj();

	class UPlayFabServerAPI* WriteTitleEvent(const struct FServerWriteTitleEventRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* WritePlayerEvent(const struct FServerWriteServerPlayerEventRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* WriteCharacterEvent(const struct FServerWriteServerCharacterEventRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* UpdateUserReadOnlyData(const struct FServerUpdateUserDataRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* UpdateUserPublisherReadOnlyData(const struct FServerUpdateUserDataRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* UpdateUserPublisherInternalData(const struct FServerUpdateUserInternalDataRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* UpdateUserPublisherData(const struct FServerUpdateUserDataRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* UpdateUserInventoryItemCustomData(const struct FServerUpdateUserInventoryItemDataRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* UpdateUserInternalData(const struct FServerUpdateUserInternalDataRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* UpdateUserData(const struct FServerUpdateUserDataRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* UpdateSharedGroupData(const struct FServerUpdateSharedGroupDataRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* UpdatePlayerStatistics(const struct FServerUpdatePlayerStatisticsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* UpdateCharacterStatistics(const struct FServerUpdateCharacterStatisticsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* UpdateCharacterReadOnlyData(const struct FServerUpdateCharacterDataRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* UpdateCharacterInternalData(const struct FServerUpdateCharacterDataRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* UpdateCharacterData(const struct FServerUpdateCharacterDataRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* UpdateBans(const struct FServerUpdateBansRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* UpdateAvatarUrl(const struct FServerUpdateAvatarUrlRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* UnlockContainerItem(const struct FServerUnlockContainerItemRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* UnlockContainerInstance(const struct FServerUnlockContainerInstanceRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* UnlinkXboxAccount(const struct FServerUnlinkXboxAccountRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* UnlinkSteamId(const struct FServerUnlinkSteamIdRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* UnlinkServerCustomId(const struct FServerUnlinkServerCustomIdRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* UnlinkPSNAccount(const struct FServerUnlinkPSNAccountRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* UnlinkNintendoSwitchDeviceId(const struct FServerUnlinkNintendoSwitchDeviceIdRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* UnlinkNintendoServiceAccount(const struct FServerUnlinkNintendoServiceAccountRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* SubtractUserVirtualCurrency(const struct FServerSubtractUserVirtualCurrencyRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* SubtractCharacterVirtualCurrency(const struct FServerSubtractCharacterVirtualCurrencyRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* SetTitleInternalData(const struct FServerSetTitleDataRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* SetTitleData(const struct FServerSetTitleDataRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* SetPublisherData(const struct FServerSetPublisherDataRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* SetPlayerSecret(const struct FServerSetPlayerSecretRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* SetGameServerInstanceTags(const struct FServerSetGameServerInstanceTagsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* SetGameServerInstanceState(const struct FServerSetGameServerInstanceStateRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* SetGameServerInstanceData(const struct FServerSetGameServerInstanceDataRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* SetFriendTags(const struct FServerSetFriendTagsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* SendPushNotificationFromTemplate(const struct FServerSendPushNotificationFromTemplateRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* SendPushNotification(const struct FServerSendPushNotificationRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* SendEmailFromTemplate(const struct FServerSendEmailFromTemplateRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* SendCustomAccountRecoveryEmail(const struct FServerSendCustomAccountRecoveryEmailRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* SavePushNotificationTemplate(const struct FServerSavePushNotificationTemplateRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* RevokeInventoryItems(const struct FServerRevokeInventoryItemsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* RevokeInventoryItem(const struct FServerRevokeInventoryItemRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* RevokeBans(const struct FServerRevokeBansRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* RevokeAllBansForUser(const struct FServerRevokeAllBansForUserRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* ReportPlayer(const struct FServerReportPlayerServerRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* RemoveSharedGroupMembers(const struct FServerRemoveSharedGroupMembersRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* RemovePlayerTag(const struct FServerRemovePlayerTagRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* RemoveGenericID(const struct FServerRemoveGenericIDRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* RemoveFriend(const struct FServerRemoveFriendRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* RegisterGame(const struct FServerRegisterGameRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* RefreshGameServerInstanceHeartbeat(const struct FServerRefreshGameServerInstanceHeartbeatRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* RedeemMatchmakerTicket(const struct FServerRedeemMatchmakerTicketRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* RedeemCoupon(const struct FServerRedeemCouponRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* NotifyMatchmakerPlayerLeft(const struct FServerNotifyMatchmakerPlayerLeftRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* MoveItemToUserFromCharacter(const struct FServerMoveItemToUserFromCharacterRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* MoveItemToCharacterFromUser(const struct FServerMoveItemToCharacterFromUserRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* MoveItemToCharacterFromCharacter(const struct FServerMoveItemToCharacterFromCharacterRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* ModifyItemUses(const struct FServerModifyItemUsesRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* LoginWithXboxId(const struct FServerLoginWithXboxIdRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* LoginWithXbox(const struct FServerLoginWithXboxRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* LoginWithSteamId(const struct FServerLoginWithSteamIdRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* LoginWithServerCustomId(const struct FServerLoginWithServerCustomIdRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* LinkXboxAccount(const struct FServerLinkXboxAccountRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* LinkSteamId(const struct FServerLinkSteamIdRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* LinkServerCustomId(const struct FServerLinkServerCustomIdRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* LinkPSNAccount(const struct FServerLinkPSNAccountRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* LinkNintendoSwitchDeviceId(const struct FServerLinkNintendoSwitchDeviceIdRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* LinkNintendoServiceAccount(const struct FServerLinkNintendoServiceAccountRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	void HelperWriteTitleEvent(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperWritePlayerEvent(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperWriteCharacterEvent(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUpdateUserReadOnlyData(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUpdateUserPublisherReadOnlyData(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUpdateUserPublisherInternalData(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUpdateUserPublisherData(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUpdateUserInventoryItemCustomData(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUpdateUserInternalData(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUpdateUserData(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUpdateSharedGroupData(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUpdatePlayerStatistics(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUpdateCharacterStatistics(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUpdateCharacterReadOnlyData(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUpdateCharacterInternalData(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUpdateCharacterData(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUpdateBans(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUpdateAvatarUrl(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUnlockContainerItem(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUnlockContainerInstance(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUnlinkXboxAccount(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUnlinkSteamId(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUnlinkServerCustomId(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUnlinkPSNAccount(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUnlinkNintendoSwitchDeviceId(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperUnlinkNintendoServiceAccount(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperSubtractUserVirtualCurrency(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperSubtractCharacterVirtualCurrency(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperSetTitleInternalData(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperSetTitleData(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperSetPublisherData(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperSetPlayerSecret(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperSetGameServerInstanceTags(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperSetGameServerInstanceState(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperSetGameServerInstanceData(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperSetFriendTags(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperSendPushNotificationFromTemplate(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperSendPushNotification(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperSendEmailFromTemplate(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperSendCustomAccountRecoveryEmail(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperSavePushNotificationTemplate(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperRevokeInventoryItems(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperRevokeInventoryItem(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperRevokeBans(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperRevokeAllBansForUser(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperReportPlayer(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperRemoveSharedGroupMembers(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperRemovePlayerTag(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperRemoveGenericID(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperRemoveFriend(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperRegisterGame(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperRefreshGameServerInstanceHeartbeat(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperRedeemMatchmakerTicket(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperRedeemCoupon(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperNotifyMatchmakerPlayerLeft(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperMoveItemToUserFromCharacter(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperMoveItemToCharacterFromUser(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperMoveItemToCharacterFromCharacter(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperModifyItemUses(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperLoginWithXboxId(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperLoginWithXbox(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperLoginWithSteamId(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperLoginWithServerCustomId(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperLinkXboxAccount(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperLinkSteamId(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperLinkServerCustomId(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperLinkPSNAccount(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperLinkNintendoSwitchDeviceId(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperLinkNintendoServiceAccount(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGrantItemsToUsers(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGrantItemsToUser(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGrantItemsToCharacter(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGrantCharacterToUser(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetUserReadOnlyData(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetUserPublisherReadOnlyData(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetUserPublisherInternalData(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetUserPublisherData(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetUserInventory(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetUserInternalData(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetUserData(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetUserBans(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetUserAccountInfo(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetTitleNews(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetTitleInternalData(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetTitleData(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetTime(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetStoreItems(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetSharedGroupData(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetServerCustomIDsFromPlayFabIDs(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetRandomResultTables(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetPublisherData(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetPlayFabIDsFromXboxLiveIDs(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetPlayFabIDsFromTwitchIDs(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetPlayFabIDsFromSteamIDs(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetPlayFabIDsFromPSNAccountIDs(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetPlayFabIDsFromNintendoSwitchDeviceIds(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetPlayFabIDsFromNintendoServiceAccountIds(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetPlayFabIDsFromGenericIDs(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetPlayFabIDsFromFacebookInstantGamesIds(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetPlayFabIDsFromFacebookIDs(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetPlayerTags(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetPlayerStatisticVersions(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetPlayerStatistics(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetPlayersInSegment(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetPlayerSegments(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetPlayerProfile(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetPlayerCombinedInfo(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetLeaderboardForUserCharacters(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetLeaderboardAroundUser(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetLeaderboardAroundCharacter(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetLeaderboard(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetFriendsList(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetFriendLeaderboard(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetContentDownloadUrl(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetCharacterStatistics(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetCharacterReadOnlyData(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetCharacterLeaderboard(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetCharacterInventory(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetCharacterInternalData(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetCharacterData(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetCatalogItems(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetAllUsersCharacters(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperGetAllSegments(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperExecuteCloudScript(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperEvaluateRandomResultTable(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperDeregisterGame(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperDeleteSharedGroup(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperDeletePushNotificationTemplate(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperDeletePlayer(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperDeleteCharacterFromUser(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperCreateSharedGroup(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperConsumeItem(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperBanUsers(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperAwardSteamAchievement(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperAuthenticateSessionTicket(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperAddUserVirtualCurrency(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperAddSharedGroupMembers(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperAddPlayerTag(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperAddGenericID(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperAddFriend(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void HelperAddCharacterVirtualCurrency(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	class UPlayFabServerAPI* GrantItemsToUsers(const struct FServerGrantItemsToUsersRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* GrantItemsToUser(const struct FServerGrantItemsToUserRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* GrantItemsToCharacter(const struct FServerGrantItemsToCharacterRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* GrantCharacterToUser(const struct FServerGrantCharacterToUserRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* GetUserReadOnlyData(const struct FServerGetUserDataRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* GetUserPublisherReadOnlyData(const struct FServerGetUserDataRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* GetUserPublisherInternalData(const struct FServerGetUserDataRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* GetUserPublisherData(const struct FServerGetUserDataRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* GetUserInventory(const struct FServerGetUserInventoryRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* GetUserInternalData(const struct FServerGetUserDataRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* GetUserData(const struct FServerGetUserDataRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* GetUserBans(const struct FServerGetUserBansRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* GetUserAccountInfo(const struct FServerGetUserAccountInfoRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* GetTitleNews(const struct FServerGetTitleNewsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* GetTitleInternalData(const struct FServerGetTitleDataRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* GetTitleData(const struct FServerGetTitleDataRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* GetTime(const struct FServerGetTimeRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* GetStoreItems(const struct FServerGetStoreItemsServerRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* GetSharedGroupData(const struct FServerGetSharedGroupDataRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* GetServerCustomIDsFromPlayFabIDs(const struct FServerGetServerCustomIDsFromPlayFabIDsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* GetRandomResultTables(const struct FServerGetRandomResultTablesRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* GetPublisherData(const struct FServerGetPublisherDataRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* GetPlayFabIDsFromXboxLiveIDs(const struct FServerGetPlayFabIDsFromXboxLiveIDsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* GetPlayFabIDsFromTwitchIDs(const struct FServerGetPlayFabIDsFromTwitchIDsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* GetPlayFabIDsFromSteamIDs(const struct FServerGetPlayFabIDsFromSteamIDsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* GetPlayFabIDsFromPSNAccountIDs(const struct FServerGetPlayFabIDsFromPSNAccountIDsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* GetPlayFabIDsFromNintendoSwitchDeviceIds(const struct FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* GetPlayFabIDsFromNintendoServiceAccountIds(const struct FServerGetPlayFabIDsFromNintendoServiceAccountIdsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* GetPlayFabIDsFromGenericIDs(const struct FServerGetPlayFabIDsFromGenericIDsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* GetPlayFabIDsFromFacebookInstantGamesIds(const struct FServerGetPlayFabIDsFromFacebookInstantGamesIdsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* GetPlayFabIDsFromFacebookIDs(const struct FServerGetPlayFabIDsFromFacebookIDsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* GetPlayerTags(const struct FServerGetPlayerTagsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* GetPlayerStatisticVersions(const struct FServerGetPlayerStatisticVersionsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* GetPlayerStatistics(const struct FServerGetPlayerStatisticsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* GetPlayersInSegment(const struct FServerGetPlayersInSegmentRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* GetPlayerSegments(const struct FServerGetPlayersSegmentsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* GetPlayerProfile(const struct FServerGetPlayerProfileRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* GetPlayerCombinedInfo(const struct FServerGetPlayerCombinedInfoRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* GetLeaderboardForUserCharacters(const struct FServerGetLeaderboardForUsersCharactersRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* GetLeaderboardAroundUser(const struct FServerGetLeaderboardAroundUserRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* GetLeaderboardAroundCharacter(const struct FServerGetLeaderboardAroundCharacterRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* GetLeaderboard(const struct FServerGetLeaderboardRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* GetFriendsList(const struct FServerGetFriendsListRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* GetFriendLeaderboard(const struct FServerGetFriendLeaderboardRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* GetContentDownloadUrl(const struct FServerGetContentDownloadUrlRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* GetCharacterStatistics(const struct FServerGetCharacterStatisticsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* GetCharacterReadOnlyData(const struct FServerGetCharacterDataRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* GetCharacterLeaderboard(const struct FServerGetCharacterLeaderboardRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* GetCharacterInventory(const struct FServerGetCharacterInventoryRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* GetCharacterInternalData(const struct FServerGetCharacterDataRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* GetCharacterData(const struct FServerGetCharacterDataRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* GetCatalogItems(const struct FServerGetCatalogItemsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* GetAllUsersCharacters(const struct FServerListUsersCharactersRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* GetAllSegments(const struct FServerGetAllSegmentsRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* ExecuteCloudScript(const struct FServerExecuteCloudScriptServerRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* EvaluateRandomResultTable(const struct FServerEvaluateRandomResultTableRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* DeregisterGame(const struct FServerDeregisterGameRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* DeleteSharedGroup(const struct FServerDeleteSharedGroupRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* DeletePushNotificationTemplate(const struct FServerDeletePushNotificationTemplateRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* DeletePlayer(const struct FServerDeletePlayerRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* DeleteCharacterFromUser(const struct FServerDeleteCharacterFromUserRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	void DelegateOnSuccessWriteTitleEvent__DelegateSignature(const struct FServerWriteEventResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessWritePlayerEvent__DelegateSignature(const struct FServerWriteEventResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessWriteCharacterEvent__DelegateSignature(const struct FServerWriteEventResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessUpdateUserReadOnlyData__DelegateSignature(const struct FServerUpdateUserDataResult& Result, class UObject* CustomData);
	void DelegateOnSuccessUpdateUserPublisherReadOnlyData__DelegateSignature(const struct FServerUpdateUserDataResult& Result, class UObject* CustomData);
	void DelegateOnSuccessUpdateUserPublisherInternalData__DelegateSignature(const struct FServerUpdateUserDataResult& Result, class UObject* CustomData);
	void DelegateOnSuccessUpdateUserPublisherData__DelegateSignature(const struct FServerUpdateUserDataResult& Result, class UObject* CustomData);
	void DelegateOnSuccessUpdateUserInventoryItemCustomData__DelegateSignature(const struct FServerEmptyResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessUpdateUserInternalData__DelegateSignature(const struct FServerUpdateUserDataResult& Result, class UObject* CustomData);
	void DelegateOnSuccessUpdateUserData__DelegateSignature(const struct FServerUpdateUserDataResult& Result, class UObject* CustomData);
	void DelegateOnSuccessUpdateSharedGroupData__DelegateSignature(const struct FServerUpdateSharedGroupDataResult& Result, class UObject* CustomData);
	void DelegateOnSuccessUpdatePlayerStatistics__DelegateSignature(const struct FServerUpdatePlayerStatisticsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessUpdateCharacterStatistics__DelegateSignature(const struct FServerUpdateCharacterStatisticsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessUpdateCharacterReadOnlyData__DelegateSignature(const struct FServerUpdateCharacterDataResult& Result, class UObject* CustomData);
	void DelegateOnSuccessUpdateCharacterInternalData__DelegateSignature(const struct FServerUpdateCharacterDataResult& Result, class UObject* CustomData);
	void DelegateOnSuccessUpdateCharacterData__DelegateSignature(const struct FServerUpdateCharacterDataResult& Result, class UObject* CustomData);
	void DelegateOnSuccessUpdateBans__DelegateSignature(const struct FServerUpdateBansResult& Result, class UObject* CustomData);
	void DelegateOnSuccessUpdateAvatarUrl__DelegateSignature(const struct FServerEmptyResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessUnlockContainerItem__DelegateSignature(const struct FServerUnlockContainerItemResult& Result, class UObject* CustomData);
	void DelegateOnSuccessUnlockContainerInstance__DelegateSignature(const struct FServerUnlockContainerItemResult& Result, class UObject* CustomData);
	void DelegateOnSuccessUnlinkXboxAccount__DelegateSignature(const struct FServerUnlinkXboxAccountResult& Result, class UObject* CustomData);
	void DelegateOnSuccessUnlinkSteamId__DelegateSignature(const struct FServerUnlinkSteamIdResult& Result, class UObject* CustomData);
	void DelegateOnSuccessUnlinkServerCustomId__DelegateSignature(const struct FServerUnlinkServerCustomIdResult& Result, class UObject* CustomData);
	void DelegateOnSuccessUnlinkPSNAccount__DelegateSignature(const struct FServerUnlinkPSNAccountResult& Result, class UObject* CustomData);
	void DelegateOnSuccessUnlinkNintendoSwitchDeviceId__DelegateSignature(const struct FServerUnlinkNintendoSwitchDeviceIdResult& Result, class UObject* CustomData);
	void DelegateOnSuccessUnlinkNintendoServiceAccount__DelegateSignature(const struct FServerEmptyResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessSubtractUserVirtualCurrency__DelegateSignature(const struct FServerModifyUserVirtualCurrencyResult& Result, class UObject* CustomData);
	void DelegateOnSuccessSubtractCharacterVirtualCurrency__DelegateSignature(const struct FServerModifyCharacterVirtualCurrencyResult& Result, class UObject* CustomData);
	void DelegateOnSuccessSetTitleInternalData__DelegateSignature(const struct FServerSetTitleDataResult& Result, class UObject* CustomData);
	void DelegateOnSuccessSetTitleData__DelegateSignature(const struct FServerSetTitleDataResult& Result, class UObject* CustomData);
	void DelegateOnSuccessSetPublisherData__DelegateSignature(const struct FServerSetPublisherDataResult& Result, class UObject* CustomData);
	void DelegateOnSuccessSetPlayerSecret__DelegateSignature(const struct FServerSetPlayerSecretResult& Result, class UObject* CustomData);
	void DelegateOnSuccessSetGameServerInstanceTags__DelegateSignature(const struct FServerSetGameServerInstanceTagsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessSetGameServerInstanceState__DelegateSignature(const struct FServerSetGameServerInstanceStateResult& Result, class UObject* CustomData);
	void DelegateOnSuccessSetGameServerInstanceData__DelegateSignature(const struct FServerSetGameServerInstanceDataResult& Result, class UObject* CustomData);
	void DelegateOnSuccessSetFriendTags__DelegateSignature(const struct FServerEmptyResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessSendPushNotificationFromTemplate__DelegateSignature(const struct FServerSendPushNotificationResult& Result, class UObject* CustomData);
	void DelegateOnSuccessSendPushNotification__DelegateSignature(const struct FServerSendPushNotificationResult& Result, class UObject* CustomData);
	void DelegateOnSuccessSendEmailFromTemplate__DelegateSignature(const struct FServerSendEmailFromTemplateResult& Result, class UObject* CustomData);
	void DelegateOnSuccessSendCustomAccountRecoveryEmail__DelegateSignature(const struct FServerSendCustomAccountRecoveryEmailResult& Result, class UObject* CustomData);
	void DelegateOnSuccessSavePushNotificationTemplate__DelegateSignature(const struct FServerSavePushNotificationTemplateResult& Result, class UObject* CustomData);
	void DelegateOnSuccessRevokeInventoryItems__DelegateSignature(const struct FServerRevokeInventoryItemsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessRevokeInventoryItem__DelegateSignature(const struct FServerRevokeInventoryResult& Result, class UObject* CustomData);
	void DelegateOnSuccessRevokeBans__DelegateSignature(const struct FServerRevokeBansResult& Result, class UObject* CustomData);
	void DelegateOnSuccessRevokeAllBansForUser__DelegateSignature(const struct FServerRevokeAllBansForUserResult& Result, class UObject* CustomData);
	void DelegateOnSuccessReportPlayer__DelegateSignature(const struct FServerReportPlayerServerResult& Result, class UObject* CustomData);
	void DelegateOnSuccessRemoveSharedGroupMembers__DelegateSignature(const struct FServerRemoveSharedGroupMembersResult& Result, class UObject* CustomData);
	void DelegateOnSuccessRemovePlayerTag__DelegateSignature(const struct FServerRemovePlayerTagResult& Result, class UObject* CustomData);
	void DelegateOnSuccessRemoveGenericID__DelegateSignature(const struct FServerEmptyResult& Result, class UObject* CustomData);
	void DelegateOnSuccessRemoveFriend__DelegateSignature(const struct FServerEmptyResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessRegisterGame__DelegateSignature(const struct FServerRegisterGameResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessRefreshGameServerInstanceHeartbeat__DelegateSignature(const struct FServerRefreshGameServerInstanceHeartbeatResult& Result, class UObject* CustomData);
	void DelegateOnSuccessRedeemMatchmakerTicket__DelegateSignature(const struct FServerRedeemMatchmakerTicketResult& Result, class UObject* CustomData);
	void DelegateOnSuccessRedeemCoupon__DelegateSignature(const struct FServerRedeemCouponResult& Result, class UObject* CustomData);
	void DelegateOnSuccessNotifyMatchmakerPlayerLeft__DelegateSignature(const struct FServerNotifyMatchmakerPlayerLeftResult& Result, class UObject* CustomData);
	void DelegateOnSuccessMoveItemToUserFromCharacter__DelegateSignature(const struct FServerMoveItemToUserFromCharacterResult& Result, class UObject* CustomData);
	void DelegateOnSuccessMoveItemToCharacterFromUser__DelegateSignature(const struct FServerMoveItemToCharacterFromUserResult& Result, class UObject* CustomData);
	void DelegateOnSuccessMoveItemToCharacterFromCharacter__DelegateSignature(const struct FServerMoveItemToCharacterFromCharacterResult& Result, class UObject* CustomData);
	void DelegateOnSuccessModifyItemUses__DelegateSignature(const struct FServerModifyItemUsesResult& Result, class UObject* CustomData);
	void DelegateOnSuccessLoginWithXboxId__DelegateSignature(const struct FServerServerLoginResult& Result, class UObject* CustomData);
	void DelegateOnSuccessLoginWithXbox__DelegateSignature(const struct FServerServerLoginResult& Result, class UObject* CustomData);
	void DelegateOnSuccessLoginWithSteamId__DelegateSignature(const struct FServerServerLoginResult& Result, class UObject* CustomData);
	void DelegateOnSuccessLoginWithServerCustomId__DelegateSignature(const struct FServerServerLoginResult& Result, class UObject* CustomData);
	void DelegateOnSuccessLinkXboxAccount__DelegateSignature(const struct FServerLinkXboxAccountResult& Result, class UObject* CustomData);
	void DelegateOnSuccessLinkSteamId__DelegateSignature(const struct FServerLinkSteamIdResult& Result, class UObject* CustomData);
	void DelegateOnSuccessLinkServerCustomId__DelegateSignature(const struct FServerLinkServerCustomIdResult& Result, class UObject* CustomData);
	void DelegateOnSuccessLinkPSNAccount__DelegateSignature(const struct FServerLinkPSNAccountResult& Result, class UObject* CustomData);
	void DelegateOnSuccessLinkNintendoSwitchDeviceId__DelegateSignature(const struct FServerLinkNintendoSwitchDeviceIdResult& Result, class UObject* CustomData);
	void DelegateOnSuccessLinkNintendoServiceAccount__DelegateSignature(const struct FServerEmptyResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGrantItemsToUsers__DelegateSignature(const struct FServerGrantItemsToUsersResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGrantItemsToUser__DelegateSignature(const struct FServerGrantItemsToUserResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGrantItemsToCharacter__DelegateSignature(const struct FServerGrantItemsToCharacterResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGrantCharacterToUser__DelegateSignature(const struct FServerGrantCharacterToUserResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetUserReadOnlyData__DelegateSignature(const struct FServerGetUserDataResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetUserPublisherReadOnlyData__DelegateSignature(const struct FServerGetUserDataResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetUserPublisherInternalData__DelegateSignature(const struct FServerGetUserDataResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetUserPublisherData__DelegateSignature(const struct FServerGetUserDataResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetUserInventory__DelegateSignature(const struct FServerGetUserInventoryResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetUserInternalData__DelegateSignature(const struct FServerGetUserDataResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetUserData__DelegateSignature(const struct FServerGetUserDataResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetUserBans__DelegateSignature(const struct FServerGetUserBansResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetUserAccountInfo__DelegateSignature(const struct FServerGetUserAccountInfoResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetTitleNews__DelegateSignature(const struct FServerGetTitleNewsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetTitleInternalData__DelegateSignature(const struct FServerGetTitleDataResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetTitleData__DelegateSignature(const struct FServerGetTitleDataResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetTime__DelegateSignature(const struct FServerGetTimeResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetStoreItems__DelegateSignature(const struct FServerGetStoreItemsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetSharedGroupData__DelegateSignature(const struct FServerGetSharedGroupDataResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetServerCustomIDsFromPlayFabIDs__DelegateSignature(const struct FServerGetServerCustomIDsFromPlayFabIDsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetRandomResultTables__DelegateSignature(const struct FServerGetRandomResultTablesResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetPublisherData__DelegateSignature(const struct FServerGetPublisherDataResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetPlayFabIDsFromXboxLiveIDs__DelegateSignature(const struct FServerGetPlayFabIDsFromXboxLiveIDsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetPlayFabIDsFromTwitchIDs__DelegateSignature(const struct FServerGetPlayFabIDsFromTwitchIDsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetPlayFabIDsFromSteamIDs__DelegateSignature(const struct FServerGetPlayFabIDsFromSteamIDsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetPlayFabIDsFromPSNAccountIDs__DelegateSignature(const struct FServerGetPlayFabIDsFromPSNAccountIDsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetPlayFabIDsFromNintendoSwitchDeviceIds__DelegateSignature(const struct FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetPlayFabIDsFromNintendoServiceAccountIds__DelegateSignature(const struct FServerGetPlayFabIDsFromNintendoServiceAccountIdsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetPlayFabIDsFromGenericIDs__DelegateSignature(const struct FServerGetPlayFabIDsFromGenericIDsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetPlayFabIDsFromFacebookInstantGamesIds__DelegateSignature(const struct FServerGetPlayFabIDsFromFacebookInstantGamesIdsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetPlayFabIDsFromFacebookIDs__DelegateSignature(const struct FServerGetPlayFabIDsFromFacebookIDsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetPlayerTags__DelegateSignature(const struct FServerGetPlayerTagsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetPlayerStatisticVersions__DelegateSignature(const struct FServerGetPlayerStatisticVersionsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetPlayerStatistics__DelegateSignature(const struct FServerGetPlayerStatisticsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetPlayersInSegment__DelegateSignature(const struct FServerGetPlayersInSegmentResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetPlayerSegments__DelegateSignature(const struct FServerGetPlayerSegmentsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetPlayerProfile__DelegateSignature(const struct FServerGetPlayerProfileResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetPlayerCombinedInfo__DelegateSignature(const struct FServerGetPlayerCombinedInfoResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetLeaderboardForUserCharacters__DelegateSignature(const struct FServerGetLeaderboardForUsersCharactersResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetLeaderboardAroundUser__DelegateSignature(const struct FServerGetLeaderboardAroundUserResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetLeaderboardAroundCharacter__DelegateSignature(const struct FServerGetLeaderboardAroundCharacterResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetLeaderboard__DelegateSignature(const struct FServerGetLeaderboardResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetFriendsList__DelegateSignature(const struct FServerGetFriendsListResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetFriendLeaderboard__DelegateSignature(const struct FServerGetLeaderboardResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetContentDownloadUrl__DelegateSignature(const struct FServerGetContentDownloadUrlResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetCharacterStatistics__DelegateSignature(const struct FServerGetCharacterStatisticsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetCharacterReadOnlyData__DelegateSignature(const struct FServerGetCharacterDataResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetCharacterLeaderboard__DelegateSignature(const struct FServerGetCharacterLeaderboardResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetCharacterInventory__DelegateSignature(const struct FServerGetCharacterInventoryResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetCharacterInternalData__DelegateSignature(const struct FServerGetCharacterDataResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetCharacterData__DelegateSignature(const struct FServerGetCharacterDataResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetCatalogItems__DelegateSignature(const struct FServerGetCatalogItemsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetAllUsersCharacters__DelegateSignature(const struct FServerListUsersCharactersResult& Result, class UObject* CustomData);
	void DelegateOnSuccessGetAllSegments__DelegateSignature(const struct FServerGetAllSegmentsResult& Result, class UObject* CustomData);
	void DelegateOnSuccessExecuteCloudScript__DelegateSignature(const struct FServerExecuteCloudScriptResult& Result, class UObject* CustomData);
	void DelegateOnSuccessEvaluateRandomResultTable__DelegateSignature(const struct FServerEvaluateRandomResultTableResult& Result, class UObject* CustomData);
	void DelegateOnSuccessDeregisterGame__DelegateSignature(const struct FServerDeregisterGameResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessDeleteSharedGroup__DelegateSignature(const struct FServerEmptyResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessDeletePushNotificationTemplate__DelegateSignature(const struct FServerDeletePushNotificationTemplateResult& Result, class UObject* CustomData);
	void DelegateOnSuccessDeletePlayer__DelegateSignature(const struct FServerDeletePlayerResult& Result, class UObject* CustomData);
	void DelegateOnSuccessDeleteCharacterFromUser__DelegateSignature(const struct FServerDeleteCharacterFromUserResult& Result, class UObject* CustomData);
	void DelegateOnSuccessCreateSharedGroup__DelegateSignature(const struct FServerCreateSharedGroupResult& Result, class UObject* CustomData);
	void DelegateOnSuccessConsumeItem__DelegateSignature(const struct FServerConsumeItemResult& Result, class UObject* CustomData);
	void DelegateOnSuccessBanUsers__DelegateSignature(const struct FServerBanUsersResult& Result, class UObject* CustomData);
	void DelegateOnSuccessAwardSteamAchievement__DelegateSignature(const struct FServerAwardSteamAchievementResult& Result, class UObject* CustomData);
	void DelegateOnSuccessAuthenticateSessionTicket__DelegateSignature(const struct FServerAuthenticateSessionTicketResult& Result, class UObject* CustomData);
	void DelegateOnSuccessAddUserVirtualCurrency__DelegateSignature(const struct FServerModifyUserVirtualCurrencyResult& Result, class UObject* CustomData);
	void DelegateOnSuccessAddSharedGroupMembers__DelegateSignature(const struct FServerAddSharedGroupMembersResult& Result, class UObject* CustomData);
	void DelegateOnSuccessAddPlayerTag__DelegateSignature(const struct FServerAddPlayerTagResult& Result, class UObject* CustomData);
	void DelegateOnSuccessAddGenericID__DelegateSignature(const struct FServerEmptyResult& Result, class UObject* CustomData);
	void DelegateOnSuccessAddFriend__DelegateSignature(const struct FServerEmptyResponse& Result, class UObject* CustomData);
	void DelegateOnSuccessAddCharacterVirtualCurrency__DelegateSignature(const struct FServerModifyCharacterVirtualCurrencyResult& Result, class UObject* CustomData);
	void DelegateOnFailurePlayFabError__DelegateSignature(const struct FPlayFabError& Error, class UObject* CustomData);
	class UPlayFabServerAPI* CreateSharedGroup(const struct FServerCreateSharedGroupRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* ConsumeItem(const struct FServerConsumeItemRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* BanUsers(const struct FServerBanUsersRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* AwardSteamAchievement(const struct FServerAwardSteamAchievementRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* AuthenticateSessionTicket(const struct FServerAuthenticateSessionTicketRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* AddUserVirtualCurrency(const struct FServerAddUserVirtualCurrencyRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* AddSharedGroupMembers(const struct FServerAddSharedGroupMembersRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* AddPlayerTag(const struct FServerAddPlayerTagRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* AddGenericID(const struct FServerAddGenericIDRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* AddFriend(const struct FServerAddFriendRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
	class UPlayFabServerAPI* AddCharacterVirtualCurrency(const struct FServerAddCharacterVirtualCurrencyRequest& Request, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnFailure, class UObject* CustomData);
};

// 0x0 (0x28 - 0x28)
// Class PlayFab.PlayFabServerModelDecoder
class UPlayFabServerModelDecoder : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UPlayFabServerModelDecoder* GetDefaultObj();

	struct FServerWriteEventResponse DecodeWriteEventResponseResponse(class UPlayFabJsonObject* Response);
	struct FServerUpdateUserDataResult DecodeUpdateUserDataResultResponse(class UPlayFabJsonObject* Response);
	struct FServerUpdateSharedGroupDataResult DecodeUpdateSharedGroupDataResultResponse(class UPlayFabJsonObject* Response);
	struct FServerUpdatePlayerStatisticsResult DecodeUpdatePlayerStatisticsResultResponse(class UPlayFabJsonObject* Response);
	struct FServerUpdateCharacterStatisticsResult DecodeUpdateCharacterStatisticsResultResponse(class UPlayFabJsonObject* Response);
	struct FServerUpdateCharacterDataResult DecodeUpdateCharacterDataResultResponse(class UPlayFabJsonObject* Response);
	struct FServerUpdateBansResult DecodeUpdateBansResultResponse(class UPlayFabJsonObject* Response);
	struct FServerUnlockContainerItemResult DecodeUnlockContainerItemResultResponse(class UPlayFabJsonObject* Response);
	struct FServerUnlinkXboxAccountResult DecodeUnlinkXboxAccountResultResponse(class UPlayFabJsonObject* Response);
	struct FServerUnlinkSteamIdResult DecodeUnlinkSteamIdResultResponse(class UPlayFabJsonObject* Response);
	struct FServerUnlinkServerCustomIdResult DecodeUnlinkServerCustomIdResultResponse(class UPlayFabJsonObject* Response);
	struct FServerUnlinkPSNAccountResult DecodeUnlinkPSNAccountResultResponse(class UPlayFabJsonObject* Response);
	struct FServerUnlinkNintendoSwitchDeviceIdResult DecodeUnlinkNintendoSwitchDeviceIdResultResponse(class UPlayFabJsonObject* Response);
	struct FServerSetTitleDataResult DecodeSetTitleDataResultResponse(class UPlayFabJsonObject* Response);
	struct FServerSetPublisherDataResult DecodeSetPublisherDataResultResponse(class UPlayFabJsonObject* Response);
	struct FServerSetPlayerSecretResult DecodeSetPlayerSecretResultResponse(class UPlayFabJsonObject* Response);
	struct FServerSetGameServerInstanceTagsResult DecodeSetGameServerInstanceTagsResultResponse(class UPlayFabJsonObject* Response);
	struct FServerSetGameServerInstanceStateResult DecodeSetGameServerInstanceStateResultResponse(class UPlayFabJsonObject* Response);
	struct FServerSetGameServerInstanceDataResult DecodeSetGameServerInstanceDataResultResponse(class UPlayFabJsonObject* Response);
	struct FServerServerLoginResult DecodeServerLoginResultResponse(class UPlayFabJsonObject* Response);
	struct FServerSendPushNotificationResult DecodeSendPushNotificationResultResponse(class UPlayFabJsonObject* Response);
	struct FServerSendEmailFromTemplateResult DecodeSendEmailFromTemplateResultResponse(class UPlayFabJsonObject* Response);
	struct FServerSendCustomAccountRecoveryEmailResult DecodeSendCustomAccountRecoveryEmailResultResponse(class UPlayFabJsonObject* Response);
	struct FServerSavePushNotificationTemplateResult DecodeSavePushNotificationTemplateResultResponse(class UPlayFabJsonObject* Response);
	struct FServerRevokeInventoryResult DecodeRevokeInventoryResultResponse(class UPlayFabJsonObject* Response);
	struct FServerRevokeInventoryItemsResult DecodeRevokeInventoryItemsResultResponse(class UPlayFabJsonObject* Response);
	struct FServerRevokeBansResult DecodeRevokeBansResultResponse(class UPlayFabJsonObject* Response);
	struct FServerRevokeAllBansForUserResult DecodeRevokeAllBansForUserResultResponse(class UPlayFabJsonObject* Response);
	struct FServerReportPlayerServerResult DecodeReportPlayerServerResultResponse(class UPlayFabJsonObject* Response);
	struct FServerRemoveSharedGroupMembersResult DecodeRemoveSharedGroupMembersResultResponse(class UPlayFabJsonObject* Response);
	struct FServerRemovePlayerTagResult DecodeRemovePlayerTagResultResponse(class UPlayFabJsonObject* Response);
	struct FServerRegisterGameResponse DecodeRegisterGameResponseResponse(class UPlayFabJsonObject* Response);
	struct FServerRefreshGameServerInstanceHeartbeatResult DecodeRefreshGameServerInstanceHeartbeatResultResponse(class UPlayFabJsonObject* Response);
	struct FServerRedeemMatchmakerTicketResult DecodeRedeemMatchmakerTicketResultResponse(class UPlayFabJsonObject* Response);
	struct FServerRedeemCouponResult DecodeRedeemCouponResultResponse(class UPlayFabJsonObject* Response);
	struct FServerNotifyMatchmakerPlayerLeftResult DecodeNotifyMatchmakerPlayerLeftResultResponse(class UPlayFabJsonObject* Response);
	struct FServerMoveItemToUserFromCharacterResult DecodeMoveItemToUserFromCharacterResultResponse(class UPlayFabJsonObject* Response);
	struct FServerMoveItemToCharacterFromUserResult DecodeMoveItemToCharacterFromUserResultResponse(class UPlayFabJsonObject* Response);
	struct FServerMoveItemToCharacterFromCharacterResult DecodeMoveItemToCharacterFromCharacterResultResponse(class UPlayFabJsonObject* Response);
	struct FServerModifyUserVirtualCurrencyResult DecodeModifyUserVirtualCurrencyResultResponse(class UPlayFabJsonObject* Response);
	struct FServerModifyItemUsesResult DecodeModifyItemUsesResultResponse(class UPlayFabJsonObject* Response);
	struct FServerModifyCharacterVirtualCurrencyResult DecodeModifyCharacterVirtualCurrencyResultResponse(class UPlayFabJsonObject* Response);
	struct FServerListUsersCharactersResult DecodeListUsersCharactersResultResponse(class UPlayFabJsonObject* Response);
	struct FServerLinkXboxAccountResult DecodeLinkXboxAccountResultResponse(class UPlayFabJsonObject* Response);
	struct FServerLinkSteamIdResult DecodeLinkSteamIdResultResponse(class UPlayFabJsonObject* Response);
	struct FServerLinkServerCustomIdResult DecodeLinkServerCustomIdResultResponse(class UPlayFabJsonObject* Response);
	struct FServerLinkPSNAccountResult DecodeLinkPSNAccountResultResponse(class UPlayFabJsonObject* Response);
	struct FServerLinkNintendoSwitchDeviceIdResult DecodeLinkNintendoSwitchDeviceIdResultResponse(class UPlayFabJsonObject* Response);
	struct FServerGrantItemsToUsersResult DecodeGrantItemsToUsersResultResponse(class UPlayFabJsonObject* Response);
	struct FServerGrantItemsToUserResult DecodeGrantItemsToUserResultResponse(class UPlayFabJsonObject* Response);
	struct FServerGrantItemsToCharacterResult DecodeGrantItemsToCharacterResultResponse(class UPlayFabJsonObject* Response);
	struct FServerGrantCharacterToUserResult DecodeGrantCharacterToUserResultResponse(class UPlayFabJsonObject* Response);
	struct FServerGetUserInventoryResult DecodeGetUserInventoryResultResponse(class UPlayFabJsonObject* Response);
	struct FServerGetUserDataResult DecodeGetUserDataResultResponse(class UPlayFabJsonObject* Response);
	struct FServerGetUserBansResult DecodeGetUserBansResultResponse(class UPlayFabJsonObject* Response);
	struct FServerGetUserAccountInfoResult DecodeGetUserAccountInfoResultResponse(class UPlayFabJsonObject* Response);
	struct FServerGetTitleNewsResult DecodeGetTitleNewsResultResponse(class UPlayFabJsonObject* Response);
	struct FServerGetTitleDataResult DecodeGetTitleDataResultResponse(class UPlayFabJsonObject* Response);
	struct FServerGetTimeResult DecodeGetTimeResultResponse(class UPlayFabJsonObject* Response);
	struct FServerGetStoreItemsResult DecodeGetStoreItemsResultResponse(class UPlayFabJsonObject* Response);
	struct FServerGetSharedGroupDataResult DecodeGetSharedGroupDataResultResponse(class UPlayFabJsonObject* Response);
	struct FServerGetServerCustomIDsFromPlayFabIDsResult DecodeGetServerCustomIDsFromPlayFabIDsResultResponse(class UPlayFabJsonObject* Response);
	struct FServerGetRandomResultTablesResult DecodeGetRandomResultTablesResultResponse(class UPlayFabJsonObject* Response);
	struct FServerGetPublisherDataResult DecodeGetPublisherDataResultResponse(class UPlayFabJsonObject* Response);
	struct FServerGetPlayFabIDsFromXboxLiveIDsResult DecodeGetPlayFabIDsFromXboxLiveIDsResultResponse(class UPlayFabJsonObject* Response);
	struct FServerGetPlayFabIDsFromTwitchIDsResult DecodeGetPlayFabIDsFromTwitchIDsResultResponse(class UPlayFabJsonObject* Response);
	struct FServerGetPlayFabIDsFromSteamIDsResult DecodeGetPlayFabIDsFromSteamIDsResultResponse(class UPlayFabJsonObject* Response);
	struct FServerGetPlayFabIDsFromPSNAccountIDsResult DecodeGetPlayFabIDsFromPSNAccountIDsResultResponse(class UPlayFabJsonObject* Response);
	struct FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult DecodeGetPlayFabIDsFromNintendoSwitchDeviceIdsResultResponse(class UPlayFabJsonObject* Response);
	struct FServerGetPlayFabIDsFromNintendoServiceAccountIdsResult DecodeGetPlayFabIDsFromNintendoServiceAccountIdsResultResponse(class UPlayFabJsonObject* Response);
	struct FServerGetPlayFabIDsFromGenericIDsResult DecodeGetPlayFabIDsFromGenericIDsResultResponse(class UPlayFabJsonObject* Response);
	struct FServerGetPlayFabIDsFromFacebookInstantGamesIdsResult DecodeGetPlayFabIDsFromFacebookInstantGamesIdsResultResponse(class UPlayFabJsonObject* Response);
	struct FServerGetPlayFabIDsFromFacebookIDsResult DecodeGetPlayFabIDsFromFacebookIDsResultResponse(class UPlayFabJsonObject* Response);
	struct FServerGetPlayerTagsResult DecodeGetPlayerTagsResultResponse(class UPlayFabJsonObject* Response);
	struct FServerGetPlayerStatisticVersionsResult DecodeGetPlayerStatisticVersionsResultResponse(class UPlayFabJsonObject* Response);
	struct FServerGetPlayerStatisticsResult DecodeGetPlayerStatisticsResultResponse(class UPlayFabJsonObject* Response);
	struct FServerGetPlayersInSegmentResult DecodeGetPlayersInSegmentResultResponse(class UPlayFabJsonObject* Response);
	struct FServerGetPlayerSegmentsResult DecodeGetPlayerSegmentsResultResponse(class UPlayFabJsonObject* Response);
	struct FServerGetPlayerProfileResult DecodeGetPlayerProfileResultResponse(class UPlayFabJsonObject* Response);
	struct FServerGetPlayerCombinedInfoResult DecodeGetPlayerCombinedInfoResultResponse(class UPlayFabJsonObject* Response);
	struct FServerGetLeaderboardResult DecodeGetLeaderboardResultResponse(class UPlayFabJsonObject* Response);
	struct FServerGetLeaderboardForUsersCharactersResult DecodeGetLeaderboardForUsersCharactersResultResponse(class UPlayFabJsonObject* Response);
	struct FServerGetLeaderboardAroundUserResult DecodeGetLeaderboardAroundUserResultResponse(class UPlayFabJsonObject* Response);
	struct FServerGetLeaderboardAroundCharacterResult DecodeGetLeaderboardAroundCharacterResultResponse(class UPlayFabJsonObject* Response);
	struct FServerGetFriendsListResult DecodeGetFriendsListResultResponse(class UPlayFabJsonObject* Response);
	struct FServerGetContentDownloadUrlResult DecodeGetContentDownloadUrlResultResponse(class UPlayFabJsonObject* Response);
	struct FServerGetCharacterStatisticsResult DecodeGetCharacterStatisticsResultResponse(class UPlayFabJsonObject* Response);
	struct FServerGetCharacterLeaderboardResult DecodeGetCharacterLeaderboardResultResponse(class UPlayFabJsonObject* Response);
	struct FServerGetCharacterInventoryResult DecodeGetCharacterInventoryResultResponse(class UPlayFabJsonObject* Response);
	struct FServerGetCharacterDataResult DecodeGetCharacterDataResultResponse(class UPlayFabJsonObject* Response);
	struct FServerGetCatalogItemsResult DecodeGetCatalogItemsResultResponse(class UPlayFabJsonObject* Response);
	struct FServerGetAllSegmentsResult DecodeGetAllSegmentsResultResponse(class UPlayFabJsonObject* Response);
	struct FServerExecuteCloudScriptResult DecodeExecuteCloudScriptResultResponse(class UPlayFabJsonObject* Response);
	struct FServerEvaluateRandomResultTableResult DecodeEvaluateRandomResultTableResultResponse(class UPlayFabJsonObject* Response);
	struct FServerEmptyResult DecodeEmptyResultResponse(class UPlayFabJsonObject* Response);
	struct FServerEmptyResponse DecodeEmptyResponseResponse(class UPlayFabJsonObject* Response);
	struct FServerDeregisterGameResponse DecodeDeregisterGameResponseResponse(class UPlayFabJsonObject* Response);
	struct FServerDeletePushNotificationTemplateResult DecodeDeletePushNotificationTemplateResultResponse(class UPlayFabJsonObject* Response);
	struct FServerDeletePlayerResult DecodeDeletePlayerResultResponse(class UPlayFabJsonObject* Response);
	struct FServerDeleteCharacterFromUserResult DecodeDeleteCharacterFromUserResultResponse(class UPlayFabJsonObject* Response);
	struct FServerCreateSharedGroupResult DecodeCreateSharedGroupResultResponse(class UPlayFabJsonObject* Response);
	struct FServerConsumeItemResult DecodeConsumeItemResultResponse(class UPlayFabJsonObject* Response);
	struct FServerBanUsersResult DecodeBanUsersResultResponse(class UPlayFabJsonObject* Response);
	struct FServerAwardSteamAchievementResult DecodeAwardSteamAchievementResultResponse(class UPlayFabJsonObject* Response);
	struct FServerAuthenticateSessionTicketResult DecodeAuthenticateSessionTicketResultResponse(class UPlayFabJsonObject* Response);
	struct FServerAddSharedGroupMembersResult DecodeAddSharedGroupMembersResultResponse(class UPlayFabJsonObject* Response);
	struct FServerAddPlayerTagResult DecodeAddPlayerTagResultResponse(class UPlayFabJsonObject* Response);
};

// 0x0 (0x28 - 0x28)
// Class PlayFab.PlayFabUtilities
class UPlayFabUtilities : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UPlayFabUtilities* GetDefaultObj();

	void SetPlayFabSettings(const class FString& GameTitleId, const class FString& PlayFabSecretApiKey, const class FString& ProductionUrl, const class FString& PhotonRealtimeAppId, const class FString& PhotonTurnbasedAppId, const class FString& PhotonChatAppId);
	class FString GetPhotonAppId(bool Realtime, bool Chat, bool Turnbased);
	class FString GetErrorText(int32 Code);
};

}


