#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    _name = "Default";
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;

    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    _name = name;
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;

    std::cout << "ClapTrap " << _name
        << " constructed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    _name = other._name;
    _hitPoints = other._hitPoints;
    _energyPoints = other._energyPoints;
    _attackDamage = other._attackDamage;

    std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
    this->_name = other._name;
    this->_hitPoints = other._hitPoints;
    this->_energyPoints = other._energyPoints;
    this->_attackDamage = other._attackDamage;

    std::cout << "ClapTrap copy assignment operator called" << std::endl;

    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << _name
        << " destroyed" << std::endl;
}

void ClapTrap::attack(std::string const & target)
{
    if (_hitPoints == 0)
    {
        std::cout << "ClapTrap " << _name
            << " cannot attack because it has no hit points!"
            << std::endl;
        return;
    }

    if (_energyPoints == 0)
    {
        std::cout << "ClapTrap " << _name
            << " cannot attack because it has no energy points!"
            << std::endl;
        return;
    }

    _energyPoints--;

    std::cout << "ClapTrap " << _name
        << " attacks " << target
        << ", causing " << _attackDamage
        << " points of damage!" << std::endl;

}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints == 0)
    {
        std::cout << "ClapTrap " << _name
            << " already has no hit points!" << std::endl;
        return;
    }

    if (amount >= _hitPoints)
        _hitPoints = 0;
    else
        _hitPoints -= amount;

    std::cout << "ClapTrap " << _name
        << " takes " << amount
        << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_hitPoints == 0)
    {
        std::cout << "ClapTrap " << _name
            << " cannot repair because it has no hit points!"
            << std::endl;
        return;
    }

    if (_energyPoints == 0)
    {
        std::cout << "ClapTrap " << _name
            << " cannot repair because it has no energy points!"
            << std::endl;
        return;
    }

    _hitPoints += amount;
    _energyPoints--;

    std::cout << "ClapTrap " << _name
        << " repairs itself for " << amount
        << " hit points!" << std::endl;
}