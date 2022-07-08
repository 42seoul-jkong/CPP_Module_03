/* Any copyright is dedicated to the Public Domain.
 * https://creativecommons.org/publicdomain/zero/1.0/ */

#pragma once

#include "ClapTrap.hpp"
#include <string>

class FragTrap : public ClapTrap
{
public:
    FragTrap(const std::string& name = "frag");
    FragTrap(const FragTrap& that);
    FragTrap& operator=(const FragTrap& that);
    ~FragTrap();
    void highFivesGuys();
};
