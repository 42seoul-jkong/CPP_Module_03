/* Any copyright is dedicated to the Public Domain.
 * https://creativecommons.org/publicdomain/zero/1.0/ */

#pragma once

#include "ClapTrap.hpp"
#include <string>

class FragTrap : public virtual ClapTrap
{
protected:
    static const int HIT_POINTS = 100;
    static const int ENERGY_POINTS = 100;
    static const int ATTACK_DAMAGE = 30;

public:
    FragTrap(const std::string& name = "frag");
    FragTrap(const FragTrap& that);
    FragTrap& operator=(const FragTrap& that);
    ~FragTrap();
    void highFivesGuys();
};
