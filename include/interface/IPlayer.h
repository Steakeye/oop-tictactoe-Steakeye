#pragma once

#include <BoardPosition.h>

struct IPlayer {
    virtual char Symbol() const = 0;
    virtual BoardPosition TakeTurn(const &std::vector<BoardPosition> freePositions) = 0;
    virtual ~IPlayer() = default;
};