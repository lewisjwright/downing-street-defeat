#include <iostream>

void PlayGame()
{
    // Setup scenario
    std::cout << "You are a secret agent breaking into number 10 to break up a party\n";
    std::cout << "Sneaky bastards! They've got code locks on the doors! You're going to need to break the codes...\n";

    // Set code
    const int CodeA = 4;
    const int CodeB = 7;
    const int CodeC = 5;

    // Set clues
    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Show player clues
    std::cout << std::endl << "Intelligence shows:\n";
    std::cout << "+ There are 3 numbers in the code";
    std::cout << "\n+ The codes add up to: " << CodeSum;
    std::cout << "\n+ The codes mutliply to give:" << CodeProduct << std::endl;

    // Store players guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    const int GuessSum = GuessA + GuessB + GuessC;
    const int GuessProduct = GuessA * GuessB * GuessC;

    // Check win conditions
    if (GuessSum == CodeSum && GuessProduct == CodeProduct) {
        std::cout << "\nYes! You got the code right and caught them red handed. \n";
        std::cout << "There's no way they will get away with this...";
    } else {
        std::cout << "\nTWAT!\n";
        std::cout << "You got it wrong and now they're onto us. Try again.";
    }
}

int main()
{
    PlayGame();
    return 0;
}