#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x5A0 - 0x590)
// WidgetBlueprintGeneratedClass EulaWidget.EulaWidget_C
class UEulaWidget_C : public UFortEulaWidget
{
public:
	FMulticastInlineDelegateProperty_            OnEulaResponse;                                    // 0x590(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EulaWidget_C");
		return Clss;
	}

	void OnEulaResponse__DelegateSignature(bool Accepted);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
