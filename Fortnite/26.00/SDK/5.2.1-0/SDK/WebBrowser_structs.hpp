#pragma once

// Dumped with Dumper-7!


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
	uint8                                        Pad_2748[0x20];                                    // Fixing Size Of Struct
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


