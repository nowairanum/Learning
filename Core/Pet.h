#pragma once
#include <iostream>

class Pet
{
public:
    Pet(const std::string& name, int hunger) : name(name), hunger(hunger) {}
    ~Pet() {}

    void go_for_a_walk() { hunger++; }
    const std::string& get_name() const { return name; }
    int get_hunger() const { return hunger; }
    void info() const { std::cout << name << " has hunger level " << hunger << std::endl; }
private:
    std::string name;
    int hunger;
};