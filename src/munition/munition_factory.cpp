#include "munition/munition_factory.h"

std::string Knife::Name() const { return "Knife"; }
std::string Gun::Name() const { return "Gun"; }
std::string Missile::Name() const { return "Missile"; }

std::string Horse::Name() const { return "Horse"; }
std::string Tank::Name() const { return "Tank"; }
std::string Spaceship::Name() const { return "Spaceship"; }

std::unique_ptr<Weapon> AncientMunitionFactory::MakeWeapon() const {
    return std::make_unique<Knife>();
}

std::unique_ptr<Vehicle> AncientMunitionFactory::MakeVehicle() const {
    return std::make_unique<Horse>();
}

std::unique_ptr<Weapon> ModernMunitionFactory::MakeWeapon() const {
    return std::make_unique<Gun>();
}

std::unique_ptr<Vehicle> ModernMunitionFactory::MakeVehicle() const {
    return std::make_unique<Tank>();
}

std::unique_ptr<Weapon> FutureMunitionFactory::MakeWeapon() const {
    return std::make_unique<Missile>();
}

std::unique_ptr<Vehicle> FutureMunitionFactory::MakeVehicle() const {
    return std::make_unique<Spaceship>();
}
