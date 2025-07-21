/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 11:00:23 by msuokas           #+#    #+#             */
/*   Updated: 2025/07/21 14:52:43 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void){
	ClapTrap clapper1("Trapper");
	std::string target1 = "Targetti";

	for (int i = 0; i < 3; i++)
		clapper1.takeDamage(4);
	for (int i = 0; i < 2; i++)
		clapper1.beRepaired(2);
	for (int i = 0; i < 1; i++)
		clapper1.attack(target1);
}
