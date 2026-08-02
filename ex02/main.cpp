#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap frag("Frank");

    frag.attack("Enemy");
    frag.takeDamage(40);
    frag.beRepaired(20);
    frag.highFivesGuys();

    std::cout << std::endl;
    std::cout << "Copy constructor test" << std::endl;

    FragTrap copy(frag);

    copy.attack("Copy target");
    copy.highFivesGuys();

    return (0);
}