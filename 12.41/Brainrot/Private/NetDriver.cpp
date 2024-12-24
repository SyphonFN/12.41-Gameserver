#include "../Public/NetDriver.h"
#include "../Public/Utilities.h"

void NetDriver::TickFlush(UNetDriver* NetDriver) {

	if (!NetDriver || !NetDriver->ReplicationDriver)
		return TickFlushOG(NetDriver);

	ServerReplicateActorsOG = decltype(ServerReplicateActorsOG)(InSDKUtils::GetImageBase() + 0x1023F60);

	if (auto ReplicationDriver = NetDriver->ReplicationDriver) {
		ServerReplicateActorsOG(ReplicationDriver);
	}

	if (GetKeyState(VK_F7) & 1) {
		UKismetSystemLibrary::ExecuteConsoleCommand(GetWorld(), L"startaircraft", nullptr);
	}

	return TickFlushOG(NetDriver);
}