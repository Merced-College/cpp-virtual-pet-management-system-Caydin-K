#ifndef DOG_H
#define DOG_H

#include "Pet.h"

class Dog : public Pet {
private:
    std::string breed;

public:
    Dog(const std::string& name, int age, int hungerLevel, const std::string& breed);
    void printInfo() const override;
    void makeSound() const override;
};

#endif
