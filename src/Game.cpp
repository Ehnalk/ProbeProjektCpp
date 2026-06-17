#include "Game.hpp"

Game::Game() : field(6, 7), player1(nullptr), player2(nullptr), currentPlayer(nullptr) {
    std::cout << "Game created." << std::endl;
}

Game::~Game() {
    std::cout << "Game destroyed." << std::endl;
}

void Game::start() {
    std::cout << "Game started." << std::endl;