#include <vector>
#include "HumanPlayer.h"
#include "BoardPosition.h"
#include "utility.h"

HumanPlayer::HumanPlayer(char character) character(character) {}

char HumanPlayer::Symbol() const { return character; }

BoardPosition HumanPlayer::TakeTurn(const std::vector<BoardPosition>& freePositions) {
    return BoardPosition::CENTER;
}