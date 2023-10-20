#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class ExtendedMathUtility.ExtendedMathUtility
class UExtendedMathUtility : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UExtendedMathUtility* GetDefaultObj();

	struct FVector VInterpToExtended(const struct FVector& Current, const struct FVector& Target, float DeltaTime, float InterpSpeed_X, float InterpSpeed_Y, float InterpSpeed_Z);
	struct FRotator RInterpToExtended(const struct FRotator& Current, const struct FRotator& Target, float DeltaTime, float InterpSpeed_Pitch, float InterpSpeed_Yaw, float InterpSpeed_Roll);
	bool IsNegative_Int(int32 IntToCheck);
	bool IsNegative_Float(float FloatToCheck);
};

}


