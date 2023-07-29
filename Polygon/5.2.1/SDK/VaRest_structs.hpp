#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EVaJson : uint8
{
	None                           = 0,
	Null                           = 1,
	String                         = 2,
	Number                         = 3,
	Boolean                        = 4,
	Array                          = 5,
	Object                         = 6,
	EVaJson_MAX                    = 7,
};

enum class EVaRestRequestVerb : uint8
{
	GET                            = 0,
	POST                           = 1,
	PUT                            = 2,
	DEL                            = 3,
	CUSTOM                         = 4,
	EVaRestRequestVerb_MAX         = 5,
};

enum class EVaRestRequestContentType : uint8
{
	x_www_form_urlencoded_url      = 0,
	x_www_form_urlencoded_body     = 1,
	json                           = 2,
	binary                         = 3,
	EVaRestRequestContentType_MAX  = 4,
};

enum class EVaRestRequestStatus : uint8
{
	NotStarted                     = 0,
	Processing                     = 1,
	Failed                         = 2,
	Failed_ConnectionError         = 3,
	Succeeded                      = 4,
	EVaRestRequestStatus_MAX       = 5,
};

enum class EVaRestHttpStatusCode : uint8
{
	Unknown                        = 0,
	Continue                       = 100,
	SwitchProtocol                 = 101,
	Ok                             = 200,
	Created                        = 201,
	Accepted                       = 202,
	Partial                        = 203,
	NoContent                      = 204,
	ResetContent                   = 205,
	PartialContent                 = 206,
	Ambiguous                      = 300,
	Moved                          = 301,
	Redirect                       = 302,
	RedirectMethod                 = 303,
	NotModified                    = 304,
	UseProxy                       = 305,
	RedirectKeepVerb               = 307,
	BadRequest                     = 400,
	Denied                         = 401,
	PaymentReq                     = 402,
	Forbidden                      = 403,
	NotFound                       = 404,
	BadMethod                      = 405,
	NoneAcceptable                 = 406,
	ProxyAuthReq                   = 407,
	RequestTimeout                 = 408,
	Conflict                       = 409,
	Gone                           = 410,
	LengthRequired                 = 411,
	PrecondFailed                  = 412,
	RequestTooLarge                = 413,
	UriTooLong                     = 414,
	UnsupportedMedia               = 415,
	TooManyRequests                = 429,
	RetryWith                      = 449,
	ServerError                    = 500,
	NotSupported                   = 501,
	BadGateway                     = 502,
	ServiceUnavail                 = 503,
	GatewayTimeout                 = 504,
	VersionNotSup                  = 505,
	EVaRestHttpStatusCode_MAX      = 506,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x28 - 0x0)
// ScriptStruct VaRest.VaRestCallResponse
struct FVaRestCallResponse
{
public:
	class UVaRestRequestJSON*                    Request;                                           // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Callback;                                          // 0x8(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BE[0x10];                                     // Fixing Size Of Struct
};

// 0x68 (0x68 - 0x0)
// ScriptStruct VaRest.VaRestURL
struct FVaRestURL
{
public:
	class FString                                Protocol;                                          // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Host;                                              // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Port;                                              // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Valid;                                             // 0x24(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Map;                                               // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RedirectURL;                                       // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        Op;                                                // 0x48(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	class FString                                Portal;                                            // 0x58(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
