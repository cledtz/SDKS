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

// 0x8 (0x3F8 - 0x3F0)
// BlueprintGeneratedClass GCN_Athena_LowGravity_ZipLine.GCN_Athena_LowGravity_ZipLine_C
class AGCN_Athena_LowGravity_ZipLine_C : public AGCN_Athena_LowGravity_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCN_Athena_LowGravity_ZipLine_C");
		return Clss;
	}

	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_GCN_Athena_LowGravity_ZipLine(int32 EntryPoint, float K2Node_Event_DeltaSeconds);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
