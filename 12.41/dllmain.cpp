#include "Brainrot/Public/Utilities.h"
#include "Brainrot/Public/NetDriver.h"
#include "Brainrot/Public/PlayerController.h"
#include "Brainrot/Public/GameplayAbilities.h"
#include "Brainrot/Public/FortInventory.h"
#include "Brainrot/Public/BuildingContainer.h"
#include "Brainrot/Public/Pawn.h" 
#include "Brainrot/Public/PlayerState.h" 
#include "Brainrot/Public/GameMode.h" 

__int64 (*DispatchrequestOG)(__int64 a1, __int64* a2, int a3);
__int64 __fastcall Dispatchrequest(__int64 a1, __int64* a2, int a3) {
	return DispatchrequestOG(a1, a2, 3);
}
__int64 sub_2B98BE0(__int64 a1, unsigned int a2, __int64 a3, unsigned __int8 a4, wchar_t* Format, ...) {

	if (wcsstr(Format, L"error")) {
		printf("%ls\n", Format);
		return 0;
	}

	return -1; 
}

static float GetMaxTickRate() {
	return 30.f;
}

void (*ProcessEventOG)(UObject* Object, UFunction* Function, void** Params);
void ProcessEvent(UObject* Object, UFunction* Function, void** Params) {

	auto FunctionName = Function->GetFullName();

	//if (FunctionName.contains("")) {
	//	std::cout << std::format("ProcessEvent: {}", FunctionName) << std::endl;
	//}

	return ProcessEventOG(Object, Function, Params);
}

