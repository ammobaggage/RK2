#include "munition/munition_store.h"
#include <iostream>

MunitionStore::MunitionStore(std::unique_ptr<MunitionFactory>&& factory)
    : factory_(std::move(factory)) {}

void MunitionStore::ChangeFactory(std::unique_ptr<MunitionFactory>&& factory) {
    factory_ = std::move(factory);
}

void MunitionStore::Print() const {
    std::cout << "Weapon  : " << factory_->MakeWeapon()->Name() << std::endl;
    std::cout << "Vehicle : " << factory_->MakeVehicle()->Name() << std::endl;
    std::cout << std::endl;
}
