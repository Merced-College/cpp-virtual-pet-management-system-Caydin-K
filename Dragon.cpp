#include "Dragon.h"

Dragon::Dragon(const std::string& name, int age, int hungerLevel, int wingspan, int firePower)
    : Pet(name, "Dragon", age, hungerLevel), wingspan(wingspan), firePower(firePower) {}

void Dragon::printInfo() const {
    Pet::printInfo();
    std::cout << "Wingspan: " << wingspan << " ft\n"
              << "Fire Power: " << firePower << "/10\n";
}

void Dragon::makeSound() const {
    std::cout << getName() << " roars mightily!\n";
}

void Dragon::breatheFire() const {
    std::cout << getName() << " breathes fire with power " << firePower << "!\n";
}
