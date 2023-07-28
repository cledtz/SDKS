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
// VerseClass VerseAssets.$SolarisSignatureFunctionOuter
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
// VerseClass VerseAssets.Assets
class UAssets : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Assets");
		return Clss;
	}

	FVerseDynamicProperty_ _L_2fVerse_2eorg_2fAssets_N_RMakeAsset_L_NAssetType_M_N_Kchar_20where_20AssetType_R(const struct FTuple_Lany_M_Kchar_R& __verse_0xB2CDDD72_Argument);
	void _InitCDO();
};

// 0x48 (0xD8 - 0x90)
// VerseClass VerseAssets.Assets_asset
class UAssets_asset : public UVerseAssetPtr
{
public:
	FVerseFunctionProperty_                      __verse_0xFD8E69AC__L_2fVerse_2eorg_2fAssets_2fasset_N_RSyncLoad; // 0x90(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x9702F5DA__L_2fVerse_2eorg_2fAssets_2fasset_N_RAsync__Load; // 0xA0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x78F21562__L_2fVerse_2eorg_2fAssets_2fasset_N_RGetAsyncLoadEvent; // 0xB0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xE0CBA11B__L_2fVerse_2eorg_2fAssets_2fasset_N_RGetAssetType; // 0xC0(0x10)(InstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_8894[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Assets_asset");
		return Clss;
	}

	uint8 _L_2fVerse_2eorg_2fAssets_2fasset_N_RSyncLoad(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fVerse_2eorg_2fAssets_2fasset_N_RGetAsyncLoadEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fVerse_2eorg_2fAssets_2fasset_N_RGetAssetType(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fVerse_2eorg_2fAssets_2fasset_N_RAsync__Load(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0xD8 - 0xD8)
// VerseClass VerseAssets.Assets_animation
class UAssets_animation : public UAssets_asset
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Assets_animation");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0xD8 - 0xD8)
// VerseClass VerseAssets.Assets_animation_blueprint
class UAssets_animation_blueprint : public UAssets_asset
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Assets_animation_blueprint");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0xD8 - 0xD8)
// VerseClass VerseAssets.Assets_animation_instance
class UAssets_animation_instance : public UAssets_asset
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Assets_animation_instance");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0xD8 - 0xD8)
// VerseClass VerseAssets.Assets_client_asset
class UAssets_client_asset : public UAssets_asset
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Assets_client_asset");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0xD8 - 0xD8)
// VerseClass VerseAssets.Assets_font
class UAssets_font : public UAssets_client_asset
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Assets_font");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0xD8 - 0xD8)
// VerseClass VerseAssets.Assets_level
class UAssets_level : public UAssets_asset
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Assets_level");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0xD8 - 0xD8)
// VerseClass VerseAssets.Assets_material
class UAssets_material : public UAssets_asset
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Assets_material");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0xD8 - 0xD8)
// VerseClass VerseAssets.Assets_mesh
class UAssets_mesh : public UAssets_asset
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Assets_mesh");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0xD8 - 0xD8)
// VerseClass VerseAssets.Assets_particle_system
class UAssets_particle_system : public UAssets_client_asset
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Assets_particle_system");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0xD8 - 0xD8)
// VerseClass VerseAssets.Assets_skeletal_mesh
class UAssets_skeletal_mesh : public UAssets_asset
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Assets_skeletal_mesh");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0xD8 - 0xD8)
// VerseClass VerseAssets.Assets_sound
class UAssets_sound : public UAssets_client_asset
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Assets_sound");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0xD8 - 0xD8)
// VerseClass VerseAssets.Assets_texture_base
class UAssets_texture_base : public UAssets_asset
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Assets_texture_base");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0xD8 - 0xD8)
// VerseClass VerseAssets.Assets_texture
class UAssets_texture : public UAssets_texture_base
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Assets_texture");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
