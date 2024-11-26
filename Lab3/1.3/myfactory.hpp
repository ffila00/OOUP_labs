#ifndef MYFACTORY_HPP
#define MYFACTORY_HPP

#include <string>
#include <vector>
#include <map>

class myfactory {
public:
    typedef void* (*pFunCreator)(const std::string&);
    typedef std::map<std::string, pFunCreator> MyMap;

public:
    static myfactory& instance();
    int registerCreator(const std::string& id, pFunCreator pfn);
    void* create(const std::string& id, const std::string& arg);
    std::vector<std::string> getIds();

private:
    myfactory();
    ~myfactory();
    myfactory(const myfactory&);

private:
    MyMap creators_;
};

#endif  // MYFACTORY_HPP
