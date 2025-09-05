/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 13:36:41 by msuokas           #+#    #+#             */
/*   Updated: 2025/09/05 15:23:27 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "ScavTrap: Constructor called without a name\n";
}

ScavTrap::ScavTrap(const std::string& name){
	std::cout << "ScavTrap: Constructor called with name " << name << std::endl;
	_Name = name;
	_HitPoints = 100;
	_EnergyPoints = 50;
	_AttackDamage = 20;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap: Destructor called on " << _Name << "\n";
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << _Name << " is now in Gate keeper mode.\n";
}

ScavTrap::ScavTrap(const ScavTrap& other): ClapTrap(other) {
	std::cout << "ScavTrap: " << _Name << ": copy constructor called." << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
	if (this != &other) {
		ClapTrap::operator=(other);
		std::cout << "ScavTrap: " << _Name << ": copy assignment operator called." << std::endl;
	}
	return *this;
}
