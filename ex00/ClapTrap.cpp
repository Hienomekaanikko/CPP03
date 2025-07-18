/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 11:00:25 by msuokas           #+#    #+#             */
/*   Updated: 2025/07/18 15:06:57 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name("Default"), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "Default constructor called." << std::endl;
}

ClapTrap::ClapTrap(const std::string& setName)
	: name(setName), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "Constructor with name called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
	: name(other.name), hitPoints(other.hitPoints), energyPoints(other.energyPoints), attackDamage(other.attackDamage)
{
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if (this == &other)
		return *this;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
	std::cout << "Copy assignment constructor called." << std::endl;
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->energyPoints > 0)
	{
		std::cout << this->name << " attacks " << target << " causing " << this->attackDamage << " points of damage to " << target << std::endl;
		this->energyPoints--;
	}
	else
		std::cout << this->name << " has no energy points left to attack! :(" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->name << " took " << amount << " points of damage! :(" << std::endl;
	if (this->hitPoints > 0)
		this->hitPoints -= amount;
	else
		std::cout << this->name << " is broken" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints > 0)
	{
		std::cout << this->name << " repaired itself and gained " << amount << " points with cost of 1 energy point!" << std::endl;
		this->energyPoints--;
		this->hitPoints += amount;
	}
	else
		std::cout << this->name << " has no energy points left to repair itself! :(" << std::endl;
}
























    // // Step 1: Self-assignment check
    // if (this == &other) {
    //     return *this; // If the same object, return *this (no changes made)
    // }

    // // Step 2: Copy data members
    // this->hitPoints = other.hitPoints;
    // this->energyPoints = other.energyPoints;
    // this->attackDamage = other.attackDamage;

    // // Note: `name` is a `const std::string`, so it will be automatically handled by assignment
    // // as strings manage their own memory (no need to worry about deletion).

    // // Step 3: Return *this to allow assignment chaining
    // return *this;
