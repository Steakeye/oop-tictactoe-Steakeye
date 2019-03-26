#pragma once

#include <vector>
#include "interface/IPlayer.h"
#include "BoardPosition.h"

struct Board {
    Board();

    const std::vector<BoardPosition>& FreePositions() const;
    void OccupyPosition(const IPlayer &player, const BoardPosition &position);
    const std::vector<char>& CurrentState() const;

private:
    std::vector<char> state;
    std::vector<BoardPosition> freePositions;
};