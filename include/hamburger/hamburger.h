#pragma once
#include "hamburger_ingredient.h"
#include <vector>
#include <memory>

class Hamburger {
public:
    explicit Hamburger(std::vector<std::unique_ptr<HamburgerIngredient>>&& ingredientList);
    void Print() const;
private:
    std::vector<std::unique_ptr<HamburgerIngredient>> ingredientList_;
};
