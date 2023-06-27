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

// 0x120 (0x3F0 - 0x2D0)
// WidgetBlueprintGeneratedClass ConvertedMarkerInfo.ConvertedMarkerInfo_C
class UConvertedMarkerInfo_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_Avatar;                                      // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Command;                                     // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonVisibilitySwitcher*             ImageSwitcher;                                     // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SquadMarker;                                       // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                          DBNOPulseTimer;                                    // 0x2F8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 RelevantPlaylistTags;                              // 0x300(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         bIsTalking;                                        // 0x320(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bShowBackgroundOverridden;                         // 0x321(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bEnemyVersion;                                     // 0x322(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_799B[0x5];                                     // Fixing Size After Last Property..
	TSoftObjectPtr<class UTexture2D>             Icon_Move;                                         // 0x328(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             Icon_Hold;                                         // 0x350(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             Icon_BackToMe;                                     // 0x378(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             Icon_Revive;                                       // 0x3A0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             Icon_Attack;                                       // 0x3C8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ConvertedMarkerInfo_C");
		return Clss;
	}

	void SetBackgroundVisibility(bool bOverride, bool bBackgroundVisible, bool bLocal_BackgroundVisible, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
	void OnLoaded_68559753464A154900ECA9BC6BB940C0(class UObject* Loaded);
	void OnLoaded_25BCEE7642585A8BD6CE1CAFC70FEAF3(class UObject* Loaded);
	void OverrideShowBackground(bool bShowBackground);
	void PreConstruct(bool IsDesignTime);
	void InitPlayerIconState(class AFortPlayerStateAthena* PSA);
	void UpdateCommandIcon(enum class EPingCommandType PingCommand, const struct FLinearColor& Color);
	void InitNPCCommandIcon(const struct FLinearColor& Color);
	void ExecuteUbergraph_ConvertedMarkerInfo(int32 EntryPoint, class UObject* Temp_object_Variable, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, enum class EPingCommandType Temp_byte_Variable, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_1, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_2, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_3, bool K2Node_CustomEvent_bShowBackground, class UObject* K2Node_CustomEvent_Loaded, bool K2Node_Event_IsDesignTime, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerStateAthena* K2Node_CustomEvent_PSA, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess_1, TSoftObjectPtr<class UTexture2D> CallFunc_GetSocialAvatarBrush_ReturnValue, const struct FLinearColor& CallFunc_GetPinColor_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UObject* Temp_object_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_1, bool K2Node_DynamicCast_bSuccess_2, enum class EPingCommandType K2Node_CustomEvent_PingCommand, const struct FLinearColor& K2Node_CustomEvent_Color_1, bool K2Node_SwitchEnum_CmpSuccess, TSoftObjectPtr<class UTexture2D> K2Node_Select_Default, const struct FLinearColor& K2Node_CustomEvent_Color, class UObject* K2Node_CustomEvent_Loaded_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
