#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class IrisCore.DataStream
// (None)

class UClass* UDataStream::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataStream");

	return Clss;
}


// DataStream IrisCore.Default__DataStream
// (Public, ClassDefaultObject, ArchetypeObject)

class UDataStream* UDataStream::GetDefaultObj()
{
	static class UDataStream* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataStream*>(UDataStream::StaticClass()->DefaultObject);

	return Default;
}


// Class IrisCore.DataStreamDefinitions
// (None)

class UClass* UDataStreamDefinitions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataStreamDefinitions");

	return Clss;
}


// DataStreamDefinitions IrisCore.Default__DataStreamDefinitions
// (Public, ClassDefaultObject, ArchetypeObject)

class UDataStreamDefinitions* UDataStreamDefinitions::GetDefaultObj()
{
	static class UDataStreamDefinitions* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataStreamDefinitions*>(UDataStreamDefinitions::StaticClass()->DefaultObject);

	return Default;
}


// Class IrisCore.DataStreamManager
// (None)

class UClass* UDataStreamManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataStreamManager");

	return Clss;
}


// DataStreamManager IrisCore.Default__DataStreamManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UDataStreamManager* UDataStreamManager::GetDefaultObj()
{
	static class UDataStreamManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataStreamManager*>(UDataStreamManager::StaticClass()->DefaultObject);

	return Default;
}


// Class IrisCore.NetObjectFilterConfig
// (None)

class UClass* UNetObjectFilterConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NetObjectFilterConfig");

	return Clss;
}


// NetObjectFilterConfig IrisCore.Default__NetObjectFilterConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UNetObjectFilterConfig* UNetObjectFilterConfig::GetDefaultObj()
{
	static class UNetObjectFilterConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UNetObjectFilterConfig*>(UNetObjectFilterConfig::StaticClass()->DefaultObject);

	return Default;
}


// Class IrisCore.FilterOutNetObjectFilterConfig
// (None)

class UClass* UFilterOutNetObjectFilterConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FilterOutNetObjectFilterConfig");

	return Clss;
}


// FilterOutNetObjectFilterConfig IrisCore.Default__FilterOutNetObjectFilterConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UFilterOutNetObjectFilterConfig* UFilterOutNetObjectFilterConfig::GetDefaultObj()
{
	static class UFilterOutNetObjectFilterConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UFilterOutNetObjectFilterConfig*>(UFilterOutNetObjectFilterConfig::StaticClass()->DefaultObject);

	return Default;
}


// Class IrisCore.NetObjectFilter
// (None)

class UClass* UNetObjectFilter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NetObjectFilter");

	return Clss;
}


// NetObjectFilter IrisCore.Default__NetObjectFilter
// (Public, ClassDefaultObject, ArchetypeObject)

class UNetObjectFilter* UNetObjectFilter::GetDefaultObj()
{
	static class UNetObjectFilter* Default = nullptr;

	if (!Default)
		Default = static_cast<UNetObjectFilter*>(UNetObjectFilter::StaticClass()->DefaultObject);

	return Default;
}


// Class IrisCore.FilterOutNetObjectFilter
// (None)

class UClass* UFilterOutNetObjectFilter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FilterOutNetObjectFilter");

	return Clss;
}


// FilterOutNetObjectFilter IrisCore.Default__FilterOutNetObjectFilter
// (Public, ClassDefaultObject, ArchetypeObject)

class UFilterOutNetObjectFilter* UFilterOutNetObjectFilter::GetDefaultObj()
{
	static class UFilterOutNetObjectFilter* Default = nullptr;

	if (!Default)
		Default = static_cast<UFilterOutNetObjectFilter*>(UFilterOutNetObjectFilter::StaticClass()->DefaultObject);

	return Default;
}


// Class IrisCore.IrisObjectReferencePackageMap
// (None)

class UClass* UIrisObjectReferencePackageMap::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IrisObjectReferencePackageMap");

	return Clss;
}


