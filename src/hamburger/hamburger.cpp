#include "hamburger/hamburger.h"
#include <iostream>

Hamburger::Hamburger(std::vector<std::unique_ptr<HamburgerIngredient>>&& ingredientList)
    : ingredientList_(std::move(ingredientList)) {}

void Hamburger::Print() const {
    std::cout << "----------" << std::endl;
    for (auto const& ingredient : ingredientList_) {
        std::cout << ingredient->Name() << std::endl;
    }
    std::cout << "----------" << std::endl;
}
