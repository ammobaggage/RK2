cmake_minimum_required(VERSION 3.10)
project(abstract_factory_example)

set(CMAKE_CXX_STANDARD 17)

# Включение тестирования
enable_testing()

# Нахождение GTest
find_package(GTest REQUIRED)

# Библиотека Hamburger
add_library(hamburger_factory STATIC
    src/hamburger/hamburger_ingredient.cpp
    src/hamburger/hamburger_factory.cpp
    src/hamburger/hamburger.cpp
    src/hamburger/hamburger_house.cpp
)
target_include_directories(hamburger_factory PUBLIC include)

# Библиотека Munition
add_library(munition_factory STATIC
    src/munition/munition_factory.cpp
    src/munition/munition_store.cpp
)
target_include_directories(munition_factory PUBLIC include)

# Исполняемые файлы
add_executable(hamburger_app apps/hamburger_app.cpp)
target_link_libraries(hamburger_app hamburger_factory)

add_executable(munition_app apps/munition_app.cpp)
target_link_libraries(munition_app munition_factory)

# Тесты Hamburger
add_executable(test_hamburger_ingredient tests/hamburger/test_hamburger_ingredient.cpp)
target_link_libraries(test_hamburger_ingredient hamburger_factory GTest::GTest GTest::Main)
add_test(NAME test_hamburger_ingredient COMMAND test_hamburger_ingredient)

add_executable(test_hamburger_factory tests/hamburger/test_hamburger_factory.cpp)
target_link_libraries(test_hamburger_factory hamburger_factory GTest::GTest GTest::Main)
add_test(NAME test_hamburger_factory COMMAND test_hamburger_factory)

add_executable(test_hamburger tests/hamburger/test_hamburger.cpp)
target_link_libraries(test_hamburger hamburger_factory GTest::GTest GTest::Main)
add_test(NAME test_hamburger COMMAND test_hamburger)

add_executable(test_hamburger_house tests/hamburger/test_hamburger_house.cpp)
target_link_libraries(test_hamburger_house hamburger_factory GTest::GTest GTest::Main)
add_test(NAME test_hamburger_house COMMAND test_hamburger_house)

# Тесты Munition
add_executable(test_weapon tests/munition/test_weapon.cpp)
target_link_libraries(test_weapon munition_factory GTest::GTest GTest::Main)
add_test(NAME test_weapon COMMAND test_weapon)

add_executable(test_vehicle tests/munition/test_vehicle.cpp)
target_link_libraries(test_vehicle munition_factory GTest::GTest GTest::Main)
add_test(NAME test_vehicle COMMAND test_vehicle)

add_executable(test_munition_factory tests/munition/test_munition_factory.cpp)
target_link_libraries(test_munition_factory munition_factory GTest::GTest GTest::Main)
add_test(NAME test_munition_factory COMMAND test_munition_factory)

add_executable(test_munition_store tests/munition/test_munition_store.cpp)
target_link_libraries(test_munition_store munition_factory GTest::GTest GTest::Main)
add_test(NAME test_munition_store COMMAND test_munition_store)


set(CPACK_PACKAGE_NAME "abstract-factory-example")
set(CPACK_PACKAGE_VERSION "1.0")
set(CPACK_PACKAGE_CONTACT "ammobaggage <karev.g.a@mail.ru>")
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "ammobaggage")
set(CPACK_DEBIAN_PACKAGE_DEPENDS "libgtest-dev")
include(CPack)
