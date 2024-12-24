#pragma once
#include "../../framework.h"

namespace NetDriver {
	inline void (*ServerReplicateActorsOG)(UReplicationDriver* RepDriver);
	inline void (*SetWorld)(UNetDriver* UNetDriver, UWorld* UWorld) = decltype(SetWorld)(InSDKUtils::GetImageBase() + 0x42C2B20);
	inline void (*InitListen)(UNetDriver* UNetDriver, void* Notify, FURL& Port, bool bReuseAddress, FString& Err) = decltype(InitListen)(InSDKUtils::GetImageBase() + 0xD44C40);
	inline UNetDriver* (*CreateNetDriver)(UEngine* UEngine, UWorld* UWorld, FName Name) = decltype(CreateNetDriver)(InSDKUtils::GetImageBase() + 0x4573990);

	inline void (*TickFlushOG)(UNetDriver* NetDriver);
	void TickFlush(UNetDriver* NetDriver);
}