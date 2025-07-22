/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 11:00:27 by msuokas           #+#    #+#             */
/*   Updated: 2025/07/22 10:32:23 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class	ClapTrap {
	protected:
		const std::string	_name;
		unsigned int		_hitPoints = 10;
		unsigned int		_energyPoints = 10;
		unsigned int		_attackDamage = 5;
	public:
		ClapTrap();
		virtual ~ClapTrap();
		ClapTrap(const std::string &setName);
		ClapTrap(const ClapTrap &other);
		ClapTrap& operator=(const ClapTrap &other);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
