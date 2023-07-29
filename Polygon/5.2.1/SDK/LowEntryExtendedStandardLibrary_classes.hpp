#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD8 (0x100 - 0x28)
// Class LowEntryExtendedStandardLibrary.LowEntryBitDataEntry
class ULowEntryBitDataEntry : public UObject
{
public:
	uint8                                        Type;                                              // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ByteValue;                                         // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CB[0x2];                                      // Fixing Size After Last Property
	int32                                        IntegerValue;                                      // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        LongValue;                                         // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULowEntryLong*                         LongBytesValue;                                    // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatValue;                                        // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CC[0x4];                                      // Fixing Size After Last Property
	double                                       DoubleValue;                                       // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULowEntryDouble*                       DoubleBytesValue;                                  // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         BooleanValue;                                      // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CD[0x7];                                      // Fixing Size After Last Property
	class FString                                StringUtf8Value;                                   // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                ByteArrayValue;                                    // 0x70(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                IntegerArrayValue;                                 // 0x80(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int64>                                LongArrayValue;                                    // 0x90(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class ULowEntryLong*>                 LongBytesArrayValue;                               // 0xA0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                FloatArrayValue;                                   // 0xB0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<double>                               DoubleArrayValue;                                  // 0xC0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class ULowEntryDouble*>               DoubleBytesArrayValue;                             // 0xD0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<bool>                                 BooleanArrayValue;                                 // 0xE0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        StringUtf8ArrayValue;                              // 0xF0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LowEntryBitDataEntry");
		return Clss;
	}

};

// 0x20 (0x48 - 0x28)
// Class LowEntryExtendedStandardLibrary.LowEntryBitDataReader
class ULowEntryBitDataReader : public UObject
{
public:
	TArray<uint8>                                Bytes;                                             // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        Position;                                          // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CurrentByte;                                       // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_301[0x3];                                      // Fixing Size After Last Property
	int32                                        CurrentBytePosition;                               // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_302[0x4];                                      // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LowEntryBitDataReader");
		return Clss;
	}

	void SetPosition(int32 Position_);
	void Reset();
	int32 Remaining();
	TArray<class FString> GetStringUtf8Array();
	class FString GetStringUtf8();
	TArray<int32> GetPositiveInteger3Array();
	int32 GetPositiveInteger3();
	TArray<int32> GetPositiveInteger2Array();
	int32 GetPositiveInteger2();
	TArray<int32> GetPositiveInteger1Array();
	int32 GetPositiveInteger1();
	int32 GetPosition();
	TArray<class ULowEntryLong*> GetLongBytesArray();
	class ULowEntryLong* GetLongBytes();
	TArray<int64> GetLongArray();
	int64 GetLong();
	int32 GetIntegerMostSignificantBits(int32 BitCount);
	int32 GetIntegerLeastSignificantBits(int32 BitCount);
	TArray<int32> GetIntegerArrayMostSignificantBits(int32 BitCount);
	TArray<int32> GetIntegerArrayLeastSignificantBits(int32 BitCount);
	TArray<int32> GetIntegerArray();
	int32 GetInteger();
	TArray<float> GetFloatArray();
	float GetFloat();
	TArray<class ULowEntryDouble*> GetDoubleBytesArray();
	class ULowEntryDouble* GetDoubleBytes();
	TArray<double> GetDoubleArray();
	double GetDouble();
	class ULowEntryBitDataReader* GetClone();
	uint8 GetByteMostSignificantBits(int32 BitCount);
	uint8 GetByteLeastSignificantBits(int32 BitCount);
	TArray<uint8> GetByteArrayMostSignificantBits(int32 BitCount);
	TArray<uint8> GetByteArrayLeastSignificantBits(int32 BitCount);
	TArray<uint8> GetByteArray();
	uint8 GetByte();
	TArray<bool> GetBooleanArray();
	bool GetBoolean();
	TArray<bool> GetBitArray();
	bool GetBit();
	void Empty();
};

// 0x18 (0x40 - 0x28)
// Class LowEntryExtendedStandardLibrary.LowEntryBitDataWriter
class ULowEntryBitDataWriter : public UObject
{
public:
	TArray<uint8>                                Bytes;                                             // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        CurrentByte;                                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41C[0x3];                                      // Fixing Size After Last Property
	int32                                        CurrentBytePosition;                               // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LowEntryBitDataWriter");
		return Clss;
	}

	void AddStringUtf8Array(TArray<class FString>& Value);
	void AddStringUtf8(const class FString& Value);
	void AddPositiveInteger3Array(TArray<int32>& Value);
	void AddPositiveInteger3(int32 Value);
	void AddPositiveInteger2Array(TArray<int32>& Value);
	void AddPositiveInteger2(int32 Value);
	void AddPositiveInteger1Array(TArray<int32>& Value);
	void AddPositiveInteger1(int32 Value);
	void AddLongBytesArray(TArray<class ULowEntryLong*>& Value);
	void AddLongBytes(class ULowEntryLong* Value);
	void AddLongArray(TArray<int64>& Value);
	void AddLong(int64 Value);
	void AddIntegerMostSignificantBits(int32 Value, int32 BitCount);
	void AddIntegerLeastSignificantBits(int32 Value, int32 BitCount);
	void AddIntegerArrayMostSignificantBits(TArray<int32>& Value, int32 BitCount);
	void AddIntegerArrayLeastSignificantBits(TArray<int32>& Value, int32 BitCount);
	void AddIntegerArray(TArray<int32>& Value);
	void AddInteger(int32 Value);
	void AddFloatArray(TArray<float>& Value);
	void AddFloat(float Value);
	void AddDoubleBytesArray(TArray<class ULowEntryDouble*>& Value);
	void AddDoubleBytes(class ULowEntryDouble* Value);
	void AddDoubleArray(TArray<double>& Value);
	void AddDouble(double Value);
	void AddByteMostSignificantBits(uint8 Value, int32 BitCount);
	void AddByteLeastSignificantBits(uint8 Value, int32 BitCount);
	void AddByteArrayMostSignificantBits(TArray<uint8>& Value, int32 BitCount);
	void AddByteArrayLeastSignificantBits(TArray<uint8>& Value, int32 BitCount);
	void AddByteArray(TArray<uint8>& Value);
	void AddByte(uint8 Value);
	void AddBooleanArray(TArray<bool>& Value);
	void AddBoolean(bool Value);
	void AddBitArray(TArray<bool>& Value);
	void AddBit(bool Value);
};

