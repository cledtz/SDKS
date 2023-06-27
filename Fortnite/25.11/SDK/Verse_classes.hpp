#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// VerseClass Verse.$SolarisSignatureFunctionOuter
class U_SolarisSignatureFunctionOuter : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("$SolarisSignatureFunctionOuter");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// VerseClass Verse.Colors
class UColors : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Colors");
		return Clss;
	}

	FOptionProperty_ _L_2fVerse_2eorg_2fColors_N_Roperator_U_2f_U_L_Ncolor_M_Nint_R(const struct FTuple_Lcolor_Mint_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fVerse_2eorg_2fColors_N_Roperator_U_2f_U_L_Ncolor_M_Nfloat_R(const struct FTuple_Lcolor_Mfloat_R& __verse_0xB2CDDD72_Argument);
	struct FColors_color _L_2fVerse_2eorg_2fColors_N_Roperator_U_2d_U_L_Ncolor_M_Ncolor_R(const struct FTuple_Lcolor_Mcolor_R& __verse_0xB2CDDD72_Argument);
	struct FColors_color _L_2fVerse_2eorg_2fColors_N_Roperator_U_2b_U_L_Ncolor_M_Ncolor_R(const struct FTuple_Lcolor_Mcolor_R& __verse_0xB2CDDD72_Argument);
	struct FColors_color _L_2fVerse_2eorg_2fColors_N_Roperator_U_2a_U_L_Ncolor_M_Ncolor_R(const struct FTuple_Lcolor_Mcolor_R& __verse_0xB2CDDD72_Argument);
	struct FColors_color _L_2fVerse_2eorg_2fColors_N_Roperator_U_2a_U_L_Ncolor_M_Nfloat_R(const struct FTuple_Lcolor_Mfloat_R& __verse_0xB2CDDD72_Argument);
	struct FColors_color _L_2fVerse_2eorg_2fColors_N_Roperator_U_2a_U_L_Nfloat_M_Ncolor_R(const struct FTuple_Lfloat_Mcolor_R& __verse_0xB2CDDD72_Argument);
	struct FColors_color _L_2fVerse_2eorg_2fColors_N_Roperator_U_2a_U_L_Ncolor_M_Nint_R(const struct FTuple_Lcolor_Mint_R& __verse_0xB2CDDD72_Argument);
	struct FColors_color _L_2fVerse_2eorg_2fColors_N_Roperator_U_2a_U_L_Nint_M_Ncolor_R(const struct FTuple_Lint_Mcolor_R& __verse_0xB2CDDD72_Argument);
	struct FTuple_Lfloat_Mfloat_Mfloat_R _L_2fVerse_2eorg_2fColors_N_RMakeSRGBFromColor_L_Ncolor_R(const struct FColors_color& __verse_0xB2CDDD72_Argument);
	struct FTuple_Lfloat_Mfloat_Mfloat_R _L_2fVerse_2eorg_2fColors_N_RMakeHSVFromColor_L_Ncolor_R(const struct FColors_color& __verse_0xB2CDDD72_Argument);
	struct FColors_color _L_2fVerse_2eorg_2fColors_N_RMakeColorFromTemperature_L_Nfloat_R(double __verse_0xB2CDDD72_Argument);
	struct FColors_color _L_2fVerse_2eorg_2fColors_N_RMakeColorFromSRGBValues_L_Nint_M_Nint_M_Nint_R(const struct FTuple_Lint_Mint_Mint_R& __verse_0xB2CDDD72_Argument);
	struct FColors_color _L_2fVerse_2eorg_2fColors_N_RMakeColorFromSRGB_L_Nfloat_M_Nfloat_M_Nfloat_R(const struct FTuple_Lfloat_Mfloat_Mfloat_R& __verse_0xB2CDDD72_Argument);
	struct FColors_color _L_2fVerse_2eorg_2fColors_N_RMakeColorFromHex_L_N_Kchar_R(FVerseStringProperty_ __verse_0xB2CDDD72_Argument);
	struct FColors_color _L_2fVerse_2eorg_2fColors_N_RMakeColorFromHSV_L_Nfloat_M_Nfloat_M_Nfloat_R(const struct FTuple_Lfloat_Mfloat_Mfloat_R& __verse_0xB2CDDD72_Argument);
	struct FColors_color Colors_color_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap, FVerseStringProperty_ _ExprResultStack_0, FOptionProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResultStack_2, FOptionProperty_ _ExprResult_3, FVerseStringProperty_ _ExprResultStack_4, FOptionProperty_ _ExprResult_5);
	struct FColors_color Colors_color_Factory();
	void _InitCDO();
};

