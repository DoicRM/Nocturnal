﻿#include "game.h"

using namespace std;

int main()
{   
    SetConsoleTitleA("Cyberpunk Text Game");
    setlocale(LC_ALL, "polish"); // Zainicjowanie polskich znaków

    Game game;
    
    while (game.getPlaying())
    {
        //game.selectLanguage(); // Wybór języka gry
        game.welcome();
    }

    Function::waitForUserInput();

    return 0;
}