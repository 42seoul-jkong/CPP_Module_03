/* Any copyright is dedicated to the Public Domain.
 * https://creativecommons.org/publicdomain/zero/1.0/ */

#pragma once

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
    std::string name;

public:
    DiamondTrap(const std::string& name = "diamond");
    DiamondTrap(const DiamondTrap& that);
    DiamondTrap& operator=(const DiamondTrap& that);
    ~DiamondTrap();
    void whoAmI();
};