void Main() {

	AllocConsole();
	FILE* f;
	freopen_s(&f, "CONOUT$", "w", stdout);

	Sleep(5000);

	MH_Initialize();

	UFortEngine::GetEngine()->GameInstance->LocalPlayers.Free();
	UGameplayStatics::OpenLevel(GetWorld(), Sigma(L"Apollo_Terrain"), true, FString());

	*(bool*)(InSDKUtils::GetImageBase() + 0x804B659) = false;
    *(bool*)(InSDKUtils::GetImageBase() + 0x804B660) = true;

	MH_CreateHook((LPVOID)(InSDKUtils::GetImageBase() + 0x45C9D90), Return1, nullptr); 
	MH_CreateHook((LPVOID)(InSDKUtils::GetImageBase() + 0x4155600), Return1, nullptr); 
	MH_CreateHook((LPVOID)(InSDKUtils::GetImageBase() + 0x2DBCBA0), Return1, nullptr);
	MH_CreateHook((LPVOID)(InSDKUtils::GetImageBase() + 0x2B98BE0), sub_2B98BE0, nullptr);
	MH_CreateHook((LPVOID)(InSDKUtils::GetImageBase() + 0x42C3ED0), NetDriver::TickFlush, (PVOID*)&NetDriver::TickFlushOG);
	MH_CreateHook((LPVOID)(InSDKUtils::GetImageBase() + 0x108D740), Dispatchrequest, (PVOID*)&DispatchrequestOG);
	MH_CreateHook((LPVOID)(InSDKUtils::GetImageBase() + Offsets::ProcessEvent), ProcessEvent, (PVOID*)&ProcessEventOG);
	MH_CreateHook((LPVOID)(InSDKUtils::GetImageBase() + 0x4576310), GetMaxTickRate, nullptr);

	DisableFunction(InSDKUtils::GetImageBase() + 0x3CA10C0);
	DisableFunction(InSDKUtils::GetImageBase() + 0x2D95E00);
	DisableFunction(InSDKUtils::GetImageBase() + 0x3262100);
	DisableFunction(InSDKUtils::GetImageBase() + 0x1E23840);
	DisableFunction(InSDKUtils::GetImageBase() + 0x2D95DC0);

#pragma region GameMode
	MH_CreateHook((LPVOID)(InSDKUtils::GetImageBase() + 0x18EBDA0), GameMode::ReadyToStartMatch, (LPVOID*)&GameMode::ReadyToStartMatchOG);
	MH_CreateHook((LPVOID)(InSDKUtils::GetImageBase() + 0x18F6250), GameMode::SpawnDefaultPawnFor, nullptr);
#pragma endregion

#pragma region PlayerController
	HookVTable(UFortControllerComponent_Aircraft::GetDefaultObj(), 0x89, PlayerController::ServerAttemptAircraftJump);

	HookVTable(AFortPlayerControllerAthena::GetDefaultObj(), 0x10D, PlayerController::ServerAcknowledgePossession);
	HookVTable(AFortPlayerControllerAthena::GetDefaultObj(), 0x20D, PlayerController::ServerExecuteInventoryItem);
	HookVTable(AFortPlayerControllerAthena::GetDefaultObj(), 0x230, PlayerController::ServerCreateBuildingActor);
	HookVTable(AFortPlayerControllerAthena::GetDefaultObj(), 0x237, PlayerController::ServerBeginEditingBuildingActor);
	HookVTable(AFortPlayerControllerAthena::GetDefaultObj(), 0x232, PlayerController::ServerEditBuildingActor);
	HookVTable(AFortPlayerControllerAthena::GetDefaultObj(), 0x235, PlayerController::ServerEndEditingBuildingActor);
	HookVTable(AFortPlayerControllerAthena::GetDefaultObj(), 0x1C5, PlayerController::ServerCheat);
	HookVTable(AFortPlayerControllerAthena::GetDefaultObj(), 0x1C7, PlayerController::ServerPlayEmoteItem);
	HookVTable(AFortPlayerControllerAthena::GetDefaultObj(), 0x269, PlayerController::ServerReadyToStartMatch, (PVOID*)&PlayerController::ServerReadyToStartMatchOG);

	MH_CreateHook((LPVOID)(InSDKUtils::GetImageBase() + 0x2683F80), PlayerController::OnDamageServer, (LPVOID*)&PlayerController::OnDamageServerOG);
	MH_CreateHook((LPVOID)(InSDKUtils::GetImageBase() + 0x22E0D50), PlayerController::GetPlayerViewPoint, nullptr);
#pragma endregion

#pragma region Pawn
	MH_CreateHook((LPVOID)(InSDKUtils::GetImageBase() + 0x6853B0), Pawn::MovingEmoteStopped, (LPVOID*)&Pawn::MovingEmoteStoppedOG);
#pragma endregion

#pragma region PlayerState
	HookVTable(AFortPlayerStateAthena::GetDefaultObj(), 0xFF, PlayerState::ServerSetInAircraft, (PVOID*)&PlayerState::ServerSetInAircraftOG);
#pragma endregion

#pragma region Abilities
	HookVTable(UAbilitySystemComponent::GetDefaultObj(), 0xFA, Abilities::InternalServerTryActivateAbility);
	HookVTable(UFortAbilitySystemComponent::GetDefaultObj(), 0xFA, Abilities::InternalServerTryActivateAbility);
	HookVTable(UFortAbilitySystemComponentAthena::GetDefaultObj(), 0xFA, Abilities::InternalServerTryActivateAbility);
#pragma endregion

#pragma region BuildingContainer
	HookVTable(UFortControllerComponent_Interaction::GetDefaultObj(), 0x8B, BuildingContainer::ServerAttemptInteract, (PVOID*)&BuildingContainer::ServerAttemptInteractOG);
#pragma endregion

	MH_EnableHook(MH_ALL_HOOKS);

	//std::ofstream DumpFile("12.41ObjDump.txt");
	//for (intptr_t i = 0; i < UObject::GObjects->Num(); i++)
	//{
	//	auto Object = UObject::GObjects->GetByIndex(i);
	//	if (!Object)
	//		continue;
	//	DumpFile << Object->GetFullName().c_str() << std::endl;
	//}
	//DumpFile.close();
}

BOOL APIENTRY DllMain(HMODULE hModule,
	DWORD  ul_reason_for_call,
	LPVOID lpReserved
)
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		std::thread(Main).detach();
		break;
	}
	return TRUE;
}