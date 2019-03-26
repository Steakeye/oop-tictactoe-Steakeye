#pragma once

#include <interface/IPlayer.h>
#include <interface/IRenderer.h>
#include <Board.h>

class Controller {
public:
    Controller(IRenderer renderer, Board board, IPlayer playerOne, IPlayer playerTwo);

    void PlayGame();

private:
    IPlayer& playerOne;
    IPlayer& playerTwo;
    Board board;
    IRenderer& renderer;
};