// 0xDC8 (0xDF0 - 0x28)
// VerseClass Verse.Colors_NamedColors
class UColors_NamedColors : public UObject
{
public:
	struct FColors_color                         __verse_0x9FBDE6AE_AliceBlue;                      // 0x28(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0xB3F7599D_AntiqueWhite;                   // 0x40(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x37EE68B4_Aqua;                           // 0x58(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0xA52EBB79_Aquamarine;                     // 0x70(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0xD06EFB2A_Azure;                          // 0x88(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x8CE5D6D0_Beige;                          // 0xA0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0xC6B3972A_Bisque;                         // 0xB8(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x65E4346F_Black;                          // 0xD0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x513D3B5F_BlanchedAlmond;                 // 0xE8(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x80217580_Blue;                           // 0x100(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x31D0653D_BlueViolet;                     // 0x118(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0xAD308F8F_Brown;                          // 0x130(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0xED3A42A8_Burlywood;                      // 0x148(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x921A6303_CadetBlue;                      // 0x160(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x9E2BDE1B_Chartreuse;                     // 0x178(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x082AED19_Chocolate;                      // 0x190(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x196BEF87_Coral;                          // 0x1A8(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0xC6BCD84F_CornflowerBlue;                 // 0x1C0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0xEE818697_Cornsilk;                       // 0x1D8(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x6733DEF7_Crimson;                        // 0x1F0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x2D925695_Cyan;                           // 0x208(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x935B7248_DarkBlue;                       // 0x220(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x3EE8515D_DarkCyan;                       // 0x238(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x5817F032_DarkGoldenrod;                  // 0x250(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x916F3C35_DarkGray;                       // 0x268(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x37F798B1_DarkGreen;                      // 0x280(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x6B6176B1_DarkGrey;                       // 0x298(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x9A5F61FB_DarkKhaki;                      // 0x2B0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x97899EDF_DarkMagenta;                    // 0x2C8(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0xC2E62C73_DarkOliveGreen;                 // 0x2E0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x7431D49D_DarkOrange;                     // 0x2F8(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0xA0C47F58_DarkOrchid;                     // 0x310(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0xA3246E28_DarkRed;                        // 0x328(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x5A06EB6C_DarkSalmon;                     // 0x340(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0xF141484E_DarkSeaGreen;                   // 0x358(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x4167AB57_DarkSlateBlue;                  // 0x370(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x4353E52A_DarkSlateGray;                  // 0x388(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0xB95DAFAE_DarkSlateGrey;                  // 0x3A0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x26DA5155_DarkTurquoise;                  // 0x3B8(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x3E781A05_DarkViolet;                     // 0x3D0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x53E148EA_DeepPink;                       // 0x3E8(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0xA474CD21_DeepSkyBlue;                    // 0x400(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0xEC312FE8_DimGray;                        // 0x418(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x163F656C_DimGrey;                        // 0x430(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x617B6862_DodgerBlue;                     // 0x448(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0xC636E104_Firebrick;                      // 0x460(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x06164DB2_FloralWhite;                    // 0x478(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x4939E624_ForestGreen;                    // 0x490(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x8069E472_Fuchsia;                        // 0x4A8(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x71D0705F_Gainsboro;                      // 0x4C0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x1EDD5A5B_GhostWhite;                     // 0x4D8(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x0363FA56_Gold;                           // 0x4F0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x13A0B098_Goldenrod;                      // 0x508(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x82153BFD_Gray;                           // 0x520(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x853EAC70_Green;                          // 0x538(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x94CAEBA0_GreenYellow;                    // 0x550(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x781B7179_Grey;                           // 0x568(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x6FB30324_Honeydew;                       // 0x580(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x2D404B19_Hotpink;                        // 0x598(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x2CE09720_IndianRed;                      // 0x5B0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x180B2901_Indigo;                         // 0x5C8(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x1086E2EC_Ivory;                          // 0x5E0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x2896553A_Khaki;                          // 0x5F8(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0xB93AFCDC_Lavender;                       // 0x610(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x4CF8F931_LavenderBlush;                  // 0x628(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x08B4792E_LawnGreen;                      // 0x640(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0xCC22276F_LemonChiffon;                   // 0x658(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x607C97F4_LightBlue;                      // 0x670(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x89B3D40E_LightCoral;                     // 0x688(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0xCDCFB4E1_LightCyan;                      // 0x6A0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x6C11FD65_LightGoldenrodYellow;           // 0x6B8(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x6248D989_LightGray;                      // 0x6D0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x15E697F9_LightGreen;                     // 0x6E8(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x9846930D_LightGrey;                      // 0x700(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0xC34ABDCC_LightPink;                      // 0x718(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0xC57DAB84_LightSalmon;                    // 0x730(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x0FE57B41_LightSeaGreen;                  // 0x748(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x4077C098_LightSkyBlue;                   // 0x760(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0xCABFF9F6_LightSlateGray;                 // 0x778(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x30B1B372_LightSlateGrey;                 // 0x790(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0xEFD2DF75_LightSteelBlue;                 // 0x7A8(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x5732C477_LightYellow;                    // 0x7C0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0xA58A0A97_Lime;                           // 0x7D8(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0xC8D6E552_LimeGreen;                      // 0x7F0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0xD014B08F_Linen;                          // 0x808(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0xC5065659_Magenta;                        // 0x820(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x2C6B6225_Maroon;                         // 0x838(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x603DC640_MediumAquamarine;               // 0x850(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x03344EDD_MediumBlue;                     // 0x868(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0xEB235F60_MediumOrchid;                   // 0x880(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x80AC62AF_MediumPurple;                   // 0x898(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0xA2F1456A_MediumSeaGreen;                 // 0x8B0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x81A3E0C2_MediumSlateBlue;                // 0x8C8(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x8259C923_MediumSpringGreen;              // 0x8E0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0xE61E1AC0_MediumTurquoise;                // 0x8F8(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x750A73D1_MediumVioletRed;                // 0x910(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x54B068FD_MidnightBlue;                   // 0x928(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x2D5517E3_MintCream;                      // 0x940(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0xC9B38859_MistyRose;                      // 0x958(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x045E548D_Moccasin;                       // 0x970(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x66A473BA_NavajoWhite;                    // 0x988(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x621CB82D_Navy;                           // 0x9A0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x4433768E_OldLace;                        // 0x9B8(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x4ADCED0B_Olive;                          // 0x9D0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x662F5053_OliveDrab;                      // 0x9E8(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x7B1B98E3_Orange;                         // 0xA00(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x31DF128E_OrangeRed;                      // 0xA18(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0xAFEE3326_Orchid;                         // 0xA30(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0xA90612F2_PaleGoldenrod;                  // 0xA48(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x6494F519_PaleGreen;                      // 0xA60(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0xD7CBB395_PaleTurquoise;                  // 0xA78(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0xBC04EB9C_PaleVioletred;                  // 0xA90(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x1267A5CE_PapayaWhip;                     // 0xAA8(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x5B815063_PeachPuff;                      // 0xAC0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x6A5E8726_Peru;                           // 0xAD8(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x23175FB8_Pink;                           // 0xAF0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x92124624_Plum;                           // 0xB08(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x315A9690_PowderBlue;                     // 0xB20(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0xC4610EE9_Purple;                         // 0xB38(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x77CCDA87_Red;                            // 0xB50(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0xFB01846B_RosyBrown;                      // 0xB68(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0xA95C80D8_RoyalBlue;                      // 0xB80(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0xFCC2BB8C_SaddleBrown;                    // 0xB98(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x552CA712_Salmon;                         // 0xBB0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0xE1C22521_SandyBrown;                     // 0xBC8(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x36A1DDC2_SeaGreen;                       // 0xBE0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x58B624CB_SeaShell;                       // 0xBF8(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x013650B1_Sienna;                         // 0xC10(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0xFA47F979_Silver;                         // 0xC28(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x1EAB27FD_SkyBlue;                        // 0xC40(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x0AD0EBFD_SlateBlue;                      // 0xC58(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x08E4A580_SlateGray;                      // 0xC70(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0xF2EAEF04_SlateGrey;                      // 0xC88(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0xE7A26A33_Snow;                           // 0xCA0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x2CD5AEB9_SpringGreen;                    // 0xCB8(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x2D898303_SteelBlue;                      // 0xCD0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x09871083_Tan;                            // 0xCE8(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x303C932D_Teal;                           // 0xD00(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x303F6677_Thistle;                        // 0xD18(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x4DC64808_Tomato;                         // 0xD30(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x6D6D11FF_Turquoise;                      // 0xD48(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x3152567B_Violet;                         // 0xD60(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x13A81039_Wheat;                          // 0xD78(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0x27EAE4E0_White;                          // 0xD90(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0xBE90A762_WhiteSmoke;                     // 0xDA8(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0xC763C8E1_Yellow;                         // 0xDC0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FColors_color                         __verse_0xF10B434A_YellowGreen;                    // 0xDD8(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Colors_NamedColors");
		return Clss;
	}

	void _InitCDO(const struct FColors_color& _ExprResultStack_0, FVerseFunctionProperty_ _Callee_1, FVerseStringProperty_ _ExprResult_2, const struct FColors_color& _ExprResultStack_3, FVerseFunctionProperty_ _Callee_4, FVerseStringProperty_ _ExprResult_5, const struct FColors_color& _ExprResultStack_6, FVerseFunctionProperty_ _Callee_7, FVerseStringProperty_ _ExprResult_8, const struct FColors_color& _ExprResultStack_9, FVerseFunctionProperty_ _Callee_10, FVerseStringProperty_ _ExprResult_11, const struct FColors_color& _ExprResultStack_12, FVerseFunctionProperty_ _Callee_13, FVerseStringProperty_ _ExprResult_14, const struct FColors_color& _ExprResultStack_15, FVerseFunctionProperty_ _Callee_16, FVerseStringProperty_ _ExprResult_17, const struct FColors_color& _ExprResultStack_18, FVerseFunctionProperty_ _Callee_19, FVerseStringProperty_ _ExprResult_20, const struct FColors_color& _ExprResultStack_21, FVerseFunctionProperty_ _Callee_22, FVerseStringProperty_ _ExprResult_23, const struct FColors_color& _ExprResultStack_24, FVerseFunctionProperty_ _Callee_25, FVerseStringProperty_ _ExprResult_26, const struct FColors_color& _ExprResultStack_27, FVerseFunctionProperty_ _Callee_28, FVerseStringProperty_ _ExprResult_29, const struct FColors_color& _ExprResultStack_30, FVerseFunctionProperty_ _Callee_31, FVerseStringProperty_ _ExprResult_32, const struct FColors_color& _ExprResultStack_33, FVerseFunctionProperty_ _Callee_34, FVerseStringProperty_ _ExprResult_35, const struct FColors_color& _ExprResultStack_36, FVerseFunctionProperty_ _Callee_37, FVerseStringProperty_ _ExprResult_38, const struct FColors_color& _ExprResultStack_39, FVerseFunctionProperty_ _Callee_40, FVerseStringProperty_ _ExprResult_41, const struct FColors_color& _ExprResultStack_42, FVerseFunctionProperty_ _Callee_43, FVerseStringProperty_ _ExprResult_44, const struct FColors_color& _ExprResultStack_45, FVerseFunctionProperty_ _Callee_46, FVerseStringProperty_ _ExprResult_47, const struct FColors_color& _ExprResultStack_48, FVerseFunctionProperty_ _Callee_49, FVerseStringProperty_ _ExprResult_50, const struct FColors_color& _ExprResultStack_51, FVerseFunctionProperty_ _Callee_52, FVerseStringProperty_ _ExprResult_53, const struct FColors_color& _ExprResultStack_54, FVerseFunctionProperty_ _Callee_55, FVerseStringProperty_ _ExprResult_56, const struct FColors_color& _ExprResultStack_57, FVerseFunctionProperty_ _Callee_58, FVerseStringProperty_ _ExprResult_59, const struct FColors_color& _ExprResultStack_60, FVerseFunctionProperty_ _Callee_61, FVerseStringProperty_ _ExprResult_62, const struct FColors_color& _ExprResultStack_63, FVerseFunctionProperty_ _Callee_64, FVerseStringProperty_ _ExprResult_65, const struct FColors_color& _ExprResultStack_66, FVerseFunctionProperty_ _Callee_67, FVerseStringProperty_ _ExprResult_68, const struct FColors_color& _ExprResultStack_69, FVerseFunctionProperty_ _Callee_70, FVerseStringProperty_ _ExprResult_71, const struct FColors_color& _ExprResultStack_72, FVerseFunctionProperty_ _Callee_73, FVerseStringProperty_ _ExprResult_74, const struct FColors_color& _ExprResultStack_75, FVerseFunctionProperty_ _Callee_76, FVerseStringProperty_ _ExprResult_77, const struct FColors_color& _ExprResultStack_78, FVerseFunctionProperty_ _Callee_79, FVerseStringProperty_ _ExprResult_80, const struct FColors_color& _ExprResultStack_81, FVerseFunctionProperty_ _Callee_82, FVerseStringProperty_ _ExprResult_83, const struct FColors_color& _ExprResultStack_84, FVerseFunctionProperty_ _Callee_85, FVerseStringProperty_ _ExprResult_86, const struct FColors_color& _ExprResultStack_87, FVerseFunctionProperty_ _Callee_88, FVerseStringProperty_ _ExprResult_89, const struct FColors_color& _ExprResultStack_90, FVerseFunctionProperty_ _Callee_91, FVerseStringProperty_ _ExprResult_92, const struct FColors_color& _ExprResultStack_93, FVerseFunctionProperty_ _Callee_94, FVerseStringProperty_ _ExprResult_95, const struct FColors_color& _ExprResultStack_96, FVerseFunctionProperty_ _Callee_97, FVerseStringProperty_ _ExprResult_98, const struct FColors_color& _ExprResultStack_99, FVerseFunctionProperty_ _Callee_100, FVerseStringProperty_ _ExprResult_101, const struct FColors_color& _ExprResultStack_102, FVerseFunctionProperty_ _Callee_103, FVerseStringProperty_ _ExprResult_104, const struct FColors_color& _ExprResultStack_105, FVerseFunctionProperty_ _Callee_106, FVerseStringProperty_ _ExprResult_107, const struct FColors_color& _ExprResultStack_108, FVerseFunctionProperty_ _Callee_109, FVerseStringProperty_ _ExprResult_110, const struct FColors_color& _ExprResultStack_111, FVerseFunctionProperty_ _Callee_112, FVerseStringProperty_ _ExprResult_113, const struct FColors_color& _ExprResultStack_114, FVerseFunctionProperty_ _Callee_115, FVerseStringProperty_ _ExprResult_116, const struct FColors_color& _ExprResultStack_117, FVerseFunctionProperty_ _Callee_118, FVerseStringProperty_ _ExprResult_119, const struct FColors_color& _ExprResultStack_120, FVerseFunctionProperty_ _Callee_121, FVerseStringProperty_ _ExprResult_122, const struct FColors_color& _ExprResultStack_123, FVerseFunctionProperty_ _Callee_124, FVerseStringProperty_ _ExprResult_125, const struct FColors_color& _ExprResultStack_126, FVerseFunctionProperty_ _Callee_127, FVerseStringProperty_ _ExprResult_128, const struct FColors_color& _ExprResultStack_129, FVerseFunctionProperty_ _Callee_130, FVerseStringProperty_ _ExprResult_131, const struct FColors_color& _ExprResultStack_132, FVerseFunctionProperty_ _Callee_133, FVerseStringProperty_ _ExprResult_134, const struct FColors_color& _ExprResultStack_135, FVerseFunctionProperty_ _Callee_136, FVerseStringProperty_ _ExprResult_137, const struct FColors_color& _ExprResultStack_138, FVerseFunctionProperty_ _Callee_139, FVerseStringProperty_ _ExprResult_140, const struct FColors_color& _ExprResultStack_141, FVerseFunctionProperty_ _Callee_142, FVerseStringProperty_ _ExprResult_143, const struct FColors_color& _ExprResultStack_144, FVerseFunctionProperty_ _Callee_145, FVerseStringProperty_ _ExprResult_146, const struct FColors_color& _ExprResultStack_147, FVerseFunctionProperty_ _Callee_148, FVerseStringProperty_ _ExprResult_149, const struct FColors_color& _ExprResultStack_150, FVerseFunctionProperty_ _Callee_151, FVerseStringProperty_ _ExprResult_152, const struct FColors_color& _ExprResultStack_153, FVerseFunctionProperty_ _Callee_154, FVerseStringProperty_ _ExprResult_155, const struct FColors_color& _ExprResultStack_156, FVerseFunctionProperty_ _Callee_157, FVerseStringProperty_ _ExprResult_158, const struct FColors_color& _ExprResultStack_159, FVerseFunctionProperty_ _Callee_160, FVerseStringProperty_ _ExprResult_161, const struct FColors_color& _ExprResultStack_162, FVerseFunctionProperty_ _Callee_163, FVerseStringProperty_ _ExprResult_164, const struct FColors_color& _ExprResultStack_165, FVerseFunctionProperty_ _Callee_166, FVerseStringProperty_ _ExprResult_167, const struct FColors_color& _ExprResultStack_168, FVerseFunctionProperty_ _Callee_169, FVerseStringProperty_ _ExprResult_170, const struct FColors_color& _ExprResultStack_171, FVerseFunctionProperty_ _Callee_172, FVerseStringProperty_ _ExprResult_173, const struct FColors_color& _ExprResultStack_174, FVerseFunctionProperty_ _Callee_175, FVerseStringProperty_ _ExprResult_176, const struct FColors_color& _ExprResultStack_177, FVerseFunctionProperty_ _Callee_178, FVerseStringProperty_ _ExprResult_179, const struct FColors_color& _ExprResultStack_180, FVerseFunctionProperty_ _Callee_181, FVerseStringProperty_ _ExprResult_182, const struct FColors_color& _ExprResultStack_183, FVerseFunctionProperty_ _Callee_184, FVerseStringProperty_ _ExprResult_185, const struct FColors_color& _ExprResultStack_186, FVerseFunctionProperty_ _Callee_187, FVerseStringProperty_ _ExprResult_188, const struct FColors_color& _ExprResultStack_189, FVerseFunctionProperty_ _Callee_190, FVerseStringProperty_ _ExprResult_191, const struct FColors_color& _ExprResultStack_192, FVerseFunctionProperty_ _Callee_193, FVerseStringProperty_ _ExprResult_194, const struct FColors_color& _ExprResultStack_195, FVerseFunctionProperty_ _Callee_196, FVerseStringProperty_ _ExprResult_197, const struct FColors_color& _ExprResultStack_198, FVerseFunctionProperty_ _Callee_199, FVerseStringProperty_ _ExprResult_200, const struct FColors_color& _ExprResultStack_201, FVerseFunctionProperty_ _Callee_202, FVerseStringProperty_ _ExprResult_203, const struct FColors_color& _ExprResultStack_204, FVerseFunctionProperty_ _Callee_205, FVerseStringProperty_ _ExprResult_206, const struct FColors_color& _ExprResultStack_207, FVerseFunctionProperty_ _Callee_208, FVerseStringProperty_ _ExprResult_209, const struct FColors_color& _ExprResultStack_210, FVerseFunctionProperty_ _Callee_211, FVerseStringProperty_ _ExprResult_212, const struct FColors_color& _ExprResultStack_213, FVerseFunctionProperty_ _Callee_214, FVerseStringProperty_ _ExprResult_215, const struct FColors_color& _ExprResultStack_216, FVerseFunctionProperty_ _Callee_217, FVerseStringProperty_ _ExprResult_218, const struct FColors_color& _ExprResultStack_219, FVerseFunctionProperty_ _Callee_220, FVerseStringProperty_ _ExprResult_221, const struct FColors_color& _ExprResultStack_222, FVerseFunctionProperty_ _Callee_223, FVerseStringProperty_ _ExprResult_224, const struct FColors_color& _ExprResultStack_225, FVerseFunctionProperty_ _Callee_226, FVerseStringProperty_ _ExprResult_227, const struct FColors_color& _ExprResultStack_228, FVerseFunctionProperty_ _Callee_229, FVerseStringProperty_ _ExprResult_230, const struct FColors_color& _ExprResultStack_231, FVerseFunctionProperty_ _Callee_232, FVerseStringProperty_ _ExprResult_233, const struct FColors_color& _ExprResultStack_234, FVerseFunctionProperty_ _Callee_235, FVerseStringProperty_ _ExprResult_236, const struct FColors_color& _ExprResultStack_237, FVerseFunctionProperty_ _Callee_238, FVerseStringProperty_ _ExprResult_239, const struct FColors_color& _ExprResultStack_240, FVerseFunctionProperty_ _Callee_241, FVerseStringProperty_ _ExprResult_242, const struct FColors_color& _ExprResultStack_243, FVerseFunctionProperty_ _Callee_244, FVerseStringProperty_ _ExprResult_245, const struct FColors_color& _ExprResultStack_246, FVerseFunctionProperty_ _Callee_247, FVerseStringProperty_ _ExprResult_248, const struct FColors_color& _ExprResultStack_249, FVerseFunctionProperty_ _Callee_250, FVerseStringProperty_ _ExprResult_251, const struct FColors_color& _ExprResultStack_252, FVerseFunctionProperty_ _Callee_253, FVerseStringProperty_ _ExprResult_254, const struct FColors_color& _ExprResultStack_255, FVerseFunctionProperty_ _Callee_256, FVerseStringProperty_ _ExprResult_257, const struct FColors_color& _ExprResultStack_258, FVerseFunctionProperty_ _Callee_259, FVerseStringProperty_ _ExprResult_260, const struct FColors_color& _ExprResultStack_261, FVerseFunctionProperty_ _Callee_262, FVerseStringProperty_ _ExprResult_263, const struct FColors_color& _ExprResultStack_264, FVerseFunctionProperty_ _Callee_265, FVerseStringProperty_ _ExprResult_266, const struct FColors_color& _ExprResultStack_267, FVerseFunctionProperty_ _Callee_268, FVerseStringProperty_ _ExprResult_269, const struct FColors_color& _ExprResultStack_270, FVerseFunctionProperty_ _Callee_271, FVerseStringProperty_ _ExprResult_272, const struct FColors_color& _ExprResultStack_273, FVerseFunctionProperty_ _Callee_274, FVerseStringProperty_ _ExprResult_275, const struct FColors_color& _ExprResultStack_276, FVerseFunctionProperty_ _Callee_277, FVerseStringProperty_ _ExprResult_278, const struct FColors_color& _ExprResultStack_279, FVerseFunctionProperty_ _Callee_280, FVerseStringProperty_ _ExprResult_281, const struct FColors_color& _ExprResultStack_282, FVerseFunctionProperty_ _Callee_283, FVerseStringProperty_ _ExprResult_284, const struct FColors_color& _ExprResultStack_285, FVerseFunctionProperty_ _Callee_286, FVerseStringProperty_ _ExprResult_287, const struct FColors_color& _ExprResultStack_288, FVerseFunctionProperty_ _Callee_289, FVerseStringProperty_ _ExprResult_290, const struct FColors_color& _ExprResultStack_291, FVerseFunctionProperty_ _Callee_292, FVerseStringProperty_ _ExprResult_293, const struct FColors_color& _ExprResultStack_294, FVerseFunctionProperty_ _Callee_295, FVerseStringProperty_ _ExprResult_296, const struct FColors_color& _ExprResultStack_297, FVerseFunctionProperty_ _Callee_298, FVerseStringProperty_ _ExprResult_299, const struct FColors_color& _ExprResultStack_300, FVerseFunctionProperty_ _Callee_301, FVerseStringProperty_ _ExprResult_302, const struct FColors_color& _ExprResultStack_303, FVerseFunctionProperty_ _Callee_304, FVerseStringProperty_ _ExprResult_305, const struct FColors_color& _ExprResultStack_306, FVerseFunctionProperty_ _Callee_307, FVerseStringProperty_ _ExprResult_308, const struct FColors_color& _ExprResultStack_309, FVerseFunctionProperty_ _Callee_310, FVerseStringProperty_ _ExprResult_311, const struct FColors_color& _ExprResultStack_312, FVerseFunctionProperty_ _Callee_313, FVerseStringProperty_ _ExprResult_314, const struct FColors_color& _ExprResultStack_315, FVerseFunctionProperty_ _Callee_316, FVerseStringProperty_ _ExprResult_317, const struct FColors_color& _ExprResultStack_318, FVerseFunctionProperty_ _Callee_319, FVerseStringProperty_ _ExprResult_320, const struct FColors_color& _ExprResultStack_321, FVerseFunctionProperty_ _Callee_322, FVerseStringProperty_ _ExprResult_323, const struct FColors_color& _ExprResultStack_324, FVerseFunctionProperty_ _Callee_325, FVerseStringProperty_ _ExprResult_326, const struct FColors_color& _ExprResultStack_327, FVerseFunctionProperty_ _Callee_328, FVerseStringProperty_ _ExprResult_329, const struct FColors_color& _ExprResultStack_330, FVerseFunctionProperty_ _Callee_331, FVerseStringProperty_ _ExprResult_332, const struct FColors_color& _ExprResultStack_333, FVerseFunctionProperty_ _Callee_334, FVerseStringProperty_ _ExprResult_335, const struct FColors_color& _ExprResultStack_336, FVerseFunctionProperty_ _Callee_337, FVerseStringProperty_ _ExprResult_338, const struct FColors_color& _ExprResultStack_339, FVerseFunctionProperty_ _Callee_340, FVerseStringProperty_ _ExprResult_341, const struct FColors_color& _ExprResultStack_342, FVerseFunctionProperty_ _Callee_343, FVerseStringProperty_ _ExprResult_344, const struct FColors_color& _ExprResultStack_345, FVerseFunctionProperty_ _Callee_346, FVerseStringProperty_ _ExprResult_347, const struct FColors_color& _ExprResultStack_348, FVerseFunctionProperty_ _Callee_349, FVerseStringProperty_ _ExprResult_350, const struct FColors_color& _ExprResultStack_351, FVerseFunctionProperty_ _Callee_352, FVerseStringProperty_ _ExprResult_353, const struct FColors_color& _ExprResultStack_354, FVerseFunctionProperty_ _Callee_355, FVerseStringProperty_ _ExprResult_356, const struct FColors_color& _ExprResultStack_357, FVerseFunctionProperty_ _Callee_358, FVerseStringProperty_ _ExprResult_359, const struct FColors_color& _ExprResultStack_360, FVerseFunctionProperty_ _Callee_361, FVerseStringProperty_ _ExprResult_362, const struct FColors_color& _ExprResultStack_363, FVerseFunctionProperty_ _Callee_364, FVerseStringProperty_ _ExprResult_365, const struct FColors_color& _ExprResultStack_366, FVerseFunctionProperty_ _Callee_367, FVerseStringProperty_ _ExprResult_368, const struct FColors_color& _ExprResultStack_369, FVerseFunctionProperty_ _Callee_370, FVerseStringProperty_ _ExprResult_371, const struct FColors_color& _ExprResultStack_372, FVerseFunctionProperty_ _Callee_373, FVerseStringProperty_ _ExprResult_374, const struct FColors_color& _ExprResultStack_375, FVerseFunctionProperty_ _Callee_376, FVerseStringProperty_ _ExprResult_377, const struct FColors_color& _ExprResultStack_378, FVerseFunctionProperty_ _Callee_379, FVerseStringProperty_ _ExprResult_380, const struct FColors_color& _ExprResultStack_381, FVerseFunctionProperty_ _Callee_382, FVerseStringProperty_ _ExprResult_383, const struct FColors_color& _ExprResultStack_384, FVerseFunctionProperty_ _Callee_385, FVerseStringProperty_ _ExprResult_386, const struct FColors_color& _ExprResultStack_387, FVerseFunctionProperty_ _Callee_388, FVerseStringProperty_ _ExprResult_389, const struct FColors_color& _ExprResultStack_390, FVerseFunctionProperty_ _Callee_391, FVerseStringProperty_ _ExprResult_392, const struct FColors_color& _ExprResultStack_393, FVerseFunctionProperty_ _Callee_394, FVerseStringProperty_ _ExprResult_395, const struct FColors_color& _ExprResultStack_396, FVerseFunctionProperty_ _Callee_397, FVerseStringProperty_ _ExprResult_398, const struct FColors_color& _ExprResultStack_399, FVerseFunctionProperty_ _Callee_400, FVerseStringProperty_ _ExprResult_401, const struct FColors_color& _ExprResultStack_402, FVerseFunctionProperty_ _Callee_403, FVerseStringProperty_ _ExprResult_404, const struct FColors_color& _ExprResultStack_405, FVerseFunctionProperty_ _Callee_406, FVerseStringProperty_ _ExprResult_407, const struct FColors_color& _ExprResultStack_408, FVerseFunctionProperty_ _Callee_409, FVerseStringProperty_ _ExprResult_410, const struct FColors_color& _ExprResultStack_411, FVerseFunctionProperty_ _Callee_412, FVerseStringProperty_ _ExprResult_413, const struct FColors_color& _ExprResultStack_414, FVerseFunctionProperty_ _Callee_415, FVerseStringProperty_ _ExprResult_416, const struct FColors_color& _ExprResultStack_417, FVerseFunctionProperty_ _Callee_418, FVerseStringProperty_ _ExprResult_419, const struct FColors_color& _ExprResultStack_420, FVerseFunctionProperty_ _Callee_421, FVerseStringProperty_ _ExprResult_422, const struct FColors_color& _ExprResultStack_423, FVerseFunctionProperty_ _Callee_424, FVerseStringProperty_ _ExprResult_425, const struct FColors_color& _ExprResultStack_426, FVerseFunctionProperty_ _Callee_427, FVerseStringProperty_ _ExprResult_428, const struct FColors_color& _ExprResultStack_429, FVerseFunctionProperty_ _Callee_430, FVerseStringProperty_ _ExprResult_431, const struct FColors_color& _ExprResultStack_432, FVerseFunctionProperty_ _Callee_433, FVerseStringProperty_ _ExprResult_434, const struct FColors_color& _ExprResultStack_435, FVerseFunctionProperty_ _Callee_436, FVerseStringProperty_ _ExprResult_437, const struct FColors_color& _ExprResultStack_438, FVerseFunctionProperty_ _Callee_439, FVerseStringProperty_ _ExprResult_440);
};

