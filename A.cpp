// A.
#include "class.h"

A::A() {
    // Реализация конструктора класса A
}

A* A::getInstance() {
    // Реализация синглтона
    static A instance;
    return &instance;
}

// Остальная реализация класса A
