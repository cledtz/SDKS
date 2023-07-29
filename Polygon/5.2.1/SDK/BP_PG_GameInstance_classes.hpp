#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x1D8 - 0x1D0)
// BlueprintGeneratedClass BP_PG_GameInstance.BP_PG_GameInstance_C
class UBP_PG_GameInstance_C : public UPG_GameInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_PG_GameInstance_C");
		return Clss;
	}

	void ReceiveInit();
	void ExecuteUbergraph_BP_PG_GameInstance(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
