#include "myfactory.hpp"
#include "animal.hpp"
#include <iostream>
#include <sstream>

void printGreeting(Animal& animal) {
    std::cout << "Name: " << animal.name() << std::endl;
    std::cout << "Greeting: " << animal.greet() << std::endl;
}

void printMenu(Animal& animal) {
    std::cout << "Favorite menu: " << animal.menu() << std::endl;
}

int main() {
    myfactory& fact = myfactory::instance();
    std::vector<std::string> vecIds = fact.getIds();

    for (size_t i = 0; i < vecIds.size(); ++i) {
        std::ostringstream oss;
        oss << "Pet " << i;
        Animal* pa = static_cast<Animal*>(fact.create(vecIds[i], oss.str()));
        printGreeting(*pa);
        printMenu(*pa);
        delete pa;
    }

    return 0;
}
