#include <iostream>

void PrintASCII()
{
    std::cout << "________                      .__                   _________ __                         __   " << std::endl;
    std::cout << "\\______ \\   ______  _  ______ |__| ____    ____    /   _____//  |________   ____   _____/  |_ " << std::endl;
    std::cout << " |    |  \\ /  _ \\ \\/ \\/ /    \\|  |/    \\  / ___\\   \\_____  \\\\   __\\_  __ \\_/ __ \\_/ __ \\   __\\" << std::endl;
    std::cout << " |    `   (  <_> )     /   |  \\  |   |  \\/ /_/  >  /        \\|  |  |  | \\/\\  ___/\\  ___/|  |  " << std::endl;
    std::cout << "/_______  /\\____/ \\/\\_/|___|  /__|___|  /\\___  /  /_______  /|__|  |__|    \\___  >\\___  >__|  " << std::endl;
    std::cout << "        \\/                  \\/        \\//_____/           \\/                   \\/     \\/      " << std::endl;
    std::cout << ".___           _____              ________          _____              __                     " << std::endl;
    std::cout << "|   | ____   _/ ____\\___________  \\______ \\   _____/ ____\\____ _____ _/  |_                   " << std::endl;
    std::cout << "|   |/    \\  \\   __\\/  _ \\_  __ \\  |    |  \\_/ __ \\   __\\/ __ \\\\__  \\\\   __\\                  " << std::endl;
    std::cout << "|   |   |  \\  |  | (  <_> )  | \\/  |    `   \\  ___/|  | \\  ___/ / __ \\|  |                    " << std::endl;
    std::cout << "|___|___|  /  |__|  \\____/|__|    /_______  /\\___  >__|  \\___  >____  /__|                    " << std::endl;
    std::cout << "         \\/                               \\/     \\/          \\/     \\/    " << std::endl;
}

void PrintIntro(int Difficulty)
{
    // Setup scenario
    std::cout << "\n\nYou are a secret agent breaking into number 10 to break up a party\n";
    std::cout << "Sneaky bastards! They've got code locks on the doors! You're going to need to break the codes...\n\n";
    std::cout << "You're currently trying to crack a level " << Difficulty << " door\n";
}

bool PlayGame(int Difficulty)
{
    PrintIntro(Difficulty);

    // Set code
    const int CodeA = 4;
    const int CodeB = 2;
    const int CodeC = 5;

    // Set clues
    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Show player clues
    std::cout << std::endl << "Intelligence shows:\n";
    std::cout << "+ There are 3 numbers in the code";
    std::cout << "\n+ The codes add up to: " << CodeSum;
    std::cout << "\n+ The codes mutliply to give: " << CodeProduct << std::endl;

    // Store players guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    const int GuessSum = GuessA + GuessB + GuessC;
    const int GuessProduct = GuessA * GuessB * GuessC;

    // Check win conditions
    if (GuessSum == CodeSum && GuessProduct == CodeProduct) {
        std::cout << "\nYes! You cracked it! But behind all the wine and cheese there's another door! \n";
        return true;
    } else {
        std::cout << "\nTWAT!\n";
        std::cout << "You got it wrong and now they're onto us. Try again.";
        return false;
    }
}

int main()
{
    PrintASCII();

    int LevelDifficulty = 1;
    const int MaxDifficulty = 5;

    while (LevelDifficulty <= MaxDifficulty)
    {
        bool bLevelComplete = PlayGame(LevelDifficulty); // follow unreal naming
        std::cin.clear(); // clear errors
        std::cin.ignore(); // ignore buffers

        if (bLevelComplete) {
            // increase difficulty
            ++LevelDifficulty;
        }
    }

    std::cout << "\nYes! You got the code right and caught them red handed. \n";
    std::cout << "There's no way they will get away with this...";

    return 0;
}