// IrisObjectReferencePackageMap IrisCore.Default__IrisObjectReferencePackageMap
// (Public, ClassDefaultObject, ArchetypeObject)

class UIrisObjectReferencePackageMap* UIrisObjectReferencePackageMap::GetDefaultObj()
{
	static class UIrisObjectReferencePackageMap* Default = nullptr;

	if (!Default)
		Default = static_cast<UIrisObjectReferencePackageMap*>(UIrisObjectReferencePackageMap::StaticClass()->DefaultObject);

	return Default;
}


// Class IrisCore.NetObjectPrioritizer
// (None)

class UClass* UNetObjectPrioritizer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NetObjectPrioritizer");

	return Clss;
}


// NetObjectPrioritizer IrisCore.Default__NetObjectPrioritizer
// (Public, ClassDefaultObject, ArchetypeObject)

class UNetObjectPrioritizer* UNetObjectPrioritizer::GetDefaultObj()
{
	static class UNetObjectPrioritizer* Default = nullptr;

	if (!Default)
		Default = static_cast<UNetObjectPrioritizer*>(UNetObjectPrioritizer::StaticClass()->DefaultObject);

	return Default;
}


// Class IrisCore.LocationBasedNetObjectPrioritizer
// (None)

class UClass* ULocationBasedNetObjectPrioritizer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LocationBasedNetObjectPrioritizer");

	return Clss;
}


// LocationBasedNetObjectPrioritizer IrisCore.Default__LocationBasedNetObjectPrioritizer
// (Public, ClassDefaultObject, ArchetypeObject)

class ULocationBasedNetObjectPrioritizer* ULocationBasedNetObjectPrioritizer::GetDefaultObj()
{
	static class ULocationBasedNetObjectPrioritizer* Default = nullptr;

	if (!Default)
		Default = static_cast<ULocationBasedNetObjectPrioritizer*>(ULocationBasedNetObjectPrioritizer::StaticClass()->DefaultObject);

	return Default;
}


// Class IrisCore.NetBlobHandler
// (None)

class UClass* UNetBlobHandler::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NetBlobHandler");

	return Clss;
}


// NetBlobHandler IrisCore.Default__NetBlobHandler
// (Public, ClassDefaultObject, ArchetypeObject)

class UNetBlobHandler* UNetBlobHandler::GetDefaultObj()
{
	static class UNetBlobHandler* Default = nullptr;

	if (!Default)
		Default = static_cast<UNetBlobHandler*>(UNetBlobHandler::StaticClass()->DefaultObject);

	return Default;
}


// Class IrisCore.NetBlobHandlerDefinitions
// (None)

class UClass* UNetBlobHandlerDefinitions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NetBlobHandlerDefinitions");

	return Clss;
}


// NetBlobHandlerDefinitions IrisCore.Default__NetBlobHandlerDefinitions
// (Public, ClassDefaultObject, ArchetypeObject)

class UNetBlobHandlerDefinitions* UNetBlobHandlerDefinitions::GetDefaultObj()
{
	static class UNetBlobHandlerDefinitions* Default = nullptr;

	if (!Default)
		Default = static_cast<UNetBlobHandlerDefinitions*>(UNetBlobHandlerDefinitions::StaticClass()->DefaultObject);

	return Default;
}


// Class IrisCore.NetObjectBlobHandler
// (None)

class UClass* UNetObjectBlobHandler::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NetObjectBlobHandler");

	return Clss;
}


// NetObjectBlobHandler IrisCore.Default__NetObjectBlobHandler
// (Public, ClassDefaultObject, ArchetypeObject)

class UNetObjectBlobHandler* UNetObjectBlobHandler::GetDefaultObj()
{
	static class UNetObjectBlobHandler* Default = nullptr;

	if (!Default)
		Default = static_cast<UNetObjectBlobHandler*>(UNetObjectBlobHandler::StaticClass()->DefaultObject);

	return Default;
}


// Class IrisCore.NetObjectPrioritizerConfig
// (None)

class UClass* UNetObjectPrioritizerConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NetObjectPrioritizerConfig");

	return Clss;
}


