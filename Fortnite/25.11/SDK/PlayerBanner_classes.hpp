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

// 0x69 (0x371 - 0x308)
// WidgetBlueprintGeneratedClass PlayerBanner.PlayerBanner_C
class UPlayerBanner_C : public UFortAccountWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x308(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                BannerImage;                                       // 0x310(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLoadGuard*                      LoadGuard;                                         // 0x318(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SurroundImage;                                     // 0x320(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLoadGuard*                      SurroundLoadGuard;                                 // 0x328(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bUseLargeTexture;                                  // 0x330(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_96D5[0x7];                                     // Fixing Size After Last Property..
	struct FUniqueNetIdRepl                      OwnerNetId;                                        // 0x338(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class FName                                  CurrentBannerColorId;                              // 0x368(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CurrentBannerIconId;                               // 0x36C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SurroundEnabled;                                   // 0x370(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayerBanner_C");
		return Clss;
	}

	void UnbindDelegates(class UFortMcpContext* CallFunc_GetContext_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void SetupSurround(const struct FMargin& K2Node_MakeStruct_Margin, class ULoadGuardSlot* K2Node_DynamicCast_AsLoad_Guard_Slot, bool K2Node_DynamicCast_bSuccess);
	void SetBannerIconAndColorFromProfile(class UFortMcpContext* CallFunc_GetContext_ReturnValue, const struct FFortAthenaLoadout& CallFunc_GetLoadoutForPlayer_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue_1);
	void SetBannerIconAndColor(class FName IconId, class FName ColorId);
	void ToggleBannerMask(bool Enable, bool Temp_bool_Variable, double Temp_real_Variable, double Temp_real_Variable_1, class UMaterialInstanceDynamic* CallFunc_GetBannerMID_BannerMID, double K2Node_Select_Default, float CallFunc_SetScalarParameterValue_Value_ImplicitCast);
	void RefreshSurround(int32 Level, const struct FAthenaSeasonBannerLevel& CallFunc_GetSeasonBannerInfo_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_IsAssetNull_ReturnValue, class UMaterialInterface* K2Node_DynamicCast_AsMaterial_Interface, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void OnSurroundIconLoaded(class UObject* LoadedObject, class UTexture* K2Node_DynamicCast_AsTexture, bool K2Node_DynamicCast_bSuccess, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void EnableSurround();
	void ClearBannerState();
	void OnBannerIconLoaded(class UObject* LoadedObject, class UMaterialInstanceDynamic* CallFunc_GetBannerMID_BannerMID, class UTexture* K2Node_DynamicCast_AsTexture, bool K2Node_DynamicCast_bSuccess);
	void GetBannerMID(class UMaterialInstanceDynamic** BannerMID, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void SetBannerOwner(const struct FUniqueNetIdRepl& OwnerId, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortMcpContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_UniqueNetIdRepl_ReturnValue);
	void SetBannerColorId(class FName InBannerColorId, class UMaterialInstanceDynamic* CallFunc_GetBannerMID_BannerMID, bool CallFunc_NotEqual_NameName_ReturnValue, const struct FHomebaseBannerColor& CallFunc_GetBannerColorFromRowName_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetBannerMID_BannerMID_1, const struct FLinearColor& CallFunc_GetSecondaryColor_ReturnValue, const struct FLinearColor& CallFunc_GetPrimaryColor_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_1);
	void SetBannerIconId(class FName InBannerIconId, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Option_B___If_false__use_Option_A_Variable, bool CallFunc_NotEqual_NameName_ReturnValue, bool Temp_bool_Variable, TSoftObjectPtr<class UTexture2D> CallFunc_GetBannerSmallIconAssetFromRowName_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetBannerLargeIconAssetFromRowName_ReturnValue, TSoftObjectPtr<class UObject> K2Node_Select_Default, class UMaterialInstanceDynamic* CallFunc_GetBannerMID_BannerMID, bool CallFunc_NotEqual_NameName_ReturnValue_1);
	void SetBannerImage(const struct FFortHomeBaseInfo& Image_info, bool* Success, class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue_1);
	void Account_Info_Changed(const struct FFortPublicAccountInfo& NewInfo);
	void Destruct();
	void ExecuteUbergraph_PlayerBanner(int32 EntryPoint, const struct FFortPublicAccountInfo& K2Node_CustomEvent_NewInfo);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
