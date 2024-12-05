/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 09:56:39 by jgasparo          #+#    #+#             */
/*   Updated: 2024/12/05 13:27:54 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

int	main(void)
{
	ClapTrap a("jojo");
	ClapTrap b(a);

	ClapTrap c = b;

	std::cout << c.getLife() << std::endl;
	c.beRepaired(1);
	c.beRepaired(1);
	c.takeDamage(13);
	c.attack("Momo");

	std::cout << c.getLife() << std::endl;
	std::cout << c.getEnergy() << std::endl;
	std::cout << c.getName() << std::endl;

}