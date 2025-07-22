/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 14:56:28 by msuokas           #+#    #+#             */
/*   Updated: 2025/07/22 11:12:33 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap() {
	std::cout << "Default constructor called on ScavTrap" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const std::string &setName): ClapTrap(setName) {
	std::cout << "Constuctor with name called on ScavTrap" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap:: ~ScavTrap() {
	std::cout << "Destructor called on ScavTrap" << std::endl;
};

ScavTrap::ScavTrap(const ScavTrap &other): ClapTrap(other) {
	std::cout << "Copy constructor called on ScavTrap" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other) {
	std::cout << "Copy assignment constructor called on ScavTrap" << std::endl;
	if (this != &other)
		ClapTrap::operator=(other);
	return *this;
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}
