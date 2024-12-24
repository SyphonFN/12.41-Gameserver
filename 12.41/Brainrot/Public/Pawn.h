#pragma once
#include "../../framework.h"

class Pawn {
private:
	Pawn() = default;
public:
	static inline void (*MovingEmoteStoppedOG)(AFortPawn* Pawn);
	static void MovingEmoteStopped(AFortPawn* Pawn);
};