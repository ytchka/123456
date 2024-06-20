cmake_minimum_required(VERSION 3.10)

project(MyProject)

# Включаем функциональность тестирования
enable_testing()

# Добавляем файлы проекта
add_executable(MyProject main.cpp A.cpp)

# Добавляем файлы с тестами
add_executable(MyProjectTests test.cpp A.cpp)

# Добавляем тесты
# Убедитесь, что у вас есть правильные пути к функциям тестирования
add_test(NAME MyProjectTests
         COMMAND MyProjectTests)
