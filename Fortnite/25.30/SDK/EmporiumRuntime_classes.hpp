#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x488 (0x4B0 - 0x28)
// Class EmporiumRuntime.EmporiumAssetsPaths
class UEmporiumAssetsPaths : public UObject
{
public:
	TSoftObjectPtr<class UMaterialInstanceConstant> MR_MI_Opaque;                                      // 0x28(0x28)(Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInstanceConstant> MR_MI_Opaque_Clearcoat;                            // 0x50(0x28)(Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInstanceConstant> MR_MI_Opaque_Sheen;                                // 0x78(0x28)(Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInstanceConstant> MR_MI_Opaque_Unlit;                                // 0xA0(0x28)(Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInstanceConstant> MR_MI_Translucent;                                 // 0xC8(0x28)(Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInstanceConstant> MR_MI_Translucent_Clearcoat;                       // 0xF0(0x28)(Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInstanceConstant> MR_MI_Transmission;                                // 0x118(0x28)(Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInstanceConstant> MR_MI_Opaque_TS;                                   // 0x140(0x28)(Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInstanceConstant> MR_MI_Opaque_Clearcoat_TS;                         // 0x168(0x28)(Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInstanceConstant> MR_MI_Opaque_Sheen_TS;                             // 0x190(0x28)(Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInstanceConstant> MR_MI_Opaque_Unlit_TS;                             // 0x1B8(0x28)(Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInstanceConstant> MR_MI_Translucent_TS;                              // 0x1E0(0x28)(Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInstanceConstant> MR_MI_Translucent_Clearcoat_TS;                    // 0x208(0x28)(Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInstanceConstant> MR_MI_Transmission_TS;                             // 0x230(0x28)(Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInstanceConstant> SG_MI_Opaque;                                      // 0x258(0x28)(Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInstanceConstant> SG_MI_Opaque_Clearcoat;                            // 0x280(0x28)(Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInstanceConstant> SG_MI_Opaque_Sheen;                                // 0x2A8(0x28)(Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInstanceConstant> SG_MI_Translucent;                                 // 0x2D0(0x28)(Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInstanceConstant> SG_MI_Translucent_Clearcoat;                       // 0x2F8(0x28)(Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInstanceConstant> SG_MI_Transmission;                                // 0x320(0x28)(Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInstanceConstant> SG_MI_Opaque_TS;                                   // 0x348(0x28)(Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInstanceConstant> SG_MI_Opaque_Clearcoat_TS;                         // 0x370(0x28)(Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInstanceConstant> SG_MI_Opaque_Sheen_TS;                             // 0x398(0x28)(Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInstanceConstant> SG_MI_Translucent_TS;                              // 0x3C0(0x28)(Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInstanceConstant> SG_MI_Translucent_Clearcoat_TS;                    // 0x3E8(0x28)(Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInstanceConstant> SG_MI_Transmission_TS;                             // 0x410(0x28)(Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInstanceConstant> SG_MI_Foliage_TS;                                  // 0x438(0x28)(Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInstanceConstant> MR_MI_Foliage_TS;                                  // 0x460(0x28)(Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UStaticMesh>            PlaceholderSphere;                                 // 0x488(0x28)(Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EmporiumAssetsPaths");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
