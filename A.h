// A.h
#ifndef A_H
#define A_H

class A {
public:
    static A& getInstance();
    // Другие методы и данные класса
};

// Определение статического метода в заголовочном файле
A& A::getInstance() {
    static A instance; // Пример реализации синглтона
    return instance;
}

#endif // A_H