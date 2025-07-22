/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 11:18:20 by msuokas           #+#    #+#             */
/*   Updated: 2025/07/22 11:51:32 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap(){
	std::cout << "Default constructor called on FragTrap" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::~FragTrap() {
	std::cout << "Destructor called on FragTrap" << std::endl;
}

FragTrap::FragTrap(const std::string &setName): ClapTrap(setName) {
	std::cout << "Constructor with name called on FragTrap" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &other): ClapTrap(other) {
	std::cout << "Copy constructor called on FragTrap" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &other) {
	std::cout << "Copy assignment constructor called on FragTrap" << std::endl;
	if (this != &other) {
		ClapTrap::operator=(other);
	}
	return *this;
}

void FragTrap::highFivesGuys() {
	std::cout << "Gimme high five!" << std::endl;
}
