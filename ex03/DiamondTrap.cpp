/* Any copyright is dedicated to the Public Domain.
 * https://creativecommons.org/publicdomain/zero/1.0/ */

#define VERBOSE

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(const std::string& name)
    : ClapTrap(name + "_clap_name", FragTrap::HIT_POINTS, ScavTrap::ENERGY_POINTS, FragTrap::ATTACK_DAMAGE),
      name(name)
{
#ifdef VERBOSE
    std::cout << "DiamondTrap Default constructor called" << std::endl;
#endif
    // No-OP
}

DiamondTrap::DiamondTrap(const DiamondTrap& that)
    : ClapTrap(that), name(that.name)
{
#ifdef VERBOSE
    std::cout << "DiamondTrap Copy constructor called" << std::endl;
#endif
    // No-OP
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& that)
{
#ifdef VERBOSE
    std::cout << "DiamondTrap Copy assignment operator called" << std::endl;
#endif
    if (this != &that)
    {
        this->ClapTrap::operator=(that);
        const_cast<std::string&>(this->name) = that.name;
    }
    return *this;
}

DiamondTrap::~DiamondTrap()
{
#ifdef VERBOSE
    std::cout << "DiamondTrap Destructor called" << std::endl;
#endif
    // No-OP
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap " << this->name << " aka ClapTrap " << this->ClapTrap::name << std::endl;
}
