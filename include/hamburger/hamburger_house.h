#pragma once
#include "hamburger_factory.h"
#include "hamburger.h"
#include <memory>

class HamburgerHouse {
public:
    explicit HamburgerHouse(std::unique_ptr<HamburgerFactory>&& factory);
    void ChangeFactory(std::unique_ptr<HamburgerFactory>&& factory);
    Hamburger MakeCheeseBurger() const;
    Hamburger MakeJumboBurger() const;
private:
    std::unique_ptr<HamburgerFactory> factory_;
};
