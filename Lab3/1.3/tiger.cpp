#include "animal.hpp"
#include "myfactory.hpp"
#include <string>

class Tiger : public Animal {
public:
    Tiger(const std::string& name) : name_(name) {}

    const char* name() override {
        return name_.c_str();
    }

    const char* greet() override {
        return "Roarrr!";
    }

    const char* menu() override {
        return "Meat and fish";
    }

private:
    std::string name_;
};

static inline void* myCreator(const std::string& arg) {
    return new Tiger(arg);
}

static int hreg = myfactory::instance().registerCreator("tiger", myCreator);
