#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AudioMotorSimStandardComponents.BoostMotorSimComponent
// (None)

class UClass* UBoostMotorSimComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BoostMotorSimComponent");

	return Clss;
}


// BoostMotorSimComponent AudioMotorSimStandardComponents.Default__BoostMotorSimComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UBoostMotorSimComponent* UBoostMotorSimComponent::GetDefaultObj()
{
	static class UBoostMotorSimComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UBoostMotorSimComponent*>(UBoostMotorSimComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioMotorSimStandardComponents.MotorPhysicsSimComponent
// (None)

class UClass* UMotorPhysicsSimComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MotorPhysicsSimComponent");

	return Clss;
}


// MotorPhysicsSimComponent AudioMotorSimStandardComponents.Default__MotorPhysicsSimComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMotorPhysicsSimComponent* UMotorPhysicsSimComponent::GetDefaultObj()
{
	static class UMotorPhysicsSimComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMotorPhysicsSimComponent*>(UMotorPhysicsSimComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioMotorSimStandardComponents.ResistanceMotorSimComponent
// (None)

class UClass* UResistanceMotorSimComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ResistanceMotorSimComponent");

	return Clss;
}


// ResistanceMotorSimComponent AudioMotorSimStandardComponents.Default__ResistanceMotorSimComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UResistanceMotorSimComponent* UResistanceMotorSimComponent::GetDefaultObj()
{
	static class UResistanceMotorSimComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UResistanceMotorSimComponent*>(UResistanceMotorSimComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioMotorSimStandardComponents.ReverseMotorSimComponent
// (None)

class UClass* UReverseMotorSimComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReverseMotorSimComponent");

	return Clss;
}


// ReverseMotorSimComponent AudioMotorSimStandardComponents.Default__ReverseMotorSimComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UReverseMotorSimComponent* UReverseMotorSimComponent::GetDefaultObj()
{
	static class UReverseMotorSimComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UReverseMotorSimComponent*>(UReverseMotorSimComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioMotorSimStandardComponents.RevLimiterMotorSimComponent
// (None)

class UClass* URevLimiterMotorSimComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RevLimiterMotorSimComponent");

	return Clss;
}


// RevLimiterMotorSimComponent AudioMotorSimStandardComponents.Default__RevLimiterMotorSimComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class URevLimiterMotorSimComponent* URevLimiterMotorSimComponent::GetDefaultObj()
{
	static class URevLimiterMotorSimComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<URevLimiterMotorSimComponent*>(URevLimiterMotorSimComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioMotorSimStandardComponents.RpmCurveMotorSimComponent
// (None)

class UClass* URpmCurveMotorSimComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RpmCurveMotorSimComponent");

	return Clss;
}


// RpmCurveMotorSimComponent AudioMotorSimStandardComponents.Default__RpmCurveMotorSimComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class URpmCurveMotorSimComponent* URpmCurveMotorSimComponent::GetDefaultObj()
{
	static class URpmCurveMotorSimComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<URpmCurveMotorSimComponent*>(URpmCurveMotorSimComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioMotorSimStandardComponents.ThrottleStateMotorSimComponent
// (None)

class UClass* UThrottleStateMotorSimComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ThrottleStateMotorSimComponent");

	return Clss;
}


// ThrottleStateMotorSimComponent AudioMotorSimStandardComponents.Default__ThrottleStateMotorSimComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UThrottleStateMotorSimComponent* UThrottleStateMotorSimComponent::GetDefaultObj()
{
	static class UThrottleStateMotorSimComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UThrottleStateMotorSimComponent*>(UThrottleStateMotorSimComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioMotorSimStandardComponents.VelocitySyncMotorSimComponent
// (None)

class UClass* UVelocitySyncMotorSimComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VelocitySyncMotorSimComponent");

	return Clss;
}


// VelocitySyncMotorSimComponent AudioMotorSimStandardComponents.Default__VelocitySyncMotorSimComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UVelocitySyncMotorSimComponent* UVelocitySyncMotorSimComponent::GetDefaultObj()
{
	static class UVelocitySyncMotorSimComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UVelocitySyncMotorSimComponent*>(UVelocitySyncMotorSimComponent::StaticClass()->DefaultObject);

	return Default;
}

}


