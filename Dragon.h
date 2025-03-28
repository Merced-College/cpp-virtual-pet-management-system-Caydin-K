#ifndef DRAGON_H
#define DRAGON_H

#include "Pet.h"

class Dragon : public Pet {
private:
    int wingspan;
    int firePower;
public:
    Dragon(const std::string& name, int age, int hungerLevel, int wingspan, int firePower);
    void printInfo() const override;
    void makeSound() const override;
    void breatheFire() const;
};

#endif
