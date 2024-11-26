#include "animal.hpp"
#include "myfactory.hpp"
#include <string>

class Parrot : public Animal {
public:
    Parrot(const std::string& name) : name_(name) {}

    const char* name() override {
        return name_.c_str();
    }

    const char* greet() override {
        return "Polly wants a cracker!";
    }

    const char* menu() override {
        return "Seeds and fruits";
    }

private:
    std::string name_;
};

static inline void* myCreator(const std::string& arg) {
    return new Parrot(arg);
}

static int hreg = myfactory::instance().registerCreator("parrot", myCreator);
