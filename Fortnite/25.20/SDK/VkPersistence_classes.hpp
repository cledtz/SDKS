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

// 0xA8 (0xD0 - 0x28)
// Class VkPersistence.VkPersistence
class UVkPersistence : public UObject
{
public:
	uint8                                        Pad_484F[0xA8];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VkPersistence");
		return Clss;
	}

};

// 0x198 (0x1C0 - 0x28)
// Class VkPersistence.VkPersistenceManager
class UVkPersistenceManager : public UObject
{
public:
	uint8                                        Pad_4850[0x198];                                   // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VkPersistenceManager");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
