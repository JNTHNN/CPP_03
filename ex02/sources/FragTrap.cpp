/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 22:08:44 by jgasparo          #+#    #+#             */
/*   Updated: 2024/12/06 14:08:17 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap()
{
	std::cout << "Default constructor called from Fragtrap" << std::endl;
	this->_name = "Killer";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	return;
}

FragTrap::FragTrap(const std::string &name): ClapTrap(name)
{
	std::cout << "Constructor with name assigned called from Fragtrap" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	return;
}

FragTrap::FragTrap(const FragTrap &copied): ClapTrap(copied)
{
	std::cout << "Copy constructor called from FragTrap" << std::endl;
	*this = copied;
	return;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor called from FragTrap" << std::endl;
	return;
}

FragTrap	&FragTrap::operator=(const FragTrap &base)
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

void	FragTrap::highFivesGuys(void) const
{
	std::cout << "Hey Guys ! High Fives my dude" << std::endl;
}