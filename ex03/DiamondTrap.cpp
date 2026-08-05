#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
    :ClapTrap("Default_clap_name"),
    ScavTrap(),
    FragTrap()
{
    _name = "Default";

    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 30;

    std::cout << "DiamondTrap " << _name
        << " default constructor called" << std::endl;

}

DiamondTrap::DiamondTrap(std::string name)
    :ClapTrap(name + "_clap_name"),
    ScavTrap(name),
    FragTrap(name),
    _name(name)
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 30;

    std::cout << "DiamondTrap " << _name
        << " constructed" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
    : ClapTrap(other),
    ScavTrap(other),
    FragTrap(other),
    _name(other._name)
{
    std::cout << "DiamondTrap copy constructor called"
        << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &other)
{

    ClapTrap::operator=(other);
    _name = other._name;


    std::cout << "DiamondTrap copy assignment operator called" << std::endl;

    return (*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << _name << " destroyed" << std::endl;
}

void DiamondTrap::attack(std::string const &target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
    std::cout << "DiamondTrap name: " << _name
        << ", ClapTrap name: " << ClapTrap::_name
        << std::endl;
}