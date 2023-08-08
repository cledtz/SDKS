#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x3C0 - 0x3B8)
// WidgetBlueprintGeneratedClass WBP_Mobile_Augment_Selection_Proxy.WBP_Mobile_Augment_Selection_Proxy_C
class UWBP_Mobile_Augment_Selection_Proxy_C : public UFortMobileHUDElementProxy
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WBP_Mobile_Augment_Selection_Proxy_C");
		return Clss;
	}

	void ExecuteUbergraph_WBP_Mobile_Augment_Selection_Proxy(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
