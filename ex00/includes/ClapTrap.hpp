/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 09:56:37 by jgasparo          #+#    #+#             */
/*   Updated: 2024/12/05 17:03:59 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	private:
		std::string				_name;
		unsigned int			_hitPoints;
		unsigned int			_energyPoints;
		unsigned int			_attackDamage;

	public:
		ClapTrap();
		ClapTrap(const std::string &name);
		ClapTrap(const ClapTrap &copied);
		ClapTrap &operator=(const ClapTrap &base);
		~ClapTrap();

		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		std::string	getName(void);
		unsigned int	getLife(void);
		unsigned int	getEnergy(void);
};

#endif
