#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x40 - 0x28)
// Class MetasoundFrontend.MetasoundParameterPack
class UMetasoundParameterPack : public UObject
{
public:
	uint8                                        Pad_1E51[0x18];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MetasoundParameterPack");
		return Clss;
	}

	enum class ESetParamResult SetTrigger(class FName ParameterName, bool OnlyIfExists);
	enum class ESetParamResult SetString(class FName ParameterName, const class FString& InValue, bool OnlyIfExists);
	enum class ESetParamResult SetInt(class FName ParameterName, int32 InValue, bool OnlyIfExists);
	enum class ESetParamResult SetFloat(class FName ParameterName, float InValue, bool OnlyIfExists);
	enum class ESetParamResult SetBool(class FName ParameterName, bool InValue, bool OnlyIfExists);
	class UMetasoundParameterPack* MakeMetasoundParameterPack();
	bool HasTrigger(class FName ParameterName);
	bool HasString(class FName ParameterName);
	bool HasInt(class FName ParameterName);
	bool HasFloat(class FName ParameterName);
	bool HasBool(class FName ParameterName);
	bool GetTrigger(class FName ParameterName, enum class ESetParamResult* Result);
	class FString GetString(class FName ParameterName, enum class ESetParamResult* Result);
	int32 GetInt(class FName ParameterName, enum class ESetParamResult* Result);
	float GetFloat(class FName ParameterName, enum class ESetParamResult* Result);
	bool GetBool(class FName ParameterName, enum class ESetParamResult* Result);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
