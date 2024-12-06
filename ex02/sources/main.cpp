/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 09:56:39 by jgasparo          #+#    #+#             */
/*   Updated: 2024/12/06 14:07:25 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"
#include "../includes/ClapTrap.hpp"

int	main(void)
{
	std::cout << "\n	- FRAGTRAP ATTRIBUTES -" << std::endl;
	{
		FragTrap a;

		std::cout << "Name : " << a.getName() << std::endl;
		std::cout << "Life : " << a.getLife() << std::endl;
		std::cout << "Energy : " << a.getEnergy() << std::endl;
		a.attack("PNJ");
		std::cout << "Life and energy after attack : " << a.getLife() << " " << a.getEnergy() << std::endl;
		a.takeDamage(20);
		std::cout << "Life and energy after taking damage : " << a.getLife() << " " << a.getEnergy() << std::endl;
		a.highFivesGuys();
		a.beRepaired(20);
		std::cout << "Life after repaired : " << a.getLife() << std::endl;
		std::cout << std::endl;
		std::cout << "	- OTHER STUFF - " << std::endl; 
		FragTrap b("James Bond");
		FragTrap c(b);
		FragTrap d = c;
		std::cout << "Name : " << d.getName() << std::endl;
		std::cout << "Life : " << d.getLife() << std::endl;
		std::cout << "Energy : " << d.getEnergy() << std::endl;

	}
}
