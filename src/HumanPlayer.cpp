
#include "HumanPlayer.h"

HumanPlayer::HumanPlayer(char character): character(character) {}

char HumanPlayer::Symbol() const { return character; }

BoardPosition HumanPlayer::TakeTurn(const std::vector<BoardPosition>& freePositions) {
    PrintMessage("Player ", character, ", take your turn from:");
    PrintMessage(&freePositions);

    int userInput = ReadNumber(0, 8);

    BoardPosition userPosition = NumberToBoardPosition(userInput);

    std::vector<BoardPosition>::const_iterator endIterator = freePositions.end();
    std::vector<BoardPosition>::const_iterator positionIndex = GetFreePositionIt(freePositions, userPosition);

    bool positionIsFree = positionIndex != endIterator;

    if (positionIsFree) {
        return userPosition;
    } else {
        throw std::invalid_argument("Position already taken");
    }
}