#pragma once

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

// 0x24 (0x30 - 0xC)
// ScriptStruct EpicGamesEngine.VerseActionMapping
struct FVerseActionMapping : public FFastArraySerializerItem
{
public:
	class FName                                  Name;                                              // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UIText;                                            // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FKey>                          Keys;                                              // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x120 - 0x108)
// ScriptStruct EpicGamesEngine.VerseActionMappingArray
struct FVerseActionMappingArray : public FFastArraySerializer
{
public:
	TArray<struct FVerseActionMapping>           ActionMappingArray;                                // 0x108(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class UVerseUEInputComponentBase*            OwningComponent;                                   // 0x118(0x8)(ZeroConstructor, RepSkip, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x2C (0x38 - 0xC)
// ScriptStruct EpicGamesEngine.VerseAxisMapping
struct FVerseAxisMapping : public FFastArraySerializerItem
{
public:
	class FName                                  AxisName;                                          // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_367D[0x4];                                     // Fixing Size After Last Property
	class FString                                UIText;                                            // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FKey>                          Keys;                                              // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x120 - 0x108)
// ScriptStruct EpicGamesEngine.VerseAxisMappingArray
struct FVerseAxisMappingArray : public FFastArraySerializer
{
public:
	TArray<struct FVerseAxisMapping>             AxisMappingArray;                                  // 0x108(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class UVerseUEInputComponentBase*            OwningComponent;                                   // 0x118(0x8)(ZeroConstructor, RepSkip, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x10 (0x1C - 0xC)
// ScriptStruct EpicGamesEngine.VerseInputBinding
struct FVerseInputBinding : public FFastArraySerializerItem
{
public:
	class FName                                  Name;                                              // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInputEvent                       InputEvent;                                        // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3686[0xB];                                     // Fixing Size Of Struct
};

// 0x18 (0x120 - 0x108)
// ScriptStruct EpicGamesEngine.VerseInputBindingArray
struct FVerseInputBindingArray : public FFastArraySerializer
{
public:
	TArray<struct FVerseInputBinding>            InputBindingArray;                                 // 0x108(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class UVerseUEInputComponentBase*            OwningComponent;                                   // 0x118(0x8)(ZeroConstructor, RepSkip, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             rence, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33DE[0x7];                                     // Fixing Size After Last Property
	FVerseFunctionProperty_                      __verse_0x932BF92E_Elem2;                          // 0x18(0x10)(InstancedReference, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// VerseStruct EpicGamesEngine.tuple_L_Kchar_Minput__event_R
struct FTuple_L_Kchar_Minput__event_R
{
public:
	FVerseStringProperty_                        __verse_0x18E3F084_Elem0;                          // 0x0(0x10)(InstancedReference, HasGetValueTypeHash)
	enum class EpicGames_Input_input_event       __verse_0x7D844C3C_Elem1;                          // 0x10(0x1)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// VerseStruct EpicGamesEngine.tuple_L_R
struct FTuple_L_R
{
public:
	uint8                                        _StructPaddingDummy;                               // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// VerseStruct EpicGamesEngine.tuple_Lverse__ue__input__component_M_Kchar_Minput__event_R
struct FTuple_Lverse__ue__input__component_M_Kchar_Minput__event_R
{
public:
	class UEpicGames_Input_verse_ue_input_component* __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseStringProperty_                        __verse_0x7D844C3C_Elem1;                          // 0x8(0x10)(InstancedReference, HasGetValueTypeHash)
	enum class EpicGames_Input_input_event       __verse_0x932BF92E_Elem2;                          // 0x18(0x1)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
