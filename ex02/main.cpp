/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 11:00:23 by msuokas           #+#    #+#             */
/*   Updated: 2025/07/22 11:51:56 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void){
	ClapTrap clapper1("Trapperi");
	ScavTrap scapper1("Scapperi");
	FragTrap flagger1("Flagediflag");
	std::string target1 = "Seppo";
	std::string target2 = "Jorma";
	std::string target3 = "Mirjami";

	for (int i = 0; i < 3; i++)
		clapper1.takeDamage(4);
	for (int i = 0; i < 2; i++)
		clapper1.beRepaired(2);
	for (int i = 0; i < 1; i++)
		clapper1.attack(target1);
	for (int i = 0; i < 3; i++)
		scapper1.takeDamage(4);
	for (int i = 0; i < 2; i++)
		scapper1.beRepaired(2);
	for (int i = 0; i < 1; i++)
		scapper1.attack(target2);
	scapper1.guardGate();
	for (int i = 0; i < 3; i++)
		flagger1.takeDamage(4);
	for (int i = 0; i < 2; i++)
		flagger1.beRepaired(2);
	for (int i = 0; i < 1; i++)
		flagger1.attack(target3);
	flagger1.highFivesGuys();
}
