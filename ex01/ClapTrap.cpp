/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 11:00:25 by msuokas           #+#    #+#             */
/*   Updated: 2025/07/22 10:46:03 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	std::cout << "Default constructor called on ClapTrap" << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "Destructor called on ClapTrap" << std::endl;
}

ClapTrap::ClapTrap(const std::string &setName): _name(setName){
	std::cout << "Constructor with name called ClapTrap" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other): _name(other._name), _energyPoints(other._energyPoints), _attackDamage(other._attackDamage), _hitPoints(other._hitPoints){
	std::cout << "Copy constructor called on ClapTrap" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &other)
		return *this;
	this->_attackDamage = other._attackDamage;
	this->_energyPoints = other._energyPoints;
	this->_hitPoints = other._hitPoints;
	return *this;
}

void	ClapTrap::attack(const std::string& target){
	if (_energyPoints > 0){
		std::cout << "💥 " << _name << ": attacks " << target << ", causing " << _attackDamage << " points of damage! 💥" << std::endl;
		_energyPoints--;
		std::cout << "🔋 " << _name << ": -1 energy points, " << _energyPoints << " energy points left. 🔋" << std::endl;
	}
	else
		std::cout << "💔 " << _name << "No energy points left to attack! 💔"<< std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (_hitPoints == 0) {
		std::cout << "🔥 " << _name << ": is already broken! 🔥" << std::endl;
		return;
	}

	if (amount >= _hitPoints) {
		_hitPoints = 0;
		std::cout << "💔🔥 " << _name << ": took " << amount << " pts of damage and broke down! 💔🔥" << std::endl;
	} else {
		_hitPoints -= amount;
		std::cout << "💔 " << _name << ": took " << amount << " pts of damage! " << _hitPoints << " hit points left. 💔" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount){
	if (_energyPoints > 0){
		_hitPoints += amount;
		_energyPoints--;
		std::cout << "🛠️  " << _name << ": repaired itself and restored " << amount << " hit points! 🛠️" << std::endl;
		std::cout << "🔋 " << _name << ": repair cost: -1 energy point! 🔋" << std::endl;
	}
	else
		std::cout << "💔 " << _name << ": No more energy points for repairs 💔" << std::endl;
}

// When ClapTrack attacks, it causes its target to lose <attack damage> hit points.
// When ClapTrap repairs itself, it gets <amount> hit points back. Attacking and repairing
// cost 1 energy point each. Of course, ClapTrap can’t do anything if it has no hit points
// or energy points left.
// In all of these member functions, you have to print a message to describe what happens. For example, the attack() function may display something like (of course, without
// the angle brackets):
// ClapTrap <name> attacks <target>, causing <damage> points of damage!
// The constructors and destructor must also display a message, so your peer-evaluators
// can easily see they have been called.
// Implement and turn in your own tests to ensure your code works as expected