// NetObjectPrioritizerConfig IrisCore.Default__NetObjectPrioritizerConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UNetObjectPrioritizerConfig* UNetObjectPrioritizerConfig::GetDefaultObj()
{
	static class UNetObjectPrioritizerConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UNetObjectPrioritizerConfig*>(UNetObjectPrioritizerConfig::StaticClass()->DefaultObject);

	return Default;
}


// Class IrisCore.NetObjectCountLimiterConfig
// (None)

class UClass* UNetObjectCountLimiterConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NetObjectCountLimiterConfig");

	return Clss;
}


// NetObjectCountLimiterConfig IrisCore.Default__NetObjectCountLimiterConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UNetObjectCountLimiterConfig* UNetObjectCountLimiterConfig::GetDefaultObj()
{
	static class UNetObjectCountLimiterConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UNetObjectCountLimiterConfig*>(UNetObjectCountLimiterConfig::StaticClass()->DefaultObject);

	return Default;
}


// Class IrisCore.NetObjectCountLimiter
// (None)

class UClass* UNetObjectCountLimiter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NetObjectCountLimiter");

	return Clss;
}


// NetObjectCountLimiter IrisCore.Default__NetObjectCountLimiter
// (Public, ClassDefaultObject, ArchetypeObject)

class UNetObjectCountLimiter* UNetObjectCountLimiter::GetDefaultObj()
{
	static class UNetObjectCountLimiter* Default = nullptr;

	if (!Default)
		Default = static_cast<UNetObjectCountLimiter*>(UNetObjectCountLimiter::StaticClass()->DefaultObject);

	return Default;
}


// Class IrisCore.NetObjectFilterDefinitions
// (None)

class UClass* UNetObjectFilterDefinitions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NetObjectFilterDefinitions");

	return Clss;
}


// NetObjectFilterDefinitions IrisCore.Default__NetObjectFilterDefinitions
// (Public, ClassDefaultObject, ArchetypeObject)

class UNetObjectFilterDefinitions* UNetObjectFilterDefinitions::GetDefaultObj()
{
	static class UNetObjectFilterDefinitions* Default = nullptr;

	if (!Default)
		Default = static_cast<UNetObjectFilterDefinitions*>(UNetObjectFilterDefinitions::StaticClass()->DefaultObject);

	return Default;
}


// Class IrisCore.NetObjectGridFilterConfig
// (None)

class UClass* UNetObjectGridFilterConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NetObjectGridFilterConfig");

	return Clss;
}


// NetObjectGridFilterConfig IrisCore.Default__NetObjectGridFilterConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UNetObjectGridFilterConfig* UNetObjectGridFilterConfig::GetDefaultObj()
{
	static class UNetObjectGridFilterConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UNetObjectGridFilterConfig*>(UNetObjectGridFilterConfig::StaticClass()->DefaultObject);

	return Default;
}


// Class IrisCore.NetObjectGridFilter
// (None)

class UClass* UNetObjectGridFilter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NetObjectGridFilter");

	return Clss;
}


// NetObjectGridFilter IrisCore.Default__NetObjectGridFilter
// (Public, ClassDefaultObject, ArchetypeObject)

class UNetObjectGridFilter* UNetObjectGridFilter::GetDefaultObj()
{
	static class UNetObjectGridFilter* Default = nullptr;

	if (!Default)
		Default = static_cast<UNetObjectGridFilter*>(UNetObjectGridFilter::StaticClass()->DefaultObject);

	return Default;
}


// Class IrisCore.NetObjectPrioritizerDefinitions
// (None)

class UClass* UNetObjectPrioritizerDefinitions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NetObjectPrioritizerDefinitions");

	return Clss;
}


// NetObjectPrioritizerDefinitions IrisCore.Default__NetObjectPrioritizerDefinitions
// (Public, ClassDefaultObject, ArchetypeObject)

class UNetObjectPrioritizerDefinitions* UNetObjectPrioritizerDefinitions::GetDefaultObj()
{
	static class UNetObjectPrioritizerDefinitions* Default = nullptr;

