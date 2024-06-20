// class.h
#pragma once

class A {
private:
    A(); // Объявление приватного конструктора

public:
    static A* getInstance(); // Статический метод в публичной секции

    // Другие методы и поля класса A
};
