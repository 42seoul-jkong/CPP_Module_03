/* Any copyright is dedicated to the Public Domain.
 * https://creativecommons.org/publicdomain/zero/1.0/ */

#define VERBOSE

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(const std::string& name, int health, int energy, int damage)
    : name(name), health(health), energy(energy), damage(damage)
{
#ifdef VERBOSE
    std::cout << "ClapTrap Default constructor called" << std::endl;
#endif
    // No-OP
}

ClapTrap::ClapTrap(const ClapTrap& that)
{
#ifdef VERBOSE
    std::cout << "ClapTrap Copy constructor called" << std::endl;
#endif
    *this = that;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& that)
{
#ifdef VERBOSE
    std::cout << "ClapTrap Copy assignment operator called" << std::endl;
#endif
    if (this != &that)
    {
        const_cast<std::string&>(this->name) = that.name;
        this->health = that.health;
        this->energy = that.energy;
        this->damage = that.damage;
    }
    return *this;
}

ClapTrap::~ClapTrap()
{
#ifdef VERBOSE
    std::cout << "ClapTrap Destructor called" << std::endl;
#endif
    // No-OP
}

void ClapTrap::attack(const std::string& target)
{
    int new_energy = this->energy - 1;
    if (new_energy < 0)
    {
        std::cout << "ClapTrap " << this->name << " tried to attack " << target << ", but failed due to lack of energy." << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->damage << " points of damage!" << std::endl;
    this->energy = new_energy;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    int new_health = this->health - amount;
    std::cout << "ClapTrap " << this->name << " was taken " << amount << " points of damage. (Prev: " << this->health << ", Now: " << new_health << ")" << std::endl;
    this->health = new_health;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    int new_health = this->health + amount;
    int new_energy = this->energy - 1;
    if (new_energy < 0)
    {
        std::cout << "ClapTrap " << this->name << " tried to repair itself, but failed due to lack of energy." << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->name << " repairs itself, recovering " << amount << " points of damage! (Prev: " << this->health << ", Now: " << new_health << ")" << std::endl;
    this->health = new_health;
    this->energy = new_energy;
}
