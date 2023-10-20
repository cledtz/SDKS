#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x38 - 0x28)
// Class VaRest.VaRestJsonObject
class UVaRestJsonObject : public UObject
{
public:
	uint8                                        Pad_F7[0x10];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UVaRestJsonObject* GetDefaultObj();

	bool WriteToFilePath(const class FString& Path, bool bIsRelativeToProjectDir);
	void SetStringField(const class FString& FieldName, const class FString& StringValue);
	void SetStringArrayField(const class FString& FieldName, TArray<class FString>& StringArray);
	void SetObjectField(const class FString& FieldName, class UVaRestJsonObject* JsonObject);
	void SetObjectArrayField(const class FString& FieldName, TArray<class UVaRestJsonObject*>& ObjectArray);
	void SetNumberFieldDouble(const class FString& FieldName, double Number);
	void SetNumberField(const class FString& FieldName, float Number);
	void SetNumberArrayFieldDouble(const class FString& FieldName, TArray<double>& NumberArray);
	void SetNumberArrayField(const class FString& FieldName, TArray<float>& NumberArray);
	void SetMapFields_uint8(TMap<class FString, uint8>& Fields);
	void SetMapFields_string(TMap<class FString, class FString>& Fields);
	void SetMapFields_int64(TMap<class FString, int64>& Fields);
	void SetMapFields_int32(TMap<class FString, int32>& Fields);
	void SetMapFields_bool(TMap<class FString, bool>& Fields);
	void SetIntegerField(const class FString& FieldName, int32 Number);
	void SetInt64Field(const class FString& FieldName, int64 Number);
	void SetField(const class FString& FieldName, class UVaRestJsonValue* JsonValue);
	void SetBoolField(const class FString& FieldName, bool InValue);
	void SetBoolArrayField(const class FString& FieldName, TArray<bool>& BoolArray);
	void SetArrayField(const class FString& FieldName, TArray<class UVaRestJsonValue*>& InArray);
	void Reset();
	void RemoveField(const class FString& FieldName);
	void MergeJsonObject(class UVaRestJsonObject* InJsonObject, bool Overwrite);
	bool HasField(const class FString& FieldName);
	class FString GetStringField(const class FString& FieldName);
	TArray<class FString> GetStringArrayField(const class FString& FieldName);
	class UVaRestJsonObject* GetObjectField(const class FString& FieldName);
	TArray<class UVaRestJsonObject*> GetObjectArrayField(const class FString& FieldName);
	float GetNumberField(const class FString& FieldName);
	TArray<float> GetNumberArrayField(const class FString& FieldName);
	int32 GetIntegerField(const class FString& FieldName);
	TArray<int32> GetIntegerArrayField(const class FString& FieldName);
	int64 GetInt64Field(const class FString& FieldName);
	class FString GetFieldTypeString(const class FString& FieldName);
	TArray<class FString> GetFieldNames();
	class UVaRestJsonValue* GetField(const class FString& FieldName);
	bool GetBoolField(const class FString& FieldName);
	TArray<bool> GetBoolArrayField(const class FString& FieldName);
	TArray<class UVaRestJsonValue*> GetArrayField(const class FString& FieldName);
	class FString EncodeJsonToSingleString();
	class FString EncodeJson();
	bool DecodeJson(const class FString& JsonString, bool bUseIncrementalParser);
};

// 0x10 (0x38 - 0x28)
// Class VaRest.VaRestJsonValue
class UVaRestJsonValue : public UObject
{
public:
	uint8                                        Pad_127[0x10];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UVaRestJsonValue* GetDefaultObj();

	void Reset();
	bool IsNull();
	class FString GetTypeString();
	enum class EVaJson GetType();
	class FString AsString();
	class UVaRestJsonObject* AsObject();
	float AsNumber();
	int64 AsInt64();
	int32 AsInt32();
	bool AsBool();
	TArray<class UVaRestJsonValue*> AsArray();
};

// 0x0 (0x28 - 0x28)
// Class VaRest.VaRestLibrary
class UVaRestLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UVaRestLibrary* GetDefaultObj();

	class FString StringToSha1(const class FString& StringToHash);
	class FString StringToMd5(const class FString& StringToHash);
	class FString PercentEncode(const class FString& Source);
	enum class EVaRestHttpStatusCode HTTPStatusIntToEnum(int32 StatusCode);
	struct FVaRestURL GetWorldURL(class UObject* WorldContextObject);
	class FString GetVaRestVersion();
	class UVaRestSettings* GetVaRestSettings();
	bool Base64EncodeData(TArray<uint8>& Data, class FString* Dest);
	class FString Base64Encode(const class FString& Source);
	bool Base64DecodeData(const class FString& Source, TArray<uint8>* Dest);
	bool Base64Decode(const class FString& Source, class FString* Dest);
};

