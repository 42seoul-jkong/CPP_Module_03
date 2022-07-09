/* Any copyright is dedicated to the Public Domain.
 * https://creativecommons.org/publicdomain/zero/1.0/ */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <string>

int main(int argc, char* argv[])
{
    (void)&argc, (void)&argv;

    ClapTrap clap;
    clap.attack("VictimC");
    clap.takeDamage(3);
    clap.beRepaired(2);

    ScavTrap scav;
    scav.attack("VictimS");
    scav.takeDamage(7);
    scav.beRepaired(5);
    scav.guardGate();

    return 0;
}
