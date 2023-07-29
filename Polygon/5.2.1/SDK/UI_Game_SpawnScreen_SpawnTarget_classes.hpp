#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x298 - 0x280)
// WidgetBlueprintGeneratedClass UI_Game_SpawnScreen_SpawnTarget.UI_Game_SpawnScreen_SpawnTarget_C
class UUI_Game_SpawnScreen_SpawnTarget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TScriptInterface<class UBI_SpawnTarget_C>    SpawnTargetMarker;                                 // 0x288(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_Game_SpawnScreen_SpawnTarget_C");
		return Clss;
	}

	void SetNewSpawnTarget(TScriptInterface<class UBI_SpawnTarget_C> NewSpawnTarget);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_UI_Game_SpawnScreen_SpawnTarget(int32 EntryPoint, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, TScriptInterface<class UBI_SpawnTarget_C> K2Node_CustomEvent_NewSpawnTarget, bool CallFunc_IsValid_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, double CallFunc_GetWorldDeltaSeconds_ReturnValue, class UUserWidget* K2Node_DynamicCast_AsUser_Widget, bool K2Node_DynamicCast_bSuccess, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, const struct FVector2D& CallFunc_Vector2DInterpTo_ReturnValue, float CallFunc_Vector2DInterpTo_DeltaTime_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
