#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// Function VerseGameplayTags.Tags._L_2fVerse_2eorg_2fSimulation_2fTags_N_RToString_L_Ntag_R
struct UTags__L_2fVerse_2eorg_2fSimulation_2fTags_N_RToString_L_Ntag_R_Params
{
public:
	class UTags_tag*                             __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseStringProperty_                        RetVal;                                            // 0x8(0x10)(Parm, OutParm, ReturnParm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function VerseGameplayTags.Tags._L_2fVerse_2eorg_2fSimulation_2fTags_N_RToString_L_Ntag__container_R
struct UTags__L_2fVerse_2eorg_2fSimulation_2fTags_N_RToString_L_Ntag__container_R_Params
{
public:
	class UTags_tag_container*                   __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseStringProperty_                        RetVal;                                            // 0x8(0x10)(Parm, OutParm, ReturnParm, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function VerseGameplayTags.Tags._L_2fVerse_2eorg_2fSimulation_2fTags_N_RMakeTagContainer_L_N_Ktag_R
struct UTags__L_2fVerse_2eorg_2fSimulation_2fTags_N_RMakeTagContainer_L_N_Ktag_R_Params
{
public:
	TArray<class UTags_tag*>                     __verse_0xB2CDDD72_Argument;                       // 0x0(0x10)(Parm, ContainsInstancedReference)
	uint64                                       InstancingGraph;                                   // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTags_tag_container*                   __verse_0xB482F2DD_CurrentlyInstantiatedObject;    // 0x18(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function VerseGameplayTags.Tags._L_2fVerse_2eorg_2fSimulation_2fTags_N_RMakeTagContainer_L_Ntag__selector__container_R
struct UTags__L_2fVerse_2eorg_2fSimulation_2fTags_N_RMakeTagContainer_L_Ntag__selector__container_R_Params
{
public:
	struct FVerseGameplayTagContainer            __verse_0xB2CDDD72_Argument;                       // 0x0(0x10)(Parm)
	FOptionProperty_                             RetVal;                                            // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VerseGameplayTags.Tags._L_2fVerse_2eorg_2fSimulation_2fTags_N_RMakeGameplayTagFromSubClass_L_NType_20where_20Type_R
struct UTags__L_2fVerse_2eorg_2fSimulation_2fTags_N_RMakeGameplayTagFromSubClass_L_NType_20where_20Type_R_Params
{
public:
	class UClass*                                __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VerseGameplayTags.Tags._L_2fVerse_2eorg_2fSimulation_2fTags_N_RMakeGameplayTag_L_Ntag__selector_R
struct UTags__L_2fVerse_2eorg_2fSimulation_2fTags_N_RMakeGameplayTag_L_Ntag__selector_R_Params
{
public:
	struct FVerseGameplayTag                     __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function VerseGameplayTags.Tags._L_2fVerse_2eorg_2fSimulation_2fTags_N_RFindObjectsWithTags_L_Ntag__search__criteria_R
struct UTags__L_2fVerse_2eorg_2fSimulation_2fTags_N_RFindObjectsWithTags_L_Ntag__search__criteria_R_Params
{
public:
	class UTags_tag_search_criteria*             __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UEntityComponent*>              RetVal;                                            // 0x8(0x10)(Parm, OutParm, ReturnParm, ContainsInstancedReference)
};

// 0x18 (0x18 - 0x0)
// Function VerseGameplayTags.Tags._L_2fVerse_2eorg_2fSimulation_2fTags_N_RFindObjectsWithTag_L_Ntag_R
struct UTags__L_2fVerse_2eorg_2fSimulation_2fTags_N_RFindObjectsWithTag_L_Ntag_R_Params
{
public:
	class UTags_tag*                             __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UEntityComponent*>              RetVal;                                            // 0x8(0x10)(Parm, OutParm, ReturnParm, ContainsInstancedReference)
};

// 0x10 (0x10 - 0x0)
// Function VerseGameplayTags.Tags._L_2fVerse_2eorg_2fSimulation_2fTags_N_RFindObjectWithTag_L_Ntag_R
struct UTags__L_2fVerse_2eorg_2fSimulation_2fTags_N_RFindObjectWithTag_L_Ntag_R_Params
{
public:
	class UTags_tag*                             __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x12 (0x12 - 0x0)
// Function VerseGameplayTags.Tags._L_2fVerse_2eorg_2fSimulation_2fTags_N_REquals_L_Ntag__container_M_Ntag__container_R
struct UTags__L_2fVerse_2eorg_2fSimulation_2fTags_N_REquals_L_Ntag__container_M_Ntag__container_R_Params
{
public:
	struct FTuple_Ltag__container_Mtag__container_R __verse_0xB2CDDD72_Argument;                       // 0x0(0x10)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x10(0x2)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x12 (0x12 - 0x0)
// Function VerseGameplayTags.Tags._L_2fVerse_2eorg_2fSimulation_2fTags_N_REquals_L_Ntag_M_Ntag_R
struct UTags__L_2fVerse_2eorg_2fSimulation_2fTags_N_REquals_L_Ntag_M_Ntag_R_Params
{
public:
	struct FTuple_Ltag_Mtag_R                    __verse_0xB2CDDD72_Argument;                       // 0x0(0x10)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x10(0x2)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function VerseGameplayTags.Tags.$InitCDO
struct UTags__InitCDO_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseGameplayTags.Tags_tag.$InitInstance
struct UTags_tag__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseGameplayTags.Tags_tag.$Block
struct UTags_tag__Block_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseGameplayTags.Tags_tag.$InitCDO
struct UTags_tag__InitCDO_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function VerseGameplayTags.Tags_tag_container._L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RResetWithSlack_L_Nint_R
struct UTags_tag_container__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RResetWithSlack_L_Nint_R_Params
{
public:
	int64                                        __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function VerseGameplayTags.Tags_tag_container._L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RReset
struct UTags_tag_container__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RReset_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function VerseGameplayTags.Tags_tag_container._L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RRemove_L_Ntag__container_R
struct UTags_tag_container__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RRemove_L_Ntag__container_R_Params
{
public:
	class UTags_tag_container*                   __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// Function VerseGameplayTags.Tags_tag_container._L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RRemove_L_Ntag_R
struct UTags_tag_container__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RRemove_L_Ntag_R_Params
{
public:
	class UTags_tag*                             __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x8(0x2)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VerseGameplayTags.Tags_tag_container._L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RRemove_L_N_Ktag_R
struct UTags_tag_container__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RRemove_L_N_Ktag_R_Params
{
public:
	TArray<class UTags_tag*>                     __verse_0xB2CDDD72_Argument;                       // 0x0(0x10)(Parm, ContainsInstancedReference)
};

// 0x10 (0x10 - 0x0)
// Function VerseGameplayTags.Tags_tag_container._L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RNum
struct UTags_tag_container__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RNum_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_65DD[0x7];                                     // Fixing Size After Last Property
	int64                                        RetVal;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x12 (0x12 - 0x0)
// Function VerseGameplayTags.Tags_tag_container._L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__view_N_RHasAny_L_N_Ktag_R
struct UTags_tag_container__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__view_N_RHasAny_L_N_Ktag_R_Params
{
public:
	TArray<class UTags_tag*>                     __verse_0xB2CDDD72_Argument;                       // 0x0(0x10)(Parm, ContainsInstancedReference)
	FOptionProperty_                             RetVal;                                            // 0x10(0x2)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x12 (0x12 - 0x0)
// Function VerseGameplayTags.Tags_tag_container._L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__view_N_RHasAll_L_N_Ktag_R
struct UTags_tag_container__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__view_N_RHasAll_L_N_Ktag_R_Params
{
public:
	TArray<class UTags_tag*>                     __verse_0xB2CDDD72_Argument;                       // 0x0(0x10)(Parm, ContainsInstancedReference)
	FOptionProperty_                             RetVal;                                            // 0x10(0x2)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// Function VerseGameplayTags.Tags_tag_container._L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__view_N_RHas_L_Ntag_R
struct UTags_tag_container__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__view_N_RHas_L_Ntag_R_Params
{
public:
	class UTags_tag*                             __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x8(0x2)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function VerseGameplayTags.Tags_tag_container._L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RAdd_L_Ntag_R
struct UTags_tag_container__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RAdd_L_Ntag_R_Params
{
public:
	class UTags_tag*                             __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VerseGameplayTags.Tags_tag_container._L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RAdd_L_N_Ktag_R
struct UTags_tag_container__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RAdd_L_N_Ktag_R_Params
{
public:
	TArray<class UTags_tag*>                     __verse_0xB2CDDD72_Argument;                       // 0x0(0x10)(Parm, ContainsInstancedReference)
};

// 0x8 (0x8 - 0x0)
// Function VerseGameplayTags.Tags_tag_container._L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RAdd_L_Ntag__container_R
struct UTags_tag_container__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RAdd_L_Ntag__container_R_Params
{
public:
	class UTags_tag_container*                   __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function VerseGameplayTags.Tags_tag_container.$InitInstance
struct UTags_tag_container__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseGameplayTags.Tags_tag_container.$Block
struct UTags_tag_container__Block_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseGameplayTags.Tags_tag_container.$InitCDO
struct UTags_tag_container__InitCDO_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function VerseGameplayTags.Tags_tag_container_component._L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container__component_N_RSetTags_L_Ntag__container_R
struct UTags_tag_container_component__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container__component_N_RSetTags_L_Ntag__container_R_Params
{
public:
	class UTags_tag_container*                   __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function VerseGameplayTags.Tags_tag_container_component._L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container__component_N_RRemoveTag_L_Ntag_R
struct UTags_tag_container_component__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container__component_N_RRemoveTag_L_Ntag_R_Params
{
public:
	class UTags_tag*                             __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint8                                        RetVal : 1;                                        // Mask: 0x1, PropSize: 0x10x8(0x1)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VerseGameplayTags.Tags_tag_container_component._L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container__component_N_RGetTags
struct UTags_tag_container_component__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container__component_N_RGetTags_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_65F6[0x7];                                     // Fixing Size After Last Property
	class UTags_tag_container*                   RetVal;                                            // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function VerseGameplayTags.Tags_tag_container_component._L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container__component_N_RAddTag_L_Ntag_R
struct UTags_tag_container_component__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container__component_N_RAddTag_L_Ntag_R_Params
{
public:
	class UTags_tag*                             __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function VerseGameplayTags.Tags_tag_container_component.$InitInstance
struct UTags_tag_container_component__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseGameplayTags.Tags_tag_container_component.$Block
struct UTags_tag_container_component__Block_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseGameplayTags.Tags_tag_container_component.$InitCDO
struct UTags_tag_container_component__InitCDO_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseGameplayTags.Tags_tag_search_criteria.$InitInstance
struct UTags_tag_search_criteria__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseGameplayTags.Tags_tag_search_criteria.$Block
struct UTags_tag_search_criteria__Block_Params
{
public:
};

// 0xD2 (0xD2 - 0x0)
// Function VerseGameplayTags.Tags_tag_search_criteria.$InitCDO
struct UTags_tag_search_criteria__InitCDO_Params
{
public:
	TArray<class UTags_tag*>                     _ExprResult_0;                                     // 0x0(0x10)(ContainsInstancedReference)
	TArray<enum class EVerseFalse>               __verse_0xFFC68BC5_Array_1;                        // 0x10(0x10)(ContainsInstancedReference)
	TArray<class UTags_tag*>                     _ForResult_1;                                      // 0x20(0x10)(ContainsInstancedReference)
	int64                                        _ForIndex_2;                                       // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        _ForLength_3;                                      // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVerseFalse                       __verse_0xFB88B569_Item_3;                         // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_4 : 1;                                 // Mask: 0x1, PropSize: 0x10x41(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_407 : 7;                                    // Fixing Bit-Field Size
	uint8                                        Pad_6602[0x6];                                     // Fixing Size After Last Property
	TArray<class UTags_tag*>                     _ExprResult_5;                                     // 0x48(0x10)(ContainsInstancedReference)
	TArray<enum class EVerseFalse>               __verse_0xFFC68BC5_Array_5;                        // 0x58(0x10)(ContainsInstancedReference)
	TArray<class UTags_tag*>                     _ForResult_6;                                      // 0x68(0x10)(ContainsInstancedReference)
	int64                                        _ForIndex_7;                                       // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        _ForLength_8;                                      // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVerseFalse                       __verse_0xFB88B569_Item_7;                         // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_9 : 1;                                 // Mask: 0x1, PropSize: 0x10x89(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_409 : 7;                                    // Fixing Bit-Field Size
	uint8                                        Pad_6604[0x6];                                     // Fixing Size After Last Property
	TArray<class UTags_tag*>                     _ExprResult_10;                                    // 0x90(0x10)(ContainsInstancedReference)
	TArray<enum class EVerseFalse>               __verse_0xFFC68BC5_Array_9;                        // 0xA0(0x10)(ContainsInstancedReference)
	TArray<class UTags_tag*>                     _ForResult_11;                                     // 0xB0(0x10)(ContainsInstancedReference)
	int64                                        _ForIndex_12;                                      // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        _ForLength_13;                                     // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVerseFalse                       __verse_0xFB88B569_Item_11;                        // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_14 : 1;                                // Mask: 0x1, PropSize: 0x10xD1(0x1)(NoDestructor, HasGetValueTypeHash)
};

// 0x12 (0x12 - 0x0)
// Function VerseGameplayTags.Tags_tag_view._L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__view_N_RHasAny_L_N_Ktag_R
struct UTags_tag_view__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__view_N_RHasAny_L_N_Ktag_R_Params
{
public:
	TArray<class UTags_tag*>                     __verse_0xB2CDDD72_Argument;                       // 0x0(0x10)(Parm, ContainsInstancedReference)
	FOptionProperty_                             RetVal;                                            // 0x10(0x2)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x12 (0x12 - 0x0)
// Function VerseGameplayTags.Tags_tag_view._L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__view_N_RHasAll_L_N_Ktag_R
struct UTags_tag_view__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__view_N_RHasAll_L_N_Ktag_R_Params
{
public:
	TArray<class UTags_tag*>                     __verse_0xB2CDDD72_Argument;                       // 0x0(0x10)(Parm, ContainsInstancedReference)
	FOptionProperty_                             RetVal;                                            // 0x10(0x2)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// Function VerseGameplayTags.Tags_tag_view._L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__view_N_RHas_L_Ntag_R
struct UTags_tag_view__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__view_N_RHas_L_Ntag_R_Params
{
public:
	class UTags_tag*                             __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x8(0x2)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
