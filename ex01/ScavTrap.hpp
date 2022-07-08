/* Any copyright is dedicated to the Public Domain.
 * https://creativecommons.org/publicdomain/zero/1.0/ */

#pragma once

#include "ClapTrap.hpp"
#include <string>

class ScavTrap : public ClapTrap
{
public:
    ScavTrap(const std::string& name = "scav");
    ScavTrap(const ScavTrap& that);
    ScavTrap& operator=(const ScavTrap& that);
    ~ScavTrap();
    void attack(const std::string& target);
    void guardGate();
};
