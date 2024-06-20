// A.cpp
#include "class.h"

A* A::getInstance() {
    // Реализация синглтона
    static A instance;
    return &instance;
}

// Остальная реализация класса A
