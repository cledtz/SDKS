#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// VerseClass VerseAssets.$SolarisSignatureFunctionOuter
class U_SolarisSignatureFunctionOuter : public UObject
{
public:

	static class UClass* StaticClass();
	static class U_SolarisSignatureFunctionOuter* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// VerseClass VerseAssets.Assets
class UAssets : public UObject
{
public:

	static class UClass* StaticClass();
	static class UAssets* GetDefaultObj();

	FVerseDynamicProperty_ _L_2fVerse_2eorg_2fAssets_N_RMakeAsset_L_NAssetType_M_N_Kchar_20where_20AssetType_R(const struct FTuple_Lany_M_Kchar_R& __verse_0xB2CDDD72_Argument);
	void _InitCDO();
};

// 0x48 (0xC8 - 0x80)
// VerseClass VerseAssets.Assets_asset
class UAssets_asset : public UVerseAssetPtr
{
public:
	FVerseFunctionProperty_                      __verse_0xFD8E69AC__L_2fVerse_2eorg_2fAssets_2fasset_N_RSyncLoad; // 0x80(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x9702F5DA__L_2fVerse_2eorg_2fAssets_2fasset_N_RAsync__Load; // 0x90(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x78F21562__L_2fVerse_2eorg_2fAssets_2fasset_N_RGetAsyncLoadEvent; // 0xA0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xE0CBA11B__L_2fVerse_2eorg_2fAssets_2fasset_N_RGetAssetType; // 0xB0(0x10)(InstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_5E5A[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAssets_asset* GetDefaultObj();

	uint8 _L_2fVerse_2eorg_2fAssets_2fasset_N_RSyncLoad(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionalProperty_ _L_2fVerse_2eorg_2fAssets_2fasset_N_RGetAsyncLoadEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionalProperty_ _L_2fVerse_2eorg_2fAssets_2fasset_N_RGetAssetType(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionalProperty_ _L_2fVerse_2eorg_2fAssets_2fasset_N_RAsync__Load(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0xC8 - 0xC8)
// VerseClass VerseAssets.Assets_animation
class UAssets_animation : public UAssets_asset
{
public:

	static class UClass* StaticClass();
	static class UAssets_animation* GetDefaultObj();

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0xC8 - 0xC8)
// VerseClass VerseAssets.Assets_animation_blueprint
class UAssets_animation_blueprint : public UAssets_asset
{
public:

	static class UClass* StaticClass();
	static class UAssets_animation_blueprint* GetDefaultObj();

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0xC8 - 0xC8)
// VerseClass VerseAssets.Assets_animation_instance
class UAssets_animation_instance : public UAssets_asset
{
public:

	static class UClass* StaticClass();
	static class UAssets_animation_instance* GetDefaultObj();

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0xC8 - 0xC8)
// VerseClass VerseAssets.Assets_client_asset
class UAssets_client_asset : public UAssets_asset
{
public:

	static class UClass* StaticClass();
	static class UAssets_client_asset* GetDefaultObj();

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0xC8 - 0xC8)
// VerseClass VerseAssets.Assets_font
class UAssets_font : public UAssets_client_asset
{
public:

	static class UClass* StaticClass();
	static class UAssets_font* GetDefaultObj();

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0xC8 - 0xC8)
// VerseClass VerseAssets.Assets_level
class UAssets_level : public UAssets_asset
{
public:

	static class UClass* StaticClass();
	static class UAssets_level* GetDefaultObj();

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0xC8 - 0xC8)
// VerseClass VerseAssets.Assets_material
class UAssets_material : public UAssets_asset
{
public:

	static class UClass* StaticClass();
	static class UAssets_material* GetDefaultObj();

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0xC8 - 0xC8)
// VerseClass VerseAssets.Assets_mesh
class UAssets_mesh : public UAssets_asset
{
public:

	static class UClass* StaticClass();
	static class UAssets_mesh* GetDefaultObj();

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0xC8 - 0xC8)
// VerseClass VerseAssets.Assets_particle_system
class UAssets_particle_system : public UAssets_client_asset
{
public:

	static class UClass* StaticClass();
	static class UAssets_particle_system* GetDefaultObj();

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0xC8 - 0xC8)
// VerseClass VerseAssets.Assets_skeletal_mesh
class UAssets_skeletal_mesh : public UAssets_asset
{
public:

	static class UClass* StaticClass();
	static class UAssets_skeletal_mesh* GetDefaultObj();

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0xC8 - 0xC8)
// VerseClass VerseAssets.Assets_sound
class UAssets_sound : public UAssets_client_asset
{
public:

	static class UClass* StaticClass();
	static class UAssets_sound* GetDefaultObj();

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0xC8 - 0xC8)
// VerseClass VerseAssets.Assets_texture_base
class UAssets_texture_base : public UAssets_asset
{
public:

	static class UClass* StaticClass();
	static class UAssets_texture_base* GetDefaultObj();

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0xC8 - 0xC8)
// VerseClass VerseAssets.Assets_texture
class UAssets_texture : public UAssets_texture_base
{
public:

	static class UClass* StaticClass();
	static class UAssets_texture* GetDefaultObj();

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

}


