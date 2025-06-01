#pragma once
#include <string>
#include <memory>

struct HamburgerIngredient {
    virtual ~HamburgerIngredient() = default;
    virtual std::string Name() const = 0;
};


struct Bread : public HamburgerIngredient { std::string Name() const override; };
struct Patty : public HamburgerIngredient { std::string Name() const override; };
struct Cheese : public HamburgerIngredient { std::string Name() const override; };
struct Tomato : public HamburgerIngredient { std::string Name() const override; };
struct Lettuce : public HamburgerIngredient { std::string Name() const override; };
struct Sauce : public HamburgerIngredient { std::string Name() const override; };


struct LightBread : public Bread { std::string Name() const override; };
struct SaltyBread : public Bread { std::string Name() const override; };

struct BeefPatty : public Patty { std::string Name() const override; };
struct PorkPatty : public Patty { std::string Name() const override; };

struct MozzarellaCheese : public Cheese { std::string Name() const override; };
struct CheddarCheese : public Cheese { std::string Name() const override; };

struct GarlicSauce : public Sauce { std::string Name() const override; };
struct MustardSauce : public Sauce { std::string Name() const override; };
