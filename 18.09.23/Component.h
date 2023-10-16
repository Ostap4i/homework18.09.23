#pragma once
#include <iostream>
#include <string>
using namespace std;

class Component
{
    Component(const std::string& name) : name(name) {}

    void performAction() {
        std::cout << "Component " << name << " is performing an action." << std::endl;
    }

private:
    std::string name;
};

