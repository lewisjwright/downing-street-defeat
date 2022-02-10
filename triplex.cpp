#include <iostream>

int main() {
    std::cout << "You are a secret agent breaking into number 10 to break up a party" << std::endl;
    std::cout << "Sneaky bastards! They've got code locks on the doors! You're going to need to break the codes..." << std::endl;

    const int CodeA = 4;
    const int CodeB = 7;
    const int CodeC = 5;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    std::cout << std::endl;
    std::cout << "+ There are 3 numbers in the code" << std::endl;
    std::cout << "+ The codes add up to: " << CodeSum << std::endl;
    std::cout << "+ The codes mutliply to give:" << CodeProduct << std::endl;

    return 0;
}