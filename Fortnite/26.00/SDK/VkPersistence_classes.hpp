#pragma once

// Dumped with Dumper-7!


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
	uint8                                        Pad_29DB[0xA8];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UVkPersistence* GetDefaultObj();

};

// 0x198 (0x1C0 - 0x28)
// Class VkPersistence.VkPersistenceManager
class UVkPersistenceManager : public UObject
{
public:
	uint8                                        Pad_29E0[0x198];                                   // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UVkPersistenceManager* GetDefaultObj();

};

}


