#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main()
{
    ScavTrap scav("Guardian");
    FragTrap frag("Destroyer");

    scav.attack("Enemy A");
    scav.takeDamage(30);
    scav.beRepaired(15);
    scav.guardGate();

    frag.attack("Enemy B");
    frag.takeDamage(40);
    frag.beRepaired(20);
    frag.highFivesGuys();

    ScavTrap defaultScav;
    FragTrap defaultFrag;

    defaultScav.attack("Default target");
    defaultScav.guardGate();

    defaultFrag.attack("Default target");
    defaultFrag.highFivesGuys();

    std::cout << "\n------ ZERO HIT POINTS -------\n"
        << std::endl;

    ScavTrap deadScav("DeadScav");
    FragTrap deadFrag("DeadFrag");

    deadScav.takeDamage(150);
    deadFrag.takeDamage(150);

    deadScav.attack("Nobody");
    deadScav.beRepaired(10);

    deadFrag.attack("Nobody");
    deadFrag.beRepaired(10);

    deadScav.guardGate();
    deadFrag.highFivesGuys();

    std::cout << "\n------- DAMAGE GREATER THAN HEALTH -------\n"
        << std::endl;

    FragTrap overDamaged("OverDamaged");

    overDamaged.takeDamage(1000);
    overDamaged.attack("Enemy");
    overDamaged.beRepaired(50);

    std::cout << "\n------- SCAVTRAP ENERGY EXHAUSTION --------\n"
        << std::endl;

    ScavTrap tiredScav("TiredScav");

    for (int i = 0; i < 50; i++)
        tiredScav.attack("Training Dummy");

    tiredScav.attack("Extra target");
    tiredScav.beRepaired(10);

    std::cout << "\n------ FRAGTRAP ENERGY EXHAUSTION -------\n"
        << std::endl;

    FragTrap tiredFrag("TiredFrag");

    for (int i = 0; i < 100; i++)
        tiredFrag.attack("Training Dummy");

    tiredFrag.attack("Extra target");
    tiredFrag.beRepaired(10);

    return 0;
}