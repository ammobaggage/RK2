#pragma once
#include "munition_factory.h"
#include <memory>

class MunitionStore {
public:
    explicit MunitionStore(std::unique_ptr<MunitionFactory>&& factory);
    void ChangeFactory(std::unique_ptr<MunitionFactory>&& factory);
    void Print() const;
private:
    std::unique_ptr<MunitionFactory> factory_;
};
