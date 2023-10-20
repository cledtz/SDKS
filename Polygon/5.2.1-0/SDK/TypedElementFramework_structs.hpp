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

// 0x8 (0x8 - 0x0)
// ScriptStruct TypedElementFramework.ScriptTypedElementHandle
struct FScriptTypedElementHandle
{
public:
	uint8                                        Pad_211B[0x8];                                     // Fixing Size Of Struct
};

// 0x1 (0x1 - 0x0)
// ScriptStruct TypedElementFramework.TypedElementDataStorageColumn
struct FTypedElementDataStorageColumn
{
public:
	uint8                                        Pad_211C[0x1];                                     // Fixing Size Of Struct
};

// 0x1 (0x1 - 0x0)
// ScriptStruct TypedElementFramework.TypedElementDataStorageTag
struct FTypedElementDataStorageTag
{
public:
	uint8                                        Pad_211E[0x1];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// ScriptStruct TypedElementFramework.TypedElementWidgetConstructor
struct FTypedElementWidgetConstructor
{
public:
	uint8                                        Pad_211F[0x8];                                     // Fixing Size Of Struct
};

// 0xF (0x10 - 0x1)
// ScriptStruct TypedElementFramework.TypedElementLabelColumn
struct FTypedElementLabelColumn : public FTypedElementDataStorageColumn
{
public:
	uint8                                        Pad_2120[0xF];                                     // Fixing Size Of Struct
};

// 0x7 (0x8 - 0x1)
// ScriptStruct TypedElementFramework.TypedElementLabelHashColumn
struct FTypedElementLabelHashColumn : public FTypedElementDataStorageColumn
{
public:
	uint8                                        Pad_2121[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// ScriptStruct TypedElementFramework.ScriptTypedElementListProxy
struct FScriptTypedElementListProxy
{
public:
	uint8                                        Pad_2122[0x10];                                    // Fixing Size Of Struct
};

// 0x0 (0x1 - 0x1)
// ScriptStruct TypedElementFramework.TypedElementSyncBackToWorldTag
struct FTypedElementSyncBackToWorldTag : public FTypedElementDataStorageTag
{
public:
};

// 0xF (0x10 - 0x1)
// ScriptStruct TypedElementFramework.TypedElementPackagePathColumn
struct FTypedElementPackagePathColumn : public FTypedElementDataStorageColumn
{
public:
	uint8                                        Pad_2123[0xF];                                     // Fixing Size Of Struct
};

// 0xB (0xC - 0x1)
// ScriptStruct TypedElementFramework.TypedElementPackageLoadedPathColumn
struct FTypedElementPackageLoadedPathColumn : public FTypedElementDataStorageColumn
{
public:
	uint8                                        Pad_2124[0xB];                                     // Fixing Size Of Struct
};

// 0xF (0x10 - 0x1)
// ScriptStruct TypedElementFramework.TypedElementSlateWidgetReferenceColumn
struct FTypedElementSlateWidgetReferenceColumn : public FTypedElementDataStorageColumn
{
public:
	uint8                                        Pad_2126[0xF];                                     // Fixing Size Of Struct
};

// 0x0 (0x1 - 0x1)
// ScriptStruct TypedElementFramework.TypedElementSlateWidgetReferenceDeletesRowTag
struct FTypedElementSlateWidgetReferenceDeletesRowTag : public FTypedElementDataStorageTag
{
public:
};

// 0x5F (0x60 - 0x1)
// ScriptStruct TypedElementFramework.TypedElementLocalTransformColumn
struct FTypedElementLocalTransformColumn : public FTypedElementDataStorageColumn
{
public:
	uint8                                        Pad_2127[0x5F];                                    // Fixing Size Of Struct
};

// 0x3 (0x4 - 0x1)
// ScriptStruct TypedElementFramework.TypedElementU32IntValueCacheColumn
struct FTypedElementU32IntValueCacheColumn : public FTypedElementDataStorageColumn
{
public:
	uint8                                        Pad_2128[0x3];                                     // Fixing Size Of Struct
};

// 0x3 (0x4 - 0x1)
// ScriptStruct TypedElementFramework.TypedElementI32IntValueCacheColumn
struct FTypedElementI32IntValueCacheColumn : public FTypedElementDataStorageColumn
{
public:
	uint8                                        Pad_212B[0x3];                                     // Fixing Size Of Struct
};

// 0x3 (0x4 - 0x1)
// ScriptStruct TypedElementFramework.TypedElementFloatValueCacheColumn
struct FTypedElementFloatValueCacheColumn : public FTypedElementDataStorageColumn
{
public:
	uint8                                        Pad_212C[0x3];                                     // Fixing Size Of Struct
};

}


