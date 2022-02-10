#include <iostream>

int main() {
    std::cout << "You are a secret agent breaking into number 10 to break up a party" << std::endl;
    std::cout << "Sneaky bastards! They've got code locks on the doors! You're going to need to break the codes..." << std::endl;

    const int CodeA = 4;
    const int CodeB = 7;
    const int CodeC = 5;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    std::cout << std::endl << "Intelligence shows:" << std::endl;
    std::cout << "+ There are 3 numbers in the code" << std::endl;
    std::cout << "+ The codes add up to: " << CodeSum << std::endl;
    std::cout << "+ The codes mutliply to give:" << CodeProduct << std::endl;

    int GuessA, GuessB, GuessC;

    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;

    const int GuessSum = GuessA + GuessB + GuessC;
    const int GuessProduct = GuessA * GuessB * GuessC;

    if (GuessSum == CodeSum && GuessProduct == CodeProduct) {
        std::cout << std::endl << "You Win!";
    } else {
        std::cout << std::endl << "TWAT!";
        std::cout << std::endl << "You got it wrong and now they're onto us. Try again.";
    }


    return 0;
}