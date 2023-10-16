#pragma once
#include "Component.h"
class MobilePhone
{
public:
    MobilePhone() {
        display = Component("Display");
        camera = Component("Camera");
        processor = Component("Processor");
        // ���� ���������� �������� ����� ������ ���
    }

    void turnOn() {
        std::cout << "Mobile phone is turning on." << std::endl;
        display.performAction();
        camera.performAction();
        processor.performAction();
        // �������� 䳿 ��� �������� ��������
    }

    void turnOff() {
        std::cout << "Mobile phone is turning off." << std::endl;
        // �������� 䳿 ��� �������� ��������
    }

    // ���� ������ ��� ������������ ��������������� ���������� �������� ����� ������ ���

private:
    Component display;
    Component camera;
    Component processor;
    // ���� ���������� �������� ����� ������ ���
};

