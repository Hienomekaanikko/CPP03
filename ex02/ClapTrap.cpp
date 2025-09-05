/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 16:34:57 by msuokas           #+#    #+#             */
/*   Updated: 2025/09/05 14:21:24 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "ClapTrap: Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name): _Name(name),
	_HitPoints(10),
	_EnergyPoints(10),
	_AttackDamage(0)
{
	std::cout << "ClapTrap: Constructor with name " << name << " called" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap: Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other): _Name(other._Name),
	 _AttackDamage(other._AttackDamage),
	 _EnergyPoints(other._EnergyPoints),
	 _HitPoints(other._HitPoints)
{
	std::cout << "ClapTrap: Copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	std::cout << "ClapTrap: Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		_Name = other._Name;
		_AttackDamage = other._AttackDamage;
		_EnergyPoints = other._EnergyPoints;
		_HitPoints = other._HitPoints;
	}
	return *this;
}

void ClapTrap::attack(const std::string& target) {
	if (_HitPoints <= 0)
		std::cout << "ClapTrap " << _Name << " does not have enough hit points to attack\n";
	else if (_EnergyPoints > 0) {
		std::cout << "ClapTrap " << _Name << " attacks " << target << " causing " << _AttackDamage << " points of damage!" << std::endl;
		_EnergyPoints -= 1;
		std::cout << "ClapTrap " << _Name << ": -1 Energy points\n";
	}
	else
		std::cout << "ClapTrap " << _Name << " does not have enough energy points to attack" << std::endl;

}

void ClapTrap::takeDamage(unsigned int amount) {
	if (_HitPoints <= 0)
		std::cout << "ClapTrap " << _Name << " is broken! :(\n";
	else {
		std::cout << "ClapTrap " << this->_Name << " has taken " << amount << " points of damage!" << std::endl;
		_HitPoints -= amount;
		if (_HitPoints <= 0)
			std::cout << "ClapTrap " << _Name << " is broken! :(\n";
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_EnergyPoints <= 0)
		std::cout <<  _Name << " has no energy points left for repairing!" << std::endl;
	else {
		std::cout << _Name << " repairs itself and gains " << amount << " points of health costing 1 energy point" << std::endl;
		_HitPoints += amount;
		_EnergyPoints -= 1;
	}
}
