#include "Zookeeper.h"

// Destructor to clean up dynamically allocated pets
Zookeeper::~Zookeeper() {
    for (Pet* pet : pets) {
        delete pet;
    }
    pets.clear();
}

// Add a pet to the zoo
void Zookeeper::addPet(Pet* pet) {
    pets.push_back(pet);
}

// Call makeSound() for all pets
void Zookeeper::makeAllSounds() const {
    for (const Pet* pet : pets) {
        pet->makeSound();
    }
}
