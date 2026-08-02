#include "ScavTrap.hpp"

ScavTrap::ScavTrap():ClapTrap()     //the second part is initializer list
{
    _name = "Default ScavTrap";
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;

    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name)   //before running my constructor, first run the constructor of my base class
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;

    std::cout << "ScavTrap " << _name << " constructed" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other):ClapTrap(other)
//minch ScavTrap-y copy anely copy enq anum skzbum other-i ClapTrap hatvacy
{
    //sa arden texi e unenum ScavTrap hatvacum
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other)
{
    ClapTrap::operator=(other);

    std::cout << "ScavTrap copy assignment operator called" << std::endl;

    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << _name << " destroyed" << std::endl;
}

void ScavTrap::attack(std::string const &target)
{
    if (_hitPoints == 0)
    {
        std::cout << "ScavTrap " << _name
            << " cannot attack because it has no hit points!"
            << std::endl;
        return;
    }

    if (_energyPoints == 0)
    {
        std::cout << "ScavTrap " << _name
            << " cannot attack because it has no energy points!"
            << std::endl;
        return;
    }

    _energyPoints--;

    std::cout << "ScavTrap " << _name
        << " attacks " << target
        << ", causing " << _attackDamage
        << " points of damage!"
        << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _name 
        << " has entered Gate keeper mode!" << std::endl;
}