// 0x0 (0x28 - 0x28)
// VerseClass Verse.Random
class URandom : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Random");
		return Clss;
	}

	TArray<FVerseDynamicProperty_> _L_2fVerse_2eorg_2fRandom_N_RShuffle_L_N_Kt_20where_20t_R(const TArray<FVerseDynamicProperty_>& __verse_0xB2CDDD72_Argument, int64 __verse_0x5B0C19A9_Length_1, const TArray<FVerseDynamicProperty_>& __verse_0x00000000__2, const TArray<FVerseDynamicProperty_>& __verse_0x95D09D0E_Result_1, const struct FVerseIntRange& _ForIterable_0, int64 __verse_0x95676A67_i_5, int64 __verse_0x7BC8DF75_j_7, FVerseFunctionProperty_ _Callee_1, const struct FTuple_Lint_Mint_R& _ExprResult_2, FVerseDynamicProperty_ __verse_0x58C1F360_Temp_8, FOptionProperty_ _ExprResultStack_3, FReferenceProperty_ _ExprResultStack_4, FVerseDynamicProperty_ _ExprResultStack_5, FOptionProperty_ _ExprResultStack_6, FReferenceProperty_ _ExprResultStack_7);
	int64 _L_2fVerse_2eorg_2fRandom_N_RGetRandomInt_L_Nint_M_Nint_R(const struct FTuple_Lint_Mint_R& __verse_0xB2CDDD72_Argument);
	double _L_2fVerse_2eorg_2fRandom_N_RGetRandomFloat_L_Nfloat_M_Nfloat_R(const struct FTuple_Lfloat_Mfloat_R& __verse_0xB2CDDD72_Argument);
	void _InitCDO();
};

