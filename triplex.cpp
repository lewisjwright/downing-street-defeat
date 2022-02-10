#include <iostream>

int main() {
    std::cout << "You are a secret agent breaking into number 10 to break up a party";
    std::cout << std::endl;
    std::cout << "Sneaky bastards! They've got code locks on the doors! You're going to need to break the codes...";

    const int a = 4;
    const int b = 7;
    const int c = 5;

    const int sum = a + b + c;
    const int product = a * b * c;

    std::cout << std::endl;
    std::cout << "There are 3 numbers in the code" << std::endl;
    std::cout << "The codes add up to: " << sum << std::endl;
    std::cout << product << std::endl;

    return 0;
}