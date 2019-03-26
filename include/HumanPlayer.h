#pragma once

#include <vector>
#include "interface/IPlayer.h"
#include "BoardPosition.h"
#include "utility.h"

class HumanPlayer : public IPlayer {
public:
    HumanPlayer(char character);

    char Symbol() const override;
    BoardPosition TakeTurn(const std::vector<BoardPosition>& freePositions) override;

private:
    char character;
};