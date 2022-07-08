/* Any copyright is dedicated to the Public Domain.
 * https://creativecommons.org/publicdomain/zero/1.0/ */

#define VERBOSE

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(const std::string& name)
    : ClapTrap(name, 100, 50, 20)
{
#ifdef VERBOSE
    std::cout << "ScavTrap Default constructor called" << std::endl;
#endif
    // No-OP
}

ScavTrap::ScavTrap(const ScavTrap& that)
{
#ifdef VERBOSE
    std::cout << "ScavTrap Copy constructor called" << std::endl;
#endif
    *this = that;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& that)
{
#ifdef VERBOSE
    std::cout << "ScavTrap Copy assignment operator called" << std::endl;
#endif
    if (this != &that)
    {
        ClapTrap::operator=(that);
    }
    return *this;
}

ScavTrap::~ScavTrap()
{
#ifdef VERBOSE
    std::cout << "ScavTrap Destructor called" << std::endl;
#endif
    // No-OP
}

void ScavTrap::attack(const std::string& target)
{
    int new_energy = this->energy - 1;
    if (new_energy < 0)
    {
        std::cout << "ScavTrap " << this->name << " tried to attack " << target << ", but failed due to lack of energy." << std::endl;
        return;
    }
    std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->damage << " points of damage!" << std::endl;
    this->energy = new_energy;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode." << std::endl;
}
