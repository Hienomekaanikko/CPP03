/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 16:35:01 by msuokas           #+#    #+#             */
/*   Updated: 2025/09/05 16:41:03 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


int	main(void)
{
	std::cout << "-------------------------\n";
	ClapTrap ct1("Esko");
	ClapTrap ct2("Jorma");

	std::cout << "\033[1;32m\nAttack/take damage tests: \n\n\033[0m";
 	ct1.attack("Jorma");
	ct2.takeDamage(2);
	ct2.attack("Esko");
	ct1.takeDamage(2);

	std::cout << "\n-------------------------\n";

	std::cout << "\033[1;32m\nRepairing tests: \n\n\033[0m";
	ct1.beRepaired(2);
	ct2.beRepaired(2);

	std::cout << "\n-------------------------\n";

	std::cout << "\033[1;32m\nUsing all energy points tests: \n\n\033[0m";

	std::cout << "Esko using all of his energy points to attack (has 8 now): \n\n";
	for (int i = 0; i < 9; i++) {
		ct1.attack("Jorma");
		ct2.takeDamage(1);
	}

	std::cout << "\n-------------------------\n";

	std::cout << "\033[1;32m\nJorma has now 2 hit points and 8 energy points. Using all energy points of Jorma for repairing: \n\n\033[0m";
	for (int i = 0; i < 10; i++) {
		ct2.beRepaired(1);
	}

	std::cout << "\n-------------------------\n";

	std::cout << "\033[1;32m\nTesting copy constructor (making a copy of 'Esko'): \n\n\033[0m";
	ClapTrap copy(ct1);

	std::cout << "\033[1;32m\nTrying to attack with the copy of Esko: \n\n\033[0m";

	copy.attack("test");

	std::cout << "\033[1;32m\nTesting copy assignment operator (copying values of 'Jorma' to the copy of'Esko'): \n\n\033[0m";
	copy = ct2;

	std::cout << "\033[1;32m\nTrying to attack after the copy assignment operator (Esko should now be Jorma): \n\n\033[0m";

	copy.attack("test");

	std::cout << "\n-------------------------\n";
}
