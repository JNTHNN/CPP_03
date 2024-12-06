/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 09:56:42 by jgasparo          #+#    #+#             */
/*   Updated: 2024/12/06 12:36:23 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap(void): _name("JohnDoe"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Default constructor called from ClapTrap" << std::endl;
	return;
}

ClapTrap::ClapTrap(const std::string &name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Default constructor called from ClapTrap" << std::endl;
	return;
}

ClapTrap::ClapTrap(const ClapTrap &copied)
{
	std::cout << "Copy constructor called from ClapTrap" << std::endl;
	*this = copied;
	return;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called from ClapTrap" << std::endl;
	return;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &base)
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

void	ClapTrap::attack(const std::string &target)
{
	if (this->_hitPoints > 0 || this->_energyPoints > 0)
	{
		std::cout << "ClapTrap " + _name + " attacks " + target + " causing " << _attackDamage << " points of damage !" << std::endl;
		this->_energyPoints--;
	}
	else
		std::cout << "Oh no, no energy or hitpoint" << std::endl;
}


void	ClapTrap::takeDamage(unsigned int amount)
{
	/* faire que si les amounts > hitpoints*/
	if (amount >= this->_hitPoints)
	{
		std::cout << this->_name + " dying arggg ..." << std::endl;
		this->_hitPoints = 0;
	}
	else
	{
		std::cout << "Ouch, I take " << amount << " damage, its hurts" << std::endl;
		this->_hitPoints -= amount;
	}
}


void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints > 0 && this->_energyPoints > 0)
	{
		std::cout << "Beep Beep, I'm repairing myself" << std::endl;
		this->_hitPoints += amount;
		this->_energyPoints--;
	}
	else 
		std::cout << "Oh no, no energy or hitpoint" << std::endl;
}


const std::string	ClapTrap::getName(void) const
{
	return _name;
}

unsigned int	ClapTrap::getLife(void) const 
{
	return this->_hitPoints;
}

unsigned int 	ClapTrap::getEnergy(void) const
{
	return this->_energyPoints;
}
