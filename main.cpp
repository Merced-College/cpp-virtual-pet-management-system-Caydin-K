#include <iostream>
#include "Pet.h"
#include "Dog.h"
#include "Cat.h"
#include "Zookeeper.h"

int main() {
    Zookeeper zoo;

    // Creating pets dynamically and adding them to the zoo
    zoo.addPet(new Dog("Rex", 3, 6, "Labrador"));
    zoo.addPet(new Cat("Whiskers", 2, 4, "Ball"));

    // Make all pets produce sounds polymorphically
    std::cout << "\nAll Pets Making Sounds:\n";
    zoo.makeAllSounds();

    // Zookeeper destructor will automatically clean up pets
    return 0;
}