// 0x10 (0x38 - 0x28)
// Class LowEntryExtendedStandardLibrary.LowEntryByteArray
class ULowEntryByteArray : public UObject
{
public:
	TArray<uint8>                                ByteArray;                                         // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LowEntryByteArray");
		return Clss;
	}

};

// 0xD8 (0x100 - 0x28)
// Class LowEntryExtendedStandardLibrary.LowEntryByteDataEntry
class ULowEntryByteDataEntry : public UObject
{
public:
	uint8                                        Type;                                              // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ByteValue;                                         // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_43A[0x2];                                      // Fixing Size After Last Property
	int32                                        IntegerValue;                                      // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        LongValue;                                         // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULowEntryLong*                         LongBytesValue;                                    // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatValue;                                        // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_43E[0x4];                                      // Fixing Size After Last Property
	double                                       DoubleValue;                                       // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULowEntryDouble*                       DoubleBytesValue;                                  // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         BooleanValue;                                      // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_441[0x7];                                      // Fixing Size After Last Property
	class FString                                StringUtf8Value;                                   // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                ByteArrayValue;                                    // 0x70(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                IntegerArrayValue;                                 // 0x80(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int64>                                LongArrayValue;                                    // 0x90(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class ULowEntryLong*>                 LongBytesArrayValue;                               // 0xA0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                FloatArrayValue;                                   // 0xB0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<double>                               DoubleArrayValue;                                  // 0xC0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class ULowEntryDouble*>               DoubleBytesArrayValue;                             // 0xD0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<bool>                                 BooleanArrayValue;                                 // 0xE0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        StringUtf8ArrayValue;                              // 0xF0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LowEntryByteDataEntry");
		return Clss;
	}

};

// 0x18 (0x40 - 0x28)
// Class LowEntryExtendedStandardLibrary.LowEntryByteDataReader
class ULowEntryByteDataReader : public UObject
{
public:
	TArray<uint8>                                Bytes;                                             // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        Position;                                          // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D7[0x4];                                      // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LowEntryByteDataReader");
		return Clss;
	}

	void SetPosition(int32 Position_);
	void Reset();
	int32 Remaining();
	TArray<class FString> GetStringUtf8Array();
	class FString GetStringUtf8();
	TArray<int32> GetPositiveInteger3Array();
	int32 GetPositiveInteger3();
	TArray<int32> GetPositiveInteger2Array();
	int32 GetPositiveInteger2();
	TArray<int32> GetPositiveInteger1Array();
	int32 GetPositiveInteger1();
	int32 GetPosition();
	TArray<class ULowEntryLong*> GetLongBytesArray();
	class ULowEntryLong* GetLongBytes();
	TArray<int64> GetLongArray();
	int64 GetLong();
	TArray<int32> GetIntegerArray();
	int32 GetInteger();
	TArray<float> GetFloatArray();
	float GetFloat();
	TArray<class ULowEntryDouble*> GetDoubleBytesArray();
	class ULowEntryDouble* GetDoubleBytes();
	TArray<double> GetDoubleArray();
	double GetDouble();
	class ULowEntryByteDataReader* GetClone();
	TArray<uint8> GetByteArray();
	uint8 GetByte();
	TArray<bool> GetBooleanArray();
	bool GetBoolean();
	void Empty();
};

// 0x10 (0x38 - 0x28)
// Class LowEntryExtendedStandardLibrary.LowEntryByteDataWriter
class ULowEntryByteDataWriter : public UObject
{
public:
	TArray<uint8>                                Bytes;                                             // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LowEntryByteDataWriter");
		return Clss;
	}

	void AddStringUtf8Array(TArray<class FString>& Value);
	void AddStringUtf8(const class FString& Value);
	void AddPositiveInteger3Array(TArray<int32>& Value);
	void AddPositiveInteger3(int32 Value);
	void AddPositiveInteger2Array(TArray<int32>& Value);
	void AddPositiveInteger2(int32 Value);
	void AddPositiveInteger1Array(TArray<int32>& Value);
	void AddPositiveInteger1(int32 Value);
	void AddLongBytesArray(TArray<class ULowEntryLong*>& Value);
	void AddLongBytes(class ULowEntryLong* Value);
	void AddLongArray(TArray<int64>& Value);
	void AddLong(int64 Value);
	void AddIntegerArray(TArray<int32>& Value);
	void AddInteger(int32 Value);
	void AddFloatArray(TArray<float>& Value);
	void AddFloat(float Value);
	void AddDoubleBytesArray(TArray<class ULowEntryDouble*>& Value);
	void AddDoubleBytes(class ULowEntryDouble* Value);
	void AddDoubleArray(TArray<double>& Value);
	void AddDouble(double Value);
	void AddByteArray(TArray<uint8>& Value);
	void AddByte(uint8 Value);
	void AddBooleanArray(TArray<bool>& Value);
	void AddBoolean(bool Value);
};

// 0x10 (0x38 - 0x28)
// Class LowEntryExtendedStandardLibrary.LowEntryDouble
class ULowEntryDouble : public UObject
{
public:
	TArray<uint8>                                Bytes;                                             // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LowEntryDouble");
		return Clss;
	}

	void SetDouble(double Value);
	void SetBytes(TArray<uint8>& ByteArray, int32 Index, int32 Length);
	bool LongBytes_LessThan(class ULowEntryLong* Value);
	bool LongBytes_GreaterThan(class ULowEntryLong* Value);
	bool Integer_LessThan(int32 Value);
	bool Integer_GreaterThan(int32 Value);
	double GetDouble();
	TArray<uint8> GetBytes();
	void Float_Subtract(double Value);
	bool Float_LessThan(double Value);
	bool Float_GreaterThan(double Value);
	bool Float_Equals(double Value);
	void Float_Add(double Value);
	void DoubleBytes_Subtract(class ULowEntryDouble* Value);
	bool DoubleBytes_LessThan(class ULowEntryDouble* Value);
	bool DoubleBytes_GreaterThan(class ULowEntryDouble* Value);
	bool DoubleBytes_Equals(class ULowEntryDouble* Value);
	void DoubleBytes_Add(class ULowEntryDouble* Value);
	class ULowEntryDouble* CreateClone();
	class FString CastToString(int32 MinFractionalDigits);
	class ULowEntryLong* CastToLongBytes();
};

