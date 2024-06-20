cmake_minimum_required(VERSION 3.10)

# Проектное имя
project(MyProject)

# Добавление исходных файлов
add_executable(MyProject main.cpp)

# Добавление зависимостей, если они есть
# find_package(SomeDependency REQUIRED)
# target_link_libraries(MyProject PRIVATE SomeDependency::SomeDependency)

# Включение тестирования
enable_testing()

# Добавление теста
add_executable(MyTest test.cpp)
target_link_libraries(MyTest PRIVATE MyProject)

# Добавление теста в CTest
add_test(NAME MyTest COMMAND MyTest)

# Дополнительные настройки тестов, если необходимо
# set_tests_properties(MyTest PROPERTIES PASS_REGULAR_EXPRESSION "Expected output")
