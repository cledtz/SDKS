#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

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

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ExtendedMathUtility");
		return Clss;
	}

	struct FVector VInterpToExtended(const struct FVector& Current, const struct FVector& Target, float DeltaTime, float InterpSpeed_X, float InterpSpeed_Y, float InterpSpeed_Z);
	struct FRotator RInterpToExtended(const struct FRotator& Current, const struct FRotator& Target, float DeltaTime, float InterpSpeed_Pitch, float InterpSpeed_Yaw, float InterpSpeed_Roll);
	bool IsNegative_Int(int32 IntToCheck);
	bool IsNegative_Float(float FloatToCheck);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
