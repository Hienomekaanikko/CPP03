/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 16:34:57 by msuokas           #+#    #+#             */
/*   Updated: 2025/09/05 12:09:26 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _Name("ClapTrap"),
	_HitPoints(10),
	_EnergyPoints(10),
	_AttackDamage(0)
{
	std::cout << "Default constructor called on " << _Name << std::endl;
}

ClapTrap::ClapTrap(const std::string& name): _Name(name),
	_HitPoints(10),
	_EnergyPoints(10),
	_AttackDamage(0)
{
	std::cout << "Constructor called on ClapTrap " << _Name << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called on ClapTrap " << _Name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other): _Name(other._Name),
	 _AttackDamage(other._AttackDamage),
	 _EnergyPoints(other._EnergyPoints),
	 _HitPoints(other._HitPoints)
{
	std::cout << "Copy constructor called on ClapTrap: " << _Name << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	if (this != &other)
	{
		std::cout << "Copy assignment operator called: ClapTrap " << _Name << " is now " << other._Name << std::endl;
		_Name = other._Name;
		_AttackDamage = other._AttackDamage;
		_EnergyPoints = other._EnergyPoints;
		_HitPoints = other._HitPoints;
	}
	return *this;
}

void ClapTrap::attack(const std::string& target) {
	if (_EnergyPoints > 0 && _HitPoints > 0) {
		std::cout << "ClapTrap " << _Name << " attacks " << target << " causing " << _AttackDamage << " points of damage!" << std::endl;
		_EnergyPoints -= 1;
		std::cout << "ClapTrap " << _Name << ": -1 Energy points\n";
	}
	else
		std::cout << "ClapTrap " << _Name << " does not have enough hit points or energy points to attack" << std::endl;

}

void ClapTrap::takeDamage(unsigned int amount) {
	if (_HitPoints > 0 && _EnergyPoints > 0)
	{
		std::cout << "ClapTrap " << _Name << " has taken " << amount << " points of damage!" << std::endl;
		_HitPoints -= amount;
	}
	else
		std::cout << "ClapTrap " << _Name << " does not have hit points or energy points left" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_EnergyPoints > 0 && _HitPoints > 0)
	{
		std::cout << _Name << " repairs itself and gains " << amount << " points of health costing 1 energy point" << std::endl;
		_HitPoints += amount;
		_EnergyPoints -= 1;
	}
	else
		std::cout <<  _Name << " has no energy points or hit points left for repairing!" << std::endl;
}
