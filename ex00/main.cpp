#include "ClapTrap.hpp"
#include <iostream>

int main()
{
    ClapTrap first("First");

    first.attack("Enemy");
    first.takeDamage(3);
    first.beRepaired(2);

    std::cout << "\n--- Damage greater than remaining hit points ---"
        << std::endl;

    ClapTrap damaged("Damaged");

    damaged.takeDamage(50);

    // Must fail because damaged has 0 hit points.
    damaged.attack("Enemy");
    damaged.beRepaired(5);


    std::cout << "\n--- Energy exhaustion ---" << std::endl;

    ClapTrap tired("Tired");

    for (int i = 0; i < 10; i++)
        tired.attack("Training dummy");

    // These must fail because energy is now 0.
    tired.attack("Enemy");
    tired.beRepaired(5);

    std::cout << "\n--- Repair consumes energy ---" << std::endl;

    ClapTrap repairTest("RepairTest");

    repairTest.takeDamage(5);

    for (int i = 0; i < 10; i++)
        repairTest.beRepaired(1);

    // Must fail because all energy was consumed by repairing.
    repairTest.beRepaired(1);
    repairTest.attack("Enemy");

    return 0;
}