#pragma once
#include "../../framework.h"

template <typename T>
inline T* Cast(UObject* Object) {
	if (Object && Object->IsA(T::StaticClass()))
	{
		return (T*)Object;
	}

	return nullptr;
}

inline UWorld* GetWorld() {
	auto World = UFortEngine::GetEngine()->GameViewport->World;

	if (World)
		return World;

	std::cout << "World is null" << std::endl;

	return nullptr;
}

inline UFortPlaylistAthena* GetPlaylist() {
	auto Playlist = Cast<AFortGameStateAthena>(GetWorld()->GameState)->CurrentPlaylistInfo.BasePlaylist;

	if (Playlist)
		return Playlist;

	return nullptr;
}

inline void DisableFunction(uintptr_t functionAddress) {
	DWORD oldProtection;
	if (VirtualProtect(reinterpret_cast<void*>(functionAddress), sizeof(uint8_t), PAGE_EXECUTE_READWRITE, &oldProtection)) {
		*reinterpret_cast<uint8_t*>(functionAddress) = 0xC3;

		DWORD tempProtection;
		VirtualProtect(reinterpret_cast<void*>(functionAddress), sizeof(uint8_t), oldProtection, &tempProtection);
	}
}

template <class T>
T* SpawnActor(FVector Location, FRotator Rotation = FRotator{ 0, 0, 0 }, UClass* Class = T::StaticClass(), FVector Scale3D = { 1,1,1 })
{
    FTransform Transform{};
    Transform.Rotation = UKismetMathLibrary::Conv_RotatorToTransform(Rotation).Rotation;
    Transform.Scale3D = Scale3D;
    Transform.Translation = Location;

    auto Actor = UGameplayStatics::GetDefaultObj()->BeginSpawningActorFromClass(GetWorld(), Class, Transform, false, nullptr);
    if (Actor)
        UGameplayStatics::GetDefaultObj()->FinishSpawningActor(Actor, Transform);
    return (T*)Actor;
}

inline AFortGameStateAthena* GetGameState() {
	return Cast<AFortGameStateAthena>(GetWorld()->GameState);
}
inline AFortGameModeAthena* GetGameMode() {
	return Cast<AFortGameModeAthena>(GetWorld()->AuthorityGameMode);
}

inline int Return1() {
	return 1;
}
inline int Return0() {
	return 0;
}

inline void HookVTable(void* instance, uintptr_t methodIndex, void* hookFunction, void** originalFunction = nullptr) {
	if (!instance || !hookFunction)
		return;

	auto vtable = *reinterpret_cast<void***>(instance);
	if (!vtable || !vtable[methodIndex])
		return;

	if (originalFunction)
		*originalFunction = vtable[methodIndex];

	DWORD oldProtection;
	if (VirtualProtect(&vtable[methodIndex], sizeof(void*), PAGE_EXECUTE_READWRITE, &oldProtection)) {
		vtable[methodIndex] = hookFunction;
		VirtualProtect(&vtable[methodIndex], sizeof(void*), oldProtection, &oldProtection);
	}
}

inline UObject* (*StaticFindObject_)(UClass* Class, UObject* Package, const TCHAR* OrigInName, bool ExactClass) = decltype(StaticFindObject_)(__int64(GetModuleHandleW(0)) + 0x2E1C4B0);

template <typename T>
inline T* StaticFindObject(const std::string& ObjectPath, UClass* Class = UObject::StaticClass()) {
	std::wstring WideObjectPath = std::wstring(ObjectPath.begin(), ObjectPath.end());
	const TCHAR* TCHARObjectPath = WideObjectPath.c_str();
	return (T*)StaticFindObject_(Class, nullptr, TCHARObjectPath, false);
}

inline UObject* (*StaticLoadObject_)(UClass* Class, UObject* InOuter, const TCHAR* Name, const TCHAR* Filename, uint32_t LoadFlags, UObject* Sandbox, bool bAllowObjectReconciliation, void*) = decltype(StaticLoadObject_)(uintptr_t(GetModuleHandleW(0)) + 0x2E1D7A0);

template<typename T = UObject>
inline T* StaticLoadObject(const std::string& ObjectPath, UClass* Class = T::StaticClass()) {
	std::wstring WideObjectPath = std::wstring(ObjectPath.begin(), ObjectPath.end());
	const TCHAR* TCHARObjectPath = WideObjectPath.c_str();
	return (T*)StaticLoadObject_(Class, nullptr, TCHARObjectPath, nullptr, 0, nullptr, false, nullptr);
}

inline FName Sigma(std::wstring Name) {
	return UKismetStringLibrary::Conv_StringToName(Name.c_str());
}

template <class T>
inline TArray<T*> GetAllActorsOfClass() {
	TArray<T*> ResultActors;

	if (UWorld* World = GetWorld()) {
		TArray<AActor*> OutActors;
		UGameplayStatics::GetAllActorsOfClass(World, T::StaticClass(), &OutActors);

		for (AActor* Actor : OutActors) {
			if (T* CastedActor = Cast<T>(Actor)) {
				ResultActors.Add(CastedActor);
			}
		}
	}
	return ResultActors;
}

inline void ShowFoundation(ABuildingFoundation* BuildingFoundation) {
	if (!BuildingFoundation)
		return;

	BuildingFoundation->bServerStreamedInLevel = true;
	BuildingFoundation->DynamicFoundationType = EDynamicFoundationType::Static;
	BuildingFoundation->OnRep_ServerStreamedInLevel();

	BuildingFoundation->FoundationEnabledState = EDynamicFoundationEnabledState::Enabled;
	BuildingFoundation->DynamicFoundationRepData.EnabledState = EDynamicFoundationEnabledState::Enabled;
	BuildingFoundation->DynamicFoundationTransform = BuildingFoundation->GetTransform();
	BuildingFoundation->OnRep_DynamicFoundationRepData();
}