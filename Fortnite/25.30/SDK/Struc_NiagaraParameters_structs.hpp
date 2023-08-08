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

// 0x44 (0x44 - 0x0)
// UserDefinedStruct Struc_NiagaraParameters.Struc_NiagaraParameters
struct FStruc_NiagaraParameters
{
public:
	enum class ENUM_NiagaraParameterSetup        ParameterSelection_14_A6D4854946F722970AD7D0AEC96E4705; // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12BD[0x3];                                     // Fixing Size After Last Property
	class FName                                  FloatParameterName_17_6AFBA48F43B44BD1ED9841983BEFA202; // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FloatParameterValue_28_AC98B6464E1CD803B50B47AEC91741EC; // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  VectorParameterName_20_71917CFB490B3D5D3E0864A3EE90C666; // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               VectorParameterValue_27_248856604659F589FF5D4FA5FF52E013; // 0x10(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  LinearColorparameterName_22_69C61F8D45C74F98203920856CAD5ADE; // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          LinearColorParameterValue_29_861B08ED408F0F612BF509A2A94F377F; // 0x2C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  IntegerParameterName_24_98306BA7452D90289F6EE9954C4F2B1D; // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        IntegerParameterValue_25_BB84ADEA4515AABD3B9AC6A04453D826; // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
