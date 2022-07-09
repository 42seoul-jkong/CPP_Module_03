/* Any copyright is dedicated to the Public Domain.
 * https://creativecommons.org/publicdomain/zero/1.0/ */

#include "FragTrap.hpp"
#include <iostream>

#define VERBOSE

FragTrap::FragTrap(const std::string& name)
    : ClapTrap(name, 100, 100, 30)
{
#ifdef VERBOSE
    std::cout << "FragTrap Default constructor called" << std::endl;
#endif
    // No-OP
}

FragTrap::FragTrap(const FragTrap& that)
{
#ifdef VERBOSE
    std::cout << "FragTrap Copy constructor called" << std::endl;
#endif
    *this = that;
}

FragTrap& FragTrap::operator=(const FragTrap& that)
{
#ifdef VERBOSE
    std::cout << "FragTrap Copy assignment operator called" << std::endl;
#endif
    if (this != &that)
    {
        this->ClapTrap::operator=(that);
    }
    return *this;
}

FragTrap::~FragTrap()
{
#ifdef VERBOSE
    std::cout << "FragTrap Destructor called" << std::endl;
#endif
    // No-OP
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << this->name << " has a positive high fives request." << std::endl;
}
