#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF8 (0x128 - 0x30)
// Class CurveExpression.CurveExpressionsDataAsset
class UCurveExpressionsDataAsset : public UDataAsset
{
public:
	uint8                                        Pad_57E[0x30];                                     // Fixing Size After Last Property
	TArray<class FName>                          NamedConstants;                                    // 0x60(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_57F[0xB8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CurveExpressionsDataAsset");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
