#include <iostream>

#include "Renderer.h"
#include "Controller.h"
#include "Board.h"
#include "HumanPlayer.h"

int main() {
    HumanPlayer p1{'X'};
    HumanPlayer p2{'O'};
    Renderer renderer;
    Board board;
    Controller controller{renderer, board, p1, p2};
    controller.PlayGame();
    return 0;
}