/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 11:00:23 by msuokas           #+#    #+#             */
/*   Updated: 2025/07/22 10:57:23 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void){
	ClapTrap clapper1("Trapperi");
	ScavTrap scapper1("Scapperi");
	std::string target1 = "Targetti";

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
		scapper1.attack(target1);
	scapper1.guardGate();
}