// 0x20 (0x170 - 0x150)
// VerseClass Verse.task_Verse_event$Await
class UTask_Verse_event_Await : public UConcurrency_task
{
public:
	class UVerse_event*                          _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x158(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_86A0[0x7];                                     // Fixing Size After Last Property..
	FVerseDynamicProperty_                       _RetVal;                                           // 0x160(0x10)(Parm, OutParm, ReturnParm, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_Verse_event$Await");
		return Clss;
	}

	int64 Update();
};

// 0x8 (0x30 - 0x28)
// VerseClass Verse.Verse
class UVerse : public UObject
{
public:
	double                                       __verse_0x34BB10F0_PiFloat;                        // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Verse");
		return Clss;
	}

	class UClass* _L_2fVerse_2eorg_2fVerse_N_Rsubscribable_L_Ntype_R(class UClass* __verse_0xB2CDDD72_Argument);
	class UClass* _L_2fVerse_2eorg_2fVerse_N_Rsubscribable(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, FVerseFunctionProperty_ _Callee_0);
	class UClass* _L_2fVerse_2eorg_2fVerse_N_Rsignalable_L_Ntype_R(class UClass* __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fVerse_2eorg_2fVerse_N_Roperator_U_2eSlice_U_L_N_Kt_M_Ntuple_L_R_M_Nint_M_Nint_20where_20t_R(const struct FTuple_L_Kany_Mtuple_L_R_Mtuple_Lint_Mint_R_R& __verse_0xB2CDDD72_Argument, const TArray<FVerseDynamicProperty_>& _ExprResult_0, FOptionProperty_ _ExprResultStack_1, FOptionProperty_ _ExprResultStack_2, FOptionProperty_ _ExprResultStack_3, int64 _ExprResult_4, const TArray<FVerseDynamicProperty_>& __verse_0x00000000__2, const TArray<FVerseDynamicProperty_>& _ForResult_5, const struct FVerseIntRange& _ForIterable_6, int64 __verse_0x98DC86C6_Index_5, FVerseDynamicProperty_ _ExprResult_7, FOptionProperty_ _ExprResultStack_8);
	FOptionProperty_ _L_2fVerse_2eorg_2fVerse_N_Roperator_U_2eSlice_U_L_N_Kt_M_Ntuple_L_R_M_Nint_20where_20t_R(const struct FTuple_L_Kany_Mtuple_L_R_Mint_R& __verse_0xB2CDDD72_Argument, const TArray<FVerseDynamicProperty_>& _ExprResult_0, FOptionProperty_ _ExprResultStack_1, FOptionProperty_ _ExprResultStack_2, int64 _ExprResult_3, const TArray<FVerseDynamicProperty_>& __verse_0x00000000__2, const TArray<FVerseDynamicProperty_>& _ForResult_4, const struct FVerseIntRange& _ForIterable_5, int64 _ExprResult_6, const TArray<FVerseDynamicProperty_>& __verse_0x00000000__5, int64 __verse_0x98DC86C6_Index_6, FVerseDynamicProperty_ _ExprResult_7, FOptionProperty_ _ExprResultStack_8);
	FOptionProperty_ _L_2fVerse_2eorg_2fVerse_N_Roperator_U_2eReplaceFirstElement_U_L_N_Kt_M_Ntuple_L_R_M_Nt_M_Nt_20where_20t_R(const struct FTuple_L_Kany_Mtuple_L_R_Mtuple_Lany_Many_R_R& __verse_0xB2CDDD72_Argument, const TArray<FVerseDynamicProperty_>& _ExprResult_0, const TArray<int64>& __verse_0x35C8B160_Indices_1, const TArray<int64>& _ForResult_1, const TArray<FVerseDynamicProperty_>& _ForIterable_2, int64 __verse_0x98DC86C6_Index_4, int64 _ForLength_3, FVerseDynamicProperty_ __verse_0x68EE242C_Element_4, FVerseDynamicProperty_ InvokeResultDummy_4, FOptionProperty_ _ExprResultStack_5, int64 _ExprResult_6, FOptionProperty_ _ExprResultStack_7, FVerseFunctionProperty_ _Callee_8, const struct FTuple_L_Kany_Mtuple_L_R_Mtuple_Lint_Many_R_R& _ExprResult_9, const struct FTuple_L_R& _ExprResult_10, const struct FTuple_Lint_Many_R& _ExprResult_11, FOptionProperty_ _ExprResultStack_12);
	FOptionProperty_ _L_2fVerse_2eorg_2fVerse_N_Roperator_U_2eReplaceElement_U_L_N_Kt_M_Ntuple_L_R_M_Nint_M_Nt_20where_20t_R(const struct FTuple_L_Kany_Mtuple_L_R_Mtuple_Lint_Many_R_R& __verse_0xB2CDDD72_Argument, const TArray<FVerseDynamicProperty_>& _ExprResult_0, FOptionProperty_ _ExprResultStack_1, FOptionProperty_ _ExprResultStack_2, int64 _ExprResult_3, const TArray<FVerseDynamicProperty_>& __verse_0x00000000__2, const TArray<FVerseDynamicProperty_>& _ForResult_4, const TArray<FVerseDynamicProperty_>& _ForIterable_5, int64 __verse_0x98DC86C6_Index_5, int64 _ForLength_6, FVerseDynamicProperty_ __verse_0x6D6B7666_InputElement_5, FVerseDynamicProperty_ _ExprResult_7, FVerseDynamicProperty_ InvokeResultDummy_8, FOptionProperty_ _ExprResultStack_9, FVerseDynamicProperty_ _ExprResult_10, FVerseDynamicProperty_ _ExprResult_11);
	TArray<FVerseDynamicProperty_> _L_2fVerse_2eorg_2fVerse_N_Roperator_U_2eReplaceAllElements_U_L_N_Kt_M_Ntuple_L_R_M_Nt_M_Nt_20where_20t_R(const struct FTuple_L_Kany_Mtuple_L_R_Mtuple_Lany_Many_R_R& __verse_0xB2CDDD72_Argument, const TArray<FVerseDynamicProperty_>& _ForResult_0, const TArray<FVerseDynamicProperty_>& _ForIterable_1, int64 _ForIndex_2, int64 _ForLength_3, FVerseDynamicProperty_ __verse_0x6D6B7666_InputElement_3, FVerseDynamicProperty_ _ExprResult_4, FVerseDynamicProperty_ InvokeResultDummy_5, FOptionProperty_ _ExprResultStack_6);
	TArray<FVerseDynamicProperty_> _L_2fVerse_2eorg_2fVerse_N_Roperator_U_2eReplaceAll_U_L_N_Kt_M_Ntuple_L_R_M_N_Kt_M_N_Kt_20where_20t_R(const struct FTuple_L_Kany_Mtuple_L_R_Mtuple_L_Kany_M_Kany_R_R& __verse_0xB2CDDD72_Argument, int64 __verse_0x5B0C19A9_Length_1, const TArray<FVerseDynamicProperty_>& __verse_0x00000000__2, int64 __verse_0xC86D91E0_ToReplaceLength_1, const TArray<FVerseDynamicProperty_>& __verse_0x00000000__3, FVerseDynamicProperty_ InvokeResultDummy_0, FOptionProperty_ _ExprResultStack_1, FVerseDynamicProperty_ _ExprResult_2, FVerseDynamicProperty_ _ExprResult_3, const TArray<FVerseDynamicProperty_>& __verse_0x95D09D0E_Result_1, const TArray<enum class EVerseFalse>& __verse_0xFFC68BC5_Array_6, const TArray<FVerseDynamicProperty_>& _ForResult_4, int64 _ForIndex_5, int64 _ForLength_6, enum class EVerseFalse __verse_0xFB88B569_Item_8, uint8 _ExprResult_7, int64 __verse_0xABC858C7_I_1, int64 __verse_0x60194205_SliceBeginIndex_1, FOptionProperty_ _ExprResultStack_8, const TArray<FVerseDynamicProperty_>& InvokeResultDummy_9, const TArray<FVerseDynamicProperty_>& _ExprResultStack_10, FOptionProperty_ _ExprResultStack_11, FVerseFunctionProperty_ _Callee_12, const struct FTuple_L_Kany_Mtuple_L_R_Mtuple_Lint_Mint_R_R& _ExprResult_13, const struct FTuple_L_R& _ExprResult_14, const struct FTuple_Lint_Mint_R& _ExprResult_15, uint8 __verse_0x8F8294E0_Matches_10, int64 __verse_0x4567EDD5_J_10, FOptionProperty_ _ExprResultStack_16, FVerseDynamicProperty_ InvokeResultDummy_17, FOptionProperty_ _ExprResultStack_18, FVerseDynamicProperty_ _ExprResultStack_19, FOptionProperty_ _ExprResultStack_20, FVerseDynamicProperty_ _ExprResultStack_21, FOptionProperty_ _ExprResultStack_22, FOptionProperty_ _ExprResultStack_23, const TArray<FVerseDynamicProperty_>& InvokeResultDummy_24, const TArray<FVerseDynamicProperty_>& _ExprResultStack_25, const TArray<FVerseDynamicProperty_>& _ExprResultStack_26, FOptionProperty_ _ExprResultStack_27, FVerseFunctionProperty_ _Callee_28, const struct FTuple_L_Kany_Mtuple_L_R_Mtuple_Lint_Mint_R_R& _ExprResult_29, const struct FTuple_L_R& _ExprResult_30, const struct FTuple_Lint_Mint_R& _ExprResult_31);
	FOptionProperty_ _L_2fVerse_2eorg_2fVerse_N_Roperator_U_2eRemoveFirstElement_U_L_N_Kt_M_Ntuple_L_R_M_Nt_20where_20t_R(const struct FTuple_L_Kany_Mtuple_L_R_Many_R& __verse_0xB2CDDD72_Argument, const TArray<FVerseDynamicProperty_>& _ExprResult_0, const TArray<int64>& __verse_0x35C8B160_Indices_1, const TArray<int64>& _ForResult_1, const TArray<FVerseDynamicProperty_>& _ForIterable_2, int64 __verse_0x98DC86C6_Index_4, int64 _ForLength_3, FVerseDynamicProperty_ __verse_0x68EE242C_Element_4, FVerseDynamicProperty_ InvokeResultDummy_4, FOptionProperty_ _ExprResultStack_5, int64 _ExprResult_6, FOptionProperty_ _ExprResultStack_7, FVerseFunctionProperty_ _Callee_8, const struct FTuple_L_Kany_Mtuple_L_R_Mint_R& _ExprResult_9, const struct FTuple_L_R& _ExprResult_10, FOptionProperty_ _ExprResultStack_11);
	FOptionProperty_ _L_2fVerse_2eorg_2fVerse_N_Roperator_U_2eRemoveElement_U_L_N_Kt_M_Ntuple_L_R_M_Nint_20where_20t_R(const struct FTuple_L_Kany_Mtuple_L_R_Mint_R& __verse_0xB2CDDD72_Argument, const TArray<FVerseDynamicProperty_>& _ExprResult_0, FOptionProperty_ _ExprResultStack_1, FOptionProperty_ _ExprResultStack_2, int64 _ExprResult_3, const TArray<FVerseDynamicProperty_>& __verse_0x00000000__2, const TArray<FVerseDynamicProperty_>& _ForResult_4, const struct FVerseIntRange& _ForIterable_5, int64 _ExprResult_6, const TArray<FVerseDynamicProperty_>& __verse_0x00000000__5, int64 __verse_0x720ECD68_OutputIndex_6, FVerseDynamicProperty_ _ExprResult_7, FOptionProperty_ _ExprResultStack_8, int64 _ExprResult_9, FOptionProperty_ _ExprResultStack_10);
	TArray<FVerseDynamicProperty_> _L_2fVerse_2eorg_2fVerse_N_Roperator_U_2eRemoveAllElements_U_L_N_Kt_M_Ntuple_L_R_M_Nt_20where_20t_R(const struct FTuple_L_Kany_Mtuple_L_R_Many_R& __verse_0xB2CDDD72_Argument, const TArray<FVerseDynamicProperty_>& _ForResult_0, const TArray<FVerseDynamicProperty_>& _ForIterable_1, int64 _ForIndex_2, int64 _ForLength_3, FVerseDynamicProperty_ __verse_0x6D6B7666_InputElement_3, FVerseDynamicProperty_ InvokeResultDummy_4, FOptionProperty_ _ExprResultStack_5, FVerseDynamicProperty_ _ExprResult_6);
	FOptionProperty_ _L_2fVerse_2eorg_2fVerse_N_Roperator_U_2eRemove_U_L_N_Kt_M_Ntuple_L_R_M_Nint_M_Nint_20where_20t_R(const struct FTuple_L_Kany_Mtuple_L_R_Mtuple_Lint_Mint_R_R& __verse_0xB2CDDD72_Argument, const TArray<FVerseDynamicProperty_>& _ExprResult_0, FOptionProperty_ _ExprResultStack_1, FOptionProperty_ _ExprResultStack_2, FOptionProperty_ _ExprResultStack_3, int64 _ExprResult_4, const TArray<FVerseDynamicProperty_>& __verse_0x00000000__2, const TArray<FVerseDynamicProperty_>& _ForResult_5, const TArray<FVerseDynamicProperty_>& _ForIterable_6, int64 __verse_0x98DC86C6_Index_5, int64 _ForLength_7, FVerseDynamicProperty_ __verse_0x68EE242C_Element_5, FOptionProperty_ _ExprResultStack_8, FOptionProperty_ _ExprResultStack_9, FVerseDynamicProperty_ _ExprResult_10);
	FOptionProperty_ _L_2fVerse_2eorg_2fVerse_N_Roperator_U_2eIsFinite_U_L_Nfloat_M_Ntuple_L_R_R(const struct FTuple_Lfloat_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument, enum class EVerseFalse _ExprResult_0, double _ExprResult_1, FOptionProperty_ _ExprResultStack_2, FOptionProperty_ _ExprResultStack_3);
	FOptionProperty_ _L_2fVerse_2eorg_2fVerse_N_Roperator_U_2eIsAlmostZero_U_L_Nfloat_M_Ntuple_L_R_M_Nfloat_R(const struct FTuple_Lfloat_Mtuple_L_R_Mfloat_R& __verse_0xB2CDDD72_Argument, uint8 _ExprResult_0, FOptionProperty_ _ExprResultStack_1);
	FOptionProperty_ _L_2fVerse_2eorg_2fVerse_N_Roperator_U_2eInsert_U_L_N_Kt_M_Ntuple_L_R_M_Nint_M_N_Kt_20where_20t_R(const struct FTuple_L_Kany_Mtuple_L_R_Mtuple_Lint_M_Kany_R_R& __verse_0xB2CDDD72_Argument, const TArray<FVerseDynamicProperty_>& _ExprResult_0, FOptionProperty_ _ExprResultStack_1, FOptionProperty_ _ExprResultStack_2, int64 _ExprResult_3, const TArray<FVerseDynamicProperty_>& __verse_0x00000000__2, const TArray<FVerseDynamicProperty_>& _ExprResultStack_4, const TArray<FVerseDynamicProperty_>& _ExprResultStack_5, FOptionProperty_ _ExprResultStack_6, FVerseFunctionProperty_ _Callee_7, const struct FTuple_L_Kany_Mtuple_L_R_Mtuple_Ltype_7b0_7d_Mint_R_R& _ExprResult_8, const struct FTuple_L_R& _ExprResult_9, const struct FTuple_Ltype_7b0_7d_Mint_R& _ExprResult_10, const TArray<FVerseDynamicProperty_>& _ExprResultStack_11, FOptionProperty_ _ExprResultStack_12, FVerseFunctionProperty_ _Callee_13, const struct FTuple_L_Kany_Mtuple_L_R_Mint_R& _ExprResult_14, const struct FTuple_L_R& _ExprResult_15);
	FOptionProperty_ _L_2fVerse_2eorg_2fVerse_N_Roperator_U_2eFind_U_L_N_Kt_M_Ntuple_L_R_M_Nt_20where_20t_R(const struct FTuple_L_Kany_Mtuple_L_R_Many_R& __verse_0xB2CDDD72_Argument, int64 _ExprResult_0, const TArray<int64>& __verse_0x982D8E7C_Results_1, const TArray<int64>& _ForResult_1, const TArray<FVerseDynamicProperty_>& _ForIterable_2, int64 __verse_0x98DC86C6_Index_4, int64 _ForLength_3, FVerseDynamicProperty_ __verse_0x68EE242C_Element_4, FVerseDynamicProperty_ InvokeResultDummy_4, FOptionProperty_ _ExprResultStack_5, int64 _ExprResult_6, FOptionProperty_ _ExprResultStack_7);
	class UClass* _L_2fVerse_2eorg_2fVerse_N_Rlistenable(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, FVerseFunctionProperty_ _Callee_0);
	class UClass* _L_2fVerse_2eorg_2fVerse_N_Rlistenable_L_Ntype_R(class UClass* __verse_0xB2CDDD72_Argument);
	class UClass* _L_2fVerse_2eorg_2fVerse_N_Revent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, FVerseFunctionProperty_ _Callee_0);
	class UClass* _L_2fVerse_2eorg_2fVerse_N_Revent_L_Ntype_R(class UClass* __verse_0xB2CDDD72_Argument);
	FVerseStringProperty_ _L_2fVerse_2eorg_2fVerse_N_RToString_L_Nchar_R(uint8 __verse_0xB2CDDD72_Argument);
	FVerseStringProperty_ _L_2fVerse_2eorg_2fVerse_N_RToString_L_N_Kchar_R(FVerseStringProperty_ __verse_0xB2CDDD72_Argument);
	FVerseStringProperty_ _L_2fVerse_2eorg_2fVerse_N_RToString_L_Nint_R(int64 __verse_0xB2CDDD72_Argument);
	FVerseStringProperty_ _L_2fVerse_2eorg_2fVerse_N_RToString_L_Nchar32_R(int32 __verse_0xB2CDDD72_Argument);
	FVerseStringProperty_ _L_2fVerse_2eorg_2fVerse_N_RToString_L_Nfloat_R(double __verse_0xB2CDDD72_Argument);
	double _L_2fVerse_2eorg_2fVerse_N_RTanh_L_Nfloat_R(double __verse_0xB2CDDD72_Argument);
	double _L_2fVerse_2eorg_2fVerse_N_RTan_L_Nfloat_R(double __verse_0xB2CDDD72_Argument);
	double _L_2fVerse_2eorg_2fVerse_N_RSqrt_L_Nfloat_R(double __verse_0xB2CDDD72_Argument);
	double _L_2fVerse_2eorg_2fVerse_N_RSinh_L_Nfloat_R(double __verse_0xB2CDDD72_Argument);
	double _L_2fVerse_2eorg_2fVerse_N_RSin_L_Nfloat_R(double __verse_0xB2CDDD72_Argument);
	int64 _L_2fVerse_2eorg_2fVerse_N_RSgn_L_Nint_R(int64 __verse_0xB2CDDD72_Argument, FOptionProperty_ _ExprResultStack_0, FOptionProperty_ _ExprResultStack_1);
	double _L_2fVerse_2eorg_2fVerse_N_RSgn_L_Nfloat_R(double __verse_0xB2CDDD72_Argument, FVerseDynamicProperty_ InvokeResultDummy_0, FOptionProperty_ _ExprResultStack_1, FVerseDynamicProperty_ _ExprResult_2, FVerseDynamicProperty_ _ExprResult_3, FOptionProperty_ _ExprResultStack_4, FOptionProperty_ _ExprResultStack_5);
	FOptionProperty_ _L_2fVerse_2eorg_2fVerse_N_RRound_L_Nfloat_R(double __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fVerse_2eorg_2fVerse_N_RQuotient_L_Nint_M_Nint_R(const struct FTuple_Lint_Mint_R& __verse_0xB2CDDD72_Argument);
	void _L_2fVerse_2eorg_2fVerse_N_RPrint_L_N_Kchar_M_Nfloat_M_Ncolor_R(const struct FTuple_L_Kchar_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_R& __verse_0xB2CDDD72_Argument);
	double _L_2fVerse_2eorg_2fVerse_N_RPow_L_Nfloat_M_Nfloat_R(const struct FTuple_Lfloat_Mfloat_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fVerse_2eorg_2fVerse_N_RMod_L_Nint_M_Nint_R(const struct FTuple_Lint_Mint_R& __verse_0xB2CDDD72_Argument);
	int64 _L_2fVerse_2eorg_2fVerse_N_RMin_L_Nint_M_Nint_R(const struct FTuple_Lint_Mint_R& __verse_0xB2CDDD72_Argument, FOptionProperty_ _ExprResultStack_0);
	double _L_2fVerse_2eorg_2fVerse_N_RMin_L_Nfloat_M_Nfloat_R(const struct FTuple_Lfloat_Mfloat_R& __verse_0xB2CDDD72_Argument, FOptionProperty_ _ExprResultStack_0, FVerseDynamicProperty_ _ExprResultStack_1, FOptionProperty_ _ExprResultStack_2, FVerseDynamicProperty_ _ExprResult_3, FVerseDynamicProperty_ _ExprResult_4);
	int64 _L_2fVerse_2eorg_2fVerse_N_RMax_L_Nint_M_Nint_R(const struct FTuple_Lint_Mint_R& __verse_0xB2CDDD72_Argument, FOptionProperty_ _ExprResultStack_0);
	double _L_2fVerse_2eorg_2fVerse_N_RMax_L_Nfloat_M_Nfloat_R(const struct FTuple_Lfloat_Mfloat_R& __verse_0xB2CDDD72_Argument, FOptionProperty_ _ExprResultStack_0, FVerseDynamicProperty_ _ExprResultStack_1, FOptionProperty_ _ExprResultStack_2, FVerseDynamicProperty_ _ExprResult_3, FVerseDynamicProperty_ _ExprResult_4);
	class UVerse_message* _L_2fVerse_2eorg_2fVerse_N_RMakeMessageInternal_L_N_Kchar_M_N_Kchar_M_N_5b_Kchar_5dlocalizable__value_R(const struct FTuple_L_Kchar_M_Kchar_M_5b_Kchar_5dlocalizable__value_R& __verse_0xB2CDDD72_Argument);
	class UVerse_localizable_int* _L_2fVerse_2eorg_2fVerse_N_RMakeLocalizableValue_L_Nint_R(int64 __verse_0xB2CDDD72_Argument, uint64 _InstancingGraph_0);
	class UVerse_localizable_string* _L_2fVerse_2eorg_2fVerse_N_RMakeLocalizableValue_L_N_Kchar_R(FVerseStringProperty_ __verse_0xB2CDDD72_Argument, uint64 _InstancingGraph_0);
	class UVerse_localizable_float* _L_2fVerse_2eorg_2fVerse_N_RMakeLocalizableValue_L_Nfloat_R(double __verse_0xB2CDDD72_Argument, uint64 _InstancingGraph_0);
	double _L_2fVerse_2eorg_2fVerse_N_RLog_L_Nfloat_M_Nfloat_R(const struct FTuple_Lfloat_Mfloat_R& __verse_0xB2CDDD72_Argument, double _ExprResultStack_0, FVerseFunctionProperty_ _Callee_1, double _ExprResultStack_2, FVerseFunctionProperty_ _Callee_3);
	FVerseStringProperty_ _L_2fVerse_2eorg_2fVerse_N_RLocalize_L_Nfloat_M_Nlocale_R(const struct FTuple_Lfloat_M_QWhere_Nlocale_R& __verse_0xB2CDDD72_Argument, FVerseFunctionProperty_ _Callee_0);
	FVerseStringProperty_ _L_2fVerse_2eorg_2fVerse_N_RLocalize_L_Nint_M_Nlocale_R(const struct FTuple_Lint_M_QWhere_Nlocale_R& __verse_0xB2CDDD72_Argument, FVerseFunctionProperty_ _Callee_0);
	FVerseStringProperty_ _L_2fVerse_2eorg_2fVerse_N_RLocalize_L_N_Kchar_M_Nlocale_R(const struct FTuple_L_Kchar_M_QWhere_Nlocale_R& __verse_0xB2CDDD72_Argument);
	FVerseStringProperty_ _L_2fVerse_2eorg_2fVerse_N_RLocalize_L_Nmessage_R(class UVerse_message* __verse_0xB2CDDD72_Argument);
	double _L_2fVerse_2eorg_2fVerse_N_RLn_L_Nfloat_R(double __verse_0xB2CDDD72_Argument);
	double _L_2fVerse_2eorg_2fVerse_N_RLerp_L_Nfloat_M_Nfloat_M_Nfloat_R(const struct FTuple_Lfloat_Mfloat_Mfloat_R& __verse_0xB2CDDD72_Argument);
	FVerseStringProperty_ _L_2fVerse_2eorg_2fVerse_N_RJoin_L_N_K_Kchar_M_N_Kchar_R(const struct FTuple_L_K_Kchar_M_Kchar_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fVerse_2eorg_2fVerse_N_RIsAlmostEqual_L_Nfloat_M_Nfloat_M_Nfloat_R(const struct FTuple_Lfloat_Mfloat_Mfloat_R& __verse_0xB2CDDD72_Argument, uint8 _ExprResult_0, FOptionProperty_ _ExprResultStack_1);
	FOptionProperty_ _L_2fVerse_2eorg_2fVerse_N_RInt_L_Nfloat_R(double __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fVerse_2eorg_2fVerse_N_RFloor_L_Nfloat_R(double __verse_0xB2CDDD72_Argument);
	double _L_2fVerse_2eorg_2fVerse_N_RExp_L_Nfloat_R(double __verse_0xB2CDDD72_Argument);
	enum class EVerseFalse _L_2fVerse_2eorg_2fVerse_N_RErr_L_N_Kchar_R(FVerseStringProperty_ __verse_0xB2CDDD72_Argument);
	double _L_2fVerse_2eorg_2fVerse_N_RCosh_L_Nfloat_R(double __verse_0xB2CDDD72_Argument);
	double _L_2fVerse_2eorg_2fVerse_N_RCos_L_Nfloat_R(double __verse_0xB2CDDD72_Argument);
	TArray<FVerseDynamicProperty_> _L_2fVerse_2eorg_2fVerse_N_RConcatenate_L_N_K_Kt_20where_20t_R(const TArray<TArray<FVerseDynamicProperty_>>& __verse_0xB2CDDD72_Argument, FVerseDynamicProperty_ InvokeResultDummy_0, FOptionProperty_ _ExprResultStack_1, FVerseDynamicProperty_ _ExprResult_2, int64 _ExprResult_3, const TArray<TArray<FVerseDynamicProperty_>>& __verse_0x00000000__2, FVerseDynamicProperty_ _ExprResult_4, const TArray<FVerseDynamicProperty_>& __verse_0x95D09D0E_Result_1, FOptionProperty_ _ExprResultStack_5, FVerseDynamicProperty_ InvokeResultDummy_6, FOptionProperty_ _ExprResultStack_7, FVerseDynamicProperty_ _ExprResult_8, int64 _ExprResult_9, const TArray<TArray<FVerseDynamicProperty_>>& __verse_0x00000000__4, FVerseDynamicProperty_ _ExprResult_10, const TArray<FVerseDynamicProperty_>& __verse_0xBBE53E70_A0_3, FOptionProperty_ _ExprResultStack_11, const TArray<FVerseDynamicProperty_>& __verse_0xDE8282C8_A1_3, FOptionProperty_ _ExprResultStack_12, FVerseDynamicProperty_ InvokeResultDummy_13, FOptionProperty_ _ExprResultStack_14, FVerseDynamicProperty_ _ExprResult_15, int64 _ExprResult_16, const TArray<TArray<FVerseDynamicProperty_>>& __verse_0x00000000__6, FVerseDynamicProperty_ _ExprResult_17, const TArray<FVerseDynamicProperty_>& __verse_0xBBE53E70_A0_5, FOptionProperty_ _ExprResultStack_18, const TArray<FVerseDynamicProperty_>& __verse_0xDE8282C8_A1_5, FOptionProperty_ _ExprResultStack_19, const TArray<FVerseDynamicProperty_>& __verse_0x302D37DA_A2_5, FOptionProperty_ _ExprResultStack_20, const TArray<FVerseDynamicProperty_>& _ExprResultStack_21, FOptionProperty_ _ExprResultStack_22, int64 _ExprResult_23, const TArray<TArray<FVerseDynamicProperty_>>& __verse_0x00000000__8, int64 __verse_0x06CC5305_Midpoint_7, FOptionProperty_ _ExprResultStack_24, int64 _ExprResult_25, const TArray<TArray<FVerseDynamicProperty_>>& __verse_0x00000000__9, const TArray<TArray<FVerseDynamicProperty_>>& __verse_0xBBE53E70_A0_7, const TArray<FVerseDynamicProperty_>& __verse_0xFFC68BC5_Array_10, FOptionProperty_ _ExprResultStack_26, FVerseFunctionProperty_ _Callee_27, const struct FTuple_L_Kany_Mtuple_L_R_Mtuple_Lint_Mint_R_R& _ExprResult_28, const TArray<FVerseDynamicProperty_>& _ExprResult_29, const TArray<TArray<FVerseDynamicProperty_>>& __verse_0xFFC68BC5_Array_11, const TArray<FVerseDynamicProperty_>& _ForResult_30, int64 _ForIndex_31, int64 _ForLength_32, const TArray<FVerseDynamicProperty_>& __verse_0xFB88B569_Item_13, FVerseDynamicProperty_ _ExprResult_33, const struct FTuple_L_R& _ExprResult_34, const struct FTuple_Ltype_7b0_7d_Mint_R& _ExprResult_35, const TArray<TArray<FVerseDynamicProperty_>>& _ForResult_36, int64 _ForIndex_37, int64 _ForLength_38, FVerseDynamicProperty_ __verse_0xFB88B569_Item_15, const TArray<FVerseDynamicProperty_>& _ExprResult_39, const TArray<TArray<FVerseDynamicProperty_>>& __verse_0xDE8282C8_A1_7, const TArray<FVerseDynamicProperty_>& __verse_0xFFC68BC5_Array_16, FOptionProperty_ _ExprResultStack_40, FVerseFunctionProperty_ _Callee_41, const struct FTuple_L_Kany_Mtuple_L_R_Mtuple_Lint_Mint_R_R& _ExprResult_42, const TArray<FVerseDynamicProperty_>& _ExprResult_43, const TArray<TArray<FVerseDynamicProperty_>>& __verse_0xFFC68BC5_Array_17, const TArray<FVerseDynamicProperty_>& _ForResult_44, int64 _ForIndex_45, int64 _ForLength_46, const TArray<FVerseDynamicProperty_>& __verse_0xFB88B569_Item_19, FVerseDynamicProperty_ _ExprResult_47, const struct FTuple_L_R& _ExprResult_48, const struct FTuple_Lint_Mint_R& _ExprResult_49, int64 _ExprResult_50, const TArray<TArray<FVerseDynamicProperty_>>& __verse_0x00000000__20, const TArray<TArray<FVerseDynamicProperty_>>& _ForResult_51, int64 _ForIndex_52, int64 _ForLength_53, FVerseDynamicProperty_ __verse_0xFB88B569_Item_22, const TArray<FVerseDynamicProperty_>& _ExprResult_54, const TArray<FVerseDynamicProperty_>& _ExprResultStack_55, FVerseFunctionProperty_ _Callee_56, const TArray<FVerseDynamicProperty_>& _ExprResultStack_57, FVerseFunctionProperty_ _Callee_58, const TArray<enum class EVerseFalse>& __verse_0xFFC68BC5_Array_23, const TArray<FVerseDynamicProperty_>& _ForResult_59, int64 _ForIndex_60, int64 _ForLength_61, enum class EVerseFalse __verse_0xFB88B569_Item_26, uint8 _ExprResult_62);
	double _L_2fVerse_2eorg_2fVerse_N_RClamp_L_Nfloat_M_Nfloat_M_Nfloat_R(const struct FTuple_Lfloat_Mfloat_Mfloat_R& __verse_0xB2CDDD72_Argument, double __verse_0x9EEF5578_Lo_1, FVerseFunctionProperty_ _Callee_0, const struct FTuple_Lfloat_Mfloat_R& _ExprResult_1, double __verse_0xB8BE74D9_Hi_1, FVerseFunctionProperty_ _Callee_2, const struct FTuple_Lfloat_Mfloat_R& _ExprResult_3, FVerseFunctionProperty_ _Callee_4, const struct FTuple_Lfloat_Mfloat_R& _ExprResult_5, double _ExprResultStack_6, FVerseFunctionProperty_ _Callee_7, const struct FTuple_Lfloat_Mfloat_R& _ExprResult_8);
	int64 _L_2fVerse_2eorg_2fVerse_N_RClamp_L_Nint_M_Nint_M_Nint_R(const struct FTuple_Lint_Mint_Mint_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fVerse_2eorg_2fVerse_N_RCeil_L_Nfloat_R(double __verse_0xB2CDDD72_Argument);
	double _L_2fVerse_2eorg_2fVerse_N_RArcTan_L_Nfloat_R(double __verse_0xB2CDDD72_Argument);
	double _L_2fVerse_2eorg_2fVerse_N_RArcTan_L_Nfloat_M_Nfloat_R(const struct FTuple_Lfloat_Mfloat_R& __verse_0xB2CDDD72_Argument);
	double _L_2fVerse_2eorg_2fVerse_N_RArcSin_L_Nfloat_R(double __verse_0xB2CDDD72_Argument);
	double _L_2fVerse_2eorg_2fVerse_N_RArcCos_L_Nfloat_R(double __verse_0xB2CDDD72_Argument);
	double _L_2fVerse_2eorg_2fVerse_N_RArTanh_L_Nfloat_R(double __verse_0xB2CDDD72_Argument);
	double _L_2fVerse_2eorg_2fVerse_N_RArSinh_L_Nfloat_R(double __verse_0xB2CDDD72_Argument);
	double _L_2fVerse_2eorg_2fVerse_N_RArCosh_L_Nfloat_R(double __verse_0xB2CDDD72_Argument);
	struct FVerse_locale Verse_locale_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap);
	struct FVerse_locale Verse_locale_Factory();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass Verse.Verse_cancelable
class UVerse_cancelable : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Verse_cancelable");
		return Clss;
	}

	void _L_2fVerse_2eorg_2fVerse_2fcancelable_N_RCancel(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
};

// 0x0 (0x28 - 0x28)
// VerseClass Verse.Verse_disposable
class UVerse_disposable : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Verse_disposable");
		return Clss;
	}

	void _L_2fVerse_2eorg_2fVerse_2fdisposable_N_RDispose(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
};

// 0x58 (0x80 - 0x28)
// VerseClass Verse.Verse_event
class UVerse_event : public UObject
{
public:
	FVerseFunctionProperty_                      __verse_0x57187737__L_2fVerse_2eorg_2fVerse_2fevent_2fevent_Lt_R_N_RGetAwaitCount; // 0x28(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x319692B4__L_2fVerse_2eorg_2fVerse_2fsignalable_2fsignalable_Lpayload_R_N_RSignal_L_Npayload_R; // 0x38(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x8DE7DBE5_Await;                          // 0x48(0x10)(InstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_86BA[0x28];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Verse_event");
		return Clss;
	}

	void _L_2fVerse_2eorg_2fVerse_2fsignalable_2fsignalable_Lpayload_R_N_RSignal_L_Npayload_R(FVerseDynamicProperty_ __verse_0xB2CDDD72_Argument);
	int64 _L_2fVerse_2eorg_2fVerse_2fevent_2fevent_Lt_R_N_RGetAwaitCount(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* Await(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass Verse.Verse_invalidatable
class UVerse_invalidatable : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Verse_invalidatable");
		return Clss;
	}

	FOptionProperty_ _L_2fVerse_2eorg_2fVerse_2finvalidatable_N_RIsValid(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
};

// 0x0 (0x28 - 0x28)
// VerseClass Verse.Verse_listenable
class UVerse_listenable : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Verse_listenable");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// VerseClass Verse.Verse_localizable_value
class UVerse_localizable_value : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Verse_localizable_value");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x8 (0x30 - 0x28)
// VerseClass Verse.Verse_localizable_float
class UVerse_localizable_float : public UVerse_localizable_value
{
public:
	double                                       __verse_0x31A8F10C_Value;                          // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Verse_localizable_float");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x8 (0x30 - 0x28)
// VerseClass Verse.Verse_localizable_int
class UVerse_localizable_int : public UVerse_localizable_value
{
public:
	int64                                        __verse_0x31A8F10C_Value;                          // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Verse_localizable_int");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x10 (0x38 - 0x28)
// VerseClass Verse.Verse_localizable_string
class UVerse_localizable_string : public UVerse_localizable_value
{
public:
	FVerseStringProperty_                        __verse_0x31A8F10C_Value;                          // 0x28(0x10)(InstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Verse_localizable_string");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x70 (0x98 - 0x28)
// VerseClass Verse.Verse_message
class UVerse_message : public UObject
{
public:
	FVerseStringProperty_                        __verse_0x589418B4_Key;                            // 0x28(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseStringProperty_                        __verse_0xEDB05B46_DefaultText;                    // 0x38(0x10)(InstancedReference, HasGetValueTypeHash)
	TMap<FVerseStringProperty_, class UVerse_localizable_value*> __verse_0x85420AD2_Substitutions;                  // 0x48(0x50)(InstancedReference, ContainsInstancedReference)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Verse_message");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass Verse.Verse_signalable
class UVerse_signalable : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Verse_signalable");
		return Clss;
	}

	void _L_2fVerse_2eorg_2fVerse_2fsignalable_2fsignalable_Lpayload_R_N_RSignal_L_Npayload_R(FVerseDynamicProperty_ __verse_0xB2CDDD72_Argument);
};

// 0x0 (0x28 - 0x28)
// VerseClass Verse.Verse_subscribable
class UVerse_subscribable : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Verse_subscribable");
		return Clss;
	}

	class UObject* _L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R(FVerseFunctionProperty_ __verse_0xB2CDDD72_Argument);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
