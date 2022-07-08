/* Any copyright is dedicated to the Public Domain.
 * https://creativecommons.org/publicdomain/zero/1.0/ */

#include "DiamondTrap.hpp"
#include <string>

int main(int argc, char* argv[])
{
    (void)&argc, (void)&argv;
    DiamondTrap diamond("weird");
    diamond.attack("Victim");
    diamond.takeDamage(123);
    for (int i = 0; i < 50; i++)
    {
        diamond.beRepaired(9);
    }
    diamond.guardGate();
    diamond.highFivesGuys();
    diamond.whoAmI();
    return 0;
}
