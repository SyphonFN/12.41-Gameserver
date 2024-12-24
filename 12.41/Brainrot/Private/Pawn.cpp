#include "../Public/Pawn.h"

void Pawn::MovingEmoteStopped(AFortPawn* Pawn) {
    if (!Pawn)
        return;

    Pawn->bMovingEmote = false;
    Pawn->bMovingEmoteFollowingOnly = false;

	return MovingEmoteStoppedOG(Pawn);
}