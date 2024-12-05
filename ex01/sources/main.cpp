/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 09:56:39 by jgasparo          #+#    #+#             */
/*   Updated: 2024/12/05 22:04:59 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"

int	main(void)
{
	ClapTrap a("jojo");
	ScavTrap b("Soso");

	ScavTrap c = b;

	c.attack("chacal");
	a.attack("roucoups");
	std::cout << "Life for " + a.getName() + " " << a.getLife() << std::endl;
	std::cout << "Life for " + c.getName() + " " << c.getLife() << std::endl;
	c.guardGate();
	c.takeDamage(50);
	std::cout << c.getLife() << std::endl;
	


	std::cout << c.getEnergy() << std::endl;
	std::cout << c.getName() << std::endl;

}