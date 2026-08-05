#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap first("Bob");

    first.whoAmI();
    first.attack("enemy");
    first.guardGate();
    first.highFivesGuys();

    DiamondTrap second(first);
    second.whoAmI();

    DiamondTrap third;
    third = first;
    third.whoAmI();

    return (0);
}