#ifndef ANIMAL_HPP
#define ANIMAL_HPP

class Animal {
public:
    virtual const char* name() = 0;
    virtual const char* greet() = 0;
    virtual const char* menu() = 0;
};

#endif // ANIMAL_HPP