	if (!Default)
		Default = static_cast<UNetObjectPrioritizerDefinitions*>(UNetObjectPrioritizerDefinitions::StaticClass()->DefaultObject);

	return Default;
}


// Class IrisCore.NetRPCHandler
// (None)

class UClass* UNetRPCHandler::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NetRPCHandler");

	return Clss;
}


// NetRPCHandler IrisCore.Default__NetRPCHandler
// (Public, ClassDefaultObject, ArchetypeObject)

class UNetRPCHandler* UNetRPCHandler::GetDefaultObj()
{
	static class UNetRPCHandler* Default = nullptr;

	if (!Default)
		Default = static_cast<UNetRPCHandler*>(UNetRPCHandler::StaticClass()->DefaultObject);

	return Default;
}


// Class IrisCore.NetTokenDataStream
// (None)

class UClass* UNetTokenDataStream::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NetTokenDataStream");

	return Clss;
}


// NetTokenDataStream IrisCore.Default__NetTokenDataStream
// (Public, ClassDefaultObject, ArchetypeObject)

class UNetTokenDataStream* UNetTokenDataStream::GetDefaultObj()
{
	static class UNetTokenDataStream* Default = nullptr;

	if (!Default)
		Default = static_cast<UNetTokenDataStream*>(UNetTokenDataStream::StaticClass()->DefaultObject);

	return Default;
}


// Class IrisCore.NopNetObjectFilterConfig
// (None)

class UClass* UNopNetObjectFilterConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NopNetObjectFilterConfig");

	return Clss;
}


// NopNetObjectFilterConfig IrisCore.Default__NopNetObjectFilterConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UNopNetObjectFilterConfig* UNopNetObjectFilterConfig::GetDefaultObj()
{
	static class UNopNetObjectFilterConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UNopNetObjectFilterConfig*>(UNopNetObjectFilterConfig::StaticClass()->DefaultObject);

	return Default;
}


// Class IrisCore.NopNetObjectFilter
// (None)

class UClass* UNopNetObjectFilter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NopNetObjectFilter");

	return Clss;
}


// NopNetObjectFilter IrisCore.Default__NopNetObjectFilter
// (Public, ClassDefaultObject, ArchetypeObject)

class UNopNetObjectFilter* UNopNetObjectFilter::GetDefaultObj()
{
	static class UNopNetObjectFilter* Default = nullptr;

	if (!Default)
		Default = static_cast<UNopNetObjectFilter*>(UNopNetObjectFilter::StaticClass()->DefaultObject);

	return Default;
}


// Class IrisCore.ReplicationBridge
// (None)

class UClass* UReplicationBridge::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReplicationBridge");

	return Clss;
}


// ReplicationBridge IrisCore.Default__ReplicationBridge
// (Public, ClassDefaultObject, ArchetypeObject)

class UReplicationBridge* UReplicationBridge::GetDefaultObj()
{
	static class UReplicationBridge* Default = nullptr;

	if (!Default)
		Default = static_cast<UReplicationBridge*>(UReplicationBridge::StaticClass()->DefaultObject);

	return Default;
}


// Class IrisCore.ObjectReplicationBridge
// (None)

class UClass* UObjectReplicationBridge::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ObjectReplicationBridge");

	return Clss;
}


// ObjectReplicationBridge IrisCore.Default__ObjectReplicationBridge
// (Public, ClassDefaultObject, ArchetypeObject)

class UObjectReplicationBridge* UObjectReplicationBridge::GetDefaultObj()
{
	static class UObjectReplicationBridge* Default = nullptr;

	if (!Default)
		Default = static_cast<UObjectReplicationBridge*>(UObjectReplicationBridge::StaticClass()->DefaultObject);

	return Default;
}


// Class IrisCore.ObjectReplicationBridgeConfig
// (None)

class UClass* UObjectReplicationBridgeConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ObjectReplicationBridgeConfig");

	return Clss;
}