// 0x8 (0x30 - 0x28)
// Class LowEntryExtendedStandardLibrary.LowEntryExecutionQueue
class ULowEntryExecutionQueue : public UObject
{
public:
	int32                                        Count;                                             // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Next;                                              // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_536[0x3];                                      // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LowEntryExecutionQueue");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary
class ULowEntryExtendedStandardLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LowEntryExtendedStandardLibrary");
		return Clss;
	}

	bool XboxOnePlatform();
	bool WithEditor();
	bool WindowsRtPlatform();
	bool WindowsRtArmPlatform();
	bool WindowsPlatform();
	class FString WindowsNewlineCharacter();
	bool Windows64Platform();
	bool Windows32Platform();
	void TickSeconds(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int32 Ticks, double SecondsInterval, int32* Tick);
	void TickFrames(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int32 Ticks, int32 FramesInterval, int32* Tick);
	void TextureUpdateResource(class UTexture* Texture);
	void TextureRenderTarget2DToPixels(class UTextureRenderTarget2D* TextureRenderTarget2D, int32* Width, int32* Height, TArray<struct FColor>* Pixels);
	void TextureRenderTarget2DToBytes(class UTextureRenderTarget2D* TextureRenderTarget2D, enum class ELowEntryImageFormat ImageFormat, TArray<uint8>* ByteArray, int32 CompressionQuality);
	void Texture2DToPixels(class UTexture2D* Texture2D, int32* Width, int32* Height, TArray<struct FColor>* Pixels);
	void Texture2DToBytes(class UTexture2D* Texture2D, enum class ELowEntryImageFormat ImageFormat, TArray<uint8>* ByteArray, int32 CompressionQuality);
	bool TestBuild();
	class FString TabCharacter();
	bool SwitchPlatform();
	TArray<uint8> StringToBytesUtf8(const class FString& String);
	void SplitBytes(TArray<uint8>& ByteArray, int32 LengthA, TArray<uint8>* A, TArray<uint8>* B);
	void SoundClass_SetVolume(class USoundClass* SoundClass, double Volume);
	void SoundClass_SetPitch(class USoundClass* SoundClass, double Pitch);
	double SoundClass_GetVolume(class USoundClass* SoundClass);
	double SoundClass_GetPitch(class USoundClass* SoundClass);
	void SortTimespanArrayDirectly(TArray<struct FTimespan>& TimespanArray, bool Reversed);
	TArray<struct FTimespan> SortTimespanArray(TArray<struct FTimespan>& TimespanArray, bool Reversed);
	void SortStringArrayDirectly(TArray<class FString>& StringArray, bool Reversed);
	TArray<class FString> SortStringArray(TArray<class FString>& StringArray, bool Reversed);
	void SortObjectArrayDirectly(TArray<class UObject*>& ObjectArray, FDelegateProperty_ Comparator, bool Reversed);
	TArray<class UObject*> SortObjectArray(TArray<class UObject*>& ObjectArray, FDelegateProperty_ Comparator, bool Reversed);
	void SortIntegerArrayDirectly(TArray<int32>& IntegerArray, bool Reversed);
	TArray<int32> SortIntegerArray(TArray<int32>& IntegerArray, bool Reversed);
	void SortFloatArrayDirectly(TArray<float>& FloatArray, bool Reversed);
	TArray<float> SortFloatArray(TArray<float>& FloatArray, bool Reversed);
	void SortDoubleArrayDirectly(TArray<double>& DoubleArray, bool Reversed);
	TArray<double> SortDoubleArray(TArray<double>& DoubleArray, bool Reversed);
	void SortDateTimeArrayDirectly(TArray<struct FDateTime>& DateTimeArray, bool Reversed);
	TArray<struct FDateTime> SortDateTimeArray(TArray<struct FDateTime>& DateTimeArray, bool Reversed);
	void SortByteArrayDirectly(TArray<uint8>& ByteArray, bool Reversed);
	TArray<uint8> SortByteArray(TArray<uint8>& ByteArray, bool Reversed);
	void SimpleKismetSystemLibraryPrintString(const class FString& InString);
	bool ShippingBuild();
	TArray<uint8> Sha512(TArray<uint8>& ByteArray, int32 Index, int32 Length);
	TArray<uint8> Sha256(TArray<uint8>& ByteArray, int32 Index, int32 Length);
	TArray<uint8> Sha1(TArray<uint8>& ByteArray, int32 Index, int32 Length);
	void SetWorldRenderingEnabled(bool Enabled);
	void SetWindowSize(int32 Width, int32 Height);
	void SetWindowPositionInPercentagesCentered(double X, double Y);
	void SetWindowPosition(int32 X, int32 Y);
	void SetWindowPositiomInPercentagesCentered(double X, double Y);
	void SetWindowMode(bool Fullscreen, bool IsFullscreenWindowed);
	void SetSplitScreenType_TwoPlayers(enum class ELowEntrySplitScreenTypeTwoPlayers Type);
	void SetSplitScreenType_ThreePlayers(enum class ELowEntrySplitScreenTypeThreePlayers Type);
	void SetSplitScreenEnabled(bool Enabled);
	void SetMousePositionInPercentages(double X, double Y);
	void SetMousePosition(int32 X, int32 Y);
	void SetMouseLockedToViewport(bool Locked);
	void SetGenericTeamId(class UActor* Target, uint8 TeamID);
	void ServerChangeMap(class UObject* WorldContextObject, const class FString& Map, const class FString& Args, class UPlayerController* SpecificPlayer);
	void SceneCaptureComponent2DToPixels(class USceneCaptureComponent2D* SceneCaptureComponent2D, int32* Width, int32* Height, TArray<struct FColor>* Pixels);
	void SceneCaptureComponent2DToBytes(class USceneCaptureComponent2D* SceneCaptureComponent2D, enum class ELowEntryImageFormat ImageFormat, TArray<uint8>* ByteArray, int32 CompressionQuality);
	void SceneCaptureComponent2D_SetFov(class USceneCaptureComponent2D* SceneCaptureComponent2D, double FOV);
	void SceneCaptureComponent2D_GetFov(class USceneCaptureComponent2D* SceneCaptureComponent2D, double* FOV);
	void SceneCapture2DToPixels(class USceneCapture2D* SceneCapture2D, int32* Width, int32* Height, TArray<struct FColor>* Pixels);
	void SceneCapture2DToBytes(class USceneCapture2D* SceneCapture2D, enum class ELowEntryImageFormat ImageFormat, TArray<uint8>* ByteArray, int32 CompressionQuality);
	void SceneCapture2D_SetFov(class USceneCapture2D* SceneCapture2D, double FOV);
	void SceneCapture2D_GetFov(class USceneCapture2D* SceneCapture2D, double* FOV);
	double RoundDecimals(double Number, int32 Decimals);
	void RetriggerableRandomDelayFrames(class UObject* WorldContextObject, int32 MinFrames, int32 MaxFrames, const struct FLatentActionInfo& LatentInfo);
	void RetriggerableRandomDelay(class UObject* WorldContextObject, double MinDuration, double MaxDuration, const struct FLatentActionInfo& LatentInfo);
	void RetriggerableDelayFrames(class UObject* WorldContextObject, int32 Frames, const struct FLatentActionInfo& LatentInfo);
	class FString ReplaceCharactersExcept(const class FString& String, const class FString& ReplacementCharacter, bool KeepLowercaseAZ, bool KeepUppercaseAZ, bool KeepNumbers, const class FString& OtherCharactersToKeep);
	class FString RemoveCharactersExcept(const class FString& String, bool KeepLowercaseAZ, bool KeepUppercaseAZ, bool KeepNumbers, const class FString& OtherCharactersToKeep);
	class FString RegexReplace(const class FString& String, const class FString& Pattern, const class FString& Replacement);
	bool RegexMatch(const class FString& String, const class FString& Pattern);
	TArray<struct FLowEntryRegexMatch> RegexGetMatches(const class FString& String, const class FString& Pattern);
	int32 RegexCount(const class FString& String, const class FString& Pattern);
	void RandomDelayFrames(class UObject* WorldContextObject, int32 MinFrames, int32 MaxFrames, const struct FLatentActionInfo& LatentInfo);
	void RandomDelay(class UObject* WorldContextObject, double MinDuration, double MaxDuration, const struct FLatentActionInfo& LatentInfo);
	void QueueExecutions(class UObject* WorldContextObject, class ULowEntryExecutionQueue** Queue, const struct FLatentActionInfo& LatentInfo);
	bool Ps4Platform();
	void PlayerControllerGetLocalPlayer(class UPlayerController* PlayerController, bool* Success, class ULocalPlayer** LocalPlayer);
	class UTexture2D* PixelsToTexture2D(int32 Width, int32 Height, TArray<struct FColor>& Pixels);
	class UTexture2D* PixelsToExistingTexture2D(bool* ReusedGivenTexture2D, class UTexture2D* Texture2D, int32 Width, int32 Height, TArray<struct FColor>& Pixels);
	void PixelsToBytes(int32 Width, int32 Height, TArray<struct FColor>& Pixels, enum class ELowEntryImageFormat ImageFormat, TArray<uint8>* ByteArray, int32 CompressionQuality);
	TArray<uint8> Pearson(TArray<uint8>& ByteArray, int32 HashLength, int32 Index, int32 Length);
	class ULowEntryLong* ParseStringIntoLongBytes(const class FString& String);
	int64 ParseStringIntoLong(const class FString& String);
	class ULowEntryDouble* ParseStringIntoDoubleBytes(const class FString& String);
	bool ParsedHashcashIsValid(class ULowEntryParsedHashcash* Target);
	void NextQueueExecution(class ULowEntryExecutionQueue* Queue);
	class FString NewlineCharacter();
	class FString MinString(const class FString& A, const class FString& B);
	void MinOfTimespanArray(TArray<struct FTimespan>& TimespanArray, int32* IndexOfMinValue, struct FTimespan* MinValue);
	void MinOfStringArray(TArray<class FString>& StringArray, int32* IndexOfMinValue, class FString* MinValue);
	void MinOfDateTimeArray(TArray<struct FDateTime>& DateTimeArray, int32* IndexOfMinValue, struct FDateTime* MinValue);
	TArray<uint8> MergeEncapsulatedByteArrays(TArray<class ULowEntryByteArray*>& ByteArrays);
	TArray<uint8> MergeBytes(const TArray<uint8>& A, const TArray<uint8>& B);
	TArray<uint8> Md5(TArray<uint8>& ByteArray, int32 Index, int32 Length);
	class FString MaxString(const class FString& A, const class FString& B);
	void MaxOfTimespanArray(TArray<struct FTimespan>& TimespanArray, int32* IndexOfMaxValue, struct FTimespan* MaxValue);
	void MaxOfStringArray(TArray<class FString>& StringArray, int32* IndexOfMaxValue, class FString* MaxValue);
	void MaxOfDateTimeArray(TArray<struct FDateTime>& DateTimeArray, int32* IndexOfMaxValue, struct FDateTime* MaxValue);
	bool MacPlatform();
	TArray<uint8> LongToBytes(int64 Value);
	class ULowEntryLong* Long_CreateZero();
	class ULowEntryLong* Long_Create(TArray<uint8>& ByteArray, int32 Index, int32 Length);
	void LoadVideo(class UMediaSoundComponent* MediaSoundComponent, const class FString& URL, bool* Success, class UMediaPlayer** MediaPlayer, class UMediaTexture** MediaTexture, bool PlayOnOpen, bool Loop);
	bool LinuxPlatform();
	bool LessStringString(const class FString& A, const class FString& B);
	bool LessIntegerFloat(int32 A, double B);
	bool LessIntegerByte(int32 A, uint8 B);
	bool LessFloatInteger(double A, int32 B);
	bool LessFloatByte(double A, uint8 B);
	bool LessEqualStringString(const class FString& A, const class FString& B);
	bool LessEqualIntegerFloat(int32 A, double B);
	bool LessEqualIntegerByte(int32 A, uint8 B);
	bool LessEqualFloatInteger(double A, int32 B);
	bool LessEqualFloatByte(double A, uint8 B);
	bool LessEqualByteInteger(uint8 A, int32 B);
	bool LessEqualByteFloat(uint8 A, double B);
	bool LessByteInteger(uint8 A, int32 B);
	bool LessByteFloat(uint8 A, double B);
	void LatentAction_Create_String(class ULowEntryLatentActionString** LatentAction);
	void LatentAction_Create_Object(class ULowEntryLatentActionObject** LatentAction);
	void LatentAction_Create_None(class ULowEntryLatentActionNone** LatentAction);
	void LatentAction_Create_Integer(class ULowEntryLatentActionInteger** LatentAction);
	void LatentAction_Create_Float(class ULowEntryLatentActionFloat** LatentAction);
	void LatentAction_Create_Boolean(class ULowEntryLatentActionBoolean** LatentAction);
	void JoinGame(class UObject* WorldContextObject, const class FString& ServerAddress, const class FString& Args, class UPlayerController* SpecificPlayer);
	void IsWorldRenderingEnabled(bool* Success, bool* Enabled);
	bool IsBitSet(uint8 B, int32 Bit);
	bool IosPlatform();
	TArray<uint8> IntegerToBytes(int32 Value);
	bool Html5Platform();
	void HostGame(class UObject* WorldContextObject, const class FString& Map, const class FString& Args, class UPlayerController* SpecificPlayer);
	TArray<uint8> HMAC(TArray<uint8>& ByteArray, TArray<uint8>& Key, enum class ELowEntryHmacAlgorithm Algorithm, int32 Index, int32 Length);
	TArray<uint8> HexToBytes(const class FString& Hex);
	TArray<class ULowEntryParsedHashcash*> HashcashParseArray(TArray<class FString>& Hashes);
	class ULowEntryParsedHashcash* HashcashParse(const class FString& Hash);
	class FString HashcashCustomCreationDate(const class FString& Resource, struct FDateTime& UtcDate, int32 Bits);
	TArray<class FString> HashcashArrayCustomCreationDate(TArray<class FString>& Resources, struct FDateTime& UtcDate, int32 Bits);
	TArray<class FString> HashcashArray(TArray<class FString>& Resources, int32 Bits);
	class FString Hashcash(const class FString& Resource, int32 Bits);
	bool GreaterStringString(const class FString& A, const class FString& B);
	bool GreaterIntegerFloat(int32 A, double B);
	bool GreaterIntegerByte(int32 A, uint8 B);
	bool GreaterFloatInteger(double A, int32 B);
	bool GreaterFloatByte(double A, uint8 B);
	bool GreaterEqualStringString(const class FString& A, const class FString& B);
	bool GreaterEqualIntegerFloat(int32 A, double B);
	bool GreaterEqualIntegerByte(int32 A, uint8 B);
	bool GreaterEqualFloatInteger(double A, int32 B);
	bool GreaterEqualFloatByte(double A, uint8 B);
	bool GreaterEqualByteInteger(uint8 A, int32 B);
	bool GreaterEqualByteFloat(uint8 A, double B);
	bool GreaterByteInteger(uint8 A, int32 B);
	bool GreaterByteFloat(uint8 A, double B);
	TArray<struct FColor> GrayscalePixels(TArray<struct FColor>& Pixel);
	struct FColor GrayscalePixel(struct FColor& Pixel);
	void GetWindowSize(bool* Success, int32* Width, int32* Height);
	void GetWindowPositionInPercentagesCentered(bool* Success, double* X, double* Y);
	void GetWindowPosition(bool* Success, int32* X, int32* Y);
	void GetWindowPositiomInPercentagesCentered(bool* Success, double* X, double* Y);
	void GetWindowMode(bool* Success, bool* Fullscreen, bool* IsFullscreenWindowed);
	void GetWindowBounds(bool* Success, int32* X, int32* Y, int32* Width, int32* Height);
	void GetWindowBorderSize(bool* Success, struct FMargin* Margin);
	class FName GetUserFocusedWidgetType(int32 UserIndex);
	void GetSplitScreenType(enum class ELowEntrySplitScreenType* Type);
	class FString GetProjectVersion();
	class FString GetProjectName();
	void GetPrimaryMonitorWorkArea(int32* X, int32* Y, int32* Width, int32* Height);
	void GetPrimaryMonitorResolution(int32* Width, int32* Height);
	void GetMousePositionInPercentages(bool* Success, double* X, double* Y);
	void GetMousePosition(bool* Success, int32* X, int32* Y);
	void GetMaximumVolume(int32* Volume, bool* Success);
	struct FVector2D GetLocalToAbsoluteScale(struct FGeometry& Geometry);
	class FName GetKeyboardFocusedWidgetType();
	void GetGenericTeamId(class UActor* Target, uint8* TeamID);
	void GetCurrentVolumePercentage(double* Percentage, bool* Success);
	void GetCurrentVolume(int32* Volume, bool* Success);
	void GetClassWithName(const class FString& ClassName, class UClass** Class_, bool* Success);
	uint8 GetByteWithBitSet(uint8 Byte, int32 Bit, bool Value);
	void GetBatteryTemperature(double* Celsius, bool* Success);
	void GetBatteryState(enum class ELowEntryBatteryState* State, bool* Success);
	void GetBatteryCharge(int32* Percentage, bool* Success);
	void GetAndroidVolume(int32* Volume);
	class FString GetAndroidVersion();
	class FString GetAndroidOsLanguage();
	int32 GetAndroidNumberOfCores();
	class FString GetAndroidGpuFamily();
	class FString GetAndroidGlVersion();
	class FString GetAndroidDeviceModel();
	class FString GetAndroidDeviceMake();
	class FString GetAndroidDefaultLocale();
	int32 GetAndroidBuildVersion();
	struct FVector2D GetAbsoluteToLocalScale(struct FGeometry& Geometry);
	struct FVector2D GetAbsoluteSize(struct FGeometry& Geometry);
	void GenerateRandomBytesRandomLength(int32 MinLength, int32 MaxLength, TArray<uint8>* ByteArray);
	void GenerateRandomBytes(int32 Length, TArray<uint8>* ByteArray);
	double FloorDecimals(double Number, int32 Decimals);
	TArray<uint8> FloatToBytes(float Value);
	void ExecToInteger(enum class ELowEntryExtendedStandardLibrary0to9 Branch, int32* Value);
	void ExecToByte(enum class ELowEntryExtendedStandardLibrary0to9 Branch, uint8* Value);
	void ExecToBoolean(enum class ELowEntryExtendedStandardLibraryTrueOrFalse Branch, bool* Value);
	class ULowEntryByteArray* EncapsulateByteArray(TArray<uint8>& ByteArray);
	TArray<uint8> DoubleToBytes(double Value);
	class ULowEntryDouble* Double_CreateZero();
	class ULowEntryDouble* Double_Create(TArray<uint8>& ByteArray, int32 Index, int32 Length);
	struct FVector2D Divide_Vector2dVector2d(struct FVector2D& A, struct FVector2D& B);
	bool DevelopmentBuild();
	bool DesktopPlatform();
	void DelayFrames(class UObject* WorldContextObject, int32 Frames, const struct FLatentActionInfo& LatentInfo);
	bool DebugBuild();
	void DateTime_ToUnixTimestamp(struct FDateTime& DateTime, class ULowEntryLong** Timestamp);
	void DateTime_ToString(struct FDateTime& DateTime, class FString* String, const class FString& Format);
	void DateTime_ToIso8601(struct FDateTime& DateTime, class FString* String);
	void DateTime_FromUnixTimestamp(class ULowEntryLong* Timestamp, struct FDateTime* DateTime);
	class FString CreateString(int32 Length, const class FString& Filler);
	void CreateObject(TSubclassOf<class UObject> Class, class UObject** Object);
	void Crash();
	void ConvertUtcDateToLocalDate(struct FDateTime& Utc, struct FDateTime* Local);
	void ConvertLocalDateToUtcDate(struct FDateTime& Local, struct FDateTime* Utc);
	void ClipboardSet(const class FString& Value);
	class FString ClipboardGet();
	void ClearUserFocus(int32 UserIndex);
	void ClearKeyboardFocus();
	void ClearAllUserFocus();
	void ChangeMap(class UObject* WorldContextObject, const class FString& Map, const class FString& Args, class UPlayerController* SpecificPlayer);
	double CeilDecimals(double Number, int32 Decimals);
	void CaseSwitchObject(int32 OnlyCheckFirstX, class UObject* Value, class UObject* _1__, class UObject* _2__, class UObject* _3__, class UObject* _4__, class UObject* _5__, class UObject* _6__, class UObject* _7__, class UObject* _8__, class UObject* _9__, class UObject* _10__, enum class ELowEntryExtendedStandardLibrary1to10other* Branch);
	void CaseSwitchInteger(int32 OnlyCheckFirstX, int32 Value, int32 _1__, int32 _2__, int32 _3__, int32 _4__, int32 _5__, int32 _6__, int32 _7__, int32 _8__, int32 _9__, int32 _10__, enum class ELowEntryExtendedStandardLibrary1to10other* Branch);
	void CaseSwitchByte(int32 OnlyCheckFirstX, uint8 Value, uint8 _1__, uint8 _2__, uint8 _3__, uint8 _4__, uint8 _5__, uint8 _6__, uint8 _7__, uint8 _8__, uint8 _9__, uint8 _10__, enum class ELowEntryExtendedStandardLibrary1to10other* Branch);
	class FString CarriageReturnCharacter();
	TArray<uint8> ByteToBytes(uint8 Value);
	bool ByteToBoolean(uint8 Byte);
	void ByteToBits(uint8 Byte, bool* Bit1, bool* Bit2, bool* Bit3, bool* Bit4, bool* Bit5, bool* Bit6, bool* Bit7, bool* Bit8);
	class FString BytesToStringUtf8(TArray<uint8>& ByteArray, int32 Index, int32 Length);
	void BytesToPixels(TArray<uint8>& ByteArray, enum class ELowEntryImageFormat ImageFormat, int32* Width, int32* Height, TArray<struct FColor>* Pixels, int32 Index, int32 Length);
	class ULowEntryLong* BytesToLongBytes(TArray<uint8>& ByteArray, int32 Index, int32 Length);
	int64 BytesToLong(TArray<uint8>& ByteArray, int32 Index, int32 Length);
	int32 BytesToInteger(TArray<uint8>& ByteArray, int32 Index, int32 Length);
	class UTexture2D* BytesToImage(TArray<uint8>& ByteArray, enum class ELowEntryImageFormat ImageFormat, int32 Index, int32 Length);
	class FString BytesToHex(TArray<uint8>& ByteArray, bool AddSpaces, int32 Index, int32 Length);
	float BytesToFloat(TArray<uint8>& ByteArray, int32 Index, int32 Length);
	class UTexture2D* BytesToExistingImage(bool* ReusedGivenTexture2D, class UTexture2D* Texture2D, TArray<uint8>& ByteArray, enum class ELowEntryImageFormat ImageFormat, int32 Index, int32 Length);
	class ULowEntryDouble* BytesToDoubleBytes(TArray<uint8>& ByteArray, int32 Index, int32 Length);
	double BytesToDouble(TArray<uint8>& ByteArray, int32 Index, int32 Length);
	uint8 BytesToByte(TArray<uint8>& ByteArray, int32 Index, int32 Length);
	bool BytesToBoolean(TArray<uint8>& ByteArray, int32 Index, int32 Length);
	class FString BytesToBitString(TArray<uint8>& ByteArray, bool AddSpaces, int32 Index, int32 Length);
	class FString BytesToBinary(TArray<uint8>& ByteArray, bool AddSpaces, int32 Index, int32 Length);
	class FString BytesToBase64Url(TArray<uint8>& ByteArray, int32 Index, int32 Length);
	class FString BytesToBase64(TArray<uint8>& ByteArray, int32 Index, int32 Length);
	TArray<uint8> BytesSubArray(TArray<uint8>& ByteArray, int32 Index, int32 Length);
	TArray<uint8> ByteDataWriter_GetBytes(class ULowEntryByteDataWriter* ByteDataWriter);
	class ULowEntryByteDataWriter* ByteDataWriter_CreateFromEntryArrayPure(TArray<class ULowEntryByteDataEntry*>& Array);
	class ULowEntryByteDataWriter* ByteDataWriter_CreateFromEntryArray(TArray<class ULowEntryByteDataEntry*>& Array);
	class ULowEntryByteDataReader* ByteDataReader_Create(TArray<uint8>& Bytes, int32 Index, int32 Length);
	class ULowEntryByteDataEntry* ByteDataEntry_CreateFromStringUtf8Array(TArray<class FString>& Value);
	class ULowEntryByteDataEntry* ByteDataEntry_CreateFromStringUtf8(const class FString& Value);
	class ULowEntryByteDataEntry* ByteDataEntry_CreateFromPositiveInteger3Array(TArray<int32>& Value);
	class ULowEntryByteDataEntry* ByteDataEntry_CreateFromPositiveInteger3(int32 Value);
	class ULowEntryByteDataEntry* ByteDataEntry_CreateFromPositiveInteger2Array(TArray<int32>& Value);
	class ULowEntryByteDataEntry* ByteDataEntry_CreateFromPositiveInteger2(int32 Value);
	class ULowEntryByteDataEntry* ByteDataEntry_CreateFromPositiveInteger1Array(TArray<int32>& Value);
	class ULowEntryByteDataEntry* ByteDataEntry_CreateFromPositiveInteger1(int32 Value);
	class ULowEntryByteDataEntry* ByteDataEntry_CreateFromLongBytesArray(TArray<class ULowEntryLong*>& Value);
	class ULowEntryByteDataEntry* ByteDataEntry_CreateFromLongBytes(class ULowEntryLong* Value);
	class ULowEntryByteDataEntry* ByteDataEntry_CreateFromLongArray(TArray<int64>& Value);
	class ULowEntryByteDataEntry* ByteDataEntry_CreateFromLong(int64 Value);
	class ULowEntryByteDataEntry* ByteDataEntry_CreateFromIntegerArray(TArray<int32>& Value);
	class ULowEntryByteDataEntry* ByteDataEntry_CreateFromInteger(int32 Value);
	class ULowEntryByteDataEntry* ByteDataEntry_CreateFromFloatArray(TArray<float>& Value);
	class ULowEntryByteDataEntry* ByteDataEntry_CreateFromFloat(float Value);
	class ULowEntryByteDataEntry* ByteDataEntry_CreateFromDoubleBytesArray(TArray<class ULowEntryDouble*>& Value);
	class ULowEntryByteDataEntry* ByteDataEntry_CreateFromDoubleBytes(class ULowEntryDouble* Value);
	class ULowEntryByteDataEntry* ByteDataEntry_CreateFromDoubleArray(TArray<double>& Value);
	class ULowEntryByteDataEntry* ByteDataEntry_CreateFromDouble(double Value);
	class ULowEntryByteDataEntry* ByteDataEntry_CreateFromByteArray(TArray<uint8>& Value);
	class ULowEntryByteDataEntry* ByteDataEntry_CreateFromByte(uint8 Value);
	class ULowEntryByteDataEntry* ByteDataEntry_CreateFromBooleanArray(TArray<bool>& Value);
	class ULowEntryByteDataEntry* ByteDataEntry_CreateFromBoolean(bool Value);
	TArray<uint8> BooleanToBytes(bool Value);
	uint8 BooleanToByte(bool Value);
	TArray<uint8> BitStringToBytes(const class FString& Bits);
	void BitsToByte(bool Bit1, bool Bit2, bool Bit3, bool Bit4, bool Bit5, bool Bit6, bool Bit7, bool Bit8, uint8* Byte);
	TArray<uint8> BitDataWriter_GetBytes(class ULowEntryBitDataWriter* BitDataWriter);
	class ULowEntryBitDataWriter* BitDataWriter_CreateFromEntryArrayPure(TArray<class ULowEntryBitDataEntry*>& Array);
	class ULowEntryBitDataWriter* BitDataWriter_CreateFromEntryArray(TArray<class ULowEntryBitDataEntry*>& Array);
	class ULowEntryBitDataReader* BitDataReader_Create(TArray<uint8>& Bytes, int32 Index, int32 Length);
	class ULowEntryBitDataEntry* BitDataEntry_CreateFromStringUtf8Array(TArray<class FString>& Value);
	class ULowEntryBitDataEntry* BitDataEntry_CreateFromStringUtf8(const class FString& Value);
	class ULowEntryBitDataEntry* BitDataEntry_CreateFromPositiveInteger3Array(TArray<int32>& Value);
	class ULowEntryBitDataEntry* BitDataEntry_CreateFromPositiveInteger3(int32 Value);
	class ULowEntryBitDataEntry* BitDataEntry_CreateFromPositiveInteger2Array(TArray<int32>& Value);
	class ULowEntryBitDataEntry* BitDataEntry_CreateFromPositiveInteger2(int32 Value);
	class ULowEntryBitDataEntry* BitDataEntry_CreateFromPositiveInteger1Array(TArray<int32>& Value);
	class ULowEntryBitDataEntry* BitDataEntry_CreateFromPositiveInteger1(int32 Value);
	class ULowEntryBitDataEntry* BitDataEntry_CreateFromLongBytesArray(TArray<class ULowEntryLong*>& Value);
	class ULowEntryBitDataEntry* BitDataEntry_CreateFromLongBytes(class ULowEntryLong* Value);
	class ULowEntryBitDataEntry* BitDataEntry_CreateFromLongArray(TArray<int64>& Value);
	class ULowEntryBitDataEntry* BitDataEntry_CreateFromLong(int64 Value);
	class ULowEntryBitDataEntry* BitDataEntry_CreateFromIntegerMostSignificantBits(int32 Value, int32 BitCount);
	class ULowEntryBitDataEntry* BitDataEntry_CreateFromIntegerLeastSignificantBits(int32 Value, int32 BitCount);
	class ULowEntryBitDataEntry* BitDataEntry_CreateFromIntegerArrayMostSignificantBits(TArray<int32>& Value, int32 BitCount);
	class ULowEntryBitDataEntry* BitDataEntry_CreateFromIntegerArrayLeastSignificantBits(TArray<int32>& Value, int32 BitCount);
	class ULowEntryBitDataEntry* BitDataEntry_CreateFromIntegerArray(TArray<int32>& Value);
	class ULowEntryBitDataEntry* BitDataEntry_CreateFromInteger(int32 Value);
	class ULowEntryBitDataEntry* BitDataEntry_CreateFromFloatArray(TArray<float>& Value);
	class ULowEntryBitDataEntry* BitDataEntry_CreateFromFloat(float Value);
	class ULowEntryBitDataEntry* BitDataEntry_CreateFromDoubleBytesArray(TArray<class ULowEntryDouble*>& Value);
	class ULowEntryBitDataEntry* BitDataEntry_CreateFromDoubleBytes(class ULowEntryDouble* Value);
	class ULowEntryBitDataEntry* BitDataEntry_CreateFromDoubleArray(TArray<double>& Value);
	class ULowEntryBitDataEntry* BitDataEntry_CreateFromDouble(double Value);
	class ULowEntryBitDataEntry* BitDataEntry_CreateFromByteMostSignificantBits(uint8 Value, int32 BitCount);
	class ULowEntryBitDataEntry* BitDataEntry_CreateFromByteLeastSignificantBits(uint8 Value, int32 BitCount);
	class ULowEntryBitDataEntry* BitDataEntry_CreateFromByteArrayMostSignificantBits(TArray<uint8>& Value, int32 BitCount);
	class ULowEntryBitDataEntry* BitDataEntry_CreateFromByteArrayLeastSignificantBits(TArray<uint8>& Value, int32 BitCount);
	class ULowEntryBitDataEntry* BitDataEntry_CreateFromByteArray(TArray<uint8>& Value);
	class ULowEntryBitDataEntry* BitDataEntry_CreateFromByte(uint8 Value);
	class ULowEntryBitDataEntry* BitDataEntry_CreateFromBooleanArray(TArray<bool>& Value);
	class ULowEntryBitDataEntry* BitDataEntry_CreateFromBoolean(bool Value);
	class ULowEntryBitDataEntry* BitDataEntry_CreateFromBitArray(TArray<bool>& Value);
	class ULowEntryBitDataEntry* BitDataEntry_CreateFromBit(bool Value);
	TArray<uint8> BinaryToBytes(const class FString& Binary);
	TArray<uint8> BCrypt(TArray<uint8>& ByteArray, TArray<uint8>& Salt, int32 Strength, int32 Index, int32 Length);
	TArray<uint8> Base64UrlToBytes(const class FString& Base64Url);
	class FString Base64UrlToBase64(const class FString& Base64Url);
	TArray<uint8> Base64ToBytes(const class FString& Base64);
	class FString Base64ToBase64Url(const class FString& Base64);
	bool AreBytesEqual(TArray<uint8>& A, TArray<uint8>& B, int32 IndexA, int32 LengthA, int32 IndexB, int32 LengthB);
	bool AreAndroidHeadphonesPluggedIn();
	bool AndroidPlatform();
};

