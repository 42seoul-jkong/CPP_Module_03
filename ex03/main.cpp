/* Any copyright is dedicated to the Public Domain.
 * https://creativecommons.org/publicdomain/zero/1.0/ */

#include "DiamondTrap.hpp"
#include <cstdlib>
#include <string>

int main(int argc, char* argv[])
{
    int repairCount;
    if (argc > 1)
    {
        repairCount = std::atoi(argv[1]);
    }
    else
    {
        repairCount = 0;
    }

    DiamondTrap diamond("weird");
    diamond.attack("Victim");
    diamond.takeDamage(123);
    for (int i = 0; i < repairCount; i++)
    {
        diamond.beRepaired(9);
    }
    diamond.guardGate();
    diamond.highFivesGuys();
    diamond.whoAmI();

    return 0;
}
