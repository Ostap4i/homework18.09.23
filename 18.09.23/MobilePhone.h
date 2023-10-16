#pragma once
#include "Component.h"
class MobilePhone
{
public:
    MobilePhone() {
        display = Component("Display");
        camera = Component("Camera");
        processor = Component("Processor");
        // Інші компоненти телефону можна додати тут
    }

    void turnOn() {
        std::cout << "Mobile phone is turning on." << std::endl;
        display.performAction();
        camera.performAction();
        processor.performAction();
        // Додаткові дії при включенні телефону
    }

    void turnOff() {
        std::cout << "Mobile phone is turning off." << std::endl;
        // Додаткові дії при вимкненні телефону
    }

    // Інші методи для використання функціональності компонентів телефону можна додати тут

private:
    Component display;
    Component camera;
    Component processor;
    // Інші компоненти телефону можна додати тут
};

