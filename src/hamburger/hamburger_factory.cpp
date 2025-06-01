#include "hamburger/hamburger_factory.h"
#include "hamburger/hamburger_ingredient.h"


std::unique_ptr<Bread> BeefHamburgerFactory::MakeBread() const {
    return std::make_unique<LightBread>();
}

std::unique_ptr<Patty> BeefHamburgerFactory::MakePatty() const {
    return std::make_unique<BeefPatty>();
}

std::unique_ptr<Cheese> BeefHamburgerFactory::MakeCheese() const {
    return std::make_unique<MozzarellaCheese>();
}

std::unique_ptr<Tomato> BeefHamburgerFactory::MakeTomato() const {
    return std::make_unique<Tomato>();
}

std::unique_ptr<Lettuce> BeefHamburgerFactory::MakeLettuce() const {
    return std::make_unique<Lettuce>();
}

std::unique_ptr<Sauce> BeefHamburgerFactory::MakeSauce() const {
    return std::make_unique<GarlicSauce>();
}


std::unique_ptr<Bread> PorkHamburgerFactory::MakeBread() const {
    return std::make_unique<SaltyBread>();
}

std::unique_ptr<Patty> PorkHamburgerFactory::MakePatty() const {
    return std::make_unique<PorkPatty>();
}

std::unique_ptr<Cheese> PorkHamburgerFactory::MakeCheese() const {
    return std::make_unique<CheddarCheese>();
}

std::unique_ptr<Tomato> PorkHamburgerFactory::MakeTomato() const {
    return std::make_unique<Tomato>();
}

std::unique_ptr<Lettuce> PorkHamburgerFactory::MakeLettuce() const {
    return std::make_unique<Lettuce>();
}

std::unique_ptr<Sauce> PorkHamburgerFactory::MakeSauce() const {
    return std::make_unique<MustardSauce>();
}
