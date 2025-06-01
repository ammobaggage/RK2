#include "hamburger/hamburger_ingredient.h"


std::string Bread::Name() const { return "Bread"; }
std::string Patty::Name() const { return "Patty"; }
std::string Cheese::Name() const { return "Cheese"; }
std::string Tomato::Name() const { return "Tomato"; }
std::string Lettuce::Name() const { return "Lettuce"; }
std::string Sauce::Name() const { return "Sauce"; }

std::string LightBread::Name() const { return "LightBread"; }
std::string SaltyBread::Name() const { return "SaltyBread"; }

std::string BeefPatty::Name() const { return "BeefPatty"; }
std::string PorkPatty::Name() const { return "PorkPatty"; }

std::string MozzarellaCheese::Name() const { return "MozzarellaCheese"; }
std::string CheddarCheese::Name() const { return "CheddarCheese"; }

std::string GarlicSauce::Name() const { return "GarlicSauce"; }
std::string MustardSauce::Name() const { return "MustardSauce"; }
