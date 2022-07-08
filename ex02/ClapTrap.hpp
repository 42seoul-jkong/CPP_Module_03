/* Any copyright is dedicated to the Public Domain.
 * https://creativecommons.org/publicdomain/zero/1.0/ */

#pragma once

#include <string>

class ClapTrap
{
protected:
    const std::string name;
    int health;
    int energy;
    int damage;

public:
    ClapTrap(const std::string& name = "clap", int health = 10, int energy = 0, int damage = 0);
    ClapTrap(const ClapTrap& that);
    ClapTrap& operator=(const ClapTrap& that);
    ~ClapTrap();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};