// 0x8 (0x30 - 0x28)
// Class LowEntryExtendedStandardLibrary.LowEntryLatentActionBoolean
class ULowEntryLatentActionBoolean : public UObject
{
public:
	bool                                         Finished;                                          // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BC6[0x2];                                      // Fixing Size After Last Property
	int32                                        KeepAliveCount;                                    // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LowEntryLatentActionBoolean");
		return Clss;
	}

	void WaitTillDone(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, bool* Result_);
	bool IsDone();
	void GetResult(bool* Result_);
	void Done(bool Result_);
};

// 0x18 (0x40 - 0x28)
// Class LowEntryExtendedStandardLibrary.LowEntryLatentActionFloat
class ULowEntryLatentActionFloat : public UObject
{
public:
	bool                                         Finished;                                          // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BD2[0x7];                                      // Fixing Size After Last Property
	double                                       Result;                                            // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        KeepAliveCount;                                    // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BD3[0x4];                                      // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LowEntryLatentActionFloat");
		return Clss;
	}

	void WaitTillDone(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, double* Result_);
	bool IsDone();
	void GetResult(double* Result_);
	void Done(double Result_);
};

// 0x10 (0x38 - 0x28)
// Class LowEntryExtendedStandardLibrary.LowEntryLatentActionInteger
class ULowEntryLatentActionInteger : public UObject
{
public:
	bool                                         Finished;                                          // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BDD[0x3];                                      // Fixing Size After Last Property
	int32                                        Result;                                            // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        KeepAliveCount;                                    // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BDE[0x4];                                      // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LowEntryLatentActionInteger");
		return Clss;
	}

	void WaitTillDone(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int32* Result_);
	bool IsDone();
	void GetResult(int32* Result_);
	void Done(int32 Result_);
};

