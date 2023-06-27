#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct WebBrowser.WebJSCallbackBase
struct FWebJSCallbackBase
{
public:
	uint8                                        Pad_8868[0x20];                                    // Fixing Size Of Struct..
};

// 0x0 (0x20 - 0x20)
// ScriptStruct WebBrowser.WebJSFunction
struct FWebJSFunction : public FWebJSCallbackBase
{
public:
};

// 0x0 (0x20 - 0x20)
// ScriptStruct WebBrowser.WebJSResponse
struct FWebJSResponse : public FWebJSCallbackBase
{
public:
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
