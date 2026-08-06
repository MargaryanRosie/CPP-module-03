#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap defaultDiamond;

    defaultDiamond.whoAmI();
    defaultDiamond.attack("Default target");
    defaultDiamond.guardGate();
    defaultDiamond.highFivesGuys();

    DiamondTrap diamond("Diamond");

    diamond.whoAmI();
    diamond.attack("Enemy");
    diamond.takeDamage(40);
    diamond.beRepaired(20);
    diamond.guardGate();
    diamond.highFivesGuys();

    std::cout << "\n----- ZERO HIT POINTS ------\n"
        << std::endl;

    DiamondTrap defeated("Defeated");

    defeated.takeDamage(150);

    defeated.attack("Nobody");
    defeated.beRepaired(10);

    defeated.whoAmI();
    defeated.guardGate();
    defeated.highFivesGuys();


    std::cout << "\n----- DAMAGE GREATER THAN HEALTH -----\n"
        << std::endl;

    DiamondTrap overDamaged("OverDamaged");

    overDamaged.takeDamage(1000);

    overDamaged.attack("Enemy");
    overDamaged.beRepaired(50);

    return 0;
}