// 0x8 (0x30 - 0x28)
// Class LowEntryExtendedStandardLibrary.LowEntryLatentActionNone
class ULowEntryLatentActionNone : public UObject
{
public:
	bool                                         Finished;                                          // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BF3[0x3];                                      // Fixing Size After Last Property
	int32                                        KeepAliveCount;                                    // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LowEntryLatentActionNone");
		return Clss;
	}

	void WaitTillDone(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo);
	bool IsDone();
	void Done();
};

// 0x18 (0x40 - 0x28)
// Class LowEntryExtendedStandardLibrary.LowEntryLatentActionObject
class ULowEntryLatentActionObject : public UObject
{
public:
	bool                                         Finished;                                          // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C01[0x7];                                      // Fixing Size After Last Property
	class UObject*                               Result;                                            // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        KeepAliveCount;                                    // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C02[0x4];                                      // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LowEntryLatentActionObject");
		return Clss;
	}

	void WaitTillDone(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UObject** Result_);
	bool IsDone();
	void GetResult(class UObject** Result_);
	void Done(class UObject* Result_);
};

// 0x20 (0x48 - 0x28)
// Class LowEntryExtendedStandardLibrary.LowEntryLatentActionString
class ULowEntryLatentActionString : public UObject
{
public:
	bool                                         Finished;                                          // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C0D[0x7];                                      // Fixing Size After Last Property
	class FString                                Result;                                            // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        KeepAliveCount;                                    // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C0E[0x4];                                      // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LowEntryLatentActionString");
		return Clss;
	}

	void WaitTillDone(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class FString* Result_);
	bool IsDone();
	void GetResult(class FString* Result_);
	void Done(const class FString& Result_);
};

