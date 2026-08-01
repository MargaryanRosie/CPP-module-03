#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap("Bob");

    clap.attack("Enemy");

    clap.takeDamage(5);

    clap.beRepaired(3);

    return (0);
}