#pragma once

#include <vector>
#include "interface/IPlayer.h"
#include "BoardPosition.h"

struct Board {
    Board();

    &std::vector<BoardPosition> FreePositions() const;
    OccupyPosition(const IPlayer &player, const BoardPosition &position);
    &std::vector<char> CurrentState() const;

private:
    std::vector<char> state;
    std::vector<BoardPosition> freePositions;
};