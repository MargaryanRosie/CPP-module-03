#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap         //it is impossible to create a ScavTrap without first creating its ClapTrap part.
//ScavTrap inherits from the ClapTrap class
{
public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &other);
    ScavTrap& operator=(const ScavTrap &other);
    ~ScavTrap();

    void attack(std::string const &target);
    void guardGate();
};

#endif