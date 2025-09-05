/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 16:35:01 by msuokas           #+#    #+#             */
/*   Updated: 2025/09/05 13:29:51 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


int	main(void)
{
	std::cout << "-------------------------\n\n";
	ClapTrap ct1("Esko");
	ClapTrap ct2("Jorma");

	std::cout << "\nAttack/take damage tests: \n\n";
 	ct1.attack("Jorma");
	ct2.takeDamage(2);
	ct2.attack("Esko");
	ct1.takeDamage(2);

	std::cout << "\n-------------------------\n\n";

	std::cout << "Repairing tests: \n\n";
	ct1.beRepaired(2);
	ct2.beRepaired(2);

	std::cout << "\n-------------------------\n\n";

	std::cout << "Using all energy points tests:\n\n";

	std::cout << "Esko using all of his energy points to attack (has 8 now): \n\n";
	for (int i = 0; i < 9; i++) {
		ct1.attack("Jorma");
		ct2.takeDamage(1);
	}

	std::cout << "\n-------------------------\n\n";

	std::cout << "Jorma has now 2 hit points and 8 energy points. Using all energy points of Jorma for repairing: \n\n";
	for (int i = 0; i < 10; i++) {
		ct2.beRepaired(1);
	}

	std::cout << "\n-------------------------\n\n";

	std::cout << "Testing copy constructor (making a copy of 'Esko'):\n";
	ClapTrap copy(ct1);
	copy.attack("test");

	std::cout << "\nTesting copy assignment operator (copying data of 'Jorma' to copy): \n";
	copy = ct2;
	copy.attack("test");

	std::cout << "\n-------------------------\n\n";
}
