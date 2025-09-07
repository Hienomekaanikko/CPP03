/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 14:47:26 by msuokas           #+#    #+#             */
/*   Updated: 2025/09/05 15:43:15 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	std::cout << "Default constructor called on FragTrap " << _Name << std::endl;
	_HitPoints = 100;
	_EnergyPoints = 100;
	_AttackDamage = 30;
}

FragTrap::FragTrap(const std::string& name): ClapTrap(name){
	std::cout << "Constructor called on FragTrap " << name << std::endl;
	_Name = name;
	_HitPoints = 100;
	_EnergyPoints = 100;
	_AttackDamage = 30;
}

FragTrap::~FragTrap() {
	std::cout << "Destructor called on FragTrap " << _Name << std::endl;
}

void FragTrap::highFivesGuys(void) {
	if (_HitPoints > 0 && _EnergyPoints > 0)
		std::cout << "FragTrap " << _Name << ": Gimme a high five !" << std::endl;
	else
		std::cout << "FragTrap " << _Name << " has no more hit points or energy points left :(\n";
}

FragTrap::FragTrap(const FragTrap& other): ClapTrap(other) {
	std::cout << "Copy constructor called on FragTrap " << other._Name << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
	if (this != &other) {
		std::cout << "Copy assignment operator called: FragTrap " << _Name << " is now " << other._Name << std::endl;
		ClapTrap::operator=(other);
	}
	return *this;
}
