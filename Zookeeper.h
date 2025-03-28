#ifndef ZOOKEEPER_H
#define ZOOKEEPER_H

#include <vector>
#include "Pet.h"

class Zookeeper {
private:
    std::vector<Pet*> pets;

public:
    ~Zookeeper(); // Destructor to clean up pets
    void addPet(Pet* pet);
    void makeAllSounds() const;
};

#endif
