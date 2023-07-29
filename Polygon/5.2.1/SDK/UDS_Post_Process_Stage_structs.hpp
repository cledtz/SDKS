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

// 0x708 (0x708 - 0x0)
// UserDefinedStruct UDS_Post_Process_Stage.UDS_Post_Process_Stage
struct FUDS_Post_Process_Stage
{
public:
	class FString                                Label_24_760DA3B649F655929138B7846A0B840F;         // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FPostProcessSettings                  PostProcessSettings_25_E746F2674432B2790E7147B9B9D48686; // 0x10(0x6E0)(Edit, BlueprintVisible)
	bool                                         DisableDuringDay_60_6A0C0A844D25727B201270B8E6794534; // 0x6F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DisableatDawnDusk_61_D0DA84F840D05C7DA0D7B49A2E6743C4; // 0x6F1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DisableatNight_62_1D5FD8DD4142C2B92FFCEFBE2A0E581F; // 0x6F2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DisableifOvercast_52_989272994F5025F12C728292C335B969; // 0x6F3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DisableifNotOvercast_53_D95A77BB4DB1672F50FDC6B817C28515; // 0x6F4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DisableifFoggy_54_539D2C7E4D2FD2EB58A526993DBB4A10; // 0x6F5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DisableifNotFoggy_55_34F8C6474E89F3CB3996E78C6CEF2907; // 0x6F6(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DisableifDusty_56_0044404B424580AF8096A6B8CD97F80F; // 0x6F7(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DisableifNotDusty_57_B002D3174D9C870BA261FCA71ADF2E02; // 0x6F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DisableifInsideInterior_58_8D9B008146005C1946D6B4B9F02F9C83; // 0x6F9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DisableifOutsideInterior_59_BF184CAA469ECC2CC17795A644DA512E; // 0x6FA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31EB[0x5];                                     // Fixing Size After Last Property
	double                                       Priority_47_5B0BDA844B69DB2E7768168865CD16E0;      // 0x700(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
