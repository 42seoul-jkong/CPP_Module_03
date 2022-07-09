/* Any copyright is dedicated to the Public Domain.
 * https://creativecommons.org/publicdomain/zero/1.0/ */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>

int main(int argc, char* argv[])
{
    (void)&argc, (void)&argv;

    ClapTrap clap;
    clap.attack("VictimC");

    ScavTrap scav;
    scav.attack("VictimS");

    FragTrap frag;
    frag.attack("VictimF");
    frag.highFivesGuys();

    return 0;
}
