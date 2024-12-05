/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 20:29:17 by jgasparo          #+#    #+#             */
/*   Updated: 2024/12/05 22:17:40 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"
#include "../includes/ClapTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap(void)
{
	std::cout << "Default constructor called from Scavtrap" << std::endl;
	
	
}

ScavTrap::ScavTrap(const std::string &name): ClapTrap(name)
{
	return;
}

ScavTrap::ScavTrap(const ScavTrap &copied): ClapTrap(copied)
{
	std::cout << "Copy constructor called from ScavTrap" << std::endl;
	*this = copied;
	return;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor called from ScavTrap" << std::endl;
	return;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &base)
{
	if (this != &base)
	{
		this->_name = base._name;
		this->_hitPoints = base._hitPoints;
		this->_energyPoints = base._energyPoints;
		this->_attackDamage = base._attackDamage;
	}
	return *this;
}

void	ScavTrap::guardGate(void) const
{
	std::cout << "I'm in Gate Keeper mode beepbop" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_hitPoints > 0 || this->_energyPoints > 0)
	{
		std::cout << "ScavTrap " + _name + " attacks " + target + " causing " << _attackDamage << " points of damage !" << std::endl;
		this->_energyPoints--;
	}
	else
		std::cout << "Oh no, no energy or hitpoint" << std::endl;
}