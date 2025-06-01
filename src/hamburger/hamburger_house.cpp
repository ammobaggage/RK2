#include "hamburger/hamburger_house.h"

HamburgerHouse::HamburgerHouse(std::unique_ptr<HamburgerFactory>&& factory)
    : factory_(std::move(factory)) {}

void HamburgerHouse::ChangeFactory(std::unique_ptr<HamburgerFactory>&& factory) {
    factory_ = std::move(factory);
}

Hamburger HamburgerHouse::MakeCheeseBurger() const {
    std::vector<std::unique_ptr<HamburgerIngredient>> ingredientList;
    
    ingredientList.push_back(factory_->MakeBread());
    ingredientList.push_back(factory_->MakeLettuce());
    ingredientList.push_back(factory_->MakeSauce());
    ingredientList.push_back(factory_->MakePatty());
    ingredientList.push_back(factory_->MakeCheese());
    ingredientList.push_back(factory_->MakeBread());

    return Hamburger(std::move(ingredientList));
}

Hamburger HamburgerHouse::MakeJumboBurger() const {
    std::vector<std::unique_ptr<HamburgerIngredient>> ingredientList;
    
    ingredientList.push_back(factory_->MakeBread());
    ingredientList.push_back(factory_->MakeLettuce());
    ingredientList.push_back(factory_->MakeSauce());
    ingredientList.push_back(factory_->MakePatty());
    ingredientList.push_back(factory_->MakeCheese());
    ingredientList.push_back(factory_->MakeBread());
    ingredientList.push_back(factory_->MakeLettuce());
    ingredientList.push_back(factory_->MakeSauce());
    ingredientList.push_back(factory_->MakePatty());
    ingredientList.push_back(factory_->MakeCheese());
    ingredientList.push_back(factory_->MakeBread());

    return Hamburger(std::move(ingredientList));
}
