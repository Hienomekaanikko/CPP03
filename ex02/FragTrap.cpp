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

FragTrap::FragTrap() {
	std::cout << "FragTrap: Constructor called without a name" << std::endl;
}

FragTrap::FragTrap(const std::string& name) {
	std::cout << "FragTrap: Constructor with name " << name << " called";
	_Name = name;
	_HitPoints = 100;
	_EnergyPoints = 100;
	_AttackDamage = 30;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap: Destructor called on " << _Name << std::endl;
}

void FragTrap::highFivesGuys(void) {
	if (_HitPoints > 0)
		std::cout << "FragTrap: " << _Name << ": Gimme a high five !" << std::endl;
	else
		std::cout << "FragTrap: " << _Name << ": is too broken to give a high five :(\n";
}

FragTrap::FragTrap(const FragTrap& other): ClapTrap(other) {
	std::cout << "FragTrap: " << _Name << ": copy constructor called." << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
	if (this != &other) {
		ClapTrap::operator=(other);
		std::cout << "FragTrap: " << _Name << ": copy assignment operator called." << std::endl;
	}
	return *this;
}
