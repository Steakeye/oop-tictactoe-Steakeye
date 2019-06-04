#include "Controller.h"

Controller::Controller(IRenderer& renderer, Board board, IPlayer& playerOne, IPlayer& playerTwo): renderer(renderer), board(board), playerOne(playerOne), playerTwo(playerTwo) {}

void Controller::PlayGame() {
    PrintMessage("Welcome to Noughts and Crosses!\n");
    // TODO!
    renderer.RenderBoard(board.CurrentState());
}
