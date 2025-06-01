#pragma once
#include "hamburger_ingredient.h"
#include <memory>


class HamburgerFactory {
public:
    virtual ~HamburgerFactory() = default;
    virtual std::unique_ptr<Bread> MakeBread() const = 0;
    virtual std::unique_ptr<Patty> MakePatty() const = 0;
    virtual std::unique_ptr<Cheese> MakeCheese() const = 0;
    virtual std::unique_ptr<Tomato> MakeTomato() const = 0;
    virtual std::unique_ptr<Lettuce> MakeLettuce() const = 0;
    virtual std::unique_ptr<Sauce> MakeSauce() const = 0;
};

class BeefHamburgerFactory : public HamburgerFactory {
public:
    std::unique_ptr<Bread> MakeBread() const override;
    std::unique_ptr<Patty> MakePatty() const override;
    std::unique_ptr<Cheese> MakeCheese() const override;
    std::unique_ptr<Tomato> MakeTomato() const override;
    std::unique_ptr<Lettuce> MakeLettuce() const override;
    std::unique_ptr<Sauce> MakeSauce() const override;
};

class PorkHamburgerFactory : public HamburgerFactory {
public:
    std::unique_ptr<Bread> MakeBread() const override;
    std::unique_ptr<Patty> MakePatty() const override;
    std::unique_ptr<Cheese> MakeCheese() const override;
    std::unique_ptr<Tomato> MakeTomato() const override;
    std::unique_ptr<Lettuce> MakeLettuce() const override;
    std::unique_ptr<Sauce> MakeSauce() const override;
};
