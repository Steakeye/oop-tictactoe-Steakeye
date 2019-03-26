#include <algorithm>
#include <vector>
#include <exception>
#include "utility.h"
#include "Board.h"

Board::Board(): state(9, 0) {
    for (int p = static_cast<int>(BoardPosition::TOP_LEFT);  p <= static_cast<int>(BoardPosition::BOTTOM_RIGHT);  ++p) {
        // Only works for STL containers with push_back defined.
        freePositions.push_back(NumberToBoardPosition(p));
    }
}

const std::vector<BoardPosition>& Board::FreePositions() const {
    return freePositions;
}

const std::vector<char>& Board::CurrentState() const {
    return state;
}

void Board::OccupyPosition(const IPlayer& player, const BoardPosition& position) {
    std::vector<BoardPosition>::iterator endIterator = freePositions.end();
    std::vector<BoardPosition>::iterator positionIndex = std::find(freePositions.begin(), endIterator, position);
    bool positionIsFree = positionIndex != endIterator;

    if (positionIsFree) {
        freePositions.erase(positionIndex);

        int indexToOccupy = BoardPositionToInt(position);

        state[indexToOccupy] = player.Symbol();

    } else {
        throw std::invalid_argument("Position already taken");
    }
}