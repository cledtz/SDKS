#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x5B0 - 0x5A0)
// Class CustomMeshComponent.CustomMeshComponent
class UCustomMeshComponent : public UMeshComponent
{
public:
	uint8                                        Pad_1BE3[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UCustomMeshComponent* GetDefaultObj();

	bool SetCustomMeshTriangles(TArray<struct FCustomMeshTriangle>& Triangles);
	void ClearCustomMeshTriangles();
	void AddCustomMeshTriangles(TArray<struct FCustomMeshTriangle>& Triangles);
};

}


