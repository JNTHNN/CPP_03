/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 09:56:39 by jgasparo          #+#    #+#             */
/*   Updated: 2024/12/06 12:37:29 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"

int	main(void)
{

	std::cout << "	- CLAPTRAP ATTRIBUTES -" << std::endl;
	{
		ClapTrap a;

		std::cout << "Name : " << a.getName() << std::endl;
		std::cout << "Life : " << a.getLife() << std::endl;
		std::cout << "Energy : " << a.getEnergy() << std::endl;
	}
	std::cout << "\n	- SCAVTRAP ATTRIBUTES -" << std::endl;
	{
		ScavTrap a;

		std::cout << "Name : " << a.getName() << std::endl;
		std::cout << "Life : " << a.getLife() << std::endl;
		std::cout << "Energy : " << a.getEnergy() << std::endl;
		a.attack("pikachu");
		std::cout << "Life and energy after attack : " << a.getLife() << " " << a.getEnergy() << std::endl;
		a.takeDamage(20);
		std::cout << "Life and energy after taking damage : " << a.getLife() << " " << a.getEnergy() << std::endl;
		a.guardGate();
		a.beRepaired(20);
		std::cout << "Life after repaired : " << a.getLife() << std::endl;
		std::cout << std::endl;
		std::cout << "	- OTHER STUFF - " << std::endl; 
		ScavTrap b("Will Smith");
		ScavTrap c(b);
		ScavTrap d = c;
		std::cout << "Name : " << d.getName() << std::endl;
		std::cout << "Life : " << d.getLife() << std::endl;
		std::cout << "Energy : " << d.getEnergy() << std::endl;

	}
	return 0;
}