// ObjectReplicationBridgeConfig IrisCore.Default__ObjectReplicationBridgeConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UObjectReplicationBridgeConfig* UObjectReplicationBridgeConfig::GetDefaultObj()
{
	static class UObjectReplicationBridgeConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UObjectReplicationBridgeConfig*>(UObjectReplicationBridgeConfig::StaticClass()->DefaultObject);

	return Default;
}


// Class IrisCore.SequentialPartialNetBlobHandlerConfig
// (None)

class UClass* USequentialPartialNetBlobHandlerConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SequentialPartialNetBlobHandlerConfig");

	return Clss;
}


// SequentialPartialNetBlobHandlerConfig IrisCore.Default__SequentialPartialNetBlobHandlerConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class USequentialPartialNetBlobHandlerConfig* USequentialPartialNetBlobHandlerConfig::GetDefaultObj()
{
	static class USequentialPartialNetBlobHandlerConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<USequentialPartialNetBlobHandlerConfig*>(USequentialPartialNetBlobHandlerConfig::StaticClass()->DefaultObject);

	return Default;
}


// Class IrisCore.PartialNetObjectAttachmentHandlerConfig
// (None)

class UClass* UPartialNetObjectAttachmentHandlerConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PartialNetObjectAttachmentHandlerConfig");

	return Clss;
}


// PartialNetObjectAttachmentHandlerConfig IrisCore.Default__PartialNetObjectAttachmentHandlerConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UPartialNetObjectAttachmentHandlerConfig* UPartialNetObjectAttachmentHandlerConfig::GetDefaultObj()
{
	static class UPartialNetObjectAttachmentHandlerConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UPartialNetObjectAttachmentHandlerConfig*>(UPartialNetObjectAttachmentHandlerConfig::StaticClass()->DefaultObject);

	return Default;
}


// Class IrisCore.SequentialPartialNetBlobHandler
// (None)

class UClass* USequentialPartialNetBlobHandler::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SequentialPartialNetBlobHandler");

	return Clss;
}


// SequentialPartialNetBlobHandler IrisCore.Default__SequentialPartialNetBlobHandler
// (Public, ClassDefaultObject, ArchetypeObject)

class USequentialPartialNetBlobHandler* USequentialPartialNetBlobHandler::GetDefaultObj()
{
	static class USequentialPartialNetBlobHandler* Default = nullptr;

	if (!Default)
		Default = static_cast<USequentialPartialNetBlobHandler*>(USequentialPartialNetBlobHandler::StaticClass()->DefaultObject);

	return Default;
}


// Class IrisCore.PartialNetObjectAttachmentHandler
// (None)

class UClass* UPartialNetObjectAttachmentHandler::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PartialNetObjectAttachmentHandler");

	return Clss;
}


// PartialNetObjectAttachmentHandler IrisCore.Default__PartialNetObjectAttachmentHandler
// (Public, ClassDefaultObject, ArchetypeObject)

class UPartialNetObjectAttachmentHandler* UPartialNetObjectAttachmentHandler::GetDefaultObj()
{
	static class UPartialNetObjectAttachmentHandler* Default = nullptr;

	if (!Default)
		Default = static_cast<UPartialNetObjectAttachmentHandler*>(UPartialNetObjectAttachmentHandler::StaticClass()->DefaultObject);

	return Default;
}


// Class IrisCore.ReplicationDataStream
// (None)

class UClass* UReplicationDataStream::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReplicationDataStream");

	return Clss;
}


// ReplicationDataStream IrisCore.Default__ReplicationDataStream
// (Public, ClassDefaultObject, ArchetypeObject)

class UReplicationDataStream* UReplicationDataStream::GetDefaultObj()
{
	static class UReplicationDataStream* Default = nullptr;

	if (!Default)
		Default = static_cast<UReplicationDataStream*>(UReplicationDataStream::StaticClass()->DefaultObject);

	return Default;
}


// Class IrisCore.ReplicationSystem
// (None)

class UClass* UReplicationSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReplicationSystem");

	return Clss;
}


