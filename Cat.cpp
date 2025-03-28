#include "Cat.h"

Cat::Cat(const std::string& name, int age, int hungerLevel, const std::string& favoriteToy)
    : Pet(name, "Cat", age, hungerLevel), favoriteToy(favoriteToy) {}

void Cat::printInfo() const {
    Pet::printInfo();
    std::cout << "Favorite Toy: " << favoriteToy << std::endl;
}

void Cat::makeSound() const {
    std::cout << getName() << " meows softly. Meow meow!\n";
}
