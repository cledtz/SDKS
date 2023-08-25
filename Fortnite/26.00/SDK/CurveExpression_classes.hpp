#pragma once

// Dumped with Dumper-7!


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
	uint8                                        Pad_4D41[0x30];                                    // Fixing Size After Last Property 
	TArray<class FName>                          NamedConstants;                                    // 0x60(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4D42[0xB8];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UCurveExpressionsDataAsset* GetDefaultObj();

};

}