// ReplicationSystem IrisCore.Default__ReplicationSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UReplicationSystem* UReplicationSystem::GetDefaultObj()
{
	static class UReplicationSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UReplicationSystem*>(UReplicationSystem::StaticClass()->DefaultObject);

	return Default;
}


// Class IrisCore.SphereNetObjectPrioritizerConfig
// (None)

class UClass* USphereNetObjectPrioritizerConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SphereNetObjectPrioritizerConfig");

	return Clss;
}


// SphereNetObjectPrioritizerConfig IrisCore.Default__SphereNetObjectPrioritizerConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class USphereNetObjectPrioritizerConfig* USphereNetObjectPrioritizerConfig::GetDefaultObj()
{
	static class USphereNetObjectPrioritizerConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<USphereNetObjectPrioritizerConfig*>(USphereNetObjectPrioritizerConfig::StaticClass()->DefaultObject);

	return Default;
}


// Class IrisCore.SphereNetObjectPrioritizer
// (None)

class UClass* USphereNetObjectPrioritizer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SphereNetObjectPrioritizer");

	return Clss;
}


// SphereNetObjectPrioritizer IrisCore.Default__SphereNetObjectPrioritizer
// (Public, ClassDefaultObject, ArchetypeObject)

class USphereNetObjectPrioritizer* USphereNetObjectPrioritizer::GetDefaultObj()
{
	static class USphereNetObjectPrioritizer* Default = nullptr;

	if (!Default)
		Default = static_cast<USphereNetObjectPrioritizer*>(USphereNetObjectPrioritizer::StaticClass()->DefaultObject);

	return Default;
}


// Class IrisCore.SphereWithOwnerBoostNetObjectPrioritizerConfig
// (None)

class UClass* USphereWithOwnerBoostNetObjectPrioritizerConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SphereWithOwnerBoostNetObjectPrioritizerConfig");

	return Clss;
}


// SphereWithOwnerBoostNetObjectPrioritizerConfig IrisCore.Default__SphereWithOwnerBoostNetObjectPrioritizerConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class USphereWithOwnerBoostNetObjectPrioritizerConfig* USphereWithOwnerBoostNetObjectPrioritizerConfig::GetDefaultObj()
{
	static class USphereWithOwnerBoostNetObjectPrioritizerConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<USphereWithOwnerBoostNetObjectPrioritizerConfig*>(USphereWithOwnerBoostNetObjectPrioritizerConfig::StaticClass()->DefaultObject);

	return Default;
}


// Class IrisCore.SphereWithOwnerBoostNetObjectPrioritizer
// (None)

class UClass* USphereWithOwnerBoostNetObjectPrioritizer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SphereWithOwnerBoostNetObjectPrioritizer");

	return Clss;
}


// SphereWithOwnerBoostNetObjectPrioritizer IrisCore.Default__SphereWithOwnerBoostNetObjectPrioritizer
// (Public, ClassDefaultObject, ArchetypeObject)

class USphereWithOwnerBoostNetObjectPrioritizer* USphereWithOwnerBoostNetObjectPrioritizer::GetDefaultObj()
{
	static class USphereWithOwnerBoostNetObjectPrioritizer* Default = nullptr;

	if (!Default)
		Default = static_cast<USphereWithOwnerBoostNetObjectPrioritizer*>(USphereWithOwnerBoostNetObjectPrioritizer::StaticClass()->DefaultObject);

	return Default;
}


// Class IrisCore.ReplicationStateDescriptorConfig
// (None)

class UClass* UReplicationStateDescriptorConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReplicationStateDescriptorConfig");

	return Clss;
}


// ReplicationStateDescriptorConfig IrisCore.Default__ReplicationStateDescriptorConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UReplicationStateDescriptorConfig* UReplicationStateDescriptorConfig::GetDefaultObj()
{
	static class UReplicationStateDescriptorConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UReplicationStateDescriptorConfig*>(UReplicationStateDescriptorConfig::StaticClass()->DefaultObject);

	return Default;
}

}


