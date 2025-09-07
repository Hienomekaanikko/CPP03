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

ScavTrap::ScavTrap(): ClapTrap(){
	_Name = "ScavTrap";
	_HitPoints = 100;
	_EnergyPoints = 50;
	_AttackDamage = 20;
	std::cout << "Default constructor called on ScavTrap " << _Name << std::endl;
}

ScavTrap::ScavTrap(const std::string& name): ClapTrap(name){
	std::cout << "Constructor called on ScavTrap " << name << std::endl;
	_HitPoints = 100;
	_EnergyPoints = 50;
	_AttackDamage = 20;
}

ScavTrap::~ScavTrap() {
	std::cout << "Destructor called on ScavTrap " << _Name << std::endl;
}

void ScavTrap::guardGate(void) {
	if (_EnergyPoints > 0 && _HitPoints > 0)
		std::cout << "ScavTrap " << _Name << " is now in Gate keeper mode." << std::endl;
	else
		std::cout << "ScavTrap " << _Name << " has no energy points nor hit points for gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string& target) {
	if (_EnergyPoints > 0 && _HitPoints > 0) {
		std::cout << "ScavTrap " << _Name << " attacks " << target << " causing " << _AttackDamage << " points of damage!" << std::endl;
		_EnergyPoints -= 1;
		std::cout << "ScavTrap " << _Name << ": -1 Energy points\n";
	}
	else
		std::cout << "ScavTrap " << _Name << " does not have enough hit points or energy points to attack!" << std::endl;

}

ScavTrap::ScavTrap(const ScavTrap& other): ClapTrap(other) {
	std::cout << "Copy constructor called on ScavTrap " << _Name << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
	if (this != &other) {
		std::cout << "Copy assignment operator called: Scavtrap " << _Name << " is now " << other._Name << std::endl;
		ClapTrap::operator=(other);
	}
	return *this;
}
