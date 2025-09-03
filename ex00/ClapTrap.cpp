/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 16:34:57 by msuokas           #+#    #+#             */
/*   Updated: 2025/09/03 16:55:39 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string& name): _Name(name), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0) {
	std::cout << "Constructor with name called" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	std::cout << "Copy assignment operator called" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
	std::cout << "ClapTrap" << _Name << " attacks " << target << " causing " << _AttackDamage << " points of damage!" << std::endl;
	_EnergyPoints -= 1;
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap has taken " << amount << " points of damage!" << std::endl;
	_HitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_EnergyPoints <= 0)
		std::cout << "ClapTrap has no energy points left for repairing!" << std::endl;
	else {
		_EnergyPoints -= 1;
		std::cout << "ClapTrap repairs itself and gains " << _HitPoints << " points of health." << std::endl;
		_HitPoints += amount;
	}
}