// 0x1B8 (0x1E0 - 0x28)
// Class VaRest.VaRestRequestJSON
class UVaRestRequestJSON : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnRequestComplete;                                 // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnRequestFail;                                     // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BA[0x40];                                     // Fixing Size After Last Property 
	int32                                        ResponseSize;                                      // 0x88(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BC[0x4];                                      // Fixing Size After Last Property 
	class FString                                ResponseContent;                                   // 0x90(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsValidJsonResponse;                              // 0xA0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BD[0xF];                                      // Fixing Size After Last Property 
	class UVaRestJsonObject*                     RequestJsonObj;                                    // 0xB0(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1BE[0x48];                                     // Fixing Size After Last Property 
	class UVaRestJsonObject*                     ResponseJsonObj;                                   // 0x100(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UVaRestJsonValue*                      ResponseJsonValue;                                 // 0x108(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1BF[0xD0];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UVaRestRequestJSON* GetDefaultObj();

	void SetVerb(enum class EVaRestRequestVerb Verb);
	void SetURL(const class FString& URL);
	void SetStringRequestContent(const class FString& Content);
	void SetResponseObject(class UVaRestJsonObject* JsonObject);
	void SetRequestObject(class UVaRestJsonObject* JsonObject);
	void SetHeader(const class FString& HeaderName, const class FString& HeaderValue);
	void SetCustomVerb(const class FString& Verb);
	void SetContentType(enum class EVaRestRequestContentType ContentType);
	void SetBinaryRequestContent(TArray<uint8>& Content);
	void SetBinaryContentType(const class FString& ContentType);
	void ResetResponseData();
	void ResetRequestData();
	void ResetData();
	int32 RemoveTag(class FName Tag);
	void ProcessURL(const class FString& URL);
	bool HasTag(class FName Tag);
	enum class EVaRestRequestVerb GetVerb();
	class FString GetURL();
	enum class EVaRestRequestStatus GetStatus();
	class UVaRestJsonValue* GetResponseValue();
	class UVaRestJsonObject* GetResponseObject();
	class FString GetResponseHeader(const class FString& HeaderName);
	int32 GetResponseContentLength();
	class FString GetResponseContentAsString(bool bCacheResponseContent);
	TArray<uint8> GetResponseContent();
	int32 GetResponseCode();
	class UVaRestJsonObject* GetRequestObject();
	TArray<class FString> GetAllResponseHeaders();
	void ExecuteProcessRequest();
	void Cancel();
	void ApplyURL(const class FString& URL, class UVaRestJsonObject** Result, class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo);
	void AddTag(class FName Tag);
};

// 0x8 (0x30 - 0x28)
// Class VaRest.VaRestSettings
class UVaRestSettings : public UObject
{
public:
	bool                                         bExtendedLog;                                      // 0x28(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseChunkedParser;                                 // 0x29(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CB[0x6];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UVaRestSettings* GetDefaultObj();

};

// 0x50 (0x80 - 0x30)
// Class VaRest.VaRestSubsystem
class UVaRestSubsystem : public UEngineSubsystem
{
public:
	TMap<class UVaRestRequestJSON*, struct FVaRestCallResponse> RequestMap;                                        // 0x30(0x50)(ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UVaRestSubsystem* GetDefaultObj();

	class UVaRestJsonObject* StaticConstructVaRestJsonObject();
	class UVaRestJsonObject* LoadJsonFromFile(const class FString& Path, bool bIsRelativeToContentDir);
	class UVaRestJsonValue* DecodeJsonValue(const class FString& JsonString);
	class UVaRestJsonObject* DecodeJsonObject(const class FString& JsonString);
	class UVaRestRequestJSON* ConstructVaRestRequestExt(enum class EVaRestRequestVerb Verb, enum class EVaRestRequestContentType ContentType);
	class UVaRestRequestJSON* ConstructVaRestRequest();
	class UVaRestJsonObject* ConstructVaRestJsonObject();
	class UVaRestJsonValue* ConstructJsonValueString(const class FString& StringValue);
	class UVaRestJsonValue* ConstructJsonValueObject(class UVaRestJsonObject* JsonObject);
	class UVaRestJsonValue* ConstructJsonValueNumber(float Number);
	class UVaRestJsonValue* ConstructJsonValueBool(bool InValue);
	class UVaRestJsonValue* ConstructJsonValueArray(TArray<class UVaRestJsonValue*>& InArray);
	void CallURL(const class FString& URL, enum class EVaRestRequestVerb Verb, enum class EVaRestRequestContentType ContentType, class UVaRestJsonObject* VaRestJson, FDelegateProperty_& Callback);
};

}