// 0x10 (0x38 - 0x28)
// Class LowEntryExtendedStandardLibrary.LowEntryLong
class ULowEntryLong : public UObject
{
public:
	TArray<uint8>                                Bytes;                                             // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LowEntryLong");
		return Clss;
	}

	void SetLong(int64 Value);
	void SetBytes(TArray<uint8>& ByteArray, int32 Index, int32 Length);
	void LongBytes_Subtract(class ULowEntryLong* Value);
	bool LongBytes_LessThan(class ULowEntryLong* Value);
	bool LongBytes_GreaterThan(class ULowEntryLong* Value);
	bool LongBytes_Equals(class ULowEntryLong* Value);
	void LongBytes_Add(class ULowEntryLong* Value);
	void Integer_Subtract(int32 Value);
	bool Integer_LessThan(int32 Value);
	bool Integer_GreaterThan(int32 Value);
	bool Integer_Equals(int32 Value);
	void Integer_Add(int32 Value);
	int64 GetLong();
	TArray<uint8> GetBytes();
	bool Float_LessThan(double Value);
	bool Float_GreaterThan(double Value);
	bool DoubleBytes_LessThan(class ULowEntryDouble* Value);
	bool DoubleBytes_GreaterThan(class ULowEntryDouble* Value);
	class ULowEntryLong* CreateClone();
	class FString CastToString();
	class ULowEntryDouble* CastToDoubleBytes();
};

// 0x28 (0x50 - 0x28)
// Class LowEntryExtendedStandardLibrary.LowEntryParsedHashcash
class ULowEntryParsedHashcash : public UObject
{
public:
	bool                                         Valid;                                             // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C6E[0x7];                                      // Fixing Size After Last Property
	class FString                                Resource;                                          // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             Date;                                              // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Bits;                                              // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C71[0x4];                                      // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LowEntryParsedHashcash");
		return Clss;
	}

	class FString ToString();
	class FString GetResource();
	struct FDateTime GetDate();
	int32 GetBits();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
