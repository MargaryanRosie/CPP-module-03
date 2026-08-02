#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    //ClapTrap

    ClapTrap clap("Bob");

    clap.attack("Enemy");
    clap.takeDamage(5);
    clap.beRepaired(3);

    //ScavTrap

    ScavTrap scav("Ann");

    scav.attack("Sc_Enemy");
    scav.takeDamage(30);
    scav.beRepaired(10);
    scav.guardGate();


    // //Scav Copy constructor test
    // std::cout << "ScavTrap copy constructor test" << std::endl;

    // ScavTrap scav_copy(scav);

    // scav_copy.attack("Copy target");
    // scav_copy.guardGate();

    //Energy Test

    ScavTrap tired("Tired");

    for(int i = 0; i < 47; i++)
        tired.attack("Training dummy");
    tired.beRepaired(10);

    //Zero Hit points

    ScavTrap defeated("Defeated");

    defeated.takeDamage(200);
    defeated.attack("Enemy");
    defeated.beRepaired(10);
    defeated.guardGate();

    return (0);
}