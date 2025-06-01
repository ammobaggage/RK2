cmake_minimum_required(VERSION 3.10)
project(abstract_factory_example)

set(CMAKE_CXX_STANDARD 17)


enable_testing()


find_package(GTest REQUIRED)

add_library(hamburger_factory STATIC
    src/hamburger/hamburger_ingredient.cpp
    src/hamburger/hamburger_factory.cpp
    src/hamburger/hamburger.cpp
    src/hamburger/hamburger_house.cpp
)
target_include_directories(hamburger_factory PUBLIC include)

add_library(munition_factory STATIC
    src/munition/munition_factory.cpp
    src/munition/munition_store.cpp
)
target_include_directories(munition_factory PUBLIC include)

add_executable(hamburger_app apps/hamburger_app.cpp)
target_link_libraries(hamburger_app hamburger_factory)

add_executable(munition_app apps/munition_app.cpp)
target_link_libraries(munition_app munition_factory)


add_executable(test_hamburger_house tests/hamburger/test_hamburger_house.cpp)
target_link_libraries(test_hamburger_house hamburger_factory GTest::GTest GTest::Main)
add_test(NAME test_hamburger_house COMMAND test_hamburger_house)


add_executable(test_munition_store tests/munition/test_munition_store.cpp)
target_link_libraries(test_munition_store munition_factory GTest::GTest GTest::Main)
add_test(NAME test_munition_store COMMAND test_munition_store)


set(CPACK_PACKAGE_NAME "abstract-factory-example")
set(CPACK_PACKAGE_VERSION "1.0")
set(CPACK_PACKAGE_CONTACT "ammobaggage <karev.g.a@mail.ru>")
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "ammobaggage")
set(CPACK_DEBIAN_PACKAGE_DEPENDS "libgtest-dev")
include(CPack)
