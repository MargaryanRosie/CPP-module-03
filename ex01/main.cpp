#include "ScavTrap.hpp"

int main()
{
    ScavTrap scav("Guardian");

    scav.attack("Bandit");
    scav.takeDamage(30);
    scav.beRepaired(20);
    scav.guardGate();

    ScavTrap copy(scav);

    copy.attack("Copy Target");
    copy.guardGate();

    std::cout << "\n----- Zero Hit Points -----\n" << std::endl;

    ScavTrap dead("Dead");

    dead.takeDamage(150);

    dead.attack("Nobody");
    dead.beRepaired(10);
    dead.guardGate();

    std::cout << "\n----- Energy Exhaustion ------\n" << std::endl;

    ScavTrap tired("Tired");

    for (int i = 0; i < 50; i++)
        tired.attack("Training Dummy");

    tired.attack("Enemy");
    tired.beRepaired(10);

    return 0;
}