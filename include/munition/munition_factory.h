#pragma once
#include <string>
#include <memory>

struct Weapon {
    virtual ~Weapon() = default;
    virtual std::string Name() const = 0;
};

struct Vehicle {
    virtual ~Vehicle() = default;
    virtual std::string Name() const = 0;
};

struct Knife : public Weapon { std::string Name() const override; };
struct Gun : public Weapon { std::string Name() const override; };
struct Missile : public Weapon { std::string Name() const override; };


struct Horse : public Vehicle { std::string Name() const override; };
struct Tank : public Vehicle { std::string Name() const override; };
struct Spaceship : public Vehicle { std::string Name() const override; };


class MunitionFactory {
public:
    virtual ~MunitionFactory() = default;
    virtual std::unique_ptr<Weapon> MakeWeapon() const = 0;
    virtual std::unique_ptr<Vehicle> MakeVehicle() const = 0;
};


class AncientMunitionFactory : public MunitionFactory {
public:
    std::unique_ptr<Weapon> MakeWeapon() const override;
    std::unique_ptr<Vehicle> MakeVehicle() const override;
};

class ModernMunitionFactory : public MunitionFactory {
public:
    std::unique_ptr<Weapon> MakeWeapon() const override;
    std::unique_ptr<Vehicle> MakeVehicle() const override;
};

class FutureMunitionFactory : public MunitionFactory {
public:
    std::unique_ptr<Weapon> MakeWeapon() const override;
    std::unique_ptr<Vehicle> MakeVehicle() const override;
};
