#pragma once

#include <interface/IPlayer.h>

class HumanPlayer : public IPlayer {
public:
    HumanPlayer(char character);

    char Symbol() const override;
    BoardPosition TakeTurn(const &std::vector<BoardPosition> freePositions) override;
};